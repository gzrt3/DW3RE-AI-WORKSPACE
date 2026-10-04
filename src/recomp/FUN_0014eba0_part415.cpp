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


void FUN_0014eba0_part415(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x218e00u: goto label_218e00;
        case 0x218e04u: goto label_218e04;
        case 0x218e08u: goto label_218e08;
        case 0x218e0cu: goto label_218e0c;
        case 0x218e10u: goto label_218e10;
        case 0x218e14u: goto label_218e14;
        case 0x218e18u: goto label_218e18;
        case 0x218e1cu: goto label_218e1c;
        case 0x218e20u: goto label_218e20;
        case 0x218e24u: goto label_218e24;
        case 0x218e28u: goto label_218e28;
        case 0x218e2cu: goto label_218e2c;
        case 0x218e30u: goto label_218e30;
        case 0x218e34u: goto label_218e34;
        case 0x218e38u: goto label_218e38;
        case 0x218e3cu: goto label_218e3c;
        case 0x218e40u: goto label_218e40;
        case 0x218e44u: goto label_218e44;
        case 0x218e48u: goto label_218e48;
        case 0x218e4cu: goto label_218e4c;
        case 0x218e50u: goto label_218e50;
        case 0x218e54u: goto label_218e54;
        case 0x218e58u: goto label_218e58;
        case 0x218e5cu: goto label_218e5c;
        case 0x218e60u: goto label_218e60;
        case 0x218e64u: goto label_218e64;
        case 0x218e68u: goto label_218e68;
        case 0x218e6cu: goto label_218e6c;
        case 0x218e70u: goto label_218e70;
        case 0x218e74u: goto label_218e74;
        case 0x218e78u: goto label_218e78;
        case 0x218e7cu: goto label_218e7c;
        case 0x218e80u: goto label_218e80;
        case 0x218e84u: goto label_218e84;
        case 0x218e88u: goto label_218e88;
        case 0x218e8cu: goto label_218e8c;
        case 0x218e90u: goto label_218e90;
        case 0x218e94u: goto label_218e94;
        case 0x218e98u: goto label_218e98;
        case 0x218e9cu: goto label_218e9c;
        case 0x218ea0u: goto label_218ea0;
        case 0x218ea4u: goto label_218ea4;
        case 0x218ea8u: goto label_218ea8;
        case 0x218eacu: goto label_218eac;
        case 0x218eb0u: goto label_218eb0;
        case 0x218eb4u: goto label_218eb4;
        case 0x218eb8u: goto label_218eb8;
        case 0x218ebcu: goto label_218ebc;
        case 0x218ec0u: goto label_218ec0;
        case 0x218ec4u: goto label_218ec4;
        case 0x218ec8u: goto label_218ec8;
        case 0x218eccu: goto label_218ecc;
        case 0x218ed0u: goto label_218ed0;
        case 0x218ed4u: goto label_218ed4;
        case 0x218ed8u: goto label_218ed8;
        case 0x218edcu: goto label_218edc;
        case 0x218ee0u: goto label_218ee0;
        case 0x218ee4u: goto label_218ee4;
        case 0x218ee8u: goto label_218ee8;
        case 0x218eecu: goto label_218eec;
        case 0x218ef0u: goto label_218ef0;
        case 0x218ef4u: goto label_218ef4;
        case 0x218ef8u: goto label_218ef8;
        case 0x218efcu: goto label_218efc;
        case 0x218f00u: goto label_218f00;
        case 0x218f04u: goto label_218f04;
        case 0x218f08u: goto label_218f08;
        case 0x218f0cu: goto label_218f0c;
        case 0x218f10u: goto label_218f10;
        case 0x218f14u: goto label_218f14;
        case 0x218f18u: goto label_218f18;
        case 0x218f1cu: goto label_218f1c;
        case 0x218f20u: goto label_218f20;
        case 0x218f24u: goto label_218f24;
        case 0x218f28u: goto label_218f28;
        case 0x218f2cu: goto label_218f2c;
        case 0x218f30u: goto label_218f30;
        case 0x218f34u: goto label_218f34;
        case 0x218f38u: goto label_218f38;
        case 0x218f3cu: goto label_218f3c;
        case 0x218f40u: goto label_218f40;
        case 0x218f44u: goto label_218f44;
        case 0x218f48u: goto label_218f48;
        case 0x218f4cu: goto label_218f4c;
        case 0x218f50u: goto label_218f50;
        case 0x218f54u: goto label_218f54;
        case 0x218f58u: goto label_218f58;
        case 0x218f5cu: goto label_218f5c;
        case 0x218f60u: goto label_218f60;
        case 0x218f64u: goto label_218f64;
        case 0x218f68u: goto label_218f68;
        case 0x218f6cu: goto label_218f6c;
        case 0x218f70u: goto label_218f70;
        case 0x218f74u: goto label_218f74;
        case 0x218f78u: goto label_218f78;
        case 0x218f7cu: goto label_218f7c;
        case 0x218f80u: goto label_218f80;
        case 0x218f84u: goto label_218f84;
        case 0x218f88u: goto label_218f88;
        case 0x218f8cu: goto label_218f8c;
        case 0x218f90u: goto label_218f90;
        case 0x218f94u: goto label_218f94;
        case 0x218f98u: goto label_218f98;
        case 0x218f9cu: goto label_218f9c;
        case 0x218fa0u: goto label_218fa0;
        case 0x218fa4u: goto label_218fa4;
        case 0x218fa8u: goto label_218fa8;
        case 0x218facu: goto label_218fac;
        case 0x218fb0u: goto label_218fb0;
        case 0x218fb4u: goto label_218fb4;
        case 0x218fb8u: goto label_218fb8;
        case 0x218fbcu: goto label_218fbc;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fc4u: goto label_218fc4;
        case 0x218fc8u: goto label_218fc8;
        case 0x218fccu: goto label_218fcc;
        case 0x218fd0u: goto label_218fd0;
        case 0x218fd4u: goto label_218fd4;
        case 0x218fd8u: goto label_218fd8;
        case 0x218fdcu: goto label_218fdc;
        case 0x218fe0u: goto label_218fe0;
        case 0x218fe4u: goto label_218fe4;
        case 0x218fe8u: goto label_218fe8;
        case 0x218fecu: goto label_218fec;
        case 0x218ff0u: goto label_218ff0;
        case 0x218ff4u: goto label_218ff4;
        case 0x218ff8u: goto label_218ff8;
        case 0x218ffcu: goto label_218ffc;
        case 0x219000u: goto label_219000;
        case 0x219004u: goto label_219004;
        case 0x219008u: goto label_219008;
        case 0x21900cu: goto label_21900c;
        case 0x219010u: goto label_219010;
        case 0x219014u: goto label_219014;
        case 0x219018u: goto label_219018;
        case 0x21901cu: goto label_21901c;
        case 0x219020u: goto label_219020;
        case 0x219024u: goto label_219024;
        case 0x219028u: goto label_219028;
        case 0x21902cu: goto label_21902c;
        case 0x219030u: goto label_219030;
        case 0x219034u: goto label_219034;
        case 0x219038u: goto label_219038;
        case 0x21903cu: goto label_21903c;
        case 0x219040u: goto label_219040;
        case 0x219044u: goto label_219044;
        case 0x219048u: goto label_219048;
        case 0x21904cu: goto label_21904c;
        case 0x219050u: goto label_219050;
        case 0x219054u: goto label_219054;
        case 0x219058u: goto label_219058;
        case 0x21905cu: goto label_21905c;
        case 0x219060u: goto label_219060;
        case 0x219064u: goto label_219064;
        case 0x219068u: goto label_219068;
        case 0x21906cu: goto label_21906c;
        case 0x219070u: goto label_219070;
        case 0x219074u: goto label_219074;
        case 0x219078u: goto label_219078;
        case 0x21907cu: goto label_21907c;
        case 0x219080u: goto label_219080;
        case 0x219084u: goto label_219084;
        case 0x219088u: goto label_219088;
        case 0x21908cu: goto label_21908c;
        case 0x219090u: goto label_219090;
        case 0x219094u: goto label_219094;
        case 0x219098u: goto label_219098;
        case 0x21909cu: goto label_21909c;
        case 0x2190a0u: goto label_2190a0;
        case 0x2190a4u: goto label_2190a4;
        case 0x2190a8u: goto label_2190a8;
        case 0x2190acu: goto label_2190ac;
        case 0x2190b0u: goto label_2190b0;
        case 0x2190b4u: goto label_2190b4;
        case 0x2190b8u: goto label_2190b8;
        case 0x2190bcu: goto label_2190bc;
        case 0x2190c0u: goto label_2190c0;
        case 0x2190c4u: goto label_2190c4;
        case 0x2190c8u: goto label_2190c8;
        case 0x2190ccu: goto label_2190cc;
        case 0x2190d0u: goto label_2190d0;
        case 0x2190d4u: goto label_2190d4;
        case 0x2190d8u: goto label_2190d8;
        case 0x2190dcu: goto label_2190dc;
        case 0x2190e0u: goto label_2190e0;
        case 0x2190e4u: goto label_2190e4;
        case 0x2190e8u: goto label_2190e8;
        case 0x2190ecu: goto label_2190ec;
        case 0x2190f0u: goto label_2190f0;
        case 0x2190f4u: goto label_2190f4;
        case 0x2190f8u: goto label_2190f8;
        case 0x2190fcu: goto label_2190fc;
        case 0x219100u: goto label_219100;
        case 0x219104u: goto label_219104;
        case 0x219108u: goto label_219108;
        case 0x21910cu: goto label_21910c;
        case 0x219110u: goto label_219110;
        case 0x219114u: goto label_219114;
        case 0x219118u: goto label_219118;
        case 0x21911cu: goto label_21911c;
        case 0x219120u: goto label_219120;
        case 0x219124u: goto label_219124;
        case 0x219128u: goto label_219128;
        case 0x21912cu: goto label_21912c;
        case 0x219130u: goto label_219130;
        case 0x219134u: goto label_219134;
        case 0x219138u: goto label_219138;
        case 0x21913cu: goto label_21913c;
        case 0x219140u: goto label_219140;
        case 0x219144u: goto label_219144;
        case 0x219148u: goto label_219148;
        case 0x21914cu: goto label_21914c;
        case 0x219150u: goto label_219150;
        case 0x219154u: goto label_219154;
        case 0x219158u: goto label_219158;
        case 0x21915cu: goto label_21915c;
        case 0x219160u: goto label_219160;
        case 0x219164u: goto label_219164;
        case 0x219168u: goto label_219168;
        case 0x21916cu: goto label_21916c;
        case 0x219170u: goto label_219170;
        case 0x219174u: goto label_219174;
        case 0x219178u: goto label_219178;
        case 0x21917cu: goto label_21917c;
        case 0x219180u: goto label_219180;
        case 0x219184u: goto label_219184;
        case 0x219188u: goto label_219188;
        case 0x21918cu: goto label_21918c;
        case 0x219190u: goto label_219190;
        case 0x219194u: goto label_219194;
        case 0x219198u: goto label_219198;
        case 0x21919cu: goto label_21919c;
        case 0x2191a0u: goto label_2191a0;
        case 0x2191a4u: goto label_2191a4;
        case 0x2191a8u: goto label_2191a8;
        case 0x2191acu: goto label_2191ac;
        case 0x2191b0u: goto label_2191b0;
        case 0x2191b4u: goto label_2191b4;
        case 0x2191b8u: goto label_2191b8;
        case 0x2191bcu: goto label_2191bc;
        case 0x2191c0u: goto label_2191c0;
        case 0x2191c4u: goto label_2191c4;
        case 0x2191c8u: goto label_2191c8;
        case 0x2191ccu: goto label_2191cc;
        case 0x2191d0u: goto label_2191d0;
        case 0x2191d4u: goto label_2191d4;
        case 0x2191d8u: goto label_2191d8;
        case 0x2191dcu: goto label_2191dc;
        case 0x2191e0u: goto label_2191e0;
        case 0x2191e4u: goto label_2191e4;
        case 0x2191e8u: goto label_2191e8;
        case 0x2191ecu: goto label_2191ec;
        case 0x2191f0u: goto label_2191f0;
        case 0x2191f4u: goto label_2191f4;
        case 0x2191f8u: goto label_2191f8;
        case 0x2191fcu: goto label_2191fc;
        case 0x219200u: goto label_219200;
        case 0x219204u: goto label_219204;
        case 0x219208u: goto label_219208;
        case 0x21920cu: goto label_21920c;
        case 0x219210u: goto label_219210;
        case 0x219214u: goto label_219214;
        case 0x219218u: goto label_219218;
        case 0x21921cu: goto label_21921c;
        case 0x219220u: goto label_219220;
        case 0x219224u: goto label_219224;
        case 0x219228u: goto label_219228;
        case 0x21922cu: goto label_21922c;
        case 0x219230u: goto label_219230;
        case 0x219234u: goto label_219234;
        case 0x219238u: goto label_219238;
        case 0x21923cu: goto label_21923c;
        case 0x219240u: goto label_219240;
        case 0x219244u: goto label_219244;
        case 0x219248u: goto label_219248;
        case 0x21924cu: goto label_21924c;
        case 0x219250u: goto label_219250;
        case 0x219254u: goto label_219254;
        case 0x219258u: goto label_219258;
        case 0x21925cu: goto label_21925c;
        case 0x219260u: goto label_219260;
        case 0x219264u: goto label_219264;
        case 0x219268u: goto label_219268;
        case 0x21926cu: goto label_21926c;
        case 0x219270u: goto label_219270;
        case 0x219274u: goto label_219274;
        case 0x219278u: goto label_219278;
        case 0x21927cu: goto label_21927c;
        case 0x219280u: goto label_219280;
        case 0x219284u: goto label_219284;
        case 0x219288u: goto label_219288;
        case 0x21928cu: goto label_21928c;
        case 0x219290u: goto label_219290;
        case 0x219294u: goto label_219294;
        case 0x219298u: goto label_219298;
        case 0x21929cu: goto label_21929c;
        case 0x2192a0u: goto label_2192a0;
        case 0x2192a4u: goto label_2192a4;
        case 0x2192a8u: goto label_2192a8;
        case 0x2192acu: goto label_2192ac;
        case 0x2192b0u: goto label_2192b0;
        case 0x2192b4u: goto label_2192b4;
        case 0x2192b8u: goto label_2192b8;
        case 0x2192bcu: goto label_2192bc;
        case 0x2192c0u: goto label_2192c0;
        case 0x2192c4u: goto label_2192c4;
        case 0x2192c8u: goto label_2192c8;
        case 0x2192ccu: goto label_2192cc;
        case 0x2192d0u: goto label_2192d0;
        case 0x2192d4u: goto label_2192d4;
        case 0x2192d8u: goto label_2192d8;
        case 0x2192dcu: goto label_2192dc;
        case 0x2192e0u: goto label_2192e0;
        case 0x2192e4u: goto label_2192e4;
        case 0x2192e8u: goto label_2192e8;
        case 0x2192ecu: goto label_2192ec;
        case 0x2192f0u: goto label_2192f0;
        case 0x2192f4u: goto label_2192f4;
        case 0x2192f8u: goto label_2192f8;
        case 0x2192fcu: goto label_2192fc;
        case 0x219300u: goto label_219300;
        case 0x219304u: goto label_219304;
        case 0x219308u: goto label_219308;
        case 0x21930cu: goto label_21930c;
        case 0x219310u: goto label_219310;
        case 0x219314u: goto label_219314;
        case 0x219318u: goto label_219318;
        case 0x21931cu: goto label_21931c;
        case 0x219320u: goto label_219320;
        case 0x219324u: goto label_219324;
        case 0x219328u: goto label_219328;
        case 0x21932cu: goto label_21932c;
        case 0x219330u: goto label_219330;
        case 0x219334u: goto label_219334;
        case 0x219338u: goto label_219338;
        case 0x21933cu: goto label_21933c;
        case 0x219340u: goto label_219340;
        case 0x219344u: goto label_219344;
        case 0x219348u: goto label_219348;
        case 0x21934cu: goto label_21934c;
        case 0x219350u: goto label_219350;
        case 0x219354u: goto label_219354;
        case 0x219358u: goto label_219358;
        case 0x21935cu: goto label_21935c;
        case 0x219360u: goto label_219360;
        case 0x219364u: goto label_219364;
        case 0x219368u: goto label_219368;
        case 0x21936cu: goto label_21936c;
        case 0x219370u: goto label_219370;
        case 0x219374u: goto label_219374;
        case 0x219378u: goto label_219378;
        case 0x21937cu: goto label_21937c;
        case 0x219380u: goto label_219380;
        case 0x219384u: goto label_219384;
        case 0x219388u: goto label_219388;
        case 0x21938cu: goto label_21938c;
        case 0x219390u: goto label_219390;
        case 0x219394u: goto label_219394;
        case 0x219398u: goto label_219398;
        case 0x21939cu: goto label_21939c;
        case 0x2193a0u: goto label_2193a0;
        case 0x2193a4u: goto label_2193a4;
        case 0x2193a8u: goto label_2193a8;
        case 0x2193acu: goto label_2193ac;
        case 0x2193b0u: goto label_2193b0;
        case 0x2193b4u: goto label_2193b4;
        case 0x2193b8u: goto label_2193b8;
        case 0x2193bcu: goto label_2193bc;
        case 0x2193c0u: goto label_2193c0;
        case 0x2193c4u: goto label_2193c4;
        case 0x2193c8u: goto label_2193c8;
        case 0x2193ccu: goto label_2193cc;
        case 0x2193d0u: goto label_2193d0;
        case 0x2193d4u: goto label_2193d4;
        case 0x2193d8u: goto label_2193d8;
        case 0x2193dcu: goto label_2193dc;
        case 0x2193e0u: goto label_2193e0;
        case 0x2193e4u: goto label_2193e4;
        case 0x2193e8u: goto label_2193e8;
        case 0x2193ecu: goto label_2193ec;
        case 0x2193f0u: goto label_2193f0;
        case 0x2193f4u: goto label_2193f4;
        case 0x2193f8u: goto label_2193f8;
        case 0x2193fcu: goto label_2193fc;
        case 0x219400u: goto label_219400;
        case 0x219404u: goto label_219404;
        case 0x219408u: goto label_219408;
        case 0x21940cu: goto label_21940c;
        case 0x219410u: goto label_219410;
        case 0x219414u: goto label_219414;
        case 0x219418u: goto label_219418;
        case 0x21941cu: goto label_21941c;
        case 0x219420u: goto label_219420;
        case 0x219424u: goto label_219424;
        case 0x219428u: goto label_219428;
        case 0x21942cu: goto label_21942c;
        case 0x219430u: goto label_219430;
        case 0x219434u: goto label_219434;
        case 0x219438u: goto label_219438;
        case 0x21943cu: goto label_21943c;
        case 0x219440u: goto label_219440;
        case 0x219444u: goto label_219444;
        case 0x219448u: goto label_219448;
        case 0x21944cu: goto label_21944c;
        case 0x219450u: goto label_219450;
        case 0x219454u: goto label_219454;
        case 0x219458u: goto label_219458;
        case 0x21945cu: goto label_21945c;
        case 0x219460u: goto label_219460;
        case 0x219464u: goto label_219464;
        case 0x219468u: goto label_219468;
        case 0x21946cu: goto label_21946c;
        case 0x219470u: goto label_219470;
        case 0x219474u: goto label_219474;
        case 0x219478u: goto label_219478;
        case 0x21947cu: goto label_21947c;
        case 0x219480u: goto label_219480;
        case 0x219484u: goto label_219484;
        case 0x219488u: goto label_219488;
        case 0x21948cu: goto label_21948c;
        case 0x219490u: goto label_219490;
        case 0x219494u: goto label_219494;
        case 0x219498u: goto label_219498;
        case 0x21949cu: goto label_21949c;
        case 0x2194a0u: goto label_2194a0;
        case 0x2194a4u: goto label_2194a4;
        case 0x2194a8u: goto label_2194a8;
        case 0x2194acu: goto label_2194ac;
        case 0x2194b0u: goto label_2194b0;
        case 0x2194b4u: goto label_2194b4;
        case 0x2194b8u: goto label_2194b8;
        case 0x2194bcu: goto label_2194bc;
        case 0x2194c0u: goto label_2194c0;
        case 0x2194c4u: goto label_2194c4;
        case 0x2194c8u: goto label_2194c8;
        case 0x2194ccu: goto label_2194cc;
        case 0x2194d0u: goto label_2194d0;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194d8u: goto label_2194d8;
        case 0x2194dcu: goto label_2194dc;
        case 0x2194e0u: goto label_2194e0;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194e8u: goto label_2194e8;
        case 0x2194ecu: goto label_2194ec;
        case 0x2194f0u: goto label_2194f0;
        case 0x2194f4u: goto label_2194f4;
        case 0x2194f8u: goto label_2194f8;
        case 0x2194fcu: goto label_2194fc;
        case 0x219500u: goto label_219500;
        case 0x219504u: goto label_219504;
        case 0x219508u: goto label_219508;
        case 0x21950cu: goto label_21950c;
        case 0x219510u: goto label_219510;
        case 0x219514u: goto label_219514;
        case 0x219518u: goto label_219518;
        case 0x21951cu: goto label_21951c;
        case 0x219520u: goto label_219520;
        case 0x219524u: goto label_219524;
        case 0x219528u: goto label_219528;
        case 0x21952cu: goto label_21952c;
        case 0x219530u: goto label_219530;
        case 0x219534u: goto label_219534;
        case 0x219538u: goto label_219538;
        case 0x21953cu: goto label_21953c;
        case 0x219540u: goto label_219540;
        case 0x219544u: goto label_219544;
        case 0x219548u: goto label_219548;
        case 0x21954cu: goto label_21954c;
        case 0x219550u: goto label_219550;
        case 0x219554u: goto label_219554;
        case 0x219558u: goto label_219558;
        case 0x21955cu: goto label_21955c;
        case 0x219560u: goto label_219560;
        case 0x219564u: goto label_219564;
        case 0x219568u: goto label_219568;
        case 0x21956cu: goto label_21956c;
        case 0x219570u: goto label_219570;
        case 0x219574u: goto label_219574;
        case 0x219578u: goto label_219578;
        case 0x21957cu: goto label_21957c;
        case 0x219580u: goto label_219580;
        case 0x219584u: goto label_219584;
        case 0x219588u: goto label_219588;
        case 0x21958cu: goto label_21958c;
        case 0x219590u: goto label_219590;
        case 0x219594u: goto label_219594;
        case 0x219598u: goto label_219598;
        case 0x21959cu: goto label_21959c;
        case 0x2195a0u: goto label_2195a0;
        case 0x2195a4u: goto label_2195a4;
        case 0x2195a8u: goto label_2195a8;
        case 0x2195acu: goto label_2195ac;
        case 0x2195b0u: goto label_2195b0;
        case 0x2195b4u: goto label_2195b4;
        case 0x2195b8u: goto label_2195b8;
        case 0x2195bcu: goto label_2195bc;
        case 0x2195c0u: goto label_2195c0;
        case 0x2195c4u: goto label_2195c4;
        case 0x2195c8u: goto label_2195c8;
        case 0x2195ccu: goto label_2195cc;
        default: return;
    }

