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


void FUN_0014eba0_part79(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x174d00u: goto label_174d00;
        case 0x174d04u: goto label_174d04;
        case 0x174d08u: goto label_174d08;
        case 0x174d0cu: goto label_174d0c;
        case 0x174d10u: goto label_174d10;
        case 0x174d14u: goto label_174d14;
        case 0x174d18u: goto label_174d18;
        case 0x174d1cu: goto label_174d1c;
        case 0x174d20u: goto label_174d20;
        case 0x174d24u: goto label_174d24;
        case 0x174d28u: goto label_174d28;
        case 0x174d2cu: goto label_174d2c;
        case 0x174d30u: goto label_174d30;
        case 0x174d34u: goto label_174d34;
        case 0x174d38u: goto label_174d38;
        case 0x174d3cu: goto label_174d3c;
        case 0x174d40u: goto label_174d40;
        case 0x174d44u: goto label_174d44;
        case 0x174d48u: goto label_174d48;
        case 0x174d4cu: goto label_174d4c;
        case 0x174d50u: goto label_174d50;
        case 0x174d54u: goto label_174d54;
        case 0x174d58u: goto label_174d58;
        case 0x174d5cu: goto label_174d5c;
        case 0x174d60u: goto label_174d60;
        case 0x174d64u: goto label_174d64;
        case 0x174d68u: goto label_174d68;
        case 0x174d6cu: goto label_174d6c;
        case 0x174d70u: goto label_174d70;
        case 0x174d74u: goto label_174d74;
        case 0x174d78u: goto label_174d78;
        case 0x174d7cu: goto label_174d7c;
        case 0x174d80u: goto label_174d80;
        case 0x174d84u: goto label_174d84;
        case 0x174d88u: goto label_174d88;
        case 0x174d8cu: goto label_174d8c;
        case 0x174d90u: goto label_174d90;
        case 0x174d94u: goto label_174d94;
        case 0x174d98u: goto label_174d98;
        case 0x174d9cu: goto label_174d9c;
        case 0x174da0u: goto label_174da0;
        case 0x174da4u: goto label_174da4;
        case 0x174da8u: goto label_174da8;
        case 0x174dacu: goto label_174dac;
        case 0x174db0u: goto label_174db0;
        case 0x174db4u: goto label_174db4;
        case 0x174db8u: goto label_174db8;
        case 0x174dbcu: goto label_174dbc;
        case 0x174dc0u: goto label_174dc0;
        case 0x174dc4u: goto label_174dc4;
        case 0x174dc8u: goto label_174dc8;
        case 0x174dccu: goto label_174dcc;
        case 0x174dd0u: goto label_174dd0;
        case 0x174dd4u: goto label_174dd4;
        case 0x174dd8u: goto label_174dd8;
        case 0x174ddcu: goto label_174ddc;
        case 0x174de0u: goto label_174de0;
        case 0x174de4u: goto label_174de4;
        case 0x174de8u: goto label_174de8;
        case 0x174decu: goto label_174dec;
        case 0x174df0u: goto label_174df0;
        case 0x174df4u: goto label_174df4;
        case 0x174df8u: goto label_174df8;
        case 0x174dfcu: goto label_174dfc;
        case 0x174e00u: goto label_174e00;
        case 0x174e04u: goto label_174e04;
        case 0x174e08u: goto label_174e08;
        case 0x174e0cu: goto label_174e0c;
        case 0x174e10u: goto label_174e10;
        case 0x174e14u: goto label_174e14;
        case 0x174e18u: goto label_174e18;
        case 0x174e1cu: goto label_174e1c;
        case 0x174e20u: goto label_174e20;
        case 0x174e24u: goto label_174e24;
        case 0x174e28u: goto label_174e28;
        case 0x174e2cu: goto label_174e2c;
        case 0x174e30u: goto label_174e30;
        case 0x174e34u: goto label_174e34;
        case 0x174e38u: goto label_174e38;
        case 0x174e3cu: goto label_174e3c;
        case 0x174e40u: goto label_174e40;
        case 0x174e44u: goto label_174e44;
        case 0x174e48u: goto label_174e48;
        case 0x174e4cu: goto label_174e4c;
        case 0x174e50u: goto label_174e50;
        case 0x174e54u: goto label_174e54;
        case 0x174e58u: goto label_174e58;
        case 0x174e5cu: goto label_174e5c;
        case 0x174e60u: goto label_174e60;
        case 0x174e64u: goto label_174e64;
        case 0x174e68u: goto label_174e68;
        case 0x174e6cu: goto label_174e6c;
        case 0x174e70u: goto label_174e70;
        case 0x174e74u: goto label_174e74;
        case 0x174e78u: goto label_174e78;
        case 0x174e7cu: goto label_174e7c;
        case 0x174e80u: goto label_174e80;
        case 0x174e84u: goto label_174e84;
        case 0x174e88u: goto label_174e88;
        case 0x174e8cu: goto label_174e8c;
        case 0x174e90u: goto label_174e90;
        case 0x174e94u: goto label_174e94;
        case 0x174e98u: goto label_174e98;
        case 0x174e9cu: goto label_174e9c;
        case 0x174ea0u: goto label_174ea0;
        case 0x174ea4u: goto label_174ea4;
        case 0x174ea8u: goto label_174ea8;
        case 0x174eacu: goto label_174eac;
        case 0x174eb0u: goto label_174eb0;
        case 0x174eb4u: goto label_174eb4;
        case 0x174eb8u: goto label_174eb8;
        case 0x174ebcu: goto label_174ebc;
        case 0x174ec0u: goto label_174ec0;
        case 0x174ec4u: goto label_174ec4;
        case 0x174ec8u: goto label_174ec8;
        case 0x174eccu: goto label_174ecc;
        case 0x174ed0u: goto label_174ed0;
        case 0x174ed4u: goto label_174ed4;
        case 0x174ed8u: goto label_174ed8;
        case 0x174edcu: goto label_174edc;
        case 0x174ee0u: goto label_174ee0;
        case 0x174ee4u: goto label_174ee4;
        case 0x174ee8u: goto label_174ee8;
        case 0x174eecu: goto label_174eec;
        case 0x174ef0u: goto label_174ef0;
        case 0x174ef4u: goto label_174ef4;
        case 0x174ef8u: goto label_174ef8;
        case 0x174efcu: goto label_174efc;
        case 0x174f00u: goto label_174f00;
        case 0x174f04u: goto label_174f04;
        case 0x174f08u: goto label_174f08;
        case 0x174f0cu: goto label_174f0c;
        case 0x174f10u: goto label_174f10;
        case 0x174f14u: goto label_174f14;
        case 0x174f18u: goto label_174f18;
        case 0x174f1cu: goto label_174f1c;
        case 0x174f20u: goto label_174f20;
        case 0x174f24u: goto label_174f24;
        case 0x174f28u: goto label_174f28;
        case 0x174f2cu: goto label_174f2c;
        case 0x174f30u: goto label_174f30;
        case 0x174f34u: goto label_174f34;
        case 0x174f38u: goto label_174f38;
        case 0x174f3cu: goto label_174f3c;
        case 0x174f40u: goto label_174f40;
        case 0x174f44u: goto label_174f44;
        case 0x174f48u: goto label_174f48;
        case 0x174f4cu: goto label_174f4c;
        case 0x174f50u: goto label_174f50;
        case 0x174f54u: goto label_174f54;
        case 0x174f58u: goto label_174f58;
        case 0x174f5cu: goto label_174f5c;
        case 0x174f60u: goto label_174f60;
        case 0x174f64u: goto label_174f64;
        case 0x174f68u: goto label_174f68;
        case 0x174f6cu: goto label_174f6c;
        case 0x174f70u: goto label_174f70;
        case 0x174f74u: goto label_174f74;
        case 0x174f78u: goto label_174f78;
        case 0x174f7cu: goto label_174f7c;
        case 0x174f80u: goto label_174f80;
        case 0x174f84u: goto label_174f84;
        case 0x174f88u: goto label_174f88;
        case 0x174f8cu: goto label_174f8c;
        case 0x174f90u: goto label_174f90;
        case 0x174f94u: goto label_174f94;
        case 0x174f98u: goto label_174f98;
        case 0x174f9cu: goto label_174f9c;
        case 0x174fa0u: goto label_174fa0;
        case 0x174fa4u: goto label_174fa4;
        case 0x174fa8u: goto label_174fa8;
        case 0x174facu: goto label_174fac;
        case 0x174fb0u: goto label_174fb0;
        case 0x174fb4u: goto label_174fb4;
        case 0x174fb8u: goto label_174fb8;
        case 0x174fbcu: goto label_174fbc;
        case 0x174fc0u: goto label_174fc0;
        case 0x174fc4u: goto label_174fc4;
        case 0x174fc8u: goto label_174fc8;
        case 0x174fccu: goto label_174fcc;
        case 0x174fd0u: goto label_174fd0;
        case 0x174fd4u: goto label_174fd4;
        case 0x174fd8u: goto label_174fd8;
        case 0x174fdcu: goto label_174fdc;
        case 0x174fe0u: goto label_174fe0;
        case 0x174fe4u: goto label_174fe4;
        case 0x174fe8u: goto label_174fe8;
        case 0x174fecu: goto label_174fec;
        case 0x174ff0u: goto label_174ff0;
        case 0x174ff4u: goto label_174ff4;
        case 0x174ff8u: goto label_174ff8;
        case 0x174ffcu: goto label_174ffc;
        case 0x175000u: goto label_175000;
        case 0x175004u: goto label_175004;
        case 0x175008u: goto label_175008;
        case 0x17500cu: goto label_17500c;
        case 0x175010u: goto label_175010;
        case 0x175014u: goto label_175014;
        case 0x175018u: goto label_175018;
        case 0x17501cu: goto label_17501c;
        case 0x175020u: goto label_175020;
        case 0x175024u: goto label_175024;
        case 0x175028u: goto label_175028;
        case 0x17502cu: goto label_17502c;
        case 0x175030u: goto label_175030;
        case 0x175034u: goto label_175034;
        case 0x175038u: goto label_175038;
        case 0x17503cu: goto label_17503c;
        case 0x175040u: goto label_175040;
        case 0x175044u: goto label_175044;
        case 0x175048u: goto label_175048;
        case 0x17504cu: goto label_17504c;
        case 0x175050u: goto label_175050;
        case 0x175054u: goto label_175054;
        case 0x175058u: goto label_175058;
        case 0x17505cu: goto label_17505c;
        case 0x175060u: goto label_175060;
        case 0x175064u: goto label_175064;
        case 0x175068u: goto label_175068;
        case 0x17506cu: goto label_17506c;
        case 0x175070u: goto label_175070;
        case 0x175074u: goto label_175074;
        case 0x175078u: goto label_175078;
        case 0x17507cu: goto label_17507c;
        case 0x175080u: goto label_175080;
        case 0x175084u: goto label_175084;
        case 0x175088u: goto label_175088;
        case 0x17508cu: goto label_17508c;
        case 0x175090u: goto label_175090;
        case 0x175094u: goto label_175094;
        case 0x175098u: goto label_175098;
        case 0x17509cu: goto label_17509c;
        case 0x1750a0u: goto label_1750a0;
        case 0x1750a4u: goto label_1750a4;
        case 0x1750a8u: goto label_1750a8;
        case 0x1750acu: goto label_1750ac;
        case 0x1750b0u: goto label_1750b0;
        case 0x1750b4u: goto label_1750b4;
        case 0x1750b8u: goto label_1750b8;
        case 0x1750bcu: goto label_1750bc;
        case 0x1750c0u: goto label_1750c0;
        case 0x1750c4u: goto label_1750c4;
        case 0x1750c8u: goto label_1750c8;
        case 0x1750ccu: goto label_1750cc;
        case 0x1750d0u: goto label_1750d0;
        case 0x1750d4u: goto label_1750d4;
        case 0x1750d8u: goto label_1750d8;
        case 0x1750dcu: goto label_1750dc;
        case 0x1750e0u: goto label_1750e0;
        case 0x1750e4u: goto label_1750e4;
        case 0x1750e8u: goto label_1750e8;
        case 0x1750ecu: goto label_1750ec;
        case 0x1750f0u: goto label_1750f0;
        case 0x1750f4u: goto label_1750f4;
        case 0x1750f8u: goto label_1750f8;
        case 0x1750fcu: goto label_1750fc;
        case 0x175100u: goto label_175100;
        case 0x175104u: goto label_175104;
        case 0x175108u: goto label_175108;
        case 0x17510cu: goto label_17510c;
        case 0x175110u: goto label_175110;
        case 0x175114u: goto label_175114;
        case 0x175118u: goto label_175118;
        case 0x17511cu: goto label_17511c;
        case 0x175120u: goto label_175120;
        case 0x175124u: goto label_175124;
        case 0x175128u: goto label_175128;
        case 0x17512cu: goto label_17512c;
        case 0x175130u: goto label_175130;
        case 0x175134u: goto label_175134;
        case 0x175138u: goto label_175138;
        case 0x17513cu: goto label_17513c;
        case 0x175140u: goto label_175140;
        case 0x175144u: goto label_175144;
        case 0x175148u: goto label_175148;
        case 0x17514cu: goto label_17514c;
        case 0x175150u: goto label_175150;
        case 0x175154u: goto label_175154;
        case 0x175158u: goto label_175158;
        case 0x17515cu: goto label_17515c;
        case 0x175160u: goto label_175160;
        case 0x175164u: goto label_175164;
        case 0x175168u: goto label_175168;
        case 0x17516cu: goto label_17516c;
        case 0x175170u: goto label_175170;
        case 0x175174u: goto label_175174;
        case 0x175178u: goto label_175178;
        case 0x17517cu: goto label_17517c;
        case 0x175180u: goto label_175180;
        case 0x175184u: goto label_175184;
        case 0x175188u: goto label_175188;
        case 0x17518cu: goto label_17518c;
        case 0x175190u: goto label_175190;
        case 0x175194u: goto label_175194;
        case 0x175198u: goto label_175198;
        case 0x17519cu: goto label_17519c;
        case 0x1751a0u: goto label_1751a0;
        case 0x1751a4u: goto label_1751a4;
        case 0x1751a8u: goto label_1751a8;
        case 0x1751acu: goto label_1751ac;
        case 0x1751b0u: goto label_1751b0;
        case 0x1751b4u: goto label_1751b4;
        case 0x1751b8u: goto label_1751b8;
        case 0x1751bcu: goto label_1751bc;
        case 0x1751c0u: goto label_1751c0;
        case 0x1751c4u: goto label_1751c4;
        case 0x1751c8u: goto label_1751c8;
        case 0x1751ccu: goto label_1751cc;
        case 0x1751d0u: goto label_1751d0;
        case 0x1751d4u: goto label_1751d4;
        case 0x1751d8u: goto label_1751d8;
        case 0x1751dcu: goto label_1751dc;
        case 0x1751e0u: goto label_1751e0;
        case 0x1751e4u: goto label_1751e4;
        case 0x1751e8u: goto label_1751e8;
        case 0x1751ecu: goto label_1751ec;
        case 0x1751f0u: goto label_1751f0;
        case 0x1751f4u: goto label_1751f4;
        case 0x1751f8u: goto label_1751f8;
        case 0x1751fcu: goto label_1751fc;
        case 0x175200u: goto label_175200;
        case 0x175204u: goto label_175204;
        case 0x175208u: goto label_175208;
        case 0x17520cu: goto label_17520c;
        case 0x175210u: goto label_175210;
        case 0x175214u: goto label_175214;
        case 0x175218u: goto label_175218;
        case 0x17521cu: goto label_17521c;
        case 0x175220u: goto label_175220;
        case 0x175224u: goto label_175224;
        case 0x175228u: goto label_175228;
        case 0x17522cu: goto label_17522c;
        case 0x175230u: goto label_175230;
        case 0x175234u: goto label_175234;
        case 0x175238u: goto label_175238;
        case 0x17523cu: goto label_17523c;
        case 0x175240u: goto label_175240;
        case 0x175244u: goto label_175244;
        case 0x175248u: goto label_175248;
        case 0x17524cu: goto label_17524c;
        case 0x175250u: goto label_175250;
        case 0x175254u: goto label_175254;
        case 0x175258u: goto label_175258;
        case 0x17525cu: goto label_17525c;
        case 0x175260u: goto label_175260;
        case 0x175264u: goto label_175264;
        case 0x175268u: goto label_175268;
        case 0x17526cu: goto label_17526c;
        case 0x175270u: goto label_175270;
        case 0x175274u: goto label_175274;
        case 0x175278u: goto label_175278;
        case 0x17527cu: goto label_17527c;
        case 0x175280u: goto label_175280;
        case 0x175284u: goto label_175284;
        case 0x175288u: goto label_175288;
        case 0x17528cu: goto label_17528c;
        case 0x175290u: goto label_175290;
        case 0x175294u: goto label_175294;
        case 0x175298u: goto label_175298;
        case 0x17529cu: goto label_17529c;
        case 0x1752a0u: goto label_1752a0;
        case 0x1752a4u: goto label_1752a4;
        case 0x1752a8u: goto label_1752a8;
        case 0x1752acu: goto label_1752ac;
        case 0x1752b0u: goto label_1752b0;
        case 0x1752b4u: goto label_1752b4;
        case 0x1752b8u: goto label_1752b8;
        case 0x1752bcu: goto label_1752bc;
        case 0x1752c0u: goto label_1752c0;
        case 0x1752c4u: goto label_1752c4;
        case 0x1752c8u: goto label_1752c8;
        case 0x1752ccu: goto label_1752cc;
        case 0x1752d0u: goto label_1752d0;
        case 0x1752d4u: goto label_1752d4;
        case 0x1752d8u: goto label_1752d8;
        case 0x1752dcu: goto label_1752dc;
        case 0x1752e0u: goto label_1752e0;
        case 0x1752e4u: goto label_1752e4;
        case 0x1752e8u: goto label_1752e8;
        case 0x1752ecu: goto label_1752ec;
        case 0x1752f0u: goto label_1752f0;
        case 0x1752f4u: goto label_1752f4;
        case 0x1752f8u: goto label_1752f8;
        case 0x1752fcu: goto label_1752fc;
        case 0x175300u: goto label_175300;
        case 0x175304u: goto label_175304;
        case 0x175308u: goto label_175308;
        case 0x17530cu: goto label_17530c;
        case 0x175310u: goto label_175310;
        case 0x175314u: goto label_175314;
        case 0x175318u: goto label_175318;
        case 0x17531cu: goto label_17531c;
        case 0x175320u: goto label_175320;
        case 0x175324u: goto label_175324;
        case 0x175328u: goto label_175328;
        case 0x17532cu: goto label_17532c;
        case 0x175330u: goto label_175330;
        case 0x175334u: goto label_175334;
        case 0x175338u: goto label_175338;
        case 0x17533cu: goto label_17533c;
        case 0x175340u: goto label_175340;
        case 0x175344u: goto label_175344;
        case 0x175348u: goto label_175348;
        case 0x17534cu: goto label_17534c;
        case 0x175350u: goto label_175350;
        case 0x175354u: goto label_175354;
        case 0x175358u: goto label_175358;
        case 0x17535cu: goto label_17535c;
        case 0x175360u: goto label_175360;
        case 0x175364u: goto label_175364;
        case 0x175368u: goto label_175368;
        case 0x17536cu: goto label_17536c;
        case 0x175370u: goto label_175370;
        case 0x175374u: goto label_175374;
        case 0x175378u: goto label_175378;
        case 0x17537cu: goto label_17537c;
        case 0x175380u: goto label_175380;
        case 0x175384u: goto label_175384;
        case 0x175388u: goto label_175388;
        case 0x17538cu: goto label_17538c;
        case 0x175390u: goto label_175390;
        case 0x175394u: goto label_175394;
        case 0x175398u: goto label_175398;
        case 0x17539cu: goto label_17539c;
        case 0x1753a0u: goto label_1753a0;
        case 0x1753a4u: goto label_1753a4;
        case 0x1753a8u: goto label_1753a8;
        case 0x1753acu: goto label_1753ac;
        case 0x1753b0u: goto label_1753b0;
        case 0x1753b4u: goto label_1753b4;
        case 0x1753b8u: goto label_1753b8;
        case 0x1753bcu: goto label_1753bc;
        case 0x1753c0u: goto label_1753c0;
        case 0x1753c4u: goto label_1753c4;
        case 0x1753c8u: goto label_1753c8;
        case 0x1753ccu: goto label_1753cc;
        case 0x1753d0u: goto label_1753d0;
        case 0x1753d4u: goto label_1753d4;
        case 0x1753d8u: goto label_1753d8;
        case 0x1753dcu: goto label_1753dc;
        case 0x1753e0u: goto label_1753e0;
        case 0x1753e4u: goto label_1753e4;
        case 0x1753e8u: goto label_1753e8;
        case 0x1753ecu: goto label_1753ec;
        case 0x1753f0u: goto label_1753f0;
        case 0x1753f4u: goto label_1753f4;
        case 0x1753f8u: goto label_1753f8;
        case 0x1753fcu: goto label_1753fc;
        case 0x175400u: goto label_175400;
        case 0x175404u: goto label_175404;
        case 0x175408u: goto label_175408;
        case 0x17540cu: goto label_17540c;
        case 0x175410u: goto label_175410;
        case 0x175414u: goto label_175414;
        case 0x175418u: goto label_175418;
        case 0x17541cu: goto label_17541c;
        case 0x175420u: goto label_175420;
        case 0x175424u: goto label_175424;
        case 0x175428u: goto label_175428;
        case 0x17542cu: goto label_17542c;
        case 0x175430u: goto label_175430;
        case 0x175434u: goto label_175434;
        case 0x175438u: goto label_175438;
        case 0x17543cu: goto label_17543c;
        case 0x175440u: goto label_175440;
        case 0x175444u: goto label_175444;
        case 0x175448u: goto label_175448;
        case 0x17544cu: goto label_17544c;
        case 0x175450u: goto label_175450;
        case 0x175454u: goto label_175454;
        case 0x175458u: goto label_175458;
        case 0x17545cu: goto label_17545c;
        case 0x175460u: goto label_175460;
        case 0x175464u: goto label_175464;
        case 0x175468u: goto label_175468;
        case 0x17546cu: goto label_17546c;
        case 0x175470u: goto label_175470;
        case 0x175474u: goto label_175474;
        case 0x175478u: goto label_175478;
        case 0x17547cu: goto label_17547c;
        case 0x175480u: goto label_175480;
        case 0x175484u: goto label_175484;
        case 0x175488u: goto label_175488;
        case 0x17548cu: goto label_17548c;
        case 0x175490u: goto label_175490;
        case 0x175494u: goto label_175494;
        case 0x175498u: goto label_175498;
        case 0x17549cu: goto label_17549c;
        case 0x1754a0u: goto label_1754a0;
        case 0x1754a4u: goto label_1754a4;
        case 0x1754a8u: goto label_1754a8;
        case 0x1754acu: goto label_1754ac;
        case 0x1754b0u: goto label_1754b0;
        case 0x1754b4u: goto label_1754b4;
        case 0x1754b8u: goto label_1754b8;
        case 0x1754bcu: goto label_1754bc;
        case 0x1754c0u: goto label_1754c0;
        case 0x1754c4u: goto label_1754c4;
        case 0x1754c8u: goto label_1754c8;
        case 0x1754ccu: goto label_1754cc;
        default: return;
    }

