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


void FUN_0019b8d0_part452(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x277c40u: goto label_277c40;
        case 0x277c44u: goto label_277c44;
        case 0x277c48u: goto label_277c48;
        case 0x277c4cu: goto label_277c4c;
        case 0x277c50u: goto label_277c50;
        case 0x277c54u: goto label_277c54;
        case 0x277c58u: goto label_277c58;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c60u: goto label_277c60;
        case 0x277c64u: goto label_277c64;
        case 0x277c68u: goto label_277c68;
        case 0x277c6cu: goto label_277c6c;
        case 0x277c70u: goto label_277c70;
        case 0x277c74u: goto label_277c74;
        case 0x277c78u: goto label_277c78;
        case 0x277c7cu: goto label_277c7c;
        case 0x277c80u: goto label_277c80;
        case 0x277c84u: goto label_277c84;
        case 0x277c88u: goto label_277c88;
        case 0x277c8cu: goto label_277c8c;
        case 0x277c90u: goto label_277c90;
        case 0x277c94u: goto label_277c94;
        case 0x277c98u: goto label_277c98;
        case 0x277c9cu: goto label_277c9c;
        case 0x277ca0u: goto label_277ca0;
        case 0x277ca4u: goto label_277ca4;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cacu: goto label_277cac;
        case 0x277cb0u: goto label_277cb0;
        case 0x277cb4u: goto label_277cb4;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cbcu: goto label_277cbc;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cc4u: goto label_277cc4;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cccu: goto label_277ccc;
        case 0x277cd0u: goto label_277cd0;
        case 0x277cd4u: goto label_277cd4;
        case 0x277cd8u: goto label_277cd8;
        case 0x277cdcu: goto label_277cdc;
        case 0x277ce0u: goto label_277ce0;
        case 0x277ce4u: goto label_277ce4;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cecu: goto label_277cec;
        case 0x277cf0u: goto label_277cf0;
        case 0x277cf4u: goto label_277cf4;
        case 0x277cf8u: goto label_277cf8;
        case 0x277cfcu: goto label_277cfc;
        case 0x277d00u: goto label_277d00;
        case 0x277d04u: goto label_277d04;
        case 0x277d08u: goto label_277d08;
        case 0x277d0cu: goto label_277d0c;
        case 0x277d10u: goto label_277d10;
        case 0x277d14u: goto label_277d14;
        case 0x277d18u: goto label_277d18;
        case 0x277d1cu: goto label_277d1c;
        case 0x277d20u: goto label_277d20;
        case 0x277d24u: goto label_277d24;
        case 0x277d28u: goto label_277d28;
        case 0x277d2cu: goto label_277d2c;
        case 0x277d30u: goto label_277d30;
        case 0x277d34u: goto label_277d34;
        case 0x277d38u: goto label_277d38;
        case 0x277d3cu: goto label_277d3c;
        case 0x277d40u: goto label_277d40;
        case 0x277d44u: goto label_277d44;
        case 0x277d48u: goto label_277d48;
        case 0x277d4cu: goto label_277d4c;
        case 0x277d50u: goto label_277d50;
        case 0x277d54u: goto label_277d54;
        case 0x277d58u: goto label_277d58;
        case 0x277d5cu: goto label_277d5c;
        case 0x277d60u: goto label_277d60;
        case 0x277d64u: goto label_277d64;
        case 0x277d68u: goto label_277d68;
        case 0x277d6cu: goto label_277d6c;
        case 0x277d70u: goto label_277d70;
        case 0x277d74u: goto label_277d74;
        case 0x277d78u: goto label_277d78;
        case 0x277d7cu: goto label_277d7c;
        case 0x277d80u: goto label_277d80;
        case 0x277d84u: goto label_277d84;
        case 0x277d88u: goto label_277d88;
        case 0x277d8cu: goto label_277d8c;
        case 0x277d90u: goto label_277d90;
        case 0x277d94u: goto label_277d94;
        case 0x277d98u: goto label_277d98;
        case 0x277d9cu: goto label_277d9c;
        case 0x277da0u: goto label_277da0;
        case 0x277da4u: goto label_277da4;
        case 0x277da8u: goto label_277da8;
        case 0x277dacu: goto label_277dac;
        case 0x277db0u: goto label_277db0;
        case 0x277db4u: goto label_277db4;
        case 0x277db8u: goto label_277db8;
        case 0x277dbcu: goto label_277dbc;
        case 0x277dc0u: goto label_277dc0;
        case 0x277dc4u: goto label_277dc4;
        case 0x277dc8u: goto label_277dc8;
        case 0x277dccu: goto label_277dcc;
        case 0x277dd0u: goto label_277dd0;
        case 0x277dd4u: goto label_277dd4;
        case 0x277dd8u: goto label_277dd8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277de0u: goto label_277de0;
        case 0x277de4u: goto label_277de4;
        case 0x277de8u: goto label_277de8;
        case 0x277decu: goto label_277dec;
        case 0x277df0u: goto label_277df0;
        case 0x277df4u: goto label_277df4;
        case 0x277df8u: goto label_277df8;
        case 0x277dfcu: goto label_277dfc;
        case 0x277e00u: goto label_277e00;
        case 0x277e04u: goto label_277e04;
        case 0x277e08u: goto label_277e08;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e10u: goto label_277e10;
        case 0x277e14u: goto label_277e14;
        case 0x277e18u: goto label_277e18;
        case 0x277e1cu: goto label_277e1c;
        case 0x277e20u: goto label_277e20;
        case 0x277e24u: goto label_277e24;
        case 0x277e28u: goto label_277e28;
        case 0x277e2cu: goto label_277e2c;
        case 0x277e30u: goto label_277e30;
        case 0x277e34u: goto label_277e34;
        case 0x277e38u: goto label_277e38;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e40u: goto label_277e40;
        case 0x277e44u: goto label_277e44;
        case 0x277e48u: goto label_277e48;
        case 0x277e4cu: goto label_277e4c;
        case 0x277e50u: goto label_277e50;
        case 0x277e54u: goto label_277e54;
        case 0x277e58u: goto label_277e58;
        case 0x277e5cu: goto label_277e5c;
        case 0x277e60u: goto label_277e60;
        case 0x277e64u: goto label_277e64;
        case 0x277e68u: goto label_277e68;
        case 0x277e6cu: goto label_277e6c;
        case 0x277e70u: goto label_277e70;
        case 0x277e74u: goto label_277e74;
        case 0x277e78u: goto label_277e78;
        case 0x277e7cu: goto label_277e7c;
        case 0x277e80u: goto label_277e80;
        case 0x277e84u: goto label_277e84;
        case 0x277e88u: goto label_277e88;
        case 0x277e8cu: goto label_277e8c;
        case 0x277e90u: goto label_277e90;
        case 0x277e94u: goto label_277e94;
        case 0x277e98u: goto label_277e98;
        case 0x277e9cu: goto label_277e9c;
        case 0x277ea0u: goto label_277ea0;
        case 0x277ea4u: goto label_277ea4;
        case 0x277ea8u: goto label_277ea8;
        case 0x277eacu: goto label_277eac;
        case 0x277eb0u: goto label_277eb0;
        case 0x277eb4u: goto label_277eb4;
        case 0x277eb8u: goto label_277eb8;
        case 0x277ebcu: goto label_277ebc;
        case 0x277ec0u: goto label_277ec0;
        case 0x277ec4u: goto label_277ec4;
        case 0x277ec8u: goto label_277ec8;
        case 0x277eccu: goto label_277ecc;
        case 0x277ed0u: goto label_277ed0;
        case 0x277ed4u: goto label_277ed4;
        case 0x277ed8u: goto label_277ed8;
        case 0x277edcu: goto label_277edc;
        case 0x277ee0u: goto label_277ee0;
        case 0x277ee4u: goto label_277ee4;
        case 0x277ee8u: goto label_277ee8;
        case 0x277eecu: goto label_277eec;
        case 0x277ef0u: goto label_277ef0;
        case 0x277ef4u: goto label_277ef4;
        case 0x277ef8u: goto label_277ef8;
        case 0x277efcu: goto label_277efc;
        case 0x277f00u: goto label_277f00;
        case 0x277f04u: goto label_277f04;
        case 0x277f08u: goto label_277f08;
        case 0x277f0cu: goto label_277f0c;
        case 0x277f10u: goto label_277f10;
        case 0x277f14u: goto label_277f14;
        case 0x277f18u: goto label_277f18;
        case 0x277f1cu: goto label_277f1c;
        case 0x277f20u: goto label_277f20;
        case 0x277f24u: goto label_277f24;
        case 0x277f28u: goto label_277f28;
        case 0x277f2cu: goto label_277f2c;
        case 0x277f30u: goto label_277f30;
        case 0x277f34u: goto label_277f34;
        case 0x277f38u: goto label_277f38;
        case 0x277f3cu: goto label_277f3c;
        case 0x277f40u: goto label_277f40;
        case 0x277f44u: goto label_277f44;
        case 0x277f48u: goto label_277f48;
        case 0x277f4cu: goto label_277f4c;
        case 0x277f50u: goto label_277f50;
        case 0x277f54u: goto label_277f54;
        case 0x277f58u: goto label_277f58;
        case 0x277f5cu: goto label_277f5c;
        case 0x277f60u: goto label_277f60;
        case 0x277f64u: goto label_277f64;
        case 0x277f68u: goto label_277f68;
        case 0x277f6cu: goto label_277f6c;
        case 0x277f70u: goto label_277f70;
        case 0x277f74u: goto label_277f74;
        case 0x277f78u: goto label_277f78;
        case 0x277f7cu: goto label_277f7c;
        case 0x277f80u: goto label_277f80;
        case 0x277f84u: goto label_277f84;
        case 0x277f88u: goto label_277f88;
        case 0x277f8cu: goto label_277f8c;
        case 0x277f90u: goto label_277f90;
        case 0x277f94u: goto label_277f94;
        case 0x277f98u: goto label_277f98;
        case 0x277f9cu: goto label_277f9c;
        case 0x277fa0u: goto label_277fa0;
        case 0x277fa4u: goto label_277fa4;
        case 0x277fa8u: goto label_277fa8;
        case 0x277facu: goto label_277fac;
        case 0x277fb0u: goto label_277fb0;
        case 0x277fb4u: goto label_277fb4;
        case 0x277fb8u: goto label_277fb8;
        case 0x277fbcu: goto label_277fbc;
        case 0x277fc0u: goto label_277fc0;
        case 0x277fc4u: goto label_277fc4;
        case 0x277fc8u: goto label_277fc8;
        case 0x277fccu: goto label_277fcc;
        case 0x277fd0u: goto label_277fd0;
        case 0x277fd4u: goto label_277fd4;
        case 0x277fd8u: goto label_277fd8;
        case 0x277fdcu: goto label_277fdc;
        case 0x277fe0u: goto label_277fe0;
        case 0x277fe4u: goto label_277fe4;
        case 0x277fe8u: goto label_277fe8;
        case 0x277fecu: goto label_277fec;
        case 0x277ff0u: goto label_277ff0;
        case 0x277ff4u: goto label_277ff4;
        case 0x277ff8u: goto label_277ff8;
        case 0x277ffcu: goto label_277ffc;
        case 0x278000u: goto label_278000;
        case 0x278004u: goto label_278004;
        case 0x278008u: goto label_278008;
        case 0x27800cu: goto label_27800c;
        case 0x278010u: goto label_278010;
        case 0x278014u: goto label_278014;
        case 0x278018u: goto label_278018;
        case 0x27801cu: goto label_27801c;
        case 0x278020u: goto label_278020;
        case 0x278024u: goto label_278024;
        case 0x278028u: goto label_278028;
        case 0x27802cu: goto label_27802c;
        case 0x278030u: goto label_278030;
        case 0x278034u: goto label_278034;
        case 0x278038u: goto label_278038;
        case 0x27803cu: goto label_27803c;
        case 0x278040u: goto label_278040;
        case 0x278044u: goto label_278044;
        case 0x278048u: goto label_278048;
        case 0x27804cu: goto label_27804c;
        case 0x278050u: goto label_278050;
        case 0x278054u: goto label_278054;
        case 0x278058u: goto label_278058;
        case 0x27805cu: goto label_27805c;
        case 0x278060u: goto label_278060;
        case 0x278064u: goto label_278064;
        case 0x278068u: goto label_278068;
        case 0x27806cu: goto label_27806c;
        case 0x278070u: goto label_278070;
        case 0x278074u: goto label_278074;
        case 0x278078u: goto label_278078;
        case 0x27807cu: goto label_27807c;
        case 0x278080u: goto label_278080;
        case 0x278084u: goto label_278084;
        case 0x278088u: goto label_278088;
        case 0x27808cu: goto label_27808c;
        case 0x278090u: goto label_278090;
        case 0x278094u: goto label_278094;
        case 0x278098u: goto label_278098;
        case 0x27809cu: goto label_27809c;
        case 0x2780a0u: goto label_2780a0;
        case 0x2780a4u: goto label_2780a4;
        case 0x2780a8u: goto label_2780a8;
        case 0x2780acu: goto label_2780ac;
        case 0x2780b0u: goto label_2780b0;
        case 0x2780b4u: goto label_2780b4;
        case 0x2780b8u: goto label_2780b8;
        case 0x2780bcu: goto label_2780bc;
        case 0x2780c0u: goto label_2780c0;
        case 0x2780c4u: goto label_2780c4;
        case 0x2780c8u: goto label_2780c8;
        case 0x2780ccu: goto label_2780cc;
        case 0x2780d0u: goto label_2780d0;
        case 0x2780d4u: goto label_2780d4;
        case 0x2780d8u: goto label_2780d8;
        case 0x2780dcu: goto label_2780dc;
        case 0x2780e0u: goto label_2780e0;
        case 0x2780e4u: goto label_2780e4;
        case 0x2780e8u: goto label_2780e8;
        case 0x2780ecu: goto label_2780ec;
        case 0x2780f0u: goto label_2780f0;
        case 0x2780f4u: goto label_2780f4;
        case 0x2780f8u: goto label_2780f8;
        case 0x2780fcu: goto label_2780fc;
        case 0x278100u: goto label_278100;
        case 0x278104u: goto label_278104;
        case 0x278108u: goto label_278108;
        case 0x27810cu: goto label_27810c;
        case 0x278110u: goto label_278110;
        case 0x278114u: goto label_278114;
        case 0x278118u: goto label_278118;
        case 0x27811cu: goto label_27811c;
        case 0x278120u: goto label_278120;
        case 0x278124u: goto label_278124;
        case 0x278128u: goto label_278128;
        case 0x27812cu: goto label_27812c;
        case 0x278130u: goto label_278130;
        case 0x278134u: goto label_278134;
        case 0x278138u: goto label_278138;
        case 0x27813cu: goto label_27813c;
        case 0x278140u: goto label_278140;
        case 0x278144u: goto label_278144;
        case 0x278148u: goto label_278148;
        case 0x27814cu: goto label_27814c;
        case 0x278150u: goto label_278150;
        case 0x278154u: goto label_278154;
        case 0x278158u: goto label_278158;
        case 0x27815cu: goto label_27815c;
        case 0x278160u: goto label_278160;
        case 0x278164u: goto label_278164;
        case 0x278168u: goto label_278168;
        case 0x27816cu: goto label_27816c;
        case 0x278170u: goto label_278170;
        case 0x278174u: goto label_278174;
        case 0x278178u: goto label_278178;
        case 0x27817cu: goto label_27817c;
        case 0x278180u: goto label_278180;
        case 0x278184u: goto label_278184;
        case 0x278188u: goto label_278188;
        case 0x27818cu: goto label_27818c;
        case 0x278190u: goto label_278190;
        case 0x278194u: goto label_278194;
        case 0x278198u: goto label_278198;
        case 0x27819cu: goto label_27819c;
        case 0x2781a0u: goto label_2781a0;
        case 0x2781a4u: goto label_2781a4;
        case 0x2781a8u: goto label_2781a8;
        case 0x2781acu: goto label_2781ac;
        case 0x2781b0u: goto label_2781b0;
        case 0x2781b4u: goto label_2781b4;
        case 0x2781b8u: goto label_2781b8;
        case 0x2781bcu: goto label_2781bc;
        case 0x2781c0u: goto label_2781c0;
        case 0x2781c4u: goto label_2781c4;
        case 0x2781c8u: goto label_2781c8;
        case 0x2781ccu: goto label_2781cc;
        case 0x2781d0u: goto label_2781d0;
        case 0x2781d4u: goto label_2781d4;
        case 0x2781d8u: goto label_2781d8;
        case 0x2781dcu: goto label_2781dc;
        case 0x2781e0u: goto label_2781e0;
        case 0x2781e4u: goto label_2781e4;
        case 0x2781e8u: goto label_2781e8;
        case 0x2781ecu: goto label_2781ec;
        case 0x2781f0u: goto label_2781f0;
        case 0x2781f4u: goto label_2781f4;
        case 0x2781f8u: goto label_2781f8;
        case 0x2781fcu: goto label_2781fc;
        case 0x278200u: goto label_278200;
        case 0x278204u: goto label_278204;
        case 0x278208u: goto label_278208;
        case 0x27820cu: goto label_27820c;
        case 0x278210u: goto label_278210;
        case 0x278214u: goto label_278214;
        case 0x278218u: goto label_278218;
        case 0x27821cu: goto label_27821c;
        case 0x278220u: goto label_278220;
        case 0x278224u: goto label_278224;
        case 0x278228u: goto label_278228;
        case 0x27822cu: goto label_27822c;
        case 0x278230u: goto label_278230;
        case 0x278234u: goto label_278234;
        case 0x278238u: goto label_278238;
        case 0x27823cu: goto label_27823c;
        case 0x278240u: goto label_278240;
        case 0x278244u: goto label_278244;
        case 0x278248u: goto label_278248;
        case 0x27824cu: goto label_27824c;
        case 0x278250u: goto label_278250;
        case 0x278254u: goto label_278254;
        case 0x278258u: goto label_278258;
        case 0x27825cu: goto label_27825c;
        case 0x278260u: goto label_278260;
        case 0x278264u: goto label_278264;
        case 0x278268u: goto label_278268;
        case 0x27826cu: goto label_27826c;
        case 0x278270u: goto label_278270;
        case 0x278274u: goto label_278274;
        case 0x278278u: goto label_278278;
        case 0x27827cu: goto label_27827c;
        case 0x278280u: goto label_278280;
        case 0x278284u: goto label_278284;
        case 0x278288u: goto label_278288;
        case 0x27828cu: goto label_27828c;
        case 0x278290u: goto label_278290;
        case 0x278294u: goto label_278294;
        case 0x278298u: goto label_278298;
        case 0x27829cu: goto label_27829c;
        case 0x2782a0u: goto label_2782a0;
        case 0x2782a4u: goto label_2782a4;
        case 0x2782a8u: goto label_2782a8;
        case 0x2782acu: goto label_2782ac;
        case 0x2782b0u: goto label_2782b0;
        case 0x2782b4u: goto label_2782b4;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782bcu: goto label_2782bc;
        case 0x2782c0u: goto label_2782c0;
        case 0x2782c4u: goto label_2782c4;
        case 0x2782c8u: goto label_2782c8;
        case 0x2782ccu: goto label_2782cc;
        case 0x2782d0u: goto label_2782d0;
        case 0x2782d4u: goto label_2782d4;
        case 0x2782d8u: goto label_2782d8;
        case 0x2782dcu: goto label_2782dc;
        case 0x2782e0u: goto label_2782e0;
        case 0x2782e4u: goto label_2782e4;
        case 0x2782e8u: goto label_2782e8;
        case 0x2782ecu: goto label_2782ec;
        case 0x2782f0u: goto label_2782f0;
        case 0x2782f4u: goto label_2782f4;
        case 0x2782f8u: goto label_2782f8;
        case 0x2782fcu: goto label_2782fc;
        case 0x278300u: goto label_278300;
        case 0x278304u: goto label_278304;
        case 0x278308u: goto label_278308;
        case 0x27830cu: goto label_27830c;
        case 0x278310u: goto label_278310;
        case 0x278314u: goto label_278314;
        case 0x278318u: goto label_278318;
        case 0x27831cu: goto label_27831c;
        case 0x278320u: goto label_278320;
        case 0x278324u: goto label_278324;
        case 0x278328u: goto label_278328;
        case 0x27832cu: goto label_27832c;
        case 0x278330u: goto label_278330;
        case 0x278334u: goto label_278334;
        case 0x278338u: goto label_278338;
        case 0x27833cu: goto label_27833c;
        case 0x278340u: goto label_278340;
        case 0x278344u: goto label_278344;
        case 0x278348u: goto label_278348;
        case 0x27834cu: goto label_27834c;
        case 0x278350u: goto label_278350;
        case 0x278354u: goto label_278354;
        case 0x278358u: goto label_278358;
        case 0x27835cu: goto label_27835c;
        case 0x278360u: goto label_278360;
        case 0x278364u: goto label_278364;
        case 0x278368u: goto label_278368;
        case 0x27836cu: goto label_27836c;
        case 0x278370u: goto label_278370;
        case 0x278374u: goto label_278374;
        case 0x278378u: goto label_278378;
        case 0x27837cu: goto label_27837c;
        case 0x278380u: goto label_278380;
        case 0x278384u: goto label_278384;
        case 0x278388u: goto label_278388;
        case 0x27838cu: goto label_27838c;
        case 0x278390u: goto label_278390;
        case 0x278394u: goto label_278394;
        case 0x278398u: goto label_278398;
        case 0x27839cu: goto label_27839c;
        case 0x2783a0u: goto label_2783a0;
        case 0x2783a4u: goto label_2783a4;
        case 0x2783a8u: goto label_2783a8;
        case 0x2783acu: goto label_2783ac;
        case 0x2783b0u: goto label_2783b0;
        case 0x2783b4u: goto label_2783b4;
        case 0x2783b8u: goto label_2783b8;
        case 0x2783bcu: goto label_2783bc;
        case 0x2783c0u: goto label_2783c0;
        case 0x2783c4u: goto label_2783c4;
        case 0x2783c8u: goto label_2783c8;
        case 0x2783ccu: goto label_2783cc;
        case 0x2783d0u: goto label_2783d0;
        case 0x2783d4u: goto label_2783d4;
        case 0x2783d8u: goto label_2783d8;
        case 0x2783dcu: goto label_2783dc;
        case 0x2783e0u: goto label_2783e0;
        case 0x2783e4u: goto label_2783e4;
        case 0x2783e8u: goto label_2783e8;
        case 0x2783ecu: goto label_2783ec;
        case 0x2783f0u: goto label_2783f0;
        case 0x2783f4u: goto label_2783f4;
        case 0x2783f8u: goto label_2783f8;
        case 0x2783fcu: goto label_2783fc;
        case 0x278400u: goto label_278400;
        case 0x278404u: goto label_278404;
        case 0x278408u: goto label_278408;
        case 0x27840cu: goto label_27840c;
        default: return;
    }