label_218e00:
    // 0x218e00: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_218e04:
    // 0x218e04: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_218e08:
    // 0x218e08: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x218e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_218e0c:
    // 0x218e0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218e10:
    // 0x218e10: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218e14:
    // 0x218e14: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x218e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_218e18:
    // 0x218e18: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x218e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_218e1c:
    // 0x218e1c: 0x90640220  lbu         $a0, 0x220($v1)
    ctx->pc = 0x218e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
label_218e20:
    // 0x218e20: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_218e24:
    if (ctx->pc == 0x218E24u) {
        ctx->pc = 0x218E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E20u;
        // 0x218e24: 0x2648004a  addiu       $t0, $s2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E28u;
        goto label_218e28;
    }
    ctx->pc = 0x218E20u;
    {
        const bool branch_taken_0x218e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x218E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E20u;
        // 0x218e24: 0x2648004a  addiu       $t0, $s2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e20) {
            ctx->pc = 0x218E64u;
            goto label_218e64;
        }
    }
    ctx->pc = 0x218E28u;
label_218e28:
    // 0x218e28: 0x26030e70  addiu       $v1, $s0, 0xE70
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3696));
label_218e2c:
    // 0x218e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218e30:
    // 0x218e30: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x218e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_218e34:
    // 0x218e34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x218e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218e38:
    // 0x218e38: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x218e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_218e3c:
    // 0x218e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218e40:
    // 0x218e40: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_218e44:
    // 0x218e44: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x218e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_218e48:
    // 0x218e48: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_218e4c:
    // 0x218e4c: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x218e4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218e50:
    // 0x218e50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218e54:
    // 0x218e54: 0xc054c60  jal         func_153180