label_174d00:
    // 0x174d00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_174d04:
    // 0x174d04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x174d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_174d08:
    // 0x174d08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_174d0c:
    // 0x174d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_174d10:
    // 0x174d10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_174d14:
    // 0x174d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_174d18:
    // 0x174d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_174d1c:
    // 0x174d1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d20:
    // 0x174d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174d24:
    // 0x174d24: 0xc08972c  jal         func_225CB0
label_174d28:
    if (ctx->pc == 0x174D28u) {
        ctx->pc = 0x174D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D24u;
        // 0x174d28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D2Cu;
        goto label_174d2c;
    }
    ctx->pc = 0x174D24u;
    SET_GPR_U32(ctx, 31, 0x174D2Cu);
    ctx->pc = 0x174D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D24u;
    // 0x174d28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CB0u;
    { ctx->pc = 0x225cb0; return; }
    ctx->pc = 0x174D2Cu;
label_174d2c:
    // 0x174d2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x174d2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d30:
    // 0x174d30: 0xc08a004  jal         func_228010
label_174d34:
    if (ctx->pc == 0x174D34u) {
        ctx->pc = 0x174D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D30u;
        // 0x174d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D38u;
        goto label_174d38;
    }
    ctx->pc = 0x174D30u;
    SET_GPR_U32(ctx, 31, 0x174D38u);
    ctx->pc = 0x174D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D30u;
    // 0x174d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x174D38u;