label_277c40:
    // 0x277c40: 0xf039  .word       0x0000F039                   # INVALID     $zero, $zero, -0xFC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277C40 raw=0x0000F039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277c44:
    // 0x277c44: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277c48:
    // 0x277c48: 0x0  nop
    ctx->pc = 0x277c48u;
    // NOP
label_277c4c:
    // 0x277c4c: 0x0  nop
    ctx->pc = 0x277c4cu;
    // NOP
label_277c50:
    // 0x277c50: 0xf046  .word       0x0000F046                   # srlv        $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c50u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277c54:
    // 0x277c54: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_277c58:
    // 0x277c58: 0x0  nop
    ctx->pc = 0x277c58u;
    // NOP
label_277c5c:
    // 0x277c5c: 0x0  nop
    ctx->pc = 0x277c5cu;
    // NOP
label_277c60:
    // 0x277c60: 0xf04f  .word       0x0000F04F                   # sync # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_277c64:
    // 0x277c64: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x277c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277c68:
    // 0x277c68: 0x0  nop
    ctx->pc = 0x277c68u;
    // NOP
label_277c6c:
    // 0x277c6c: 0x0  nop
    ctx->pc = 0x277c6cu;
    // NOP
label_277c70:
    // 0x277c70: 0xf05a  .word       0x0000F05A                   # div         $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_277c74:
    // 0x277c74: 0x4120  .word       0x00004120                   # add         $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_277c78:
    // 0x277c78: 0x0  nop
    ctx->pc = 0x277c78u;
    // NOP