label_218e58:
    if (ctx->pc == 0x218E58u) {
        ctx->pc = 0x218E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E54u;
        // 0x218e58: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E5Cu;
        goto label_218e5c;
    }
    ctx->pc = 0x218E54u;
    SET_GPR_U32(ctx, 31, 0x218E5Cu);
    ctx->pc = 0x218E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E54u;
    // 0x218e58: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    { ctx->pc = 0x153180; return; }
    ctx->pc = 0x218E5Cu;
label_218e5c:
    // 0x218e5c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_218e60:
    if (ctx->pc == 0x218E60u) {
        ctx->pc = 0x218E64u;
        goto label_218e64;
    }
    ctx->pc = 0x218E5Cu;
    {
        const bool branch_taken_0x218e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e5c) {
            ctx->pc = 0x218ED8u;
            goto label_218ed8;
        }
    }
    ctx->pc = 0x218E64u;
label_218e64:
    // 0x218e64: 0x0  nop
    ctx->pc = 0x218e64u;
    // NOP
label_218e68:
    // 0x218e68: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_218e6c:
    // 0x218e6c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_218e70:
    // 0x218e70: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x218e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_218e74:
    // 0x218e74: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_218e78:
    // 0x218e78: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_218e7c:
    // 0x218e7c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x218e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_218e80:
    // 0x218e80: 0x26030e70  addiu       $v1, $s0, 0xE70
    ctx->pc = 0x218e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3696));
label_218e84:
    // 0x218e84: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x218e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218e88:
    // 0x218e88: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x218e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218e8c:
    // 0x218e8c: 0x240a0058  addiu       $t2, $zero, 0x58
    ctx->pc = 0x218e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_218e90:
    // 0x218e90: 0x240b0016  addiu       $t3, $zero, 0x16
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_218e94:
    // 0x218e94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x218e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_218e98:
    // 0x218e98: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x218e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218e9c:
    // 0x218e9c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_218ea0:
    // 0x218ea0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_218ea4:
    // 0x218ea4: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x218ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
label_218ea8:
    // 0x218ea8: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x218ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218eac:
    // 0x218eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218eb0:
    // 0x218eb0: 0x958d000a  lhu         $t5, 0xA($t4)
    ctx->pc = 0x218eb0u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 10)));
label_218eb4:
    // 0x218eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218eb8:
    // 0x218eb8: 0x55300b  movn        $a2, $v0, $s5
    ctx->pc = 0x218eb8u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_218ebc:
    // 0x218ebc: 0xd6100  sll         $t4, $t5, 4
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_218ec0:
    // 0x218ec0: 0x18d6023  subu        $t4, $t4, $t5
    ctx->pc = 0x218ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_218ec4:
    // 0x218ec4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x218ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_218ec8:
    // 0x218ec8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x218ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_218ecc:
    // 0x218ecc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x218eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_218ed0:
    // 0x218ed0: 0xc054c60  jal         func_153180
label_218ed4:
    if (ctx->pc == 0x218ED4u) {
        ctx->pc = 0x218ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED0u;
        // 0x218ed4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218ED8u;
        goto label_218ed8;
    }
    ctx->pc = 0x218ED0u;
    SET_GPR_U32(ctx, 31, 0x218ED8u);
    ctx->pc = 0x218ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218ED0u;
    // 0x218ed4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    { ctx->pc = 0x153180; return; }
    ctx->pc = 0x218ED8u;
label_218ed8:
    // 0x218ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218edc:
    // 0x218edc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ee0:
    // 0x218ee0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x218ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ee4:
    // 0x218ee4: 0x0  nop
    ctx->pc = 0x218ee4u;
    // NOP
label_218ee8:
    // 0x218ee8: 0xc070834  jal         func_1C20D0
