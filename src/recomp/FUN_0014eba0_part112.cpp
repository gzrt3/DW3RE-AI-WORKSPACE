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


void FUN_0014eba0_part112(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x184ed0u: goto label_184ed0;
        case 0x184ed4u: goto label_184ed4;
        case 0x184ed8u: goto label_184ed8;
        case 0x184edcu: goto label_184edc;
        case 0x184ee0u: goto label_184ee0;
        case 0x184ee4u: goto label_184ee4;
        case 0x184ee8u: goto label_184ee8;
        case 0x184eecu: goto label_184eec;
        case 0x184ef0u: goto label_184ef0;
        case 0x184ef4u: goto label_184ef4;
        case 0x184ef8u: goto label_184ef8;
        case 0x184efcu: goto label_184efc;
        case 0x184f00u: goto label_184f00;
        case 0x184f04u: goto label_184f04;
        case 0x184f08u: goto label_184f08;
        case 0x184f0cu: goto label_184f0c;
        case 0x184f10u: goto label_184f10;
        case 0x184f14u: goto label_184f14;
        case 0x184f18u: goto label_184f18;
        case 0x184f1cu: goto label_184f1c;
        case 0x184f20u: goto label_184f20;
        case 0x184f24u: goto label_184f24;
        case 0x184f28u: goto label_184f28;
        case 0x184f2cu: goto label_184f2c;
        case 0x184f30u: goto label_184f30;
        case 0x184f34u: goto label_184f34;
        case 0x184f38u: goto label_184f38;
        case 0x184f3cu: goto label_184f3c;
        case 0x184f40u: goto label_184f40;
        case 0x184f44u: goto label_184f44;
        case 0x184f48u: goto label_184f48;
        case 0x184f4cu: goto label_184f4c;
        case 0x184f50u: goto label_184f50;
        case 0x184f54u: goto label_184f54;
        case 0x184f58u: goto label_184f58;
        case 0x184f5cu: goto label_184f5c;
        case 0x184f60u: goto label_184f60;
        case 0x184f64u: goto label_184f64;
        case 0x184f68u: goto label_184f68;
        case 0x184f6cu: goto label_184f6c;
        case 0x184f70u: goto label_184f70;
        case 0x184f74u: goto label_184f74;
        case 0x184f78u: goto label_184f78;
        case 0x184f7cu: goto label_184f7c;
        case 0x184f80u: goto label_184f80;
        case 0x184f84u: goto label_184f84;
        case 0x184f88u: goto label_184f88;
        case 0x184f8cu: goto label_184f8c;
        case 0x184f90u: goto label_184f90;
        case 0x184f94u: goto label_184f94;
        case 0x184f98u: goto label_184f98;
        case 0x184f9cu: goto label_184f9c;
        case 0x184fa0u: goto label_184fa0;
        case 0x184fa4u: goto label_184fa4;
        case 0x184fa8u: goto label_184fa8;
        case 0x184facu: goto label_184fac;
        case 0x184fb0u: goto label_184fb0;
        case 0x184fb4u: goto label_184fb4;
        case 0x184fb8u: goto label_184fb8;
        case 0x184fbcu: goto label_184fbc;
        case 0x184fc0u: goto label_184fc0;
        case 0x184fc4u: goto label_184fc4;
        case 0x184fc8u: goto label_184fc8;
        case 0x184fccu: goto label_184fcc;
        case 0x184fd0u: goto label_184fd0;
        case 0x184fd4u: goto label_184fd4;
        case 0x184fd8u: goto label_184fd8;
        case 0x184fdcu: goto label_184fdc;
        case 0x184fe0u: goto label_184fe0;
        case 0x184fe4u: goto label_184fe4;
        case 0x184fe8u: goto label_184fe8;
        case 0x184fecu: goto label_184fec;
        case 0x184ff0u: goto label_184ff0;
        case 0x184ff4u: goto label_184ff4;
        case 0x184ff8u: goto label_184ff8;
        case 0x184ffcu: goto label_184ffc;
        case 0x185000u: goto label_185000;
        case 0x185004u: goto label_185004;
        case 0x185008u: goto label_185008;
        case 0x18500cu: goto label_18500c;
        case 0x185010u: goto label_185010;
        case 0x185014u: goto label_185014;
        case 0x185018u: goto label_185018;
        case 0x18501cu: goto label_18501c;
        case 0x185020u: goto label_185020;
        case 0x185024u: goto label_185024;
        case 0x185028u: goto label_185028;
        case 0x18502cu: goto label_18502c;
        case 0x185030u: goto label_185030;
        case 0x185034u: goto label_185034;
        case 0x185038u: goto label_185038;
        case 0x18503cu: goto label_18503c;
        case 0x185040u: goto label_185040;
        case 0x185044u: goto label_185044;
        case 0x185048u: goto label_185048;
        case 0x18504cu: goto label_18504c;
        case 0x185050u: goto label_185050;
        case 0x185054u: goto label_185054;
        case 0x185058u: goto label_185058;
        case 0x18505cu: goto label_18505c;
        case 0x185060u: goto label_185060;
        case 0x185064u: goto label_185064;
        case 0x185068u: goto label_185068;
        case 0x18506cu: goto label_18506c;
        case 0x185070u: goto label_185070;
        case 0x185074u: goto label_185074;
        case 0x185078u: goto label_185078;
        case 0x18507cu: goto label_18507c;
        case 0x185080u: goto label_185080;
        case 0x185084u: goto label_185084;
        case 0x185088u: goto label_185088;
        case 0x18508cu: goto label_18508c;
        case 0x185090u: goto label_185090;
        case 0x185094u: goto label_185094;
        case 0x185098u: goto label_185098;
        case 0x18509cu: goto label_18509c;
        case 0x1850a0u: goto label_1850a0;
        case 0x1850a4u: goto label_1850a4;
        case 0x1850a8u: goto label_1850a8;
        case 0x1850acu: goto label_1850ac;
        case 0x1850b0u: goto label_1850b0;
        case 0x1850b4u: goto label_1850b4;
        case 0x1850b8u: goto label_1850b8;
        case 0x1850bcu: goto label_1850bc;
        case 0x1850c0u: goto label_1850c0;
        case 0x1850c4u: goto label_1850c4;
        case 0x1850c8u: goto label_1850c8;
        case 0x1850ccu: goto label_1850cc;
        case 0x1850d0u: goto label_1850d0;
        case 0x1850d4u: goto label_1850d4;
        case 0x1850d8u: goto label_1850d8;
        case 0x1850dcu: goto label_1850dc;
        case 0x1850e0u: goto label_1850e0;
        case 0x1850e4u: goto label_1850e4;
        case 0x1850e8u: goto label_1850e8;
        case 0x1850ecu: goto label_1850ec;
        case 0x1850f0u: goto label_1850f0;
        case 0x1850f4u: goto label_1850f4;
        case 0x1850f8u: goto label_1850f8;
        case 0x1850fcu: goto label_1850fc;
        case 0x185100u: goto label_185100;
        case 0x185104u: goto label_185104;
        case 0x185108u: goto label_185108;
        case 0x18510cu: goto label_18510c;
        case 0x185110u: goto label_185110;
        case 0x185114u: goto label_185114;
        case 0x185118u: goto label_185118;
        case 0x18511cu: goto label_18511c;
        case 0x185120u: goto label_185120;
        case 0x185124u: goto label_185124;
        case 0x185128u: goto label_185128;
        case 0x18512cu: goto label_18512c;
        case 0x185130u: goto label_185130;
        case 0x185134u: goto label_185134;
        case 0x185138u: goto label_185138;
        case 0x18513cu: goto label_18513c;
        case 0x185140u: goto label_185140;
        case 0x185144u: goto label_185144;
        case 0x185148u: goto label_185148;
        case 0x18514cu: goto label_18514c;
        case 0x185150u: goto label_185150;
        case 0x185154u: goto label_185154;
        case 0x185158u: goto label_185158;
        case 0x18515cu: goto label_18515c;
        case 0x185160u: goto label_185160;
        case 0x185164u: goto label_185164;
        case 0x185168u: goto label_185168;
        case 0x18516cu: goto label_18516c;
        case 0x185170u: goto label_185170;
        case 0x185174u: goto label_185174;
        case 0x185178u: goto label_185178;
        case 0x18517cu: goto label_18517c;
        case 0x185180u: goto label_185180;
        case 0x185184u: goto label_185184;
        case 0x185188u: goto label_185188;
        case 0x18518cu: goto label_18518c;
        case 0x185190u: goto label_185190;
        case 0x185194u: goto label_185194;
        case 0x185198u: goto label_185198;
        case 0x18519cu: goto label_18519c;
        case 0x1851a0u: goto label_1851a0;
        case 0x1851a4u: goto label_1851a4;
        case 0x1851a8u: goto label_1851a8;
        case 0x1851acu: goto label_1851ac;
        case 0x1851b0u: goto label_1851b0;
        case 0x1851b4u: goto label_1851b4;
        case 0x1851b8u: goto label_1851b8;
        case 0x1851bcu: goto label_1851bc;
        case 0x1851c0u: goto label_1851c0;
        case 0x1851c4u: goto label_1851c4;
        case 0x1851c8u: goto label_1851c8;
        case 0x1851ccu: goto label_1851cc;
        case 0x1851d0u: goto label_1851d0;
        case 0x1851d4u: goto label_1851d4;
        case 0x1851d8u: goto label_1851d8;
        case 0x1851dcu: goto label_1851dc;
        case 0x1851e0u: goto label_1851e0;
        case 0x1851e4u: goto label_1851e4;
        case 0x1851e8u: goto label_1851e8;
        case 0x1851ecu: goto label_1851ec;
        case 0x1851f0u: goto label_1851f0;
        case 0x1851f4u: goto label_1851f4;
        case 0x1851f8u: goto label_1851f8;
        case 0x1851fcu: goto label_1851fc;
        case 0x185200u: goto label_185200;
        case 0x185204u: goto label_185204;
        case 0x185208u: goto label_185208;
        case 0x18520cu: goto label_18520c;
        case 0x185210u: goto label_185210;
        case 0x185214u: goto label_185214;
        case 0x185218u: goto label_185218;
        case 0x18521cu: goto label_18521c;
        case 0x185220u: goto label_185220;
        case 0x185224u: goto label_185224;
        case 0x185228u: goto label_185228;
        case 0x18522cu: goto label_18522c;
        case 0x185230u: goto label_185230;
        case 0x185234u: goto label_185234;
        case 0x185238u: goto label_185238;
        case 0x18523cu: goto label_18523c;
        case 0x185240u: goto label_185240;
        case 0x185244u: goto label_185244;
        case 0x185248u: goto label_185248;
        case 0x18524cu: goto label_18524c;
        case 0x185250u: goto label_185250;
        case 0x185254u: goto label_185254;
        case 0x185258u: goto label_185258;
        case 0x18525cu: goto label_18525c;
        case 0x185260u: goto label_185260;
        case 0x185264u: goto label_185264;
        case 0x185268u: goto label_185268;
        case 0x18526cu: goto label_18526c;
        case 0x185270u: goto label_185270;
        case 0x185274u: goto label_185274;
        case 0x185278u: goto label_185278;
        case 0x18527cu: goto label_18527c;
        case 0x185280u: goto label_185280;
        case 0x185284u: goto label_185284;
        case 0x185288u: goto label_185288;
        case 0x18528cu: goto label_18528c;
        case 0x185290u: goto label_185290;
        case 0x185294u: goto label_185294;
        case 0x185298u: goto label_185298;
        case 0x18529cu: goto label_18529c;
        case 0x1852a0u: goto label_1852a0;
        case 0x1852a4u: goto label_1852a4;
        case 0x1852a8u: goto label_1852a8;
        case 0x1852acu: goto label_1852ac;
        case 0x1852b0u: goto label_1852b0;
        case 0x1852b4u: goto label_1852b4;
        case 0x1852b8u: goto label_1852b8;
        case 0x1852bcu: goto label_1852bc;
        case 0x1852c0u: goto label_1852c0;
        case 0x1852c4u: goto label_1852c4;
        case 0x1852c8u: goto label_1852c8;
        case 0x1852ccu: goto label_1852cc;
        case 0x1852d0u: goto label_1852d0;
        case 0x1852d4u: goto label_1852d4;
        case 0x1852d8u: goto label_1852d8;
        case 0x1852dcu: goto label_1852dc;
        case 0x1852e0u: goto label_1852e0;
        case 0x1852e4u: goto label_1852e4;
        case 0x1852e8u: goto label_1852e8;
        case 0x1852ecu: goto label_1852ec;
        case 0x1852f0u: goto label_1852f0;
        case 0x1852f4u: goto label_1852f4;
        case 0x1852f8u: goto label_1852f8;
        case 0x1852fcu: goto label_1852fc;
        case 0x185300u: goto label_185300;
        case 0x185304u: goto label_185304;
        case 0x185308u: goto label_185308;
        case 0x18530cu: goto label_18530c;
        case 0x185310u: goto label_185310;
        case 0x185314u: goto label_185314;
        case 0x185318u: goto label_185318;
        case 0x18531cu: goto label_18531c;
        case 0x185320u: goto label_185320;
        case 0x185324u: goto label_185324;
        case 0x185328u: goto label_185328;
        case 0x18532cu: goto label_18532c;
        case 0x185330u: goto label_185330;
        case 0x185334u: goto label_185334;
        case 0x185338u: goto label_185338;
        case 0x18533cu: goto label_18533c;
        case 0x185340u: goto label_185340;
        case 0x185344u: goto label_185344;
        case 0x185348u: goto label_185348;
        case 0x18534cu: goto label_18534c;
        case 0x185350u: goto label_185350;
        case 0x185354u: goto label_185354;
        case 0x185358u: goto label_185358;
        case 0x18535cu: goto label_18535c;
        case 0x185360u: goto label_185360;
        case 0x185364u: goto label_185364;
        case 0x185368u: goto label_185368;
        case 0x18536cu: goto label_18536c;
        case 0x185370u: goto label_185370;
        case 0x185374u: goto label_185374;
        case 0x185378u: goto label_185378;
        case 0x18537cu: goto label_18537c;
        case 0x185380u: goto label_185380;
        case 0x185384u: goto label_185384;
        case 0x185388u: goto label_185388;
        case 0x18538cu: goto label_18538c;
        case 0x185390u: goto label_185390;
        case 0x185394u: goto label_185394;
        case 0x185398u: goto label_185398;
        case 0x18539cu: goto label_18539c;
        case 0x1853a0u: goto label_1853a0;
        case 0x1853a4u: goto label_1853a4;
        case 0x1853a8u: goto label_1853a8;
        case 0x1853acu: goto label_1853ac;
        case 0x1853b0u: goto label_1853b0;
        case 0x1853b4u: goto label_1853b4;
        case 0x1853b8u: goto label_1853b8;
        case 0x1853bcu: goto label_1853bc;
        case 0x1853c0u: goto label_1853c0;
        case 0x1853c4u: goto label_1853c4;
        case 0x1853c8u: goto label_1853c8;
        case 0x1853ccu: goto label_1853cc;
        case 0x1853d0u: goto label_1853d0;
        case 0x1853d4u: goto label_1853d4;
        case 0x1853d8u: goto label_1853d8;
        case 0x1853dcu: goto label_1853dc;
        case 0x1853e0u: goto label_1853e0;
        case 0x1853e4u: goto label_1853e4;
        case 0x1853e8u: goto label_1853e8;
        case 0x1853ecu: goto label_1853ec;
        case 0x1853f0u: goto label_1853f0;
        case 0x1853f4u: goto label_1853f4;
        case 0x1853f8u: goto label_1853f8;
        case 0x1853fcu: goto label_1853fc;
        case 0x185400u: goto label_185400;
        case 0x185404u: goto label_185404;
        case 0x185408u: goto label_185408;
        case 0x18540cu: goto label_18540c;
        case 0x185410u: goto label_185410;
        case 0x185414u: goto label_185414;
        case 0x185418u: goto label_185418;
        case 0x18541cu: goto label_18541c;
        case 0x185420u: goto label_185420;
        case 0x185424u: goto label_185424;
        case 0x185428u: goto label_185428;
        case 0x18542cu: goto label_18542c;
        case 0x185430u: goto label_185430;
        case 0x185434u: goto label_185434;
        case 0x185438u: goto label_185438;
        case 0x18543cu: goto label_18543c;
        case 0x185440u: goto label_185440;
        case 0x185444u: goto label_185444;
        case 0x185448u: goto label_185448;
        case 0x18544cu: goto label_18544c;
        case 0x185450u: goto label_185450;
        case 0x185454u: goto label_185454;
        case 0x185458u: goto label_185458;
        case 0x18545cu: goto label_18545c;
        case 0x185460u: goto label_185460;
        case 0x185464u: goto label_185464;
        case 0x185468u: goto label_185468;
        case 0x18546cu: goto label_18546c;
        case 0x185470u: goto label_185470;
        case 0x185474u: goto label_185474;
        case 0x185478u: goto label_185478;
        case 0x18547cu: goto label_18547c;
        case 0x185480u: goto label_185480;
        case 0x185484u: goto label_185484;
        case 0x185488u: goto label_185488;
        case 0x18548cu: goto label_18548c;
        case 0x185490u: goto label_185490;
        case 0x185494u: goto label_185494;
        case 0x185498u: goto label_185498;
        case 0x18549cu: goto label_18549c;
        case 0x1854a0u: goto label_1854a0;
        case 0x1854a4u: goto label_1854a4;
        case 0x1854a8u: goto label_1854a8;
        case 0x1854acu: goto label_1854ac;
        case 0x1854b0u: goto label_1854b0;
        case 0x1854b4u: goto label_1854b4;
        case 0x1854b8u: goto label_1854b8;
        case 0x1854bcu: goto label_1854bc;
        case 0x1854c0u: goto label_1854c0;
        case 0x1854c4u: goto label_1854c4;
        case 0x1854c8u: goto label_1854c8;
        case 0x1854ccu: goto label_1854cc;
        case 0x1854d0u: goto label_1854d0;
        case 0x1854d4u: goto label_1854d4;
        case 0x1854d8u: goto label_1854d8;
        case 0x1854dcu: goto label_1854dc;
        case 0x1854e0u: goto label_1854e0;
        case 0x1854e4u: goto label_1854e4;
        case 0x1854e8u: goto label_1854e8;
        case 0x1854ecu: goto label_1854ec;
        case 0x1854f0u: goto label_1854f0;
        case 0x1854f4u: goto label_1854f4;
        case 0x1854f8u: goto label_1854f8;
        case 0x1854fcu: goto label_1854fc;
        case 0x185500u: goto label_185500;
        case 0x185504u: goto label_185504;
        case 0x185508u: goto label_185508;
        case 0x18550cu: goto label_18550c;
        case 0x185510u: goto label_185510;
        case 0x185514u: goto label_185514;
        case 0x185518u: goto label_185518;
        case 0x18551cu: goto label_18551c;
        case 0x185520u: goto label_185520;
        case 0x185524u: goto label_185524;
        case 0x185528u: goto label_185528;
        case 0x18552cu: goto label_18552c;
        case 0x185530u: goto label_185530;
        case 0x185534u: goto label_185534;
        case 0x185538u: goto label_185538;
        case 0x18553cu: goto label_18553c;
        case 0x185540u: goto label_185540;
        case 0x185544u: goto label_185544;
        case 0x185548u: goto label_185548;
        case 0x18554cu: goto label_18554c;
        case 0x185550u: goto label_185550;
        case 0x185554u: goto label_185554;
        case 0x185558u: goto label_185558;
        case 0x18555cu: goto label_18555c;
        case 0x185560u: goto label_185560;
        case 0x185564u: goto label_185564;
        case 0x185568u: goto label_185568;
        case 0x18556cu: goto label_18556c;
        case 0x185570u: goto label_185570;
        case 0x185574u: goto label_185574;
        case 0x185578u: goto label_185578;
        case 0x18557cu: goto label_18557c;
        case 0x185580u: goto label_185580;
        case 0x185584u: goto label_185584;
        case 0x185588u: goto label_185588;
        case 0x18558cu: goto label_18558c;
        case 0x185590u: goto label_185590;
        case 0x185594u: goto label_185594;
        case 0x185598u: goto label_185598;
        case 0x18559cu: goto label_18559c;
        case 0x1855a0u: goto label_1855a0;
        case 0x1855a4u: goto label_1855a4;
        case 0x1855a8u: goto label_1855a8;
        case 0x1855acu: goto label_1855ac;
        case 0x1855b0u: goto label_1855b0;
        case 0x1855b4u: goto label_1855b4;
        case 0x1855b8u: goto label_1855b8;
        case 0x1855bcu: goto label_1855bc;
        case 0x1855c0u: goto label_1855c0;
        case 0x1855c4u: goto label_1855c4;
        case 0x1855c8u: goto label_1855c8;
        case 0x1855ccu: goto label_1855cc;
        case 0x1855d0u: goto label_1855d0;
        case 0x1855d4u: goto label_1855d4;
        case 0x1855d8u: goto label_1855d8;
        case 0x1855dcu: goto label_1855dc;
        case 0x1855e0u: goto label_1855e0;
        case 0x1855e4u: goto label_1855e4;
        case 0x1855e8u: goto label_1855e8;
        case 0x1855ecu: goto label_1855ec;
        case 0x1855f0u: goto label_1855f0;
        case 0x1855f4u: goto label_1855f4;
        case 0x1855f8u: goto label_1855f8;
        case 0x1855fcu: goto label_1855fc;
        case 0x185600u: goto label_185600;
        case 0x185604u: goto label_185604;
        case 0x185608u: goto label_185608;
        case 0x18560cu: goto label_18560c;
        case 0x185610u: goto label_185610;
        case 0x185614u: goto label_185614;
        case 0x185618u: goto label_185618;
        case 0x18561cu: goto label_18561c;
        case 0x185620u: goto label_185620;
        case 0x185624u: goto label_185624;
        case 0x185628u: goto label_185628;
        case 0x18562cu: goto label_18562c;
        case 0x185630u: goto label_185630;
        case 0x185634u: goto label_185634;
        case 0x185638u: goto label_185638;
        case 0x18563cu: goto label_18563c;
        case 0x185640u: goto label_185640;
        case 0x185644u: goto label_185644;
        case 0x185648u: goto label_185648;
        case 0x18564cu: goto label_18564c;
        case 0x185650u: goto label_185650;
        case 0x185654u: goto label_185654;
        case 0x185658u: goto label_185658;
        case 0x18565cu: goto label_18565c;
        case 0x185660u: goto label_185660;
        case 0x185664u: goto label_185664;
        case 0x185668u: goto label_185668;
        case 0x18566cu: goto label_18566c;
        case 0x185670u: goto label_185670;
        case 0x185674u: goto label_185674;
        case 0x185678u: goto label_185678;
        case 0x18567cu: goto label_18567c;
        case 0x185680u: goto label_185680;
        case 0x185684u: goto label_185684;
        case 0x185688u: goto label_185688;
        case 0x18568cu: goto label_18568c;
        case 0x185690u: goto label_185690;
        case 0x185694u: goto label_185694;
        case 0x185698u: goto label_185698;
        case 0x18569cu: goto label_18569c;
        default: return;
    }

