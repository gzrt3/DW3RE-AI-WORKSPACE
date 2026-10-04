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


void FUN_0014eba0_part120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x188d50u: goto label_188d50;
        case 0x188d54u: goto label_188d54;
        case 0x188d58u: goto label_188d58;
        case 0x188d5cu: goto label_188d5c;
        case 0x188d60u: goto label_188d60;
        case 0x188d64u: goto label_188d64;
        case 0x188d68u: goto label_188d68;
        case 0x188d6cu: goto label_188d6c;
        case 0x188d70u: goto label_188d70;
        case 0x188d74u: goto label_188d74;
        case 0x188d78u: goto label_188d78;
        case 0x188d7cu: goto label_188d7c;
        case 0x188d80u: goto label_188d80;
        case 0x188d84u: goto label_188d84;
        case 0x188d88u: goto label_188d88;
        case 0x188d8cu: goto label_188d8c;
        case 0x188d90u: goto label_188d90;
        case 0x188d94u: goto label_188d94;
        case 0x188d98u: goto label_188d98;
        case 0x188d9cu: goto label_188d9c;
        case 0x188da0u: goto label_188da0;
        case 0x188da4u: goto label_188da4;
        case 0x188da8u: goto label_188da8;
        case 0x188dacu: goto label_188dac;
        case 0x188db0u: goto label_188db0;
        case 0x188db4u: goto label_188db4;
        case 0x188db8u: goto label_188db8;
        case 0x188dbcu: goto label_188dbc;
        case 0x188dc0u: goto label_188dc0;
        case 0x188dc4u: goto label_188dc4;
        case 0x188dc8u: goto label_188dc8;
        case 0x188dccu: goto label_188dcc;
        case 0x188dd0u: goto label_188dd0;
        case 0x188dd4u: goto label_188dd4;
        case 0x188dd8u: goto label_188dd8;
        case 0x188ddcu: goto label_188ddc;
        case 0x188de0u: goto label_188de0;
        case 0x188de4u: goto label_188de4;
        case 0x188de8u: goto label_188de8;
        case 0x188decu: goto label_188dec;
        case 0x188df0u: goto label_188df0;
        case 0x188df4u: goto label_188df4;
        case 0x188df8u: goto label_188df8;
        case 0x188dfcu: goto label_188dfc;
        case 0x188e00u: goto label_188e00;
        case 0x188e04u: goto label_188e04;
        case 0x188e08u: goto label_188e08;
        case 0x188e0cu: goto label_188e0c;
        case 0x188e10u: goto label_188e10;
        case 0x188e14u: goto label_188e14;
        case 0x188e18u: goto label_188e18;
        case 0x188e1cu: goto label_188e1c;
        case 0x188e20u: goto label_188e20;
        case 0x188e24u: goto label_188e24;
        case 0x188e28u: goto label_188e28;
        case 0x188e2cu: goto label_188e2c;
        case 0x188e30u: goto label_188e30;
        case 0x188e34u: goto label_188e34;
        case 0x188e38u: goto label_188e38;
        case 0x188e3cu: goto label_188e3c;
        case 0x188e40u: goto label_188e40;
        case 0x188e44u: goto label_188e44;
        case 0x188e48u: goto label_188e48;
        case 0x188e4cu: goto label_188e4c;
        case 0x188e50u: goto label_188e50;
        case 0x188e54u: goto label_188e54;
        case 0x188e58u: goto label_188e58;
        case 0x188e5cu: goto label_188e5c;
        case 0x188e60u: goto label_188e60;
        case 0x188e64u: goto label_188e64;
        case 0x188e68u: goto label_188e68;
        case 0x188e6cu: goto label_188e6c;
        case 0x188e70u: goto label_188e70;
        case 0x188e74u: goto label_188e74;
        case 0x188e78u: goto label_188e78;
        case 0x188e7cu: goto label_188e7c;
        case 0x188e80u: goto label_188e80;
        case 0x188e84u: goto label_188e84;
        case 0x188e88u: goto label_188e88;
        case 0x188e8cu: goto label_188e8c;
        case 0x188e90u: goto label_188e90;
        case 0x188e94u: goto label_188e94;
        case 0x188e98u: goto label_188e98;
        case 0x188e9cu: goto label_188e9c;
        case 0x188ea0u: goto label_188ea0;
        case 0x188ea4u: goto label_188ea4;
        case 0x188ea8u: goto label_188ea8;
        case 0x188eacu: goto label_188eac;
        case 0x188eb0u: goto label_188eb0;
        case 0x188eb4u: goto label_188eb4;
        case 0x188eb8u: goto label_188eb8;
        case 0x188ebcu: goto label_188ebc;
        case 0x188ec0u: goto label_188ec0;
        case 0x188ec4u: goto label_188ec4;
        case 0x188ec8u: goto label_188ec8;
        case 0x188eccu: goto label_188ecc;
        case 0x188ed0u: goto label_188ed0;
        case 0x188ed4u: goto label_188ed4;
        case 0x188ed8u: goto label_188ed8;
        case 0x188edcu: goto label_188edc;
        case 0x188ee0u: goto label_188ee0;
        case 0x188ee4u: goto label_188ee4;
        case 0x188ee8u: goto label_188ee8;
        case 0x188eecu: goto label_188eec;
        case 0x188ef0u: goto label_188ef0;
        case 0x188ef4u: goto label_188ef4;
        case 0x188ef8u: goto label_188ef8;
        case 0x188efcu: goto label_188efc;
        case 0x188f00u: goto label_188f00;
        case 0x188f04u: goto label_188f04;
        case 0x188f08u: goto label_188f08;
        case 0x188f0cu: goto label_188f0c;
        case 0x188f10u: goto label_188f10;
        case 0x188f14u: goto label_188f14;
        case 0x188f18u: goto label_188f18;
        case 0x188f1cu: goto label_188f1c;
        case 0x188f20u: goto label_188f20;
        case 0x188f24u: goto label_188f24;
        case 0x188f28u: goto label_188f28;
        case 0x188f2cu: goto label_188f2c;
        case 0x188f30u: goto label_188f30;
        case 0x188f34u: goto label_188f34;
        case 0x188f38u: goto label_188f38;
        case 0x188f3cu: goto label_188f3c;
        case 0x188f40u: goto label_188f40;
        case 0x188f44u: goto label_188f44;
        case 0x188f48u: goto label_188f48;
        case 0x188f4cu: goto label_188f4c;
        case 0x188f50u: goto label_188f50;
        case 0x188f54u: goto label_188f54;
        case 0x188f58u: goto label_188f58;
        case 0x188f5cu: goto label_188f5c;
        case 0x188f60u: goto label_188f60;
        case 0x188f64u: goto label_188f64;
        case 0x188f68u: goto label_188f68;
        case 0x188f6cu: goto label_188f6c;
        case 0x188f70u: goto label_188f70;
        case 0x188f74u: goto label_188f74;
        case 0x188f78u: goto label_188f78;
        case 0x188f7cu: goto label_188f7c;
        case 0x188f80u: goto label_188f80;
        case 0x188f84u: goto label_188f84;
        case 0x188f88u: goto label_188f88;
        case 0x188f8cu: goto label_188f8c;
        case 0x188f90u: goto label_188f90;
        case 0x188f94u: goto label_188f94;
        case 0x188f98u: goto label_188f98;
        case 0x188f9cu: goto label_188f9c;
        case 0x188fa0u: goto label_188fa0;
        case 0x188fa4u: goto label_188fa4;
        case 0x188fa8u: goto label_188fa8;
        case 0x188facu: goto label_188fac;
        case 0x188fb0u: goto label_188fb0;
        case 0x188fb4u: goto label_188fb4;
        case 0x188fb8u: goto label_188fb8;
        case 0x188fbcu: goto label_188fbc;
        case 0x188fc0u: goto label_188fc0;
        case 0x188fc4u: goto label_188fc4;
        case 0x188fc8u: goto label_188fc8;
        case 0x188fccu: goto label_188fcc;
        case 0x188fd0u: goto label_188fd0;
        case 0x188fd4u: goto label_188fd4;
        case 0x188fd8u: goto label_188fd8;
        case 0x188fdcu: goto label_188fdc;
        case 0x188fe0u: goto label_188fe0;
        case 0x188fe4u: goto label_188fe4;
        case 0x188fe8u: goto label_188fe8;
        case 0x188fecu: goto label_188fec;
        case 0x188ff0u: goto label_188ff0;
        case 0x188ff4u: goto label_188ff4;
        case 0x188ff8u: goto label_188ff8;
        case 0x188ffcu: goto label_188ffc;
        case 0x189000u: goto label_189000;
        case 0x189004u: goto label_189004;
        case 0x189008u: goto label_189008;
        case 0x18900cu: goto label_18900c;
        case 0x189010u: goto label_189010;
        case 0x189014u: goto label_189014;
        case 0x189018u: goto label_189018;
        case 0x18901cu: goto label_18901c;
        case 0x189020u: goto label_189020;
        case 0x189024u: goto label_189024;
        case 0x189028u: goto label_189028;
        case 0x18902cu: goto label_18902c;
        case 0x189030u: goto label_189030;
        case 0x189034u: goto label_189034;
        case 0x189038u: goto label_189038;
        case 0x18903cu: goto label_18903c;
        case 0x189040u: goto label_189040;
        case 0x189044u: goto label_189044;
        case 0x189048u: goto label_189048;
        case 0x18904cu: goto label_18904c;
        case 0x189050u: goto label_189050;
        case 0x189054u: goto label_189054;
        case 0x189058u: goto label_189058;
        case 0x18905cu: goto label_18905c;
        case 0x189060u: goto label_189060;
        case 0x189064u: goto label_189064;
        case 0x189068u: goto label_189068;
        case 0x18906cu: goto label_18906c;
        case 0x189070u: goto label_189070;
        case 0x189074u: goto label_189074;
        case 0x189078u: goto label_189078;
        case 0x18907cu: goto label_18907c;
        case 0x189080u: goto label_189080;
        case 0x189084u: goto label_189084;
        case 0x189088u: goto label_189088;
        case 0x18908cu: goto label_18908c;
        case 0x189090u: goto label_189090;
        case 0x189094u: goto label_189094;
        case 0x189098u: goto label_189098;
        case 0x18909cu: goto label_18909c;
        case 0x1890a0u: goto label_1890a0;
        case 0x1890a4u: goto label_1890a4;
        case 0x1890a8u: goto label_1890a8;
        case 0x1890acu: goto label_1890ac;
        case 0x1890b0u: goto label_1890b0;
        case 0x1890b4u: goto label_1890b4;
        case 0x1890b8u: goto label_1890b8;
        case 0x1890bcu: goto label_1890bc;
        case 0x1890c0u: goto label_1890c0;
        case 0x1890c4u: goto label_1890c4;
        case 0x1890c8u: goto label_1890c8;
        case 0x1890ccu: goto label_1890cc;
        case 0x1890d0u: goto label_1890d0;
        case 0x1890d4u: goto label_1890d4;
        case 0x1890d8u: goto label_1890d8;
        case 0x1890dcu: goto label_1890dc;
        case 0x1890e0u: goto label_1890e0;
        case 0x1890e4u: goto label_1890e4;
        case 0x1890e8u: goto label_1890e8;
        case 0x1890ecu: goto label_1890ec;
        case 0x1890f0u: goto label_1890f0;
        case 0x1890f4u: goto label_1890f4;
        case 0x1890f8u: goto label_1890f8;
        case 0x1890fcu: goto label_1890fc;
        case 0x189100u: goto label_189100;
        case 0x189104u: goto label_189104;
        case 0x189108u: goto label_189108;
        case 0x18910cu: goto label_18910c;
        case 0x189110u: goto label_189110;
        case 0x189114u: goto label_189114;
        case 0x189118u: goto label_189118;
        case 0x18911cu: goto label_18911c;
        case 0x189120u: goto label_189120;
        case 0x189124u: goto label_189124;
        case 0x189128u: goto label_189128;
        case 0x18912cu: goto label_18912c;
        case 0x189130u: goto label_189130;
        case 0x189134u: goto label_189134;
        case 0x189138u: goto label_189138;
        case 0x18913cu: goto label_18913c;
        case 0x189140u: goto label_189140;
        case 0x189144u: goto label_189144;
        case 0x189148u: goto label_189148;
        case 0x18914cu: goto label_18914c;
        case 0x189150u: goto label_189150;
        case 0x189154u: goto label_189154;
        case 0x189158u: goto label_189158;
        case 0x18915cu: goto label_18915c;
        case 0x189160u: goto label_189160;
        case 0x189164u: goto label_189164;
        case 0x189168u: goto label_189168;
        case 0x18916cu: goto label_18916c;
        case 0x189170u: goto label_189170;
        case 0x189174u: goto label_189174;
        case 0x189178u: goto label_189178;
        case 0x18917cu: goto label_18917c;
        case 0x189180u: goto label_189180;
        case 0x189184u: goto label_189184;
        case 0x189188u: goto label_189188;
        case 0x18918cu: goto label_18918c;
        case 0x189190u: goto label_189190;
        case 0x189194u: goto label_189194;
        case 0x189198u: goto label_189198;
        case 0x18919cu: goto label_18919c;
        case 0x1891a0u: goto label_1891a0;
        case 0x1891a4u: goto label_1891a4;
        case 0x1891a8u: goto label_1891a8;
        case 0x1891acu: goto label_1891ac;
        case 0x1891b0u: goto label_1891b0;
        case 0x1891b4u: goto label_1891b4;
        case 0x1891b8u: goto label_1891b8;
        case 0x1891bcu: goto label_1891bc;
        case 0x1891c0u: goto label_1891c0;
        case 0x1891c4u: goto label_1891c4;
        case 0x1891c8u: goto label_1891c8;
        case 0x1891ccu: goto label_1891cc;
        case 0x1891d0u: goto label_1891d0;
        case 0x1891d4u: goto label_1891d4;
        case 0x1891d8u: goto label_1891d8;
        case 0x1891dcu: goto label_1891dc;
        case 0x1891e0u: goto label_1891e0;
        case 0x1891e4u: goto label_1891e4;
        case 0x1891e8u: goto label_1891e8;
        case 0x1891ecu: goto label_1891ec;
        case 0x1891f0u: goto label_1891f0;
        case 0x1891f4u: goto label_1891f4;
        case 0x1891f8u: goto label_1891f8;
        case 0x1891fcu: goto label_1891fc;
        case 0x189200u: goto label_189200;
        case 0x189204u: goto label_189204;
        case 0x189208u: goto label_189208;
        case 0x18920cu: goto label_18920c;
        case 0x189210u: goto label_189210;
        case 0x189214u: goto label_189214;
        case 0x189218u: goto label_189218;
        case 0x18921cu: goto label_18921c;
        case 0x189220u: goto label_189220;
        case 0x189224u: goto label_189224;
        case 0x189228u: goto label_189228;
        case 0x18922cu: goto label_18922c;
        case 0x189230u: goto label_189230;
        case 0x189234u: goto label_189234;
        case 0x189238u: goto label_189238;
        case 0x18923cu: goto label_18923c;
        case 0x189240u: goto label_189240;
        case 0x189244u: goto label_189244;
        case 0x189248u: goto label_189248;
        case 0x18924cu: goto label_18924c;
        case 0x189250u: goto label_189250;
        case 0x189254u: goto label_189254;
        case 0x189258u: goto label_189258;
        case 0x18925cu: goto label_18925c;
        case 0x189260u: goto label_189260;
        case 0x189264u: goto label_189264;
        case 0x189268u: goto label_189268;
        case 0x18926cu: goto label_18926c;
        case 0x189270u: goto label_189270;
        case 0x189274u: goto label_189274;
        case 0x189278u: goto label_189278;
        case 0x18927cu: goto label_18927c;
        case 0x189280u: goto label_189280;
        case 0x189284u: goto label_189284;
        case 0x189288u: goto label_189288;
        case 0x18928cu: goto label_18928c;
        case 0x189290u: goto label_189290;
        case 0x189294u: goto label_189294;
        case 0x189298u: goto label_189298;
        case 0x18929cu: goto label_18929c;
        case 0x1892a0u: goto label_1892a0;
        case 0x1892a4u: goto label_1892a4;
        case 0x1892a8u: goto label_1892a8;
        case 0x1892acu: goto label_1892ac;
        case 0x1892b0u: goto label_1892b0;
        case 0x1892b4u: goto label_1892b4;
        case 0x1892b8u: goto label_1892b8;
        case 0x1892bcu: goto label_1892bc;
        case 0x1892c0u: goto label_1892c0;
        case 0x1892c4u: goto label_1892c4;
        case 0x1892c8u: goto label_1892c8;
        case 0x1892ccu: goto label_1892cc;
        case 0x1892d0u: goto label_1892d0;
        case 0x1892d4u: goto label_1892d4;
        case 0x1892d8u: goto label_1892d8;
        case 0x1892dcu: goto label_1892dc;
        case 0x1892e0u: goto label_1892e0;
        case 0x1892e4u: goto label_1892e4;
        case 0x1892e8u: goto label_1892e8;
        case 0x1892ecu: goto label_1892ec;
        case 0x1892f0u: goto label_1892f0;
        case 0x1892f4u: goto label_1892f4;
        case 0x1892f8u: goto label_1892f8;
        case 0x1892fcu: goto label_1892fc;
        case 0x189300u: goto label_189300;
        case 0x189304u: goto label_189304;
        case 0x189308u: goto label_189308;
        case 0x18930cu: goto label_18930c;
        case 0x189310u: goto label_189310;
        case 0x189314u: goto label_189314;
        case 0x189318u: goto label_189318;
        case 0x18931cu: goto label_18931c;
        case 0x189320u: goto label_189320;
        case 0x189324u: goto label_189324;
        case 0x189328u: goto label_189328;
        case 0x18932cu: goto label_18932c;
        case 0x189330u: goto label_189330;
        case 0x189334u: goto label_189334;
        case 0x189338u: goto label_189338;
        case 0x18933cu: goto label_18933c;
        case 0x189340u: goto label_189340;
        case 0x189344u: goto label_189344;
        case 0x189348u: goto label_189348;
        case 0x18934cu: goto label_18934c;
        case 0x189350u: goto label_189350;
        case 0x189354u: goto label_189354;
        case 0x189358u: goto label_189358;
        case 0x18935cu: goto label_18935c;
        case 0x189360u: goto label_189360;
        case 0x189364u: goto label_189364;
        case 0x189368u: goto label_189368;
        case 0x18936cu: goto label_18936c;
        case 0x189370u: goto label_189370;
        case 0x189374u: goto label_189374;
        case 0x189378u: goto label_189378;
        case 0x18937cu: goto label_18937c;
        case 0x189380u: goto label_189380;
        case 0x189384u: goto label_189384;
        case 0x189388u: goto label_189388;
        case 0x18938cu: goto label_18938c;
        case 0x189390u: goto label_189390;
        case 0x189394u: goto label_189394;
        case 0x189398u: goto label_189398;
        case 0x18939cu: goto label_18939c;
        case 0x1893a0u: goto label_1893a0;
        case 0x1893a4u: goto label_1893a4;
        case 0x1893a8u: goto label_1893a8;
        case 0x1893acu: goto label_1893ac;
        case 0x1893b0u: goto label_1893b0;
        case 0x1893b4u: goto label_1893b4;
        case 0x1893b8u: goto label_1893b8;
        case 0x1893bcu: goto label_1893bc;
        case 0x1893c0u: goto label_1893c0;
        case 0x1893c4u: goto label_1893c4;
        case 0x1893c8u: goto label_1893c8;
        case 0x1893ccu: goto label_1893cc;
        case 0x1893d0u: goto label_1893d0;
        case 0x1893d4u: goto label_1893d4;
        case 0x1893d8u: goto label_1893d8;
        case 0x1893dcu: goto label_1893dc;
        case 0x1893e0u: goto label_1893e0;
        case 0x1893e4u: goto label_1893e4;
        case 0x1893e8u: goto label_1893e8;
        case 0x1893ecu: goto label_1893ec;
        case 0x1893f0u: goto label_1893f0;
        case 0x1893f4u: goto label_1893f4;
        case 0x1893f8u: goto label_1893f8;
        case 0x1893fcu: goto label_1893fc;
        case 0x189400u: goto label_189400;
        case 0x189404u: goto label_189404;
        case 0x189408u: goto label_189408;
        case 0x18940cu: goto label_18940c;
        case 0x189410u: goto label_189410;
        case 0x189414u: goto label_189414;
        case 0x189418u: goto label_189418;
        case 0x18941cu: goto label_18941c;
        case 0x189420u: goto label_189420;
        case 0x189424u: goto label_189424;
        case 0x189428u: goto label_189428;
        case 0x18942cu: goto label_18942c;
        case 0x189430u: goto label_189430;
        case 0x189434u: goto label_189434;
        case 0x189438u: goto label_189438;
        case 0x18943cu: goto label_18943c;
        case 0x189440u: goto label_189440;
        case 0x189444u: goto label_189444;
        case 0x189448u: goto label_189448;
        case 0x18944cu: goto label_18944c;
        case 0x189450u: goto label_189450;
        case 0x189454u: goto label_189454;
        case 0x189458u: goto label_189458;
        case 0x18945cu: goto label_18945c;
        case 0x189460u: goto label_189460;
        case 0x189464u: goto label_189464;
        case 0x189468u: goto label_189468;
        case 0x18946cu: goto label_18946c;
        case 0x189470u: goto label_189470;
        case 0x189474u: goto label_189474;
        case 0x189478u: goto label_189478;
        case 0x18947cu: goto label_18947c;
        case 0x189480u: goto label_189480;
        case 0x189484u: goto label_189484;
        case 0x189488u: goto label_189488;
        case 0x18948cu: goto label_18948c;
        case 0x189490u: goto label_189490;
        case 0x189494u: goto label_189494;
        case 0x189498u: goto label_189498;
        case 0x18949cu: goto label_18949c;
        case 0x1894a0u: goto label_1894a0;
        case 0x1894a4u: goto label_1894a4;
        case 0x1894a8u: goto label_1894a8;
        case 0x1894acu: goto label_1894ac;
        case 0x1894b0u: goto label_1894b0;
        case 0x1894b4u: goto label_1894b4;
        case 0x1894b8u: goto label_1894b8;
        case 0x1894bcu: goto label_1894bc;
        case 0x1894c0u: goto label_1894c0;
        case 0x1894c4u: goto label_1894c4;
        case 0x1894c8u: goto label_1894c8;
        case 0x1894ccu: goto label_1894cc;
        case 0x1894d0u: goto label_1894d0;
        case 0x1894d4u: goto label_1894d4;
        case 0x1894d8u: goto label_1894d8;
        case 0x1894dcu: goto label_1894dc;
        case 0x1894e0u: goto label_1894e0;
        case 0x1894e4u: goto label_1894e4;
        case 0x1894e8u: goto label_1894e8;
        case 0x1894ecu: goto label_1894ec;
        case 0x1894f0u: goto label_1894f0;
        case 0x1894f4u: goto label_1894f4;
        case 0x1894f8u: goto label_1894f8;
        case 0x1894fcu: goto label_1894fc;
        case 0x189500u: goto label_189500;
        case 0x189504u: goto label_189504;
        case 0x189508u: goto label_189508;
        case 0x18950cu: goto label_18950c;
        case 0x189510u: goto label_189510;
        case 0x189514u: goto label_189514;
        case 0x189518u: goto label_189518;
        case 0x18951cu: goto label_18951c;
        default: return;
    }