label_218eec:
    if (ctx->pc == 0x218EECu) {
        ctx->pc = 0x218EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE8u;
        // 0x218eec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EF0u;
        goto label_218ef0;
    }
    ctx->pc = 0x218EE8u;
    SET_GPR_U32(ctx, 31, 0x218EF0u);
    ctx->pc = 0x218EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EE8u;
    // 0x218eec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x218EF0u;
label_218ef0:
    // 0x218ef0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218ef4:
    // 0x218ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x218ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218ef8:
    // 0x218ef8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x218ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_218efc:
    // 0x218efc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x218efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_218f00:
    // 0x218f00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218f04:
    // 0x218f04: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x218f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_218f08:
    // 0x218f08: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x218f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_218f0c:
    // 0x218f0c: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_218f10:
    // 0x218f10: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_218f14:
    if (ctx->pc == 0x218F14u) {
        ctx->pc = 0x218F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F10u;
        // 0x218f14: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F18u;
        goto label_218f18;
    }
    ctx->pc = 0x218F10u;
    {
        const bool branch_taken_0x218f10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F10u;
        // 0x218f14: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f10) {
            ctx->pc = 0x218F2Cu;
            goto label_218f2c;
        }
    }
    ctx->pc = 0x218F18u;
label_218f18:
    // 0x218f18: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x218f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218f1c:
    // 0x218f1c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_218f20:
    // 0x218f20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x218f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_218f24:
    // 0x218f24: 0x10000002  b           . + 4 + (0x2 << 2)
label_218f28:
    if (ctx->pc == 0x218F28u) {
        ctx->pc = 0x218F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F24u;
        // 0x218f28: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F2Cu;
        goto label_218f2c;
    }
    ctx->pc = 0x218F24u;
    {
        const bool branch_taken_0x218f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F24u;
        // 0x218f28: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f24) {
            ctx->pc = 0x218F30u;
            goto label_218f30;
        }
    }
    ctx->pc = 0x218F2Cu;
label_218f2c:
    // 0x218f2c: 0x26460218  addiu       $a2, $s2, 0x218
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 536));
label_218f30:
    // 0x218f30: 0x24a41690  addiu       $a0, $a1, 0x1690
    ctx->pc = 0x218f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
label_218f34:
    // 0x218f34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x218f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218f38:
    // 0x218f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218f3c:
    // 0x218f3c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x218f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218f40:
    // 0x218f40: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x218f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_218f44:
    // 0x218f44: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x218f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_218f48:
    // 0x218f48: 0xc05de30  jal         func_1778C0
label_218f4c:
    if (ctx->pc == 0x218F4Cu) {
        ctx->pc = 0x218F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F48u;
        // 0x218f4c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F50u;
        goto label_218f50;
    }
    ctx->pc = 0x218F48u;
    SET_GPR_U32(ctx, 31, 0x218F50u);
    ctx->pc = 0x218F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F48u;
    // 0x218f4c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x218F50u;
label_218f50:
    // 0x218f50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x218f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218f54:
    // 0x218f54: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x218f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_218f58:
    // 0x218f58: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x218f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_218f5c:
    // 0x218f5c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_218f60:
    if (ctx->pc == 0x218F60u) {
        ctx->pc = 0x218F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F5Cu;
        // 0x218f60: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F64u;
        goto label_218f64;
    }
    ctx->pc = 0x218F5Cu;
    {
        const bool branch_taken_0x218f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F5Cu;
        // 0x218f60: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f5c) {
            ctx->pc = 0x218EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ee4;
        }
    }
    ctx->pc = 0x218F64u;
label_218f64:
    // 0x218f64: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x218f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_218f68:
    // 0x218f68: 0x27de00a0  addiu       $fp, $fp, 0xA0
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
label_218f6c:
    // 0x218f6c: 0x26f70240  addiu       $s7, $s7, 0x240
    ctx->pc = 0x218f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 576));
label_218f70:
    // 0x218f70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x218f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_218f74:
    // 0x218f74: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x218f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_218f78:
    // 0x218f78: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_218f7c:
    // 0x218f7c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x218f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_218f80:
    // 0x218f80: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x218f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_218f84:
    // 0x218f84: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_218f88:
    // 0x218f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_218f8c:
    // 0x218f8c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x218f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_218f90:
    // 0x218f90: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_218f94:
    // 0x218f94: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x218f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_218f98:
    // 0x218f98: 0x1460ff5a  bnez        $v1, . + 4 + (-0xA6 << 2)
label_218f9c:
    if (ctx->pc == 0x218F9Cu) {
        ctx->pc = 0x218F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F98u;
        // 0x218f9c: 0x26d60500  addiu       $s6, $s6, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FA0u;
        goto label_218fa0;
    }
    ctx->pc = 0x218F98u;
    {
        const bool branch_taken_0x218f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F98u;
        // 0x218f9c: 0x26d60500  addiu       $s6, $s6, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f98) {
            ctx->pc = 0x218D04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x218d04; return; }
        }
    }
    ctx->pc = 0x218FA0u;
label_218fa0:
    // 0x218fa0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x218fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_218fa4:
    // 0x218fa4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_218fa8:
    // 0x218fa8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_218fac:
    // 0x218fac: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x218facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_218fb0:
    // 0x218fb0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x218fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_218fb4:
    // 0x218fb4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_218fb8:
    // 0x218fb8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x218fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_218fbc:
    // 0x218fbc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x218fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_218fc0:
    // 0x218fc0: 0x24631b00  addiu       $v1, $v1, 0x1B00
    ctx->pc = 0x218fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_218fc4:
    // 0x218fc4: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x218fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_218fc8:
    // 0x218fc8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_218fcc:
    // 0x218fcc: 0x246347b8  addiu       $v1, $v1, 0x47B8
    ctx->pc = 0x218fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18360));
label_218fd0:
    // 0x218fd0: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x218fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_218fd4:
    // 0x218fd4: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x218fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_218fd8:
    // 0x218fd8: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
label_218fdc:
    if (ctx->pc == 0x218FDCu) {
        ctx->pc = 0x218FE0u;
        goto label_218fe0;
    }
    ctx->pc = 0x218FD8u;
    {
        const bool branch_taken_0x218fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x218fd8) {
            ctx->pc = 0x218CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x218cbc; return; }
        }
    }
    ctx->pc = 0x218FE0u;
label_218fe0:
    // 0x218fe0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_218fe4:
    // 0x218fe4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x218fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_218fe8:
    // 0x218fe8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x218fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_218fec:
    // 0x218fec: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x218fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_218ff0:
    // 0x218ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x218ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_218ff4:
    // 0x218ff4: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x218ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_218ff8:
    // 0x218ff8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x218ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_218ffc:
    // 0x218ffc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x218ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_219000:
    // 0x219000: 0x1460ff2a  bnez        $v1, . + 4 + (-0xD6 << 2)
label_219004:
    if (ctx->pc == 0x219004u) {
        ctx->pc = 0x219004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219000u;
        // 0x219004: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219008u;
        goto label_219008;
    }
    ctx->pc = 0x219000u;
    {
        const bool branch_taken_0x219000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219000u;
        // 0x219004: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219000) {
            ctx->pc = 0x218CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x218cac; return; }
        }
    }
    ctx->pc = 0x219008u;
label_219008:
    // 0x219008: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x219008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21900c:
    // 0x21900c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x21900cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_219010:
    // 0x219010: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x219010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_219014:
    // 0x219014: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x219014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_219018:
    // 0x219018: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x219018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21901c:
    // 0x21901c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x21901cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219020:
    // 0x219020: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x219020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_219024:
    // 0x219024: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x219024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219028:
    // 0x219028: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x219028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21902c:
    // 0x21902c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219030:
    // 0x219030: 0x3e00008  jr          $ra
label_219034:
    if (ctx->pc == 0x219034u) {
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219030u;
        // 0x219034: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219038u;
        goto label_219038;
    }
    ctx->pc = 0x219030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219030u;
        // 0x219034: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219038u;
label_219038:
    // 0x219038: 0x0  nop
    ctx->pc = 0x219038u;
    // NOP
label_21903c:
    // 0x21903c: 0x0  nop
    ctx->pc = 0x21903cu;
    // NOP
label_219040:
    // 0x219040: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x219040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_219044:
    // 0x219044: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_219048:
    // 0x219048: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21904c:
    // 0x21904c: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21904cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_219050:
    // 0x219050: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x219050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_219054:
    // 0x219054: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_219058:
    // 0x219058: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x219058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21905c:
    // 0x21905c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_219060:
    // 0x219060: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x219060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_219064:
    // 0x219064: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x219064u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219068:
    // 0x219068: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x219068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21906c:
    // 0x21906c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x21906cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219070:
    // 0x219070: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_219074:
    // 0x219074: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_219078:
    // 0x219078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21907c:
    // 0x21907c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219080:
    // 0x219080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219084:
    // 0x219084: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x219084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219088:
    // 0x219088: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21908c:
    // 0x21908c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x21908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_219090:
    // 0x219090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219094:
    // 0x219094: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x219094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_219098:
    // 0x219098: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x219098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21909c:
    // 0x21909c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2190a0:
    // 0x2190a0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2190a4:
    // 0x2190a4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2190a8:
    // 0x2190a8: 0x24848c00  addiu       $a0, $a0, -0x7400
    ctx->pc = 0x2190a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937600));
label_2190ac:
    // 0x2190ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2190acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2190b0:
    // 0x2190b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2190b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2190b4:
    // 0x2190b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2190b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2190b8:
    // 0x2190b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2190b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2190bc:
    // 0x2190bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2190bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2190c0:
    // 0x2190c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2190c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2190c4:
    // 0x2190c4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2190c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2190c8:
    // 0x2190c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2190c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2190cc:
    // 0x2190cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2190ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2190d0:
    // 0x2190d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2190d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2190d4:
    // 0x2190d4: 0x0  nop
    ctx->pc = 0x2190d4u;
    // NOP