label_174d38:
    // 0x174d38: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174d38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d3c:
    // 0x174d3c: 0xc08972c  jal         func_225CB0
label_174d40:
    if (ctx->pc == 0x174D40u) {
        ctx->pc = 0x174D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D3Cu;
        // 0x174d40: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D44u;
        goto label_174d44;
    }
    ctx->pc = 0x174D3Cu;
    SET_GPR_U32(ctx, 31, 0x174D44u);
    ctx->pc = 0x174D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D3Cu;
    // 0x174d40: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CB0u;
    { ctx->pc = 0x225cb0; return; }
    ctx->pc = 0x174D44u;
label_174d44:
    // 0x174d44: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x174d44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d48:
    // 0x174d48: 0xc08a004  jal         func_228010
label_174d4c:
    if (ctx->pc == 0x174D4Cu) {
        ctx->pc = 0x174D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D48u;
        // 0x174d4c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D50u;
        goto label_174d50;
    }
    ctx->pc = 0x174D48u;
    SET_GPR_U32(ctx, 31, 0x174D50u);
    ctx->pc = 0x174D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D48u;
    // 0x174d4c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x174D50u;
label_174d50:
    // 0x174d50: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x174d50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d54:
    // 0x174d54: 0x3d5082b  sltu        $at, $fp, $s5
    ctx->pc = 0x174d54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_174d58:
    // 0x174d58: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_174d5c:
    if (ctx->pc == 0x174D5Cu) {
        ctx->pc = 0x174D60u;
        goto label_174d60;
    }
    ctx->pc = 0x174D58u;
    {
        const bool branch_taken_0x174d58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d58) {
            ctx->pc = 0x174D84u;
            goto label_174d84;
        }
    }
    ctx->pc = 0x174D60u;
label_174d60:
    // 0x174d60: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_174d64:
    // 0x174d64: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x174d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_174d68:
    // 0x174d68: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_174d6c:
    if (ctx->pc == 0x174D6Cu) {
        ctx->pc = 0x174D70u;
        goto label_174d70;
    }
    ctx->pc = 0x174D68u;
    {
        const bool branch_taken_0x174d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x174d68) {
            ctx->pc = 0x174D84u;
            goto label_174d84;
        }
    }
    ctx->pc = 0x174D70u;
label_174d70:
    // 0x174d70: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_174d74:
    // 0x174d74: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_174d78:
    if (ctx->pc == 0x174D78u) {
        ctx->pc = 0x174D7Cu;
        goto label_174d7c;
    }
    ctx->pc = 0x174D74u;
    {
        const bool branch_taken_0x174d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x174d74) {
            ctx->pc = 0x174D84u;
            goto label_174d84;
        }
    }
    ctx->pc = 0x174D7Cu;
label_174d7c:
    // 0x174d7c: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_174d80:
    if (ctx->pc == 0x174D80u) {
        ctx->pc = 0x174D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D7Cu;
        // 0x174d80: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D84u;
        goto label_174d84;
    }
    ctx->pc = 0x174D7Cu;
    {
        const bool branch_taken_0x174d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D7Cu;
        // 0x174d80: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d7c) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174D84u;
label_174d84:
    // 0x174d84: 0x0  nop
    ctx->pc = 0x174d84u;
    // NOP
label_174d88:
    // 0x174d88: 0x3d5082b  sltu        $at, $fp, $s5
    ctx->pc = 0x174d88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_174d8c:
    // 0x174d8c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_174d90:
    if (ctx->pc == 0x174D90u) {
        ctx->pc = 0x174D94u;
        goto label_174d94;
    }
    ctx->pc = 0x174D8Cu;
    {
        const bool branch_taken_0x174d8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d8c) {
            ctx->pc = 0x174E48u;
            goto label_174e48;
        }
    }
    ctx->pc = 0x174D94u;
label_174d94:
    // 0x174d94: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_174d98:
    // 0x174d98: 0x1472002b  bne         $v1, $s2, . + 4 + (0x2B << 2)
label_174d9c:
    if (ctx->pc == 0x174D9Cu) {
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D98u;
        // 0x174d9c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DA0u;
        goto label_174da0;
    }
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D98u;
        // 0x174d9c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174E48u;
            goto label_174e48;
        }
    }
    ctx->pc = 0x174DA0u;
label_174da0:
    // 0x174da0: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_174da4:
    // 0x174da4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_174da8:
    // 0x174da8: 0x90630680  lbu         $v1, 0x680($v1)
    ctx->pc = 0x174da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1664)));
label_174dac:
    // 0x174dac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_174db0:
    if (ctx->pc == 0x174DB0u) {
        ctx->pc = 0x174DB4u;
        goto label_174db4;
    }
    ctx->pc = 0x174DACu;
    {
        const bool branch_taken_0x174dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174dac) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174DB4u;
label_174db4:
    // 0x174db4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174db8:
    // 0x174db8: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_174dbc:
    if (ctx->pc == 0x174DBCu) {
        ctx->pc = 0x174DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DB8u;
        // 0x174dbc: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DC0u;
        goto label_174dc0;
    }
    ctx->pc = 0x174DB8u;
    {
        const bool branch_taken_0x174db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DB8u;
        // 0x174dbc: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174db8) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174DC0u;
label_174dc0:
    // 0x174dc0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_174dc4:
    if (ctx->pc == 0x174DC4u) {
        ctx->pc = 0x174DC8u;
        goto label_174dc8;
    }
    ctx->pc = 0x174DC0u;
    {
        const bool branch_taken_0x174dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x174dc0) {
            ctx->pc = 0x174E40u;
            goto label_174e40;
        }
    }
    ctx->pc = 0x174DC8u;
label_174dc8:
    // 0x174dc8: 0x86b30004  lh          $s3, 0x4($s5)
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_174dcc:
    // 0x174dcc: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
label_174dd0:
    if (ctx->pc == 0x174DD0u) {
        ctx->pc = 0x174DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DCCu;
        // 0x174dd0: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DD4u;
        goto label_174dd4;
    }
    ctx->pc = 0x174DCCu;
    {
        const bool branch_taken_0x174dcc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x174DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DCCu;
        // 0x174dd0: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dcc) {
            ctx->pc = 0x174E20u;
            goto label_174e20;
        }
    }
    ctx->pc = 0x174DD4u;
label_174dd4:
    // 0x174dd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174dd8:
    // 0x174dd8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_174ddc:
    if (ctx->pc == 0x174DDCu) {
        ctx->pc = 0x174DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD8u;
        // 0x174ddc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DE0u;
        goto label_174de0;
    }
    ctx->pc = 0x174DD8u;
    {
        const bool branch_taken_0x174dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD8u;
        // 0x174ddc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd8) {
            ctx->pc = 0x174E10u;
            goto label_174e10;
        }
    }
    ctx->pc = 0x174DE0u;
