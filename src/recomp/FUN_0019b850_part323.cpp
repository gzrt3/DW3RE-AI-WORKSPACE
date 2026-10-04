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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part323(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x238bf0u: goto label_238bf0;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bf8u: goto label_238bf8;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c00u: goto label_238c00;
        case 0x238c04u: goto label_238c04;
        case 0x238c08u: goto label_238c08;
        case 0x238c0cu: goto label_238c0c;
        case 0x238c10u: goto label_238c10;
        case 0x238c14u: goto label_238c14;
        case 0x238c18u: goto label_238c18;
        case 0x238c1cu: goto label_238c1c;
        case 0x238c20u: goto label_238c20;
        case 0x238c24u: goto label_238c24;
        case 0x238c28u: goto label_238c28;
        case 0x238c2cu: goto label_238c2c;
        case 0x238c30u: goto label_238c30;
        case 0x238c34u: goto label_238c34;
        case 0x238c38u: goto label_238c38;
        case 0x238c3cu: goto label_238c3c;
        case 0x238c40u: goto label_238c40;
        case 0x238c44u: goto label_238c44;
        case 0x238c48u: goto label_238c48;
        case 0x238c4cu: goto label_238c4c;
        case 0x238c50u: goto label_238c50;
        case 0x238c54u: goto label_238c54;
        case 0x238c58u: goto label_238c58;
        case 0x238c5cu: goto label_238c5c;
        case 0x238c60u: goto label_238c60;
        case 0x238c64u: goto label_238c64;
        case 0x238c68u: goto label_238c68;
        case 0x238c6cu: goto label_238c6c;
        case 0x238c70u: goto label_238c70;
        case 0x238c74u: goto label_238c74;
        case 0x238c78u: goto label_238c78;
        case 0x238c7cu: goto label_238c7c;
        case 0x238c80u: goto label_238c80;
        case 0x238c84u: goto label_238c84;
        case 0x238c88u: goto label_238c88;
        case 0x238c8cu: goto label_238c8c;
        case 0x238c90u: goto label_238c90;
        case 0x238c94u: goto label_238c94;
        case 0x238c98u: goto label_238c98;
        case 0x238c9cu: goto label_238c9c;
        case 0x238ca0u: goto label_238ca0;
        case 0x238ca4u: goto label_238ca4;
        case 0x238ca8u: goto label_238ca8;
        case 0x238cacu: goto label_238cac;
        case 0x238cb0u: goto label_238cb0;
        case 0x238cb4u: goto label_238cb4;
        case 0x238cb8u: goto label_238cb8;
        case 0x238cbcu: goto label_238cbc;
        case 0x238cc0u: goto label_238cc0;
        case 0x238cc4u: goto label_238cc4;
        case 0x238cc8u: goto label_238cc8;
        case 0x238cccu: goto label_238ccc;
        case 0x238cd0u: goto label_238cd0;
        case 0x238cd4u: goto label_238cd4;
        case 0x238cd8u: goto label_238cd8;
        case 0x238cdcu: goto label_238cdc;
        case 0x238ce0u: goto label_238ce0;
        case 0x238ce4u: goto label_238ce4;
        case 0x238ce8u: goto label_238ce8;
        case 0x238cecu: goto label_238cec;
        case 0x238cf0u: goto label_238cf0;
        case 0x238cf4u: goto label_238cf4;
        case 0x238cf8u: goto label_238cf8;
        case 0x238cfcu: goto label_238cfc;
        case 0x238d00u: goto label_238d00;
        case 0x238d04u: goto label_238d04;
        case 0x238d08u: goto label_238d08;
        case 0x238d0cu: goto label_238d0c;
        case 0x238d10u: goto label_238d10;
        case 0x238d14u: goto label_238d14;
        case 0x238d18u: goto label_238d18;
        case 0x238d1cu: goto label_238d1c;
        case 0x238d20u: goto label_238d20;
        case 0x238d24u: goto label_238d24;
        case 0x238d28u: goto label_238d28;
        case 0x238d2cu: goto label_238d2c;
        case 0x238d30u: goto label_238d30;
        case 0x238d34u: goto label_238d34;
        case 0x238d38u: goto label_238d38;
        case 0x238d3cu: goto label_238d3c;
        case 0x238d40u: goto label_238d40;
        case 0x238d44u: goto label_238d44;
        case 0x238d48u: goto label_238d48;
        case 0x238d4cu: goto label_238d4c;
        case 0x238d50u: goto label_238d50;
        case 0x238d54u: goto label_238d54;
        case 0x238d58u: goto label_238d58;
        case 0x238d5cu: goto label_238d5c;
        case 0x238d60u: goto label_238d60;
        case 0x238d64u: goto label_238d64;
        case 0x238d68u: goto label_238d68;
        case 0x238d6cu: goto label_238d6c;
        case 0x238d70u: goto label_238d70;
        case 0x238d74u: goto label_238d74;
        case 0x238d78u: goto label_238d78;
        case 0x238d7cu: goto label_238d7c;
        case 0x238d80u: goto label_238d80;
        case 0x238d84u: goto label_238d84;
        case 0x238d88u: goto label_238d88;
        case 0x238d8cu: goto label_238d8c;
        case 0x238d90u: goto label_238d90;
        case 0x238d94u: goto label_238d94;
        case 0x238d98u: goto label_238d98;
        case 0x238d9cu: goto label_238d9c;
        case 0x238da0u: goto label_238da0;
        case 0x238da4u: goto label_238da4;
        case 0x238da8u: goto label_238da8;
        case 0x238dacu: goto label_238dac;
        case 0x238db0u: goto label_238db0;
        case 0x238db4u: goto label_238db4;
        case 0x238db8u: goto label_238db8;
        case 0x238dbcu: goto label_238dbc;
        case 0x238dc0u: goto label_238dc0;
        case 0x238dc4u: goto label_238dc4;
        case 0x238dc8u: goto label_238dc8;
        case 0x238dccu: goto label_238dcc;
        case 0x238dd0u: goto label_238dd0;
        case 0x238dd4u: goto label_238dd4;
        case 0x238dd8u: goto label_238dd8;
        case 0x238ddcu: goto label_238ddc;
        case 0x238de0u: goto label_238de0;
        case 0x238de4u: goto label_238de4;
        case 0x238de8u: goto label_238de8;
        case 0x238decu: goto label_238dec;
        case 0x238df0u: goto label_238df0;
        case 0x238df4u: goto label_238df4;
        case 0x238df8u: goto label_238df8;
        case 0x238dfcu: goto label_238dfc;
        case 0x238e00u: goto label_238e00;
        case 0x238e04u: goto label_238e04;
        case 0x238e08u: goto label_238e08;
        case 0x238e0cu: goto label_238e0c;
        case 0x238e10u: goto label_238e10;
        case 0x238e14u: goto label_238e14;
        case 0x238e18u: goto label_238e18;
        case 0x238e1cu: goto label_238e1c;
        case 0x238e20u: goto label_238e20;
        case 0x238e24u: goto label_238e24;
        case 0x238e28u: goto label_238e28;
        case 0x238e2cu: goto label_238e2c;
        case 0x238e30u: goto label_238e30;
        case 0x238e34u: goto label_238e34;
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ea4u: goto label_238ea4;
        case 0x238ea8u: goto label_238ea8;
        case 0x238eacu: goto label_238eac;
        case 0x238eb0u: goto label_238eb0;
        case 0x238eb4u: goto label_238eb4;
        case 0x238eb8u: goto label_238eb8;
        case 0x238ebcu: goto label_238ebc;
        case 0x238ec0u: goto label_238ec0;
        case 0x238ec4u: goto label_238ec4;
        case 0x238ec8u: goto label_238ec8;
        case 0x238eccu: goto label_238ecc;
        case 0x238ed0u: goto label_238ed0;
        case 0x238ed4u: goto label_238ed4;
        case 0x238ed8u: goto label_238ed8;
        case 0x238edcu: goto label_238edc;
        case 0x238ee0u: goto label_238ee0;
        case 0x238ee4u: goto label_238ee4;
        case 0x238ee8u: goto label_238ee8;
        case 0x238eecu: goto label_238eec;
        case 0x238ef0u: goto label_238ef0;
        case 0x238ef4u: goto label_238ef4;
        case 0x238ef8u: goto label_238ef8;
        case 0x238efcu: goto label_238efc;
        case 0x238f00u: goto label_238f00;
        case 0x238f04u: goto label_238f04;
        case 0x238f08u: goto label_238f08;
        case 0x238f0cu: goto label_238f0c;
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        case 0x238f3cu: goto label_238f3c;
        case 0x238f40u: goto label_238f40;
        case 0x238f44u: goto label_238f44;
        case 0x238f48u: goto label_238f48;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f50u: goto label_238f50;
        case 0x238f54u: goto label_238f54;
        case 0x238f58u: goto label_238f58;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f60u: goto label_238f60;
        case 0x238f64u: goto label_238f64;
        case 0x238f68u: goto label_238f68;
        case 0x238f6cu: goto label_238f6c;
        case 0x238f70u: goto label_238f70;
        case 0x238f74u: goto label_238f74;
        case 0x238f78u: goto label_238f78;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f80u: goto label_238f80;
        case 0x238f84u: goto label_238f84;
        case 0x238f88u: goto label_238f88;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f90u: goto label_238f90;
        case 0x238f94u: goto label_238f94;
        case 0x238f98u: goto label_238f98;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fa0u: goto label_238fa0;
        case 0x238fa4u: goto label_238fa4;
        case 0x238fa8u: goto label_238fa8;
        case 0x238facu: goto label_238fac;
        case 0x238fb0u: goto label_238fb0;
        case 0x238fb4u: goto label_238fb4;
        case 0x238fb8u: goto label_238fb8;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fc0u: goto label_238fc0;
        case 0x238fc4u: goto label_238fc4;
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        case 0x239104u: goto label_239104;
        case 0x239108u: goto label_239108;
        case 0x23910cu: goto label_23910c;
        case 0x239110u: goto label_239110;
        case 0x239114u: goto label_239114;
        case 0x239118u: goto label_239118;
        case 0x23911cu: goto label_23911c;
        case 0x239120u: goto label_239120;
        case 0x239124u: goto label_239124;
        case 0x239128u: goto label_239128;
        case 0x23912cu: goto label_23912c;
        case 0x239130u: goto label_239130;
        case 0x239134u: goto label_239134;
        case 0x239138u: goto label_239138;
        case 0x23913cu: goto label_23913c;
        case 0x239140u: goto label_239140;
        case 0x239144u: goto label_239144;
        case 0x239148u: goto label_239148;
        case 0x23914cu: goto label_23914c;
        case 0x239150u: goto label_239150;
        case 0x239154u: goto label_239154;
        case 0x239158u: goto label_239158;
        case 0x23915cu: goto label_23915c;
        case 0x239160u: goto label_239160;
        case 0x239164u: goto label_239164;
        case 0x239168u: goto label_239168;
        case 0x23916cu: goto label_23916c;
        case 0x239170u: goto label_239170;
        case 0x239174u: goto label_239174;
        case 0x239178u: goto label_239178;
        case 0x23917cu: goto label_23917c;
        case 0x239180u: goto label_239180;
        case 0x239184u: goto label_239184;
        case 0x239188u: goto label_239188;
        case 0x23918cu: goto label_23918c;
        case 0x239190u: goto label_239190;
        case 0x239194u: goto label_239194;
        case 0x239198u: goto label_239198;
        case 0x23919cu: goto label_23919c;
        case 0x2391a0u: goto label_2391a0;
        case 0x2391a4u: goto label_2391a4;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391acu: goto label_2391ac;
        case 0x2391b0u: goto label_2391b0;
        case 0x2391b4u: goto label_2391b4;
        case 0x2391b8u: goto label_2391b8;
        case 0x2391bcu: goto label_2391bc;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391c4u: goto label_2391c4;
        case 0x2391c8u: goto label_2391c8;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d0u: goto label_2391d0;
        case 0x2391d4u: goto label_2391d4;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391dcu: goto label_2391dc;
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e4u: goto label_2391e4;
        case 0x2391e8u: goto label_2391e8;
        case 0x2391ecu: goto label_2391ec;
        case 0x2391f0u: goto label_2391f0;
        case 0x2391f4u: goto label_2391f4;
        case 0x2391f8u: goto label_2391f8;
        case 0x2391fcu: goto label_2391fc;
        case 0x239200u: goto label_239200;
        case 0x239204u: goto label_239204;
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        default: return;
    }