label_2190d8:
    // 0x2190d8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2190d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2190dc:
    // 0x2190dc: 0x24428ac0  addiu       $v0, $v0, -0x7540
    ctx->pc = 0x2190dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
label_2190e0:
    // 0x2190e0: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2190e4:
    // 0x2190e4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2190e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2190e8:
    // 0x2190e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2190ec:
    // 0x2190ec: 0x72b021  addu        $s6, $v1, $s2
    ctx->pc = 0x2190ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2190f0:
    // 0x2190f0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2190f4:
    // 0x2190f4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2190f8:
    if (ctx->pc == 0x2190F8u) {
        ctx->pc = 0x2190F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190F4u;
        // 0x2190f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190FCu;
        goto label_2190fc;
    }
    ctx->pc = 0x2190F4u;
    {
        const bool branch_taken_0x2190f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2190F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190F4u;
        // 0x2190f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190f4) {
            ctx->pc = 0x219104u;
            goto label_219104;
        }
    }
    ctx->pc = 0x2190FCu;
label_2190fc:
    // 0x2190fc: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_219100:
    if (ctx->pc == 0x219100u) {
        ctx->pc = 0x219104u;
        goto label_219104;
    }
    ctx->pc = 0x2190FCu;
    {
        const bool branch_taken_0x2190fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2190fc) {
            ctx->pc = 0x21915Cu;
            goto label_21915c;
        }
    }
    ctx->pc = 0x219104u;
label_219104:
    // 0x219104: 0x0  nop
    ctx->pc = 0x219104u;
    // NOP
label_219108:
    // 0x219108: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_21910c:
    // 0x21910c: 0xa06000cb  sb          $zero, 0xCB($v1)
    ctx->pc = 0x21910cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 203), (uint8_t)GPR_U32(ctx, 0));
label_219110:
    // 0x219110: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_219114:
    // 0x219114: 0xa06000b3  sb          $zero, 0xB3($v1)
    ctx->pc = 0x219114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 179), (uint8_t)GPR_U32(ctx, 0));
label_219118:
    // 0x219118: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_21911c:
    // 0x21911c: 0xa060009b  sb          $zero, 0x9B($v1)
    ctx->pc = 0x21911cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 155), (uint8_t)GPR_U32(ctx, 0));
label_219120:
    // 0x219120: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x219120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
label_219124:
    // 0x219124: 0xa04008a3  sb          $zero, 0x8A3($v0)
    ctx->pc = 0x219124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2211), (uint8_t)GPR_U32(ctx, 0));
label_219128:
    // 0x219128: 0xa0600f2b  sb          $zero, 0xF2B($v1)
    ctx->pc = 0x219128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3883), (uint8_t)GPR_U32(ctx, 0));
label_21912c:
    // 0x21912c: 0xa0600f13  sb          $zero, 0xF13($v1)
    ctx->pc = 0x21912cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3859), (uint8_t)GPR_U32(ctx, 0));
label_219130:
    // 0x219130: 0xa0600efb  sb          $zero, 0xEFB($v1)
    ctx->pc = 0x219130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3835), (uint8_t)GPR_U32(ctx, 0));
label_219134:
    // 0x219134: 0xa0600ee3  sb          $zero, 0xEE3($v1)
    ctx->pc = 0x219134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3811), (uint8_t)GPR_U32(ctx, 0));
label_219138:
    // 0x219138: 0xa0801703  sb          $zero, 0x1703($a0)
    ctx->pc = 0x219138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5891), (uint8_t)GPR_U32(ctx, 0));
label_21913c:
    // 0x21913c: 0xa08017a3  sb          $zero, 0x17A3($a0)
    ctx->pc = 0x21913cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6051), (uint8_t)GPR_U32(ctx, 0));
label_219140:
    // 0x219140: 0xa0801843  sb          $zero, 0x1843($a0)
    ctx->pc = 0x219140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6211), (uint8_t)GPR_U32(ctx, 0));
label_219144:
    // 0x219144: 0xa08018e3  sb          $zero, 0x18E3($a0)
    ctx->pc = 0x219144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6371), (uint8_t)GPR_U32(ctx, 0));
label_219148:
    // 0x219148: 0xa0801983  sb          $zero, 0x1983($a0)
    ctx->pc = 0x219148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6531), (uint8_t)GPR_U32(ctx, 0));
label_21914c:
    // 0x21914c: 0xa0801a23  sb          $zero, 0x1A23($a0)
    ctx->pc = 0x21914cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6691), (uint8_t)GPR_U32(ctx, 0));
label_219150:
    // 0x219150: 0xa0801ac3  sb          $zero, 0x1AC3($a0)
    ctx->pc = 0x219150u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6851), (uint8_t)GPR_U32(ctx, 0));
label_219154:
    // 0x219154: 0x10000058  b           . + 4 + (0x58 << 2)
label_219158:
    if (ctx->pc == 0x219158u) {
        ctx->pc = 0x219158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219154u;
        // 0x219158: 0xa0801b63  sb          $zero, 0x1B63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7011), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21915Cu;
        goto label_21915c;
    }
    ctx->pc = 0x219154u;
    {
        const bool branch_taken_0x219154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219154u;
        // 0x219158: 0xa0801b63  sb          $zero, 0x1B63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7011), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219154) {
            ctx->pc = 0x2192B8u;
            goto label_2192b8;
        }
    }
    ctx->pc = 0x21915Cu;
label_21915c:
    // 0x21915c: 0x0  nop
    ctx->pc = 0x21915cu;
    // NOP
label_219160:
    // 0x219160: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x219160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_219164:
    // 0x219164: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_219168:
    if (ctx->pc == 0x219168u) {
        ctx->pc = 0x21916Cu;
        goto label_21916c;
    }
    ctx->pc = 0x219164u;
    {
        const bool branch_taken_0x219164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219164) {
            ctx->pc = 0x2191F4u;
            goto label_2191f4;
        }
    }
    ctx->pc = 0x21916Cu;
label_21916c:
    // 0x21916c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x21916cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_219170:
    // 0x219170: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219174:
    // 0x219174: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
label_219178:
    if (ctx->pc == 0x219178u) {
        ctx->pc = 0x21917Cu;
        goto label_21917c;
    }
    ctx->pc = 0x219174u;
    {
        const bool branch_taken_0x219174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x219174) {
            ctx->pc = 0x21919Cu;
            goto label_21919c;
        }
    }
    ctx->pc = 0x21917Cu;
label_21917c:
    // 0x21917c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219180:
    // 0x219180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219184:
    // 0x219184: 0x77200b  movn        $a0, $v1, $s7
    ctx->pc = 0x219184u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_219188:
    // 0x219188: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_21918c:
    // 0x21918c: 0xc085a18  jal         func_216860
label_219190:
    if (ctx->pc == 0x219190u) {
        ctx->pc = 0x219190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21918Cu;
        // 0x219190: 0x27a700cc  addiu       $a3, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219194u;
        goto label_219194;
    }
    ctx->pc = 0x21918Cu;
    SET_GPR_U32(ctx, 31, 0x219194u);
    ctx->pc = 0x219190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21918Cu;
    // 0x219190: 0x27a700cc  addiu       $a3, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216860u;
    { ctx->pc = 0x216860; return; }
    ctx->pc = 0x219194u;
label_219194:
    // 0x219194: 0x10000005  b           . + 4 + (0x5 << 2)
label_219198:
    if (ctx->pc == 0x219198u) {
        ctx->pc = 0x21919Cu;
        goto label_21919c;
    }
    ctx->pc = 0x219194u;
    {
        const bool branch_taken_0x219194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219194) {
            ctx->pc = 0x2191ACu;
            goto label_2191ac;
        }
    }
    ctx->pc = 0x21919Cu;
label_21919c:
    // 0x21919c: 0x0  nop
    ctx->pc = 0x21919cu;
    // NOP
label_2191a0:
    // 0x2191a0: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x2191a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2191a4:
    // 0x2191a4: 0xc085a18  jal         func_216860
label_2191a8:
    if (ctx->pc == 0x2191A8u) {
        ctx->pc = 0x2191A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191A4u;
        // 0x2191a8: 0x27a700cc  addiu       $a3, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2191ACu;
        goto label_2191ac;
    }
    ctx->pc = 0x2191A4u;
    SET_GPR_U32(ctx, 31, 0x2191ACu);
    ctx->pc = 0x2191A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191A4u;
    // 0x2191a8: 0x27a700cc  addiu       $a3, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216860u;
    { ctx->pc = 0x216860; return; }
    ctx->pc = 0x2191ACu;
label_2191ac:
    // 0x2191ac: 0x0  nop
    ctx->pc = 0x2191acu;
    // NOP
label_2191b0:
    // 0x2191b0: 0x87a300c8  lh          $v1, 0xC8($sp)
    ctx->pc = 0x2191b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_2191b4:
    // 0x2191b4: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x2191b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2191b8:
    // 0x2191b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2191bc:
    // 0x2191bc: 0xa48300a8  sh          $v1, 0xA8($a0)
    ctx->pc = 0x2191bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 3));
label_2191c0:
    // 0x2191c0: 0x87a300cc  lh          $v1, 0xCC($sp)
    ctx->pc = 0x2191c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_2191c4:
    // 0x2191c4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2191c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_2191c8:
    // 0x2191c8: 0xa48300aa  sh          $v1, 0xAA($a0)
    ctx->pc = 0x2191c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 3));