label_184ed0:
    // 0x184ed0: 0x92440238  lbu         $a0, 0x238($s2)
    ctx->pc = 0x184ed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_184ed4:
    // 0x184ed4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x184ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_184ed8:
    // 0x184ed8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x184ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_184edc:
    // 0x184edc: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_184ee0:
    // 0x184ee0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x184ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_184ee4:
    // 0x184ee4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_184ee8:
    // 0x184ee8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x184ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_184eec:
    // 0x184eec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184ef0:
    // 0x184ef0: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_184ef4:
    // 0x184ef4: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x184ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_184ef8:
    // 0x184ef8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_184efc:
    if (ctx->pc == 0x184EFCu) {
        ctx->pc = 0x184F00u;
        goto label_184f00;
    }
    ctx->pc = 0x184EF8u;
    {
        const bool branch_taken_0x184ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ef8) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184F00u;
label_184f00:
    // 0x184f00: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x184f00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_184f04:
    // 0x184f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x184f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_184f08:
    // 0x184f08: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_184f0c:
    if (ctx->pc == 0x184F0Cu) {
        ctx->pc = 0x184F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F08u;
        // 0x184f0c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F10u;
        goto label_184f10;
    }
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x184F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F08u;
        // 0x184f0c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f08) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184F10u;
label_184f10:
    // 0x184f10: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_184f14:
    // 0x184f14: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x184f14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_184f18:
    // 0x184f18: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_184f1c:
    if (ctx->pc == 0x184F1Cu) {
        ctx->pc = 0x184F20u;
        goto label_184f20;
    }
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x184f18) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184F20u;
label_184f20:
    // 0x184f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184f24:
    // 0x184f24: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_184f28:
    if (ctx->pc == 0x184F28u) {
        ctx->pc = 0x184F2Cu;
        goto label_184f2c;
    }
    ctx->pc = 0x184F24u;
    {
        const bool branch_taken_0x184f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x184f24) {
            ctx->pc = 0x184F38u;
            goto label_184f38;
        }
    }
    ctx->pc = 0x184F2Cu;