label_174de0:
    // 0x174de0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_174de4:
    if (ctx->pc == 0x174DE4u) {
        ctx->pc = 0x174DE8u;
        goto label_174de8;
    }
    ctx->pc = 0x174DE0u;
    {
        const bool branch_taken_0x174de0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174de0) {
            ctx->pc = 0x174DFCu;
            goto label_174dfc;
        }
    }
    ctx->pc = 0x174DE8u;
label_174de8:
    // 0x174de8: 0xc0890d0  jal         func_224340
label_174dec:
    if (ctx->pc == 0x174DECu) {
        ctx->pc = 0x174DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DE8u;
        // 0x174dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DF0u;
        goto label_174df0;
    }
    ctx->pc = 0x174DE8u;
    SET_GPR_U32(ctx, 31, 0x174DF0u);
    ctx->pc = 0x174DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DE8u;
    // 0x174dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224340u;
    { ctx->pc = 0x224340; return; }
    ctx->pc = 0x174DF0u;
label_174df0:
    // 0x174df0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_174df4:
    if (ctx->pc == 0x174DF4u) {
        ctx->pc = 0x174DF8u;
        goto label_174df8;
    }
    ctx->pc = 0x174DF0u;
    {
        const bool branch_taken_0x174df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174df0) {
            ctx->pc = 0x174DFCu;
            goto label_174dfc;
        }
    }
    ctx->pc = 0x174DF8u;
label_174df8:
    // 0x174df8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174dfc:
    // 0x174dfc: 0x0  nop
    ctx->pc = 0x174dfcu;
    // NOP
label_174e00:
    // 0x174e00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x174e00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_174e04:
    // 0x174e04: 0x293182a  slt         $v1, $s4, $s3
    ctx->pc = 0x174e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_174e08:
    // 0x174e08: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_174e0c:
    if (ctx->pc == 0x174E0Cu) {
        ctx->pc = 0x174E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E08u;
        // 0x174e0c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E10u;
        goto label_174e10;
    }
    ctx->pc = 0x174E08u;
    {
        const bool branch_taken_0x174e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E08u;
        // 0x174e0c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e08) {
            ctx->pc = 0x174DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174de0;
        }
    }
    ctx->pc = 0x174E10u;
label_174e10:
    // 0x174e10: 0x1620ffd1  bnez        $s1, . + 4 + (-0x2F << 2)
label_174e14:
    if (ctx->pc == 0x174E14u) {
        ctx->pc = 0x174E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E10u;
        // 0x174e14: 0x3d5082b  sltu        $at, $fp, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E18u;
        goto label_174e18;
    }
    ctx->pc = 0x174E10u;
    {
        const bool branch_taken_0x174e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E10u;
        // 0x174e14: 0x3d5082b  sltu        $at, $fp, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e10) {
            ctx->pc = 0x174D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d58;
        }
    }
    ctx->pc = 0x174E18u;
label_174e18:
    // 0x174e18: 0x1000ffce  b           . + 4 + (-0x32 << 2)
label_174e1c:
    if (ctx->pc == 0x174E1Cu) {
        ctx->pc = 0x174E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E18u;
        // 0x174e1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E20u;
        goto label_174e20;
    }
    ctx->pc = 0x174E18u;
    {
        const bool branch_taken_0x174e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E18u;
        // 0x174e1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e18) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174E20u;
label_174e20:
    // 0x174e20: 0xc0890d0  jal         func_224340
label_174e24:
    if (ctx->pc == 0x174E24u) {
        ctx->pc = 0x174E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E20u;
        // 0x174e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E28u;
        goto label_174e28;
    }
    ctx->pc = 0x174E20u;
    SET_GPR_U32(ctx, 31, 0x174E28u);
    ctx->pc = 0x174E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E20u;
    // 0x174e24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224340u;
    { ctx->pc = 0x224340; return; }
    ctx->pc = 0x174E28u;
label_174e28:
    // 0x174e28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_174e2c:
    if (ctx->pc == 0x174E2Cu) {
        ctx->pc = 0x174E30u;
        goto label_174e30;
    }
    ctx->pc = 0x174E28u;
    {
        const bool branch_taken_0x174e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e28) {
            ctx->pc = 0x174E34u;
            goto label_174e34;
        }
    }
    ctx->pc = 0x174E30u;
label_174e30:
    // 0x174e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174e34:
    // 0x174e34: 0x0  nop
    ctx->pc = 0x174e34u;
    // NOP
label_174e38:
    // 0x174e38: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
label_174e3c:
    if (ctx->pc == 0x174E3Cu) {
        ctx->pc = 0x174E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E38u;
        // 0x174e3c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E40u;
        goto label_174e40;
    }
    ctx->pc = 0x174E38u;
    {
        const bool branch_taken_0x174e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E38u;
        // 0x174e3c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e38) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174E40u;
label_174e40:
    // 0x174e40: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_174e44:
    if (ctx->pc == 0x174E44u) {
        ctx->pc = 0x174E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E40u;
        // 0x174e44: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E48u;
        goto label_174e48;
    }
    ctx->pc = 0x174E40u;
    {
        const bool branch_taken_0x174e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E40u;
        // 0x174e44: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e40) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174E48u;
label_174e48:
    // 0x174e48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174e4c:
    // 0x174e4c: 0x0  nop
    ctx->pc = 0x174e4cu;
    // NOP
label_174e50:
    // 0x174e50: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x174e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_174e54:
    // 0x174e54: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x174e54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_174e58:
    // 0x174e58: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
label_174e5c:
    if (ctx->pc == 0x174E5Cu) {
        ctx->pc = 0x174E60u;
        goto label_174e60;
    }
    ctx->pc = 0x174E58u;
    {
        const bool branch_taken_0x174e58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e58) {
            ctx->pc = 0x174ED8u;
            goto label_174ed8;
        }
    }
    ctx->pc = 0x174E60u;
label_174e60:
    // 0x174e60: 0x1472001a  bne         $v1, $s2, . + 4 + (0x1A << 2)
label_174e64:
    if (ctx->pc == 0x174E64u) {
        ctx->pc = 0x174E68u;
        goto label_174e68;
    }
    ctx->pc = 0x174E60u;
    {
        const bool branch_taken_0x174e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x174e60) {
            ctx->pc = 0x174ECCu;
            goto label_174ecc;
        }
    }
    ctx->pc = 0x174E68u;
label_174e68:
    // 0x174e68: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_174e6c:
    if (ctx->pc == 0x174E6Cu) {
        ctx->pc = 0x174E70u;
        goto label_174e70;
    }
    ctx->pc = 0x174E68u;
    {
        const bool branch_taken_0x174e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e68) {
            ctx->pc = 0x174ECCu;
            goto label_174ecc;
        }
    }
    ctx->pc = 0x174E70u;
label_174e70:
    // 0x174e70: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_174e74:
    if (ctx->pc == 0x174E74u) {
        ctx->pc = 0x174E78u;
        goto label_174e78;
    }
    ctx->pc = 0x174E70u;
    {
        const bool branch_taken_0x174e70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e70) {
            ctx->pc = 0x174EB0u;
            goto label_174eb0;
        }
    }
    ctx->pc = 0x174E78u;
label_174e78:
    // 0x174e78: 0x86c2000e  lh          $v0, 0xE($s6)
    ctx->pc = 0x174e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
label_174e7c:
    // 0x174e7c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_174e80:
    if (ctx->pc == 0x174E80u) {
        ctx->pc = 0x174E84u;
        goto label_174e84;
    }
    ctx->pc = 0x174E7Cu;
    {
        const bool branch_taken_0x174e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e7c) {
            ctx->pc = 0x174EB0u;
            goto label_174eb0;
        }
    }
    ctx->pc = 0x174E84u;
label_174e84:
    // 0x174e84: 0x86c30004  lh          $v1, 0x4($s6)
    ctx->pc = 0x174e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_174e88:
    // 0x174e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174e8c:
    // 0x174e8c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_174e90:
    if (ctx->pc == 0x174E90u) {
        ctx->pc = 0x174E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E8Cu;
        // 0x174e90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E94u;
        goto label_174e94;
    }
    ctx->pc = 0x174E8Cu;
    {
        const bool branch_taken_0x174e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E8Cu;
        // 0x174e90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e8c) {
            ctx->pc = 0x174EB0u;
            goto label_174eb0;
        }
    }
    ctx->pc = 0x174E94u;
label_174e94:
    // 0x174e94: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x174e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_174e98:
    // 0x174e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174e9c:
    // 0x174e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174ea0:
    // 0x174ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174ea4:
    // 0x174ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174ea8:
    // 0x174ea8: 0xc05d3e4  jal         func_174F90
label_174eac:
    if (ctx->pc == 0x174EACu) {
        ctx->pc = 0x174EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EA8u;
        // 0x174eac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174EB0u;
        goto label_174eb0;
    }
    ctx->pc = 0x174EA8u;
    SET_GPR_U32(ctx, 31, 0x174EB0u);
    ctx->pc = 0x174EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EA8u;
    // 0x174eac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    goto label_174f90;
    ctx->pc = 0x174EB0u;
label_174eb0:
    // 0x174eb0: 0x86c50006  lh          $a1, 0x6($s6)
    ctx->pc = 0x174eb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
label_174eb4:
    // 0x174eb4: 0x86c60008  lh          $a2, 0x8($s6)
    ctx->pc = 0x174eb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
label_174eb8:
    // 0x174eb8: 0x86c7000a  lh          $a3, 0xA($s6)
    ctx->pc = 0x174eb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
label_174ebc:
    // 0x174ebc: 0x86c8000c  lh          $t0, 0xC($s6)
    ctx->pc = 0x174ebcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
label_174ec0:
    // 0x174ec0: 0x86c9000e  lh          $t1, 0xE($s6)
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
label_174ec4:
    // 0x174ec4: 0xc05d3e4  jal         func_174F90
label_174ec8:
    if (ctx->pc == 0x174EC8u) {
        ctx->pc = 0x174EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EC4u;
        // 0x174ec8: 0x86c40004  lh          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174ECCu;
        goto label_174ecc;
    }
    ctx->pc = 0x174EC4u;
    SET_GPR_U32(ctx, 31, 0x174ECCu);
    ctx->pc = 0x174EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EC4u;
    // 0x174ec8: 0x86c40004  lh          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    goto label_174f90;
    ctx->pc = 0x174ECCu;
label_174ecc:
    // 0x174ecc: 0x0  nop
    ctx->pc = 0x174eccu;
    // NOP
label_174ed0:
    // 0x174ed0: 0x10000008  b           . + 4 + (0x8 << 2)