label_277c7c:
    // 0x277c7c: 0x0  nop
    ctx->pc = 0x277c7cu;
    // NOP
label_277c80:
    // 0x277c80: 0xf063  .word       0x0000F063                   # negu        $fp, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c80u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277c84:
    // 0x277c84: 0x61b0  tge         $zero, $zero, 390
    ctx->pc = 0x277c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277c88:
    // 0x277c88: 0x0  nop
    ctx->pc = 0x277c88u;
    // NOP
label_277c8c:
    // 0x277c8c: 0x0  nop
    ctx->pc = 0x277c8cu;
    // NOP
label_277c90:
    // 0x277c90: 0xf070  tge         $zero, $zero, 961
    ctx->pc = 0x277c90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277c94:
    // 0x277c94: 0x7730  tge         $zero, $zero, 476
    ctx->pc = 0x277c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277c98:
    // 0x277c98: 0x0  nop
    ctx->pc = 0x277c98u;
    // NOP
label_277c9c:
    // 0x277c9c: 0x0  nop
    ctx->pc = 0x277c9cu;
    // NOP
label_277ca0:
    // 0x277ca0: 0xf07f  dsra32      $fp, $zero, 1
    ctx->pc = 0x277ca0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 1));
label_277ca4:
    // 0x277ca4: 0x5b20  .word       0x00005B20                   # add         $t3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_277ca8:
    // 0x277ca8: 0x0  nop
    ctx->pc = 0x277ca8u;
    // NOP
label_277cac:
    // 0x277cac: 0x0  nop
    ctx->pc = 0x277cacu;
    // NOP
label_277cb0:
    // 0x277cb0: 0xf08b  .word       0x0000F08B                   # movn        $fp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277cb0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_277cb4:
    // 0x277cb4: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277cb8:
    // 0x277cb8: 0x0  nop
    ctx->pc = 0x277cb8u;
    // NOP
label_277cbc:
    // 0x277cbc: 0x0  nop
    ctx->pc = 0x277cbcu;
    // NOP
label_277cc0:
    // 0x277cc0: 0xf098  .word       0x0000F098                   # mult        $fp, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_277cc4:
    // 0x277cc4: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x277cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_277cc8:
    // 0x277cc8: 0x0  nop
    ctx->pc = 0x277cc8u;
    // NOP
label_277ccc:
    // 0x277ccc: 0x0  nop
    ctx->pc = 0x277cccu;
    // NOP
label_277cd0:
    // 0x277cd0: 0xf09e  .word       0x0000F09E                   # ddiv        $fp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x277CD0 raw=0x0000F09E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277cd4:
    // 0x277cd4: 0x2bb0  tge         $zero, $zero, 174
    ctx->pc = 0x277cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277cd8:
    // 0x277cd8: 0x0  nop
    ctx->pc = 0x277cd8u;
    // NOP
label_277cdc:
    // 0x277cdc: 0x0  nop
    ctx->pc = 0x277cdcu;
    // NOP
label_277ce0:
    // 0x277ce0: 0xf0a4  .word       0x0000F0A4                   # and         $fp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ce0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_277ce4:
    // 0x277ce4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_277ce8:
    // 0x277ce8: 0x0  nop
    ctx->pc = 0x277ce8u;
    // NOP
label_277cec:
    // 0x277cec: 0x0  nop
    ctx->pc = 0x277cecu;
    // NOP
label_277cf0:
    // 0x277cf0: 0xf0b7  .word       0x0000F0B7                   # INVALID     $zero, $zero, -0xF49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x277CF0 raw=0x0000F0B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277cf4:
    // 0x277cf4: 0x7360  .word       0x00007360                   # add         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277cf8:
    // 0x277cf8: 0x0  nop
    ctx->pc = 0x277cf8u;
    // NOP
label_277cfc:
    // 0x277cfc: 0x0  nop
    ctx->pc = 0x277cfcu;
    // NOP
label_277d00:
    // 0x277d00: 0xf0c6  .word       0x0000F0C6                   # srlv        $fp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d00u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277d04:
    // 0x277d04: 0x7b70  tge         $zero, $zero, 493
    ctx->pc = 0x277d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277d08:
    // 0x277d08: 0x0  nop
    ctx->pc = 0x277d08u;
    // NOP
label_277d0c:
    // 0x277d0c: 0x0  nop
    ctx->pc = 0x277d0cu;
    // NOP
label_277d10:
    // 0x277d10: 0xf0d6  .word       0x0000F0D6                   # dsrlv       $fp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_277d14:
    // 0x277d14: 0x5af0  tge         $zero, $zero, 363
    ctx->pc = 0x277d14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277d18:
    // 0x277d18: 0x0  nop
    ctx->pc = 0x277d18u;
    // NOP
label_277d1c:
    // 0x277d1c: 0x0  nop
    ctx->pc = 0x277d1cu;
    // NOP
label_277d20:
    // 0x277d20: 0xf0e2  .word       0x0000F0E2                   # neg         $fp, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_277d24:
    // 0x277d24: 0x4010  mfhi        $t0
    ctx->pc = 0x277d24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_277d28:
    // 0x277d28: 0x0  nop
    ctx->pc = 0x277d28u;
    // NOP
