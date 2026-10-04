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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x274d00u: goto label_274d00;
        case 0x274d04u: goto label_274d04;
        case 0x274d08u: goto label_274d08;
        case 0x274d0cu: goto label_274d0c;
        case 0x274d10u: goto label_274d10;
        case 0x274d14u: goto label_274d14;
        case 0x274d18u: goto label_274d18;
        case 0x274d1cu: goto label_274d1c;
        case 0x274d20u: goto label_274d20;
        case 0x274d24u: goto label_274d24;
        case 0x274d28u: goto label_274d28;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d30u: goto label_274d30;
        case 0x274d34u: goto label_274d34;
        case 0x274d38u: goto label_274d38;
        case 0x274d3cu: goto label_274d3c;
        case 0x274d40u: goto label_274d40;
        case 0x274d44u: goto label_274d44;
        case 0x274d48u: goto label_274d48;
        case 0x274d4cu: goto label_274d4c;
        case 0x274d50u: goto label_274d50;
        case 0x274d54u: goto label_274d54;
        case 0x274d58u: goto label_274d58;
        case 0x274d5cu: goto label_274d5c;
        case 0x274d60u: goto label_274d60;
        case 0x274d64u: goto label_274d64;
        case 0x274d68u: goto label_274d68;
        case 0x274d6cu: goto label_274d6c;
        case 0x274d70u: goto label_274d70;
        case 0x274d74u: goto label_274d74;
        case 0x274d78u: goto label_274d78;
        case 0x274d7cu: goto label_274d7c;
        case 0x274d80u: goto label_274d80;
        case 0x274d84u: goto label_274d84;
        case 0x274d88u: goto label_274d88;
        case 0x274d8cu: goto label_274d8c;
        case 0x274d90u: goto label_274d90;
        case 0x274d94u: goto label_274d94;
        case 0x274d98u: goto label_274d98;
        case 0x274d9cu: goto label_274d9c;
        case 0x274da0u: goto label_274da0;
        case 0x274da4u: goto label_274da4;
        case 0x274da8u: goto label_274da8;
        case 0x274dacu: goto label_274dac;
        case 0x274db0u: goto label_274db0;
        case 0x274db4u: goto label_274db4;
        case 0x274db8u: goto label_274db8;
        case 0x274dbcu: goto label_274dbc;
        case 0x274dc0u: goto label_274dc0;
        case 0x274dc4u: goto label_274dc4;
        case 0x274dc8u: goto label_274dc8;
        case 0x274dccu: goto label_274dcc;
        case 0x274dd0u: goto label_274dd0;
        case 0x274dd4u: goto label_274dd4;
        case 0x274dd8u: goto label_274dd8;
        case 0x274ddcu: goto label_274ddc;
        case 0x274de0u: goto label_274de0;
        case 0x274de4u: goto label_274de4;
        case 0x274de8u: goto label_274de8;
        case 0x274decu: goto label_274dec;
        case 0x274df0u: goto label_274df0;
        case 0x274df4u: goto label_274df4;
        case 0x274df8u: goto label_274df8;
        case 0x274dfcu: goto label_274dfc;
        case 0x274e00u: goto label_274e00;
        case 0x274e04u: goto label_274e04;
        case 0x274e08u: goto label_274e08;
        case 0x274e0cu: goto label_274e0c;
        case 0x274e10u: goto label_274e10;
        case 0x274e14u: goto label_274e14;
        case 0x274e18u: goto label_274e18;
        case 0x274e1cu: goto label_274e1c;
        case 0x274e20u: goto label_274e20;
        case 0x274e24u: goto label_274e24;
        case 0x274e28u: goto label_274e28;
        case 0x274e2cu: goto label_274e2c;
        case 0x274e30u: goto label_274e30;
        case 0x274e34u: goto label_274e34;
        case 0x274e38u: goto label_274e38;
        case 0x274e3cu: goto label_274e3c;
        case 0x274e40u: goto label_274e40;
        case 0x274e44u: goto label_274e44;
        case 0x274e48u: goto label_274e48;
        case 0x274e4cu: goto label_274e4c;
        case 0x274e50u: goto label_274e50;
        case 0x274e54u: goto label_274e54;
        case 0x274e58u: goto label_274e58;
        case 0x274e5cu: goto label_274e5c;
        case 0x274e60u: goto label_274e60;
        case 0x274e64u: goto label_274e64;
        case 0x274e68u: goto label_274e68;
        case 0x274e6cu: goto label_274e6c;
        case 0x274e70u: goto label_274e70;
        case 0x274e74u: goto label_274e74;
        case 0x274e78u: goto label_274e78;
        case 0x274e7cu: goto label_274e7c;
        case 0x274e80u: goto label_274e80;
        case 0x274e84u: goto label_274e84;
        case 0x274e88u: goto label_274e88;
        case 0x274e8cu: goto label_274e8c;
        case 0x274e90u: goto label_274e90;
        case 0x274e94u: goto label_274e94;
        case 0x274e98u: goto label_274e98;
        case 0x274e9cu: goto label_274e9c;
        case 0x274ea0u: goto label_274ea0;
        case 0x274ea4u: goto label_274ea4;
        case 0x274ea8u: goto label_274ea8;
        case 0x274eacu: goto label_274eac;
        case 0x274eb0u: goto label_274eb0;
        case 0x274eb4u: goto label_274eb4;
        case 0x274eb8u: goto label_274eb8;
        case 0x274ebcu: goto label_274ebc;
        case 0x274ec0u: goto label_274ec0;
        case 0x274ec4u: goto label_274ec4;
        case 0x274ec8u: goto label_274ec8;
        case 0x274eccu: goto label_274ecc;
        case 0x274ed0u: goto label_274ed0;
        case 0x274ed4u: goto label_274ed4;
        case 0x274ed8u: goto label_274ed8;
        case 0x274edcu: goto label_274edc;
        case 0x274ee0u: goto label_274ee0;
        case 0x274ee4u: goto label_274ee4;
        case 0x274ee8u: goto label_274ee8;
        case 0x274eecu: goto label_274eec;
        case 0x274ef0u: goto label_274ef0;
        case 0x274ef4u: goto label_274ef4;
        case 0x274ef8u: goto label_274ef8;
        case 0x274efcu: goto label_274efc;
        case 0x274f00u: goto label_274f00;
        case 0x274f04u: goto label_274f04;
        case 0x274f08u: goto label_274f08;
        case 0x274f0cu: goto label_274f0c;
        case 0x274f10u: goto label_274f10;
        case 0x274f14u: goto label_274f14;
        case 0x274f18u: goto label_274f18;
        case 0x274f1cu: goto label_274f1c;
        case 0x274f20u: goto label_274f20;
        case 0x274f24u: goto label_274f24;
        case 0x274f28u: goto label_274f28;
        case 0x274f2cu: goto label_274f2c;
        case 0x274f30u: goto label_274f30;
        case 0x274f34u: goto label_274f34;
        case 0x274f38u: goto label_274f38;
        case 0x274f3cu: goto label_274f3c;
        case 0x274f40u: goto label_274f40;
        case 0x274f44u: goto label_274f44;
        case 0x274f48u: goto label_274f48;
        case 0x274f4cu: goto label_274f4c;
        case 0x274f50u: goto label_274f50;
        case 0x274f54u: goto label_274f54;
        case 0x274f58u: goto label_274f58;
        case 0x274f5cu: goto label_274f5c;
        case 0x274f60u: goto label_274f60;
        case 0x274f64u: goto label_274f64;
        case 0x274f68u: goto label_274f68;
        case 0x274f6cu: goto label_274f6c;
        case 0x274f70u: goto label_274f70;
        case 0x274f74u: goto label_274f74;
        case 0x274f78u: goto label_274f78;
        case 0x274f7cu: goto label_274f7c;
        case 0x274f80u: goto label_274f80;
        case 0x274f84u: goto label_274f84;
        case 0x274f88u: goto label_274f88;
        case 0x274f8cu: goto label_274f8c;
        case 0x274f90u: goto label_274f90;
        case 0x274f94u: goto label_274f94;
        case 0x274f98u: goto label_274f98;
        case 0x274f9cu: goto label_274f9c;
        case 0x274fa0u: goto label_274fa0;
        case 0x274fa4u: goto label_274fa4;
        case 0x274fa8u: goto label_274fa8;
        case 0x274facu: goto label_274fac;
        case 0x274fb0u: goto label_274fb0;
        case 0x274fb4u: goto label_274fb4;
        case 0x274fb8u: goto label_274fb8;
        case 0x274fbcu: goto label_274fbc;
        case 0x274fc0u: goto label_274fc0;
        case 0x274fc4u: goto label_274fc4;
        case 0x274fc8u: goto label_274fc8;
        case 0x274fccu: goto label_274fcc;
        case 0x274fd0u: goto label_274fd0;
        case 0x274fd4u: goto label_274fd4;
        case 0x274fd8u: goto label_274fd8;
        case 0x274fdcu: goto label_274fdc;
        case 0x274fe0u: goto label_274fe0;
        case 0x274fe4u: goto label_274fe4;
        case 0x274fe8u: goto label_274fe8;
        case 0x274fecu: goto label_274fec;
        case 0x274ff0u: goto label_274ff0;
        case 0x274ff4u: goto label_274ff4;
        case 0x274ff8u: goto label_274ff8;
        case 0x274ffcu: goto label_274ffc;
        case 0x275000u: goto label_275000;
        case 0x275004u: goto label_275004;
        case 0x275008u: goto label_275008;
        case 0x27500cu: goto label_27500c;
        case 0x275010u: goto label_275010;
        case 0x275014u: goto label_275014;
        case 0x275018u: goto label_275018;
        case 0x27501cu: goto label_27501c;
        case 0x275020u: goto label_275020;
        case 0x275024u: goto label_275024;
        case 0x275028u: goto label_275028;
        case 0x27502cu: goto label_27502c;
        case 0x275030u: goto label_275030;
        case 0x275034u: goto label_275034;
        case 0x275038u: goto label_275038;
        case 0x27503cu: goto label_27503c;
        case 0x275040u: goto label_275040;
        case 0x275044u: goto label_275044;
        case 0x275048u: goto label_275048;
        case 0x27504cu: goto label_27504c;
        case 0x275050u: goto label_275050;
        case 0x275054u: goto label_275054;
        case 0x275058u: goto label_275058;
        case 0x27505cu: goto label_27505c;
        case 0x275060u: goto label_275060;
        case 0x275064u: goto label_275064;
        case 0x275068u: goto label_275068;
        case 0x27506cu: goto label_27506c;
        case 0x275070u: goto label_275070;
        case 0x275074u: goto label_275074;
        case 0x275078u: goto label_275078;
        case 0x27507cu: goto label_27507c;
        case 0x275080u: goto label_275080;
        case 0x275084u: goto label_275084;
        case 0x275088u: goto label_275088;
        case 0x27508cu: goto label_27508c;
        case 0x275090u: goto label_275090;
        case 0x275094u: goto label_275094;
        case 0x275098u: goto label_275098;
        case 0x27509cu: goto label_27509c;
        case 0x2750a0u: goto label_2750a0;
        case 0x2750a4u: goto label_2750a4;
        case 0x2750a8u: goto label_2750a8;
        case 0x2750acu: goto label_2750ac;
        case 0x2750b0u: goto label_2750b0;
        case 0x2750b4u: goto label_2750b4;
        case 0x2750b8u: goto label_2750b8;
        case 0x2750bcu: goto label_2750bc;
        case 0x2750c0u: goto label_2750c0;
        case 0x2750c4u: goto label_2750c4;
        case 0x2750c8u: goto label_2750c8;
        case 0x2750ccu: goto label_2750cc;
        case 0x2750d0u: goto label_2750d0;
        case 0x2750d4u: goto label_2750d4;
        case 0x2750d8u: goto label_2750d8;
        case 0x2750dcu: goto label_2750dc;
        case 0x2750e0u: goto label_2750e0;
        case 0x2750e4u: goto label_2750e4;
        case 0x2750e8u: goto label_2750e8;
        case 0x2750ecu: goto label_2750ec;
        case 0x2750f0u: goto label_2750f0;
        case 0x2750f4u: goto label_2750f4;
        case 0x2750f8u: goto label_2750f8;
        case 0x2750fcu: goto label_2750fc;
        case 0x275100u: goto label_275100;
        case 0x275104u: goto label_275104;
        case 0x275108u: goto label_275108;
        case 0x27510cu: goto label_27510c;
        case 0x275110u: goto label_275110;
        case 0x275114u: goto label_275114;
        case 0x275118u: goto label_275118;
        case 0x27511cu: goto label_27511c;
        case 0x275120u: goto label_275120;
        case 0x275124u: goto label_275124;
        case 0x275128u: goto label_275128;
        case 0x27512cu: goto label_27512c;
        case 0x275130u: goto label_275130;
        case 0x275134u: goto label_275134;
        case 0x275138u: goto label_275138;
        case 0x27513cu: goto label_27513c;
        case 0x275140u: goto label_275140;
        case 0x275144u: goto label_275144;
        case 0x275148u: goto label_275148;
        case 0x27514cu: goto label_27514c;
        case 0x275150u: goto label_275150;
        case 0x275154u: goto label_275154;
        case 0x275158u: goto label_275158;
        case 0x27515cu: goto label_27515c;
        case 0x275160u: goto label_275160;
        case 0x275164u: goto label_275164;
        case 0x275168u: goto label_275168;
        case 0x27516cu: goto label_27516c;
        case 0x275170u: goto label_275170;
        case 0x275174u: goto label_275174;
        case 0x275178u: goto label_275178;
        case 0x27517cu: goto label_27517c;
        case 0x275180u: goto label_275180;
        case 0x275184u: goto label_275184;
        case 0x275188u: goto label_275188;
        case 0x27518cu: goto label_27518c;
        case 0x275190u: goto label_275190;
        case 0x275194u: goto label_275194;
        case 0x275198u: goto label_275198;
        case 0x27519cu: goto label_27519c;
        case 0x2751a0u: goto label_2751a0;
        case 0x2751a4u: goto label_2751a4;
        case 0x2751a8u: goto label_2751a8;
        case 0x2751acu: goto label_2751ac;
        case 0x2751b0u: goto label_2751b0;
        case 0x2751b4u: goto label_2751b4;
        case 0x2751b8u: goto label_2751b8;
        case 0x2751bcu: goto label_2751bc;
        case 0x2751c0u: goto label_2751c0;
        case 0x2751c4u: goto label_2751c4;
        case 0x2751c8u: goto label_2751c8;
        case 0x2751ccu: goto label_2751cc;
        case 0x2751d0u: goto label_2751d0;
        case 0x2751d4u: goto label_2751d4;
        case 0x2751d8u: goto label_2751d8;
        case 0x2751dcu: goto label_2751dc;
        case 0x2751e0u: goto label_2751e0;
        case 0x2751e4u: goto label_2751e4;
        case 0x2751e8u: goto label_2751e8;
        case 0x2751ecu: goto label_2751ec;
        case 0x2751f0u: goto label_2751f0;
        case 0x2751f4u: goto label_2751f4;
        case 0x2751f8u: goto label_2751f8;
        case 0x2751fcu: goto label_2751fc;
        case 0x275200u: goto label_275200;
        case 0x275204u: goto label_275204;
        case 0x275208u: goto label_275208;
        case 0x27520cu: goto label_27520c;
        case 0x275210u: goto label_275210;
        case 0x275214u: goto label_275214;
        case 0x275218u: goto label_275218;
        case 0x27521cu: goto label_27521c;
        case 0x275220u: goto label_275220;
        case 0x275224u: goto label_275224;
        case 0x275228u: goto label_275228;
        case 0x27522cu: goto label_27522c;
        case 0x275230u: goto label_275230;
        case 0x275234u: goto label_275234;
        case 0x275238u: goto label_275238;
        case 0x27523cu: goto label_27523c;
        case 0x275240u: goto label_275240;
        case 0x275244u: goto label_275244;
        case 0x275248u: goto label_275248;
        case 0x27524cu: goto label_27524c;
        case 0x275250u: goto label_275250;
        case 0x275254u: goto label_275254;
        case 0x275258u: goto label_275258;
        case 0x27525cu: goto label_27525c;
        case 0x275260u: goto label_275260;
        case 0x275264u: goto label_275264;
        case 0x275268u: goto label_275268;
        case 0x27526cu: goto label_27526c;
        case 0x275270u: goto label_275270;
        case 0x275274u: goto label_275274;
        case 0x275278u: goto label_275278;
        case 0x27527cu: goto label_27527c;
        case 0x275280u: goto label_275280;
        case 0x275284u: goto label_275284;
        case 0x275288u: goto label_275288;
        case 0x27528cu: goto label_27528c;
        case 0x275290u: goto label_275290;
        case 0x275294u: goto label_275294;
        case 0x275298u: goto label_275298;
        case 0x27529cu: goto label_27529c;
        case 0x2752a0u: goto label_2752a0;
        case 0x2752a4u: goto label_2752a4;
        case 0x2752a8u: goto label_2752a8;
        case 0x2752acu: goto label_2752ac;
        case 0x2752b0u: goto label_2752b0;
        case 0x2752b4u: goto label_2752b4;
        case 0x2752b8u: goto label_2752b8;
        case 0x2752bcu: goto label_2752bc;
        case 0x2752c0u: goto label_2752c0;
        case 0x2752c4u: goto label_2752c4;
        case 0x2752c8u: goto label_2752c8;
        case 0x2752ccu: goto label_2752cc;
        case 0x2752d0u: goto label_2752d0;
        case 0x2752d4u: goto label_2752d4;
        case 0x2752d8u: goto label_2752d8;
        case 0x2752dcu: goto label_2752dc;
        case 0x2752e0u: goto label_2752e0;
        case 0x2752e4u: goto label_2752e4;
        case 0x2752e8u: goto label_2752e8;
        case 0x2752ecu: goto label_2752ec;
        case 0x2752f0u: goto label_2752f0;
        case 0x2752f4u: goto label_2752f4;
        case 0x2752f8u: goto label_2752f8;
        case 0x2752fcu: goto label_2752fc;
        case 0x275300u: goto label_275300;
        case 0x275304u: goto label_275304;
        case 0x275308u: goto label_275308;
        case 0x27530cu: goto label_27530c;
        case 0x275310u: goto label_275310;
        case 0x275314u: goto label_275314;
        case 0x275318u: goto label_275318;
        case 0x27531cu: goto label_27531c;
        case 0x275320u: goto label_275320;
        case 0x275324u: goto label_275324;
        case 0x275328u: goto label_275328;
        case 0x27532cu: goto label_27532c;
        case 0x275330u: goto label_275330;
        case 0x275334u: goto label_275334;
        case 0x275338u: goto label_275338;
        case 0x27533cu: goto label_27533c;
        case 0x275340u: goto label_275340;
        case 0x275344u: goto label_275344;
        case 0x275348u: goto label_275348;
        case 0x27534cu: goto label_27534c;
        case 0x275350u: goto label_275350;
        case 0x275354u: goto label_275354;
        case 0x275358u: goto label_275358;
        case 0x27535cu: goto label_27535c;
        case 0x275360u: goto label_275360;
        case 0x275364u: goto label_275364;
        case 0x275368u: goto label_275368;
        case 0x27536cu: goto label_27536c;
        case 0x275370u: goto label_275370;
        case 0x275374u: goto label_275374;
        case 0x275378u: goto label_275378;
        case 0x27537cu: goto label_27537c;
        case 0x275380u: goto label_275380;
        case 0x275384u: goto label_275384;
        case 0x275388u: goto label_275388;
        case 0x27538cu: goto label_27538c;
        case 0x275390u: goto label_275390;
        case 0x275394u: goto label_275394;
        case 0x275398u: goto label_275398;
        case 0x27539cu: goto label_27539c;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753a4u: goto label_2753a4;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753acu: goto label_2753ac;
        case 0x2753b0u: goto label_2753b0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753b8u: goto label_2753b8;
        case 0x2753bcu: goto label_2753bc;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753c4u: goto label_2753c4;
        case 0x2753c8u: goto label_2753c8;
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753d4u: goto label_2753d4;
        case 0x2753d8u: goto label_2753d8;
        case 0x2753dcu: goto label_2753dc;
        case 0x2753e0u: goto label_2753e0;
        case 0x2753e4u: goto label_2753e4;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753ecu: goto label_2753ec;
        case 0x2753f0u: goto label_2753f0;
        case 0x2753f4u: goto label_2753f4;
        case 0x2753f8u: goto label_2753f8;
        case 0x2753fcu: goto label_2753fc;
        case 0x275400u: goto label_275400;
        case 0x275404u: goto label_275404;
        case 0x275408u: goto label_275408;
        case 0x27540cu: goto label_27540c;
        case 0x275410u: goto label_275410;
        case 0x275414u: goto label_275414;
        case 0x275418u: goto label_275418;
        case 0x27541cu: goto label_27541c;
        case 0x275420u: goto label_275420;
        case 0x275424u: goto label_275424;
        case 0x275428u: goto label_275428;
        case 0x27542cu: goto label_27542c;
        case 0x275430u: goto label_275430;
        case 0x275434u: goto label_275434;
        case 0x275438u: goto label_275438;
        case 0x27543cu: goto label_27543c;
        case 0x275440u: goto label_275440;
        case 0x275444u: goto label_275444;
        case 0x275448u: goto label_275448;
        case 0x27544cu: goto label_27544c;
        case 0x275450u: goto label_275450;
        case 0x275454u: goto label_275454;
        case 0x275458u: goto label_275458;
        case 0x27545cu: goto label_27545c;
        case 0x275460u: goto label_275460;
        case 0x275464u: goto label_275464;
        case 0x275468u: goto label_275468;
        case 0x27546cu: goto label_27546c;
        case 0x275470u: goto label_275470;
        case 0x275474u: goto label_275474;
        case 0x275478u: goto label_275478;
        case 0x27547cu: goto label_27547c;
        case 0x275480u: goto label_275480;
        case 0x275484u: goto label_275484;
        case 0x275488u: goto label_275488;
        case 0x27548cu: goto label_27548c;
        case 0x275490u: goto label_275490;
        case 0x275494u: goto label_275494;
        case 0x275498u: goto label_275498;
        case 0x27549cu: goto label_27549c;
        case 0x2754a0u: goto label_2754a0;
        case 0x2754a4u: goto label_2754a4;
        case 0x2754a8u: goto label_2754a8;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b0u: goto label_2754b0;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754c0u: goto label_2754c0;
        case 0x2754c4u: goto label_2754c4;
        case 0x2754c8u: goto label_2754c8;
        case 0x2754ccu: goto label_2754cc;
        default: return;
    }