label_174ed4:
    if (ctx->pc == 0x174ED4u) {
        ctx->pc = 0x174ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ED0u;
        // 0x174ed4: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174ED8u;
        goto label_174ed8;
    }
    ctx->pc = 0x174ED0u;
    {
        const bool branch_taken_0x174ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ED0u;
        // 0x174ed4: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed0) {
            ctx->pc = 0x174EF4u;
            goto label_174ef4;
        }
    }
    ctx->pc = 0x174ED8u;
label_174ed8:
    // 0x174ed8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x174ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_174edc:
    // 0x174edc: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_174ee0:
    if (ctx->pc == 0x174EE0u) {
        ctx->pc = 0x174EE4u;
        goto label_174ee4;
    }
    ctx->pc = 0x174EDCu;
    {
        const bool branch_taken_0x174edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x174edc) {
            ctx->pc = 0x174F04u;
            goto label_174f04;
        }
    }
    ctx->pc = 0x174EE4u;
label_174ee4:
    // 0x174ee4: 0x86c30004  lh          $v1, 0x4($s6)
    ctx->pc = 0x174ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_174ee8:
    // 0x174ee8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_174eec:
    if (ctx->pc == 0x174EECu) {
        ctx->pc = 0x174EF0u;
        goto label_174ef0;
    }
    ctx->pc = 0x174EE8u;
    {
        const bool branch_taken_0x174ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x174ee8) {
            ctx->pc = 0x174F04u;
            goto label_174f04;
        }
    }
    ctx->pc = 0x174EF0u;
label_174ef0:
    // 0x174ef0: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x174ef0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_174ef4:
    // 0x174ef4: 0x0  nop
    ctx->pc = 0x174ef4u;
    // NOP
label_174ef8:
    // 0x174ef8: 0x2f6082b  sltu        $at, $s7, $s6
    ctx->pc = 0x174ef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_174efc:
    // 0x174efc: 0x1020ffd3  beqz        $at, . + 4 + (-0x2D << 2)
label_174f00:
    if (ctx->pc == 0x174F00u) {
        ctx->pc = 0x174F04u;
        goto label_174f04;
    }
    ctx->pc = 0x174EFCu;
    {
        const bool branch_taken_0x174efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174efc) {
            ctx->pc = 0x174E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174e4c;
        }
    }
    ctx->pc = 0x174F04u;
label_174f04:
    // 0x174f04: 0x0  nop
    ctx->pc = 0x174f04u;
    // NOP
label_174f08:
    // 0x174f08: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_174f0c:
    if (ctx->pc == 0x174F0Cu) {
        ctx->pc = 0x174F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F08u;
        // 0x174f0c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F10u;
        goto label_174f10;
    }
    ctx->pc = 0x174F08u;
    {
        const bool branch_taken_0x174f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F08u;
        // 0x174f0c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f08) {
            ctx->pc = 0x174F20u;
            goto label_174f20;
        }
    }
    ctx->pc = 0x174F10u;
label_174f10:
    // 0x174f10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174f14:
    // 0x174f14: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x174f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_174f18:
    // 0x174f18: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x174f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_174f1c:
    // 0x174f1c: 0xa0640680  sb          $a0, 0x680($v1)
    ctx->pc = 0x174f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1664), (uint8_t)GPR_U32(ctx, 4));
label_174f20:
    // 0x174f20: 0x3d5082b  sltu        $at, $fp, $s5
    ctx->pc = 0x174f20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_174f24:
    // 0x174f24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174f28:
    // 0x174f28: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_174f2c:
    if (ctx->pc == 0x174F2Cu) {
        ctx->pc = 0x174F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F28u;
        // 0x174f2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F30u;
        goto label_174f30;
    }
    ctx->pc = 0x174F28u;
    {
        const bool branch_taken_0x174f28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x174F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F28u;
        // 0x174f2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f28) {
            ctx->pc = 0x174F58u;
            goto label_174f58;
        }
    }
    ctx->pc = 0x174F30u;
label_174f30:
    // 0x174f30: 0x2f6082b  sltu        $at, $s7, $s6
    ctx->pc = 0x174f30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_174f34:
    // 0x174f34: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_174f38:
    if (ctx->pc == 0x174F38u) {
        ctx->pc = 0x174F3Cu;
        goto label_174f3c;
    }
    ctx->pc = 0x174F34u;
    {
        const bool branch_taken_0x174f34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174f34) {
            ctx->pc = 0x174F58u;
            goto label_174f58;
        }
    }
    ctx->pc = 0x174F3Cu;
label_174f3c:
    // 0x174f3c: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x174f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_174f40:
    // 0x174f40: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x174f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_174f44:
    // 0x174f44: 0x1464ff83  bne         $v1, $a0, . + 4 + (-0x7D << 2)
label_174f48:
    if (ctx->pc == 0x174F48u) {
        ctx->pc = 0x174F4Cu;
        goto label_174f4c;
    }
    ctx->pc = 0x174F44u;
    {
        const bool branch_taken_0x174f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x174f44) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174F4Cu;
label_174f4c:
    // 0x174f4c: 0x86c30004  lh          $v1, 0x4($s6)
    ctx->pc = 0x174f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_174f50:
    // 0x174f50: 0x1464ff80  bne         $v1, $a0, . + 4 + (-0x80 << 2)
label_174f54:
    if (ctx->pc == 0x174F54u) {
        ctx->pc = 0x174F58u;
        goto label_174f58;
    }
    ctx->pc = 0x174F50u;
    {
        const bool branch_taken_0x174f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x174f50) {
            ctx->pc = 0x174D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174d54;
        }
    }
    ctx->pc = 0x174F58u;
label_174f58:
    // 0x174f58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x174f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_174f5c:
    // 0x174f5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x174f5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_174f60:
    // 0x174f60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x174f60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_174f64:
    // 0x174f64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x174f64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_174f68:
    // 0x174f68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_174f6c:
    // 0x174f6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_174f70:
    // 0x174f70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174f74:
    // 0x174f74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174f78:
    // 0x174f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174f7c:
    // 0x174f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174f80:
    // 0x174f80: 0x3e00008  jr          $ra
label_174f84:
    if (ctx->pc == 0x174F84u) {
        ctx->pc = 0x174F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F80u;
        // 0x174f84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F88u;
        goto label_174f88;
    }
    ctx->pc = 0x174F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F80u;
        // 0x174f84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174F88u;
label_174f88:
    // 0x174f88: 0x0  nop
    ctx->pc = 0x174f88u;
    // NOP
label_174f8c:
    // 0x174f8c: 0x0  nop
    ctx->pc = 0x174f8cu;
    // NOP
label_174f90:
    // 0x174f90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_174f94:
    // 0x174f94: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_174f98:
    // 0x174f98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x174f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_174f9c:
    // 0x174f9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_174fa0:
    // 0x174fa0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x174fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_174fa4:
    // 0x174fa4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x174fa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_174fa8:
    // 0x174fa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_174fac:
    // 0x174fac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_174fb0:
    // 0x174fb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_174fb4:
    // 0x174fb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x174fb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174fb8:
    // 0x174fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_174fbc:
    // 0x174fbc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x174fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174fc0:
    // 0x174fc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_174fc4:
    // 0x174fc4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x174fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_174fc8:
    // 0x174fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174fcc:
    // 0x174fcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x174fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_174fd0:
    // 0x174fd0: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x174fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_174fd4:
    // 0x174fd4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x174fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_174fd8:
    // 0x174fd8: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
label_174fdc:
    if (ctx->pc == 0x174FDCu) {
        ctx->pc = 0x174FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FD8u;
        // 0x174fdc: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FE0u;
        goto label_174fe0;
    }
    ctx->pc = 0x174FD8u;
    {
        const bool branch_taken_0x174fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FD8u;
        // 0x174fdc: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fd8) {
            ctx->pc = 0x175190u;
            goto label_175190;
        }
    }
    ctx->pc = 0x174FE0u;
label_174fe0:
    // 0x174fe0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174fe4:
    // 0x174fe4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x174fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_174fe8:
    // 0x174fe8: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x174fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_174fec:
    // 0x174fec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_174ff0:
    if (ctx->pc == 0x174FF0u) {
        ctx->pc = 0x174FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FECu;
        // 0x174ff0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FF4u;
        goto label_174ff4;
    }
    ctx->pc = 0x174FECu;
    {
        const bool branch_taken_0x174fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x174FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FECu;
        // 0x174ff0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fec) {
            ctx->pc = 0x174FFCu;
            goto label_174ffc;
        }
    }
    ctx->pc = 0x174FF4u;
label_174ff4:
    // 0x174ff4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_174ff8:
    if (ctx->pc == 0x174FF8u) {
        ctx->pc = 0x174FFCu;
        goto label_174ffc;
    }
    ctx->pc = 0x174FF4u;
    {
        const bool branch_taken_0x174ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x174ff4) {
            ctx->pc = 0x175028u;
            goto label_175028;
        }
    }
    ctx->pc = 0x174FFCu;
label_174ffc:
    // 0x174ffc: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_175000:
    if (ctx->pc == 0x175000u) {
        ctx->pc = 0x175000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FFCu;
        // 0x175000: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175004u;
        goto label_175004;
    }
    ctx->pc = 0x174FFCu;
    {
        const bool branch_taken_0x174ffc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x175000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FFCu;
        // 0x175000: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ffc) {
            ctx->pc = 0x17502Cu;
            goto label_17502c;
        }
    }
    ctx->pc = 0x175004u;
label_175004:
    // 0x175004: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x175004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_175008:
    // 0x175008: 0x16630005  bne         $s3, $v1, . + 4 + (0x5 << 2)
label_17500c:
    if (ctx->pc == 0x17500Cu) {
        ctx->pc = 0x17500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175008u;
        // 0x17500c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175010u;
        goto label_175010;
    }
    ctx->pc = 0x175008u;
    {
        const bool branch_taken_0x175008 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x17500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175008u;
        // 0x17500c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175008) {
            ctx->pc = 0x175020u;
            goto label_175020;
        }
    }
    ctx->pc = 0x175010u;
label_175010:
    // 0x175010: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x175010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_175014:
    // 0x175014: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
label_175018:
    if (ctx->pc == 0x175018u) {
        ctx->pc = 0x17501Cu;
        goto label_17501c;
    }
    ctx->pc = 0x175014u;
    {
        const bool branch_taken_0x175014 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x175014) {
            ctx->pc = 0x175028u;
            goto label_175028;
        }
    }
    ctx->pc = 0x17501Cu;
label_17501c:
    // 0x17501c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17501cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175020:
    // 0x175020: 0x10000002  b           . + 4 + (0x2 << 2)