label_277d2c:
    // 0x277d2c: 0x0  nop
    ctx->pc = 0x277d2cu;
    // NOP
label_277d30:
    // 0x277d30: 0xf0eb  .word       0x0000F0EB                   # sltu        $fp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d30u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277d34:
    // 0x277d34: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_277d38:
    // 0x277d38: 0x0  nop
    ctx->pc = 0x277d38u;
    // NOP
label_277d3c:
    // 0x277d3c: 0x0  nop
    ctx->pc = 0x277d3cu;
    // NOP
label_277d40:
    // 0x277d40: 0xf0fb  dsra        $fp, $zero, 3
    ctx->pc = 0x277d40u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> 3);
label_277d44:
    // 0x277d44: 0x4710  .word       0x00004710                   # mfhi        $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d44u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_277d48:
    // 0x277d48: 0x0  nop
    ctx->pc = 0x277d48u;
    // NOP
label_277d4c:
    // 0x277d4c: 0x0  nop
    ctx->pc = 0x277d4cu;
    // NOP
label_277d50:
    // 0x277d50: 0xf104  .word       0x0000F104                   # sllv        $fp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d50u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277d54:
    // 0x277d54: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d54u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_277d58:
    // 0x277d58: 0x0  nop
    ctx->pc = 0x277d58u;
    // NOP
label_277d5c:
    // 0x277d5c: 0x0  nop
    ctx->pc = 0x277d5cu;
    // NOP
label_277d60:
    // 0x277d60: 0xf113  .word       0x0000F113                   # mtlo        $zero # 0000F100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d60u;
    ctx->lo = GPR_U64(ctx, 0);
label_277d64:
    // 0x277d64: 0x59b0  tge         $zero, $zero, 358
    ctx->pc = 0x277d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277d68:
    // 0x277d68: 0x0  nop
    ctx->pc = 0x277d68u;
    // NOP
label_277d6c:
    // 0x277d6c: 0x0  nop
    ctx->pc = 0x277d6cu;
    // NOP
label_277d70:
    // 0x277d70: 0xf11f  .word       0x0000F11F                   # ddivu       $fp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x277D70 raw=0x0000F11F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277d74:
    // 0x277d74: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_277d78:
    // 0x277d78: 0x0  nop
    ctx->pc = 0x277d78u;
    // NOP
label_277d7c:
    // 0x277d7c: 0x0  nop
    ctx->pc = 0x277d7cu;
    // NOP
label_277d80:
    // 0x277d80: 0xf12b  .word       0x0000F12B                   # sltu        $fp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d80u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277d84:
    // 0x277d84: 0x39b0  tge         $zero, $zero, 230
    ctx->pc = 0x277d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277d88:
    // 0x277d88: 0x0  nop
    ctx->pc = 0x277d88u;
    // NOP
label_277d8c:
    // 0x277d8c: 0x0  nop
    ctx->pc = 0x277d8cu;
    // NOP
label_277d90:
    // 0x277d90: 0xf133  tltu        $zero, $zero, 964
    ctx->pc = 0x277d90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277d94:
    // 0x277d94: 0x2fa0  .word       0x00002FA0                   # add         $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_277d98:
    // 0x277d98: 0x0  nop
    ctx->pc = 0x277d98u;
    // NOP
label_277d9c:
    // 0x277d9c: 0x0  nop
    ctx->pc = 0x277d9cu;
    // NOP
label_277da0:
    // 0x277da0: 0xf139  .word       0x0000F139                   # INVALID     $zero, $zero, -0xEC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277DA0 raw=0x0000F139"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277da4:
    // 0x277da4: 0x2a70  tge         $zero, $zero, 169
    ctx->pc = 0x277da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277da8:
    // 0x277da8: 0x0  nop
    ctx->pc = 0x277da8u;
    // NOP
label_277dac:
    // 0x277dac: 0x0  nop
    ctx->pc = 0x277dacu;
    // NOP
label_277db0:
    // 0x277db0: 0xf13f  dsra32      $fp, $zero, 4
    ctx->pc = 0x277db0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 4));
label_277db4:
    // 0x277db4: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_277db8:
    // 0x277db8: 0x0  nop
    ctx->pc = 0x277db8u;
    // NOP
label_277dbc:
    // 0x277dbc: 0x0  nop
    ctx->pc = 0x277dbcu;
    // NOP
label_277dc0:
    // 0x277dc0: 0xf147  .word       0x0000F147                   # srav        $fp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277dc0u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277dc4:
    // 0x277dc4: 0x4460  .word       0x00004460                   # add         $t0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_277dc8:
    // 0x277dc8: 0x0  nop
    ctx->pc = 0x277dc8u;
    // NOP
label_277dcc:
    // 0x277dcc: 0x0  nop
    ctx->pc = 0x277dccu;
    // NOP
label_277dd0:
    // 0x277dd0: 0xf150  .word       0x0000F150                   # mfhi        $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277dd0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_277dd4:
    // 0x277dd4: 0x66f0  tge         $zero, $zero, 411
    ctx->pc = 0x277dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277dd8:
    // 0x277dd8: 0x0  nop
    ctx->pc = 0x277dd8u;
    // NOP
label_277ddc:
    // 0x277ddc: 0x0  nop
    ctx->pc = 0x277ddcu;
    // NOP
label_277de0:
    // 0x277de0: 0xf15d  .word       0x0000F15D                   # dmultu      $zero, $zero # 0000F140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x277DE0 raw=0x0000F15D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277de4:
    // 0x277de4: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_277de8:
    // 0x277de8: 0x0  nop
    ctx->pc = 0x277de8u;
    // NOP
label_277dec:
    // 0x277dec: 0x0  nop
    ctx->pc = 0x277decu;
    // NOP
label_277df0:
    // 0x277df0: 0xf16b  .word       0x0000F16B                   # sltu        $fp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277df0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277df4:
    // 0x277df4: 0x9920  .word       0x00009920                   # add         $s3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_277df8:
    // 0x277df8: 0x0  nop
    ctx->pc = 0x277df8u;
    // NOP
label_277dfc:
    // 0x277dfc: 0x0  nop
    ctx->pc = 0x277dfcu;
    // NOP
label_277e00:
    // 0x277e00: 0xf17f  dsra32      $fp, $zero, 5
    ctx->pc = 0x277e00u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 5));
label_277e04:
    // 0x277e04: 0x7440  sll         $t6, $zero, 17
    ctx->pc = 0x277e04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_277e08:
    // 0x277e08: 0x0  nop
    ctx->pc = 0x277e08u;
    // NOP
label_277e0c:
    // 0x277e0c: 0x0  nop
    ctx->pc = 0x277e0cu;
    // NOP
label_277e10:
    // 0x277e10: 0xf18e  .word       0x0000F18E                   # INVALID     $zero, $zero, -0xE72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x277E10 raw=0x0000F18E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277e14:
    // 0x277e14: 0xa3c0  sll         $s4, $zero, 15
    ctx->pc = 0x277e14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_277e18:
    // 0x277e18: 0x0  nop
    ctx->pc = 0x277e18u;
    // NOP
label_277e1c:
    // 0x277e1c: 0x0  nop
    ctx->pc = 0x277e1cu;
    // NOP
label_277e20:
    // 0x277e20: 0xf1a3  .word       0x0000F1A3                   # negu        $fp, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e20u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277e24:
    // 0x277e24: 0x5c00  sll         $t3, $zero, 16
    ctx->pc = 0x277e24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_277e28:
    // 0x277e28: 0x0  nop
    ctx->pc = 0x277e28u;
    // NOP
label_277e2c:
    // 0x277e2c: 0x0  nop
    ctx->pc = 0x277e2cu;
    // NOP
label_277e30:
    // 0x277e30: 0xf1af  .word       0x0000F1AF                   # dsubu       $fp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_277e34:
    // 0x277e34: 0x97e0  .word       0x000097E0                   # add         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_277e38:
    // 0x277e38: 0x0  nop
    ctx->pc = 0x277e38u;
    // NOP
label_277e3c:
    // 0x277e3c: 0x0  nop
    ctx->pc = 0x277e3cu;
    // NOP
label_277e40:
    // 0x277e40: 0xf1c2  srl         $fp, $zero, 7
    ctx->pc = 0x277e40u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_277e44:
    // 0x277e44: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x277e44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_277e48:
    // 0x277e48: 0x0  nop
    ctx->pc = 0x277e48u;
    // NOP
label_277e4c:
    // 0x277e4c: 0x0  nop
    ctx->pc = 0x277e4cu;
    // NOP
label_277e50:
    // 0x277e50: 0xf1d1  .word       0x0000F1D1                   # mthi        $zero # 0000F1C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e50u;
    ctx->hi = GPR_U64(ctx, 0);
label_277e54:
    // 0x277e54: 0x1b40  sll         $v1, $zero, 13
    ctx->pc = 0x277e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_277e58:
    // 0x277e58: 0x0  nop
    ctx->pc = 0x277e58u;
    // NOP
label_277e5c:
    // 0x277e5c: 0x0  nop
    ctx->pc = 0x277e5cu;
    // NOP
label_277e60:
    // 0x277e60: 0xf1d5  .word       0x0000F1D5                   # INVALID     $zero, $zero, -0xE2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x277E60 raw=0x0000F1D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277e64:
    // 0x277e64: 0x3520  .word       0x00003520                   # add         $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_277e68:
    // 0x277e68: 0x0  nop
    ctx->pc = 0x277e68u;
    // NOP
label_277e6c:
    // 0x277e6c: 0x0  nop
    ctx->pc = 0x277e6cu;
    // NOP
label_277e70:
    // 0x277e70: 0xf1dc  .word       0x0000F1DC                   # dmult       $zero, $zero # 0000F1C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x277E70 raw=0x0000F1DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277e74:
    // 0x277e74: 0x4fd0  .word       0x00004FD0                   # mfhi        $t1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_277e78:
    // 0x277e78: 0x0  nop
    ctx->pc = 0x277e78u;
    // NOP