label_274d00:
    // 0x274d00: 0xbd69  .word       0x0000BD69                   # mtsa        $zero # 0000BD40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274d00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_274d04:
    // 0x274d04: 0x26f80  sll         $t5, $v0, 30
    ctx->pc = 0x274d04u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_274d08:
    // 0x274d08: 0x0  nop
    ctx->pc = 0x274d08u;
    // NOP
label_274d0c:
    // 0x274d0c: 0x0  nop
    ctx->pc = 0x274d0cu;
    // NOP
label_274d10:
    // 0x274d10: 0xbdb7  .word       0x0000BDB7                   # INVALID     $zero, $zero, -0x4249 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274D10 raw=0x0000BDB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274d14:
    // 0x274d14: 0xa6c0  sll         $s4, $zero, 27
    ctx->pc = 0x274d14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_274d18:
    // 0x274d18: 0x0  nop
    ctx->pc = 0x274d18u;
    // NOP
label_274d1c:
    // 0x274d1c: 0x0  nop
    ctx->pc = 0x274d1cu;
    // NOP
label_274d20:
    // 0x274d20: 0xbdcc  syscall     759
    ctx->pc = 0x274d20u;
    ctx->pc = 0x274D24u;
runtime->handleSyscall(rdram, ctx, 0x2F7u);
label_274d24:
    // 0x274d24: 0x1e270  tge         $zero, $at, 905
    ctx->pc = 0x274d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_274d28:
    // 0x274d28: 0x0  nop
    ctx->pc = 0x274d28u;
    // NOP