label_238bf0:
    if (ctx->pc == 0x238BF0u) {
        ctx->pc = 0x238BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BECu;
        // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BF4u;
        goto label_238bf4;
    }
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238BECu;
            // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C00u;
            goto label_238c00;
        }
    }
    ctx->pc = 0x238BF4u;
label_238bf4:
    // 0x238bf4: 0x10000005  b           . + 4 + (0x5 << 2)
label_238bf8:
    if (ctx->pc == 0x238BF8u) {
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BFCu;
        goto label_238bfc;
    }
    ctx->pc = 0x238BF4u;
    {
        const bool branch_taken_0x238bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bf4) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BFCu;
label_238bfc:
    // 0x238bfc: 0x0  nop
    ctx->pc = 0x238bfcu;
    // NOP
label_238c00:
    // 0x238c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_238c04:
    // 0x238c04: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238c08:
    // 0x238c08: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c0c:
    // 0x238c0c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_238c10:
    // 0x238c10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_238c14:
    // 0x238c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x238c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_238c18:
    // 0x238c18: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_238c1c:
    if (ctx->pc == 0x238C1Cu) {
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C20u;
        goto label_238c20;
    }
    ctx->pc = 0x238C18u;
    {
        const bool branch_taken_0x238c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c18) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238C20u;
label_238c20:
    // 0x238c20: 0x1560000d  bnez        $t3, . + 4 + (0xD << 2)
label_238c24:
    if (ctx->pc == 0x238C24u) {
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C28u;
        goto label_238c28;
    }
    ctx->pc = 0x238C20u;
    {
        const bool branch_taken_0x238c20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c20) {
            ctx->pc = 0x238C58u;
            goto label_238c58;
        }
    }
    ctx->pc = 0x238C28u;
label_238c28:
    // 0x238c28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238c2c:
    // 0x238c2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_238c30:
    // 0x238c30: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x238c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
label_238c34:
    // 0x238c34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x238c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_238c38:
    // 0x238c38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_238c3c:
    if (ctx->pc == 0x238C3Cu) {
        ctx->pc = 0x238C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C38u;
        // 0x238c3c: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C40u;
        goto label_238c40;
    }
    ctx->pc = 0x238C38u;
    {
        const bool branch_taken_0x238c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238c38) {
            ctx->pc = 0x238C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C38u;
            // 0x238c3c: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C60u;
            goto label_238c60;
        }
    }
    ctx->pc = 0x238C40u;
label_238c40:
    // 0x238c40: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x238c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
label_238c44:
    // 0x238c44: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238c48:
    // 0x238c48: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x238c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_238c4c:
    // 0x238c4c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x238c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
label_238c50:
    // 0x238c50: 0x10000006  b           . + 4 + (0x6 << 2)
label_238c54:
    if (ctx->pc == 0x238C54u) {
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C58u;
        goto label_238c58;
    }
    ctx->pc = 0x238C50u;
    {
        const bool branch_taken_0x238c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c50) {
            ctx->pc = 0x238C6Cu;
            goto label_238c6c;
        }
    }
    ctx->pc = 0x238C58u;
label_238c58:
    // 0x238c58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_238c5c:
    // 0x238c5c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x238c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_238c60:
    // 0x238c60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_238c64:
    // 0x238c64: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238c68:
    // 0x238c68: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c6c:
    // 0x238c6c: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x238c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_238c70:
    // 0x238c70: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_238c74:
    // 0x238c74: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x238c74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_238c78:
    // 0x238c78: 0x15600053  bnez        $t3, . + 4 + (0x53 << 2)
label_238c7c:
    if (ctx->pc == 0x238C7Cu) {
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C80u;
        goto label_238c80;
    }
    ctx->pc = 0x238C78u;
    {
        const bool branch_taken_0x238c78 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c78) {
            ctx->pc = 0x238DC8u;
            goto label_238dc8;
        }
    }
    ctx->pc = 0x238C80u;