label_184f2c:
    // 0x184f2c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_184f30:
    // 0x184f30: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x184f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_184f34:
    // 0x184f34: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x184f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_184f38:
    // 0x184f38: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x184f38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_184f3c:
    // 0x184f3c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x184f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_184f40:
    // 0x184f40: 0x100002cc  b           . + 4 + (0x2CC << 2)
label_184f44:
    if (ctx->pc == 0x184F44u) {
        ctx->pc = 0x184F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F40u;
        // 0x184f44: 0xa243023d  sb          $v1, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F48u;
        goto label_184f48;
    }
    ctx->pc = 0x184F40u;
    {
        const bool branch_taken_0x184f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F40u;
        // 0x184f44: 0xa243023d  sb          $v1, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f40) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x184F48u;
label_184f48:
    // 0x184f48: 0xc6410264  lwc1        $f1, 0x264($s2)
    ctx->pc = 0x184f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184f4c:
    // 0x184f4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x184f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_184f50:
    // 0x184f50: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x184f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184f54:
    // 0x184f54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184f58:
    // 0x184f58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_184f5c:
    // 0x184f5c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x184f5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_184f60:
    // 0x184f60: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x184f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184f64:
    // 0x184f64: 0x0  nop
    ctx->pc = 0x184f64u;
    // NOP
label_184f68:
    // 0x184f68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_184f6c:
    if (ctx->pc == 0x184F6Cu) {
        ctx->pc = 0x184F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F68u;
        // 0x184f6c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F70u;
        goto label_184f70;
    }
    ctx->pc = 0x184F68u;
    {
        const bool branch_taken_0x184f68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F68u;
        // 0x184f6c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f68) {
            ctx->pc = 0x184F84u;
            goto label_184f84;
        }
    }
    ctx->pc = 0x184F70u;
label_184f70:
    // 0x184f70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_184f74:
    // 0x184f74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184f78:
    // 0x184f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184f7c:
    // 0x184f7c: 0x1000000d  b           . + 4 + (0xD << 2)