label_274d2c:
    // 0x274d2c: 0x0  nop
    ctx->pc = 0x274d2cu;
    // NOP
label_274d30:
    // 0x274d30: 0xbe09  .word       0x0000BE09                   # jalr        $s7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_274d34:
    if (ctx->pc == 0x274D34u) {
        ctx->pc = 0x274D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D30u;
        // 0x274d34: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D38u;
        goto label_274d38;
    }
    ctx->pc = 0x274D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 23, 0x274D38u);
        ctx->pc = 0x274D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D30u;
        // 0x274d34: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274D30u, 0x274D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274D38u;
label_274d38:
    // 0x274d38: 0x0  nop
    ctx->pc = 0x274d38u;
    // NOP
label_274d3c:
    // 0x274d3c: 0x0  nop
    ctx->pc = 0x274d3cu;
    // NOP
label_274d40:
    // 0x274d40: 0xbe1a  .word       0x0000BE1A                   # div         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274d44:
    // 0x274d44: 0xd360  .word       0x0000D360                   # add         $k0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_274d48:
    // 0x274d48: 0x0  nop
    ctx->pc = 0x274d48u;
    // NOP
label_274d4c:
    // 0x274d4c: 0x0  nop
    ctx->pc = 0x274d4cu;
    // NOP
label_274d50:
    // 0x274d50: 0xbe35  .word       0x0000BE35                   # INVALID     $zero, $zero, -0x41CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x274D50 raw=0x0000BE35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274d54:
    // 0x274d54: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_274d58:
    // 0x274d58: 0x0  nop
    ctx->pc = 0x274d58u;
    // NOP
label_274d5c:
    // 0x274d5c: 0x0  nop
    ctx->pc = 0x274d5cu;
    // NOP
label_274d60:
    // 0x274d60: 0xbe53  .word       0x0000BE53                   # mtlo        $zero # 0000BE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d60u;
    ctx->lo = GPR_U64(ctx, 0);
label_274d64:
    // 0x274d64: 0xbe80  sll         $s7, $zero, 26
    ctx->pc = 0x274d64u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_274d68:
    // 0x274d68: 0x0  nop
    ctx->pc = 0x274d68u;
    // NOP
label_274d6c:
    // 0x274d6c: 0x0  nop
    ctx->pc = 0x274d6cu;
    // NOP
label_274d70:
    // 0x274d70: 0xbe6b  .word       0x0000BE6B                   # sltu        $s7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d70u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_274d74:
    // 0x274d74: 0xa780  sll         $s4, $zero, 30
    ctx->pc = 0x274d74u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_274d78:
    // 0x274d78: 0x0  nop
    ctx->pc = 0x274d78u;
    // NOP
label_274d7c:
    // 0x274d7c: 0x0  nop
    ctx->pc = 0x274d7cu;
    // NOP
label_274d80:
    // 0x274d80: 0xbe80  sll         $s7, $zero, 26
    ctx->pc = 0x274d80u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_274d84:
    // 0x274d84: 0x2c2b0  tge         $zero, $v0, 778
    ctx->pc = 0x274d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_274d88:
    // 0x274d88: 0x0  nop
    ctx->pc = 0x274d88u;
    // NOP
label_274d8c:
    // 0x274d8c: 0x0  nop
    ctx->pc = 0x274d8cu;
    // NOP
label_274d90:
    // 0x274d90: 0xbed9  .word       0x0000BED9                   # multu       $zero, $zero # 0000BEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_274d94:
    // 0x274d94: 0x1e50  .word       0x00001E50                   # mfhi        $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274d94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_274d98:
    // 0x274d98: 0x0  nop
    ctx->pc = 0x274d98u;
    // NOP
label_274d9c:
    // 0x274d9c: 0x0  nop
    ctx->pc = 0x274d9cu;
    // NOP
label_274da0:
    // 0x274da0: 0xbedd  .word       0x0000BEDD                   # dmultu      $zero, $zero # 0000BEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x274DA0 raw=0x0000BEDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274da4:
    // 0x274da4: 0x1b00  sll         $v1, $zero, 12
    ctx->pc = 0x274da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_274da8:
    // 0x274da8: 0x0  nop
    ctx->pc = 0x274da8u;
    // NOP
label_274dac:
    // 0x274dac: 0x0  nop
    ctx->pc = 0x274dacu;
    // NOP
label_274db0:
    // 0x274db0: 0xbee1  .word       0x0000BEE1                   # addu        $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274db0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274db4:
    // 0x274db4: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_274db8:
    // 0x274db8: 0x0  nop
    ctx->pc = 0x274db8u;
    // NOP
label_274dbc:
    // 0x274dbc: 0x0  nop
    ctx->pc = 0x274dbcu;
    // NOP
label_274dc0:
    // 0x274dc0: 0xbef1  tgeu        $zero, $zero, 763
    ctx->pc = 0x274dc0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274dc4:
    // 0x274dc4: 0x97a0  .word       0x000097A0                   # add         $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_274dc8:
    // 0x274dc8: 0x0  nop
    ctx->pc = 0x274dc8u;
    // NOP
label_274dcc:
    // 0x274dcc: 0x0  nop
    ctx->pc = 0x274dccu;
    // NOP
label_274dd0:
    // 0x274dd0: 0xbf04  .word       0x0000BF04                   # sllv        $s7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274dd0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274dd4:
    // 0x274dd4: 0x16c80  sll         $t5, $at, 18
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 1), 18));
label_274dd8:
    // 0x274dd8: 0x0  nop
    ctx->pc = 0x274dd8u;
    // NOP
label_274ddc:
    // 0x274ddc: 0x0  nop
    ctx->pc = 0x274ddcu;
    // NOP