label_277e7c:
    // 0x277e7c: 0x0  nop
    ctx->pc = 0x277e7cu;
    // NOP
label_277e80:
    // 0x277e80: 0xf1e6  .word       0x0000F1E6                   # xor         $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_277e84:
    // 0x277e84: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x277e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277e88:
    // 0x277e88: 0x0  nop
    ctx->pc = 0x277e88u;
    // NOP
label_277e8c:
    // 0x277e8c: 0x0  nop
    ctx->pc = 0x277e8cu;
    // NOP
label_277e90:
    // 0x277e90: 0xf1f3  tltu        $zero, $zero, 967
    ctx->pc = 0x277e90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277e94:
    // 0x277e94: 0x28e0  .word       0x000028E0                   # add         $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_277e98:
    // 0x277e98: 0x0  nop
    ctx->pc = 0x277e98u;
    // NOP
label_277e9c:
    // 0x277e9c: 0x0  nop
    ctx->pc = 0x277e9cu;
    // NOP
label_277ea0:
    // 0x277ea0: 0xf1f9  .word       0x0000F1F9                   # INVALID     $zero, $zero, -0xE07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277EA0 raw=0x0000F1F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277ea4:
    // 0x277ea4: 0x8030  tge         $zero, $zero, 512
    ctx->pc = 0x277ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277ea8:
    // 0x277ea8: 0x0  nop
    ctx->pc = 0x277ea8u;
    // NOP
label_277eac:
    // 0x277eac: 0x0  nop
    ctx->pc = 0x277eacu;
    // NOP
label_277eb0:
    // 0x277eb0: 0xf20a  .word       0x0000F20A                   # movz        $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277eb0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_277eb4:
    // 0x277eb4: 0x3590  .word       0x00003590                   # mfhi        $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277eb4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277eb8:
    // 0x277eb8: 0x0  nop
    ctx->pc = 0x277eb8u;
    // NOP
label_277ebc:
    // 0x277ebc: 0x0  nop
    ctx->pc = 0x277ebcu;
    // NOP
label_277ec0:
    // 0x277ec0: 0xf211  .word       0x0000F211                   # mthi        $zero # 0000F200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ec0u;
    ctx->hi = GPR_U64(ctx, 0);
label_277ec4:
    // 0x277ec4: 0x8c00  sll         $s1, $zero, 16
    ctx->pc = 0x277ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_277ec8:
    // 0x277ec8: 0x0  nop
    ctx->pc = 0x277ec8u;
    // NOP
label_277ecc:
    // 0x277ecc: 0x0  nop
    ctx->pc = 0x277eccu;
    // NOP
label_277ed0:
    // 0x277ed0: 0xf223  .word       0x0000F223                   # negu        $fp, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ed0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277ed4:
    // 0x277ed4: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x277ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_277ed8:
    // 0x277ed8: 0x0  nop
    ctx->pc = 0x277ed8u;
    // NOP
label_277edc:
    // 0x277edc: 0x0  nop
    ctx->pc = 0x277edcu;
    // NOP
label_277ee0:
    // 0x277ee0: 0xf22a  .word       0x0000F22A                   # slt         $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ee0u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_277ee4:
    // 0x277ee4: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ee4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_277ee8:
    // 0x277ee8: 0x0  nop
    ctx->pc = 0x277ee8u;
    // NOP
label_277eec:
    // 0x277eec: 0x0  nop
    ctx->pc = 0x277eecu;
    // NOP
label_277ef0:
    // 0x277ef0: 0xf235  .word       0x0000F235                   # INVALID     $zero, $zero, -0xDCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x277EF0 raw=0x0000F235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277ef4:
    // 0x277ef4: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277ef8:
    // 0x277ef8: 0x0  nop
    ctx->pc = 0x277ef8u;
    // NOP
label_277efc:
    // 0x277efc: 0x0  nop
    ctx->pc = 0x277efcu;
    // NOP
label_277f00:
    // 0x277f00: 0xf242  srl         $fp, $zero, 9
    ctx->pc = 0x277f00u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_277f04:
    // 0x277f04: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x277f04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_277f08:
    // 0x277f08: 0x0  nop
    ctx->pc = 0x277f08u;
    // NOP
label_277f0c:
    // 0x277f0c: 0x0  nop
    ctx->pc = 0x277f0cu;
    // NOP
label_277f10:
    // 0x277f10: 0xf24f  .word       0x0000F24F                   # sync # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_277f14:
    // 0x277f14: 0x1a20  .word       0x00001A20                   # add         $v1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_277f18:
    // 0x277f18: 0x0  nop
    ctx->pc = 0x277f18u;
    // NOP
label_277f1c:
    // 0x277f1c: 0x0  nop
    ctx->pc = 0x277f1cu;
    // NOP
label_277f20:
    // 0x277f20: 0xf253  .word       0x0000F253                   # mtlo        $zero # 0000F240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f20u;
    ctx->lo = GPR_U64(ctx, 0);
label_277f24:
    // 0x277f24: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x277f24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_277f28:
    // 0x277f28: 0x0  nop
    ctx->pc = 0x277f28u;
    // NOP
label_277f2c:
    // 0x277f2c: 0x0  nop
    ctx->pc = 0x277f2cu;
    // NOP
label_277f30:
    // 0x277f30: 0xf25c  .word       0x0000F25C                   # dmult       $zero, $zero # 0000F240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x277F30 raw=0x0000F25C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277f34:
    // 0x277f34: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x277f34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_277f38:
    // 0x277f38: 0x0  nop
    ctx->pc = 0x277f38u;
    // NOP
label_277f3c:
    // 0x277f3c: 0x0  nop
    ctx->pc = 0x277f3cu;
    // NOP
label_277f40:
    // 0x277f40: 0xf265  .word       0x0000F265                   # move        $fp, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_277f44:
    // 0x277f44: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x277f44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_277f48:
    // 0x277f48: 0x0  nop
    ctx->pc = 0x277f48u;
    // NOP
label_277f4c:
    // 0x277f4c: 0x0  nop
    ctx->pc = 0x277f4cu;
    // NOP
label_277f50:
    // 0x277f50: 0xf26f  .word       0x0000F26F                   # dsubu       $fp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f50u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_277f54:
    // 0x277f54: 0x37b0  tge         $zero, $zero, 222
    ctx->pc = 0x277f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277f58:
    // 0x277f58: 0x0  nop
    ctx->pc = 0x277f58u;
    // NOP
label_277f5c:
    // 0x277f5c: 0x0  nop
    ctx->pc = 0x277f5cu;
    // NOP
label_277f60:
    // 0x277f60: 0xf276  tne         $zero, $zero, 969
    ctx->pc = 0x277f60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277f64:
    // 0x277f64: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x277f64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_277f68:
    // 0x277f68: 0x0  nop
    ctx->pc = 0x277f68u;
    // NOP
label_277f6c:
    // 0x277f6c: 0x0  nop
    ctx->pc = 0x277f6cu;
    // NOP
label_277f70:
    // 0x277f70: 0xf280  sll         $fp, $zero, 10
    ctx->pc = 0x277f70u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_277f74:
    // 0x277f74: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x277f74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_277f78:
    // 0x277f78: 0x0  nop
    ctx->pc = 0x277f78u;
    // NOP
label_277f7c:
    // 0x277f7c: 0x0  nop
    ctx->pc = 0x277f7cu;
    // NOP
label_277f80:
    // 0x277f80: 0xf293  .word       0x0000F293                   # mtlo        $zero # 0000F280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f80u;
    ctx->lo = GPR_U64(ctx, 0);
label_277f84:
    // 0x277f84: 0x9120  .word       0x00009120                   # add         $s2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_277f88:
    // 0x277f88: 0x0  nop
    ctx->pc = 0x277f88u;
    // NOP
label_277f8c:
    // 0x277f8c: 0x0  nop
    ctx->pc = 0x277f8cu;
    // NOP
label_277f90:
    // 0x277f90: 0xf2a6  .word       0x0000F2A6                   # xor         $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f90u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_277f94:
    // 0x277f94: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277f94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_277f98:
    // 0x277f98: 0x0  nop
    ctx->pc = 0x277f98u;
    // NOP
label_277f9c:
    // 0x277f9c: 0x0  nop
    ctx->pc = 0x277f9cu;
    // NOP
label_277fa0:
    // 0x277fa0: 0xf2bd  .word       0x0000F2BD                   # INVALID     $zero, $zero, -0xD43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277fa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x277FA0 raw=0x0000F2BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277fa4:
    // 0x277fa4: 0x9a40  sll         $s3, $zero, 9
    ctx->pc = 0x277fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_277fa8:
    // 0x277fa8: 0x0  nop
    ctx->pc = 0x277fa8u;
    // NOP
label_277fac:
    // 0x277fac: 0x0  nop
    ctx->pc = 0x277facu;
    // NOP
label_277fb0:
    // 0x277fb0: 0xf2d1  .word       0x0000F2D1                   # mthi        $zero # 0000F2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277fb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_277fb4:
    // 0x277fb4: 0x4cf0  tge         $zero, $zero, 307
    ctx->pc = 0x277fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277fb8:
    // 0x277fb8: 0x0  nop
    ctx->pc = 0x277fb8u;
    // NOP
label_277fbc:
    // 0x277fbc: 0x0  nop
    ctx->pc = 0x277fbcu;
    // NOP
label_277fc0:
    // 0x277fc0: 0xf2db  .word       0x0000F2DB                   # divu        $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277fc0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_277fc4:
    // 0x277fc4: 0x8060  .word       0x00008060                   # add         $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_277fc8:
    // 0x277fc8: 0x0  nop
    ctx->pc = 0x277fc8u;
    // NOP
label_277fcc:
    // 0x277fcc: 0x0  nop
    ctx->pc = 0x277fccu;
    // NOP