label_2191cc:
    // 0x2191cc: 0x87a300c8  lh          $v1, 0xC8($sp)
    ctx->pc = 0x2191ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_2191d0:
    // 0x2191d0: 0xa48300d8  sh          $v1, 0xD8($a0)
    ctx->pc = 0x2191d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 216), (uint16_t)GPR_U32(ctx, 3));
label_2191d4:
    // 0x2191d4: 0x87a300cc  lh          $v1, 0xCC($sp)
    ctx->pc = 0x2191d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_2191d8:
    // 0x2191d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2191d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2191dc:
    // 0x2191dc: 0xa48300da  sh          $v1, 0xDA($a0)
    ctx->pc = 0x2191dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 218), (uint16_t)GPR_U32(ctx, 3));
label_2191e0:
    // 0x2191e0: 0xa08200cb  sb          $v0, 0xCB($a0)
    ctx->pc = 0x2191e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 203), (uint8_t)GPR_U32(ctx, 2));
label_2191e4:
    // 0x2191e4: 0xa08200b3  sb          $v0, 0xB3($a0)
    ctx->pc = 0x2191e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 179), (uint8_t)GPR_U32(ctx, 2));
label_2191e8:
    // 0x2191e8: 0xa082009b  sb          $v0, 0x9B($a0)
    ctx->pc = 0x2191e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 2));
label_2191ec:
    // 0x2191ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_2191f0:
    if (ctx->pc == 0x2191F0u) {
        ctx->pc = 0x2191F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191ECu;
        // 0x2191f0: 0xa0820083  sb          $v0, 0x83($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 131), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2191F4u;
        goto label_2191f4;
    }
    ctx->pc = 0x2191ECu;
    {
        const bool branch_taken_0x2191ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191ECu;
        // 0x2191f0: 0xa0820083  sb          $v0, 0x83($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 131), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191ec) {
            ctx->pc = 0x21920Cu;
            goto label_21920c;
        }
    }
    ctx->pc = 0x2191F4u;
label_2191f4:
    // 0x2191f4: 0x0  nop
    ctx->pc = 0x2191f4u;
    // NOP
label_2191f8:
    // 0x2191f8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2191f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2191fc:
    // 0x2191fc: 0xa04000cb  sb          $zero, 0xCB($v0)
    ctx->pc = 0x2191fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 203), (uint8_t)GPR_U32(ctx, 0));
label_219200:
    // 0x219200: 0xa04000b3  sb          $zero, 0xB3($v0)
    ctx->pc = 0x219200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 179), (uint8_t)GPR_U32(ctx, 0));
label_219204:
    // 0x219204: 0xa040009b  sb          $zero, 0x9B($v0)
    ctx->pc = 0x219204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 0));
label_219208:
    // 0x219208: 0xa0400083  sb          $zero, 0x83($v0)
    ctx->pc = 0x219208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 0));
label_21920c:
    // 0x21920c: 0x0  nop
    ctx->pc = 0x21920cu;
    // NOP
label_219210:
    // 0x219210: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x219210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219214:
    // 0x219214: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x219214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_219218:
    // 0x219218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21921c:
    // 0x21921c: 0xa04608a3  sb          $a2, 0x8A3($v0)
    ctx->pc = 0x21921cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2211), (uint8_t)GPR_U32(ctx, 6));
label_219220:
    // 0x219220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219224:
    // 0x219224: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x219224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_219228:
    // 0x219228: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x219228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21922c:
    // 0x21922c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219230:
    // 0x219230: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x219230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_219234:
    // 0x219234: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
label_219238:
    if (ctx->pc == 0x219238u) {
        ctx->pc = 0x219238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219234u;
        // 0x219238: 0x682821  addu        $a1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21923Cu;
        goto label_21923c;
    }
    ctx->pc = 0x219234u;
    {
        const bool branch_taken_0x219234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x219238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219234u;
        // 0x219238: 0x682821  addu        $a1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219234) {
            ctx->pc = 0x219250u;
            goto label_219250;
        }
    }
    ctx->pc = 0x21923Cu;
label_21923c:
    // 0x21923c: 0xa0a20f2b  sb          $v0, 0xF2B($a1)
    ctx->pc = 0x21923cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3883), (uint8_t)GPR_U32(ctx, 2));
label_219240:
    // 0x219240: 0xa0a20f13  sb          $v0, 0xF13($a1)
    ctx->pc = 0x219240u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3859), (uint8_t)GPR_U32(ctx, 2));
label_219244:
    // 0x219244: 0xa0a20efb  sb          $v0, 0xEFB($a1)
    ctx->pc = 0x219244u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3835), (uint8_t)GPR_U32(ctx, 2));
label_219248:
    // 0x219248: 0x10000006  b           . + 4 + (0x6 << 2)
label_21924c:
    if (ctx->pc == 0x21924Cu) {
        ctx->pc = 0x21924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219248u;
        // 0x21924c: 0xa0a20ee3  sb          $v0, 0xEE3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3811), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219250u;
        goto label_219250;
    }
    ctx->pc = 0x219248u;
    {
        const bool branch_taken_0x219248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219248u;
        // 0x21924c: 0xa0a20ee3  sb          $v0, 0xEE3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3811), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219248) {
            ctx->pc = 0x219264u;
            goto label_219264;
        }
    }
    ctx->pc = 0x219250u;
label_219250:
    // 0x219250: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x219250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_219254:
    // 0x219254: 0xa0a60f2b  sb          $a2, 0xF2B($a1)
    ctx->pc = 0x219254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3883), (uint8_t)GPR_U32(ctx, 6));
label_219258:
    // 0x219258: 0xa0a60f13  sb          $a2, 0xF13($a1)
    ctx->pc = 0x219258u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3859), (uint8_t)GPR_U32(ctx, 6));
label_21925c:
    // 0x21925c: 0xa0a60efb  sb          $a2, 0xEFB($a1)
    ctx->pc = 0x21925cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3835), (uint8_t)GPR_U32(ctx, 6));
label_219260:
    // 0x219260: 0xa0a60ee3  sb          $a2, 0xEE3($a1)
    ctx->pc = 0x219260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3811), (uint8_t)GPR_U32(ctx, 6));
label_219264:
    // 0x219264: 0x0  nop
    ctx->pc = 0x219264u;
    // NOP
label_219268:
    // 0x219268: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_21926c:
    // 0x21926c: 0x18e0fff0  blez        $a3, . + 4 + (-0x10 << 2)
label_219270:
    if (ctx->pc == 0x219270u) {
        ctx->pc = 0x219270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21926Cu;
        // 0x219270: 0x250800d0  addiu       $t0, $t0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219274u;
        goto label_219274;
    }
    ctx->pc = 0x21926Cu;
    {
        const bool branch_taken_0x21926c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x219270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21926Cu;
        // 0x219270: 0x250800d0  addiu       $t0, $t0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21926c) {
            ctx->pc = 0x219230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219230;
        }
    }
    ctx->pc = 0x219274u;
label_219274:
    // 0x219274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x219274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219278:
    // 0x219278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21927c:
    // 0x21927c: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x21927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_219280:
    // 0x219280: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x219280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219284:
    // 0x219284: 0x0  nop
    ctx->pc = 0x219284u;
    // NOP
label_219288:
    // 0x219288: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x219288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_21928c:
    // 0x21928c: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x21928cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_219290:
    // 0x219290: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_219294:
    if (ctx->pc == 0x219294u) {
        ctx->pc = 0x219294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219290u;
        // 0x219294: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219298u;
        goto label_219298;
    }
    ctx->pc = 0x219290u;
    {
        const bool branch_taken_0x219290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x219294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219290u;
        // 0x219294: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219290) {
            ctx->pc = 0x2192A0u;
            goto label_2192a0;
        }
    }
    ctx->pc = 0x219298u;
label_219298:
    // 0x219298: 0x10000003  b           . + 4 + (0x3 << 2)
label_21929c:
    if (ctx->pc == 0x21929Cu) {
        ctx->pc = 0x21929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219298u;
        // 0x21929c: 0xa0441703  sb          $a0, 0x1703($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 5891), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2192A0u;
        goto label_2192a0;
    }
    ctx->pc = 0x219298u;
    {
        const bool branch_taken_0x219298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219298u;
        // 0x21929c: 0xa0441703  sb          $a0, 0x1703($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 5891), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219298) {
            ctx->pc = 0x2192A8u;
            goto label_2192a8;
        }
    }
    ctx->pc = 0x2192A0u;
label_2192a0:
    // 0x2192a0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2192a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2192a4:
    // 0x2192a4: 0xa0401703  sb          $zero, 0x1703($v0)
    ctx->pc = 0x2192a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5891), (uint8_t)GPR_U32(ctx, 0));
label_2192a8:
    // 0x2192a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2192a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2192ac:
    // 0x2192ac: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x2192acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_2192b0:
    // 0x2192b0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2192b4:
    if (ctx->pc == 0x2192B4u) {
        ctx->pc = 0x2192B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192B0u;
        // 0x2192b4: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2192B8u;
        goto label_2192b8;
    }
    ctx->pc = 0x2192B0u;
    {
        const bool branch_taken_0x2192b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2192B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192B0u;
        // 0x2192b4: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192b0) {
            ctx->pc = 0x219284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219284;
        }
    }
    ctx->pc = 0x2192B8u;
label_2192b8:
    // 0x2192b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2192b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2192bc:
    // 0x2192bc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x2192bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_2192c0:
    // 0x2192c0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2192c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2192c4:
    // 0x2192c4: 0x267300d0  addiu       $s3, $s3, 0xD0
    ctx->pc = 0x2192c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_2192c8:
    // 0x2192c8: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x2192c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_2192cc:
    // 0x2192cc: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_2192d0:
    if (ctx->pc == 0x2192D0u) {
        ctx->pc = 0x2192D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192CCu;
        // 0x2192d0: 0x26b50500  addiu       $s5, $s5, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2192D4u;
        goto label_2192d4;
    }
    ctx->pc = 0x2192CCu;
    {
        const bool branch_taken_0x2192cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2192D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192CCu;
        // 0x2192d0: 0x26b50500  addiu       $s5, $s5, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192cc) {
            ctx->pc = 0x2190D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2190d8;
        }
    }
    ctx->pc = 0x2192D4u;