label_274de0:
    // 0x274de0: 0xbf32  tlt         $zero, $zero, 764
    ctx->pc = 0x274de0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274de4:
    // 0x274de4: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x274de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274de8:
    // 0x274de8: 0x0  nop
    ctx->pc = 0x274de8u;
    // NOP
label_274dec:
    // 0x274dec: 0x0  nop
    ctx->pc = 0x274decu;
    // NOP
label_274df0:
    // 0x274df0: 0xbf43  sra         $s7, $zero, 29
    ctx->pc = 0x274df0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 29));
label_274df4:
    // 0x274df4: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274df4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_274df8:
    // 0x274df8: 0x0  nop
    ctx->pc = 0x274df8u;
    // NOP
label_274dfc:
    // 0x274dfc: 0x0  nop
    ctx->pc = 0x274dfcu;
    // NOP
label_274e00:
    // 0x274e00: 0xbf56  .word       0x0000BF56                   # dsrlv       $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e00u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274e04:
    // 0x274e04: 0x111c0  sll         $v0, $at, 7
    ctx->pc = 0x274e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_274e08:
    // 0x274e08: 0x0  nop
    ctx->pc = 0x274e08u;
    // NOP
label_274e0c:
    // 0x274e0c: 0x0  nop
    ctx->pc = 0x274e0cu;
    // NOP
label_274e10:
    // 0x274e10: 0xbf79  .word       0x0000BF79                   # INVALID     $zero, $zero, -0x4087 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x274E10 raw=0x0000BF79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274e14:
    // 0x274e14: 0xf5f0  tge         $zero, $zero, 983
    ctx->pc = 0x274e14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274e18:
    // 0x274e18: 0x0  nop
    ctx->pc = 0x274e18u;
    // NOP
label_274e1c:
    // 0x274e1c: 0x0  nop
    ctx->pc = 0x274e1cu;
    // NOP
label_274e20:
    // 0x274e20: 0xbf98  .word       0x0000BF98                   # mult        $s7, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_274e24:
    // 0x274e24: 0xb070  tge         $zero, $zero, 705
    ctx->pc = 0x274e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274e28:
    // 0x274e28: 0x0  nop
    ctx->pc = 0x274e28u;
    // NOP
label_274e2c:
    // 0x274e2c: 0x0  nop
    ctx->pc = 0x274e2cu;
    // NOP
label_274e30:
    // 0x274e30: 0xbfaf  .word       0x0000BFAF                   # dsubu       $s7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e30u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274e34:
    // 0x274e34: 0xea20  .word       0x0000EA20                   # add         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_274e38:
    // 0x274e38: 0x0  nop
    ctx->pc = 0x274e38u;
    // NOP
label_274e3c:
    // 0x274e3c: 0x0  nop
    ctx->pc = 0x274e3cu;
    // NOP
label_274e40:
    // 0x274e40: 0xbfcd  break       0, 767
    ctx->pc = 0x274e40u;
    runtime->handleBreak(rdram, ctx);
label_274e44:
    // 0x274e44: 0x134c0  sll         $a2, $at, 19
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_274e48:
    // 0x274e48: 0x0  nop
    ctx->pc = 0x274e48u;
    // NOP
label_274e4c:
    // 0x274e4c: 0x0  nop
    ctx->pc = 0x274e4cu;
    // NOP
label_274e50:
    // 0x274e50: 0xbff4  teq         $zero, $zero, 767
    ctx->pc = 0x274e50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274e54:
    // 0x274e54: 0x55f0  tge         $zero, $zero, 343
    ctx->pc = 0x274e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274e58:
    // 0x274e58: 0x0  nop
    ctx->pc = 0x274e58u;
    // NOP
label_274e5c:
    // 0x274e5c: 0x0  nop
    ctx->pc = 0x274e5cu;
    // NOP
label_274e60:
    // 0x274e60: 0xbfff  dsra32      $s7, $zero, 31
    ctx->pc = 0x274e60u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (32 + 31));
label_274e64:
    // 0x274e64: 0x14de0  .word       0x00014DE0                   # add         $t1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_274e68:
    // 0x274e68: 0x0  nop
    ctx->pc = 0x274e68u;
    // NOP
label_274e6c:
    // 0x274e6c: 0x0  nop
    ctx->pc = 0x274e6cu;
    // NOP
label_274e70:
    // 0x274e70: 0xc029  .word       0x0000C029                   # mtsa        $zero # 0000C000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274e70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_274e74:
    // 0x274e74: 0xae60  .word       0x0000AE60                   # add         $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_274e78:
    // 0x274e78: 0x0  nop
    ctx->pc = 0x274e78u;
    // NOP
label_274e7c:
    // 0x274e7c: 0x0  nop
    ctx->pc = 0x274e7cu;
    // NOP
label_274e80:
    // 0x274e80: 0xc03f  dsra32      $t8, $zero, 0
    ctx->pc = 0x274e80u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 0));
label_274e84:
    // 0x274e84: 0xd070  tge         $zero, $zero, 833
    ctx->pc = 0x274e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274e88:
    // 0x274e88: 0x0  nop
    ctx->pc = 0x274e88u;
    // NOP
label_274e8c:
    // 0x274e8c: 0x0  nop
    ctx->pc = 0x274e8cu;
    // NOP
label_274e90:
    // 0x274e90: 0xc05a  .word       0x0000C05A                   # div         $t8, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274e90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274e94:
    // 0x274e94: 0xc5f0  tge         $zero, $zero, 791
    ctx->pc = 0x274e94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274e98:
    // 0x274e98: 0x0  nop
    ctx->pc = 0x274e98u;
    // NOP
label_274e9c:
    // 0x274e9c: 0x0  nop
    ctx->pc = 0x274e9cu;
    // NOP
label_274ea0:
    // 0x274ea0: 0xc073  tltu        $zero, $zero, 769
    ctx->pc = 0x274ea0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274ea4:
    // 0x274ea4: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x274ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_274ea8:
    // 0x274ea8: 0x0  nop
    ctx->pc = 0x274ea8u;
    // NOP
label_274eac:
    // 0x274eac: 0x0  nop
    ctx->pc = 0x274eacu;
    // NOP
label_274eb0:
    // 0x274eb0: 0xc08d  break       0, 770
    ctx->pc = 0x274eb0u;
    runtime->handleBreak(rdram, ctx);
label_274eb4:
    // 0x274eb4: 0x1c270  tge         $zero, $at, 777
    ctx->pc = 0x274eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_274eb8:
    // 0x274eb8: 0x0  nop
    ctx->pc = 0x274eb8u;
    // NOP
label_274ebc:
    // 0x274ebc: 0x0  nop
    ctx->pc = 0x274ebcu;
    // NOP
label_274ec0:
    // 0x274ec0: 0xc0c6  .word       0x0000C0C6                   # srlv        $t8, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ec0u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274ec4:
    // 0x274ec4: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x274ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_274ec8:
    // 0x274ec8: 0x0  nop
    ctx->pc = 0x274ec8u;
    // NOP
label_274ecc:
    // 0x274ecc: 0x0  nop
    ctx->pc = 0x274eccu;
    // NOP
label_274ed0:
    // 0x274ed0: 0xc0d4  .word       0x0000C0D4                   # dsllv       $t8, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ed0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274ed4:
    // 0x274ed4: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ed4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274ed8:
    // 0x274ed8: 0x0  nop
    ctx->pc = 0x274ed8u;
    // NOP
label_274edc:
    // 0x274edc: 0x0  nop
    ctx->pc = 0x274edcu;
    // NOP
label_274ee0:
    // 0x274ee0: 0xc0e2  .word       0x0000C0E2                   # neg         $t8, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ee0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_274ee4:
    // 0x274ee4: 0x10900  sll         $at, $at, 4
    ctx->pc = 0x274ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_274ee8:
    // 0x274ee8: 0x0  nop
    ctx->pc = 0x274ee8u;
    // NOP
label_274eec:
    // 0x274eec: 0x0  nop
    ctx->pc = 0x274eecu;
    // NOP
label_274ef0:
    // 0x274ef0: 0xc104  .word       0x0000C104                   # sllv        $t8, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ef0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274ef4:
    // 0x274ef4: 0xa390  .word       0x0000A390                   # mfhi        $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274ef4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_274ef8:
    // 0x274ef8: 0x0  nop
    ctx->pc = 0x274ef8u;
    // NOP
label_274efc:
    // 0x274efc: 0x0  nop
    ctx->pc = 0x274efcu;
    // NOP
label_274f00:
    // 0x274f00: 0xc119  .word       0x0000C119                   # multu       $zero, $zero # 0000C100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_274f04:
    // 0x274f04: 0x25f0  tge         $zero, $zero, 151
    ctx->pc = 0x274f04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274f08:
    // 0x274f08: 0x0  nop
    ctx->pc = 0x274f08u;
    // NOP
label_274f0c:
    // 0x274f0c: 0x0  nop
    ctx->pc = 0x274f0cu;
    // NOP
label_274f10:
    // 0x274f10: 0xc11e  .word       0x0000C11E                   # ddiv        $t8, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x274F10 raw=0x0000C11E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274f14:
    // 0x274f14: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274f18:
    // 0x274f18: 0x0  nop
    ctx->pc = 0x274f18u;
    // NOP
label_274f1c:
    // 0x274f1c: 0x0  nop
    ctx->pc = 0x274f1cu;
    // NOP
label_274f20:
    // 0x274f20: 0xc12c  .word       0x0000C12C                   # dadd        $t8, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_274f24:
    // 0x274f24: 0xe7e0  .word       0x0000E7E0                   # add         $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274f28:
    // 0x274f28: 0x0  nop
    ctx->pc = 0x274f28u;
    // NOP
label_274f2c:
    // 0x274f2c: 0x0  nop
    ctx->pc = 0x274f2cu;
    // NOP
label_274f30:
    // 0x274f30: 0xc149  .word       0x0000C149                   # jalr        $t8, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_274f34:
    if (ctx->pc == 0x274F34u) {
        ctx->pc = 0x274F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F30u;
        // 0x274f34: 0xdb90  .word       0x0000DB90                   # mfhi        $k1 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F38u;
        goto label_274f38;
    }
    ctx->pc = 0x274F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 24, 0x274F38u);
        ctx->pc = 0x274F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F30u;
        // 0x274f34: 0xdb90  .word       0x0000DB90                   # mfhi        $k1 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F30u, 0x274F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274F38u;