label_238c80:
    // 0x238c80: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x238c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
label_238c84:
    // 0x238c84: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_238c88:
    if (ctx->pc == 0x238C88u) {
        ctx->pc = 0x238C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C84u;
        // 0x238c88: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238C8Cu;
        goto label_238c8c;
    }
    ctx->pc = 0x238C84u;
    {
        const bool branch_taken_0x238c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c84) {
            ctx->pc = 0x238C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C84u;
            // 0x238c88: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CD0u;
            goto label_238cd0;
        }
    }
    ctx->pc = 0x238C8Cu;
label_238c8c:
    // 0x238c8c: 0x828c2  srl         $a1, $t0, 3
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_238c90:
    // 0x238c90: 0x25840828  addiu       $a0, $t4, 0x828
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
label_238c94:
    // 0x238c94: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_238c98:
    // 0x238c98: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_238c9c:
    // 0x238c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ca0:
    // 0x238ca0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_238ca4:
    // 0x238ca4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x238ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_238ca8:
    // 0x238ca8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_238cac:
    // 0x238cac: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_238cb0:
    // 0x238cb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_238cb4:
    // 0x238cb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_238cb8:
    // 0x238cb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238cbc:
    // 0x238cbc: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
label_238cc0:
    // 0x238cc0: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_238cc4:
    // 0x238cc4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_238cc8:
    if (ctx->pc == 0x238CC8u) {
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CCCu;
        goto label_238ccc;
    }
    ctx->pc = 0x238CC4u;
    {
        const bool branch_taken_0x238cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc4) {
            ctx->pc = 0x238DC0u;
            goto label_238dc0;
        }
    }
    ctx->pc = 0x238CCCu;
label_238ccc:
    // 0x238ccc: 0x0  nop
    ctx->pc = 0x238cccu;
    // NOP
label_238cd0:
    // 0x238cd0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_238cd4:
    if (ctx->pc == 0x238CD4u) {
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CD8u;
        goto label_238cd8;
    }
    ctx->pc = 0x238CD0u;
    {
        const bool branch_taken_0x238cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CD8u;
label_238cd8:
    // 0x238cd8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_238cdc:
    // 0x238cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_238ce0:
    if (ctx->pc == 0x238CE0u) {
        ctx->pc = 0x238CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CDCu;
        // 0x238ce0: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CE4u;
        goto label_238ce4;
    }
    ctx->pc = 0x238CDCu;
    {
        const bool branch_taken_0x238cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CDCu;
        // 0x238ce0: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cdc) {
            ctx->pc = 0x238CF0u;
            goto label_238cf0;
        }
    }
    ctx->pc = 0x238CE4u;
label_238ce4:
    // 0x238ce4: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
label_238ce8:
    // 0x238ce8: 0x10000013  b           . + 4 + (0x13 << 2)
label_238cec:
    if (ctx->pc == 0x238CECu) {
        ctx->pc = 0x238CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CE8u;
        // 0x238cec: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CF0u;
        goto label_238cf0;
    }
    ctx->pc = 0x238CE8u;
    {
        const bool branch_taken_0x238ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CE8u;
        // 0x238cec: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ce8) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_238cf4:
    if (ctx->pc == 0x238CF4u) {
        ctx->pc = 0x238CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF0u;
        // 0x238cf4: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CF8u;
        goto label_238cf8;
    }
    ctx->pc = 0x238CF0u;
    {
        const bool branch_taken_0x238cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF0u;
        // 0x238cf4: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cf0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF8u;
label_238cf8:
    // 0x238cf8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x238cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
label_238cfc:
    // 0x238cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_238d00:
    if (ctx->pc == 0x238D00u) {
        ctx->pc = 0x238D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CFCu;
        // 0x238d00: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D04u;
        goto label_238d04;
    }
    ctx->pc = 0x238CFCu;
    {
        const bool branch_taken_0x238cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CFCu;
        // 0x238d00: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cfc) {
            ctx->pc = 0x238D10u;
            goto label_238d10;
        }
    }
    ctx->pc = 0x238D04u;
label_238d04:
    // 0x238d04: 0x81302  srl         $v0, $t0, 12
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
label_238d08:
    // 0x238d08: 0x1000000b  b           . + 4 + (0xB << 2)
label_238d0c:
    if (ctx->pc == 0x238D0Cu) {
        ctx->pc = 0x238D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D08u;
        // 0x238d0c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D10u;
        goto label_238d10;
    }
    ctx->pc = 0x238D08u;
    {
        const bool branch_taken_0x238d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D08u;
        // 0x238d0c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d08) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D10u;
label_238d10:
    // 0x238d10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_238d14:
    if (ctx->pc == 0x238D14u) {
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D18u;
        goto label_238d18;
    }
    ctx->pc = 0x238D10u;
    {
        const bool branch_taken_0x238d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d10) {
            ctx->pc = 0x238D28u;
            goto label_238d28;
        }
    }
    ctx->pc = 0x238D18u;
label_238d18:
    // 0x238d18: 0x813c2  srl         $v0, $t0, 15
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
label_238d1c:
    // 0x238d1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_238d20:
    if (ctx->pc == 0x238D20u) {
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D1Cu;
        // 0x238d20: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D24u;
        goto label_238d24;
    }
    ctx->pc = 0x238D1Cu;
    {
        const bool branch_taken_0x238d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D1Cu;
        // 0x238d20: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d1c) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D24u;
label_238d24:
    // 0x238d24: 0x0  nop
    ctx->pc = 0x238d24u;
    // NOP
label_238d28:
    // 0x238d28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_238d2c:
    if (ctx->pc == 0x238D2Cu) {
        ctx->pc = 0x238D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D28u;
        // 0x238d2c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D30u;
        goto label_238d30;
    }
    ctx->pc = 0x238D28u;
    {
        const bool branch_taken_0x238d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238d28) {
            ctx->pc = 0x238D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D28u;
            // 0x238d2c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D30u;
label_238d30:
    // 0x238d30: 0x81482  srl         $v0, $t0, 18
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
label_238d34:
    // 0x238d34: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_238d38:
    // 0x238d38: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238d3c:
    // 0x238d3c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_238d40:
    // 0x238d40: 0x24420830  addiu       $v0, $v0, 0x830
    ctx->pc = 0x238d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
label_238d44:
    // 0x238d44: 0x244afff8  addiu       $t2, $v0, -0x8
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_238d48:
    // 0x238d48: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x238d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_238d4c:
    // 0x238d4c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_238d50:
    // 0x238d50: 0x54c7000d  bnel        $a2, $a3, . + 4 + (0xD << 2)
label_238d54:
    if (ctx->pc == 0x238D54u) {
        ctx->pc = 0x238D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D50u;
        // 0x238d54: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D58u;
        goto label_238d58;
    }
    ctx->pc = 0x238D50u;
    {
        const bool branch_taken_0x238d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x238d50) {
            ctx->pc = 0x238D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D50u;
            // 0x238d54: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D88u;
            goto label_238d88;
        }
    }
    ctx->pc = 0x238D58u;
label_238d58:
    // 0x238d58: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x238d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_238d5c:
    // 0x238d5c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x238d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_238d60:
    // 0x238d60: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x238d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_238d64:
    // 0x238d64: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_238d68:
    // 0x238d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238d6c:
    // 0x238d6c: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x238d6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
label_238d70:
    // 0x238d70: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x238d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_238d74:
    // 0x238d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_238d78:
    // 0x238d78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_238d7c:
    // 0x238d7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238d80:
    // 0x238d80: 0x1000000d  b           . + 4 + (0xD << 2)
label_238d84:
    if (ctx->pc == 0x238D84u) {
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D88u;
        goto label_238d88;
    }
    ctx->pc = 0x238D80u;
    {
        const bool branch_taken_0x238d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d80) {
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x10000004  b           . + 4 + (0x4 << 2)
label_238d8c:
    if (ctx->pc == 0x238D8Cu) {
        ctx->pc = 0x238D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D88u;
        // 0x238d8c: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D90u;
        goto label_238d90;
    }
    ctx->pc = 0x238D88u;
    {
        const bool branch_taken_0x238d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D88u;
        // 0x238d8c: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d88) {
            ctx->pc = 0x238D9Cu;
            goto label_238d9c;
        }
    }
    ctx->pc = 0x238D90u;
label_238d90:
    // 0x238d90: 0x50c70009  beql        $a2, $a3, . + 4 + (0x9 << 2)
label_238d94:
    if (ctx->pc == 0x238D94u) {
        ctx->pc = 0x238D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D90u;
        // 0x238d94: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D98u;
        goto label_238d98;
    }
    ctx->pc = 0x238D90u;
    {
        const bool branch_taken_0x238d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x238d90) {
            ctx->pc = 0x238D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D90u;
            // 0x238d94: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D98u;
label_238d98:
    // 0x238d98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_238d9c:
    // 0x238d9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_238da0:
    // 0x238da0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_238da4:
    // 0x238da4: 0x0  nop
    ctx->pc = 0x238da4u;
    // NOP
label_238da8:
    // 0x238da8: 0x0  nop
    ctx->pc = 0x238da8u;
    // NOP
label_238dac:
    // 0x238dac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_238db0:
    if (ctx->pc == 0x238DB0u) {
        ctx->pc = 0x238DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DACu;
        // 0x238db0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DB4u;
        goto label_238db4;
    }
    ctx->pc = 0x238DACu;
    {
        const bool branch_taken_0x238dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238dac) {
            ctx->pc = 0x238DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DACu;
            // 0x238db0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238d90;
        }
    }
    ctx->pc = 0x238DB4u;
label_238db4:
    // 0x238db4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x238db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_238db8:
    // 0x238db8: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238db8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
label_238dbc:
    // 0x238dbc: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_238dc0:
    // 0x238dc0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x238dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_238dc4:
    // 0x238dc4: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x238dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_238dc8:
    // 0x238dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238dcc:
    // 0x238dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238dd0:
    // 0x238dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238dd4:
    // 0x238dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238dd8:
    // 0x238dd8: 0x808e9fc  j           func_23A7F0
label_238ddc:
    if (ctx->pc == 0x238DDCu) {
        ctx->pc = 0x238DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DD8u;
        // 0x238ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DE0u;
        goto label_238de0;
    }
    ctx->pc = 0x238DD8u;
    ctx->pc = 0x238DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DD8u;
    // 0x238ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238DE0u;
label_238de0:
    // 0x238de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238de4:
    // 0x238de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238de8:
    // 0x238de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238dec:
    // 0x238dec: 0x3e00008  jr          $ra
label_238df0:
    if (ctx->pc == 0x238DF0u) {
        ctx->pc = 0x238DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DECu;
        // 0x238df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238DF4u;
        goto label_238df4;
    }
    ctx->pc = 0x238DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DECu;
        // 0x238df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238DF4u;
label_238df4:
    // 0x238df4: 0x0  nop
    ctx->pc = 0x238df4u;
    // NOP
label_238df8:
    // 0x238df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_238dfc:
    // 0x238dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238e00:
    // 0x238e00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238e04:
    // 0x238e04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238e08:
    // 0x238e08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238e0c:
    // 0x238e0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_238e10:
    // 0x238e10: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x238e10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_238e14:
    // 0x238e14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_238e18:
    // 0x238e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_238e1c:
    // 0x238e1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x238e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_238e20:
    // 0x238e20: 0xc08e9dc  jal         func_23A770
label_238e24:
    if (ctx->pc == 0x238E24u) {
        ctx->pc = 0x238E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E20u;
        // 0x238e24: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E28u;
        goto label_238e28;
    }
    ctx->pc = 0x238E20u;
    SET_GPR_U32(ctx, 31, 0x238E28u);
    ctx->pc = 0x238E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E20u;
    // 0x238e24: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x238E28u;
label_238e28:
    // 0x238e28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238e2c:
    // 0x238e2c: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x238e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_238e30:
    // 0x238e30: 0x24540828  addiu       $s4, $v0, 0x828
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
label_238e34:
    // 0x238e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238e38:
    // 0x238e38: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238e3c:
    // 0x238e3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_238e40:
    // 0x238e40: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x238e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_238e44:
    // 0x238e44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_238e48:
    // 0x238e48: 0x2903e  dsrl32      $s2, $v0, 0
    ctx->pc = 0x238e48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 0));