label_175024:
    if (ctx->pc == 0x175024u) {
        ctx->pc = 0x175028u;
        goto label_175028;
    }
    ctx->pc = 0x175020u;
    {
        const bool branch_taken_0x175020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175020) {
            ctx->pc = 0x17502Cu;
            goto label_17502c;
        }
    }
    ctx->pc = 0x175028u;
label_175028:
    // 0x175028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17502c:
    // 0x17502c: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_175030:
    if (ctx->pc == 0x175030u) {
        ctx->pc = 0x175034u;
        goto label_175034;
    }
    ctx->pc = 0x17502Cu;
    {
        const bool branch_taken_0x17502c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17502c) {
            ctx->pc = 0x175190u;
            goto label_175190;
        }
    }
    ctx->pc = 0x175034u;
label_175034:
    // 0x175034: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175038:
    // 0x175038: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
label_17503c:
    if (ctx->pc == 0x17503Cu) {
        ctx->pc = 0x17503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175038u;
        // 0x17503c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175040u;
        goto label_175040;
    }
    ctx->pc = 0x175038u;
    {
        const bool branch_taken_0x175038 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x17503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175038u;
        // 0x17503c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175038) {
            ctx->pc = 0x175048u;
            goto label_175048;
        }
    }
    ctx->pc = 0x175040u;
label_175040:
    // 0x175040: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
label_175044:
    if (ctx->pc == 0x175044u) {
        ctx->pc = 0x175048u;
        goto label_175048;
    }
    ctx->pc = 0x175040u;
    {
        const bool branch_taken_0x175040 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x175040) {
            ctx->pc = 0x175054u;
            goto label_175054;
        }
    }
    ctx->pc = 0x175048u;
label_175048:
    // 0x175048: 0xc089734  jal         func_225CD0
label_17504c:
    if (ctx->pc == 0x17504Cu) {
        ctx->pc = 0x175050u;
        goto label_175050;
    }
    ctx->pc = 0x175048u;
    SET_GPR_U32(ctx, 31, 0x175050u);
    ctx->pc = 0x225CD0u;
    { ctx->pc = 0x225cd0; return; }
    ctx->pc = 0x175050u;
label_175050:
    // 0x175050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x175050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175054:
    // 0x175054: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x175054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_175058:
    // 0x175058: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
label_17505c:
    if (ctx->pc == 0x17505Cu) {
        ctx->pc = 0x17505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175058u;
        // 0x17505c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175060u;
        goto label_175060;
    }
    ctx->pc = 0x175058u;
    {
        const bool branch_taken_0x175058 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x17505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175058u;
        // 0x17505c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175058) {
            ctx->pc = 0x17506Cu;
            goto label_17506c;
        }
    }
    ctx->pc = 0x175060u;
label_175060:
    // 0x175060: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x175060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_175064:
    // 0x175064: 0x16830002  bne         $s4, $v1, . + 4 + (0x2 << 2)
label_175068:
    if (ctx->pc == 0x175068u) {
        ctx->pc = 0x17506Cu;
        goto label_17506c;
    }
    ctx->pc = 0x175064u;
    {
        const bool branch_taken_0x175064 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x175064) {
            ctx->pc = 0x175070u;
            goto label_175070;
        }
    }
    ctx->pc = 0x17506Cu;
label_17506c:
    // 0x17506c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175070:
    // 0x175070: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_175074:
    if (ctx->pc == 0x175074u) {
        ctx->pc = 0x175074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175070u;
        // 0x175074: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175078u;
        goto label_175078;
    }
    ctx->pc = 0x175070u;
    {
        const bool branch_taken_0x175070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175070u;
        // 0x175074: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175070) {
            ctx->pc = 0x1750BCu;
            goto label_1750bc;
        }
    }
    ctx->pc = 0x175078u;
label_175078:
    // 0x175078: 0x27a300a4  addiu       $v1, $sp, 0xA4
    ctx->pc = 0x175078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_17507c:
    // 0x17507c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x17507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_175080:
    // 0x175080: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x175080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_175084:
    // 0x175084: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x175084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
label_175088:
    // 0x175088: 0xafb30090  sw          $s3, 0x90($sp)
    ctx->pc = 0x175088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 19));
label_17508c:
    // 0x17508c: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x17508cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
label_175090:
    // 0x175090: 0xafb10098  sw          $s1, 0x98($sp)
    ctx->pc = 0x175090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 17));
label_175094:
    // 0x175094: 0xafb7009c  sw          $s7, 0x9C($sp)
    ctx->pc = 0x175094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 23));
label_175098:
    // 0x175098: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x175098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_17509c:
    // 0x17509c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1750a0:
    // 0x1750a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1750a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1750a4:
    // 0x1750a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1750a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1750a8:
    // 0x1750a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1750ac:
    // 0x1750ac: 0x40f809  jalr        $v0
label_1750b0:
    if (ctx->pc == 0x1750B0u) {
        ctx->pc = 0x1750B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750ACu;
        // 0x1750b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1750B4u;
        goto label_1750b4;
    }
    ctx->pc = 0x1750ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1750B4u);
        ctx->pc = 0x1750B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750ACu;
        // 0x1750b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1750ACu, 0x1750B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1750B4u;
label_1750b4:
    // 0x1750b4: 0x10000037  b           . + 4 + (0x37 << 2)
label_1750b8:
    if (ctx->pc == 0x1750B8u) {
        ctx->pc = 0x1750B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750B4u;
        // 0x1750b8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1750BCu;
        goto label_1750bc;
    }
    ctx->pc = 0x1750B4u;
    {
        const bool branch_taken_0x1750b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750B4u;
        // 0x1750b8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750b4) {
            ctx->pc = 0x175194u;
            goto label_175194;
        }
    }
    ctx->pc = 0x1750BCu;
label_1750bc:
    // 0x1750bc: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
label_1750c0:
    if (ctx->pc == 0x1750C0u) {
        ctx->pc = 0x1750C4u;
        goto label_1750c4;
    }
    ctx->pc = 0x1750BCu;
    {
        const bool branch_taken_0x1750bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1750bc) {
            ctx->pc = 0x1750D0u;
            goto label_1750d0;
        }
    }
    ctx->pc = 0x1750C4u;
label_1750c4:
    // 0x1750c4: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x1750c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_1750c8:
    // 0x1750c8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1750c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1750cc:
    // 0x1750cc: 0xaf83858c  sw          $v1, -0x7A74($gp)
    ctx->pc = 0x1750ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
label_1750d0:
    // 0x1750d0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1750d4:
    if (ctx->pc == 0x1750D4u) {
        ctx->pc = 0x1750D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750D0u;
        // 0x1750d4: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1750D8u;
        goto label_1750d8;
    }
    ctx->pc = 0x1750D0u;
    {
        const bool branch_taken_0x1750d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1750D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750D0u;
        // 0x1750d4: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750d0) {
            ctx->pc = 0x175144u;
            goto label_175144;
        }
    }
    ctx->pc = 0x1750D8u;
label_1750d8:
    // 0x1750d8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1750d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1750dc:
    // 0x1750dc: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_1750e0:
    // 0x1750e0: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1750e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1750e4:
    // 0x1750e4: 0x6a00013  bltz        $s5, . + 4 + (0x13 << 2)
label_1750e8:
    if (ctx->pc == 0x1750E8u) {
        ctx->pc = 0x1750ECu;
        goto label_1750ec;
    }
    ctx->pc = 0x1750E4u;
    {
        const bool branch_taken_0x1750e4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x1750e4) {
            ctx->pc = 0x175134u;
            goto label_175134;
        }
    }
    ctx->pc = 0x1750ECu;
label_1750ec:
    // 0x1750ec: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_1750f0:
    // 0x1750f0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1750f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1750f4:
    // 0x1750f4: 0x2b0c0  sll         $s6, $v0, 3
    ctx->pc = 0x1750f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1750f8:
    // 0x1750f8: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1750fc:
    // 0x1750fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1750fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_175100:
    // 0x175100: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x175100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_175104:
    // 0x175104: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x175104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_175108:
    // 0x175108: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x175108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_17510c:
    // 0x17510c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17510cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_175110:
    // 0x175110: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x175110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_175114:
    // 0x175114: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x175114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_175118:
    // 0x175118: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x175118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17511c:
    // 0x17511c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_175120:
    // 0x175120: 0xc08e93e  jal         func_23A4F8
label_175124:
    if (ctx->pc == 0x175124u) {
        ctx->pc = 0x175124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175120u;
        // 0x175124: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175128u;
        goto label_175128;
    }
    ctx->pc = 0x175120u;
    SET_GPR_U32(ctx, 31, 0x175128u);
    ctx->pc = 0x175124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175120u;
    // 0x175124: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x175128u;
label_175128:
    // 0x175128: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_17512c:
    // 0x17512c: 0x6a1fff2  bgez        $s5, . + 4 + (-0xE << 2)
label_175130:
    if (ctx->pc == 0x175130u) {
        ctx->pc = 0x175130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17512Cu;
        // 0x175130: 0x26d6ffe8  addiu       $s6, $s6, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175134u;
        goto label_175134;
    }
    ctx->pc = 0x17512Cu;
    {
        const bool branch_taken_0x17512c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x175130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17512Cu;
        // 0x175130: 0x26d6ffe8  addiu       $s6, $s6, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17512c) {
            ctx->pc = 0x1750F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1750f8;
        }
    }
    ctx->pc = 0x175134u;
label_175134:
    // 0x175134: 0x0  nop
    ctx->pc = 0x175134u;
    // NOP
label_175138:
    // 0x175138: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_17513c:
    // 0x17513c: 0x10000009  b           . + 4 + (0x9 << 2)
label_175140:
    if (ctx->pc == 0x175140u) {
        ctx->pc = 0x175140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17513Cu;
        // 0x175140: 0x24634a90  addiu       $v1, $v1, 0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175144u;
        goto label_175144;
    }
    ctx->pc = 0x17513Cu;
    {
        const bool branch_taken_0x17513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17513Cu;
        // 0x175140: 0x24634a90  addiu       $v1, $v1, 0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17513c) {
            ctx->pc = 0x175164u;
            goto label_175164;
        }
    }
    ctx->pc = 0x175144u;
label_175144:
    // 0x175144: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x175144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_175148:
    // 0x175148: 0x842551ee  lh          $a1, 0x51EE($at)
    ctx->pc = 0x175148u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_17514c:
    // 0x17514c: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x17514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_175150:
    // 0x175150: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x175150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_175154:
    // 0x175154: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x175154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_175158:
    // 0x175158: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x175158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17515c:
    // 0x17515c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_175160:
    // 0x175160: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_175164:
    // 0x175164: 0xac740014  sw          $s4, 0x14($v1)
    ctx->pc = 0x175164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 20));