label_277fd0:
    // 0x277fd0: 0xf2ec  .word       0x0000F2EC                   # dadd        $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277fd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_277fd4:
    // 0x277fd4: 0x6630  tge         $zero, $zero, 408
    ctx->pc = 0x277fd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277fd8:
    // 0x277fd8: 0x0  nop
    ctx->pc = 0x277fd8u;
    // NOP
label_277fdc:
    // 0x277fdc: 0x0  nop
    ctx->pc = 0x277fdcu;
    // NOP
label_277fe0:
    // 0x277fe0: 0xf2f9  .word       0x0000F2F9                   # INVALID     $zero, $zero, -0xD07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277FE0 raw=0x0000F2F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277fe4:
    // 0x277fe4: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x277fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_277fe8:
    // 0x277fe8: 0x0  nop
    ctx->pc = 0x277fe8u;
    // NOP
label_277fec:
    // 0x277fec: 0x0  nop
    ctx->pc = 0x277fecu;
    // NOP
label_277ff0:
    // 0x277ff0: 0xf304  .word       0x0000F304                   # sllv        $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ff0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277ff4:
    // 0x277ff4: 0x3390  .word       0x00003390                   # mfhi        $a2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ff4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277ff8:
    // 0x277ff8: 0x0  nop
    ctx->pc = 0x277ff8u;
    // NOP
label_277ffc:
    // 0x277ffc: 0x0  nop
    ctx->pc = 0x277ffcu;
    // NOP
label_278000:
    // 0x278000: 0xf30b  .word       0x0000F30B                   # movn        $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278000u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_278004:
    // 0x278004: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x278004u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278008:
    // 0x278008: 0x0  nop
    ctx->pc = 0x278008u;
    // NOP
label_27800c:
    // 0x27800c: 0x0  nop
    ctx->pc = 0x27800cu;
    // NOP
label_278010:
    // 0x278010: 0xf31a  .word       0x0000F31A                   # div         $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278010u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_278014:
    // 0x278014: 0x7930  tge         $zero, $zero, 484
    ctx->pc = 0x278014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278018:
    // 0x278018: 0x0  nop
    ctx->pc = 0x278018u;
    // NOP
label_27801c:
    // 0x27801c: 0x0  nop
    ctx->pc = 0x27801cu;
    // NOP
label_278020:
    // 0x278020: 0xf32a  .word       0x0000F32A                   # slt         $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278020u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278024:
    // 0x278024: 0x6680  sll         $t4, $zero, 26
    ctx->pc = 0x278024u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_278028:
    // 0x278028: 0x0  nop
    ctx->pc = 0x278028u;
    // NOP
label_27802c:
    // 0x27802c: 0x0  nop
    ctx->pc = 0x27802cu;
    // NOP
label_278030:
    // 0x278030: 0xf337  .word       0x0000F337                   # INVALID     $zero, $zero, -0xCC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x278030 raw=0x0000F337"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278034:
    // 0x278034: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x278034u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_278038:
    // 0x278038: 0x0  nop
    ctx->pc = 0x278038u;
    // NOP
label_27803c:
    // 0x27803c: 0x0  nop
    ctx->pc = 0x27803cu;
    // NOP
label_278040:
    // 0x278040: 0xf346  .word       0x0000F346                   # srlv        $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278040u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278044:
    // 0x278044: 0x9730  tge         $zero, $zero, 604
    ctx->pc = 0x278044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278048:
    // 0x278048: 0x0  nop
    ctx->pc = 0x278048u;
    // NOP
label_27804c:
    // 0x27804c: 0x0  nop
    ctx->pc = 0x27804cu;
    // NOP
label_278050:
    // 0x278050: 0xf359  .word       0x0000F359                   # multu       $zero, $zero # 0000F340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278050u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_278054:
    // 0x278054: 0xa010  mfhi        $s4
    ctx->pc = 0x278054u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_278058:
    // 0x278058: 0x0  nop
    ctx->pc = 0x278058u;
    // NOP
label_27805c:
    // 0x27805c: 0x0  nop
    ctx->pc = 0x27805cu;
    // NOP
label_278060:
    // 0x278060: 0xf36e  .word       0x0000F36E                   # dsub        $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278060u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_278064:
    // 0x278064: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_278068:
    // 0x278068: 0x0  nop
    ctx->pc = 0x278068u;
    // NOP
label_27806c:
    // 0x27806c: 0x0  nop
    ctx->pc = 0x27806cu;
    // NOP
label_278070:
    // 0x278070: 0xf378  dsll        $fp, $zero, 13
    ctx->pc = 0x278070u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << 13);
label_278074:
    // 0x278074: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x278074u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_278078:
    // 0x278078: 0x0  nop
    ctx->pc = 0x278078u;
    // NOP
label_27807c:
    // 0x27807c: 0x0  nop
    ctx->pc = 0x27807cu;
    // NOP
label_278080:
    // 0x278080: 0xf381  .word       0x0000F381                   # INVALID     $zero, $zero, -0xC7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x278080 raw=0x0000F381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278084:
    // 0x278084: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278088:
    // 0x278088: 0x0  nop
    ctx->pc = 0x278088u;
    // NOP
label_27808c:
    // 0x27808c: 0x0  nop
    ctx->pc = 0x27808cu;
    // NOP
label_278090:
    // 0x278090: 0xf38e  .word       0x0000F38E                   # INVALID     $zero, $zero, -0xC72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278090 raw=0x0000F38E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278094:
    // 0x278094: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x278094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278098:
    // 0x278098: 0x0  nop
    ctx->pc = 0x278098u;
    // NOP
label_27809c:
    // 0x27809c: 0x0  nop
    ctx->pc = 0x27809cu;
    // NOP
label_2780a0:
    // 0x2780a0: 0xf39e  .word       0x0000F39E                   # ddiv        $fp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2780a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2780A0 raw=0x0000F39E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2780a4:
    // 0x2780a4: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x2780a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2780a8:
    // 0x2780a8: 0x0  nop
    ctx->pc = 0x2780a8u;
    // NOP
label_2780ac:
    // 0x2780ac: 0x0  nop
    ctx->pc = 0x2780acu;
    // NOP
label_2780b0:
    // 0x2780b0: 0xf3ab  .word       0x0000F3AB                   # sltu        $fp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2780b0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2780b4:
    // 0x2780b4: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2780b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2780b8:
    // 0x2780b8: 0x0  nop
    ctx->pc = 0x2780b8u;
    // NOP
label_2780bc:
    // 0x2780bc: 0x0  nop
    ctx->pc = 0x2780bcu;
    // NOP
label_2780c0:
    // 0x2780c0: 0xf3b3  tltu        $zero, $zero, 974
    ctx->pc = 0x2780c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2780c4:
    // 0x2780c4: 0x3a80  sll         $a3, $zero, 10
    ctx->pc = 0x2780c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2780c8:
    // 0x2780c8: 0x0  nop
    ctx->pc = 0x2780c8u;
    // NOP
label_2780cc:
    // 0x2780cc: 0x0  nop
    ctx->pc = 0x2780ccu;
    // NOP
label_2780d0:
    // 0x2780d0: 0xf3bb  dsra        $fp, $zero, 14
    ctx->pc = 0x2780d0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> 14);
label_2780d4:
    // 0x2780d4: 0x3c80  sll         $a3, $zero, 18
    ctx->pc = 0x2780d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2780d8:
    // 0x2780d8: 0x0  nop
    ctx->pc = 0x2780d8u;
    // NOP
label_2780dc:
    // 0x2780dc: 0x0  nop
    ctx->pc = 0x2780dcu;
    // NOP
label_2780e0:
    // 0x2780e0: 0xf3c3  sra         $fp, $zero, 15
    ctx->pc = 0x2780e0u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), 15));
label_2780e4:
    // 0x2780e4: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x2780e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_2780e8:
    // 0x2780e8: 0x0  nop
    ctx->pc = 0x2780e8u;
    // NOP
label_2780ec:
    // 0x2780ec: 0x0  nop
    ctx->pc = 0x2780ecu;
    // NOP
label_2780f0:
    // 0x2780f0: 0xf3ce  .word       0x0000F3CE                   # INVALID     $zero, $zero, -0xC32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2780f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2780F0 raw=0x0000F3CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2780f4:
    // 0x2780f4: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x2780f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2780f8:
    // 0x2780f8: 0x0  nop
    ctx->pc = 0x2780f8u;
    // NOP
label_2780fc:
    // 0x2780fc: 0x0  nop
    ctx->pc = 0x2780fcu;
    // NOP
label_278100:
    // 0x278100: 0xf3dc  .word       0x0000F3DC                   # dmult       $zero, $zero # 0000F3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x278100 raw=0x0000F3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278104:
    // 0x278104: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278104u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278108:
    // 0x278108: 0x0  nop
    ctx->pc = 0x278108u;
    // NOP
label_27810c:
    // 0x27810c: 0x0  nop
    ctx->pc = 0x27810cu;
    // NOP
label_278110:
    // 0x278110: 0xf3ea  .word       0x0000F3EA                   # slt         $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278110u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278114:
    // 0x278114: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278114u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_278118:
    // 0x278118: 0x0  nop
    ctx->pc = 0x278118u;
    // NOP
label_27811c:
    // 0x27811c: 0x0  nop
    ctx->pc = 0x27811cu;
    // NOP
label_278120:
    // 0x278120: 0xf3ff  dsra32      $fp, $zero, 15
    ctx->pc = 0x278120u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 15));
label_278124:
    // 0x278124: 0xa7c0  sll         $s4, $zero, 31
    ctx->pc = 0x278124u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278128:
    // 0x278128: 0x0  nop
    ctx->pc = 0x278128u;
    // NOP
label_27812c:
    // 0x27812c: 0x0  nop
    ctx->pc = 0x27812cu;
    // NOP
label_278130:
    // 0x278130: 0xf414  .word       0x0000F414                   # dsllv       $fp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278130u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_278134:
    // 0x278134: 0xa320  .word       0x0000A320                   # add         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_278138:
    // 0x278138: 0x0  nop
    ctx->pc = 0x278138u;
    // NOP