label_238e4c:
    // 0x238e4c: 0x250802f  dsubu       $s0, $s2, $s0
    ctx->pc = 0x238e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
label_238e50:
    // 0x238e50: 0x66100fef  daddiu      $s0, $s0, 0xFEF
    ctx->pc = 0x238e50u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
label_238e54:
    // 0x238e54: 0x10833a  dsrl        $s0, $s0, 12
    ctx->pc = 0x238e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 12);
label_238e58:
    // 0x238e58: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x238e58u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
label_238e5c:
    // 0x238e5c: 0x108338  dsll        $s0, $s0, 12
    ctx->pc = 0x238e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 12);
label_238e60:
    // 0x238e60: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x238e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
label_238e64:
    // 0x238e64: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_238e68:
    if (ctx->pc == 0x238E68u) {
        ctx->pc = 0x238E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E64u;
        // 0x238e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E6Cu;
        goto label_238e6c;
    }
    ctx->pc = 0x238E64u;
    {
        const bool branch_taken_0x238e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E64u;
        // 0x238e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e64) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238E6Cu;
label_238e6c:
    // 0x238e6c: 0xc08f0fe  jal         func_23C3F8
label_238e70:
    if (ctx->pc == 0x238E70u) {
        ctx->pc = 0x238E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E6Cu;
        // 0x238e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E74u;
        goto label_238e74;
    }
    ctx->pc = 0x238E6Cu;
    SET_GPR_U32(ctx, 31, 0x238E74u);
    ctx->pc = 0x238E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E6Cu;
    // 0x238e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    { ctx->pc = 0x23c3f8; return; }
    ctx->pc = 0x238E74u;
label_238e74:
    // 0x238e74: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238e78:
    // 0x238e78: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x238e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_238e7c:
    // 0x238e7c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x238e7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_238e80:
    // 0x238e80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_238e84:
    // 0x238e84: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_238e88:
    if (ctx->pc == 0x238E88u) {
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238E8Cu;
        goto label_238e8c;
    }
    ctx->pc = 0x238E84u;
    {
        const bool branch_taken_0x238e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e84) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238E8Cu;
label_238e8c:
    // 0x238e8c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x238e8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
label_238e90:
    // 0x238e90: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x238e90u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_238e94:
    // 0x238e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238e98:
    // 0x238e98: 0xc08f0fe  jal         func_23C3F8
label_238e9c:
    if (ctx->pc == 0x238E9Cu) {
        ctx->pc = 0x238E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E98u;
        // 0x238e9c: 0x132823  negu        $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EA0u;
        goto label_238ea0;
    }
    ctx->pc = 0x238E98u;
    SET_GPR_U32(ctx, 31, 0x238EA0u);
    ctx->pc = 0x238E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E98u;
    // 0x238e9c: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    { ctx->pc = 0x23c3f8; return; }
    ctx->pc = 0x238EA0u;
label_238ea0:
    // 0x238ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238ea4:
    // 0x238ea4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_238ea8:
    // 0x238ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x238ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238eac:
    // 0x238eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238eb0:
    // 0x238eb0: 0x14460017  bne         $v0, $a2, . + 4 + (0x17 << 2)
label_238eb4:
    if (ctx->pc == 0x238EB4u) {
        ctx->pc = 0x238EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB0u;
        // 0x238eb4: 0x24670c58  addiu       $a3, $v1, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EB8u;
        goto label_238eb8;
    }
    ctx->pc = 0x238EB0u;
    {
        const bool branch_taken_0x238eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x238EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB0u;
        // 0x238eb4: 0x24670c58  addiu       $a3, $v1, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238eb0) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238EB8u;
label_238eb8:
    // 0x238eb8: 0xc08f0fe  jal         func_23C3F8
label_238ebc:
    if (ctx->pc == 0x238EBCu) {
        ctx->pc = 0x238EC0u;
        goto label_238ec0;
    }
    ctx->pc = 0x238EB8u;
    SET_GPR_U32(ctx, 31, 0x238EC0u);
    ctx->pc = 0x23C3F8u;
    { ctx->pc = 0x23c3f8; return; }
    ctx->pc = 0x238EC0u;
label_238ec0:
    // 0x238ec0: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238ec4:
    // 0x238ec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x238ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238ec8:
    // 0x238ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ecc:
    // 0x238ecc: 0xe69023  subu        $s2, $a3, $a2
    ctx->pc = 0x238eccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_238ed0:
    // 0x238ed0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x238ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_238ed4:
    // 0x238ed4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x238ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_238ed8:
    // 0x238ed8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x238ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_238edc:
    // 0x238edc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x238edcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_238ee0:
    // 0x238ee0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_238ee4:
    if (ctx->pc == 0x238EE4u) {
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE0u;
        // 0x238ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238EE8u;
        goto label_238ee8;
    }
    ctx->pc = 0x238EE0u;
    {
        const bool branch_taken_0x238ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE0u;
        // 0x238ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ee0) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238EE8u;
label_238ee8:
    // 0x238ee8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238eec:
    // 0x238eec: 0x8c430c40  lw          $v1, 0xC40($v0)
    ctx->pc = 0x238eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3136)));