label_274f38:
    // 0x274f38: 0x0  nop
    ctx->pc = 0x274f38u;
    // NOP
label_274f3c:
    // 0x274f3c: 0x0  nop
    ctx->pc = 0x274f3cu;
    // NOP
label_274f40:
    // 0x274f40: 0xc165  .word       0x0000C165                   # move        $t8, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f40u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274f44:
    // 0x274f44: 0x103b0  tge         $zero, $at, 14
    ctx->pc = 0x274f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_274f48:
    // 0x274f48: 0x0  nop
    ctx->pc = 0x274f48u;
    // NOP
label_274f4c:
    // 0x274f4c: 0x0  nop
    ctx->pc = 0x274f4cu;
    // NOP
label_274f50:
    // 0x274f50: 0xc186  .word       0x0000C186                   # srlv        $t8, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f50u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274f54:
    // 0x274f54: 0xbde0  .word       0x0000BDE0                   # add         $s7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_274f58:
    // 0x274f58: 0x0  nop
    ctx->pc = 0x274f58u;
    // NOP
label_274f5c:
    // 0x274f5c: 0x0  nop
    ctx->pc = 0x274f5cu;
    // NOP
label_274f60:
    // 0x274f60: 0xc19e  .word       0x0000C19E                   # ddiv        $t8, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x274F60 raw=0x0000C19E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274f64:
    // 0x274f64: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f64u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_274f68:
    // 0x274f68: 0x0  nop
    ctx->pc = 0x274f68u;
    // NOP
label_274f6c:
    // 0x274f6c: 0x0  nop
    ctx->pc = 0x274f6cu;
    // NOP
label_274f70:
    // 0x274f70: 0xc1a9  .word       0x0000C1A9                   # mtsa        $zero # 0000C180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274f70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_274f74:
    // 0x274f74: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f74u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_274f78:
    // 0x274f78: 0x0  nop
    ctx->pc = 0x274f78u;
    // NOP
label_274f7c:
    // 0x274f7c: 0x0  nop
    ctx->pc = 0x274f7cu;
    // NOP
label_274f80:
    // 0x274f80: 0xc1b6  tne         $zero, $zero, 774
    ctx->pc = 0x274f80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274f84:
    // 0x274f84: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_274f88:
    // 0x274f88: 0x0  nop
    ctx->pc = 0x274f88u;
    // NOP
label_274f8c:
    // 0x274f8c: 0x0  nop
    ctx->pc = 0x274f8cu;
    // NOP
label_274f90:
    // 0x274f90: 0xc1c4  .word       0x0000C1C4                   # sllv        $t8, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274f94:
    // 0x274f94: 0x2830  tge         $zero, $zero, 160
    ctx->pc = 0x274f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274f98:
    // 0x274f98: 0x0  nop
    ctx->pc = 0x274f98u;
    // NOP
label_274f9c:
    // 0x274f9c: 0x0  nop
    ctx->pc = 0x274f9cu;
    // NOP
label_274fa0:
    // 0x274fa0: 0xc1ca  .word       0x0000C1CA                   # movz        $t8, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fa0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_274fa4:
    // 0x274fa4: 0x1850  .word       0x00001850                   # mfhi        $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fa4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_274fa8:
    // 0x274fa8: 0x0  nop
    ctx->pc = 0x274fa8u;
    // NOP
label_274fac:
    // 0x274fac: 0x0  nop
    ctx->pc = 0x274facu;
    // NOP
label_274fb0:
    // 0x274fb0: 0xc1ce  .word       0x0000C1CE                   # INVALID     $zero, $zero, -0x3E32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x274FB0 raw=0x0000C1CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274fb4:
    // 0x274fb4: 0x1600  sll         $v0, $zero, 24
    ctx->pc = 0x274fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_274fb8:
    // 0x274fb8: 0x0  nop
    ctx->pc = 0x274fb8u;
    // NOP
label_274fbc:
    // 0x274fbc: 0x0  nop
    ctx->pc = 0x274fbcu;
    // NOP
label_274fc0:
    // 0x274fc0: 0xc1d1  .word       0x0000C1D1                   # mthi        $zero # 0000C1C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_274fc4:
    // 0x274fc4: 0xccd0  .word       0x0000CCD0                   # mfhi        $t9 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fc4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_274fc8:
    // 0x274fc8: 0x0  nop
    ctx->pc = 0x274fc8u;
    // NOP
label_274fcc:
    // 0x274fcc: 0x0  nop
    ctx->pc = 0x274fccu;
    // NOP
label_274fd0:
    // 0x274fd0: 0xc1eb  .word       0x0000C1EB                   # sltu        $t8, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fd0u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_274fd4:
    // 0x274fd4: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_274fd8:
    // 0x274fd8: 0x0  nop
    ctx->pc = 0x274fd8u;
    // NOP
label_274fdc:
    // 0x274fdc: 0x0  nop
    ctx->pc = 0x274fdcu;
    // NOP
label_274fe0:
    // 0x274fe0: 0xc1f2  tlt         $zero, $zero, 775
    ctx->pc = 0x274fe0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274fe4:
    // 0x274fe4: 0x44b0  tge         $zero, $zero, 274
    ctx->pc = 0x274fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274fe8:
    // 0x274fe8: 0x0  nop
    ctx->pc = 0x274fe8u;
    // NOP
label_274fec:
    // 0x274fec: 0x0  nop
    ctx->pc = 0x274fecu;
    // NOP
label_274ff0:
    // 0x274ff0: 0xc1fb  dsra        $t8, $zero, 7
    ctx->pc = 0x274ff0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> 7);
label_274ff4:
    // 0x274ff4: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x274ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_274ff8:
    // 0x274ff8: 0x0  nop
    ctx->pc = 0x274ff8u;
    // NOP
label_274ffc:
    // 0x274ffc: 0x0  nop
    ctx->pc = 0x274ffcu;
    // NOP
label_275000:
    // 0x275000: 0xc200  sll         $t8, $zero, 8
    ctx->pc = 0x275000u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_275004:
    // 0x275004: 0x1690  .word       0x00001690                   # mfhi        $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275004u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_275008:
    // 0x275008: 0x0  nop
    ctx->pc = 0x275008u;
    // NOP
label_27500c:
    // 0x27500c: 0x0  nop
    ctx->pc = 0x27500cu;
    // NOP
label_275010:
    // 0x275010: 0xc203  sra         $t8, $zero, 8
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), 8));
label_275014:
    // 0x275014: 0x1de0  .word       0x00001DE0                   # add         $v1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_275018:
    // 0x275018: 0x0  nop
    ctx->pc = 0x275018u;
    // NOP
label_27501c:
    // 0x27501c: 0x0  nop
    ctx->pc = 0x27501cu;
    // NOP
label_275020:
    // 0x275020: 0xc207  .word       0x0000C207                   # srav        $t8, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275020u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275024:
    // 0x275024: 0x1830  tge         $zero, $zero, 96
    ctx->pc = 0x275024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275028:
    // 0x275028: 0x0  nop
    ctx->pc = 0x275028u;
    // NOP
label_27502c:
    // 0x27502c: 0x0  nop
    ctx->pc = 0x27502cu;
    // NOP
label_275030:
    // 0x275030: 0xc20b  .word       0x0000C20B                   # movn        $t8, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275030u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_275034:
    // 0x275034: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275034u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_275038:
    // 0x275038: 0x0  nop
    ctx->pc = 0x275038u;
    // NOP
label_27503c:
    // 0x27503c: 0x0  nop
    ctx->pc = 0x27503cu;
    // NOP
label_275040:
    // 0x275040: 0xc218  .word       0x0000C218                   # mult        $t8, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_275044:
    // 0x275044: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275044u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_275048:
    // 0x275048: 0x0  nop
    ctx->pc = 0x275048u;
    // NOP
label_27504c:
    // 0x27504c: 0x0  nop
    ctx->pc = 0x27504cu;
    // NOP
label_275050:
    // 0x275050: 0xc223  .word       0x0000C223                   # negu        $t8, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275054:
    // 0x275054: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_275058:
    // 0x275058: 0x0  nop
    ctx->pc = 0x275058u;
    // NOP
label_27505c:
    // 0x27505c: 0x0  nop
    ctx->pc = 0x27505cu;
    // NOP
label_275060:
    // 0x275060: 0xc233  tltu        $zero, $zero, 776
    ctx->pc = 0x275060u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275064:
    // 0x275064: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_275068:
    // 0x275068: 0x0  nop
    ctx->pc = 0x275068u;
    // NOP
label_27506c:
    // 0x27506c: 0x0  nop
    ctx->pc = 0x27506cu;
    // NOP
label_275070:
    // 0x275070: 0xc23d  .word       0x0000C23D                   # INVALID     $zero, $zero, -0x3DC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x275070 raw=0x0000C23D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275074:
    // 0x275074: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_275078:
    // 0x275078: 0x0  nop
    ctx->pc = 0x275078u;
    // NOP
label_27507c:
    // 0x27507c: 0x0  nop
    ctx->pc = 0x27507cu;
    // NOP
label_275080:
    // 0x275080: 0xc24c  syscall     777
    ctx->pc = 0x275080u;
    ctx->pc = 0x275084u;
runtime->handleSyscall(rdram, ctx, 0x309u);
label_275084:
    // 0x275084: 0x4a30  tge         $zero, $zero, 296
    ctx->pc = 0x275084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275088:
    // 0x275088: 0x0  nop
    ctx->pc = 0x275088u;
    // NOP
label_27508c:
    // 0x27508c: 0x0  nop
    ctx->pc = 0x27508cu;
    // NOP
label_275090:
    // 0x275090: 0xc256  .word       0x0000C256                   # dsrlv       $t8, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275090u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275094:
    // 0x275094: 0x55b0  tge         $zero, $zero, 342
    ctx->pc = 0x275094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275098:
    // 0x275098: 0x0  nop
    ctx->pc = 0x275098u;
    // NOP