label_188d50:
    // 0x188d50: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_188d54:
    if (ctx->pc == 0x188D54u) {
        ctx->pc = 0x188D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D50u;
        // 0x188d54: 0x24030098  addiu       $v1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D58u;
        goto label_188d58;
    }
    ctx->pc = 0x188D50u;
    {
        const bool branch_taken_0x188d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D50u;
        // 0x188d54: 0x24030098  addiu       $v1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d50) {
            ctx->pc = 0x188D60u;
            goto label_188d60;
        }
    }
    ctx->pc = 0x188D58u;
label_188d58:
    // 0x188d58: 0x10000022  b           . + 4 + (0x22 << 2)
label_188d5c:
    if (ctx->pc == 0x188D5Cu) {
        ctx->pc = 0x188D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D58u;
        // 0x188d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D60u;
        goto label_188d60;
    }
    ctx->pc = 0x188D58u;
    {
        const bool branch_taken_0x188d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D58u;
        // 0x188d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d58) {
            ctx->pc = 0x188DE4u;
            goto label_188de4;
        }
    }
    ctx->pc = 0x188D60u;
label_188d60:
    // 0x188d60: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_188d64:
    if (ctx->pc == 0x188D64u) {
        ctx->pc = 0x188D68u;
        goto label_188d68;
    }
    ctx->pc = 0x188D60u;
    {
        const bool branch_taken_0x188d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d60) {
            ctx->pc = 0x188D74u;
            goto label_188d74;
        }
    }
    ctx->pc = 0x188D68u;