label_175168:
    // 0x175168: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x175168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17516c:
    // 0x17516c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x17516cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_175170:
    // 0x175170: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x175170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_175174:
    // 0x175174: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x175174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
label_175178:
    // 0x175178: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x175178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
label_17517c:
    // 0x17517c: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x17517cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_175180:
    // 0x175180: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_175184:
    // 0x175184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_175188:
    // 0x175188: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x175188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17518c:
    // 0x17518c: 0xa42351ee  sh          $v1, 0x51EE($at)
    ctx->pc = 0x17518cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20974), (uint16_t)GPR_U32(ctx, 3));
label_175190:
    // 0x175190: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x175190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_175194:
    // 0x175194: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x175194u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_175198:
    // 0x175198: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x175198u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17519c:
    // 0x17519c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17519cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1751a0:
    // 0x1751a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1751a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1751a4:
    // 0x1751a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1751a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1751a8:
    // 0x1751a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1751a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1751ac:
    // 0x1751ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1751acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1751b0:
    // 0x1751b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1751b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1751b4:
    // 0x1751b4: 0x3e00008  jr          $ra
label_1751b8:
    if (ctx->pc == 0x1751B8u) {
        ctx->pc = 0x1751B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751B4u;
        // 0x1751b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1751BCu;
        goto label_1751bc;
    }
    ctx->pc = 0x1751B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751B4u;
        // 0x1751b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1751B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1751BCu;
label_1751bc:
    // 0x1751bc: 0x0  nop
    ctx->pc = 0x1751bcu;
    // NOP
label_1751c0:
    // 0x1751c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1751c4:
    // 0x1751c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1751c8:
    // 0x1751c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1751c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1751cc:
    // 0x1751cc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1751ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1751d0:
    // 0x1751d0: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1751d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1751d4:
    // 0x1751d4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1751d8:
    if (ctx->pc == 0x1751D8u) {
        ctx->pc = 0x1751D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751D4u;
        // 0x1751d8: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1751DCu;
        goto label_1751dc;
    }
    ctx->pc = 0x1751D4u;
    {
        const bool branch_taken_0x1751d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1751D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751D4u;
        // 0x1751d8: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751d4) {
            ctx->pc = 0x1751F4u;
            goto label_1751f4;
        }
    }
    ctx->pc = 0x1751DCu;
label_1751dc:
    // 0x1751dc: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1751dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1751e0:
    // 0x1751e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1751e4:
    // 0x1751e4: 0xc05d49c  jal         func_175270
label_1751e8:
    if (ctx->pc == 0x1751E8u) {
        ctx->pc = 0x1751E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751E4u;
        // 0x1751e8: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1751ECu;
        goto label_1751ec;
    }
    ctx->pc = 0x1751E4u;
    SET_GPR_U32(ctx, 31, 0x1751ECu);
    ctx->pc = 0x1751E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751E4u;
    // 0x1751e8: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175270u;
    goto label_175270;
    ctx->pc = 0x1751ECu;
label_1751ec:
    // 0x1751ec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1751f0:
    if (ctx->pc == 0x1751F0u) {
        ctx->pc = 0x1751F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751ECu;
        // 0x1751f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1751F4u;
        goto label_1751f4;
    }
    ctx->pc = 0x1751ECu;
    {
        const bool branch_taken_0x1751ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751ECu;
        // 0x1751f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751ec) {
            ctx->pc = 0x175268u;
            goto label_175268;
        }
    }
    ctx->pc = 0x1751F4u;
label_1751f4:
    // 0x1751f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1751f8:
    // 0x1751f8: 0xc05d49c  jal         func_175270
label_1751fc:
    if (ctx->pc == 0x1751FCu) {
        ctx->pc = 0x1751FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751F8u;
        // 0x1751fc: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175200u;
        goto label_175200;
    }
    ctx->pc = 0x1751F8u;
    SET_GPR_U32(ctx, 31, 0x175200u);
    ctx->pc = 0x1751FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751F8u;
    // 0x1751fc: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175270u;
    goto label_175270;
    ctx->pc = 0x175200u;
label_175200:
    // 0x175200: 0xc08a000  jal         func_228000
label_175204:
    if (ctx->pc == 0x175204u) {
        ctx->pc = 0x175208u;
        goto label_175208;
    }
    ctx->pc = 0x175200u;
    SET_GPR_U32(ctx, 31, 0x175208u);
    ctx->pc = 0x228000u;
    { ctx->pc = 0x228000; return; }
    ctx->pc = 0x175208u;
label_175208:
    // 0x175208: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17520c:
    // 0x17520c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_175210:
    // 0x175210: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_175214:
    // 0x175214: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x175214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_175218:
    // 0x175218: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17521c:
    // 0x17521c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x17521cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_175220:
    // 0x175220: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_175224:
    // 0x175224: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_175228:
    // 0x175228: 0x8c463674  lw          $a2, 0x3674($v0)
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13940)));
label_17522c:
    // 0x17522c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175230:
    // 0x175230: 0x8c43366c  lw          $v1, 0x366C($v0)
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13932)));
label_175234:
    // 0x175234: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_175238:
    // 0x175238: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17523c:
    // 0x17523c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_175240:
    // 0x175240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_175244:
    // 0x175244: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_175248:
    // 0x175248: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17524c:
    // 0x17524c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_175250:
    // 0x175250: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x175250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_175254:
    // 0x175254: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_175258:
    // 0x175258: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_17525c:
    // 0x17525c: 0xc05d49c  jal         func_175270
label_175260:
    if (ctx->pc == 0x175260u) {
        ctx->pc = 0x175260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17525Cu;
        // 0x175260: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175264u;
        goto label_175264;
    }
    ctx->pc = 0x17525Cu;
    SET_GPR_U32(ctx, 31, 0x175264u);
    ctx->pc = 0x175260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17525Cu;
    // 0x175260: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175270u;
    goto label_175270;
    ctx->pc = 0x175264u;
label_175264:
    // 0x175264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175268:
    // 0x175268: 0x3e00008  jr          $ra
label_17526c:
    if (ctx->pc == 0x17526Cu) {
        ctx->pc = 0x17526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175268u;
        // 0x17526c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175270u;
        goto label_175270;
    }
    ctx->pc = 0x175268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175268u;
        // 0x17526c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175270u;
label_175270:
    // 0x175270: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_175274:
    // 0x175274: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x175274u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_175278:
    // 0x175278: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x175278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17527c:
    // 0x17527c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x17527cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_175280:
    // 0x175280: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_175284:
    // 0x175284: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_175288:
    // 0x175288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17528c:
    // 0x17528c: 0x24a52150  addiu       $a1, $a1, 0x2150
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8528));
label_175290:
    // 0x175290: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_175294:
    // 0x175294: 0xa6a021  addu        $s4, $a1, $a2
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_175298:
    // 0x175298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17529c:
    // 0x17529c: 0x24632158  addiu       $v1, $v1, 0x2158
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8536));
label_1752a0:
    // 0x1752a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1752a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1752a4:
    // 0x1752a4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1752a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1752a8:
    // 0x1752a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1752a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1752ac:
    // 0x1752ac: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_1752b0:
    // 0x1752b0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1752b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1752b4:
    // 0x1752b4: 0x34668bad  ori         $a2, $v1, 0x8BAD
    ctx->pc = 0x1752b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_1752b8:
    // 0x1752b8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1752b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1752bc:
    // 0x1752bc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1752bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1752c0:
    // 0x1752c0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1752c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1752c4:
    // 0x1752c4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1752c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1752c8:
    // 0x1752c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1752c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1752cc:
    // 0x1752cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1752ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1752d0:
    // 0x1752d0: 0x0  nop
    ctx->pc = 0x1752d0u;
    // NOP
label_1752d4:
    // 0x1752d4: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x1752d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1752d8:
    // 0x1752d8: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1752d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1752dc:
    // 0x1752dc: 0x0  nop
    ctx->pc = 0x1752dcu;
    // NOP
label_1752e0:
    // 0x1752e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1752e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1752e4:
    // 0x1752e4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1752e8:
    // 0x1752e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1752e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1752ec:
    // 0x1752ec: 0xa0830022  sb          $v1, 0x22($a0)
    ctx->pc = 0x1752ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 3));
label_1752f0:
    // 0x1752f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1752f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1752f4:
    // 0x1752f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1752f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1752f8:
    // 0x1752f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1752f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1752fc:
    // 0x1752fc: 0x0  nop
    ctx->pc = 0x1752fcu;
    // NOP
label_175300:
    // 0x175300: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x175300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_175304:
    // 0x175304: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x175304u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_175308:
    // 0x175308: 0x0  nop
    ctx->pc = 0x175308u;
    // NOP
label_17530c:
    // 0x17530c: 0x1810  mfhi        $v1
    ctx->pc = 0x17530cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_175310:
    // 0x175310: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x175310u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_175314:
    // 0x175314: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x175314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_175318:
    // 0x175318: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x175318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
label_17531c:
    // 0x17531c: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x17531cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_175320:
    // 0x175320: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x175320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_175324:
    // 0x175324: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_175328:
    if (ctx->pc == 0x175328u) {
        ctx->pc = 0x17532Cu;
        goto label_17532c;
    }
    ctx->pc = 0x175324u;
    {
        const bool branch_taken_0x175324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175324) {
            ctx->pc = 0x175430u;
            goto label_175430;
        }
    }
    ctx->pc = 0x17532Cu;
label_17532c:
    // 0x17532c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x17532cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_175330:
    // 0x175330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x175330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175334:
    // 0x175334: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x175334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_175338:
    // 0x175338: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x175338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17533c:
    // 0x17533c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_175340:
    // 0x175340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x175340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175344:
    // 0x175344: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_175348:
    // 0x175348: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x175348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17534c:
    // 0x17534c: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x17534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_175350:
    // 0x175350: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x175350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_175354:
    // 0x175354: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_175358:
    if (ctx->pc == 0x175358u) {
        ctx->pc = 0x17535Cu;
        goto label_17535c;
    }
    ctx->pc = 0x175354u;
    {
        const bool branch_taken_0x175354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x175354) {
            ctx->pc = 0x175420u;
            goto label_175420;
        }
    }
    ctx->pc = 0x17535Cu;
label_17535c:
    // 0x17535c: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x17535cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_175360:
    // 0x175360: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x175360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175364:
    // 0x175364: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_175368:
    if (ctx->pc == 0x175368u) {
        ctx->pc = 0x17536Cu;
        goto label_17536c;
    }
    ctx->pc = 0x175364u;
    {
        const bool branch_taken_0x175364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x175364) {
            ctx->pc = 0x175398u;
            goto label_175398;
        }
    }
    ctx->pc = 0x17536Cu;