label_184f80:
    if (ctx->pc == 0x184F80u) {
        ctx->pc = 0x184F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F7Cu;
        // 0x184f80: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F84u;
        goto label_184f84;
    }
    ctx->pc = 0x184F7Cu;
    {
        const bool branch_taken_0x184f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F7Cu;
        // 0x184f80: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f7c) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184F84u;
label_184f84:
    // 0x184f84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184f88:
    // 0x184f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184f8c:
    // 0x184f8c: 0x0  nop
    ctx->pc = 0x184f8cu;
    // NOP
label_184f90:
    // 0x184f90: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x184f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184f94:
    // 0x184f94: 0x0  nop
    ctx->pc = 0x184f94u;
    // NOP
label_184f98:
    // 0x184f98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_184f9c:
    if (ctx->pc == 0x184F9Cu) {
        ctx->pc = 0x184FA0u;
        goto label_184fa0;
    }
    ctx->pc = 0x184F98u;
    {
        const bool branch_taken_0x184f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184f98) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184FA0u;
label_184fa0:
    // 0x184fa0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_184fa4:
    // 0x184fa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184fa8:
    // 0x184fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184fac:
    // 0x184fac: 0x10000001  b           . + 4 + (0x1 << 2)
label_184fb0:
    if (ctx->pc == 0x184FB0u) {
        ctx->pc = 0x184FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FACu;
        // 0x184fb0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FB4u;
        goto label_184fb4;
    }
    ctx->pc = 0x184FACu;
    {
        const bool branch_taken_0x184fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FACu;
        // 0x184fb0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fac) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184FB4u;
label_184fb4:
    // 0x184fb4: 0xc06d448  jal         func_1B5120
label_184fb8:
    if (ctx->pc == 0x184FB8u) {
        ctx->pc = 0x184FBCu;
        goto label_184fbc;
    }
    ctx->pc = 0x184FB4u;
    SET_GPR_U32(ctx, 31, 0x184FBCu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x184FBCu;
label_184fbc:
    // 0x184fbc: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_184fc0:
    // 0x184fc0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x184fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_184fc4:
    // 0x184fc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_184fc8:
    // 0x184fc8: 0x0  nop
    ctx->pc = 0x184fc8u;
    // NOP
label_184fcc:
    // 0x184fcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x184fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184fd0:
    // 0x184fd0: 0x0  nop
    ctx->pc = 0x184fd0u;
    // NOP
label_184fd4:
    // 0x184fd4: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_184fd8:
    if (ctx->pc == 0x184FD8u) {
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FDCu;
        goto label_184fdc;
    }
    ctx->pc = 0x184FD4u;
    {
        const bool branch_taken_0x184fd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fd4) {
            ctx->pc = 0x1850F0u;
            goto label_1850f0;
        }
    }
    ctx->pc = 0x184FDCu;
label_184fdc:
    // 0x184fdc: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x184fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_184fe0:
    // 0x184fe0: 0xc0439e8  jal         func_10E7A0
label_184fe4:
    if (ctx->pc == 0x184FE4u) {
        ctx->pc = 0x184FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FE0u;
        // 0x184fe4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FE8u;
        goto label_184fe8;
    }
    ctx->pc = 0x184FE0u;
    SET_GPR_U32(ctx, 31, 0x184FE8u);
    ctx->pc = 0x184FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184FE0u;
    // 0x184fe4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x184FE0u, 0x184FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FE8u;
label_184fe8:
    // 0x184fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_184fec:
    if (ctx->pc == 0x184FECu) {
        ctx->pc = 0x184FF0u;
        goto label_184ff0;
    }
    ctx->pc = 0x184FE8u;
    {
        const bool branch_taken_0x184fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fe8) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184FF0u;
label_184ff0:
    // 0x184ff0: 0x10000020  b           . + 4 + (0x20 << 2)
label_184ff4:
    if (ctx->pc == 0x184FF4u) {
        ctx->pc = 0x184FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FF0u;
        // 0x184ff4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FF8u;
        goto label_184ff8;
    }
    ctx->pc = 0x184FF0u;
    {
        const bool branch_taken_0x184ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FF0u;
        // 0x184ff4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ff0) {
            ctx->pc = 0x185074u;
            goto label_185074;
        }
    }
    ctx->pc = 0x184FF8u;
label_184ff8:
    // 0x184ff8: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x184ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_184ffc:
    // 0x184ffc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185000:
    // 0x185000: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x185000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185004:
    // 0x185004: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185008:
    // 0x185008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18500c:
    // 0x18500c: 0x0  nop
    ctx->pc = 0x18500cu;
    // NOP
label_185010:
    // 0x185010: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185010u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_185014:
    // 0x185014: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185018:
    // 0x185018: 0x0  nop
    ctx->pc = 0x185018u;
    // NOP
label_18501c:
    // 0x18501c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185020:
    if (ctx->pc == 0x185020u) {
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0xe7ac0044  swc1        $f12, 0x44($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185024u;
        goto label_185024;
    }
    ctx->pc = 0x18501Cu;
    {
        const bool branch_taken_0x18501c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0xe7ac0044  swc1        $f12, 0x44($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18501c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x185024u;
label_185024:
    // 0x185024: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185028:
    // 0x185028: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18502c:
    // 0x18502c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18502cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185030:
    // 0x185030: 0x1000000d  b           . + 4 + (0xD << 2)
label_185034:
    if (ctx->pc == 0x185034u) {
        ctx->pc = 0x185034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185030u;
        // 0x185034: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185038u;
        goto label_185038;
    }
    ctx->pc = 0x185030u;
    {
        const bool branch_taken_0x185030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185030u;
        // 0x185034: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185030) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185038u;
label_185038:
    // 0x185038: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18503c:
    // 0x18503c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185040:
    // 0x185040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185044:
    // 0x185044: 0x0  nop
    ctx->pc = 0x185044u;
    // NOP
label_185048:
    // 0x185048: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18504c:
    // 0x18504c: 0x0  nop
    ctx->pc = 0x18504cu;
    // NOP
label_185050:
    // 0x185050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_185054:
    if (ctx->pc == 0x185054u) {
        ctx->pc = 0x185054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185050u;
        // 0x185054: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185058u;
        goto label_185058;
    }
    ctx->pc = 0x185050u;
    {
        const bool branch_taken_0x185050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185050u;
        // 0x185054: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185050) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185058u;
label_185058:
    // 0x185058: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18505c:
    // 0x18505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185060:
    // 0x185060: 0x10000001  b           . + 4 + (0x1 << 2)
label_185064:
    if (ctx->pc == 0x185064u) {
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185060u;
        // 0x185064: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185068u;
        goto label_185068;
    }
    ctx->pc = 0x185060u;
    {
        const bool branch_taken_0x185060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185060u;
        // 0x185064: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185060) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185068u;
label_185068:
    // 0x185068: 0xc06d448  jal         func_1B5120
label_18506c:
    if (ctx->pc == 0x18506Cu) {
        ctx->pc = 0x185070u;
        goto label_185070;
    }
    ctx->pc = 0x185068u;
    SET_GPR_U32(ctx, 31, 0x185070u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185070u;
label_185070:
    // 0x185070: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x185070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_185074:
    // 0x185074: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x185074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185078:
    // 0x185078: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x185078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_18507c:
    // 0x18507c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_185080:
    // 0x185080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185084:
    // 0x185084: 0x0  nop
    ctx->pc = 0x185084u;
    // NOP
label_185088:
    // 0x185088: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18508c:
    // 0x18508c: 0x0  nop
    ctx->pc = 0x18508cu;
    // NOP
label_185090:
    // 0x185090: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185094:
    if (ctx->pc == 0x185094u) {
        ctx->pc = 0x185098u;
        goto label_185098;
    }
    ctx->pc = 0x185090u;
    {
        const bool branch_taken_0x185090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185090) {
            ctx->pc = 0x1850ACu;
            goto label_1850ac;
        }
    }
    ctx->pc = 0x185098u;
label_185098:
    // 0x185098: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x185098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_18509c:
    // 0x18509c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1850a0:
    // 0x1850a0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1850a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1850a4:
    // 0x1850a4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1850a8:
    if (ctx->pc == 0x1850A8u) {
        ctx->pc = 0x1850ACu;
        goto label_1850ac;
    }
    ctx->pc = 0x1850A4u;
    {
        const bool branch_taken_0x1850a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1850a4) {
            ctx->pc = 0x1850E4u;
            goto label_1850e4;
        }
    }
    ctx->pc = 0x1850ACu;
label_1850ac:
    // 0x1850ac: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1850acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1850b0:
    // 0x1850b0: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x1850b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1850b4:
    // 0x1850b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1850b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1850b8:
    // 0x1850b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1850b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1850bc:
    // 0x1850bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1850bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1850c0:
    // 0x1850c0: 0x0  nop
    ctx->pc = 0x1850c0u;
    // NOP
label_1850c4:
    // 0x1850c4: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x1850c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_1850c8:
    // 0x1850c8: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1850c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1850cc:
    // 0x1850cc: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x1850ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1850d0:
    // 0x1850d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1850d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1850d4:
    // 0x1850d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1850d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1850d8:
    // 0x1850d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1850d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1850dc:
    // 0x1850dc: 0x10000265  b           . + 4 + (0x265 << 2)
label_1850e0:
    if (ctx->pc == 0x1850E0u) {
        ctx->pc = 0x1850E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850DCu;
        // 0x1850e0: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1850E4u;
        goto label_1850e4;
    }
    ctx->pc = 0x1850DCu;
    {
        const bool branch_taken_0x1850dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850DCu;
        // 0x1850e0: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850dc) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x1850E4u;
label_1850e4:
    // 0x1850e4: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x1850e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_1850e8:
    // 0x1850e8: 0x10000262  b           . + 4 + (0x262 << 2)
label_1850ec:
    if (ctx->pc == 0x1850ECu) {
        ctx->pc = 0x1850ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850E8u;
        // 0x1850ec: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1850F0u;
        goto label_1850f0;
    }
    ctx->pc = 0x1850E8u;
    {
        const bool branch_taken_0x1850e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850E8u;
        // 0x1850ec: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850e8) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x1850F0u;
label_1850f0:
    // 0x1850f0: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x1850f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_1850f4:
    // 0x1850f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1850f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1850f8:
    // 0x1850f8: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x1850f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_1850fc:
    // 0x1850fc: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x1850fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_185100:
    // 0x185100: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_185104:
    if (ctx->pc == 0x185104u) {
        ctx->pc = 0x185108u;
        goto label_185108;
    }
    ctx->pc = 0x185100u;
    {
        const bool branch_taken_0x185100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x185100) {
            ctx->pc = 0x18515Cu;
            goto label_18515c;
        }
    }
    ctx->pc = 0x185108u;
label_185108:
    // 0x185108: 0x92440238  lbu         $a0, 0x238($s2)
    ctx->pc = 0x185108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_18510c:
    // 0x18510c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_185110:
    // 0x185110: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x185110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_185114:
    // 0x185114: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x185114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_185118:
    // 0x185118: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x185118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18511c:
    // 0x18511c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_185120:
    // 0x185120: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x185120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_185124:
    // 0x185124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185128:
    // 0x185128: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_18512c:
    // 0x18512c: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x18512cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_185130:
    // 0x185130: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_185134:
    if (ctx->pc == 0x185134u) {
        ctx->pc = 0x185138u;
        goto label_185138;
    }
    ctx->pc = 0x185130u;
    {
        const bool branch_taken_0x185130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185130) {
            ctx->pc = 0x18515Cu;
            goto label_18515c;
        }
    }
    ctx->pc = 0x185138u;
label_185138:
    // 0x185138: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x185138u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_18513c:
    // 0x18513c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_185140:
    // 0x185140: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_185144:
    if (ctx->pc == 0x185144u) {
        ctx->pc = 0x185144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185140u;
        // 0x185144: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185148u;
        goto label_185148;
    }
    ctx->pc = 0x185140u;
    {
        const bool branch_taken_0x185140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185140u;
        // 0x185144: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185140) {
            ctx->pc = 0x18515Cu;
            goto label_18515c;
        }
    }
    ctx->pc = 0x185148u;
label_185148:
    // 0x185148: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x185148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_18514c:
    // 0x18514c: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x18514cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_185150:
    // 0x185150: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_185154:
    if (ctx->pc == 0x185154u) {
        ctx->pc = 0x185158u;
        goto label_185158;
    }
    ctx->pc = 0x185150u;
    {
        const bool branch_taken_0x185150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x185150) {
            ctx->pc = 0x18515Cu;
            goto label_18515c;
        }
    }
    ctx->pc = 0x185158u;
label_185158:
    // 0x185158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18515c:
    // 0x18515c: 0x10c00245  beqz        $a2, . + 4 + (0x245 << 2)
label_185160:
    if (ctx->pc == 0x185160u) {
        ctx->pc = 0x185164u;
        goto label_185164;
    }
    ctx->pc = 0x18515Cu;
    {
        const bool branch_taken_0x18515c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18515c) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185164u;
label_185164:
    // 0x185164: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x185164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_185168:
    // 0x185168: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x185168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_18516c:
    // 0x18516c: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x18516cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_185170:
    // 0x185170: 0xc6400268  lwc1        $f0, 0x268($s2)
    ctx->pc = 0x185170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185174:
    // 0x185174: 0xe64001d0  swc1        $f0, 0x1D0($s2)
    ctx->pc = 0x185174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 464), bits); }
label_185178:
    // 0x185178: 0xc6400264  lwc1        $f0, 0x264($s2)
    ctx->pc = 0x185178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18517c:
    // 0x18517c: 0x1000023d  b           . + 4 + (0x23D << 2)
label_185180:
    if (ctx->pc == 0x185180u) {
        ctx->pc = 0x185180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18517Cu;
        // 0x185180: 0xe64001d4  swc1        $f0, 0x1D4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185184u;
        goto label_185184;
    }
    ctx->pc = 0x18517Cu;
    {
        const bool branch_taken_0x18517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18517Cu;
        // 0x185180: 0xe64001d4  swc1        $f0, 0x1D4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18517c) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185184u;
label_185184:
    // 0x185184: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_185188:
    // 0x185188: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x185188u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_18518c:
    // 0x18518c: 0x14830105  bne         $a0, $v1, . + 4 + (0x105 << 2)
label_185190:
    if (ctx->pc == 0x185190u) {
        ctx->pc = 0x185190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18518Cu;
        // 0x185190: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185194u;
        goto label_185194;
    }
    ctx->pc = 0x18518Cu;
    {
        const bool branch_taken_0x18518c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18518Cu;
        // 0x185190: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18518c) {
            ctx->pc = 0x1855A4u;
            goto label_1855a4;
        }
    }
    ctx->pc = 0x185194u;
label_185194:
    // 0x185194: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x185194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185198:
    // 0x185198: 0x3c024749  lui         $v0, 0x4749
    ctx->pc = 0x185198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18249 << 16));