label_27509c:
    // 0x27509c: 0x0  nop
    ctx->pc = 0x27509cu;
    // NOP
label_2750a0:
    // 0x2750a0: 0xc261  .word       0x0000C261                   # addu        $t8, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2750a4:
    // 0x2750a4: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x2750a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2750a8:
    // 0x2750a8: 0x0  nop
    ctx->pc = 0x2750a8u;
    // NOP
label_2750ac:
    // 0x2750ac: 0x0  nop
    ctx->pc = 0x2750acu;
    // NOP
label_2750b0:
    // 0x2750b0: 0xc268  .word       0x0000C268                   # mfsa        $t8 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2750b0u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_2750b4:
    // 0x2750b4: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2750b8:
    // 0x2750b8: 0x0  nop
    ctx->pc = 0x2750b8u;
    // NOP
label_2750bc:
    // 0x2750bc: 0x0  nop
    ctx->pc = 0x2750bcu;
    // NOP
label_2750c0:
    // 0x2750c0: 0xc277  .word       0x0000C277                   # INVALID     $zero, $zero, -0x3D89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2750C0 raw=0x0000C277"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2750c4:
    // 0x2750c4: 0x9540  sll         $s2, $zero, 21
    ctx->pc = 0x2750c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2750c8:
    // 0x2750c8: 0x0  nop
    ctx->pc = 0x2750c8u;
    // NOP
label_2750cc:
    // 0x2750cc: 0x0  nop
    ctx->pc = 0x2750ccu;
    // NOP
label_2750d0:
    // 0x2750d0: 0xc28a  .word       0x0000C28A                   # movz        $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_2750d4:
    // 0x2750d4: 0x7db0  tge         $zero, $zero, 502
    ctx->pc = 0x2750d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2750d8:
    // 0x2750d8: 0x0  nop
    ctx->pc = 0x2750d8u;
    // NOP
label_2750dc:
    // 0x2750dc: 0x0  nop
    ctx->pc = 0x2750dcu;
    // NOP
label_2750e0:
    // 0x2750e0: 0xc29a  .word       0x0000C29A                   # div         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2750e4:
    // 0x2750e4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2750e8:
    // 0x2750e8: 0x0  nop
    ctx->pc = 0x2750e8u;
    // NOP
label_2750ec:
    // 0x2750ec: 0x0  nop
    ctx->pc = 0x2750ecu;
    // NOP
label_2750f0:
    // 0x2750f0: 0xc2a6  .word       0x0000C2A6                   # xor         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750f0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2750f4:
    // 0x2750f4: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2750f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2750f8:
    // 0x2750f8: 0x0  nop
    ctx->pc = 0x2750f8u;
    // NOP
label_2750fc:
    // 0x2750fc: 0x0  nop
    ctx->pc = 0x2750fcu;
    // NOP
label_275100:
    // 0x275100: 0xc2b2  tlt         $zero, $zero, 778
    ctx->pc = 0x275100u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275104:
    // 0x275104: 0x6a60  .word       0x00006A60                   # add         $t5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_275108:
    // 0x275108: 0x0  nop
    ctx->pc = 0x275108u;
    // NOP
label_27510c:
    // 0x27510c: 0x0  nop
    ctx->pc = 0x27510cu;
    // NOP
label_275110:
    // 0x275110: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x275110u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_275114:
    // 0x275114: 0x11870  tge         $zero, $at, 97
    ctx->pc = 0x275114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_275118:
    // 0x275118: 0x0  nop
    ctx->pc = 0x275118u;
    // NOP
label_27511c:
    // 0x27511c: 0x0  nop
    ctx->pc = 0x27511cu;
    // NOP
label_275120:
    // 0x275120: 0xc2e4  .word       0x0000C2E4                   # and         $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275120u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_275124:
    // 0x275124: 0x105e0  .word       0x000105E0                   # add         $zero, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_275128:
    // 0x275128: 0x0  nop
    ctx->pc = 0x275128u;
    // NOP
label_27512c:
    // 0x27512c: 0x0  nop
    ctx->pc = 0x27512cu;
    // NOP
label_275130:
    // 0x275130: 0xc305  .word       0x0000C305                   # INVALID     $zero, $zero, -0x3CFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x275130 raw=0x0000C305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275134:
    // 0x275134: 0x11930  tge         $zero, $at, 100
    ctx->pc = 0x275134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_275138:
    // 0x275138: 0x0  nop
    ctx->pc = 0x275138u;
    // NOP
label_27513c:
    // 0x27513c: 0x0  nop
    ctx->pc = 0x27513cu;
    // NOP
label_275140:
    // 0x275140: 0xc329  .word       0x0000C329                   # mtsa        $zero # 0000C300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275140u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_275144:
    // 0x275144: 0xc050  .word       0x0000C050                   # mfhi        $t8 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275144u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_275148:
    // 0x275148: 0x0  nop
    ctx->pc = 0x275148u;
    // NOP
label_27514c:
    // 0x27514c: 0x0  nop
    ctx->pc = 0x27514cu;
    // NOP
label_275150:
    // 0x275150: 0xc342  srl         $t8, $zero, 13
    ctx->pc = 0x275150u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_275154:
    // 0x275154: 0x140e0  .word       0x000140E0                   # add         $t0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_275158:
    // 0x275158: 0x0  nop
    ctx->pc = 0x275158u;
    // NOP
label_27515c:
    // 0x27515c: 0x0  nop
    ctx->pc = 0x27515cu;
    // NOP
label_275160:
    // 0x275160: 0xc36b  .word       0x0000C36B                   # sltu        $t8, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275160u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_275164:
    // 0x275164: 0xcbe0  .word       0x0000CBE0                   # add         $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_275168:
    // 0x275168: 0x0  nop
    ctx->pc = 0x275168u;
    // NOP
label_27516c:
    // 0x27516c: 0x0  nop
    ctx->pc = 0x27516cu;
    // NOP
label_275170:
    // 0x275170: 0xc385  .word       0x0000C385                   # INVALID     $zero, $zero, -0x3C7B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x275170 raw=0x0000C385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275174:
    // 0x275174: 0x3cd0  .word       0x00003CD0                   # mfhi        $a3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275174u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_275178:
    // 0x275178: 0x0  nop
    ctx->pc = 0x275178u;
    // NOP
label_27517c:
    // 0x27517c: 0x0  nop
    ctx->pc = 0x27517cu;
    // NOP
label_275180:
    // 0x275180: 0xc38d  break       0, 782
    ctx->pc = 0x275180u;
    runtime->handleBreak(rdram, ctx);
label_275184:
    // 0x275184: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_275188:
    // 0x275188: 0x0  nop
    ctx->pc = 0x275188u;
    // NOP
label_27518c:
    // 0x27518c: 0x0  nop
    ctx->pc = 0x27518cu;
    // NOP
label_275190:
    // 0x275190: 0xc39e  .word       0x0000C39E                   # ddiv        $t8, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x275190 raw=0x0000C39E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275194:
    // 0x275194: 0x12e00  sll         $a1, $at, 24
    ctx->pc = 0x275194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_275198:
    // 0x275198: 0x0  nop
    ctx->pc = 0x275198u;
    // NOP
label_27519c:
    // 0x27519c: 0x0  nop
    ctx->pc = 0x27519cu;
    // NOP
label_2751a0:
    // 0x2751a0: 0xc3c4  .word       0x0000C3C4                   # sllv        $t8, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2751a4:
    // 0x2751a4: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x2751a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2751a8:
    // 0x2751a8: 0x0  nop
    ctx->pc = 0x2751a8u;
    // NOP
label_2751ac:
    // 0x2751ac: 0x0  nop
    ctx->pc = 0x2751acu;
    // NOP
label_2751b0:
    // 0x2751b0: 0xc3dc  .word       0x0000C3DC                   # dmult       $zero, $zero # 0000C3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2751B0 raw=0x0000C3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2751b4:
    // 0x2751b4: 0x13a50  .word       0x00013A50                   # mfhi        $a3 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2751b8:
    // 0x2751b8: 0x0  nop
    ctx->pc = 0x2751b8u;
    // NOP
label_2751bc:
    // 0x2751bc: 0x0  nop
    ctx->pc = 0x2751bcu;
    // NOP
label_2751c0:
    // 0x2751c0: 0xc404  .word       0x0000C404                   # sllv        $t8, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2751c4:
    // 0x2751c4: 0xbf10  .word       0x0000BF10                   # mfhi        $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751c4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2751c8:
    // 0x2751c8: 0x0  nop
    ctx->pc = 0x2751c8u;
    // NOP
label_2751cc:
    // 0x2751cc: 0x0  nop
    ctx->pc = 0x2751ccu;
    // NOP
label_2751d0:
    // 0x2751d0: 0xc41c  .word       0x0000C41C                   # dmult       $zero, $zero # 0000C400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2751D0 raw=0x0000C41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2751d4:
    // 0x2751d4: 0x6320  .word       0x00006320                   # add         $t4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2751d8:
    // 0x2751d8: 0x0  nop
    ctx->pc = 0x2751d8u;
    // NOP
label_2751dc:
    // 0x2751dc: 0x0  nop
    ctx->pc = 0x2751dcu;
    // NOP
label_2751e0:
    // 0x2751e0: 0xc429  .word       0x0000C429                   # mtsa        $zero # 0000C400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2751e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2751e4:
    // 0x2751e4: 0x6680  sll         $t4, $zero, 26
    ctx->pc = 0x2751e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2751e8:
    // 0x2751e8: 0x0  nop
    ctx->pc = 0x2751e8u;
    // NOP
label_2751ec:
    // 0x2751ec: 0x0  nop
    ctx->pc = 0x2751ecu;
    // NOP
label_2751f0:
    // 0x2751f0: 0xc436  tne         $zero, $zero, 784
    ctx->pc = 0x2751f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2751f4:
    // 0x2751f4: 0x8360  .word       0x00008360                   # add         $s0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2751f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2751f8:
    // 0x2751f8: 0x0  nop
    ctx->pc = 0x2751f8u;
    // NOP