label_238ef0:
    // 0x238ef0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238ef4:
    // 0x238ef4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_238ef8:
    // 0x238ef8: 0xac430c58  sw          $v1, 0xC58($v0)
    ctx->pc = 0x238ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3160), GPR_U32(ctx, 3));
label_238efc:
    // 0x238efc: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x238efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_238f00:
    // 0x238f00: 0xc08e9fc  jal         func_23A7F0
label_238f04:
    if (ctx->pc == 0x238F04u) {
        ctx->pc = 0x238F08u;
        goto label_238f08;
    }
    ctx->pc = 0x238F00u;
    SET_GPR_U32(ctx, 31, 0x238F08u);
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238F08u;
label_238f08:
    // 0x238f08: 0x1000000e  b           . + 4 + (0xE << 2)
label_238f0c:
    if (ctx->pc == 0x238F0Cu) {
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F10u;
        goto label_238f10;
    }
    ctx->pc = 0x238F08u;
    {
        const bool branch_taken_0x238f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f08) {
            ctx->pc = 0x238F44u;
            goto label_238f44;
        }
    }
    ctx->pc = 0x238F10u;
label_238f10:
    // 0x238f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238f14:
    // 0x238f14: 0x250182f  dsubu       $v1, $s2, $s0
    ctx->pc = 0x238f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
label_238f18:
    // 0x238f18: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_238f1c:
    // 0x238f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238f20:
    // 0x238f20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x238f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_238f24:
    // 0x238f24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x238f24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_238f28:
    // 0x238f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238f2c:
    // 0x238f2c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x238f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_238f30:
    // 0x238f30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_238f34:
    // 0x238f34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_238f38:
    // 0x238f38: 0xc08e9fc  jal         func_23A7F0
label_238f3c:
    if (ctx->pc == 0x238F3Cu) {
        ctx->pc = 0x238F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F38u;
        // 0x238f3c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F40u;
        goto label_238f40;
    }
    ctx->pc = 0x238F38u;
    SET_GPR_U32(ctx, 31, 0x238F40u);
    ctx->pc = 0x238F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F38u;
    // 0x238f3c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238F40u;
label_238f40:
    // 0x238f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238f44:
    // 0x238f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238f48:
    // 0x238f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238f4c:
    // 0x238f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238f50:
    // 0x238f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238f54:
    // 0x238f54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x238f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238f58:
    // 0x238f58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x238f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_238f5c:
    // 0x238f5c: 0x3e00008  jr          $ra
label_238f60:
    if (ctx->pc == 0x238F60u) {
        ctx->pc = 0x238F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F5Cu;
        // 0x238f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F64u;
        goto label_238f64;
    }
    ctx->pc = 0x238F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F5Cu;
        // 0x238f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238F64u;
label_238f64:
    // 0x238f64: 0x0  nop
    ctx->pc = 0x238f64u;
    // NOP
label_238f68:
    // 0x238f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238f6c:
    // 0x238f6c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_238f70:
    // 0x238f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238f74:
    // 0x238f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238f78:
    // 0x238f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238f7c:
    // 0x238f7c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x238f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_238f80:
    // 0x238f80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x238f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238f84:
    // 0x238f84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x238f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_238f88:
    // 0x238f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238f8c:
    // 0x238f8c: 0xc0693f6  jal         func_1A4FD8
label_238f90:
    if (ctx->pc == 0x238F90u) {
        ctx->pc = 0x238F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F8Cu;
        // 0x238f90: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F94u;
        goto label_238f94;
    }
    ctx->pc = 0x238F8Cu;
    SET_GPR_U32(ctx, 31, 0x238F94u);
    ctx->pc = 0x238F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F8Cu;
    // 0x238f90: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FD8u;
    { ctx->pc = 0x1a4fd8; return; }
    ctx->pc = 0x238F94u;
label_238f94:
    // 0x238f94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238f98:
    // 0x238f98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x238f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238f9c:
    // 0x238f9c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_238fa0:
    if (ctx->pc == 0x238FA0u) {
        ctx->pc = 0x238FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F9Cu;
        // 0x238fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FA4u;
        goto label_238fa4;
    }
    ctx->pc = 0x238F9Cu;
    {
        const bool branch_taken_0x238f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x238f9c) {
            ctx->pc = 0x238FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238F9Cu;
            // 0x238fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FB4u;
            goto label_238fb4;
        }
    }
    ctx->pc = 0x238FA4u;
label_238fa4:
    // 0x238fa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x238fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_238fa8:
    // 0x238fa8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_238fac:
    if (ctx->pc == 0x238FACu) {
        ctx->pc = 0x238FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FA8u;
        // 0x238fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FB0u;
        goto label_238fb0;
    }
    ctx->pc = 0x238FA8u;
    {
        const bool branch_taken_0x238fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238fa8) {
            ctx->pc = 0x238FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238FA8u;
            // 0x238fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FB0u;
            goto label_238fb0;
        }
    }
    ctx->pc = 0x238FB0u;
label_238fb0:
    // 0x238fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238fb4:
    // 0x238fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238fb8:
    // 0x238fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238fbc:
    // 0x238fbc: 0x3e00008  jr          $ra
label_238fc0:
    if (ctx->pc == 0x238FC0u) {
        ctx->pc = 0x238FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FBCu;
        // 0x238fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FC4u;
        goto label_238fc4;
    }
    ctx->pc = 0x238FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FBCu;
        // 0x238fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238FC4u;
label_238fc4:
    // 0x238fc4: 0x0  nop
    ctx->pc = 0x238fc4u;
    // NOP
label_238fc8:
    // 0x238fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238fcc:
    // 0x238fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238fd0:
    // 0x238fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238fd4:
    // 0x238fd4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x238fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_238fd8:
    // 0x238fd8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x238fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238fdc:
    // 0x238fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238fe0:
    // 0x238fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_238fe4:
    // 0x238fe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_238fe8:
    // 0x238fe8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_238fec:
    // 0x238fec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x238fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_238ff0:
    // 0x238ff0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x238ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_238ff4:
    // 0x238ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238ff8:
    // 0x238ff8: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_238ffc:
    // 0x238ffc: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
label_239000:
    if (ctx->pc == 0x239000u) {
        ctx->pc = 0x239000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FFCu;
        // 0x239000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239004u;
        goto label_239004;
    }
    ctx->pc = 0x238FFCu;
    {
        const bool branch_taken_0x238ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FFCu;
        // 0x239000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ffc) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239004u;
label_239004:
    // 0x239004: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_239008:
    // 0x239008: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x239008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_23900c:
    // 0x23900c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239010:
    if (ctx->pc == 0x239010u) {
        ctx->pc = 0x239014u;
        goto label_239014;
    }
    ctx->pc = 0x23900Cu;
    {
        const bool branch_taken_0x23900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23900c) {
            ctx->pc = 0x239020u;
            goto label_239020;
        }
    }
    ctx->pc = 0x239014u;