label_18519c:
    // 0x18519c: 0x34425e00  ori         $v0, $v0, 0x5E00
    ctx->pc = 0x18519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24064);
label_1851a0:
    // 0x1851a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1851a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1851a4:
    // 0x1851a4: 0x0  nop
    ctx->pc = 0x1851a4u;
    // NOP
label_1851a8:
    // 0x1851a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1851a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1851ac:
    // 0x1851ac: 0x0  nop
    ctx->pc = 0x1851acu;
    // NOP
label_1851b0:
    // 0x1851b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1851b4:
    if (ctx->pc == 0x1851B4u) {
        ctx->pc = 0x1851B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851B0u;
        // 0x1851b4: 0x3c024750  lui         $v0, 0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1851B8u;
        goto label_1851b8;
    }
    ctx->pc = 0x1851B0u;
    {
        const bool branch_taken_0x1851b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1851B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851B0u;
        // 0x1851b4: 0x3c024750  lui         $v0, 0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851b0) {
            ctx->pc = 0x1851D4u;
            goto label_1851d4;
        }
    }
    ctx->pc = 0x1851B8u;
label_1851b8:
    // 0x1851b8: 0x3442ca00  ori         $v0, $v0, 0xCA00
    ctx->pc = 0x1851b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51712);
label_1851bc:
    // 0x1851bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1851bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1851c0:
    // 0x1851c0: 0x0  nop
    ctx->pc = 0x1851c0u;
    // NOP
label_1851c4:
    // 0x1851c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1851c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1851c8:
    // 0x1851c8: 0x0  nop
    ctx->pc = 0x1851c8u;
    // NOP
label_1851cc:
    // 0x1851cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1851d0:
    if (ctx->pc == 0x1851D0u) {
        ctx->pc = 0x1851D4u;
        goto label_1851d4;
    }
    ctx->pc = 0x1851CCu;
    {
        const bool branch_taken_0x1851cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1851cc) {
            ctx->pc = 0x1851ECu;
            goto label_1851ec;
        }
    }
    ctx->pc = 0x1851D4u;
label_1851d4:
    // 0x1851d4: 0x9206023f  lbu         $a2, 0x23F($s0)
    ctx->pc = 0x1851d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_1851d8:
    // 0x1851d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1851d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1851dc:
    // 0x1851dc: 0xc06261c  jal         func_189870
label_1851e0:
    if (ctx->pc == 0x1851E0u) {
        ctx->pc = 0x1851E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851DCu;
        // 0x1851e0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1851E4u;
        goto label_1851e4;
    }
    ctx->pc = 0x1851DCu;
    SET_GPR_U32(ctx, 31, 0x1851E4u);
    ctx->pc = 0x1851E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1851DCu;
    // 0x1851e0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x1851E4u;
label_1851e4:
    // 0x1851e4: 0x10000224  b           . + 4 + (0x224 << 2)
label_1851e8:
    if (ctx->pc == 0x1851E8u) {
        ctx->pc = 0x1851E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851E4u;
        // 0x1851e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1851ECu;
        goto label_1851ec;
    }
    ctx->pc = 0x1851E4u;
    {
        const bool branch_taken_0x1851e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1851E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851E4u;
        // 0x1851e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851e4) {
            ctx->pc = 0x185A78u;
            { ctx->pc = 0x185a78; return; }
        }
    }
    ctx->pc = 0x1851ECu;
label_1851ec:
    // 0x1851ec: 0xc6410264  lwc1        $f1, 0x264($s2)
    ctx->pc = 0x1851ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1851f0:
    // 0x1851f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1851f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1851f4:
    // 0x1851f4: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x1851f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1851f8:
    // 0x1851f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1851f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1851fc:
    // 0x1851fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1851fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_185200:
    // 0x185200: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x185200u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_185204:
    // 0x185204: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x185204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185208:
    // 0x185208: 0x0  nop
    ctx->pc = 0x185208u;
    // NOP
label_18520c:
    // 0x18520c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185210:
    if (ctx->pc == 0x185210u) {
        ctx->pc = 0x185210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18520Cu;
        // 0x185210: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185214u;
        goto label_185214;
    }
    ctx->pc = 0x18520Cu;
    {
        const bool branch_taken_0x18520c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18520Cu;
        // 0x185210: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18520c) {
            ctx->pc = 0x185228u;
            goto label_185228;
        }
    }
    ctx->pc = 0x185214u;
label_185214:
    // 0x185214: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185218:
    // 0x185218: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18521c:
    // 0x18521c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18521cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185220:
    // 0x185220: 0x1000000d  b           . + 4 + (0xD << 2)
label_185224:
    if (ctx->pc == 0x185224u) {
        ctx->pc = 0x185224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185220u;
        // 0x185224: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185228u;
        goto label_185228;
    }
    ctx->pc = 0x185220u;
    {
        const bool branch_taken_0x185220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185220u;
        // 0x185224: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185220) {
            ctx->pc = 0x185258u;
            goto label_185258;
        }
    }
    ctx->pc = 0x185228u;
label_185228:
    // 0x185228: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18522c:
    // 0x18522c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18522cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185230:
    // 0x185230: 0x0  nop
    ctx->pc = 0x185230u;
    // NOP
label_185234:
    // 0x185234: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185238:
    // 0x185238: 0x0  nop
    ctx->pc = 0x185238u;
    // NOP
label_18523c:
    // 0x18523c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_185240:
    if (ctx->pc == 0x185240u) {
        ctx->pc = 0x185244u;
        goto label_185244;
    }
    ctx->pc = 0x18523Cu;
    {
        const bool branch_taken_0x18523c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18523c) {
            ctx->pc = 0x185258u;
            goto label_185258;
        }
    }
    ctx->pc = 0x185244u;
label_185244:
    // 0x185244: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185248:
    // 0x185248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18524c:
    // 0x18524c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18524cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185250:
    // 0x185250: 0x10000001  b           . + 4 + (0x1 << 2)
label_185254:
    if (ctx->pc == 0x185254u) {
        ctx->pc = 0x185254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185250u;
        // 0x185254: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185258u;
        goto label_185258;
    }
    ctx->pc = 0x185250u;
    {
        const bool branch_taken_0x185250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185250u;
        // 0x185254: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185250) {
            ctx->pc = 0x185258u;
            goto label_185258;
        }
    }
    ctx->pc = 0x185258u;
label_185258:
    // 0x185258: 0xc06d448  jal         func_1B5120
label_18525c:
    if (ctx->pc == 0x18525Cu) {
        ctx->pc = 0x185260u;
        goto label_185260;
    }
    ctx->pc = 0x185258u;
    SET_GPR_U32(ctx, 31, 0x185260u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185260u;
label_185260:
    // 0x185260: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_185264:
    // 0x185264: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185268:
    // 0x185268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18526c:
    // 0x18526c: 0x0  nop
    ctx->pc = 0x18526cu;
    // NOP
label_185270:
    // 0x185270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x185270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185274:
    // 0x185274: 0x0  nop
    ctx->pc = 0x185274u;
    // NOP
label_185278:
    // 0x185278: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_18527c:
    if (ctx->pc == 0x18527Cu) {
        ctx->pc = 0x18527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185278u;
        // 0x18527c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185280u;
        goto label_185280;
    }
    ctx->pc = 0x185278u;
    {
        const bool branch_taken_0x185278 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185278u;
        // 0x18527c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185278) {
            ctx->pc = 0x185394u;
            goto label_185394;
        }
    }
    ctx->pc = 0x185280u;
label_185280:
    // 0x185280: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x185280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_185284:
    // 0x185284: 0xc0439e8  jal         func_10E7A0
label_185288:
    if (ctx->pc == 0x185288u) {
        ctx->pc = 0x185288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185284u;
        // 0x185288: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18528Cu;
        goto label_18528c;
    }
    ctx->pc = 0x185284u;
    SET_GPR_U32(ctx, 31, 0x18528Cu);
    ctx->pc = 0x185288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185284u;
    // 0x185288: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185284u, 0x18528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18528Cu;