label_188d68:
    // 0x188d68: 0x240300c1  addiu       $v1, $zero, 0xC1
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_188d6c:
    // 0x188d6c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_188d70:
    if (ctx->pc == 0x188D70u) {
        ctx->pc = 0x188D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D6Cu;
        // 0x188d70: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D74u;
        goto label_188d74;
    }
    ctx->pc = 0x188D6Cu;
    {
        const bool branch_taken_0x188d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D6Cu;
        // 0x188d70: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d6c) {
            ctx->pc = 0x188D7Cu;
            goto label_188d7c;
        }
    }
    ctx->pc = 0x188D74u;
label_188d74:
    // 0x188d74: 0x1000001b  b           . + 4 + (0x1B << 2)
label_188d78:
    if (ctx->pc == 0x188D78u) {
        ctx->pc = 0x188D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D74u;
        // 0x188d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D7Cu;
        goto label_188d7c;
    }
    ctx->pc = 0x188D74u;
    {
        const bool branch_taken_0x188d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D74u;
        // 0x188d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d74) {
            ctx->pc = 0x188DE4u;
            goto label_188de4;
        }
    }
    ctx->pc = 0x188D7Cu;
label_188d7c:
    // 0x188d7c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_188d80:
    if (ctx->pc == 0x188D80u) {
        ctx->pc = 0x188D84u;
        goto label_188d84;
    }
    ctx->pc = 0x188D7Cu;
    {
        const bool branch_taken_0x188d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d7c) {
            ctx->pc = 0x188D98u;
            goto label_188d98;
        }
    }
    ctx->pc = 0x188D84u;
label_188d84:
    // 0x188d84: 0x240300e7  addiu       $v1, $zero, 0xE7
    ctx->pc = 0x188d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_188d88:
    // 0x188d88: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_188d8c:
    if (ctx->pc == 0x188D8Cu) {
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x240300c2  addiu       $v1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D90u;
        goto label_188d90;
    }
    ctx->pc = 0x188D88u;
    {
        const bool branch_taken_0x188d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x240300c2  addiu       $v1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d88) {
            ctx->pc = 0x188D98u;
            goto label_188d98;
        }
    }
    ctx->pc = 0x188D90u;
label_188d90:
    // 0x188d90: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_188d94:
    if (ctx->pc == 0x188D94u) {
        ctx->pc = 0x188D98u;
        goto label_188d98;
    }
    ctx->pc = 0x188D90u;
    {
        const bool branch_taken_0x188d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188d90) {
            ctx->pc = 0x188DA0u;
            goto label_188da0;
        }
    }
    ctx->pc = 0x188D98u;
label_188d98:
    // 0x188d98: 0x10000012  b           . + 4 + (0x12 << 2)
label_188d9c:
    if (ctx->pc == 0x188D9Cu) {
        ctx->pc = 0x188D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D98u;
        // 0x188d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DA0u;
        goto label_188da0;
    }
    ctx->pc = 0x188D98u;
    {
        const bool branch_taken_0x188d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D98u;
        // 0x188d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d98) {
            ctx->pc = 0x188DE4u;
            goto label_188de4;
        }
    }
    ctx->pc = 0x188DA0u;
label_188da0:
    // 0x188da0: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_188da4:
    // 0x188da4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_188da8:
    if (ctx->pc == 0x188DA8u) {
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0x240300c3  addiu       $v1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DACu;
        goto label_188dac;
    }
    ctx->pc = 0x188DA4u;
    {
        const bool branch_taken_0x188da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0x240300c3  addiu       $v1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da4) {
            ctx->pc = 0x188DB4u;
            goto label_188db4;
        }
    }
    ctx->pc = 0x188DACu;
label_188dac:
    // 0x188dac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_188db0:
    if (ctx->pc == 0x188DB0u) {
        ctx->pc = 0x188DB4u;
        goto label_188db4;
    }
    ctx->pc = 0x188DACu;
    {
        const bool branch_taken_0x188dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188dac) {
            ctx->pc = 0x188DBCu;
            goto label_188dbc;
        }
    }
    ctx->pc = 0x188DB4u;
label_188db4:
    // 0x188db4: 0x1000000b  b           . + 4 + (0xB << 2)
label_188db8:
    if (ctx->pc == 0x188DB8u) {
        ctx->pc = 0x188DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB4u;
        // 0x188db8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DBCu;
        goto label_188dbc;
    }
    ctx->pc = 0x188DB4u;
    {
        const bool branch_taken_0x188db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB4u;
        // 0x188db8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188db4) {
            ctx->pc = 0x188DE4u;
            goto label_188de4;
        }
    }
    ctx->pc = 0x188DBCu;
label_188dbc:
    // 0x188dbc: 0x240300ec  addiu       $v1, $zero, 0xEC
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_188dc0:
    // 0x188dc0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_188dc4:
    if (ctx->pc == 0x188DC4u) {
        ctx->pc = 0x188DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DC0u;
        // 0x188dc4: 0x2483ff5f  addiu       $v1, $a0, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967135));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DC8u;
        goto label_188dc8;
    }
    ctx->pc = 0x188DC0u;
    {
        const bool branch_taken_0x188dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DC0u;
        // 0x188dc4: 0x2483ff5f  addiu       $v1, $a0, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dc0) {
            ctx->pc = 0x188DE0u;
            goto label_188de0;
        }
    }
    ctx->pc = 0x188DC8u;
label_188dc8:
    // 0x188dc8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x188dc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_188dcc:
    // 0x188dcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_188dd0:
    if (ctx->pc == 0x188DD0u) {
        ctx->pc = 0x188DD4u;
        goto label_188dd4;
    }
    ctx->pc = 0x188DCCu;
    {
        const bool branch_taken_0x188dcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x188dcc) {
            ctx->pc = 0x188DE0u;
            goto label_188de0;
        }
    }
    ctx->pc = 0x188DD4u;