label_2192d4:
    // 0x2192d4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2192d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2192d8:
    // 0x2192d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2192d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2192dc:
    // 0x2192dc: 0x24060489  addiu       $a2, $zero, 0x489
    ctx->pc = 0x2192dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1161));
label_2192e0:
    // 0x2192e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2192e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2192e4:
    // 0x2192e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2192e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2192e8:
    // 0x2192e8: 0xc066c72  jal         func_19B1C8
label_2192ec:
    if (ctx->pc == 0x2192ECu) {
        ctx->pc = 0x2192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2192E8u;
        // 0x2192ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2192F0u;
        goto label_2192f0;
    }
    ctx->pc = 0x2192E8u;
    SET_GPR_U32(ctx, 31, 0x2192F0u);
    ctx->pc = 0x2192ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2192E8u;
    // 0x2192ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x2192F0u;
label_2192f0:
    // 0x2192f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2192f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2192f4:
    // 0x2192f4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2192f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2192f8:
    // 0x2192f8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2192f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2192fc:
    // 0x2192fc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2192fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_219300:
    // 0x219300: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x219300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_219304:
    // 0x219304: 0x1460ff64  bnez        $v1, . + 4 + (-0x9C << 2)
label_219308:
    if (ctx->pc == 0x219308u) {
        ctx->pc = 0x219308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219304u;
        // 0x219308: 0x27de00a0  addiu       $fp, $fp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21930Cu;
        goto label_21930c;
    }
    ctx->pc = 0x219304u;
    {
        const bool branch_taken_0x219304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219304u;
        // 0x219308: 0x27de00a0  addiu       $fp, $fp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219304) {
            ctx->pc = 0x219098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219098;
        }
    }
    ctx->pc = 0x21930Cu;
label_21930c:
    // 0x21930c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21930cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_219310:
    // 0x219310: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x219310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_219314:
    // 0x219314: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x219314u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219318:
    // 0x219318: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x219318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21931c:
    // 0x21931c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21931cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219320:
    // 0x219320: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x219320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_219324:
    // 0x219324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x219324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219328:
    // 0x219328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21932c:
    // 0x21932c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21932cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219330:
    // 0x219330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219334:
    // 0x219334: 0x3e00008  jr          $ra
label_219338:
    if (ctx->pc == 0x219338u) {
        ctx->pc = 0x219338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219334u;
        // 0x219338: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21933Cu;
        goto label_21933c;
    }
    ctx->pc = 0x219334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219334u;
        // 0x219338: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21933Cu;
label_21933c:
    // 0x21933c: 0x0  nop
    ctx->pc = 0x21933cu;
    // NOP
label_219340:
    // 0x219340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_219344:
    // 0x219344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219348:
    // 0x219348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21934c:
    // 0x21934c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x21934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_219350:
    // 0x219350: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x219350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_219354:
    // 0x219354: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x219354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219358:
    // 0x219358: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x219358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_21935c:
    // 0x21935c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_219360:
    // 0x219360: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x219360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_219364:
    // 0x219364: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x219364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219368:
    // 0x219368: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x219368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_21936c:
    // 0x21936c: 0xaf809254  sw          $zero, -0x6DAC($gp)
    ctx->pc = 0x21936cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939220), GPR_U32(ctx, 0));
label_219370:
    // 0x219370: 0xaf809250  sw          $zero, -0x6DB0($gp)
    ctx->pc = 0x219370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939216), GPR_U32(ctx, 0));
label_219374:
    // 0x219374: 0xaf829258  sw          $v0, -0x6DA8($gp)
    ctx->pc = 0x219374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939224), GPR_U32(ctx, 2));
label_219378:
    // 0x219378: 0x27829260  addiu       $v0, $gp, -0x6DA0
    ctx->pc = 0x219378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
label_21937c:
    // 0x21937c: 0x2405027a  addiu       $a1, $zero, 0x27A
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_219380:
    // 0x219380: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x219380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_219384:
    // 0x219384: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x219384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219388:
    // 0x219388: 0xc05e234  jal         func_1788D0
label_21938c:
    if (ctx->pc == 0x21938Cu) {
        ctx->pc = 0x21938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219388u;
        // 0x21938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219390u;
        goto label_219390;
    }
    ctx->pc = 0x219388u;
    SET_GPR_U32(ctx, 31, 0x219390u);
    ctx->pc = 0x21938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219388u;
    // 0x21938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x219390u;
label_219390:
    // 0x219390: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219394:
    // 0x219394: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x219394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219398:
    // 0x219398: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x219398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_21939c:
    // 0x21939c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2193a0:
    // 0x2193a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2193a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2193a4:
    // 0x2193a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2193a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2193a8:
    // 0x2193a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2193a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2193ac:
    // 0x2193ac: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2193acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2193b0:
    // 0x2193b0: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2193b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2193b4:
    // 0x2193b4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2193b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2193b8:
    // 0x2193b8: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2193b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2193bc:
    // 0x2193bc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2193bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2193c0:
    // 0x2193c0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2193c4:
    // 0x2193c4: 0xdc258c10  ld          $a1, -0x73F0($at)
    ctx->pc = 0x2193c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937616)));
label_2193c8:
    // 0x2193c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2193c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2193cc:
    // 0x2193cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2193ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2193d0:
    // 0x2193d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2193d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2193d4:
    // 0x2193d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2193d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2193d8:
    // 0x2193d8: 0xc05de30  jal         func_1778C0
label_2193dc:
    if (ctx->pc == 0x2193DCu) {
        ctx->pc = 0x2193DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193D8u;
        // 0x2193dc: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193E0u;
        goto label_2193e0;
    }
    ctx->pc = 0x2193D8u;
    SET_GPR_U32(ctx, 31, 0x2193E0u);
    ctx->pc = 0x2193DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193D8u;
    // 0x2193dc: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2193E0u;
label_2193e0:
    // 0x2193e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2193e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2193e4:
    // 0x2193e4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2193e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2193e8:
    // 0x2193e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2193ec:
    if (ctx->pc == 0x2193ECu) {
        ctx->pc = 0x2193ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E8u;
        // 0x2193ec: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193F0u;
        goto label_2193f0;
    }
    ctx->pc = 0x2193E8u;
    {
        const bool branch_taken_0x2193e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2193ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E8u;
        // 0x2193ec: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193e8) {
            ctx->pc = 0x219398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219398;
        }
    }
    ctx->pc = 0x2193F0u;
label_2193f0:
    // 0x2193f0: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x2193f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_2193f4:
    // 0x2193f4: 0x34028500  ori         $v0, $zero, 0x8500
    ctx->pc = 0x2193f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
label_2193f8:
    // 0x2193f8: 0xa6030132  sh          $v1, 0x132($s0)
    ctx->pc = 0x2193f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 3));
label_2193fc:
    // 0x2193fc: 0xa6020142  sh          $v0, 0x142($s0)
    ctx->pc = 0x2193fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 322), (uint16_t)GPR_U32(ctx, 2));
label_219400:
    // 0x219400: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x219400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_219404:
    // 0x219404: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_219408:
    if (ctx->pc == 0x219408u) {
        ctx->pc = 0x21940Cu;
        goto label_21940c;
    }
    ctx->pc = 0x219404u;
    {
        const bool branch_taken_0x219404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219404) {
            ctx->pc = 0x219610u;
            { ctx->pc = 0x219610; return; }
        }
    }
    ctx->pc = 0x21940Cu;
label_21940c:
    // 0x21940c: 0x8f849268  lw          $a0, -0x6D98($gp)
    ctx->pc = 0x21940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939240)));
label_219410:
    // 0x219410: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
label_219414:
    if (ctx->pc == 0x219414u) {
        ctx->pc = 0x219414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219410u;
        // 0x219414: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219418u;
        goto label_219418;
    }
    ctx->pc = 0x219410u;
    {
        const bool branch_taken_0x219410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219410u;
        // 0x219414: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219410) {
            ctx->pc = 0x219460u;
            goto label_219460;
        }
    }
    ctx->pc = 0x219418u;
label_219418:
    // 0x219418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21941c:
    // 0x21941c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_219420:
    // 0x219420: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219424:
    // 0x219424: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_219428:
    // 0x219428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21942c:
    // 0x21942c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_219430:
    // 0x219430: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x219430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_219434:
    // 0x219434: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219438:
    // 0x219438: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x219438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_21943c:
    // 0x21943c: 0xdc258c20  ld          $a1, -0x73E0($at)
    ctx->pc = 0x21943cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937632)));
label_219440:
    // 0x219440: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x219440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219444:
    // 0x219444: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219448:
    // 0x219448: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21944c:
    // 0x21944c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21944cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219450:
    // 0x219450: 0xc05de30  jal         func_1778C0
label_219454:
    if (ctx->pc == 0x219454u) {
        ctx->pc = 0x219454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219450u;
        // 0x219454: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219458u;
        goto label_219458;
    }
    ctx->pc = 0x219450u;
    SET_GPR_U32(ctx, 31, 0x219458u);
    ctx->pc = 0x219454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219450u;
    // 0x219454: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x219458u;
label_219458:
    // 0x219458: 0x10000082  b           . + 4 + (0x82 << 2)