label_18528c:
    // 0x18528c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185290:
    if (ctx->pc == 0x185290u) {
        ctx->pc = 0x185294u;
        goto label_185294;
    }
    ctx->pc = 0x18528Cu;
    {
        const bool branch_taken_0x18528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18528c) {
            ctx->pc = 0x18529Cu;
            goto label_18529c;
        }
    }
    ctx->pc = 0x185294u;
label_185294:
    // 0x185294: 0x10000020  b           . + 4 + (0x20 << 2)
label_185298:
    if (ctx->pc == 0x185298u) {
        ctx->pc = 0x185298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185294u;
        // 0x185298: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18529Cu;
        goto label_18529c;
    }
    ctx->pc = 0x185294u;
    {
        const bool branch_taken_0x185294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185294u;
        // 0x185298: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185294) {
            ctx->pc = 0x185318u;
            goto label_185318;
        }
    }
    ctx->pc = 0x18529Cu;
label_18529c:
    // 0x18529c: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x18529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1852a0:
    // 0x1852a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1852a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1852a4:
    // 0x1852a4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1852a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1852a8:
    // 0x1852a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1852a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1852ac:
    // 0x1852ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1852acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1852b0:
    // 0x1852b0: 0x0  nop
    ctx->pc = 0x1852b0u;
    // NOP
label_1852b4:
    // 0x1852b4: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1852b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1852b8:
    // 0x1852b8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1852b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1852bc:
    // 0x1852bc: 0x0  nop
    ctx->pc = 0x1852bcu;
    // NOP
label_1852c0:
    // 0x1852c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1852c4:
    if (ctx->pc == 0x1852C4u) {
        ctx->pc = 0x1852C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852C0u;
        // 0x1852c4: 0xe7ac0048  swc1        $f12, 0x48($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1852C8u;
        goto label_1852c8;
    }
    ctx->pc = 0x1852C0u;
    {
        const bool branch_taken_0x1852c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1852C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852C0u;
        // 0x1852c4: 0xe7ac0048  swc1        $f12, 0x48($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852c0) {
            ctx->pc = 0x1852DCu;
            goto label_1852dc;
        }
    }
    ctx->pc = 0x1852C8u;
label_1852c8:
    // 0x1852c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1852c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1852cc:
    // 0x1852cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1852ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1852d0:
    // 0x1852d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1852d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1852d4:
    // 0x1852d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1852d8:
    if (ctx->pc == 0x1852D8u) {
        ctx->pc = 0x1852D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852D4u;
        // 0x1852d8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1852DCu;
        goto label_1852dc;
    }
    ctx->pc = 0x1852D4u;
    {
        const bool branch_taken_0x1852d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852D4u;
        // 0x1852d8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852d4) {
            ctx->pc = 0x18530Cu;
            goto label_18530c;
        }
    }
    ctx->pc = 0x1852DCu;
label_1852dc:
    // 0x1852dc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1852e0:
    // 0x1852e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1852e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1852e4:
    // 0x1852e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1852e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1852e8:
    // 0x1852e8: 0x0  nop
    ctx->pc = 0x1852e8u;
    // NOP
label_1852ec:
    // 0x1852ec: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1852ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1852f0:
    // 0x1852f0: 0x0  nop
    ctx->pc = 0x1852f0u;
    // NOP
label_1852f4:
    // 0x1852f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1852f8:
    if (ctx->pc == 0x1852F8u) {
        ctx->pc = 0x1852F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852F4u;
        // 0x1852f8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1852FCu;
        goto label_1852fc;
    }
    ctx->pc = 0x1852F4u;
    {
        const bool branch_taken_0x1852f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1852F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852F4u;
        // 0x1852f8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852f4) {
            ctx->pc = 0x18530Cu;
            goto label_18530c;
        }
    }
    ctx->pc = 0x1852FCu;
label_1852fc:
    // 0x1852fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1852fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185300:
    // 0x185300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185304:
    // 0x185304: 0x10000001  b           . + 4 + (0x1 << 2)
label_185308:
    if (ctx->pc == 0x185308u) {
        ctx->pc = 0x185308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185304u;
        // 0x185308: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18530Cu;
        goto label_18530c;
    }
    ctx->pc = 0x185304u;
    {
        const bool branch_taken_0x185304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185304u;
        // 0x185308: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185304) {
            ctx->pc = 0x18530Cu;
            goto label_18530c;
        }
    }
    ctx->pc = 0x18530Cu;
label_18530c:
    // 0x18530c: 0xc06d448  jal         func_1B5120
label_185310:
    if (ctx->pc == 0x185310u) {
        ctx->pc = 0x185314u;
        goto label_185314;
    }
    ctx->pc = 0x18530Cu;
    SET_GPR_U32(ctx, 31, 0x185314u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185314u;
label_185314:
    // 0x185314: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x185314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_185318:
    // 0x185318: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x185318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18531c:
    // 0x18531c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18531cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_185320:
    // 0x185320: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_185324:
    // 0x185324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185328:
    // 0x185328: 0x0  nop
    ctx->pc = 0x185328u;
    // NOP
label_18532c:
    // 0x18532c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18532cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185330:
    // 0x185330: 0x0  nop
    ctx->pc = 0x185330u;
    // NOP
label_185334:
    // 0x185334: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185338:
    if (ctx->pc == 0x185338u) {
        ctx->pc = 0x18533Cu;
        goto label_18533c;
    }
    ctx->pc = 0x185334u;
    {
        const bool branch_taken_0x185334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185334) {
            ctx->pc = 0x185350u;
            goto label_185350;
        }
    }
    ctx->pc = 0x18533Cu;
label_18533c:
    // 0x18533c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x18533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_185340:
    // 0x185340: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x185340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_185344:
    // 0x185344: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x185344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_185348:
    // 0x185348: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_18534c:
    if (ctx->pc == 0x18534Cu) {
        ctx->pc = 0x185350u;
        goto label_185350;
    }
    ctx->pc = 0x185348u;
    {
        const bool branch_taken_0x185348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185348) {
            ctx->pc = 0x185388u;
            goto label_185388;
        }
    }
    ctx->pc = 0x185350u;
label_185350:
    // 0x185350: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x185350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185354:
    // 0x185354: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x185354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185358:
    // 0x185358: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18535c:
    // 0x18535c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18535cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_185360:
    // 0x185360: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185364:
    // 0x185364: 0x0  nop
    ctx->pc = 0x185364u;
    // NOP
label_185368:
    // 0x185368: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x185368u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_18536c:
    // 0x18536c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x18536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185370:
    // 0x185370: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x185370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185374:
    // 0x185374: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_185378:
    // 0x185378: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18537c:
    // 0x18537c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18537cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185380:
    // 0x185380: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_185384:
    if (ctx->pc == 0x185384u) {
        ctx->pc = 0x185384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185380u;
        // 0x185384: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185388u;
        goto label_185388;
    }
    ctx->pc = 0x185380u;
    {
        const bool branch_taken_0x185380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185380u;
        // 0x185384: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185380) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185388u;
label_185388:
    // 0x185388: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x185388u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_18538c:
    // 0x18538c: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_185390:
    if (ctx->pc == 0x185390u) {
        ctx->pc = 0x185390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18538Cu;
        // 0x185390: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185394u;
        goto label_185394;
    }
    ctx->pc = 0x18538Cu;
    {
        const bool branch_taken_0x18538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18538Cu;
        // 0x185390: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18538c) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185394u;
label_185394:
    // 0x185394: 0x9243023c  lbu         $v1, 0x23C($s2)
    ctx->pc = 0x185394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_185398:
    // 0x185398: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18539c:
    // 0x18539c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1853a0:
    if (ctx->pc == 0x1853A0u) {
        ctx->pc = 0x1853A4u;
        goto label_1853a4;
    }
    ctx->pc = 0x18539Cu;
    {
        const bool branch_taken_0x18539c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18539c) {
            ctx->pc = 0x1853BCu;
            goto label_1853bc;
        }
    }
    ctx->pc = 0x1853A4u;
label_1853a4:
    // 0x1853a4: 0x9206023f  lbu         $a2, 0x23F($s0)
    ctx->pc = 0x1853a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_1853a8:
    // 0x1853a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1853a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1853ac:
    // 0x1853ac: 0xc06261c  jal         func_189870
label_1853b0:
    if (ctx->pc == 0x1853B0u) {
        ctx->pc = 0x1853B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853ACu;
        // 0x1853b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1853B4u;
        goto label_1853b4;
    }
    ctx->pc = 0x1853ACu;
    SET_GPR_U32(ctx, 31, 0x1853B4u);
    ctx->pc = 0x1853B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853ACu;
    // 0x1853b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x1853B4u;
label_1853b4:
    // 0x1853b4: 0x100001af  b           . + 4 + (0x1AF << 2)
label_1853b8:
    if (ctx->pc == 0x1853B8u) {
        ctx->pc = 0x1853BCu;
        goto label_1853bc;
    }
    ctx->pc = 0x1853B4u;
    {
        const bool branch_taken_0x1853b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853b4) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x1853BCu;
label_1853bc:
    // 0x1853bc: 0xc64c0260  lwc1        $f12, 0x260($s2)
    ctx->pc = 0x1853bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1853c0:
    // 0x1853c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1853c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1853c4:
    // 0x1853c4: 0xc062850  jal         func_18A140
label_1853c8:
    if (ctx->pc == 0x1853C8u) {
        ctx->pc = 0x1853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853C4u;
        // 0x1853c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1853CCu;
        goto label_1853cc;
    }
    ctx->pc = 0x1853C4u;
    SET_GPR_U32(ctx, 31, 0x1853CCu);
    ctx->pc = 0x1853C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853C4u;
    // 0x1853c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A140u;
    { ctx->pc = 0x18a140; return; }
    ctx->pc = 0x1853CCu;
label_1853cc:
    // 0x1853cc: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1853d0:
    if (ctx->pc == 0x1853D0u) {
        ctx->pc = 0x1853D4u;
        goto label_1853d4;
    }
    ctx->pc = 0x1853CCu;
    {
        const bool branch_taken_0x1853cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853cc) {
            ctx->pc = 0x185500u;
            goto label_185500;
        }
    }
    ctx->pc = 0x1853D4u;