label_188dd4:
    // 0x188dd4: 0x240300ed  addiu       $v1, $zero, 0xED
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_188dd8:
    // 0x188dd8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_188ddc:
    if (ctx->pc == 0x188DDCu) {
        ctx->pc = 0x188DE0u;
        goto label_188de0;
    }
    ctx->pc = 0x188DD8u;
    {
        const bool branch_taken_0x188dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188dd8) {
            ctx->pc = 0x188DE4u;
            goto label_188de4;
        }
    }
    ctx->pc = 0x188DE0u;
label_188de0:
    // 0x188de0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188de4:
    // 0x188de4: 0x3e00008  jr          $ra
label_188de8:
    if (ctx->pc == 0x188DE8u) {
        ctx->pc = 0x188DECu;
        goto label_188dec;
    }
    ctx->pc = 0x188DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188DECu;
label_188dec:
    // 0x188dec: 0x0  nop
    ctx->pc = 0x188decu;
    // NOP
label_188df0:
    // 0x188df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_188df4:
    // 0x188df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x188df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_188df8:
    // 0x188df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_188dfc:
    // 0x188dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_188e00:
    // 0x188e00: 0x8482019c  lh          $v0, 0x19C($a0)
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 412)));
label_188e04:
    // 0x188e04: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_188e08:
    if (ctx->pc == 0x188E08u) {
        ctx->pc = 0x188E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E04u;
        // 0x188e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E0Cu;
        goto label_188e0c;
    }
    ctx->pc = 0x188E04u;
    {
        const bool branch_taken_0x188e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E04u;
        // 0x188e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e04) {
            ctx->pc = 0x188E6Cu;
            goto label_188e6c;
        }
    }
    ctx->pc = 0x188E0Cu;
label_188e0c:
    // 0x188e0c: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x188e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
label_188e10:
    // 0x188e10: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_188e14:
    if (ctx->pc == 0x188E14u) {
        ctx->pc = 0x188E18u;
        goto label_188e18;
    }
    ctx->pc = 0x188E10u;
    {
        const bool branch_taken_0x188e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e10) {
            ctx->pc = 0x188E6Cu;
            goto label_188e6c;
        }
    }
    ctx->pc = 0x188E18u;
label_188e18:
    // 0x188e18: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x188e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188e1c:
    // 0x188e1c: 0x0  nop
    ctx->pc = 0x188e1cu;
    // NOP
label_188e20:
    // 0x188e20: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x188e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_188e24:
    // 0x188e24: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x188e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_188e28:
    // 0x188e28: 0x4a000138  vcallms     0x20
    ctx->pc = 0x188e28u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_188e2c:
    // 0x188e2c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x188e2cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_188e30:
    // 0x188e30: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x188e30u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188e34:
    // 0x188e34: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x188e34u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_188e38:
    // 0x188e38: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x188e38u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188e3c:
    // 0x188e3c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x188e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_188e40:
    // 0x188e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188e44:
    // 0x188e44: 0x0  nop
    ctx->pc = 0x188e44u;
    // NOP
label_188e48:
    // 0x188e48: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x188e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_188e4c:
    // 0x188e4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x188e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_188e50:
    // 0x188e50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_188e54:
    // 0x188e54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x188e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_188e58:
    // 0x188e58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188e5c:
    // 0x188e5c: 0xa602019c  sh          $v0, 0x19C($s0)
    ctx->pc = 0x188e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 2));
label_188e60:
    // 0x188e60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x188e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_188e64:
    // 0x188e64: 0x0  nop
    ctx->pc = 0x188e64u;
    // NOP
label_188e68:
    // 0x188e68: 0xa602019e  sh          $v0, 0x19E($s0)
    ctx->pc = 0x188e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 2));
label_188e6c:
    // 0x188e6c: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
label_188e70:
    // 0x188e70: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_188e74:
    // 0x188e74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x188e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_188e78:
    // 0x188e78: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x188e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188e7c:
    // 0x188e7c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_188e80:
    // 0x188e80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188e84:
    // 0x188e84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188e88:
    // 0x188e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188e8c:
    // 0x188e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188e90:
    // 0x188e90: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x188e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_188e94:
    // 0x188e94: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x188e94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_188e98:
    // 0x188e98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188e9c:
    // 0x188e9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x188e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_188ea0:
    // 0x188ea0: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x188ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188ea4:
    // 0x188ea4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_188ea8:
    // 0x188ea8: 0x8603019e  lh          $v1, 0x19E($s0)
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
label_188eac:
    // 0x188eac: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x188eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188eb0:
    // 0x188eb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188eb4:
    // 0x188eb4: 0x0  nop
    ctx->pc = 0x188eb4u;
    // NOP
label_188eb8:
    // 0x188eb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188ebc:
    // 0x188ebc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x188ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_188ec0:
    // 0x188ec0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x188ec0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_188ec4:
    // 0x188ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188ec8:
    // 0x188ec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_188ecc:
    // 0x188ecc: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188ed0:
    // 0x188ed0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x188ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_188ed4:
    // 0x188ed4: 0x9203023f  lbu         $v1, 0x23F($s0)
    ctx->pc = 0x188ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_188ed8:
    // 0x188ed8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_188edc:
    if (ctx->pc == 0x188EDCu) {
        ctx->pc = 0x188EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ED8u;
        // 0x188edc: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EE0u;
        goto label_188ee0;
    }
    ctx->pc = 0x188ED8u;
    {
        const bool branch_taken_0x188ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ED8u;
        // 0x188edc: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ed8) {
            ctx->pc = 0x188EE4u;
            goto label_188ee4;
        }
    }
    ctx->pc = 0x188EE0u;
label_188ee0:
    // 0x188ee0: 0x2411002e  addiu       $s1, $zero, 0x2E
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_188ee4:
    // 0x188ee4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_188ee8:
    // 0x188ee8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x188ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_188eec:
    // 0x188eec: 0xc042484  jal         func_109210
label_188ef0:
    if (ctx->pc == 0x188EF0u) {
        ctx->pc = 0x188EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EECu;
        // 0x188ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EF4u;
        goto label_188ef4;
    }
    ctx->pc = 0x188EECu;
    SET_GPR_U32(ctx, 31, 0x188EF4u);
    ctx->pc = 0x188EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EECu;
    // 0x188ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x188EECu, 0x188EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EF4u;
label_188ef4:
    // 0x188ef4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x188ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_188ef8:
    // 0x188ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_188efc:
    if (ctx->pc == 0x188EFCu) {
        ctx->pc = 0x188F00u;
        goto label_188f00;
    }
    ctx->pc = 0x188EF8u;
    {
        const bool branch_taken_0x188ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ef8) {
            ctx->pc = 0x188F10u;
            goto label_188f10;
        }
    }
    ctx->pc = 0x188F00u;
label_188f00:
    // 0x188f00: 0xa600019c  sh          $zero, 0x19C($s0)
    ctx->pc = 0x188f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 0));
label_188f04:
    // 0x188f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188f08:
    // 0x188f08: 0x10000002  b           . + 4 + (0x2 << 2)
label_188f0c:
    if (ctx->pc == 0x188F0Cu) {
        ctx->pc = 0x188F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F08u;
        // 0x188f0c: 0xa600019e  sh          $zero, 0x19E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F10u;
        goto label_188f10;
    }
    ctx->pc = 0x188F08u;
    {
        const bool branch_taken_0x188f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F08u;
        // 0x188f0c: 0xa600019e  sh          $zero, 0x19E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f08) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188F10u;
label_188f10:
    // 0x188f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188f14:
    // 0x188f14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_188f18:
    // 0x188f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188f1c:
    // 0x188f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_188f20:
    // 0x188f20: 0x3e00008  jr          $ra
label_188f24:
    if (ctx->pc == 0x188F24u) {
        ctx->pc = 0x188F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F20u;
        // 0x188f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F28u;
        goto label_188f28;
    }
    ctx->pc = 0x188F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F20u;
        // 0x188f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F28u;
label_188f28:
    // 0x188f28: 0x0  nop
    ctx->pc = 0x188f28u;
    // NOP
label_188f2c:
    // 0x188f2c: 0x0  nop
    ctx->pc = 0x188f2cu;
    // NOP
label_188f30:
    // 0x188f30: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_188f34:
    // 0x188f34: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188f38:
    // 0x188f38: 0x30e32000  andi        $v1, $a3, 0x2000
    ctx->pc = 0x188f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
label_188f3c:
    // 0x188f3c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_188f40:
    if (ctx->pc == 0x188F40u) {
        ctx->pc = 0x188F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F3Cu;
        // 0x188f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F44u;
        goto label_188f44;
    }
    ctx->pc = 0x188F3Cu;
    {
        const bool branch_taken_0x188f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F3Cu;
        // 0x188f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f3c) {
            ctx->pc = 0x188FC0u;
            goto label_188fc0;
        }
    }
    ctx->pc = 0x188F44u;
label_188f44:
    // 0x188f44: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_188f48:
    // 0x188f48: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x188f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_188f4c:
    // 0x188f4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_188f50:
    if (ctx->pc == 0x188F50u) {
        ctx->pc = 0x188F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F4Cu;
        // 0x188f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F54u;
        goto label_188f54;
    }
    ctx->pc = 0x188F4Cu;
    {
        const bool branch_taken_0x188f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F4Cu;
        // 0x188f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f4c) {
            ctx->pc = 0x188F5Cu;
            goto label_188f5c;
        }
    }
    ctx->pc = 0x188F54u;
label_188f54:
    // 0x188f54: 0x10000002  b           . + 4 + (0x2 << 2)
label_188f58:
    if (ctx->pc == 0x188F58u) {
        ctx->pc = 0x188F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F54u;
        // 0x188f58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F5Cu;
        goto label_188f5c;
    }
    ctx->pc = 0x188F54u;
    {
        const bool branch_taken_0x188f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F54u;
        // 0x188f58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f54) {
            ctx->pc = 0x188F60u;
            goto label_188f60;
        }
    }
    ctx->pc = 0x188F5Cu;
label_188f5c:
    // 0x188f5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x188f5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188f60:
    // 0x188f60: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_188f64:
    if (ctx->pc == 0x188F64u) {
        ctx->pc = 0x188F68u;
        goto label_188f68;
    }
    ctx->pc = 0x188F60u;
    {
        const bool branch_taken_0x188f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f60) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F68u;
label_188f68:
    // 0x188f68: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x188f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_188f6c:
    // 0x188f6c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x188f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_188f70:
    // 0x188f70: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_188f74:
    if (ctx->pc == 0x188F74u) {
        ctx->pc = 0x188F78u;
        goto label_188f78;
    }
    ctx->pc = 0x188F70u;
    {
        const bool branch_taken_0x188f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f70) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F78u;