label_239014:
    // 0x239014: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239018:
    // 0x239018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23901c:
    if (ctx->pc == 0x23901Cu) {
        ctx->pc = 0x23901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239018u;
        // 0x23901c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239020u;
        goto label_239020;
    }
    ctx->pc = 0x239018u;
    {
        const bool branch_taken_0x239018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239018u;
        // 0x23901c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239018) {
            ctx->pc = 0x239038u;
            goto label_239038;
        }
    }
    ctx->pc = 0x239020u;
label_239020:
    // 0x239020: 0xc08fcc6  jal         func_23F318
label_239024:
    if (ctx->pc == 0x239024u) {
        ctx->pc = 0x239028u;
        goto label_239028;
    }
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x23F318u;
    { ctx->pc = 0x23f318; return; }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_23902c:
    if (ctx->pc == 0x23902Cu) {
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239030u;
        goto label_239030;
    }
    ctx->pc = 0x239028u;
    {
        const bool branch_taken_0x239028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239028) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239030u;
label_239030:
    // 0x239030: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_239034:
    // 0x239034: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x239034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_239038:
    // 0x239038: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x239038u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_23903c:
    // 0x23903c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_239040:
    if (ctx->pc == 0x239040u) {
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239044u;
        goto label_239044;
    }
    ctx->pc = 0x23903Cu;
    {
        const bool branch_taken_0x23903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23903c) {
            ctx->pc = 0x2390B8u;
            goto label_2390b8;
        }
    }
    ctx->pc = 0x239044u;
label_239044:
    // 0x239044: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_239048:
    // 0x239048: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_23904c:
    if (ctx->pc == 0x23904Cu) {
        ctx->pc = 0x23904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239048u;
        // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239050u;
        goto label_239050;
    }
    ctx->pc = 0x239048u;
    {
        const bool branch_taken_0x239048 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239048) {
            ctx->pc = 0x23904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239048u;
            // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239070u;
            goto label_239070;
        }
    }
    ctx->pc = 0x239050u;
label_239050:
    // 0x239050: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239054:
    // 0x239054: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239058:
    // 0x239058: 0x0  nop
    ctx->pc = 0x239058u;
    // NOP
label_23905c:
    // 0x23905c: 0x0  nop
    ctx->pc = 0x23905cu;
    // NOP
label_239060:
    // 0x239060: 0x0  nop
    ctx->pc = 0x239060u;
    // NOP
label_239064:
    // 0x239064: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239068:
    if (ctx->pc == 0x239068u) {
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23906Cu;
        goto label_23906c;
    }
    ctx->pc = 0x239064u;
    {
        const bool branch_taken_0x239064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239064) {
            ctx->pc = 0x239050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239050;
        }
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x23906cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_239070:
    // 0x239070: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239074:
    // 0x239074: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_239078:
    // 0x239078: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x239078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23907c:
    // 0x23907c: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x23907cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_239080:
    // 0x239080: 0x40f809  jalr        $v0
label_239084:
    if (ctx->pc == 0x239084u) {
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239088u;
        goto label_239088;
    }
    ctx->pc = 0x239080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239088u);
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239080u, 0x239088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239088u;
label_239088:
    // 0x239088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23908c:
    // 0x23908c: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_239090:
    if (ctx->pc == 0x239090u) {
        ctx->pc = 0x239090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23908Cu;
        // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239094u;
        goto label_239094;
    }
    ctx->pc = 0x23908Cu;
    {
        const bool branch_taken_0x23908c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23908c) {
            ctx->pc = 0x239090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23908Cu;
            // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239094u;
label_239094:
    // 0x239094: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239098:
    // 0x239098: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_23909c:
    // 0x23909c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2390a0:
    // 0x2390a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2390a4:
    // 0x2390a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2390a8:
    if (ctx->pc == 0x2390A8u) {
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390ACu;
        goto label_2390ac;
    }
    ctx->pc = 0x2390A4u;
    {
        const bool branch_taken_0x2390a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390a4) {
            ctx->pc = 0x239048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239048;
        }
    }
    ctx->pc = 0x2390ACu;
label_2390ac:
    // 0x2390ac: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0x0  nop
    ctx->pc = 0x2390b4u;
    // NOP
label_2390b8:
    // 0x2390b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2390b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2390bc:
    // 0x2390bc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_2390c0:
    if (ctx->pc == 0x2390C0u) {
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390C4u;
        goto label_2390c4;
    }
    ctx->pc = 0x2390BCu;
    {
        const bool branch_taken_0x2390bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390bc) {
            ctx->pc = 0x239208u;
            goto label_239208;
        }
    }
    ctx->pc = 0x2390C4u;
label_2390c4:
    // 0x2390c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2390c8:
    if (ctx->pc == 0x2390C8u) {
        ctx->pc = 0x2390CCu;
        goto label_2390cc;
    }
    ctx->pc = 0x2390C4u;
    {
        const bool branch_taken_0x2390c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390c4) {
            ctx->pc = 0x2390D8u;
            goto label_2390d8;
        }
    }
    ctx->pc = 0x2390CCu;
label_2390cc:
    // 0x2390cc: 0x0  nop
    ctx->pc = 0x2390ccu;
    // NOP
label_2390d0:
    // 0x2390d0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2390d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2390d4:
    // 0x2390d4: 0x0  nop
    ctx->pc = 0x2390d4u;
    // NOP
label_2390d8:
    // 0x2390d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_2390dc:
    if (ctx->pc == 0x2390DCu) {
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390E0u;
        goto label_2390e0;
    }
    ctx->pc = 0x2390D8u;
    {
        const bool branch_taken_0x2390d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390d8) {
            ctx->pc = 0x239100u;
            goto label_239100;
        }
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2390e4:
    // 0x2390e4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2390e8:
    // 0x2390e8: 0x0  nop
    ctx->pc = 0x2390e8u;
    // NOP
label_2390ec:
    // 0x2390ec: 0x0  nop
    ctx->pc = 0x2390ecu;
    // NOP
label_2390f0:
    // 0x2390f0: 0x0  nop
    ctx->pc = 0x2390f0u;
    // NOP
label_2390f4:
    // 0x2390f4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2390f8:
    if (ctx->pc == 0x2390F8u) {
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390FCu;
        goto label_2390fc;
    }
    ctx->pc = 0x2390F4u;
    {
        const bool branch_taken_0x2390f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390f4) {
            ctx->pc = 0x2390E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2390e0;
        }
    }
    ctx->pc = 0x2390FCu;
label_2390fc:
    // 0x2390fc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2390fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_239100:
    // 0x239100: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_239104:
    if (ctx->pc == 0x239104u) {
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239108u;
        goto label_239108;
    }
    ctx->pc = 0x239100u;
    {
        const bool branch_taken_0x239100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239100) {
            ctx->pc = 0x239138u;
            goto label_239138;
        }
    }
    ctx->pc = 0x239108u;
label_239108:
    // 0x239108: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23910c:
    // 0x23910c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239110:
    // 0x239110: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x239110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_239114:
    // 0x239114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239118:
    // 0x239118: 0xc08e96a  jal         func_23A5A8
label_23911c:
    if (ctx->pc == 0x23911Cu) {
        ctx->pc = 0x23911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239118u;
        // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239120u;
        goto label_239120;
    }
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 31, 0x239120u);
    ctx->pc = 0x23911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239118u;
    // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_239124:
    // 0x239124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239128:
    // 0x239128: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23912c:
    // 0x23912c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239130:
    // 0x239130: 0x1000002a  b           . + 4 + (0x2A << 2)
label_239134:
    if (ctx->pc == 0x239134u) {
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239138u;
        goto label_239138;
    }
    ctx->pc = 0x239130u;
    {
        const bool branch_taken_0x239130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239130) {
            ctx->pc = 0x2391DCu;
            goto label_2391dc;
        }
    }
    ctx->pc = 0x239138u;
label_239138:
    // 0x239138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23913c:
    // 0x23913c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239140:
    // 0x239140: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x239140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_239144:
    // 0x239144: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_239148:
    if (ctx->pc == 0x239148u) {
        ctx->pc = 0x239148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239144u;
        // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23914Cu;
        goto label_23914c;
    }
    ctx->pc = 0x239144u;
    {
        const bool branch_taken_0x239144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239144) {
            ctx->pc = 0x239148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239144u;
            // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            goto label_239188;
        }
    }
    ctx->pc = 0x23914Cu;