label_1853d4:
    // 0x1853d4: 0x92420232  lbu         $v0, 0x232($s2)
    ctx->pc = 0x1853d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_1853d8:
    // 0x1853d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1853dc:
    // 0x1853dc: 0x14450016  bne         $v0, $a1, . + 4 + (0x16 << 2)
label_1853e0:
    if (ctx->pc == 0x1853E0u) {
        ctx->pc = 0x1853E4u;
        goto label_1853e4;
    }
    ctx->pc = 0x1853DCu;
    {
        const bool branch_taken_0x1853dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1853dc) {
            ctx->pc = 0x185438u;
            goto label_185438;
        }
    }
    ctx->pc = 0x1853E4u;
label_1853e4:
    // 0x1853e4: 0x92430238  lbu         $v1, 0x238($s2)
    ctx->pc = 0x1853e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_1853e8:
    // 0x1853e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1853e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1853ec:
    // 0x1853ec: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1853ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1853f0:
    // 0x1853f0: 0x2464ffb8  addiu       $a0, $v1, -0x48
    ctx->pc = 0x1853f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
label_1853f4:
    // 0x1853f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1853f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1853f8:
    // 0x1853f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1853fc:
    // 0x1853fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1853fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_185400:
    // 0x185400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185404:
    // 0x185404: 0x24433620  addiu       $v1, $v0, 0x3620
    ctx->pc = 0x185404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_185408:
    // 0x185408: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x185408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_18540c:
    // 0x18540c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_185410:
    if (ctx->pc == 0x185410u) {
        ctx->pc = 0x185414u;
        goto label_185414;
    }
    ctx->pc = 0x18540Cu;
    {
        const bool branch_taken_0x18540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18540c) {
            ctx->pc = 0x185438u;
            goto label_185438;
        }
    }
    ctx->pc = 0x185414u;
label_185414:
    // 0x185414: 0x9063006b  lbu         $v1, 0x6B($v1)
    ctx->pc = 0x185414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 107)));
label_185418:
    // 0x185418: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x185418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18541c:
    // 0x18541c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_185420:
    if (ctx->pc == 0x185420u) {
        ctx->pc = 0x185420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18541Cu;
        // 0x185420: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185424u;
        goto label_185424;
    }
    ctx->pc = 0x18541Cu;
    {
        const bool branch_taken_0x18541c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x185420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18541Cu;
        // 0x185420: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18541c) {
            ctx->pc = 0x185438u;
            goto label_185438;
        }
    }
    ctx->pc = 0x185424u;
label_185424:
    // 0x185424: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x185424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_185428:
    // 0x185428: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x185428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_18542c:
    // 0x18542c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_185430:
    if (ctx->pc == 0x185430u) {
        ctx->pc = 0x185434u;
        goto label_185434;
    }
    ctx->pc = 0x18542Cu;
    {
        const bool branch_taken_0x18542c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18542c) {
            ctx->pc = 0x185438u;
            goto label_185438;
        }
    }
    ctx->pc = 0x185434u;
label_185434:
    // 0x185434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185438:
    // 0x185438: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_18543c:
    if (ctx->pc == 0x18543Cu) {
        ctx->pc = 0x185440u;
        goto label_185440;
    }
    ctx->pc = 0x185438u;
    {
        const bool branch_taken_0x185438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x185438) {
            ctx->pc = 0x185454u;
            goto label_185454;
        }
    }
    ctx->pc = 0x185440u;
label_185440:
    // 0x185440: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x185440u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_185444:
    // 0x185444: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x185444u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_185448:
    // 0x185448: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x185448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18544c:
    // 0x18544c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_185450:
    // 0x185450: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x185450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_185454:
    // 0x185454: 0x92430231  lbu         $v1, 0x231($s2)
    ctx->pc = 0x185454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_185458:
    // 0x185458: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18545c:
    // 0x18545c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_185460:
    if (ctx->pc == 0x185460u) {
        ctx->pc = 0x185460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18545Cu;
        // 0x185460: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185464u;
        goto label_185464;
    }
    ctx->pc = 0x18545Cu;
    {
        const bool branch_taken_0x18545c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18545Cu;
        // 0x185460: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18545c) {
            ctx->pc = 0x1854C0u;
            goto label_1854c0;
        }
    }
    ctx->pc = 0x185464u;
label_185464:
    // 0x185464: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_185468:
    if (ctx->pc == 0x185468u) {
        ctx->pc = 0x18546Cu;
        goto label_18546c;
    }
    ctx->pc = 0x185464u;
    {
        const bool branch_taken_0x185464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x185464) {
            ctx->pc = 0x1854C0u;
            goto label_1854c0;
        }
    }
    ctx->pc = 0x18546Cu;
label_18546c:
    // 0x18546c: 0x9242023c  lbu         $v0, 0x23C($s2)
    ctx->pc = 0x18546cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_185470:
    // 0x185470: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x185470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_185474:
    // 0x185474: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_185478:
    if (ctx->pc == 0x185478u) {
        ctx->pc = 0x18547Cu;
        goto label_18547c;
    }
    ctx->pc = 0x185474u;
    {
        const bool branch_taken_0x185474 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x185474) {
            ctx->pc = 0x185498u;
            goto label_185498;
        }
    }
    ctx->pc = 0x18547Cu;
label_18547c:
    // 0x18547c: 0x92420233  lbu         $v0, 0x233($s2)
    ctx->pc = 0x18547cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_185480:
    // 0x185480: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_185484:
    if (ctx->pc == 0x185484u) {
        ctx->pc = 0x185488u;
        goto label_185488;
    }
    ctx->pc = 0x185480u;
    {
        const bool branch_taken_0x185480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185480) {
            ctx->pc = 0x1854B0u;
            goto label_1854b0;
        }
    }
    ctx->pc = 0x185488u;
label_185488:
    // 0x185488: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x185488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18548c:
    // 0x18548c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_185490:
    // 0x185490: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_185494:
    if (ctx->pc == 0x185494u) {
        ctx->pc = 0x185498u;
        goto label_185498;
    }
    ctx->pc = 0x185490u;
    {
        const bool branch_taken_0x185490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185490) {
            ctx->pc = 0x1854B0u;
            goto label_1854b0;
        }
    }
    ctx->pc = 0x185498u;
label_185498:
    // 0x185498: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x185498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18549c:
    // 0x18549c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1854a0:
    // 0x1854a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1854a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1854a4:
    // 0x1854a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1854a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1854a8:
    // 0x1854a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1854ac:
    if (ctx->pc == 0x1854ACu) {
        ctx->pc = 0x1854ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854A8u;
        // 0x1854ac: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1854B0u;
        goto label_1854b0;
    }
    ctx->pc = 0x1854A8u;
    {
        const bool branch_taken_0x1854a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1854ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854A8u;
        // 0x1854ac: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854a8) {
            ctx->pc = 0x1854CCu;
            goto label_1854cc;
        }
    }
    ctx->pc = 0x1854B0u;
label_1854b0:
    // 0x1854b0: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1854b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1854b4:
    // 0x1854b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1854b8:
    // 0x1854b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1854bc:
    if (ctx->pc == 0x1854BCu) {
        ctx->pc = 0x1854BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854B8u;
        // 0x1854bc: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1854C0u;
        goto label_1854c0;
    }
    ctx->pc = 0x1854B8u;
    {
        const bool branch_taken_0x1854b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1854BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854B8u;
        // 0x1854bc: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854b8) {
            ctx->pc = 0x1854CCu;
            goto label_1854cc;
        }
    }
    ctx->pc = 0x1854C0u;
label_1854c0:
    // 0x1854c0: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1854c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1854c4:
    // 0x1854c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1854c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1854c8:
    // 0x1854c8: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x1854c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_1854cc:
    // 0x1854cc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x1854ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1854d0:
    // 0x1854d0: 0x26440264  addiu       $a0, $s2, 0x264
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_1854d4:
    // 0x1854d4: 0xc0439e8  jal         func_10E7A0
label_1854d8:
    if (ctx->pc == 0x1854D8u) {
        ctx->pc = 0x1854D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854D4u;
        // 0x1854d8: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1854DCu;
        goto label_1854dc;
    }
    ctx->pc = 0x1854D4u;
    SET_GPR_U32(ctx, 31, 0x1854DCu);
    ctx->pc = 0x1854D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854D4u;
    // 0x1854d8: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1854D4u, 0x1854DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854DCu;
label_1854dc:
    // 0x1854dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1854e0:
    if (ctx->pc == 0x1854E0u) {
        ctx->pc = 0x1854E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854DCu;
        // 0x1854e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1854E4u;
        goto label_1854e4;
    }
    ctx->pc = 0x1854DCu;
    {
        const bool branch_taken_0x1854dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1854E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854DCu;
        // 0x1854e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854dc) {
            ctx->pc = 0x1854F0u;
            goto label_1854f0;
        }
    }
    ctx->pc = 0x1854E4u;
label_1854e4:
    // 0x1854e4: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x1854e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1854e8:
    // 0x1854e8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1854e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1854ec:
    // 0x1854ec: 0xa242023d  sb          $v0, 0x23D($s2)
    ctx->pc = 0x1854ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
label_1854f0:
    // 0x1854f0: 0xc062948  jal         func_18A520
label_1854f4:
    if (ctx->pc == 0x1854F4u) {
        ctx->pc = 0x1854F8u;
        goto label_1854f8;
    }
    ctx->pc = 0x1854F0u;
    SET_GPR_U32(ctx, 31, 0x1854F8u);
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x1854F8u;
label_1854f8:
    // 0x1854f8: 0x1000015e  b           . + 4 + (0x15E << 2)
label_1854fc:
    if (ctx->pc == 0x1854FCu) {
        ctx->pc = 0x185500u;
        goto label_185500;
    }
    ctx->pc = 0x1854F8u;
    {
        const bool branch_taken_0x1854f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854f8) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185500u;