label_188f78:
    // 0x188f78: 0x8ca7002c  lw          $a3, 0x2C($a1)
    ctx->pc = 0x188f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_188f7c:
    // 0x188f7c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x188f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_188f80:
    // 0x188f80: 0x90e40009  lbu         $a0, 0x9($a3)
    ctx->pc = 0x188f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
label_188f84:
    // 0x188f84: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
label_188f88:
    if (ctx->pc == 0x188F88u) {
        ctx->pc = 0x188F8Cu;
        goto label_188f8c;
    }
    ctx->pc = 0x188F84u;
    {
        const bool branch_taken_0x188f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188f84) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F8Cu;
label_188f8c:
    // 0x188f8c: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x188f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_188f90:
    // 0x188f90: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_188f94:
    if (ctx->pc == 0x188F94u) {
        ctx->pc = 0x188F98u;
        goto label_188f98;
    }
    ctx->pc = 0x188F90u;
    {
        const bool branch_taken_0x188f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f90) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F98u;
label_188f98:
    // 0x188f98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x188f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188f9c:
    // 0x188f9c: 0x90e3000d  lbu         $v1, 0xD($a3)
    ctx->pc = 0x188f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
label_188fa0:
    // 0x188fa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188fa4:
    // 0x188fa4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_188fa8:
    // 0x188fa8: 0x0  nop
    ctx->pc = 0x188fa8u;
    // NOP
label_188fac:
    // 0x188fac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x188facu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_188fb0:
    // 0x188fb0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_188fb4:
    if (ctx->pc == 0x188FB4u) {
        ctx->pc = 0x188FB8u;
        goto label_188fb8;
    }
    ctx->pc = 0x188FB0u;
    {
        const bool branch_taken_0x188fb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fb0) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FB8u;
label_188fb8:
    // 0x188fb8: 0x1000000e  b           . + 4 + (0xE << 2)
label_188fbc:
    if (ctx->pc == 0x188FBCu) {
        ctx->pc = 0x188FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FB8u;
        // 0x188fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FC0u;
        goto label_188fc0;
    }
    ctx->pc = 0x188FB8u;
    {
        const bool branch_taken_0x188fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FB8u;
        // 0x188fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fb8) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FC0u;
label_188fc0:
    // 0x188fc0: 0x90840232  lbu         $a0, 0x232($a0)
    ctx->pc = 0x188fc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_188fc4:
    // 0x188fc4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x188fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_188fc8:
    // 0x188fc8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_188fcc:
    if (ctx->pc == 0x188FCCu) {
        ctx->pc = 0x188FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FC8u;
        // 0x188fcc: 0x30e30800  andi        $v1, $a3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FD0u;
        goto label_188fd0;
    }
    ctx->pc = 0x188FC8u;
    {
        const bool branch_taken_0x188fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FC8u;
        // 0x188fcc: 0x30e30800  andi        $v1, $a3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fc8) {
            ctx->pc = 0x188FE8u;
            goto label_188fe8;
        }
    }
    ctx->pc = 0x188FD0u;
label_188fd0:
    // 0x188fd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_188fd4:
    // 0x188fd4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_188fd8:
    if (ctx->pc == 0x188FD8u) {
        ctx->pc = 0x188FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FD4u;
        // 0x188fd8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FDCu;
        goto label_188fdc;
    }
    ctx->pc = 0x188FD4u;
    {
        const bool branch_taken_0x188fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FD4u;
        // 0x188fd8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fd4) {
            ctx->pc = 0x188FE4u;
            goto label_188fe4;
        }
    }
    ctx->pc = 0x188FDCu;
label_188fdc:
    // 0x188fdc: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_188fe0:
    if (ctx->pc == 0x188FE0u) {
        ctx->pc = 0x188FE4u;
        goto label_188fe4;
    }
    ctx->pc = 0x188FDCu;
    {
        const bool branch_taken_0x188fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188fdc) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FE4u;
label_188fe4:
    // 0x188fe4: 0x30e30800  andi        $v1, $a3, 0x800
    ctx->pc = 0x188fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
label_188fe8:
    // 0x188fe8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_188fec:
    if (ctx->pc == 0x188FECu) {
        ctx->pc = 0x188FF0u;
        goto label_188ff0;
    }
    ctx->pc = 0x188FE8u;
    {
        const bool branch_taken_0x188fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fe8) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FF0u;
label_188ff0:
    // 0x188ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188ff4:
    // 0x188ff4: 0x3e00008  jr          $ra
label_188ff8:
    if (ctx->pc == 0x188FF8u) {
        ctx->pc = 0x188FFCu;
        goto label_188ffc;
    }
    ctx->pc = 0x188FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188FFCu;
label_188ffc:
    // 0x188ffc: 0x0  nop
    ctx->pc = 0x188ffcu;
    // NOP
label_189000:
    // 0x189000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_189004:
    // 0x189004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_189008:
    // 0x189008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18900c:
    // 0x18900c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_189010:
    // 0x189010: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189014:
    // 0x189014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_189018:
    // 0x189018: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x189018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18901c:
    // 0x18901c: 0x9086023d  lbu         $a2, 0x23D($a0)
    ctx->pc = 0x18901cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 573)));
label_189020:
    // 0x189020: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x189020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_189024:
    // 0x189024: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_189028:
    if (ctx->pc == 0x189028u) {
        ctx->pc = 0x189028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189024u;
        // 0x189028: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18902Cu;
        goto label_18902c;
    }
    ctx->pc = 0x189024u;
    {
        const bool branch_taken_0x189024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189024u;
        // 0x189028: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189024) {
            ctx->pc = 0x1890BCu;
            goto label_1890bc;
        }
    }
    ctx->pc = 0x18902Cu;
label_18902c:
    // 0x18902c: 0x8622003c  lh          $v0, 0x3C($s1)
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_189030:
    // 0x189030: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x189030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
label_189034:
    // 0x189034: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_189038:
    if (ctx->pc == 0x189038u) {
        ctx->pc = 0x189038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189034u;
        // 0x189038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18903Cu;
        goto label_18903c;
    }
    ctx->pc = 0x189034u;
    {
        const bool branch_taken_0x189034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189034u;
        // 0x189038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189034) {
            ctx->pc = 0x189040u;
            goto label_189040;
        }
    }
    ctx->pc = 0x18903Cu;
label_18903c:
    // 0x18903c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189040:
    // 0x189040: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_189044:
    if (ctx->pc == 0x189044u) {
        ctx->pc = 0x189044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189040u;
        // 0x189044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189048u;
        goto label_189048;
    }
    ctx->pc = 0x189040u;
    {
        const bool branch_taken_0x189040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189040u;
        // 0x189044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189040) {
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x189048u;
label_189048:
    // 0x189048: 0x92420232  lbu         $v0, 0x232($s2)
    ctx->pc = 0x189048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18904c:
    // 0x18904c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x18904cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_189050:
    // 0x189050: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_189054:
    if (ctx->pc == 0x189054u) {
        ctx->pc = 0x189054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189050u;
        // 0x189054: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189058u;
        goto label_189058;
    }
    ctx->pc = 0x189050u;
    {
        const bool branch_taken_0x189050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189050u;
        // 0x189054: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189050) {
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x189058u;
label_189058:
    // 0x189058: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x189058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_18905c:
    // 0x18905c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_189060:
    // 0x189060: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x189060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_189064:
    // 0x189064: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_189068:
    if (ctx->pc == 0x189068u) {
        ctx->pc = 0x18906Cu;
        goto label_18906c;
    }
    ctx->pc = 0x189064u;
    {
        const bool branch_taken_0x189064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189064) {
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x18906Cu;
label_18906c:
    // 0x18906c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x18906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_189070:
    // 0x189070: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x189070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_189074:
    // 0x189074: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_189078:
    if (ctx->pc == 0x189078u) {
        ctx->pc = 0x18907Cu;
        goto label_18907c;
    }
    ctx->pc = 0x189074u;
    {
        const bool branch_taken_0x189074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189074) {
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x18907Cu;
label_18907c:
    // 0x18907c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x18907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189080:
    // 0x189080: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x189080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
label_189084:
    // 0x189084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189088:
    // 0x189088: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x189088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18908c:
    // 0x18908c: 0x0  nop
    ctx->pc = 0x18908cu;
    // NOP
label_189090:
    // 0x189090: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x189090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_189094:
    // 0x189094: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_189098:
    if (ctx->pc == 0x189098u) {
        ctx->pc = 0x18909Cu;
        goto label_18909c;
    }
    ctx->pc = 0x189094u;
    {
        const bool branch_taken_0x189094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189094) {
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x18909Cu;
label_18909c:
    // 0x18909c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1890a0:
    // 0x1890a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1890a4:
    if (ctx->pc == 0x1890A4u) {
        ctx->pc = 0x1890A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A0u;
        // 0x1890a4: 0x30c200f7  andi        $v0, $a2, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890A8u;
        goto label_1890a8;
    }
    ctx->pc = 0x1890A0u;
    {
        const bool branch_taken_0x1890a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A0u;
        // 0x1890a4: 0x30c200f7  andi        $v0, $a2, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890a0) {
            ctx->pc = 0x1890B0u;
            goto label_1890b0;
        }
    }
    ctx->pc = 0x1890A8u;
label_1890a8:
    // 0x1890a8: 0x10000066  b           . + 4 + (0x66 << 2)
label_1890ac:
    if (ctx->pc == 0x1890ACu) {
        ctx->pc = 0x1890ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A8u;
        // 0x1890ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890B0u;
        goto label_1890b0;
    }
    ctx->pc = 0x1890A8u;
    {
        const bool branch_taken_0x1890a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A8u;
        // 0x1890ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890a8) {
            ctx->pc = 0x189244u;
            goto label_189244;
        }
    }
    ctx->pc = 0x1890B0u;
label_1890b0:
    // 0x1890b0: 0xa242023d  sb          $v0, 0x23D($s2)
    ctx->pc = 0x1890b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
label_1890b4:
    // 0x1890b4: 0x10000063  b           . + 4 + (0x63 << 2)
label_1890b8:
    if (ctx->pc == 0x1890B8u) {
        ctx->pc = 0x1890B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B4u;
        // 0x1890b8: 0xa6400224  sh          $zero, 0x224($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890BCu;
        goto label_1890bc;
    }
    ctx->pc = 0x1890B4u;
    {
        const bool branch_taken_0x1890b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B4u;
        // 0x1890b8: 0xa6400224  sh          $zero, 0x224($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b4) {
            ctx->pc = 0x189244u;
            goto label_189244;
        }
    }
    ctx->pc = 0x1890BCu;
label_1890bc:
    // 0x1890bc: 0x8622003c  lh          $v0, 0x3C($s1)
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_1890c0:
    // 0x1890c0: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x1890c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
label_1890c4:
    // 0x1890c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1890c8:
    if (ctx->pc == 0x1890C8u) {
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890CCu;
        goto label_1890cc;
    }
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1890D0u;
            goto label_1890d0;
        }
    }
    ctx->pc = 0x1890CCu;