label_27813c:
    // 0x27813c: 0x0  nop
    ctx->pc = 0x27813cu;
    // NOP
label_278140:
    // 0x278140: 0xf429  .word       0x0000F429                   # mtsa        $zero # 0000F400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278140u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_278144:
    // 0x278144: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_278148:
    // 0x278148: 0x0  nop
    ctx->pc = 0x278148u;
    // NOP
label_27814c:
    // 0x27814c: 0x0  nop
    ctx->pc = 0x27814cu;
    // NOP
label_278150:
    // 0x278150: 0xf435  .word       0x0000F435                   # INVALID     $zero, $zero, -0xBCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x278150 raw=0x0000F435"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278154:
    // 0x278154: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x278154u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_278158:
    // 0x278158: 0x0  nop
    ctx->pc = 0x278158u;
    // NOP
label_27815c:
    // 0x27815c: 0x0  nop
    ctx->pc = 0x27815cu;
    // NOP
label_278160:
    // 0x278160: 0xf445  .word       0x0000F445                   # INVALID     $zero, $zero, -0xBBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x278160 raw=0x0000F445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278164:
    // 0x278164: 0x60a0  .word       0x000060A0                   # add         $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278168:
    // 0x278168: 0x0  nop
    ctx->pc = 0x278168u;
    // NOP
label_27816c:
    // 0x27816c: 0x0  nop
    ctx->pc = 0x27816cu;
    // NOP
label_278170:
    // 0x278170: 0xf452  .word       0x0000F452                   # mflo        $fp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278170u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_278174:
    // 0x278174: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278174u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_278178:
    // 0x278178: 0x0  nop
    ctx->pc = 0x278178u;
    // NOP
label_27817c:
    // 0x27817c: 0x0  nop
    ctx->pc = 0x27817cu;
    // NOP
label_278180:
    // 0x278180: 0xf468  .word       0x0000F468                   # mfsa        $fp # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278180u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_278184:
    // 0x278184: 0xb170  tge         $zero, $zero, 709
    ctx->pc = 0x278184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278188:
    // 0x278188: 0x0  nop
    ctx->pc = 0x278188u;
    // NOP
label_27818c:
    // 0x27818c: 0x0  nop
    ctx->pc = 0x27818cu;
    // NOP
label_278190:
    // 0x278190: 0xf47f  dsra32      $fp, $zero, 17
    ctx->pc = 0x278190u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 17));
label_278194:
    // 0x278194: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278194u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_278198:
    // 0x278198: 0x0  nop
    ctx->pc = 0x278198u;
    // NOP
label_27819c:
    // 0x27819c: 0x0  nop
    ctx->pc = 0x27819cu;
    // NOP
label_2781a0:
    // 0x2781a0: 0xf491  .word       0x0000F491                   # mthi        $zero # 0000F480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2781a4:
    // 0x2781a4: 0xbbf0  tge         $zero, $zero, 751
    ctx->pc = 0x2781a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2781a8:
    // 0x2781a8: 0x0  nop
    ctx->pc = 0x2781a8u;
    // NOP
label_2781ac:
    // 0x2781ac: 0x0  nop
    ctx->pc = 0x2781acu;
    // NOP
label_2781b0:
    // 0x2781b0: 0xf4a9  .word       0x0000F4A9                   # mtsa        $zero # 0000F480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2781b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2781b4:
    // 0x2781b4: 0xad60  .word       0x0000AD60                   # add         $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2781b8:
    // 0x2781b8: 0x0  nop
    ctx->pc = 0x2781b8u;
    // NOP
label_2781bc:
    // 0x2781bc: 0x0  nop
    ctx->pc = 0x2781bcu;
    // NOP
label_2781c0:
    // 0x2781c0: 0xf4bf  dsra32      $fp, $zero, 18
    ctx->pc = 0x2781c0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 18));
label_2781c4:
    // 0x2781c4: 0xbf60  .word       0x0000BF60                   # add         $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2781c8:
    // 0x2781c8: 0x0  nop
    ctx->pc = 0x2781c8u;
    // NOP
label_2781cc:
    // 0x2781cc: 0x0  nop
    ctx->pc = 0x2781ccu;
    // NOP
label_2781d0:
    // 0x2781d0: 0xf4d7  .word       0x0000F4D7                   # dsrav       $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781d0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2781d4:
    // 0x2781d4: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2781d8:
    // 0x2781d8: 0x0  nop
    ctx->pc = 0x2781d8u;
    // NOP
label_2781dc:
    // 0x2781dc: 0x0  nop
    ctx->pc = 0x2781dcu;
    // NOP
label_2781e0:
    // 0x2781e0: 0xf4e5  .word       0x0000F4E5                   # move        $fp, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2781e4:
    // 0x2781e4: 0xde10  .word       0x0000DE10                   # mfhi        $k1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2781e8:
    // 0x2781e8: 0x0  nop
    ctx->pc = 0x2781e8u;
    // NOP
label_2781ec:
    // 0x2781ec: 0x0  nop
    ctx->pc = 0x2781ecu;
    // NOP
label_2781f0:
    // 0x2781f0: 0xf501  .word       0x0000F501                   # INVALID     $zero, $zero, -0xAFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2781F0 raw=0x0000F501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2781f4:
    // 0x2781f4: 0xa140  sll         $s4, $zero, 5
    ctx->pc = 0x2781f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2781f8:
    // 0x2781f8: 0x0  nop
    ctx->pc = 0x2781f8u;
    // NOP
label_2781fc:
    // 0x2781fc: 0x0  nop
    ctx->pc = 0x2781fcu;
    // NOP
label_278200:
    // 0x278200: 0xf516  .word       0x0000F516                   # dsrlv       $fp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278204:
    // 0x278204: 0xf490  .word       0x0000F490                   # mfhi        $fp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278204u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_278208:
    // 0x278208: 0x0  nop
    ctx->pc = 0x278208u;
    // NOP
label_27820c:
    // 0x27820c: 0x0  nop
    ctx->pc = 0x27820cu;
    // NOP
label_278210:
    // 0x278210: 0xf535  .word       0x0000F535                   # INVALID     $zero, $zero, -0xACB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x278210 raw=0x0000F535"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278214:
    // 0x278214: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278214u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_278218:
    // 0x278218: 0x0  nop
    ctx->pc = 0x278218u;
    // NOP
label_27821c:
    // 0x27821c: 0x0  nop
    ctx->pc = 0x27821cu;
    // NOP
label_278220:
    // 0x278220: 0xf547  .word       0x0000F547                   # srav        $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278224:
    // 0x278224: 0x90c0  sll         $s2, $zero, 3
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_278228:
    // 0x278228: 0x0  nop
    ctx->pc = 0x278228u;
    // NOP
label_27822c:
    // 0x27822c: 0x0  nop
    ctx->pc = 0x27822cu;
    // NOP
label_278230:
    // 0x278230: 0xf55a  .word       0x0000F55A                   # div         $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278230u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_278234:
    // 0x278234: 0x85d0  .word       0x000085D0                   # mfhi        $s0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278234u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_278238:
    // 0x278238: 0x0  nop
    ctx->pc = 0x278238u;
    // NOP
label_27823c:
    // 0x27823c: 0x0  nop
    ctx->pc = 0x27823cu;
    // NOP
label_278240:
    // 0x278240: 0xf56b  .word       0x0000F56B                   # sltu        $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278240u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278244:
    // 0x278244: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x278244u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_278248:
    // 0x278248: 0x0  nop
    ctx->pc = 0x278248u;
    // NOP
label_27824c:
    // 0x27824c: 0x0  nop
    ctx->pc = 0x27824cu;
    // NOP
label_278250:
    // 0x278250: 0xf57a  dsrl        $fp, $zero, 21
    ctx->pc = 0x278250u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 21);
label_278254:
    // 0x278254: 0xbb40  sll         $s7, $zero, 13
    ctx->pc = 0x278254u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_278258:
    // 0x278258: 0x0  nop
    ctx->pc = 0x278258u;
    // NOP
label_27825c:
    // 0x27825c: 0x0  nop
    ctx->pc = 0x27825cu;
    // NOP
label_278260:
    // 0x278260: 0xf592  .word       0x0000F592                   # mflo        $fp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278260u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_278264:
    // 0x278264: 0x56b0  tge         $zero, $zero, 346
    ctx->pc = 0x278264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278268:
    // 0x278268: 0x0  nop
    ctx->pc = 0x278268u;
    // NOP
label_27826c:
    // 0x27826c: 0x0  nop
    ctx->pc = 0x27826cu;
    // NOP
label_278270:
    // 0x278270: 0xf59d  .word       0x0000F59D                   # dmultu      $zero, $zero # 0000F580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278270 raw=0x0000F59D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278274:
    // 0x278274: 0x9930  tge         $zero, $zero, 612
    ctx->pc = 0x278274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278278:
    // 0x278278: 0x0  nop
    ctx->pc = 0x278278u;
    // NOP
label_27827c:
    // 0x27827c: 0x0  nop
    ctx->pc = 0x27827cu;
    // NOP
label_278280:
    // 0x278280: 0xf5b1  tgeu        $zero, $zero, 982
    ctx->pc = 0x278280u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278284:
    // 0x278284: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x278284u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_278288:
    // 0x278288: 0x0  nop
    ctx->pc = 0x278288u;
    // NOP
label_27828c:
    // 0x27828c: 0x0  nop
    ctx->pc = 0x27828cu;
    // NOP
label_278290:
    // 0x278290: 0xf5c8  .word       0x0000F5C8                   # jr          $zero # 0000F5C0 <InstrIdType: CPU_SPECIAL>
label_278294:
    if (ctx->pc == 0x278294u) {
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0xc650  .word       0x0000C650                   # mfhi        $t8 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278298u;
        goto label_278298;
    }
    ctx->pc = 0x278290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0xc650  .word       0x0000C650                   # mfhi        $t8 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278290u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278298u;
label_278298:
    // 0x278298: 0x0  nop
    ctx->pc = 0x278298u;
    // NOP