label_185500:
    // 0x185500: 0x9243023c  lbu         $v1, 0x23C($s2)
    ctx->pc = 0x185500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_185504:
    // 0x185504: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x185504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_185508:
    // 0x185508: 0x1020015a  beqz        $at, . + 4 + (0x15A << 2)
label_18550c:
    if (ctx->pc == 0x18550Cu) {
        ctx->pc = 0x185510u;
        goto label_185510;
    }
    ctx->pc = 0x185508u;
    {
        const bool branch_taken_0x185508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185508) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185510u;
label_185510:
    // 0x185510: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x185510u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_185514:
    // 0x185514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x185514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185518:
    // 0x185518: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x185518u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_18551c:
    // 0x18551c: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x18551cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_185520:
    // 0x185520: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_185524:
    if (ctx->pc == 0x185524u) {
        ctx->pc = 0x185528u;
        goto label_185528;
    }
    ctx->pc = 0x185520u;
    {
        const bool branch_taken_0x185520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x185520) {
            ctx->pc = 0x18557Cu;
            goto label_18557c;
        }
    }
    ctx->pc = 0x185528u;
label_185528:
    // 0x185528: 0x92440238  lbu         $a0, 0x238($s2)
    ctx->pc = 0x185528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_18552c:
    // 0x18552c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18552cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_185530:
    // 0x185530: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x185530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_185534:
    // 0x185534: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_185538:
    // 0x185538: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18553c:
    // 0x18553c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_185540:
    // 0x185540: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x185540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_185544:
    // 0x185544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185548:
    // 0x185548: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x185548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_18554c:
    // 0x18554c: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x18554cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_185550:
    // 0x185550: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_185554:
    if (ctx->pc == 0x185554u) {
        ctx->pc = 0x185558u;
        goto label_185558;
    }
    ctx->pc = 0x185550u;
    {
        const bool branch_taken_0x185550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185550) {
            ctx->pc = 0x18557Cu;
            goto label_18557c;
        }
    }
    ctx->pc = 0x185558u;
label_185558:
    // 0x185558: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x185558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_18555c:
    // 0x18555c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_185560:
    // 0x185560: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_185564:
    if (ctx->pc == 0x185564u) {
        ctx->pc = 0x185564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185560u;
        // 0x185564: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185568u;
        goto label_185568;
    }
    ctx->pc = 0x185560u;
    {
        const bool branch_taken_0x185560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185560u;
        // 0x185564: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185560) {
            ctx->pc = 0x18557Cu;
            goto label_18557c;
        }
    }
    ctx->pc = 0x185568u;
label_185568:
    // 0x185568: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_18556c:
    // 0x18556c: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x18556cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_185570:
    // 0x185570: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_185574:
    if (ctx->pc == 0x185574u) {
        ctx->pc = 0x185578u;
        goto label_185578;
    }
    ctx->pc = 0x185570u;
    {
        const bool branch_taken_0x185570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x185570) {
            ctx->pc = 0x18557Cu;
            goto label_18557c;
        }
    }
    ctx->pc = 0x185578u;
label_185578:
    // 0x185578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18557c:
    // 0x18557c: 0x10c0013d  beqz        $a2, . + 4 + (0x13D << 2)
label_185580:
    if (ctx->pc == 0x185580u) {
        ctx->pc = 0x185584u;
        goto label_185584;
    }
    ctx->pc = 0x18557Cu;
    {
        const bool branch_taken_0x18557c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18557c) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185584u;
label_185584:
    // 0x185584: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x185584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_185588:
    // 0x185588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18558c:
    // 0x18558c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185590:
    // 0x185590: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x185590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_185594:
    // 0x185594: 0xc061d44  jal         func_187510
label_185598:
    if (ctx->pc == 0x185598u) {
        ctx->pc = 0x185598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185594u;
        // 0x185598: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18559Cu;
        goto label_18559c;
    }
    ctx->pc = 0x185594u;
    SET_GPR_U32(ctx, 31, 0x18559Cu);
    ctx->pc = 0x185598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185594u;
    // 0x185598: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187510u;
    { ctx->pc = 0x187510; return; }
    ctx->pc = 0x18559Cu;
label_18559c:
    // 0x18559c: 0x10000135  b           . + 4 + (0x135 << 2)
label_1855a0:
    if (ctx->pc == 0x1855A0u) {
        ctx->pc = 0x1855A4u;
        goto label_1855a4;
    }
    ctx->pc = 0x18559Cu;
    {
        const bool branch_taken_0x18559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18559c) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x1855A4u;
label_1855a4:
    // 0x1855a4: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_1855a8:
    if (ctx->pc == 0x1855A8u) {
        ctx->pc = 0x1855ACu;
        goto label_1855ac;
    }
    ctx->pc = 0x1855A4u;
    {
        const bool branch_taken_0x1855a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1855a4) {
            ctx->pc = 0x1856A4u;
            { ctx->pc = 0x1856a4; return; }
        }
    }
    ctx->pc = 0x1855ACu;
label_1855ac:
    // 0x1855ac: 0x86430224  lh          $v1, 0x224($s2)
    ctx->pc = 0x1855acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_1855b0:
    // 0x1855b0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1855b4:
    // 0x1855b4: 0xa6430224  sh          $v1, 0x224($s2)
    ctx->pc = 0x1855b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
label_1855b8:
    // 0x1855b8: 0x86430224  lh          $v1, 0x224($s2)
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_1855bc:
    // 0x1855bc: 0x1c600024  bgtz        $v1, . + 4 + (0x24 << 2)
label_1855c0:
    if (ctx->pc == 0x1855C0u) {
        ctx->pc = 0x1855C4u;
        goto label_1855c4;
    }
    ctx->pc = 0x1855BCu;
    {
        const bool branch_taken_0x1855bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1855bc) {
            ctx->pc = 0x185650u;
            goto label_185650;
        }
    }
    ctx->pc = 0x1855C4u;
label_1855c4:
    // 0x1855c4: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x1855c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1855c8:
    // 0x1855c8: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
label_1855cc:
    // 0x1855cc: 0xa242023d  sb          $v0, 0x23D($s2)
    ctx->pc = 0x1855ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
label_1855d0:
    // 0x1855d0: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1855d4:
    // 0x1855d4: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1855d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1855d8:
    // 0x1855d8: 0xc08f0cc  jal         func_23C330
label_1855dc:
    if (ctx->pc == 0x1855DCu) {
        ctx->pc = 0x1855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855D8u;
        // 0x1855dc: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855E0u;
        goto label_1855e0;
    }
    ctx->pc = 0x1855D8u;
    SET_GPR_U32(ctx, 31, 0x1855E0u);
    ctx->pc = 0x1855DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855D8u;
    // 0x1855dc: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1855E0u;
label_1855e0:
    // 0x1855e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1855e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1855e4:
    // 0x1855e4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1855e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_1855e8:
    // 0x1855e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1855e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1855ec:
    // 0x1855ec: 0x92450230  lbu         $a1, 0x230($s2)
    ctx->pc = 0x1855ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_1855f0:
    // 0x1855f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1855f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1855f4:
    // 0x1855f4: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1855f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_1855f8:
    // 0x1855f8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1855f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1855fc:
    // 0x1855fc: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x1855fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_185600:
    // 0x185600: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x185600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_185604:
    // 0x185604: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_185608:
    // 0x185608: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x185608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18560c:
    // 0x18560c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18560cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_185610:
    // 0x185610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185614:
    // 0x185614: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x185614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_185618:
    // 0x185618: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x185618u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18561c:
    // 0x18561c: 0x0  nop
    ctx->pc = 0x18561cu;
    // NOP
label_185620:
    // 0x185620: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185620u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_185624:
    // 0x185624: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x185624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_185628:
    // 0x185628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18562c:
    // 0x18562c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18562cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_185630:
    // 0x185630: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x185630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_185634:
    // 0x185634: 0x0  nop
    ctx->pc = 0x185634u;
    // NOP
label_185638:
    // 0x185638: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x185638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
label_18563c:
    // 0x18563c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185640:
    // 0x185640: 0xa6430224  sh          $v1, 0x224($s2)
    ctx->pc = 0x185640u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
label_185644:
    // 0x185644: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x185644u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_185648:
    // 0x185648: 0x1000010a  b           . + 4 + (0x10A << 2)
label_18564c:
    if (ctx->pc == 0x18564Cu) {
        ctx->pc = 0x18564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185648u;
        // 0x18564c: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185650u;
        goto label_185650;
    }
    ctx->pc = 0x185648u;
    {
        const bool branch_taken_0x185648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185648u;
        // 0x18564c: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185648) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x185650u;
label_185650:
    // 0x185650: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x185650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_185654:
    // 0x185654: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x185654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_185658:
    // 0x185658: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_18565c:
    if (ctx->pc == 0x18565Cu) {
        ctx->pc = 0x18565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185658u;
        // 0x18565c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185660u;
        goto label_185660;
    }
    ctx->pc = 0x185658u;
    {
        const bool branch_taken_0x185658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185658u;
        // 0x18565c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185658) {
            ctx->pc = 0x185664u;
            goto label_185664;
        }
    }
    ctx->pc = 0x185660u;
label_185660:
    // 0x185660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185664:
    // 0x185664: 0x14600103  bnez        $v1, . + 4 + (0x103 << 2)
label_185668:
    if (ctx->pc == 0x185668u) {
        ctx->pc = 0x18566Cu;
        goto label_18566c;
    }
    ctx->pc = 0x185664u;
    {
        const bool branch_taken_0x185664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185664) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x18566Cu;
label_18566c:
    // 0x18566c: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x18566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185670:
    // 0x185670: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x185670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185674:
    // 0x185674: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_185678:
    // 0x185678: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18567c:
    // 0x18567c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18567cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185680:
    // 0x185680: 0x0  nop
    ctx->pc = 0x185680u;
    // NOP
label_185684:
    // 0x185684: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x185684u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_185688:
    // 0x185688: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x185688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18568c:
    // 0x18568c: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x18568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185690:
    // 0x185690: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_185694:
    // 0x185694: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_185698:
    // 0x185698: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18569c:
    // 0x18569c: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x1856a0u;
    return;
}