label_23914c:
    // 0x23914c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x23914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_239150:
    // 0x239150: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_239154:
    if (ctx->pc == 0x239154u) {
        ctx->pc = 0x239154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239150u;
        // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239158u;
        goto label_239158;
    }
    ctx->pc = 0x239150u;
    {
        const bool branch_taken_0x239150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239150) {
            ctx->pc = 0x239154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239150u;
            // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            goto label_239188;
        }
    }
    ctx->pc = 0x239158u;
label_239158:
    // 0x239158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23915c:
    // 0x23915c: 0xc08e96a  jal         func_23A5A8
label_239160:
    if (ctx->pc == 0x239160u) {
        ctx->pc = 0x239160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23915Cu;
        // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239164u;
        goto label_239164;
    }
    ctx->pc = 0x23915Cu;
    SET_GPR_U32(ctx, 31, 0x239164u);
    ctx->pc = 0x239160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23915Cu;
    // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x239164u;
label_239164:
    // 0x239164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239168:
    // 0x239168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23916c:
    // 0x23916c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239170:
    // 0x239170: 0xc08e1d2  jal         func_238748
label_239174:
    if (ctx->pc == 0x239174u) {
        ctx->pc = 0x239174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239170u;
        // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239178u;
        goto label_239178;
    }
    ctx->pc = 0x239170u;
    SET_GPR_U32(ctx, 31, 0x239178u);
    ctx->pc = 0x239174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239170u;
    // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x239178u;
label_239178:
    // 0x239178: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_23917c:
    if (ctx->pc == 0x23917Cu) {
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239178u;
        // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239180u;
        goto label_239180;
    }
    ctx->pc = 0x239178u;
    {
        const bool branch_taken_0x239178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239178) {
            ctx->pc = 0x23917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239178u;
            // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x239180u;
label_239180:
    // 0x239180: 0x1000007b  b           . + 4 + (0x7B << 2)
label_239184:
    if (ctx->pc == 0x239184u) {
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239188u;
        goto label_239188;
    }
    ctx->pc = 0x239180u;
    {
        const bool branch_taken_0x239180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239180) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239188u;
label_239188:
    // 0x239188: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23918c:
    // 0x23918c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_239190:
    if (ctx->pc == 0x239190u) {
        ctx->pc = 0x239190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23918Cu;
        // 0x239190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239194u;
        goto label_239194;
    }
    ctx->pc = 0x23918Cu;
    {
        const bool branch_taken_0x23918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23918c) {
            ctx->pc = 0x239190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23918Cu;
            // 0x239190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391C0u;
            goto label_2391c0;
        }
    }
    ctx->pc = 0x239194u;
label_239194:
    // 0x239194: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239198:
    // 0x239198: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23919c:
    // 0x23919c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x23919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2391a0:
    // 0x2391a0: 0x40f809  jalr        $v0
label_2391a4:
    if (ctx->pc == 0x2391A4u) {
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391A8u;
        goto label_2391a8;
    }
    ctx->pc = 0x2391A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2391A8u);
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391A0u, 0x2391A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2391A8u;
label_2391a8:
    // 0x2391a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2391a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2391ac:
    // 0x2391ac: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_2391b0:
    if (ctx->pc == 0x2391B0u) {
        ctx->pc = 0x2391B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391ACu;
        // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391B4u;
        goto label_2391b4;
    }
    ctx->pc = 0x2391ACu;
    {
        const bool branch_taken_0x2391ac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2391ac) {
            ctx->pc = 0x2391B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391ACu;
            // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x2391B4u;
label_2391b4:
    // 0x2391b4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2391b8:
    if (ctx->pc == 0x2391B8u) {
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391BCu;
        goto label_2391bc;
    }
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2391BCu;
label_2391bc:
    // 0x2391bc: 0x0  nop
    ctx->pc = 0x2391bcu;
    // NOP
label_2391c0:
    // 0x2391c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2391c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2391c4:
    // 0x2391c4: 0xc08e96a  jal         func_23A5A8
label_2391c8:
    if (ctx->pc == 0x2391C8u) {
        ctx->pc = 0x2391C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391C4u;
        // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391CCu;
        goto label_2391cc;
    }
    ctx->pc = 0x2391C4u;
    SET_GPR_U32(ctx, 31, 0x2391CCu);
    ctx->pc = 0x2391C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391C4u;
    // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x2391CCu;
label_2391cc:
    // 0x2391cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2391d0:
    // 0x2391d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2391d4:
    // 0x2391d4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2391d8:
    // 0x2391d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391dc:
    // 0x2391dc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2391dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2391e0:
    // 0x2391e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2391e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2391e4:
    // 0x2391e4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2391e8:
    // 0x2391e8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2391ec:
    // 0x2391ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2391f0:
    // 0x2391f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391f4:
    // 0x2391f4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_2391f8:
    if (ctx->pc == 0x2391F8u) {
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391FCu;
        goto label_2391fc;
    }
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x2390D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2390d0;
        }
    }
    ctx->pc = 0x2391FCu;
label_2391fc:
    // 0x2391fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_239200:
    if (ctx->pc == 0x239200u) {
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239204u;
        goto label_239204;
    }
    ctx->pc = 0x2391FCu;
    {
        const bool branch_taken_0x2391fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391fc) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239204u;
label_239204:
    // 0x239204: 0x0  nop
    ctx->pc = 0x239204u;
    // NOP
label_239208:
    // 0x239208: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_23920c:
    if (ctx->pc == 0x23920Cu) {
        ctx->pc = 0x239210u;
        goto label_239210;
    }
    ctx->pc = 0x239208u;
    {
        const bool branch_taken_0x239208 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239208) {
            ctx->pc = 0x239234u;
            goto label_239234;
        }
    }
    ctx->pc = 0x239210u;
label_239210:
    // 0x239210: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x239210u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239214:
    // 0x239214: 0x0  nop
    ctx->pc = 0x239214u;
    // NOP
label_239218:
    // 0x239218: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23921c:
    // 0x23921c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239220:
    // 0x239220: 0x0  nop
    ctx->pc = 0x239220u;
    // NOP
label_239224:
    // 0x239224: 0x0  nop
    ctx->pc = 0x239224u;
    // NOP
label_239228:
    // 0x239228: 0x0  nop
    ctx->pc = 0x239228u;
    // NOP
label_23922c:
    // 0x23922c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239230:
    if (ctx->pc == 0x239230u) {
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239234u;
        goto label_239234;
    }
    ctx->pc = 0x23922Cu;
    {
        const bool branch_taken_0x23922c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23922c) {
            ctx->pc = 0x239218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239218;
        }
    }
    ctx->pc = 0x239234u;
label_239234:
    // 0x239234: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_239238:
    if (ctx->pc == 0x239238u) {
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23923Cu;
        goto label_23923c;
    }
    ctx->pc = 0x239234u;
    {
        const bool branch_taken_0x239234 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x239234) {
            ctx->pc = 0x239238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239234u;
            // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23926Cu;
            goto label_23926c;
        }
    }
    ctx->pc = 0x23923Cu;
label_23923c:
    // 0x23923c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239240:
    // 0x239240: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_239244:
    // 0x239244: 0xc08e8e0  jal         func_23A380
label_239248:
    if (ctx->pc == 0x239248u) {
        ctx->pc = 0x239248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239244u;
        // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23924Cu;
        goto label_23924c;
    }
    ctx->pc = 0x239244u;
    SET_GPR_U32(ctx, 31, 0x23924Cu);
    ctx->pc = 0x239248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239244u;
    // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    { ctx->pc = 0x23a380; return; }
    ctx->pc = 0x23924Cu;
label_23924c:
    // 0x23924c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239250:
    if (ctx->pc == 0x239250u) {
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239254u;
        goto label_239254;
    }
    ctx->pc = 0x23924Cu;
    {
        const bool branch_taken_0x23924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23924c) {
            ctx->pc = 0x239260u;
            goto label_239260;
        }
    }
    ctx->pc = 0x239254u;
label_239254:
    // 0x239254: 0x10000003  b           . + 4 + (0x3 << 2)