label_1890cc:
    // 0x1890cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1890ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1890d0:
    // 0x1890d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1890d4:
    if (ctx->pc == 0x1890D4u) {
        ctx->pc = 0x1890D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890D0u;
        // 0x1890d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890D8u;
        goto label_1890d8;
    }
    ctx->pc = 0x1890D0u;
    {
        const bool branch_taken_0x1890d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890D0u;
        // 0x1890d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890d0) {
            ctx->pc = 0x189130u;
            goto label_189130;
        }
    }
    ctx->pc = 0x1890D8u;
label_1890d8:
    // 0x1890d8: 0x92420232  lbu         $v0, 0x232($s2)
    ctx->pc = 0x1890d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_1890dc:
    // 0x1890dc: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1890dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1890e0:
    // 0x1890e0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1890e4:
    if (ctx->pc == 0x1890E4u) {
        ctx->pc = 0x1890E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890E0u;
        // 0x1890e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890E8u;
        goto label_1890e8;
    }
    ctx->pc = 0x1890E0u;
    {
        const bool branch_taken_0x1890e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890E0u;
        // 0x1890e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890e0) {
            ctx->pc = 0x189130u;
            goto label_189130;
        }
    }
    ctx->pc = 0x1890E8u;
label_1890e8:
    // 0x1890e8: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1890ec:
    // 0x1890ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1890ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1890f0:
    // 0x1890f0: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x1890f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_1890f4:
    // 0x1890f4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1890f8:
    if (ctx->pc == 0x1890F8u) {
        ctx->pc = 0x1890FCu;
        goto label_1890fc;
    }
    ctx->pc = 0x1890F4u;
    {
        const bool branch_taken_0x1890f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1890f4) {
            ctx->pc = 0x189130u;
            goto label_189130;
        }
    }
    ctx->pc = 0x1890FCu;
label_1890fc:
    // 0x1890fc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1890fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_189100:
    // 0x189100: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x189100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_189104:
    // 0x189104: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_189108:
    if (ctx->pc == 0x189108u) {
        ctx->pc = 0x18910Cu;
        goto label_18910c;
    }
    ctx->pc = 0x189104u;
    {
        const bool branch_taken_0x189104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189104) {
            ctx->pc = 0x189130u;
            goto label_189130;
        }
    }
    ctx->pc = 0x18910Cu;
label_18910c:
    // 0x18910c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x18910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189110:
    // 0x189110: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x189110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
label_189114:
    // 0x189114: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189118:
    // 0x189118: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x189118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18911c:
    // 0x18911c: 0x0  nop
    ctx->pc = 0x18911cu;
    // NOP
label_189120:
    // 0x189120: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x189120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_189124:
    // 0x189124: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_189128:
    if (ctx->pc == 0x189128u) {
        ctx->pc = 0x18912Cu;
        goto label_18912c;
    }
    ctx->pc = 0x189124u;
    {
        const bool branch_taken_0x189124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189124) {
            ctx->pc = 0x189130u;
            goto label_189130;
        }
    }
    ctx->pc = 0x18912Cu;
label_18912c:
    // 0x18912c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189130:
    // 0x189130: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
label_189134:
    if (ctx->pc == 0x189134u) {
        ctx->pc = 0x189138u;
        goto label_189138;
    }
    ctx->pc = 0x189130u;
    {
        const bool branch_taken_0x189130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x189130) {
            ctx->pc = 0x189244u;
            goto label_189244;
        }
    }
    ctx->pc = 0x189138u;
label_189138:
    // 0x189138: 0xc08f0cc  jal         func_23C330
label_18913c:
    if (ctx->pc == 0x18913Cu) {
        ctx->pc = 0x189140u;
        goto label_189140;
    }
    ctx->pc = 0x189138u;
    SET_GPR_U32(ctx, 31, 0x189140u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x189140u;
label_189140:
    // 0x189140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189144:
    // 0x189144: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x189144u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_189148:
    // 0x189148: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x189148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_18914c:
    // 0x18914c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18914cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_189150:
    // 0x189150: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x189150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_189154:
    // 0x189154: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x189154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_189158:
    // 0x189158: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18915c:
    // 0x18915c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189160:
    // 0x189160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_189164:
    // 0x189164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_189168:
    // 0x189168: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x189168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18916c:
    // 0x18916c: 0x24422b17  addiu       $v0, $v0, 0x2B17
    ctx->pc = 0x18916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11031));
label_189170:
    // 0x189170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_189174:
    // 0x189174: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x189174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_189178:
    // 0x189178: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x189178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18917c:
    // 0x18917c: 0x0  nop
    ctx->pc = 0x18917cu;
    // NOP
label_189180:
    // 0x189180: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x189180u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_189184:
    // 0x189184: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189188:
    // 0x189188: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x189188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18918c:
    // 0x18918c: 0x0  nop
    ctx->pc = 0x18918cu;
    // NOP
label_189190:
    // 0x189190: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x189190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_189194:
    // 0x189194: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
label_189198:
    if (ctx->pc == 0x189198u) {
        ctx->pc = 0x18919Cu;
        goto label_18919c;
    }
    ctx->pc = 0x189194u;
    {
        const bool branch_taken_0x189194 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x189194) {
            ctx->pc = 0x189244u;
            goto label_189244;
        }
    }
    ctx->pc = 0x18919Cu;
label_18919c:
    // 0x18919c: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_1891a0:
    // 0x1891a0: 0x2402009e  addiu       $v0, $zero, 0x9E
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_1891a4:
    // 0x1891a4: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_1891a8:
    if (ctx->pc == 0x1891A8u) {
        ctx->pc = 0x1891ACu;
        goto label_1891ac;
    }
    ctx->pc = 0x1891A4u;
    {
        const bool branch_taken_0x1891a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1891a4) {
            ctx->pc = 0x189220u;
            goto label_189220;
        }
    }
    ctx->pc = 0x1891ACu;
label_1891ac:
    // 0x1891ac: 0xc08f0cc  jal         func_23C330
label_1891b0:
    if (ctx->pc == 0x1891B0u) {
        ctx->pc = 0x1891B4u;
        goto label_1891b4;
    }
    ctx->pc = 0x1891ACu;
    SET_GPR_U32(ctx, 31, 0x1891B4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1891B4u;
label_1891b4:
    // 0x1891b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1891b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1891b8:
    // 0x1891b8: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x1891b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_1891bc:
    // 0x1891bc: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1891bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_1891c0:
    // 0x1891c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1891c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1891c4:
    // 0x1891c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1891c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1891c8:
    // 0x1891c8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1891c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1891cc:
    // 0x1891cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1891ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1891d0:
    // 0x1891d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1891d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1891d4:
    // 0x1891d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1891d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1891d8:
    // 0x1891d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1891d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1891dc:
    // 0x1891dc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1891e0:
    // 0x1891e0: 0x24422b18  addiu       $v0, $v0, 0x2B18
    ctx->pc = 0x1891e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11032));
label_1891e4:
    // 0x1891e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1891e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1891e8:
    // 0x1891e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1891e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1891ec:
    // 0x1891ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1891ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1891f0:
    // 0x1891f0: 0x0  nop
    ctx->pc = 0x1891f0u;
    // NOP
label_1891f4:
    // 0x1891f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1891f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1891f8:
    // 0x1891f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1891f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1891fc:
    // 0x1891fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1891fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189200:
    // 0x189200: 0x0  nop
    ctx->pc = 0x189200u;
    // NOP
label_189204:
    // 0x189204: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x189204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_189208:
    // 0x189208: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_18920c:
    if (ctx->pc == 0x18920Cu) {
        ctx->pc = 0x189210u;
        goto label_189210;
    }
    ctx->pc = 0x189208u;
    {
        const bool branch_taken_0x189208 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x189208) {
            ctx->pc = 0x189220u;
            goto label_189220;
        }
    }
    ctx->pc = 0x189210u;
label_189210:
    // 0x189210: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_189214:
    // 0x189214: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x189214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_189218:
    // 0x189218: 0x1000000a  b           . + 4 + (0xA << 2)
label_18921c:
    if (ctx->pc == 0x18921Cu) {
        ctx->pc = 0x18921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189218u;
        // 0x18921c: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189220u;
        goto label_189220;
    }
    ctx->pc = 0x189218u;
    {
        const bool branch_taken_0x189218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189218u;
        // 0x18921c: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189218) {
            ctx->pc = 0x189244u;
            goto label_189244;
        }
    }
    ctx->pc = 0x189220u;
label_189220:
    // 0x189220: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x189220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_189224:
    // 0x189224: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189228:
    // 0x189228: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x189228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18922c:
    // 0x18922c: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x18922cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_189230:
    // 0x189230: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x189230u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_189234:
    // 0x189234: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x189234u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_189238:
    // 0x189238: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x189238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_18923c:
    // 0x18923c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_189240:
    // 0x189240: 0xa242023d  sb          $v0, 0x23D($s2)
    ctx->pc = 0x189240u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
label_189244:
    // 0x189244: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_189248:
    if (ctx->pc == 0x189248u) {
        ctx->pc = 0x189248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189244u;
        // 0x189248: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18924Cu;
        goto label_18924c;
    }
    ctx->pc = 0x189244u;
    {
        const bool branch_taken_0x189244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x189248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189244u;
        // 0x189248: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189244) {
            ctx->pc = 0x189398u;
            goto label_189398;
        }
    }
    ctx->pc = 0x18924Cu;
label_18924c:
    // 0x18924c: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_189250:
    // 0x189250: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_189254:
    // 0x189254: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
label_189258:
    if (ctx->pc == 0x189258u) {
        ctx->pc = 0x18925Cu;
        goto label_18925c;
    }
    ctx->pc = 0x189254u;
    {
        const bool branch_taken_0x189254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189254) {
            ctx->pc = 0x189390u;
            goto label_189390;
        }
    }
    ctx->pc = 0x18925Cu;