label_17536c:
    // 0x17536c: 0x8e350038  lw          $s5, 0x38($s1)
    ctx->pc = 0x17536cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_175370:
    // 0x175370: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x175370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_175374:
    // 0x175374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175378:
    // 0x175378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17537c:
    // 0x17537c: 0xe6a00050  swc1        $f0, 0x50($s5)
    ctx->pc = 0x17537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
label_175380:
    // 0x175380: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_175384:
    // 0x175384: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x175384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_175388:
    // 0x175388: 0x26a50170  addiu       $a1, $s5, 0x170
    ctx->pc = 0x175388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
label_17538c:
    // 0x17538c: 0xc05f3d0  jal         func_17CF40
label_175390:
    if (ctx->pc == 0x175390u) {
        ctx->pc = 0x175390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17538Cu;
        // 0x175390: 0xe6a00058  swc1        $f0, 0x58($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x175394u;
        goto label_175394;
    }
    ctx->pc = 0x17538Cu;
    SET_GPR_U32(ctx, 31, 0x175394u);
    ctx->pc = 0x175390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17538Cu;
    // 0x175390: 0xe6a00058  swc1        $f0, 0x58($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x175394u;
label_175394:
    // 0x175394: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x175394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
label_175398:
    // 0x175398: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x175398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_17539c:
    // 0x17539c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x17539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1753a0:
    // 0x1753a0: 0x26250170  addiu       $a1, $s1, 0x170
    ctx->pc = 0x1753a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1753a4:
    // 0x1753a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1753a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1753a8:
    // 0x1753a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1753a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1753ac:
    // 0x1753ac: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1753acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_1753b0:
    // 0x1753b0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1753b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1753b4:
    // 0x1753b4: 0xc05f3d0  jal         func_17CF40
label_1753b8:
    if (ctx->pc == 0x1753B8u) {
        ctx->pc = 0x1753B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753B4u;
        // 0x1753b8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1753BCu;
        goto label_1753bc;
    }
    ctx->pc = 0x1753B4u;
    SET_GPR_U32(ctx, 31, 0x1753BCu);
    ctx->pc = 0x1753B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753B4u;
    // 0x1753b8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x1753BCu;
label_1753bc:
    // 0x1753bc: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x1753bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_1753c0:
    // 0x1753c0: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1753c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_1753c4:
    // 0x1753c4: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x1753c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1753c8:
    // 0x1753c8: 0x34658bad  ori         $a1, $v1, 0x8BAD
    ctx->pc = 0x1753c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_1753cc:
    // 0x1753cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1753ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1753d0:
    // 0x1753d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1753d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1753d4:
    // 0x1753d4: 0x0  nop
    ctx->pc = 0x1753d4u;
    // NOP
label_1753d8:
    // 0x1753d8: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1753d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1753dc:
    // 0x1753dc: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1753dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1753e0:
    // 0x1753e0: 0x0  nop
    ctx->pc = 0x1753e0u;
    // NOP
label_1753e4:
    // 0x1753e4: 0x1810  mfhi        $v1
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1753e8:
    // 0x1753e8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1753e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1753ec:
    // 0x1753ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1753ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1753f0:
    // 0x1753f0: 0xa2230218  sb          $v1, 0x218($s1)
    ctx->pc = 0x1753f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 536), (uint8_t)GPR_U32(ctx, 3));
label_1753f4:
    // 0x1753f4: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x1753f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1753f8:
    // 0x1753f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1753f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1753fc:
    // 0x1753fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1753fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_175400:
    // 0x175400: 0x0  nop
    ctx->pc = 0x175400u;
    // NOP
label_175404:
    // 0x175404: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x175404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_175408:
    // 0x175408: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x175408u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_17540c:
    // 0x17540c: 0x0  nop
    ctx->pc = 0x17540cu;
    // NOP
label_175410:
    // 0x175410: 0x1810  mfhi        $v1
    ctx->pc = 0x175410u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_175414:
    // 0x175414: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x175414u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_175418:
    // 0x175418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17541c:
    // 0x17541c: 0xa2230219  sb          $v1, 0x219($s1)
    ctx->pc = 0x17541cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 537), (uint8_t)GPR_U32(ctx, 3));
label_175420:
    // 0x175420: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_175424:
    // 0x175424: 0x2a430009  slti        $v1, $s2, 0x9
    ctx->pc = 0x175424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_175428:
    // 0x175428: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_17542c:
    if (ctx->pc == 0x17542Cu) {
        ctx->pc = 0x17542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175428u;
        // 0x17542c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175430u;
        goto label_175430;
    }
    ctx->pc = 0x175428u;
    {
        const bool branch_taken_0x175428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175428u;
        // 0x17542c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175428) {
            ctx->pc = 0x17534Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17534c;
        }
    }
    ctx->pc = 0x175430u;
label_175430:
    // 0x175430: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x175430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_175434:
    // 0x175434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x175434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175438:
    // 0x175438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x175438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17543c:
    // 0x17543c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17543cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175440:
    // 0x175440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175444:
    // 0x175444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175448:
    // 0x175448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17544c:
    // 0x17544c: 0x3e00008  jr          $ra
label_175450:
    if (ctx->pc == 0x175450u) {
        ctx->pc = 0x175450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17544Cu;
        // 0x175450: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175454u;
        goto label_175454;
    }
    ctx->pc = 0x17544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17544Cu;
        // 0x175450: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175454u;
label_175454:
    // 0x175454: 0x0  nop
    ctx->pc = 0x175454u;
    // NOP
label_175458:
    // 0x175458: 0x0  nop
    ctx->pc = 0x175458u;
    // NOP
label_17545c:
    // 0x17545c: 0x0  nop
    ctx->pc = 0x17545cu;
    // NOP
label_175460:
    // 0x175460: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x175460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_175464:
    // 0x175464: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_175468:
    if (ctx->pc == 0x175468u) {
        ctx->pc = 0x175468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175464u;
        // 0x175468: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17546Cu;
        goto label_17546c;
    }
    ctx->pc = 0x175464u;
    {
        const bool branch_taken_0x175464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175464u;
        // 0x175468: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175464) {
            ctx->pc = 0x175498u;
            goto label_175498;
        }
    }
    ctx->pc = 0x17546Cu;
label_17546c:
    // 0x17546c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17546cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175470:
    // 0x175470: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175474:
    // 0x175474: 0x90c60015  lbu         $a2, 0x15($a2)
    ctx->pc = 0x175474u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 21)));
label_175478:
    // 0x175478: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
label_17547c:
    if (ctx->pc == 0x17547Cu) {
        ctx->pc = 0x17547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175478u;
        // 0x17547c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175480u;
        goto label_175480;
    }
    ctx->pc = 0x175478u;
    {
        const bool branch_taken_0x175478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x17547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175478u;
        // 0x17547c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175478) {
            ctx->pc = 0x175494u;
            goto label_175494;
        }
    }
    ctx->pc = 0x175480u;
label_175480:
    // 0x175480: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
label_175484:
    if (ctx->pc == 0x175484u) {
        ctx->pc = 0x175488u;
        goto label_175488;
    }
    ctx->pc = 0x175480u;
    {
        const bool branch_taken_0x175480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x175480) {
            ctx->pc = 0x175494u;
            goto label_175494;
        }
    }
    ctx->pc = 0x175488u;
label_175488:
    // 0x175488: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17548c:
    // 0x17548c: 0x14c300dc  bne         $a2, $v1, . + 4 + (0xDC << 2)
label_175490:
    if (ctx->pc == 0x175490u) {
        ctx->pc = 0x175494u;
        goto label_175494;
    }
    ctx->pc = 0x17548Cu;
    {
        const bool branch_taken_0x17548c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x17548c) {
            ctx->pc = 0x175800u;
            { ctx->pc = 0x175800; return; }
        }
    }
    ctx->pc = 0x175494u;
label_175494:
    // 0x175494: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175498:
    // 0x175498: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
label_17549c:
    if (ctx->pc == 0x17549Cu) {
        ctx->pc = 0x17549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175498u;
        // 0x17549c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754A0u;
        goto label_1754a0;
    }
    ctx->pc = 0x175498u;
    {
        const bool branch_taken_0x175498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175498u;
        // 0x17549c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175498) {
            ctx->pc = 0x1755ACu;
            { ctx->pc = 0x1755ac; return; }
        }
    }
    ctx->pc = 0x1754A0u;
label_1754a0:
    // 0x1754a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1754a4:
    // 0x1754a4: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
label_1754a8:
    if (ctx->pc == 0x1754A8u) {
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754ACu;
        goto label_1754ac;
    }
    ctx->pc = 0x1754A4u;
    {
        const bool branch_taken_0x1754a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754a4) {
            ctx->pc = 0x17556Cu;
            { ctx->pc = 0x17556c; return; }
        }
    }
    ctx->pc = 0x1754ACu;
label_1754ac:
    // 0x1754ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1754acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1754b0:
    // 0x1754b0: 0x10a6001f  beq         $a1, $a2, . + 4 + (0x1F << 2)
label_1754b4:
    if (ctx->pc == 0x1754B4u) {
        ctx->pc = 0x1754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754B0u;
        // 0x1754b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754B8u;
        goto label_1754b8;
    }
    ctx->pc = 0x1754B0u;
    {
        const bool branch_taken_0x1754b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754B0u;
        // 0x1754b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754b0) {
            ctx->pc = 0x175530u;
            { ctx->pc = 0x175530; return; }
        }
    }
    ctx->pc = 0x1754B8u;
label_1754b8:
    // 0x1754b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1754bc:
    // 0x1754bc: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_1754c0:
    if (ctx->pc == 0x1754C0u) {
        ctx->pc = 0x1754C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754BCu;
        // 0x1754c0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754C4u;
        goto label_1754c4;
    }
    ctx->pc = 0x1754BCu;
    {
        const bool branch_taken_0x1754bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1754C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754BCu;
        // 0x1754c0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754bc) {
            ctx->pc = 0x1754F4u;
            { ctx->pc = 0x1754f4; return; }
        }
    }
    ctx->pc = 0x1754C4u;
label_1754c4:
    // 0x1754c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1754c8:
    if (ctx->pc == 0x1754C8u) {
        ctx->pc = 0x1754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754C4u;
        // 0x1754c8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754CCu;
        goto label_1754cc;
    }
    ctx->pc = 0x1754C4u;
    {
        const bool branch_taken_0x1754c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754C4u;
        // 0x1754c8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754c4) {
            ctx->pc = 0x1754D4u;
            { ctx->pc = 0x1754d4; return; }
        }
    }
    ctx->pc = 0x1754CCu;
label_1754cc:
    // 0x1754cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1754d0u;
    return;
}