label_239258:
    if (ctx->pc == 0x239258u) {
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23925Cu;
        goto label_23925c;
    }
    ctx->pc = 0x239254u;
    {
        const bool branch_taken_0x239254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239254) {
            ctx->pc = 0x239264u;
            goto label_239264;
        }
    }
    ctx->pc = 0x23925Cu;
label_23925c:
    // 0x23925c: 0x0  nop
    ctx->pc = 0x23925cu;
    // NOP
label_239260:
    // 0x239260: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_239264:
    // 0x239264: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239268:
    // 0x239268: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23926c:
    // 0x23926c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x23926cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_239270:
    // 0x239270: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239274:
    // 0x239274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239278:
    // 0x239278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23927c:
    // 0x23927c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x23927cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_239280:
    // 0x239280: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_239284:
    // 0x239284: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x239284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_239288:
    // 0x239288: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_23928c:
    if (ctx->pc == 0x23928Cu) {
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239290u;
        goto label_239290;
    }
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x2392D0u;
            goto label_2392d0;
        }
    }
    ctx->pc = 0x239290u;
label_239290:
    // 0x239290: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x239290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_239294:
    // 0x239294: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239294u;
        // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239294) {
            ctx->pc = 0x239298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239294u;
            // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392D4u;
            goto label_2392d4;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2392a0:
    // 0x2392a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2392a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2392a4:
    // 0x2392a4: 0xc08e96a  jal         func_23A5A8
label_2392a8:
    if (ctx->pc == 0x2392A8u) {
        ctx->pc = 0x2392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392A4u;
        // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392ACu;
        goto label_2392ac;
    }
    ctx->pc = 0x2392A4u;
    SET_GPR_U32(ctx, 31, 0x2392ACu);
    ctx->pc = 0x2392A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392A4u;
    // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x2392ACu;
label_2392ac:
    // 0x2392ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2392acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2392b0:
    // 0x2392b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2392b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2392b4:
    // 0x2392b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2392b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2392b8:
    // 0x2392b8: 0xc08e1d2  jal         func_238748
label_2392bc:
    if (ctx->pc == 0x2392BCu) {
        ctx->pc = 0x2392BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B8u;
        // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C0u;
        goto label_2392c0;
    }
    ctx->pc = 0x2392B8u;
    SET_GPR_U32(ctx, 31, 0x2392C0u);
    ctx->pc = 0x2392BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392B8u;
    // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x2392C0u;
label_2392c0:
    // 0x2392c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2392c4:
    if (ctx->pc == 0x2392C4u) {
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C8u;
        goto label_2392c8;
    }
    ctx->pc = 0x2392C0u;
    {
        const bool branch_taken_0x2392c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c0) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x2392C8u;
label_2392c8:
    // 0x2392c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2392cc:
    if (ctx->pc == 0x2392CCu) {
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392D0u;
        goto label_2392d0;
    }
    ctx->pc = 0x2392C8u;
    {
        const bool branch_taken_0x2392c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c8) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2392d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2392d4:
    // 0x2392d4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2392d8:
    // 0x2392d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2392dc:
    if (ctx->pc == 0x2392DCu) {
        ctx->pc = 0x2392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392D8u;
        // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392E0u;
        goto label_2392e0;
    }
    ctx->pc = 0x2392D8u;
    {
        const bool branch_taken_0x2392d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392d8) {
            ctx->pc = 0x2392DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2392D8u;
            // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239308u;
            goto label_239308;
        }
    }
    ctx->pc = 0x2392E0u;
label_2392e0:
    // 0x2392e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2392e4:
    // 0x2392e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2392e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2392e8:
    // 0x2392e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2392ec:
    // 0x2392ec: 0x40f809  jalr        $v0
label_2392f0:
    if (ctx->pc == 0x2392F0u) {
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392F4u;
        goto label_2392f4;
    }
    ctx->pc = 0x2392ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2392F4u);
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392ECu, 0x2392F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2392F4u;
label_2392f4:
    // 0x2392f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2392f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2392f8:
    // 0x2392f8: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_2392fc:
    if (ctx->pc == 0x2392FCu) {
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239300u;
        goto label_239300;
    }
    ctx->pc = 0x2392F8u;
    {
        const bool branch_taken_0x2392f8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f8) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x239300u;
label_239300:
    // 0x239300: 0x1000001b  b           . + 4 + (0x1B << 2)
label_239304:
    if (ctx->pc == 0x239304u) {
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239308u;
        goto label_239308;
    }
    ctx->pc = 0x239300u;
    {
        const bool branch_taken_0x239300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239300) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239308u;
label_239308:
    // 0x239308: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23930c:
    // 0x23930c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239310:
    // 0x239310: 0xc08e96a  jal         func_23A5A8
label_239314:
    if (ctx->pc == 0x239314u) {
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239310u;
        // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239318u;
        goto label_239318;
    }
    ctx->pc = 0x239310u;
    SET_GPR_U32(ctx, 31, 0x239318u);
    ctx->pc = 0x239314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239310u;
    // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23931c:
    // 0x23931c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239320:
    // 0x239320: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239324:
    // 0x239324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239328:
    // 0x239328: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x239328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_23932c:
    // 0x23932c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23932cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_239330:
    // 0x239330: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_239334:
    // 0x239334: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_239338:
    if (ctx->pc == 0x239338u) {
        ctx->pc = 0x239338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239334u;
        // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23933Cu;
        goto label_23933c;
    }
    ctx->pc = 0x239334u;
    {
        const bool branch_taken_0x239334 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x239334) {
            ctx->pc = 0x239338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239334u;
            // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239354u;
            goto label_239354;
        }
    }
    ctx->pc = 0x23933Cu;
label_23933c:
    // 0x23933c: 0xc08e1d2  jal         func_238748
label_239340:
    if (ctx->pc == 0x239340u) {
        ctx->pc = 0x239340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23933Cu;
        // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239344u;
        goto label_239344;
    }
    ctx->pc = 0x23933Cu;
    SET_GPR_U32(ctx, 31, 0x239344u);
    ctx->pc = 0x239340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23933Cu;
    // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x239344u;
label_239344:
    // 0x239344: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_239348:
    if (ctx->pc == 0x239348u) {
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23934Cu;
        goto label_23934c;
    }
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239344) {
            ctx->pc = 0x239348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239344u;
            // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x23934Cu;
label_23934c:
    // 0x23934c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23934cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239350:
    // 0x239350: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239354:
    // 0x239354: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_239358:
    // 0x239358: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_23935c:
    // 0x23935c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239360:
    // 0x239360: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_239364:
    if (ctx->pc == 0x239364u) {
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239368u;
        goto label_239368;
    }
    ctx->pc = 0x239360u;
    {
        const bool branch_taken_0x239360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239360) {
            ctx->pc = 0x239208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239208;
        }
    }
    ctx->pc = 0x239368u;
label_239368:
    // 0x239368: 0x10000004  b           . + 4 + (0x4 << 2)
label_23936c:
    if (ctx->pc == 0x23936Cu) {
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239370u;
        goto label_239370;
    }
    ctx->pc = 0x239368u;
    {
        const bool branch_taken_0x239368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239368) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239370u;
label_239370:
    // 0x239370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239374:
    // 0x239374: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_239378:
    // 0x239378: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x239378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_23937c:
    // 0x23937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239380:
    // 0x239380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239384:
    // 0x239384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239388:
    // 0x239388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23938c:
    // 0x23938c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23938cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239390:
    // 0x239390: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x239390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_239394:
    // 0x239394: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x239394u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239398:
    // 0x239398: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x239398u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23939c:
    // 0x23939c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2393a0:
    // 0x2393a0: 0x3e00008  jr          $ra
label_2393a4:
    if (ctx->pc == 0x2393A4u) {
        ctx->pc = 0x2393A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A0u;
        // 0x2393a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393A8u;
        goto label_2393a8;
    }
    ctx->pc = 0x2393A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2393A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A0u;
        // 0x2393a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2393A8u;
label_2393a8:
    // 0x2393a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2393ac:
    // 0x2393ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2393acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2393b0:
    // 0x2393b0: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_2393b4:
    // 0x2393b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2393b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2393b8:
    // 0x2393b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2393b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2393bc:
    // 0x2393bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2393bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x2393c0u;
    return;
}