label_2751fc:
    // 0x2751fc: 0x0  nop
    ctx->pc = 0x2751fcu;
    // NOP
label_275200:
    // 0x275200: 0xc447  .word       0x0000C447                   # srav        $t8, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275200u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275204:
    // 0x275204: 0x6c90  .word       0x00006C90                   # mfhi        $t5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275204u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_275208:
    // 0x275208: 0x0  nop
    ctx->pc = 0x275208u;
    // NOP
label_27520c:
    // 0x27520c: 0x0  nop
    ctx->pc = 0x27520cu;
    // NOP
label_275210:
    // 0x275210: 0xc455  .word       0x0000C455                   # INVALID     $zero, $zero, -0x3BAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x275210 raw=0x0000C455"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275214:
    // 0x275214: 0xa770  tge         $zero, $zero, 669
    ctx->pc = 0x275214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275218:
    // 0x275218: 0x0  nop
    ctx->pc = 0x275218u;
    // NOP
label_27521c:
    // 0x27521c: 0x0  nop
    ctx->pc = 0x27521cu;
    // NOP
label_275220:
    // 0x275220: 0xc46a  .word       0x0000C46A                   # slt         $t8, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275220u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_275224:
    // 0x275224: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x275224u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_275228:
    // 0x275228: 0x0  nop
    ctx->pc = 0x275228u;
    // NOP
label_27522c:
    // 0x27522c: 0x0  nop
    ctx->pc = 0x27522cu;
    // NOP
label_275230:
    // 0x275230: 0xc476  tne         $zero, $zero, 785
    ctx->pc = 0x275230u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275234:
    // 0x275234: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x275234u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_275238:
    // 0x275238: 0x0  nop
    ctx->pc = 0x275238u;
    // NOP
label_27523c:
    // 0x27523c: 0x0  nop
    ctx->pc = 0x27523cu;
    // NOP
label_275240:
    // 0x275240: 0xc48c  syscall     786
    ctx->pc = 0x275240u;
    ctx->pc = 0x275244u;
runtime->handleSyscall(rdram, ctx, 0x312u);
label_275244:
    // 0x275244: 0xad90  .word       0x0000AD90                   # mfhi        $s5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275244u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_275248:
    // 0x275248: 0x0  nop
    ctx->pc = 0x275248u;
    // NOP
label_27524c:
    // 0x27524c: 0x0  nop
    ctx->pc = 0x27524cu;
    // NOP
label_275250:
    // 0x275250: 0xc4a2  .word       0x0000C4A2                   # neg         $t8, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275250u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_275254:
    // 0x275254: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x275254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_275258:
    // 0x275258: 0x0  nop
    ctx->pc = 0x275258u;
    // NOP
label_27525c:
    // 0x27525c: 0x0  nop
    ctx->pc = 0x27525cu;
    // NOP
label_275260:
    // 0x275260: 0xc4af  .word       0x0000C4AF                   # dsubu       $t8, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275260u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_275264:
    // 0x275264: 0x22b0  tge         $zero, $zero, 138
    ctx->pc = 0x275264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275268:
    // 0x275268: 0x0  nop
    ctx->pc = 0x275268u;
    // NOP
label_27526c:
    // 0x27526c: 0x0  nop
    ctx->pc = 0x27526cu;
    // NOP
label_275270:
    // 0x275270: 0xc4b4  teq         $zero, $zero, 786
    ctx->pc = 0x275270u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275274:
    // 0x275274: 0xba20  .word       0x0000BA20                   # add         $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_275278:
    // 0x275278: 0x0  nop
    ctx->pc = 0x275278u;
    // NOP
label_27527c:
    // 0x27527c: 0x0  nop
    ctx->pc = 0x27527cu;
    // NOP
label_275280:
    // 0x275280: 0xc4cc  syscall     787
    ctx->pc = 0x275280u;
    ctx->pc = 0x275284u;
runtime->handleSyscall(rdram, ctx, 0x313u);
label_275284:
    // 0x275284: 0xfff0  tge         $zero, $zero, 1023
    ctx->pc = 0x275284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275288:
    // 0x275288: 0x0  nop
    ctx->pc = 0x275288u;
    // NOP
label_27528c:
    // 0x27528c: 0x0  nop
    ctx->pc = 0x27528cu;
    // NOP
label_275290:
    // 0x275290: 0xc4ec  .word       0x0000C4EC                   # dadd        $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275290u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_275294:
    // 0x275294: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275294u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275298:
    // 0x275298: 0x0  nop
    ctx->pc = 0x275298u;
    // NOP
label_27529c:
    // 0x27529c: 0x0  nop
    ctx->pc = 0x27529cu;
    // NOP
label_2752a0:
    // 0x2752a0: 0xc507  .word       0x0000C507                   # srav        $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2752a4:
    // 0x2752a4: 0x6510  .word       0x00006510                   # mfhi        $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752a4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2752a8:
    // 0x2752a8: 0x0  nop
    ctx->pc = 0x2752a8u;
    // NOP
label_2752ac:
    // 0x2752ac: 0x0  nop
    ctx->pc = 0x2752acu;
    // NOP
label_2752b0:
    // 0x2752b0: 0xc514  .word       0x0000C514                   # dsllv       $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752b0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2752b4:
    // 0x2752b4: 0x68c0  sll         $t5, $zero, 3
    ctx->pc = 0x2752b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2752b8:
    // 0x2752b8: 0x0  nop
    ctx->pc = 0x2752b8u;
    // NOP
label_2752bc:
    // 0x2752bc: 0x0  nop
    ctx->pc = 0x2752bcu;
    // NOP
label_2752c0:
    // 0x2752c0: 0xc522  .word       0x0000C522                   # neg         $t8, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_2752c4:
    // 0x2752c4: 0x10630  tge         $zero, $at, 24
    ctx->pc = 0x2752c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2752c8:
    // 0x2752c8: 0x0  nop
    ctx->pc = 0x2752c8u;
    // NOP
label_2752cc:
    // 0x2752cc: 0x0  nop
    ctx->pc = 0x2752ccu;
    // NOP
label_2752d0:
    // 0x2752d0: 0xc543  sra         $t8, $zero, 21
    ctx->pc = 0x2752d0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), 21));
label_2752d4:
    // 0x2752d4: 0x12080  sll         $a0, $at, 2
    ctx->pc = 0x2752d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_2752d8:
    // 0x2752d8: 0x0  nop
    ctx->pc = 0x2752d8u;
    // NOP
label_2752dc:
    // 0x2752dc: 0x0  nop
    ctx->pc = 0x2752dcu;
    // NOP
label_2752e0:
    // 0x2752e0: 0xc568  .word       0x0000C568                   # mfsa        $t8 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2752e0u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_2752e4:
    // 0x2752e4: 0x2050  .word       0x00002050                   # mfhi        $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2752e8:
    // 0x2752e8: 0x0  nop
    ctx->pc = 0x2752e8u;
    // NOP
label_2752ec:
    // 0x2752ec: 0x0  nop
    ctx->pc = 0x2752ecu;
    // NOP
label_2752f0:
    // 0x2752f0: 0xc56d  .word       0x0000C56D                   # daddu       $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2752f4:
    // 0x2752f4: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x2752f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2752f8:
    // 0x2752f8: 0x0  nop
    ctx->pc = 0x2752f8u;
    // NOP
label_2752fc:
    // 0x2752fc: 0x0  nop
    ctx->pc = 0x2752fcu;
    // NOP
label_275300:
    // 0x275300: 0xc586  .word       0x0000C586                   # srlv        $t8, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275300u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275304:
    // 0x275304: 0xe5f0  tge         $zero, $zero, 919
    ctx->pc = 0x275304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275308:
    // 0x275308: 0x0  nop
    ctx->pc = 0x275308u;
    // NOP
label_27530c:
    // 0x27530c: 0x0  nop
    ctx->pc = 0x27530cu;
    // NOP
label_275310:
    // 0x275310: 0xc5a3  .word       0x0000C5A3                   # negu        $t8, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275314:
    // 0x275314: 0x8a80  sll         $s1, $zero, 10
    ctx->pc = 0x275314u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275318:
    // 0x275318: 0x0  nop
    ctx->pc = 0x275318u;
    // NOP
label_27531c:
    // 0x27531c: 0x0  nop
    ctx->pc = 0x27531cu;
    // NOP
label_275320:
    // 0x275320: 0xc5b5  .word       0x0000C5B5                   # INVALID     $zero, $zero, -0x3A4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x275320 raw=0x0000C5B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275324:
    // 0x275324: 0x12a60  .word       0x00012A60                   # add         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_275328:
    // 0x275328: 0x0  nop
    ctx->pc = 0x275328u;
    // NOP
label_27532c:
    // 0x27532c: 0x0  nop
    ctx->pc = 0x27532cu;
    // NOP
label_275330:
    // 0x275330: 0xc5db  .word       0x0000C5DB                   # divu        $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275330u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275334:
    // 0x275334: 0x28d0  .word       0x000028D0                   # mfhi        $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275334u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_275338:
    // 0x275338: 0x0  nop
    ctx->pc = 0x275338u;
    // NOP
label_27533c:
    // 0x27533c: 0x0  nop
    ctx->pc = 0x27533cu;
    // NOP
label_275340:
    // 0x275340: 0xc5e1  .word       0x0000C5E1                   # addu        $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275340u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275344:
    // 0x275344: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275344u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_275348:
    // 0x275348: 0x0  nop
    ctx->pc = 0x275348u;
    // NOP
label_27534c:
    // 0x27534c: 0x0  nop
    ctx->pc = 0x27534cu;
    // NOP
label_275350:
    // 0x275350: 0xc5ef  .word       0x0000C5EF                   # dsubu       $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275350u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_275354:
    // 0x275354: 0xec60  .word       0x0000EC60                   # add         $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_275358:
    // 0x275358: 0x0  nop
    ctx->pc = 0x275358u;
    // NOP
label_27535c:
    // 0x27535c: 0x0  nop
    ctx->pc = 0x27535cu;
    // NOP