label_18925c:
    // 0x18925c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189260:
    // 0x189260: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_189264:
    // 0x189264: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189268:
    // 0x189268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18926c:
    // 0x18926c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18926cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_189270:
    // 0x189270: 0x0  nop
    ctx->pc = 0x189270u;
    // NOP
label_189274:
    // 0x189274: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189278:
    // 0x189278: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x189278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18927c:
    // 0x18927c: 0x0  nop
    ctx->pc = 0x18927cu;
    // NOP
label_189280:
    // 0x189280: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_189284:
    if (ctx->pc == 0x189284u) {
        ctx->pc = 0x189288u;
        goto label_189288;
    }
    ctx->pc = 0x189280u;
    {
        const bool branch_taken_0x189280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189280) {
            ctx->pc = 0x189390u;
            goto label_189390;
        }
    }
    ctx->pc = 0x189288u;
label_189288:
    // 0x189288: 0xc08f0cc  jal         func_23C330
label_18928c:
    if (ctx->pc == 0x18928Cu) {
        ctx->pc = 0x189290u;
        goto label_189290;
    }
    ctx->pc = 0x189288u;
    SET_GPR_U32(ctx, 31, 0x189290u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x189290u;
label_189290:
    // 0x189290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189294:
    // 0x189294: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x189294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_189298:
    // 0x189298: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_18929c:
    // 0x18929c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18929cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1892a0:
    // 0x1892a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1892a4:
    // 0x1892a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1892a8:
    // 0x1892a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1892ac:
    // 0x1892ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1892acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1892b0:
    // 0x1892b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1892b4:
    // 0x1892b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1892b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1892b8:
    // 0x1892b8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1892bc:
    // 0x1892bc: 0x24422b16  addiu       $v0, $v0, 0x2B16
    ctx->pc = 0x1892bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11030));
label_1892c0:
    // 0x1892c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1892c4:
    // 0x1892c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1892c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1892c8:
    // 0x1892c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1892c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1892cc:
    // 0x1892cc: 0x0  nop
    ctx->pc = 0x1892ccu;
    // NOP
label_1892d0:
    // 0x1892d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1892d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1892d4:
    // 0x1892d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1892d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1892d8:
    // 0x1892d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1892d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1892dc:
    // 0x1892dc: 0x0  nop
    ctx->pc = 0x1892dcu;
    // NOP
label_1892e0:
    // 0x1892e0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1892e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1892e4:
    // 0x1892e4: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
label_1892e8:
    if (ctx->pc == 0x1892E8u) {
        ctx->pc = 0x1892ECu;
        goto label_1892ec;
    }
    ctx->pc = 0x1892E4u;
    {
        const bool branch_taken_0x1892e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1892e4) {
            ctx->pc = 0x189390u;
            goto label_189390;
        }
    }
    ctx->pc = 0x1892ECu;
label_1892ec:
    // 0x1892ec: 0xc08f0cc  jal         func_23C330
label_1892f0:
    if (ctx->pc == 0x1892F0u) {
        ctx->pc = 0x1892F4u;
        goto label_1892f4;
    }
    ctx->pc = 0x1892ECu;
    SET_GPR_U32(ctx, 31, 0x1892F4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1892F4u;
label_1892f4:
    // 0x1892f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1892f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1892f8:
    // 0x1892f8: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x1892f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_1892fc:
    // 0x1892fc: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1892fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_189300:
    // 0x189300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x189300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_189304:
    // 0x189304: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x189304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_189308:
    // 0x189308: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x189308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_18930c:
    // 0x18930c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_189310:
    // 0x189310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189314:
    // 0x189314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_189318:
    // 0x189318: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x189318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18931c:
    // 0x18931c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_189320:
    // 0x189320: 0x24422b12  addiu       $v0, $v0, 0x2B12
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11026));
label_189324:
    // 0x189324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_189328:
    // 0x189328: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x189328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18932c:
    // 0x18932c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18932cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189330:
    // 0x189330: 0x0  nop
    ctx->pc = 0x189330u;
    // NOP
label_189334:
    // 0x189334: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189334u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_189338:
    // 0x189338: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18933c:
    // 0x18933c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18933cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189340:
    // 0x189340: 0x0  nop
    ctx->pc = 0x189340u;
    // NOP
label_189344:
    // 0x189344: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x189344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_189348:
    // 0x189348: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_18934c:
    if (ctx->pc == 0x18934Cu) {
        ctx->pc = 0x189350u;
        goto label_189350;
    }
    ctx->pc = 0x189348u;
    {
        const bool branch_taken_0x189348 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x189348) {
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189350u;
label_189350:
    // 0x189350: 0x86430222  lh          $v1, 0x222($s2)
    ctx->pc = 0x189350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 546)));
label_189354:
    // 0x189354: 0x86420252  lh          $v0, 0x252($s2)
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 594)));
label_189358:
    // 0x189358: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_18935c:
    if (ctx->pc == 0x18935Cu) {
        ctx->pc = 0x189360u;
        goto label_189360;
    }
    ctx->pc = 0x189358u;
    {
        const bool branch_taken_0x189358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189358) {
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189360u;
label_189360:
    // 0x189360: 0x92420241  lbu         $v0, 0x241($s2)
    ctx->pc = 0x189360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 577)));
label_189364:
    // 0x189364: 0x2841002a  slti        $at, $v0, 0x2A
    ctx->pc = 0x189364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)42) ? 1 : 0);
label_189368:
    // 0x189368: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18936c:
    if (ctx->pc == 0x18936Cu) {
        ctx->pc = 0x189370u;
        goto label_189370;
    }
    ctx->pc = 0x189368u;
    {
        const bool branch_taken_0x189368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189368) {
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189370u;
label_189370:
    // 0x189370: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_189374:
    // 0x189374: 0x34421004  ori         $v0, $v0, 0x1004
    ctx->pc = 0x189374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4100);
label_189378:
    // 0x189378: 0x10000006  b           . + 4 + (0x6 << 2)
label_18937c:
    if (ctx->pc == 0x18937Cu) {
        ctx->pc = 0x18937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189378u;
        // 0x18937c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189380u;
        goto label_189380;
    }
    ctx->pc = 0x189378u;
    {
        const bool branch_taken_0x189378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189378u;
        // 0x18937c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189378) {
            ctx->pc = 0x189394u;
            goto label_189394;
        }
    }
    ctx->pc = 0x189380u;
label_189380:
    // 0x189380: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_189384:
    // 0x189384: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x189384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
label_189388:
    // 0x189388: 0x10000002  b           . + 4 + (0x2 << 2)
label_18938c:
    if (ctx->pc == 0x18938Cu) {
        ctx->pc = 0x18938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189388u;
        // 0x18938c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189390u;
        goto label_189390;
    }
    ctx->pc = 0x189388u;
    {
        const bool branch_taken_0x189388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189388u;
        // 0x18938c: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189388) {
            ctx->pc = 0x189394u;
            goto label_189394;
        }
    }
    ctx->pc = 0x189390u;
label_189390:
    // 0x189390: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x189390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_189394:
    // 0x189394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189398:
    // 0x189398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x189398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18939c:
    // 0x18939c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18939cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1893a0:
    // 0x1893a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1893a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1893a4:
    // 0x1893a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1893a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1893a8:
    // 0x1893a8: 0x3e00008  jr          $ra
label_1893ac:
    if (ctx->pc == 0x1893ACu) {
        ctx->pc = 0x1893ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893A8u;
        // 0x1893ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1893B0u;
        goto label_1893b0;
    }
    ctx->pc = 0x1893A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1893ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893A8u;
        // 0x1893ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893B0u;
label_1893b0:
    // 0x1893b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1893b4:
    // 0x1893b4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1893b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_1893b8:
    // 0x1893b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1893b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1893bc:
    // 0x1893bc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1893bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_1893c0:
    // 0x1893c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1893c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1893c4:
    // 0x1893c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1893c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1893c8:
    // 0x1893c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1893c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1893cc:
    // 0x1893cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1893ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1893d0:
    // 0x1893d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1893d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1893d4:
    // 0x1893d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1893d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1893d8:
    // 0x1893d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1893d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1893dc:
    // 0x1893dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1893dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1893e0:
    // 0x1893e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1893e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1893e4:
    // 0x1893e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1893e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1893e8:
    // 0x1893e8: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x1893e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
label_1893ec:
    // 0x1893ec: 0xac800264  sw          $zero, 0x264($a0)
    ctx->pc = 0x1893ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 0));
label_1893f0:
    // 0x1893f0: 0x90830218  lbu         $v1, 0x218($a0)
    ctx->pc = 0x1893f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_1893f4:
    // 0x1893f4: 0x92620219  lbu         $v0, 0x219($s3)
    ctx->pc = 0x1893f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 537)));
label_1893f8:
    // 0x1893f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1893f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1893fc:
    // 0x1893fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_189400:
    // 0x189400: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x189400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_189404:
    // 0x189404: 0xc04494c  jal         func_112530
label_189408:
    if (ctx->pc == 0x189408u) {
        ctx->pc = 0x189408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189404u;
        // 0x189408: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18940Cu;
        goto label_18940c;
    }
    ctx->pc = 0x189404u;
    SET_GPR_U32(ctx, 31, 0x18940Cu);
    ctx->pc = 0x189408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189404u;
    // 0x189408: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x189404u, 0x18940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18940Cu;
label_18940c:
    // 0x18940c: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
label_189410:
    if (ctx->pc == 0x189410u) {
        ctx->pc = 0x189414u;
        goto label_189414;
    }
    ctx->pc = 0x18940Cu;
    {
        const bool branch_taken_0x18940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18940c) {
            ctx->pc = 0x1896B8u;
            { ctx->pc = 0x1896b8; return; }
        }
    }
    ctx->pc = 0x189414u;
label_189414:
    // 0x189414: 0x92430218  lbu         $v1, 0x218($s2)
    ctx->pc = 0x189414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 536)));
label_189418:
    // 0x189418: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x189418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18941c:
    // 0x18941c: 0x92420219  lbu         $v0, 0x219($s2)
    ctx->pc = 0x18941cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 537)));
label_189420:
    // 0x189420: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_189424:
    // 0x189424: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_189428:
    // 0x189428: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x189428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18942c:
    // 0x18942c: 0xc04494c  jal         func_112530