label_21945c:
    if (ctx->pc == 0x21945Cu) {
        ctx->pc = 0x219460u;
        goto label_219460;
    }
    ctx->pc = 0x219458u;
    {
        const bool branch_taken_0x219458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219458) {
            ctx->pc = 0x219664u;
            { ctx->pc = 0x219664; return; }
        }
    }
    ctx->pc = 0x219460u;
label_219460:
    // 0x219460: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x219460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_219464:
    // 0x219464: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_219468:
    if (ctx->pc == 0x219468u) {
        ctx->pc = 0x219468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219464u;
        // 0x219468: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21946Cu;
        goto label_21946c;
    }
    ctx->pc = 0x219464u;
    {
        const bool branch_taken_0x219464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x219468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219464u;
        // 0x219468: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219464) {
            ctx->pc = 0x2194B0u;
            goto label_2194b0;
        }
    }
    ctx->pc = 0x21946Cu;
label_21946c:
    // 0x21946c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219470:
    // 0x219470: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x219470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_219474:
    // 0x219474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219478:
    // 0x219478: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21947c:
    // 0x21947c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219480:
    // 0x219480: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x219480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_219484:
    // 0x219484: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x219484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_219488:
    // 0x219488: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21948c:
    // 0x21948c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x21948cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_219490:
    // 0x219490: 0xdc258c20  ld          $a1, -0x73E0($at)
    ctx->pc = 0x219490u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937632)));
label_219494:
    // 0x219494: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x219494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219498:
    // 0x219498: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_21949c:
    // 0x21949c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21949cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2194a0:
    // 0x2194a0: 0xc05de30  jal         func_1778C0
label_2194a4:
    if (ctx->pc == 0x2194A4u) {
        ctx->pc = 0x2194A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A0u;
        // 0x2194a4: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194A8u;
        goto label_2194a8;
    }
    ctx->pc = 0x2194A0u;
    SET_GPR_U32(ctx, 31, 0x2194A8u);
    ctx->pc = 0x2194A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194A0u;
    // 0x2194a4: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2194A8u;
label_2194a8:
    // 0x2194a8: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2194ac:
    if (ctx->pc == 0x2194ACu) {
        ctx->pc = 0x2194B0u;
        goto label_2194b0;
    }
    ctx->pc = 0x2194A8u;
    {
        const bool branch_taken_0x2194a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2194a8) {
            ctx->pc = 0x219664u;
            { ctx->pc = 0x219664; return; }
        }
    }
    ctx->pc = 0x2194B0u;
label_2194b0:
    // 0x2194b0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2194b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2194b4:
    // 0x2194b4: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
label_2194b8:
    if (ctx->pc == 0x2194B8u) {
        ctx->pc = 0x2194B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194B4u;
        // 0x2194b8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194BCu;
        goto label_2194bc;
    }
    ctx->pc = 0x2194B4u;
    {
        const bool branch_taken_0x2194b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2194B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194B4u;
        // 0x2194b8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194b4) {
            ctx->pc = 0x219504u;
            goto label_219504;
        }
    }
    ctx->pc = 0x2194BCu;
label_2194bc:
    // 0x2194bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2194bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2194c0:
    // 0x2194c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2194c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2194c4:
    // 0x2194c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2194c8:
    // 0x2194c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2194c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2194cc:
    // 0x2194cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2194ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2194d0:
    // 0x2194d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2194d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2194d4:
    // 0x2194d4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2194d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2194d8:
    // 0x2194d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2194d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2194dc:
    // 0x2194dc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2194dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2194e0:
    // 0x2194e0: 0xdc258c20  ld          $a1, -0x73E0($at)
    ctx->pc = 0x2194e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937632)));
label_2194e4:
    // 0x2194e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2194e8:
    // 0x2194e8: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2194e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2194ec:
    // 0x2194ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2194ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2194f0:
    // 0x2194f0: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x2194f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2194f4:
    // 0x2194f4: 0xc05de30  jal         func_1778C0
label_2194f8:
    if (ctx->pc == 0x2194F8u) {
        ctx->pc = 0x2194F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194F4u;
        // 0x2194f8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194FCu;
        goto label_2194fc;
    }
    ctx->pc = 0x2194F4u;
    SET_GPR_U32(ctx, 31, 0x2194FCu);
    ctx->pc = 0x2194F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194F4u;
    // 0x2194f8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2194FCu;
label_2194fc:
    // 0x2194fc: 0x10000059  b           . + 4 + (0x59 << 2)
label_219500:
    if (ctx->pc == 0x219500u) {
        ctx->pc = 0x219504u;
        goto label_219504;
    }
    ctx->pc = 0x2194FCu;
    {
        const bool branch_taken_0x2194fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2194fc) {
            ctx->pc = 0x219664u;
            { ctx->pc = 0x219664; return; }
        }
    }
    ctx->pc = 0x219504u;
label_219504:
    // 0x219504: 0x0  nop
    ctx->pc = 0x219504u;
    // NOP
label_219508:
    // 0x219508: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x219508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21950c:
    // 0x21950c: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
label_219510:
    if (ctx->pc == 0x219510u) {
        ctx->pc = 0x219510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21950Cu;
        // 0x219510: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219514u;
        goto label_219514;
    }
    ctx->pc = 0x21950Cu;
    {
        const bool branch_taken_0x21950c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x219510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21950Cu;
        // 0x219510: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21950c) {
            ctx->pc = 0x21955Cu;
            goto label_21955c;
        }
    }
    ctx->pc = 0x219514u;
label_219514:
    // 0x219514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219518:
    // 0x219518: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x219518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21951c:
    // 0x21951c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219520:
    // 0x219520: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_219524:
    // 0x219524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219528:
    // 0x219528: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x219528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21952c:
    // 0x21952c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x21952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_219530:
    // 0x219530: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219534:
    // 0x219534: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x219534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_219538:
    // 0x219538: 0xdc258c20  ld          $a1, -0x73E0($at)
    ctx->pc = 0x219538u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937632)));
label_21953c:
    // 0x21953c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x21953cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219540:
    // 0x219540: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219544:
    // 0x219544: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219548:
    // 0x219548: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x219548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_21954c:
    // 0x21954c: 0xc05de30  jal         func_1778C0
label_219550:
    if (ctx->pc == 0x219550u) {
        ctx->pc = 0x219550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21954Cu;
        // 0x219550: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219554u;
        goto label_219554;
    }
    ctx->pc = 0x21954Cu;
    SET_GPR_U32(ctx, 31, 0x219554u);
    ctx->pc = 0x219550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21954Cu;
    // 0x219550: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x219554u;
label_219554:
    // 0x219554: 0x10000043  b           . + 4 + (0x43 << 2)
label_219558:
    if (ctx->pc == 0x219558u) {
        ctx->pc = 0x21955Cu;
        goto label_21955c;
    }
    ctx->pc = 0x219554u;
    {
        const bool branch_taken_0x219554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219554) {
            ctx->pc = 0x219664u;
            { ctx->pc = 0x219664; return; }
        }
    }
    ctx->pc = 0x21955Cu;
label_21955c:
    // 0x21955c: 0x0  nop
    ctx->pc = 0x21955cu;
    // NOP
label_219560:
    // 0x219560: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x219560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_219564:
    // 0x219564: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
label_219568:
    if (ctx->pc == 0x219568u) {
        ctx->pc = 0x219568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219564u;
        // 0x219568: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21956Cu;
        goto label_21956c;
    }
    ctx->pc = 0x219564u;
    {
        const bool branch_taken_0x219564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x219568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219564u;
        // 0x219568: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219564) {
            ctx->pc = 0x2195B4u;
            goto label_2195b4;
        }
    }
    ctx->pc = 0x21956Cu;
label_21956c:
    // 0x21956c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21956cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219570:
    // 0x219570: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x219570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_219574:
    // 0x219574: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x219574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219578:
    // 0x219578: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21957c:
    // 0x21957c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219580:
    // 0x219580: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x219580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_219584:
    // 0x219584: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x219584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_219588:
    // 0x219588: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21958c:
    // 0x21958c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x21958cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_219590:
    // 0x219590: 0xdc258c20  ld          $a1, -0x73E0($at)
    ctx->pc = 0x219590u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937632)));
label_219594:
    // 0x219594: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x219594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219598:
    // 0x219598: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_21959c:
    // 0x21959c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21959cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2195a0:
    // 0x2195a0: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x2195a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2195a4:
    // 0x2195a4: 0xc05de30  jal         func_1778C0
label_2195a8:
    if (ctx->pc == 0x2195A8u) {
        ctx->pc = 0x2195A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A4u;
        // 0x2195a8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2195ACu;
        goto label_2195ac;
    }
    ctx->pc = 0x2195A4u;
    SET_GPR_U32(ctx, 31, 0x2195ACu);
    ctx->pc = 0x2195A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195A4u;
    // 0x2195a8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2195ACu;
label_2195ac:
    // 0x2195ac: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2195b0:
    if (ctx->pc == 0x2195B0u) {
        ctx->pc = 0x2195B4u;
        goto label_2195b4;
    }
    ctx->pc = 0x2195ACu;
    {
        const bool branch_taken_0x2195ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2195ac) {
            ctx->pc = 0x219664u;
            { ctx->pc = 0x219664; return; }
        }
    }
    ctx->pc = 0x2195B4u;
label_2195b4:
    // 0x2195b4: 0x0  nop
    ctx->pc = 0x2195b4u;
    // NOP
label_2195b8:
    // 0x2195b8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2195bc:
    // 0x2195bc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2195bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2195c0:
    // 0x2195c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2195c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2195c4:
    // 0x2195c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2195c8:
    // 0x2195c8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2195c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2195cc:
    // 0x2195cc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2195ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2195d0u;
    return;
}