label_275360:
    // 0x275360: 0xc60d  break       0, 792
    ctx->pc = 0x275360u;
    runtime->handleBreak(rdram, ctx);
label_275364:
    // 0x275364: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x275364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_275368:
    // 0x275368: 0x0  nop
    ctx->pc = 0x275368u;
    // NOP
label_27536c:
    // 0x27536c: 0x0  nop
    ctx->pc = 0x27536cu;
    // NOP
label_275370:
    // 0x275370: 0xc616  .word       0x0000C616                   # dsrlv       $t8, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275370u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275374:
    // 0x275374: 0x10020  add         $zero, $zero, $at
    ctx->pc = 0x275374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_275378:
    // 0x275378: 0x0  nop
    ctx->pc = 0x275378u;
    // NOP
label_27537c:
    // 0x27537c: 0x0  nop
    ctx->pc = 0x27537cu;
    // NOP
label_275380:
    // 0x275380: 0xc637  .word       0x0000C637                   # INVALID     $zero, $zero, -0x39C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x275380 raw=0x0000C637"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275384:
    // 0x275384: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x275384u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_275388:
    // 0x275388: 0x0  nop
    ctx->pc = 0x275388u;
    // NOP
label_27538c:
    // 0x27538c: 0x0  nop
    ctx->pc = 0x27538cu;
    // NOP
label_275390:
    // 0x275390: 0xc64a  .word       0x0000C64A                   # movz        $t8, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275390u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_275394:
    // 0x275394: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_275398:
    // 0x275398: 0x0  nop
    ctx->pc = 0x275398u;
    // NOP
label_27539c:
    // 0x27539c: 0x0  nop
    ctx->pc = 0x27539cu;
    // NOP
label_2753a0:
    // 0x2753a0: 0xc663  .word       0x0000C663                   # negu        $t8, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2753a4:
    // 0x2753a4: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x2753a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2753a8:
    // 0x2753a8: 0x0  nop
    ctx->pc = 0x2753a8u;
    // NOP
label_2753ac:
    // 0x2753ac: 0x0  nop
    ctx->pc = 0x2753acu;
    // NOP
label_2753b0:
    // 0x2753b0: 0xc675  .word       0x0000C675                   # INVALID     $zero, $zero, -0x398B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2753B0 raw=0x0000C675"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2753b4:
    // 0x2753b4: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2753b8:
    // 0x2753b8: 0x0  nop
    ctx->pc = 0x2753b8u;
    // NOP
label_2753bc:
    // 0x2753bc: 0x0  nop
    ctx->pc = 0x2753bcu;
    // NOP
label_2753c0:
    // 0x2753c0: 0xc67f  dsra32      $t8, $zero, 25
    ctx->pc = 0x2753c0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 25));
label_2753c4:
    // 0x2753c4: 0xdcc0  sll         $k1, $zero, 19
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2753c8:
    // 0x2753c8: 0x0  nop
    ctx->pc = 0x2753c8u;
    // NOP
label_2753cc:
    // 0x2753cc: 0x0  nop
    ctx->pc = 0x2753ccu;
    // NOP
label_2753d0:
    // 0x2753d0: 0xc69b  .word       0x0000C69B                   # divu        $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2753d4:
    // 0x2753d4: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2753d8:
    // 0x2753d8: 0x0  nop
    ctx->pc = 0x2753d8u;
    // NOP
label_2753dc:
    // 0x2753dc: 0x0  nop
    ctx->pc = 0x2753dcu;
    // NOP
label_2753e0:
    // 0x2753e0: 0xc6ab  .word       0x0000C6AB                   # sltu        $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753e0u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2753e4:
    // 0x2753e4: 0x5480  sll         $t2, $zero, 18
    ctx->pc = 0x2753e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2753e8:
    // 0x2753e8: 0x0  nop
    ctx->pc = 0x2753e8u;
    // NOP
label_2753ec:
    // 0x2753ec: 0x0  nop
    ctx->pc = 0x2753ecu;
    // NOP
label_2753f0:
    // 0x2753f0: 0xc6b6  tne         $zero, $zero, 794
    ctx->pc = 0x2753f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2753f4:
    // 0x2753f4: 0x33e0  .word       0x000033E0                   # add         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2753f8:
    // 0x2753f8: 0x0  nop
    ctx->pc = 0x2753f8u;
    // NOP
label_2753fc:
    // 0x2753fc: 0x0  nop
    ctx->pc = 0x2753fcu;
    // NOP
label_275400:
    // 0x275400: 0xc6bd  .word       0x0000C6BD                   # INVALID     $zero, $zero, -0x3943 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x275400 raw=0x0000C6BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275404:
    // 0x275404: 0xbcc0  sll         $s7, $zero, 19
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_275408:
    // 0x275408: 0x0  nop
    ctx->pc = 0x275408u;
    // NOP
label_27540c:
    // 0x27540c: 0x0  nop
    ctx->pc = 0x27540cu;
    // NOP
label_275410:
    // 0x275410: 0xc6d5  .word       0x0000C6D5                   # INVALID     $zero, $zero, -0x392B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x275410 raw=0x0000C6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275414:
    // 0x275414: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x275414u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_275418:
    // 0x275418: 0x0  nop
    ctx->pc = 0x275418u;
    // NOP
label_27541c:
    // 0x27541c: 0x0  nop
    ctx->pc = 0x27541cu;
    // NOP
label_275420:
    // 0x275420: 0xc6e7  .word       0x0000C6E7                   # not         $t8, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275420u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_275424:
    // 0x275424: 0x4af0  tge         $zero, $zero, 299
    ctx->pc = 0x275424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275428:
    // 0x275428: 0x0  nop
    ctx->pc = 0x275428u;
    // NOP
label_27542c:
    // 0x27542c: 0x0  nop
    ctx->pc = 0x27542cu;
    // NOP
label_275430:
    // 0x275430: 0xc6f1  tgeu        $zero, $zero, 795
    ctx->pc = 0x275430u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275434:
    // 0x275434: 0x35e0  .word       0x000035E0                   # add         $a2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_275438:
    // 0x275438: 0x0  nop
    ctx->pc = 0x275438u;
    // NOP
label_27543c:
    // 0x27543c: 0x0  nop
    ctx->pc = 0x27543cu;
    // NOP
label_275440:
    // 0x275440: 0xc6f8  dsll        $t8, $zero, 27
    ctx->pc = 0x275440u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << 27);
label_275444:
    // 0x275444: 0x14620  .word       0x00014620                   # add         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_275448:
    // 0x275448: 0x0  nop
    ctx->pc = 0x275448u;
    // NOP
label_27544c:
    // 0x27544c: 0x0  nop
    ctx->pc = 0x27544cu;
    // NOP
label_275450:
    // 0x275450: 0xc721  .word       0x0000C721                   # addu        $t8, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275454:
    // 0x275454: 0x4a80  sll         $t1, $zero, 10
    ctx->pc = 0x275454u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275458:
    // 0x275458: 0x0  nop
    ctx->pc = 0x275458u;
    // NOP
label_27545c:
    // 0x27545c: 0x0  nop
    ctx->pc = 0x27545cu;
    // NOP
label_275460:
    // 0x275460: 0xc72b  .word       0x0000C72B                   # sltu        $t8, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275460u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_275464:
    // 0x275464: 0xd880  sll         $k1, $zero, 2
    ctx->pc = 0x275464u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_275468:
    // 0x275468: 0x0  nop
    ctx->pc = 0x275468u;
    // NOP
label_27546c:
    // 0x27546c: 0x0  nop
    ctx->pc = 0x27546cu;
    // NOP
label_275470:
    // 0x275470: 0xc747  .word       0x0000C747                   # srav        $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275470u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275474:
    // 0x275474: 0x9ea0  .word       0x00009EA0                   # add         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_275478:
    // 0x275478: 0x0  nop
    ctx->pc = 0x275478u;
    // NOP
label_27547c:
    // 0x27547c: 0x0  nop
    ctx->pc = 0x27547cu;
    // NOP
label_275480:
    // 0x275480: 0xc75b  .word       0x0000C75B                   # divu        $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275480u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275484:
    // 0x275484: 0x7750  .word       0x00007750                   # mfhi        $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275484u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_275488:
    // 0x275488: 0x0  nop
    ctx->pc = 0x275488u;
    // NOP
label_27548c:
    // 0x27548c: 0x0  nop
    ctx->pc = 0x27548cu;
    // NOP
label_275490:
    // 0x275490: 0xc76a  .word       0x0000C76A                   # slt         $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275490u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_275494:
    // 0x275494: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275494u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_275498:
    // 0x275498: 0x0  nop
    ctx->pc = 0x275498u;
    // NOP
label_27549c:
    // 0x27549c: 0x0  nop
    ctx->pc = 0x27549cu;
    // NOP
label_2754a0:
    // 0x2754a0: 0xc772  tlt         $zero, $zero, 797
    ctx->pc = 0x2754a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2754a4:
    // 0x2754a4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x2754a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2754a8:
    // 0x2754a8: 0x0  nop
    ctx->pc = 0x2754a8u;
    // NOP
label_2754ac:
    // 0x2754ac: 0x0  nop
    ctx->pc = 0x2754acu;
    // NOP
label_2754b0:
    // 0x2754b0: 0xc784  .word       0x0000C784                   # sllv        $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754b0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2754b4:
    // 0x2754b4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2754b8:
    // 0x2754b8: 0x0  nop
    ctx->pc = 0x2754b8u;
    // NOP
label_2754bc:
    // 0x2754bc: 0x0  nop
    ctx->pc = 0x2754bcu;
    // NOP
label_2754c0:
    // 0x2754c0: 0xc796  .word       0x0000C796                   # dsrlv       $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2754c4:
    // 0x2754c4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x2754c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2754c8:
    // 0x2754c8: 0x0  nop
    ctx->pc = 0x2754c8u;
    // NOP
label_2754cc:
    // 0x2754cc: 0x0  nop
    ctx->pc = 0x2754ccu;
    // NOP
    ctx->pc = 0x2754d0u;
    return;
}