label_27829c:
    // 0x27829c: 0x0  nop
    ctx->pc = 0x27829cu;
    // NOP
label_2782a0:
    // 0x2782a0: 0xf5e1  .word       0x0000F5E1                   # addu        $fp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2782a4:
    // 0x2782a4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x2782a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2782a8:
    // 0x2782a8: 0x0  nop
    ctx->pc = 0x2782a8u;
    // NOP
label_2782ac:
    // 0x2782ac: 0x0  nop
    ctx->pc = 0x2782acu;
    // NOP
label_2782b0:
    // 0x2782b0: 0xf5f8  dsll        $fp, $zero, 23
    ctx->pc = 0x2782b0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << 23);
label_2782b4:
    // 0x2782b4: 0xd280  sll         $k0, $zero, 10
    ctx->pc = 0x2782b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2782b8:
    // 0x2782b8: 0x0  nop
    ctx->pc = 0x2782b8u;
    // NOP
label_2782bc:
    // 0x2782bc: 0x0  nop
    ctx->pc = 0x2782bcu;
    // NOP
label_2782c0:
    // 0x2782c0: 0xf613  .word       0x0000F613                   # mtlo        $zero # 0000F600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2782c4:
    // 0x2782c4: 0xe5f0  tge         $zero, $zero, 919
    ctx->pc = 0x2782c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2782c8:
    // 0x2782c8: 0x0  nop
    ctx->pc = 0x2782c8u;
    // NOP
label_2782cc:
    // 0x2782cc: 0x0  nop
    ctx->pc = 0x2782ccu;
    // NOP
label_2782d0:
    // 0x2782d0: 0xf630  tge         $zero, $zero, 984
    ctx->pc = 0x2782d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2782d4:
    // 0x2782d4: 0x9e00  sll         $s3, $zero, 24
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2782d8:
    // 0x2782d8: 0x0  nop
    ctx->pc = 0x2782d8u;
    // NOP
label_2782dc:
    // 0x2782dc: 0x0  nop
    ctx->pc = 0x2782dcu;
    // NOP
label_2782e0:
    // 0x2782e0: 0xf644  .word       0x0000F644                   # sllv        $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2782e4:
    // 0x2782e4: 0xaee0  .word       0x0000AEE0                   # add         $s5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2782e8:
    // 0x2782e8: 0x0  nop
    ctx->pc = 0x2782e8u;
    // NOP
label_2782ec:
    // 0x2782ec: 0x0  nop
    ctx->pc = 0x2782ecu;
    // NOP
label_2782f0:
    // 0x2782f0: 0xf65a  .word       0x0000F65A                   # div         $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2782f4:
    // 0x2782f4: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2782f8:
    // 0x2782f8: 0x0  nop
    ctx->pc = 0x2782f8u;
    // NOP
label_2782fc:
    // 0x2782fc: 0x0  nop
    ctx->pc = 0x2782fcu;
    // NOP
label_278300:
    // 0x278300: 0xf667  .word       0x0000F667                   # not         $fp, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278300u;
    SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_278304:
    // 0x278304: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x278304u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_278308:
    // 0x278308: 0x0  nop
    ctx->pc = 0x278308u;
    // NOP
label_27830c:
    // 0x27830c: 0x0  nop
    ctx->pc = 0x27830cu;
    // NOP
label_278310:
    // 0x278310: 0xf670  tge         $zero, $zero, 985
    ctx->pc = 0x278310u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278314:
    // 0x278314: 0x4970  tge         $zero, $zero, 293
    ctx->pc = 0x278314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278318:
    // 0x278318: 0x0  nop
    ctx->pc = 0x278318u;
    // NOP
label_27831c:
    // 0x27831c: 0x0  nop
    ctx->pc = 0x27831cu;
    // NOP
label_278320:
    // 0x278320: 0xf67a  dsrl        $fp, $zero, 25
    ctx->pc = 0x278320u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 25);
label_278324:
    // 0x278324: 0x9a50  .word       0x00009A50                   # mfhi        $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278324u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_278328:
    // 0x278328: 0x0  nop
    ctx->pc = 0x278328u;
    // NOP
label_27832c:
    // 0x27832c: 0x0  nop
    ctx->pc = 0x27832cu;
    // NOP
label_278330:
    // 0x278330: 0xf68e  .word       0x0000F68E                   # INVALID     $zero, $zero, -0x972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278330 raw=0x0000F68E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278334:
    // 0x278334: 0x7bc0  sll         $t7, $zero, 15
    ctx->pc = 0x278334u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_278338:
    // 0x278338: 0x0  nop
    ctx->pc = 0x278338u;
    // NOP
label_27833c:
    // 0x27833c: 0x0  nop
    ctx->pc = 0x27833cu;
    // NOP
label_278340:
    // 0x278340: 0xf69e  .word       0x0000F69E                   # ddiv        $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278340 raw=0x0000F69E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278344:
    // 0x278344: 0x7580  sll         $t6, $zero, 22
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_278348:
    // 0x278348: 0x0  nop
    ctx->pc = 0x278348u;
    // NOP
label_27834c:
    // 0x27834c: 0x0  nop
    ctx->pc = 0x27834cu;
    // NOP
label_278350:
    // 0x278350: 0xf6ad  .word       0x0000F6AD                   # daddu       $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278354:
    // 0x278354: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_278358:
    // 0x278358: 0x0  nop
    ctx->pc = 0x278358u;
    // NOP
label_27835c:
    // 0x27835c: 0x0  nop
    ctx->pc = 0x27835cu;
    // NOP
label_278360:
    // 0x278360: 0xf6bb  dsra        $fp, $zero, 26
    ctx->pc = 0x278360u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> 26);
label_278364:
    // 0x278364: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278364u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278368:
    // 0x278368: 0x0  nop
    ctx->pc = 0x278368u;
    // NOP
label_27836c:
    // 0x27836c: 0x0  nop
    ctx->pc = 0x27836cu;
    // NOP
label_278370:
    // 0x278370: 0xf6c7  .word       0x0000F6C7                   # srav        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278374:
    // 0x278374: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x278374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278378:
    // 0x278378: 0x0  nop
    ctx->pc = 0x278378u;
    // NOP
label_27837c:
    // 0x27837c: 0x0  nop
    ctx->pc = 0x27837cu;
    // NOP
label_278380:
    // 0x278380: 0xf6d7  .word       0x0000F6D7                   # dsrav       $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278380u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278384:
    // 0x278384: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_278388:
    // 0x278388: 0x0  nop
    ctx->pc = 0x278388u;
    // NOP
label_27838c:
    // 0x27838c: 0x0  nop
    ctx->pc = 0x27838cu;
    // NOP
label_278390:
    // 0x278390: 0xf6e2  .word       0x0000F6E2                   # neg         $fp, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278390u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_278394:
    // 0x278394: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278398:
    // 0x278398: 0x0  nop
    ctx->pc = 0x278398u;
    // NOP
label_27839c:
    // 0x27839c: 0x0  nop
    ctx->pc = 0x27839cu;
    // NOP
label_2783a0:
    // 0x2783a0: 0xf6eb  .word       0x0000F6EB                   # sltu        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783a0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2783a4:
    // 0x2783a4: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2783a8:
    // 0x2783a8: 0x0  nop
    ctx->pc = 0x2783a8u;
    // NOP
label_2783ac:
    // 0x2783ac: 0x0  nop
    ctx->pc = 0x2783acu;
    // NOP
label_2783b0:
    // 0x2783b0: 0xf6ff  dsra32      $fp, $zero, 27
    ctx->pc = 0x2783b0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 27));
label_2783b4:
    // 0x2783b4: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x2783b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2783b8:
    // 0x2783b8: 0x0  nop
    ctx->pc = 0x2783b8u;
    // NOP
label_2783bc:
    // 0x2783bc: 0x0  nop
    ctx->pc = 0x2783bcu;
    // NOP
label_2783c0:
    // 0x2783c0: 0xf70e  .word       0x0000F70E                   # INVALID     $zero, $zero, -0x8F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2783C0 raw=0x0000F70E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2783c4:
    // 0x2783c4: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783c4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2783c8:
    // 0x2783c8: 0x0  nop
    ctx->pc = 0x2783c8u;
    // NOP
label_2783cc:
    // 0x2783cc: 0x0  nop
    ctx->pc = 0x2783ccu;
    // NOP
label_2783d0:
    // 0x2783d0: 0xf716  .word       0x0000F716                   # dsrlv       $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783d0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2783d4:
    // 0x2783d4: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2783d8:
    // 0x2783d8: 0x0  nop
    ctx->pc = 0x2783d8u;
    // NOP
label_2783dc:
    // 0x2783dc: 0x0  nop
    ctx->pc = 0x2783dcu;
    // NOP
label_2783e0:
    // 0x2783e0: 0xf722  .word       0x0000F722                   # neg         $fp, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2783e4:
    // 0x2783e4: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2783e8:
    // 0x2783e8: 0x0  nop
    ctx->pc = 0x2783e8u;
    // NOP
label_2783ec:
    // 0x2783ec: 0x0  nop
    ctx->pc = 0x2783ecu;
    // NOP
label_2783f0:
    // 0x2783f0: 0xf72b  .word       0x0000F72B                   # sltu        $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783f0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2783f4:
    // 0x2783f4: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2783f8:
    // 0x2783f8: 0x0  nop
    ctx->pc = 0x2783f8u;
    // NOP
label_2783fc:
    // 0x2783fc: 0x0  nop
    ctx->pc = 0x2783fcu;
    // NOP
label_278400:
    // 0x278400: 0xf734  teq         $zero, $zero, 988
    ctx->pc = 0x278400u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278404:
    // 0x278404: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_278408:
    // 0x278408: 0x0  nop
    ctx->pc = 0x278408u;
    // NOP
label_27840c:
    // 0x27840c: 0x0  nop
    ctx->pc = 0x27840cu;
    // NOP
    ctx->pc = 0x278410u;
    return;
}