label_189430:
    if (ctx->pc == 0x189430u) {
        ctx->pc = 0x189430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18942Cu;
        // 0x189430: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189434u;
        goto label_189434;
    }
    ctx->pc = 0x18942Cu;
    SET_GPR_U32(ctx, 31, 0x189434u);
    ctx->pc = 0x189430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18942Cu;
    // 0x189430: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x18942Cu, 0x189434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189434u;
label_189434:
    // 0x189434: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
label_189438:
    if (ctx->pc == 0x189438u) {
        ctx->pc = 0x18943Cu;
        goto label_18943c;
    }
    ctx->pc = 0x189434u;
    {
        const bool branch_taken_0x189434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189434) {
            ctx->pc = 0x1896B8u;
            { ctx->pc = 0x1896b8; return; }
        }
    }
    ctx->pc = 0x18943Cu;
label_18943c:
    // 0x18943c: 0x9242023a  lbu         $v0, 0x23A($s2)
    ctx->pc = 0x18943cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 570)));
label_189440:
    // 0x189440: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
label_189444:
    if (ctx->pc == 0x189444u) {
        ctx->pc = 0x189444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189440u;
        // 0x189444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189448u;
        goto label_189448;
    }
    ctx->pc = 0x189440u;
    {
        const bool branch_taken_0x189440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189440u;
        // 0x189444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189440) {
            ctx->pc = 0x1896BCu;
            { ctx->pc = 0x1896bc; return; }
        }
    }
    ctx->pc = 0x189448u;
label_189448:
    // 0x189448: 0x92630231  lbu         $v1, 0x231($s3)
    ctx->pc = 0x189448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 561)));
label_18944c:
    // 0x18944c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189450:
    // 0x189450: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_189454:
    if (ctx->pc == 0x189454u) {
        ctx->pc = 0x189454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189450u;
        // 0x189454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189458u;
        goto label_189458;
    }
    ctx->pc = 0x189450u;
    {
        const bool branch_taken_0x189450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189450u;
        // 0x189454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189450) {
            ctx->pc = 0x189464u;
            goto label_189464;
        }
    }
    ctx->pc = 0x189458u;
label_189458:
    // 0x189458: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18945c:
    // 0x18945c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_189460:
    if (ctx->pc == 0x189460u) {
        ctx->pc = 0x189464u;
        goto label_189464;
    }
    ctx->pc = 0x18945Cu;
    {
        const bool branch_taken_0x18945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18945c) {
            ctx->pc = 0x18949Cu;
            goto label_18949c;
        }
    }
    ctx->pc = 0x189464u;
label_189464:
    // 0x189464: 0x9263023f  lbu         $v1, 0x23F($s3)
    ctx->pc = 0x189464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 575)));
label_189468:
    // 0x189468: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x189468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18946c:
    // 0x18946c: 0x9242023f  lbu         $v0, 0x23F($s2)
    ctx->pc = 0x18946cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 575)));
label_189470:
    // 0x189470: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_189474:
    // 0x189474: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x189474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_189478:
    // 0x189478: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18947c:
    if (ctx->pc == 0x18947Cu) {
        ctx->pc = 0x18947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189478u;
        // 0x18947c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189480u;
        goto label_189480;
    }
    ctx->pc = 0x189478u;
    {
        const bool branch_taken_0x189478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189478u;
        // 0x18947c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189478) {
            ctx->pc = 0x189494u;
            goto label_189494;
        }
    }
    ctx->pc = 0x189480u;
label_189480:
    // 0x189480: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x189480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_189484:
    // 0x189484: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_189488:
    if (ctx->pc == 0x189488u) {
        ctx->pc = 0x189488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189484u;
        // 0x189488: 0x26640150  addiu       $a0, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18948Cu;
        goto label_18948c;
    }
    ctx->pc = 0x189484u;
    {
        const bool branch_taken_0x189484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189484u;
        // 0x189488: 0x26640150  addiu       $a0, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189484) {
            ctx->pc = 0x1894B4u;
            goto label_1894b4;
        }
    }
    ctx->pc = 0x18948Cu;
label_18948c:
    // 0x18948c: 0x10000008  b           . + 4 + (0x8 << 2)
label_189490:
    if (ctx->pc == 0x189490u) {
        ctx->pc = 0x189490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18948Cu;
        // 0x189490: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189494u;
        goto label_189494;
    }
    ctx->pc = 0x18948Cu;
    {
        const bool branch_taken_0x18948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18948Cu;
        // 0x189490: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18948c) {
            ctx->pc = 0x1894B0u;
            goto label_1894b0;
        }
    }
    ctx->pc = 0x189494u;
label_189494:
    // 0x189494: 0x10000006  b           . + 4 + (0x6 << 2)
label_189498:
    if (ctx->pc == 0x189498u) {
        ctx->pc = 0x189498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189494u;
        // 0x189498: 0x36310020  ori         $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18949Cu;
        goto label_18949c;
    }
    ctx->pc = 0x189494u;
    {
        const bool branch_taken_0x189494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189494u;
        // 0x189498: 0x36310020  ori         $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189494) {
            ctx->pc = 0x1894B0u;
            goto label_1894b0;
        }
    }
    ctx->pc = 0x18949Cu;
label_18949c:
    // 0x18949c: 0x9263023f  lbu         $v1, 0x23F($s3)
    ctx->pc = 0x18949cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 575)));
label_1894a0:
    // 0x1894a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1894a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1894a4:
    // 0x1894a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1894a8:
    if (ctx->pc == 0x1894A8u) {
        ctx->pc = 0x1894A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894A4u;
        // 0x1894a8: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894ACu;
        goto label_1894ac;
    }
    ctx->pc = 0x1894A4u;
    {
        const bool branch_taken_0x1894a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1894A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894A4u;
        // 0x1894a8: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894a4) {
            ctx->pc = 0x1894B0u;
            goto label_1894b0;
        }
    }
    ctx->pc = 0x1894ACu;
label_1894ac:
    // 0x1894ac: 0x24110026  addiu       $s1, $zero, 0x26
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1894b0:
    // 0x1894b0: 0x26640150  addiu       $a0, $s3, 0x150
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_1894b4:
    // 0x1894b4: 0xc042484  jal         func_109210
label_1894b8:
    if (ctx->pc == 0x1894B8u) {
        ctx->pc = 0x1894B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B4u;
        // 0x1894b8: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894BCu;
        goto label_1894bc;
    }
    ctx->pc = 0x1894B4u;
    SET_GPR_U32(ctx, 31, 0x1894BCu);
    ctx->pc = 0x1894B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894B4u;
    // 0x1894b8: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x1894B4u, 0x1894BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894BCu;
label_1894bc:
    // 0x1894bc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1894bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_1894c0:
    // 0x1894c0: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_1894c4:
    if (ctx->pc == 0x1894C4u) {
        ctx->pc = 0x1894C8u;
        goto label_1894c8;
    }
    ctx->pc = 0x1894C0u;
    {
        const bool branch_taken_0x1894c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1894c0) {
            ctx->pc = 0x1896B8u;
            { ctx->pc = 0x1896b8; return; }
        }
    }
    ctx->pc = 0x1894C8u;
label_1894c8:
    // 0x1894c8: 0xc6630150  lwc1        $f3, 0x150($s3)
    ctx->pc = 0x1894c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1894cc:
    // 0x1894cc: 0x92630231  lbu         $v1, 0x231($s3)
    ctx->pc = 0x1894ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 561)));
label_1894d0:
    // 0x1894d0: 0xc6420150  lwc1        $f2, 0x150($s2)
    ctx->pc = 0x1894d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1894d4:
    // 0x1894d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1894d8:
    // 0x1894d8: 0xc6610158  lwc1        $f1, 0x158($s3)
    ctx->pc = 0x1894d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1894dc:
    // 0x1894dc: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x1894dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1894e0:
    // 0x1894e0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1894e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1894e4:
    // 0x1894e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1894e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1894e8:
    // 0x1894e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1894e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1894ec:
    // 0x1894ec: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1894f0:
    if (ctx->pc == 0x1894F0u) {
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0x4600051c  madd.s      $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894F4u;
        goto label_1894f4;
    }
    ctx->pc = 0x1894ECu;
    {
        const bool branch_taken_0x1894ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0x4600051c  madd.s      $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894ec) {
            ctx->pc = 0x189534u;
            { ctx->pc = 0x189534; return; }
        }
    }
    ctx->pc = 0x1894F4u;
label_1894f4:
    // 0x1894f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1894f8:
    // 0x1894f8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1894fc:
    if (ctx->pc == 0x1894FCu) {
        ctx->pc = 0x1894FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894F8u;
        // 0x1894fc: 0x3c024c09  lui         $v0, 0x4C09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19465 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189500u;
        goto label_189500;
    }
    ctx->pc = 0x1894F8u;
    {
        const bool branch_taken_0x1894f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1894FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894F8u;
        // 0x1894fc: 0x3c024c09  lui         $v0, 0x4C09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894f8) {
            ctx->pc = 0x189524u;
            { ctx->pc = 0x189524; return; }
        }
    }
    ctx->pc = 0x189500u;
label_189500:
    // 0x189500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189504:
    // 0x189504: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_189508:
    if (ctx->pc == 0x189508u) {
        ctx->pc = 0x189508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189504u;
        // 0x189508: 0x3c024c09  lui         $v0, 0x4C09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19465 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18950Cu;
        goto label_18950c;
    }
    ctx->pc = 0x189504u;
    {
        const bool branch_taken_0x189504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189504u;
        // 0x189508: 0x3c024c09  lui         $v0, 0x4C09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189504) {
            ctx->pc = 0x189514u;
            goto label_189514;
        }
    }
    ctx->pc = 0x18950Cu;
label_18950c:
    // 0x18950c: 0x1000000e  b           . + 4 + (0xE << 2)
label_189510:
    if (ctx->pc == 0x189510u) {
        ctx->pc = 0x189510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18950Cu;
        // 0x189510: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189514u;
        goto label_189514;
    }
    ctx->pc = 0x18950Cu;
    {
        const bool branch_taken_0x18950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18950Cu;
        // 0x189510: 0x3c0248af  lui         $v0, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18950c) {
            ctx->pc = 0x189548u;
            { ctx->pc = 0x189548; return; }
        }
    }
    ctx->pc = 0x189514u;
label_189514:
    // 0x189514: 0x34425440  ori         $v0, $v0, 0x5440
    ctx->pc = 0x189514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21568);
label_189518:
    // 0x189518: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x189518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18951c:
    // 0x18951c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x189520u;
    return;
}
