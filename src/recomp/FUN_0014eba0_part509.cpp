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


void FUN_0014eba0_part509(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246ddcu: goto label_246ddc;
        case 0x246de0u: goto label_246de0;
        case 0x246de4u: goto label_246de4;
        case 0x246de8u: goto label_246de8;
        case 0x246decu: goto label_246dec;
        case 0x246df0u: goto label_246df0;
        case 0x246df4u: goto label_246df4;
        case 0x246df8u: goto label_246df8;
        case 0x246dfcu: goto label_246dfc;
        case 0x246e00u: goto label_246e00;
        case 0x246e04u: goto label_246e04;
        case 0x246e08u: goto label_246e08;
        case 0x246e0cu: goto label_246e0c;
        case 0x246e10u: goto label_246e10;
        case 0x246e14u: goto label_246e14;
        case 0x246e18u: goto label_246e18;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e20u: goto label_246e20;
        case 0x246e24u: goto label_246e24;
        case 0x246e28u: goto label_246e28;
        case 0x246e2cu: goto label_246e2c;
        case 0x246e30u: goto label_246e30;
        case 0x246e34u: goto label_246e34;
        case 0x246e38u: goto label_246e38;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e40u: goto label_246e40;
        case 0x246e44u: goto label_246e44;
        case 0x246e48u: goto label_246e48;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e50u: goto label_246e50;
        case 0x246e54u: goto label_246e54;
        case 0x246e58u: goto label_246e58;
        case 0x246e5cu: goto label_246e5c;
        case 0x246e60u: goto label_246e60;
        case 0x246e64u: goto label_246e64;
        case 0x246e68u: goto label_246e68;
        case 0x246e6cu: goto label_246e6c;
        case 0x246e70u: goto label_246e70;
        case 0x246e74u: goto label_246e74;
        case 0x246e78u: goto label_246e78;
        case 0x246e7cu: goto label_246e7c;
        case 0x246e80u: goto label_246e80;
        case 0x246e84u: goto label_246e84;
        case 0x246e88u: goto label_246e88;
        case 0x246e8cu: goto label_246e8c;
        case 0x246e90u: goto label_246e90;
        case 0x246e94u: goto label_246e94;
        case 0x246e98u: goto label_246e98;
        case 0x246e9cu: goto label_246e9c;
        case 0x246ea0u: goto label_246ea0;
        case 0x246ea4u: goto label_246ea4;
        case 0x246ea8u: goto label_246ea8;
        case 0x246eacu: goto label_246eac;
        case 0x246eb0u: goto label_246eb0;
        case 0x246eb4u: goto label_246eb4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ec0u: goto label_246ec0;
        case 0x246ec4u: goto label_246ec4;
        case 0x246ec8u: goto label_246ec8;
        case 0x246eccu: goto label_246ecc;
        case 0x246ed0u: goto label_246ed0;
        case 0x246ed4u: goto label_246ed4;
        case 0x246ed8u: goto label_246ed8;
        case 0x246edcu: goto label_246edc;
        case 0x246ee0u: goto label_246ee0;
        case 0x246ee4u: goto label_246ee4;
        case 0x246ee8u: goto label_246ee8;
        case 0x246eecu: goto label_246eec;
        case 0x246ef0u: goto label_246ef0;
        case 0x246ef4u: goto label_246ef4;
        case 0x246ef8u: goto label_246ef8;
        case 0x246efcu: goto label_246efc;
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        case 0x246f0cu: goto label_246f0c;
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470bcu: goto label_2470bc;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470c4u: goto label_2470c4;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470d0u: goto label_2470d0;
        case 0x2470d4u: goto label_2470d4;
        case 0x2470d8u: goto label_2470d8;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e4u: goto label_2470e4;
        case 0x2470e8u: goto label_2470e8;
        case 0x2470ecu: goto label_2470ec;
        case 0x2470f0u: goto label_2470f0;
        case 0x2470f4u: goto label_2470f4;
        case 0x2470f8u: goto label_2470f8;
        case 0x2470fcu: goto label_2470fc;
        case 0x247100u: goto label_247100;
        case 0x247104u: goto label_247104;
        case 0x247108u: goto label_247108;
        case 0x24710cu: goto label_24710c;
        case 0x247110u: goto label_247110;
        case 0x247114u: goto label_247114;
        case 0x247118u: goto label_247118;
        case 0x24711cu: goto label_24711c;
        case 0x247120u: goto label_247120;
        case 0x247124u: goto label_247124;
        case 0x247128u: goto label_247128;
        case 0x24712cu: goto label_24712c;
        case 0x247130u: goto label_247130;
        case 0x247134u: goto label_247134;
        case 0x247138u: goto label_247138;
        case 0x24713cu: goto label_24713c;
        case 0x247140u: goto label_247140;
        case 0x247144u: goto label_247144;
        case 0x247148u: goto label_247148;
        case 0x24714cu: goto label_24714c;
        case 0x247150u: goto label_247150;
        case 0x247154u: goto label_247154;
        case 0x247158u: goto label_247158;
        case 0x24715cu: goto label_24715c;
        case 0x247160u: goto label_247160;
        case 0x247164u: goto label_247164;
        case 0x247168u: goto label_247168;
        case 0x24716cu: goto label_24716c;
        case 0x247170u: goto label_247170;
        case 0x247174u: goto label_247174;
        case 0x247178u: goto label_247178;
        case 0x24717cu: goto label_24717c;
        case 0x247180u: goto label_247180;
        case 0x247184u: goto label_247184;
        case 0x247188u: goto label_247188;
        case 0x24718cu: goto label_24718c;
        case 0x247190u: goto label_247190;
        case 0x247194u: goto label_247194;
        case 0x247198u: goto label_247198;
        case 0x24719cu: goto label_24719c;
        case 0x2471a0u: goto label_2471a0;
        case 0x2471a4u: goto label_2471a4;
        case 0x2471a8u: goto label_2471a8;
        case 0x2471acu: goto label_2471ac;
        case 0x2471b0u: goto label_2471b0;
        case 0x2471b4u: goto label_2471b4;
        case 0x2471b8u: goto label_2471b8;
        case 0x2471bcu: goto label_2471bc;
        case 0x2471c0u: goto label_2471c0;
        case 0x2471c4u: goto label_2471c4;
        case 0x2471c8u: goto label_2471c8;
        case 0x2471ccu: goto label_2471cc;
        case 0x2471d0u: goto label_2471d0;
        case 0x2471d4u: goto label_2471d4;
        case 0x2471d8u: goto label_2471d8;
        case 0x2471dcu: goto label_2471dc;
        case 0x2471e0u: goto label_2471e0;
        case 0x2471e4u: goto label_2471e4;
        case 0x2471e8u: goto label_2471e8;
        case 0x2471ecu: goto label_2471ec;
        case 0x2471f0u: goto label_2471f0;
        case 0x2471f4u: goto label_2471f4;
        case 0x2471f8u: goto label_2471f8;
        case 0x2471fcu: goto label_2471fc;
        case 0x247200u: goto label_247200;
        case 0x247204u: goto label_247204;
        case 0x247208u: goto label_247208;
        case 0x24720cu: goto label_24720c;
        case 0x247210u: goto label_247210;
        case 0x247214u: goto label_247214;
        case 0x247218u: goto label_247218;
        case 0x24721cu: goto label_24721c;
        case 0x247220u: goto label_247220;
        case 0x247224u: goto label_247224;
        case 0x247228u: goto label_247228;
        case 0x24722cu: goto label_24722c;
        case 0x247230u: goto label_247230;
        case 0x247234u: goto label_247234;
        case 0x247238u: goto label_247238;
        case 0x24723cu: goto label_24723c;
        case 0x247240u: goto label_247240;
        case 0x247244u: goto label_247244;
        case 0x247248u: goto label_247248;
        case 0x24724cu: goto label_24724c;
        case 0x247250u: goto label_247250;
        case 0x247254u: goto label_247254;
        case 0x247258u: goto label_247258;
        case 0x24725cu: goto label_24725c;
        case 0x247260u: goto label_247260;
        case 0x247264u: goto label_247264;
        case 0x247268u: goto label_247268;
        case 0x24726cu: goto label_24726c;
        case 0x247270u: goto label_247270;
        case 0x247274u: goto label_247274;
        case 0x247278u: goto label_247278;
        case 0x24727cu: goto label_24727c;
        case 0x247280u: goto label_247280;
        case 0x247284u: goto label_247284;
        case 0x247288u: goto label_247288;
        case 0x24728cu: goto label_24728c;
        case 0x247290u: goto label_247290;
        case 0x247294u: goto label_247294;
        case 0x247298u: goto label_247298;
        case 0x24729cu: goto label_24729c;
        case 0x2472a0u: goto label_2472a0;
        case 0x2472a4u: goto label_2472a4;
        case 0x2472a8u: goto label_2472a8;
        case 0x2472acu: goto label_2472ac;
        case 0x2472b0u: goto label_2472b0;
        case 0x2472b4u: goto label_2472b4;
        case 0x2472b8u: goto label_2472b8;
        case 0x2472bcu: goto label_2472bc;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472c4u: goto label_2472c4;
        case 0x2472c8u: goto label_2472c8;
        case 0x2472ccu: goto label_2472cc;
        case 0x2472d0u: goto label_2472d0;
        case 0x2472d4u: goto label_2472d4;
        case 0x2472d8u: goto label_2472d8;
        case 0x2472dcu: goto label_2472dc;
        case 0x2472e0u: goto label_2472e0;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472e8u: goto label_2472e8;
        case 0x2472ecu: goto label_2472ec;
        case 0x2472f0u: goto label_2472f0;
        case 0x2472f4u: goto label_2472f4;
        case 0x2472f8u: goto label_2472f8;
        case 0x2472fcu: goto label_2472fc;
        case 0x247300u: goto label_247300;
        case 0x247304u: goto label_247304;
        case 0x247308u: goto label_247308;
        case 0x24730cu: goto label_24730c;
        case 0x247310u: goto label_247310;
        case 0x247314u: goto label_247314;
        case 0x247318u: goto label_247318;
        case 0x24731cu: goto label_24731c;
        case 0x247320u: goto label_247320;
        case 0x247324u: goto label_247324;
        case 0x247328u: goto label_247328;
        case 0x24732cu: goto label_24732c;
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        default: return;
    }

label_246c60:
    // 0x246c60: 0x10000005  b           . + 4 + (0x5 << 2)
label_246c64:
    if (ctx->pc == 0x246C64u) {
        ctx->pc = 0x246C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C60u;
        // 0x246c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C68u;
        goto label_246c68;
    }
    ctx->pc = 0x246C60u;
    {
        const bool branch_taken_0x246c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C60u;
        // 0x246c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c60) {
            ctx->pc = 0x246C78u;
            goto label_246c78;
        }
    }
    ctx->pc = 0x246C68u;
label_246c68:
    // 0x246c68: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246c6c:
    // 0x246c6c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246c70:
    // 0x246c70: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246c74:
    // 0x246c74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246c74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246c78:
    // 0x246c78: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246c78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246c7c:
    // 0x246c7c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246c80:
    // 0x246c80: 0x9024eaf2  lbu         $a0, -0x150E($at)
    ctx->pc = 0x246c80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961906)));
label_246c84:
    // 0x246c84: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246c88:
    // 0x246c88: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246c88u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246c8c:
    // 0x246c8c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246c90:
    // 0x246c90: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246c90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246c94:
    // 0x246c94: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246c98:
    // 0x246c98: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246c9c:
    // 0x246c9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246ca0:
    if (ctx->pc == 0x246CA0u) {
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA4u;
        goto label_246ca4;
    }
    ctx->pc = 0x246C9Cu;
    {
        const bool branch_taken_0x246c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c9c) {
            ctx->pc = 0x246CACu;
            goto label_246cac;
        }
    }
    ctx->pc = 0x246CA4u;
label_246ca4:
    // 0x246ca4: 0x10000003  b           . + 4 + (0x3 << 2)
label_246ca8:
    if (ctx->pc == 0x246CA8u) {
        ctx->pc = 0x246CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA4u;
        // 0x246ca8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CACu;
        goto label_246cac;
    }
    ctx->pc = 0x246CA4u;
    {
        const bool branch_taken_0x246ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA4u;
        // 0x246ca8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ca4) {
            ctx->pc = 0x246CB4u;
            goto label_246cb4;
        }
    }
    ctx->pc = 0x246CACu;
label_246cac:
    // 0x246cac: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246cb0:
    // 0x246cb0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246cb4:
    // 0x246cb4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246cb8:
    // 0x246cb8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246cbc:
    // 0x246cbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246cc0:
    if (ctx->pc == 0x246CC0u) {
        ctx->pc = 0x246CC4u;
        goto label_246cc4;
    }
    ctx->pc = 0x246CBCu;
    {
        const bool branch_taken_0x246cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cbc) {
            ctx->pc = 0x246CCCu;
            goto label_246ccc;
        }
    }
    ctx->pc = 0x246CC4u;
label_246cc4:
    // 0x246cc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_246cc8:
    if (ctx->pc == 0x246CC8u) {
        ctx->pc = 0x246CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC4u;
        // 0x246cc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CCCu;
        goto label_246ccc;
    }
    ctx->pc = 0x246CC4u;
    {
        const bool branch_taken_0x246cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC4u;
        // 0x246cc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cc4) {
            ctx->pc = 0x246CDCu;
            goto label_246cdc;
        }
    }
    ctx->pc = 0x246CCCu;
label_246ccc:
    // 0x246ccc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246cd0:
    // 0x246cd0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246cd4:
    // 0x246cd4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246cd8:
    // 0x246cd8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246cd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246cdc:
    // 0x246cdc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246ce0:
    // 0x246ce0: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246ce4:
    // 0x246ce4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246ce4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246ce8:
    // 0x246ce8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246ce8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246cec:
    // 0x246cec: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246cf0:
    // 0x246cf0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246cf4:
    // 0x246cf4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246cf4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246cf8:
    // 0x246cf8: 0x18a000cd  blez        $a1, . + 4 + (0xCD << 2)
label_246cfc:
    if (ctx->pc == 0x246CFCu) {
        ctx->pc = 0x246D00u;
        goto label_246d00;
    }
    ctx->pc = 0x246CF8u;
    {
        const bool branch_taken_0x246cf8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246cf8) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246D00u;
label_246d00:
    // 0x246d00: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246d04:
    // 0x246d04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246d08:
    // 0x246d08: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246d08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246d0c:
    // 0x246d0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246d10:
    if (ctx->pc == 0x246D10u) {
        ctx->pc = 0x246D14u;
        goto label_246d14;
    }
    ctx->pc = 0x246D0Cu;
    {
        const bool branch_taken_0x246d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d0c) {
            ctx->pc = 0x246D1Cu;
            goto label_246d1c;
        }
    }
    ctx->pc = 0x246D14u;
label_246d14:
    // 0x246d14: 0x10000003  b           . + 4 + (0x3 << 2)
label_246d18:
    if (ctx->pc == 0x246D18u) {
        ctx->pc = 0x246D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D14u;
        // 0x246d18: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D1Cu;
        goto label_246d1c;
    }
    ctx->pc = 0x246D14u;
    {
        const bool branch_taken_0x246d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D14u;
        // 0x246d18: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d14) {
            ctx->pc = 0x246D24u;
            goto label_246d24;
        }
    }
    ctx->pc = 0x246D1Cu;
label_246d1c:
    // 0x246d1c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246d20:
    // 0x246d20: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246d20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246d24:
    // 0x246d24: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_246d28:
    if (ctx->pc == 0x246D28u) {
        ctx->pc = 0x246D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D24u;
        // 0x246d28: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D2Cu;
        goto label_246d2c;
    }
    ctx->pc = 0x246D24u;
    {
        const bool branch_taken_0x246d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D24u;
        // 0x246d28: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d24) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246D2Cu;
label_246d2c:
    // 0x246d2c: 0x24a4ff67  addiu       $a0, $a1, -0x99
    ctx->pc = 0x246d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967143));
label_246d30:
    // 0x246d30: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x246d30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_246d34:
    // 0x246d34: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_246d38:
    if (ctx->pc == 0x246D38u) {
        ctx->pc = 0x246D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D34u;
        // 0x246d38: 0x30e40008  andi        $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D3Cu;
        goto label_246d3c;
    }
    ctx->pc = 0x246D34u;
    {
        const bool branch_taken_0x246d34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x246D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D34u;
        // 0x246d38: 0x30e40008  andi        $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d34) {
            ctx->pc = 0x246D54u;
            goto label_246d54;
        }
    }
    ctx->pc = 0x246D3Cu;
label_246d3c:
    // 0x246d3c: 0x240400e7  addiu       $a0, $zero, 0xE7
    ctx->pc = 0x246d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_246d40:
    // 0x246d40: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_246d44:
    if (ctx->pc == 0x246D44u) {
        ctx->pc = 0x246D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D40u;
        // 0x246d44: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D48u;
        goto label_246d48;
    }
    ctx->pc = 0x246D40u;
    {
        const bool branch_taken_0x246d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x246D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D40u;
        // 0x246d44: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d40) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246D48u;
label_246d48:
    // 0x246d48: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_246d4c:
    if (ctx->pc == 0x246D4Cu) {
        ctx->pc = 0x246D50u;
        goto label_246d50;
    }
    ctx->pc = 0x246D48u;
    {
        const bool branch_taken_0x246d48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x246d48) {
            ctx->pc = 0x246E40u;
            goto label_246e40;
        }
    }
    ctx->pc = 0x246D50u;
label_246d50:
    // 0x246d50: 0x30e40008  andi        $a0, $a3, 0x8
    ctx->pc = 0x246d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_246d54:
    // 0x246d54: 0x148000b6  bnez        $a0, . + 4 + (0xB6 << 2)
label_246d58:
    if (ctx->pc == 0x246D58u) {
        ctx->pc = 0x246D5Cu;
        goto label_246d5c;
    }
    ctx->pc = 0x246D54u;
    {
        const bool branch_taken_0x246d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d54) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246D5Cu;
label_246d5c:
    // 0x246d5c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246d60:
    // 0x246d60: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x246d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_246d64:
    // 0x246d64: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246d68:
    // 0x246d68: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246d6c:
    // 0x246d6c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246d70:
    // 0x246d70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246d74:
    if (ctx->pc == 0x246D74u) {
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D78u;
        goto label_246d78;
    }
    ctx->pc = 0x246D70u;
    {
        const bool branch_taken_0x246d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d70) {
            ctx->pc = 0x246D80u;
            goto label_246d80;
        }
    }
    ctx->pc = 0x246D78u;
label_246d78:
    // 0x246d78: 0x10000004  b           . + 4 + (0x4 << 2)
label_246d7c:
    if (ctx->pc == 0x246D7Cu) {
        ctx->pc = 0x246D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D78u;
        // 0x246d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D80u;
        goto label_246d80;
    }
    ctx->pc = 0x246D78u;
    {
        const bool branch_taken_0x246d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D78u;
        // 0x246d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d78) {
            ctx->pc = 0x246D8Cu;
            goto label_246d8c;
        }
    }
    ctx->pc = 0x246D80u;
label_246d80:
    // 0x246d80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246d84:
    // 0x246d84: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246d88:
    // 0x246d88: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246d88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246d8c:
    // 0x246d8c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246d90:
    // 0x246d90: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246d94:
    // 0x246d94: 0x9024eaf3  lbu         $a0, -0x150D($at)
    ctx->pc = 0x246d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961907)));
label_246d98:
    // 0x246d98: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246d9c:
    // 0x246d9c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246d9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246da0:
    // 0x246da0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246da4:
    // 0x246da4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246da4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246da8:
    // 0x246da8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246dac:
    // 0x246dac: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246db0:
    // 0x246db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246db4:
    if (ctx->pc == 0x246DB4u) {
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB8u;
        goto label_246db8;
    }
    ctx->pc = 0x246DB0u;
    {
        const bool branch_taken_0x246db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246db0) {
            ctx->pc = 0x246DC0u;
            goto label_246dc0;
        }
    }
    ctx->pc = 0x246DB8u;
label_246db8:
    // 0x246db8: 0x10000003  b           . + 4 + (0x3 << 2)
label_246dbc:
    if (ctx->pc == 0x246DBCu) {
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB8u;
        // 0x246dbc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DC0u;
        goto label_246dc0;
    }
    ctx->pc = 0x246DB8u;
    {
        const bool branch_taken_0x246db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB8u;
        // 0x246dbc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246db8) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246DC0u;
label_246dc0:
    // 0x246dc0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246dc4:
    // 0x246dc4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246dc8:
    // 0x246dc8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246dcc:
    // 0x246dcc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246dd0:
    // 0x246dd0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246dd4:
    if (ctx->pc == 0x246DD4u) {
        ctx->pc = 0x246DD8u;
        goto label_246dd8;
    }
    ctx->pc = 0x246DD0u;
    {
        const bool branch_taken_0x246dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dd0) {
            ctx->pc = 0x246DE0u;
            goto label_246de0;
        }
    }
    ctx->pc = 0x246DD8u;
label_246dd8:
    // 0x246dd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_246ddc:
    if (ctx->pc == 0x246DDCu) {
        ctx->pc = 0x246DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DD8u;
        // 0x246ddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DE0u;
        goto label_246de0;
    }
    ctx->pc = 0x246DD8u;
    {
        const bool branch_taken_0x246dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DD8u;
        // 0x246ddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dd8) {
            ctx->pc = 0x246DF0u;
            goto label_246df0;
        }
    }
    ctx->pc = 0x246DE0u;
label_246de0:
    // 0x246de0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246de4:
    // 0x246de4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246de8:
    // 0x246de8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246dec:
    // 0x246dec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246decu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246df0:
    // 0x246df0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246df4:
    // 0x246df4: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246df8:
    // 0x246df8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246df8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246dfc:
    // 0x246dfc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246dfcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246e00:
    // 0x246e00: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246e04:
    // 0x246e04: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246e08:
    // 0x246e08: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246e08u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246e0c:
    // 0x246e0c: 0x18a00088  blez        $a1, . + 4 + (0x88 << 2)
label_246e10:
    if (ctx->pc == 0x246E10u) {
        ctx->pc = 0x246E14u;
        goto label_246e14;
    }
    ctx->pc = 0x246E0Cu;
    {
        const bool branch_taken_0x246e0c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246e0c) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246E14u;
label_246e14:
    // 0x246e14: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246e18:
    // 0x246e18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246e1c:
    // 0x246e1c: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246e20:
    // 0x246e20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246e24:
    if (ctx->pc == 0x246E24u) {
        ctx->pc = 0x246E28u;
        goto label_246e28;
    }
    ctx->pc = 0x246E20u;
    {
        const bool branch_taken_0x246e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e20) {
            ctx->pc = 0x246E30u;
            goto label_246e30;
        }
    }
    ctx->pc = 0x246E28u;
label_246e28:
    // 0x246e28: 0x10000003  b           . + 4 + (0x3 << 2)
label_246e2c:
    if (ctx->pc == 0x246E2Cu) {
        ctx->pc = 0x246E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E28u;
        // 0x246e2c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E30u;
        goto label_246e30;
    }
    ctx->pc = 0x246E28u;
    {
        const bool branch_taken_0x246e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E28u;
        // 0x246e2c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e28) {
            ctx->pc = 0x246E38u;
            goto label_246e38;
        }
    }
    ctx->pc = 0x246E30u;
label_246e30:
    // 0x246e30: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246e34:
    // 0x246e34: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246e38:
    // 0x246e38: 0x1000007d  b           . + 4 + (0x7D << 2)
label_246e3c:
    if (ctx->pc == 0x246E3Cu) {
        ctx->pc = 0x246E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E38u;
        // 0x246e3c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E40u;
        goto label_246e40;
    }
    ctx->pc = 0x246E38u;
    {
        const bool branch_taken_0x246e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E38u;
        // 0x246e3c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e38) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246E40u;
label_246e40:
    // 0x246e40: 0x24a4ff65  addiu       $a0, $a1, -0x9B
    ctx->pc = 0x246e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967141));
label_246e44:
    // 0x246e44: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x246e44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_246e48:
    // 0x246e48: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_246e4c:
    if (ctx->pc == 0x246E4Cu) {
        ctx->pc = 0x246E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E48u;
        // 0x246e4c: 0x30e40010  andi        $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E50u;
        goto label_246e50;
    }
    ctx->pc = 0x246E48u;
    {
        const bool branch_taken_0x246e48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x246E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E48u;
        // 0x246e4c: 0x30e40010  andi        $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e48) {
            ctx->pc = 0x246E60u;
            goto label_246e60;
        }
    }
    ctx->pc = 0x246E50u;
label_246e50:
    // 0x246e50: 0x240400e8  addiu       $a0, $zero, 0xE8
    ctx->pc = 0x246e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_246e54:
    // 0x246e54: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_246e58:
    if (ctx->pc == 0x246E58u) {
        ctx->pc = 0x246E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E54u;
        // 0x246e58: 0x30e40020  andi        $a0, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E5Cu;
        goto label_246e5c;
    }
    ctx->pc = 0x246E54u;
    {
        const bool branch_taken_0x246e54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x246E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E54u;
        // 0x246e58: 0x30e40020  andi        $a0, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e54) {
            ctx->pc = 0x246F4Cu;
            goto label_246f4c;
        }
    }
    ctx->pc = 0x246E5Cu;
label_246e5c:
    // 0x246e5c: 0x30e40010  andi        $a0, $a3, 0x10
    ctx->pc = 0x246e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_246e60:
    // 0x246e60: 0x14800073  bnez        $a0, . + 4 + (0x73 << 2)
label_246e64:
    if (ctx->pc == 0x246E64u) {
        ctx->pc = 0x246E68u;
        goto label_246e68;
    }
    ctx->pc = 0x246E60u;
    {
        const bool branch_taken_0x246e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e60) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246E68u;
label_246e68:
    // 0x246e68: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246e6c:
    // 0x246e6c: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x246e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_246e70:
    // 0x246e70: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246e74:
    // 0x246e74: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246e74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246e78:
    // 0x246e78: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246e7c:
    // 0x246e7c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246e80:
    if (ctx->pc == 0x246E80u) {
        ctx->pc = 0x246E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E7Cu;
        // 0x246e80: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E84u;
        goto label_246e84;
    }
    ctx->pc = 0x246E7Cu;
    {
        const bool branch_taken_0x246e7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E7Cu;
        // 0x246e80: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e7c) {
            ctx->pc = 0x246E8Cu;
            goto label_246e8c;
        }
    }
    ctx->pc = 0x246E84u;
label_246e84:
    // 0x246e84: 0x10000004  b           . + 4 + (0x4 << 2)
label_246e88:
    if (ctx->pc == 0x246E88u) {
        ctx->pc = 0x246E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E84u;
        // 0x246e88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E8Cu;
        goto label_246e8c;
    }
    ctx->pc = 0x246E84u;
    {
        const bool branch_taken_0x246e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E84u;
        // 0x246e88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e84) {
            ctx->pc = 0x246E98u;
            goto label_246e98;
        }
    }
    ctx->pc = 0x246E8Cu;
label_246e8c:
    // 0x246e8c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246e90:
    // 0x246e90: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246e94:
    // 0x246e94: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246e94u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246e98:
    // 0x246e98: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246e9c:
    // 0x246e9c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246ea0:
    // 0x246ea0: 0x9024eaf4  lbu         $a0, -0x150C($at)
    ctx->pc = 0x246ea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961908)));
label_246ea4:
    // 0x246ea4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246ea8:
    // 0x246ea8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246ea8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246eac:
    // 0x246eac: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246eb0:
    // 0x246eb0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246eb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246eb4:
    // 0x246eb4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246eb8:
    // 0x246eb8: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246eb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246ebc:
    // 0x246ebc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246ec0:
    if (ctx->pc == 0x246EC0u) {
        ctx->pc = 0x246EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EBCu;
        // 0x246ec0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EC4u;
        goto label_246ec4;
    }
    ctx->pc = 0x246EBCu;
    {
        const bool branch_taken_0x246ebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EBCu;
        // 0x246ec0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ebc) {
            ctx->pc = 0x246ECCu;
            goto label_246ecc;
        }
    }
    ctx->pc = 0x246EC4u;
label_246ec4:
    // 0x246ec4: 0x10000003  b           . + 4 + (0x3 << 2)
label_246ec8:
    if (ctx->pc == 0x246EC8u) {
        ctx->pc = 0x246EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC4u;
        // 0x246ec8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246ECCu;
        goto label_246ecc;
    }
    ctx->pc = 0x246EC4u;
    {
        const bool branch_taken_0x246ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC4u;
        // 0x246ec8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ec4) {
            ctx->pc = 0x246ED4u;
            goto label_246ed4;
        }
    }
    ctx->pc = 0x246ECCu;
label_246ecc:
    // 0x246ecc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246ed0:
    // 0x246ed0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246ed4:
    // 0x246ed4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246ed8:
    // 0x246ed8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246edc:
    // 0x246edc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246ee0:
    if (ctx->pc == 0x246EE0u) {
        ctx->pc = 0x246EE4u;
        goto label_246ee4;
    }
    ctx->pc = 0x246EDCu;
    {
        const bool branch_taken_0x246edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246edc) {
            ctx->pc = 0x246EECu;
            goto label_246eec;
        }
    }
    ctx->pc = 0x246EE4u;
label_246ee4:
    // 0x246ee4: 0x10000005  b           . + 4 + (0x5 << 2)
label_246ee8:
    if (ctx->pc == 0x246EE8u) {
        ctx->pc = 0x246EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EE4u;
        // 0x246ee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EECu;
        goto label_246eec;
    }
    ctx->pc = 0x246EE4u;
    {
        const bool branch_taken_0x246ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EE4u;
        // 0x246ee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ee4) {
            ctx->pc = 0x246EFCu;
            goto label_246efc;
        }
    }
    ctx->pc = 0x246EECu;
label_246eec:
    // 0x246eec: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246ef0:
    // 0x246ef0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246ef4:
    // 0x246ef4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246ef8:
    // 0x246ef8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246ef8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246efc:
    // 0x246efc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246f00:
    // 0x246f00: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246f04:
    // 0x246f04: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246f04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246f08:
    // 0x246f08: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246f0c:
    // 0x246f0c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246f10:
    // 0x246f10: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246f14:
    // 0x246f14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246f14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246f18:
    // 0x246f18: 0x18a00045  blez        $a1, . + 4 + (0x45 << 2)
label_246f1c:
    if (ctx->pc == 0x246F1Cu) {
        ctx->pc = 0x246F20u;
        goto label_246f20;
    }
    ctx->pc = 0x246F18u;
    {
        const bool branch_taken_0x246f18 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246f18) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F20u;
label_246f20:
    // 0x246f20: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246f24:
    // 0x246f24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246f28:
    // 0x246f28: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246f28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246f2c:
    // 0x246f2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246f30:
    if (ctx->pc == 0x246F30u) {
        ctx->pc = 0x246F34u;
        goto label_246f34;
    }
    ctx->pc = 0x246F2Cu;
    {
        const bool branch_taken_0x246f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f2c) {
            ctx->pc = 0x246F3Cu;
            goto label_246f3c;
        }
    }
    ctx->pc = 0x246F34u;
label_246f34:
    // 0x246f34: 0x10000003  b           . + 4 + (0x3 << 2)
label_246f38:
    if (ctx->pc == 0x246F38u) {
        ctx->pc = 0x246F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F34u;
        // 0x246f38: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F3Cu;
        goto label_246f3c;
    }
    ctx->pc = 0x246F34u;
    {
        const bool branch_taken_0x246f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F34u;
        // 0x246f38: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f34) {
            ctx->pc = 0x246F44u;
            goto label_246f44;
        }
    }
    ctx->pc = 0x246F3Cu;
label_246f3c:
    // 0x246f3c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246f40:
    // 0x246f40: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246f40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246f44:
    // 0x246f44: 0x1000003a  b           . + 4 + (0x3A << 2)
label_246f48:
    if (ctx->pc == 0x246F48u) {
        ctx->pc = 0x246F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F44u;
        // 0x246f48: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F4Cu;
        goto label_246f4c;
    }
    ctx->pc = 0x246F44u;
    {
        const bool branch_taken_0x246f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F44u;
        // 0x246f48: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f44) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F4Cu;
label_246f4c:
    // 0x246f4c: 0x14800038  bnez        $a0, . + 4 + (0x38 << 2)
label_246f50:
    if (ctx->pc == 0x246F50u) {
        ctx->pc = 0x246F54u;
        goto label_246f54;
    }
    ctx->pc = 0x246F4Cu;
    {
        const bool branch_taken_0x246f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f4c) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F54u;
label_246f54:
    // 0x246f54: 0x34e40020  ori         $a0, $a3, 0x20
    ctx->pc = 0x246f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
label_246f58:
    // 0x246f58: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246f5c:
    // 0x246f5c: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246f60:
    // 0x246f60: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246f64:
    // 0x246f64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246f68:
    if (ctx->pc == 0x246F68u) {
        ctx->pc = 0x246F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F64u;
        // 0x246f68: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F6Cu;
        goto label_246f6c;
    }
    ctx->pc = 0x246F64u;
    {
        const bool branch_taken_0x246f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F64u;
        // 0x246f68: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f64) {
            ctx->pc = 0x246F74u;
            goto label_246f74;
        }
    }
    ctx->pc = 0x246F6Cu;
label_246f6c:
    // 0x246f6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_246f70:
    if (ctx->pc == 0x246F70u) {
        ctx->pc = 0x246F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F6Cu;
        // 0x246f70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F74u;
        goto label_246f74;
    }
    ctx->pc = 0x246F6Cu;
    {
        const bool branch_taken_0x246f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F6Cu;
        // 0x246f70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f6c) {
            ctx->pc = 0x246F80u;
            goto label_246f80;
        }
    }
    ctx->pc = 0x246F74u;
label_246f74:
    // 0x246f74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246f78:
    // 0x246f78: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246f7c:
    // 0x246f7c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246f80:
    // 0x246f80: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246f84:
    // 0x246f84: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246f88:
    // 0x246f88: 0x9024eaf5  lbu         $a0, -0x150B($at)
    ctx->pc = 0x246f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961909)));
label_246f8c:
    // 0x246f8c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246f90:
    // 0x246f90: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246f90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246f94:
    // 0x246f94: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246f98:
    // 0x246f98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246f9c:
    // 0x246f9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246fa0:
    // 0x246fa0: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246fa4:
    // 0x246fa4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246fa8:
    if (ctx->pc == 0x246FA8u) {
        ctx->pc = 0x246FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA4u;
        // 0x246fa8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FACu;
        goto label_246fac;
    }
    ctx->pc = 0x246FA4u;
    {
        const bool branch_taken_0x246fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA4u;
        // 0x246fa8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fa4) {
            ctx->pc = 0x246FB4u;
            goto label_246fb4;
        }
    }
    ctx->pc = 0x246FACu;
label_246fac:
    // 0x246fac: 0x10000003  b           . + 4 + (0x3 << 2)
label_246fb0:
    if (ctx->pc == 0x246FB0u) {
        ctx->pc = 0x246FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FACu;
        // 0x246fb0: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FB4u;
        goto label_246fb4;
    }
    ctx->pc = 0x246FACu;
    {
        const bool branch_taken_0x246fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FACu;
        // 0x246fb0: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fac) {
            ctx->pc = 0x246FBCu;
            goto label_246fbc;
        }
    }
    ctx->pc = 0x246FB4u;
label_246fb4:
    // 0x246fb4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246fb8:
    // 0x246fb8: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246fbc:
    // 0x246fbc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246fc0:
    // 0x246fc0: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246fc4:
    // 0x246fc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246fc8:
    if (ctx->pc == 0x246FC8u) {
        ctx->pc = 0x246FCCu;
        goto label_246fcc;
    }
    ctx->pc = 0x246FC4u;
    {
        const bool branch_taken_0x246fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fc4) {
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FCCu;
label_246fcc:
    // 0x246fcc: 0x10000005  b           . + 4 + (0x5 << 2)
label_246fd0:
    if (ctx->pc == 0x246FD0u) {
        ctx->pc = 0x246FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FCCu;
        // 0x246fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FD4u;
        goto label_246fd4;
    }
    ctx->pc = 0x246FCCu;
    {
        const bool branch_taken_0x246fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FCCu;
        // 0x246fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fcc) {
            ctx->pc = 0x246FE4u;
            goto label_246fe4;
        }
    }
    ctx->pc = 0x246FD4u;
label_246fd4:
    // 0x246fd4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246fd8:
    // 0x246fd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246fdc:
    // 0x246fdc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246fe0:
    // 0x246fe0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246fe0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246fe4:
    // 0x246fe4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246fe8:
    // 0x246fe8: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246fec:
    // 0x246fec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246fecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246ff0:
    // 0x246ff0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246ff0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246ff4:
    // 0x246ff4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246ff8:
    // 0x246ff8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246ffc:
    // 0x246ffc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246ffcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_247000:
    // 0x247000: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
label_247004:
    if (ctx->pc == 0x247004u) {
        ctx->pc = 0x247008u;
        goto label_247008;
    }
    ctx->pc = 0x247000u;
    {
        const bool branch_taken_0x247000 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x247000) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x247008u;
label_247008:
    // 0x247008: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x247008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_24700c:
    // 0x24700c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_247010:
    // 0x247010: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x247010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_247014:
    // 0x247014: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_247018:
    if (ctx->pc == 0x247018u) {
        ctx->pc = 0x24701Cu;
        goto label_24701c;
    }
    ctx->pc = 0x247014u;
    {
        const bool branch_taken_0x247014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x247014) {
            ctx->pc = 0x247024u;
            goto label_247024;
        }
    }
    ctx->pc = 0x24701Cu;
label_24701c:
    // 0x24701c: 0x10000003  b           . + 4 + (0x3 << 2)
label_247020:
    if (ctx->pc == 0x247020u) {
        ctx->pc = 0x247020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24701Cu;
        // 0x247020: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247024u;
        goto label_247024;
    }
    ctx->pc = 0x24701Cu;
    {
        const bool branch_taken_0x24701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24701Cu;
        // 0x247020: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24701c) {
            ctx->pc = 0x24702Cu;
            goto label_24702c;
        }
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x247024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_247028:
    // 0x247028: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x247028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_24702c:
    // 0x24702c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x24702cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_247030:
    // 0x247030: 0x3e00008  jr          $ra
label_247034:
    if (ctx->pc == 0x247034u) {
        ctx->pc = 0x247038u;
        goto label_247038;
    }
    ctx->pc = 0x247030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247038u;
label_247038:
    // 0x247038: 0x0  nop
    ctx->pc = 0x247038u;
    // NOP
label_24703c:
    // 0x24703c: 0x0  nop
    ctx->pc = 0x24703cu;
    // NOP
label_247040:
    // 0x247040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_247044:
    // 0x247044: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_247048:
    // 0x247048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24704c:
    // 0x24704c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_247050:
    // 0x247050: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_247054:
    // 0x247054: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_247058:
    if (ctx->pc == 0x247058u) {
        ctx->pc = 0x247058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247054u;
        // 0x247058: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24705Cu;
        goto label_24705c;
    }
    ctx->pc = 0x247054u;
    {
        const bool branch_taken_0x247054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x247058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247054u;
        // 0x247058: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247054) {
            ctx->pc = 0x247064u;
            goto label_247064;
        }
    }
    ctx->pc = 0x24705Cu;
label_24705c:
    // 0x24705c: 0x1000000a  b           . + 4 + (0xA << 2)
label_247060:
    if (ctx->pc == 0x247060u) {
        ctx->pc = 0x247060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24705Cu;
        // 0x247060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247064u;
        goto label_247064;
    }
    ctx->pc = 0x24705Cu;
    {
        const bool branch_taken_0x24705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24705Cu;
        // 0x247060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24705c) {
            ctx->pc = 0x247088u;
            goto label_247088;
        }
    }
    ctx->pc = 0x247064u;
label_247064:
    // 0x247064: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x247064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_247068:
    // 0x247068: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x247068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_24706c:
    // 0x24706c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247070:
    // 0x247070: 0xe4801084  swc1        $f0, 0x1084($a0)
    ctx->pc = 0x247070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4228), bits); }
label_247074:
    // 0x247074: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x247074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_247078:
    // 0x247078: 0x8c841080  lw          $a0, 0x1080($a0)
    ctx->pc = 0x247078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
label_24707c:
    // 0x24707c: 0xc18d864  jal         func_636190
label_247080:
    if (ctx->pc == 0x247080u) {
        ctx->pc = 0x247080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24707Cu;
        // 0x247080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247084u;
        goto label_247084;
    }
    ctx->pc = 0x24707Cu;
    SET_GPR_U32(ctx, 31, 0x247084u);
    ctx->pc = 0x247080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24707Cu;
    // 0x247080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636190u, 0x24707Cu, 0x247084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247084u;
label_247084:
    // 0x247084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247088:
    // 0x247088: 0x3e00008  jr          $ra
label_24708c:
    if (ctx->pc == 0x24708Cu) {
        ctx->pc = 0x24708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247088u;
        // 0x24708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247090u;
        goto label_247090;
    }
    ctx->pc = 0x247088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247088u;
        // 0x24708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247090u;
label_247090:
    // 0x247090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247094:
    // 0x247094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247098:
    // 0x247098: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24709c:
    // 0x24709c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2470a0:
    // 0x2470a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2470a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2470a4:
    // 0x2470a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2470a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2470a8:
    // 0x2470a8: 0xc18f690  jal         func_63DA40
label_2470ac:
    if (ctx->pc == 0x2470ACu) {
        ctx->pc = 0x2470ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A8u;
        // 0x2470ac: 0x24471060  addiu       $a3, $v0, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470B0u;
        goto label_2470b0;
    }
    ctx->pc = 0x2470A8u;
    SET_GPR_U32(ctx, 31, 0x2470B0u);
    ctx->pc = 0x2470ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470A8u;
    // 0x2470ac: 0x24471060  addiu       $a3, $v0, 0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DA40u, 0x2470A8u, 0x2470B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B0u;
label_2470b0:
    // 0x2470b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2470b4:
    // 0x2470b4: 0x3e00008  jr          $ra
label_2470b8:
    if (ctx->pc == 0x2470B8u) {
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470BCu;
        goto label_2470bc;
    }
    ctx->pc = 0x2470B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470BCu;
label_2470bc:
    // 0x2470bc: 0x0  nop
    ctx->pc = 0x2470bcu;
    // NOP
label_2470c0:
    // 0x2470c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2470c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2470c4:
    // 0x2470c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2470c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2470c8:
    // 0x2470c8: 0xc18f564  jal         func_63D590
label_2470cc:
    if (ctx->pc == 0x2470CCu) {
        ctx->pc = 0x2470CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470C8u;
        // 0x2470cc: 0x24841060  addiu       $a0, $a0, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470D0u;
        goto label_2470d0;
    }
    ctx->pc = 0x2470C8u;
    SET_GPR_U32(ctx, 31, 0x2470D0u);
    ctx->pc = 0x2470CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470C8u;
    // 0x2470cc: 0x24841060  addiu       $a0, $a0, 0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D590u, 0x2470C8u, 0x2470D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470D0u;
label_2470d0:
    // 0x2470d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2470d4:
    // 0x2470d4: 0x3e00008  jr          $ra
label_2470d8:
    if (ctx->pc == 0x2470D8u) {
        ctx->pc = 0x2470D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470D4u;
        // 0x2470d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470DCu;
        goto label_2470dc;
    }
    ctx->pc = 0x2470D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470D4u;
        // 0x2470d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470DCu;
label_2470dc:
    // 0x2470dc: 0x0  nop
    ctx->pc = 0x2470dcu;
    // NOP
label_2470e0:
    // 0x2470e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2470e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2470e4:
    // 0x2470e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2470e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2470e8:
    // 0x2470e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2470e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2470ec:
    // 0x2470ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2470ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2470f0:
    // 0x2470f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2470f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2470f4:
    // 0x2470f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2470f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2470f8:
    // 0x2470f8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2470f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2470fc:
    // 0x2470fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2470fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_247100:
    // 0x247100: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x247100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247104:
    // 0x247104: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x247104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_247108:
    // 0x247108: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x247108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24710c:
    // 0x24710c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_247110:
    // 0x247110: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x247110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_247114:
    // 0x247114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_247118:
    // 0x247118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24711c:
    // 0x24711c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247120:
    // 0x247120: 0xafa900ac  sw          $t1, 0xAC($sp)
    ctx->pc = 0x247120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 9));
label_247124:
    // 0x247124: 0x9513056c  lhu         $s3, 0x56C($t0)
    ctx->pc = 0x247124u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1388)));
label_247128:
    // 0x247128: 0xc17b02c  jal         func_5EC0B0
label_24712c:
    if (ctx->pc == 0x24712Cu) {
        ctx->pc = 0x24712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247128u;
        // 0x24712c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247130u;
        goto label_247130;
    }
    ctx->pc = 0x247128u;
    SET_GPR_U32(ctx, 31, 0x247130u);
    ctx->pc = 0x24712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247128u;
    // 0x24712c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5EC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5EC0B0u, 0x247128u, 0x247130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247130u;
label_247130:
    // 0x247130: 0x26a31060  addiu       $v1, $s5, 0x1060
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4192));
label_247134:
    // 0x247134: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_247138:
    // 0x247138: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x247138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
label_24713c:
    // 0x24713c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x24713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_247140:
    // 0x247140: 0xaeb3105c  sw          $s3, 0x105C($s5)
    ctx->pc = 0x247140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4188), GPR_U32(ctx, 19));
label_247144:
    // 0x247144: 0xaea01058  sw          $zero, 0x1058($s5)
    ctx->pc = 0x247144u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4184), GPR_U32(ctx, 0));
label_247148:
    // 0x247148: 0xaea01054  sw          $zero, 0x1054($s5)
    ctx->pc = 0x247148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4180), GPR_U32(ctx, 0));
label_24714c:
    // 0x24714c: 0xaea01050  sw          $zero, 0x1050($s5)
    ctx->pc = 0x24714cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4176), GPR_U32(ctx, 0));
label_247150:
    // 0x247150: 0xaea21084  sw          $v0, 0x1084($s5)
    ctx->pc = 0x247150u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4228), GPR_U32(ctx, 2));
label_247154:
    // 0x247154: 0xc1752f8  jal         func_5D4BE0
label_247158:
    if (ctx->pc == 0x247158u) {
        ctx->pc = 0x247158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247154u;
        // 0x247158: 0xaeb71088  sw          $s7, 0x1088($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4232), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24715Cu;
        goto label_24715c;
    }
    ctx->pc = 0x247154u;
    SET_GPR_U32(ctx, 31, 0x24715Cu);
    ctx->pc = 0x247158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247154u;
    // 0x247158: 0xaeb71088  sw          $s7, 0x1088($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4232), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247154u, 0x24715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24715Cu;
label_24715c:
    // 0x24715c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_247160:
    // 0x247160: 0x26a51060  addiu       $a1, $s5, 0x1060
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4192));
label_247164:
    // 0x247164: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x247164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247168:
    // 0x247168: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x247168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24716c:
    // 0x24716c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247170:
    // 0x247170: 0xc18f5d8  jal         func_63D760
label_247174:
    if (ctx->pc == 0x247174u) {
        ctx->pc = 0x247174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247170u;
        // 0x247174: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247178u;
        goto label_247178;
    }
    ctx->pc = 0x247170u;
    SET_GPR_U32(ctx, 31, 0x247178u);
    ctx->pc = 0x247174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247170u;
    // 0x247174: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D760u, 0x247170u, 0x247178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247178u;
label_247178:
    // 0x247178: 0xc1752f8  jal         func_5D4BE0
label_24717c:
    if (ctx->pc == 0x24717Cu) {
        ctx->pc = 0x247180u;
        goto label_247180;
    }
    ctx->pc = 0x247178u;
    SET_GPR_U32(ctx, 31, 0x247180u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247178u, 0x247180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247180u;
label_247180:
    // 0x247180: 0xc1780ec  jal         func_5E03B0
label_247184:
    if (ctx->pc == 0x247184u) {
        ctx->pc = 0x247184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247180u;
        // 0x247184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247188u;
        goto label_247188;
    }
    ctx->pc = 0x247180u;
    SET_GPR_U32(ctx, 31, 0x247188u);
    ctx->pc = 0x247184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247180u;
    // 0x247184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5E03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5E03B0u, 0x247180u, 0x247188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247188u;
label_247188:
    // 0x247188: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x247188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_24718c:
    // 0x24718c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_247190:
    if (ctx->pc == 0x247190u) {
        ctx->pc = 0x247190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24718Cu;
        // 0x247190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247194u;
        goto label_247194;
    }
    ctx->pc = 0x24718Cu;
    {
        const bool branch_taken_0x24718c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24718Cu;
        // 0x247190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24718c) {
            ctx->pc = 0x247208u;
            goto label_247208;
        }
    }
    ctx->pc = 0x247194u;
label_247194:
    // 0x247194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247198:
    // 0x247198: 0x3d11821  addu        $v1, $fp, $s1
    ctx->pc = 0x247198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_24719c:
    // 0x24719c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2471a0:
    // 0x2471a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2471a4:
    // 0x2471a4: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x2471a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_2471a8:
    // 0x2471a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2471a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2471ac:
    // 0x2471ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2471b0:
    // 0x2471b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2471b4:
    // 0x2471b4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2471b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2471b8:
    // 0x2471b8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2471b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2471bc:
    // 0x2471bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2471c0:
    if (ctx->pc == 0x2471C0u) {
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471C4u;
        goto label_2471c4;
    }
    ctx->pc = 0x2471BCu;
    {
        const bool branch_taken_0x2471bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471bc) {
            ctx->pc = 0x2471F4u;
            goto label_2471f4;
        }
    }
    ctx->pc = 0x2471C4u;
label_2471c4:
    // 0x2471c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2471c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2471c8:
    // 0x2471c8: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
label_2471cc:
    // 0x2471cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2471d0:
    // 0x2471d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2471d4:
    // 0x2471d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2471d8:
    if (ctx->pc == 0x2471D8u) {
        ctx->pc = 0x2471DCu;
        goto label_2471dc;
    }
    ctx->pc = 0x2471D4u;
    {
        const bool branch_taken_0x2471d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2471d4) {
            ctx->pc = 0x2471F4u;
            goto label_2471f4;
        }
    }
    ctx->pc = 0x2471DCu;
label_2471dc:
    // 0x2471dc: 0xc1752f8  jal         func_5D4BE0
label_2471e0:
    if (ctx->pc == 0x2471E0u) {
        ctx->pc = 0x2471E4u;
        goto label_2471e4;
    }
    ctx->pc = 0x2471DCu;
    SET_GPR_U32(ctx, 31, 0x2471E4u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x2471DCu, 0x2471E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471E4u;
label_2471e4:
    // 0x2471e4: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x2471e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2471e8:
    // 0x2471e8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2471e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2471ec:
    // 0x2471ec: 0xc175298  jal         func_5D4A60
label_2471f0:
    if (ctx->pc == 0x2471F0u) {
        ctx->pc = 0x2471F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471ECu;
        // 0x2471f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471F4u;
        goto label_2471f4;
    }
    ctx->pc = 0x2471ECu;
    SET_GPR_U32(ctx, 31, 0x2471F4u);
    ctx->pc = 0x2471F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471ECu;
    // 0x2471f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4A60u, 0x2471ECu, 0x2471F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471F4u;
label_2471f4:
    // 0x2471f4: 0x0  nop
    ctx->pc = 0x2471f4u;
    // NOP
label_2471f8:
    // 0x2471f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2471f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2471fc:
    // 0x2471fc: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x2471fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_247200:
    // 0x247200: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_247204:
    if (ctx->pc == 0x247204u) {
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247200u;
        // 0x247204: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247208u;
        goto label_247208;
    }
    ctx->pc = 0x247200u;
    {
        const bool branch_taken_0x247200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247200u;
        // 0x247204: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247200) {
            ctx->pc = 0x247198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247198;
        }
    }
    ctx->pc = 0x247208u;
label_247208:
    // 0x247208: 0xc1752f8  jal         func_5D4BE0
label_24720c:
    if (ctx->pc == 0x24720Cu) {
        ctx->pc = 0x247210u;
        goto label_247210;
    }
    ctx->pc = 0x247208u;
    SET_GPR_U32(ctx, 31, 0x247210u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247208u, 0x247210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247210u;
label_247210:
    // 0x247210: 0xc1780c4  jal         func_5E0310
label_247214:
    if (ctx->pc == 0x247214u) {
        ctx->pc = 0x247214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247210u;
        // 0x247214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247218u;
        goto label_247218;
    }
    ctx->pc = 0x247210u;
    SET_GPR_U32(ctx, 31, 0x247218u);
    ctx->pc = 0x247214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247210u;
    // 0x247214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5E0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5E0310u, 0x247210u, 0x247218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247218u;
label_247218:
    // 0x247218: 0x0  nop
    ctx->pc = 0x247218u;
    // NOP
label_24721c:
    // 0x24721c: 0x0  nop
    ctx->pc = 0x24721cu;
    // NOP
label_247220:
    // 0x247220: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_247224:
    if (ctx->pc == 0x247224u) {
        ctx->pc = 0x247228u;
        goto label_247228;
    }
    ctx->pc = 0x247220u;
    {
        const bool branch_taken_0x247220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247220) {
            ctx->pc = 0x247208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247208;
        }
    }
    ctx->pc = 0x247228u;
label_247228:
    // 0x247228: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x247228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_24722c:
    // 0x24722c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24722cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247230:
    // 0x247230: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_247234:
    if (ctx->pc == 0x247234u) {
        ctx->pc = 0x247234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247230u;
        // 0x247234: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247238u;
        goto label_247238;
    }
    ctx->pc = 0x247230u;
    {
        const bool branch_taken_0x247230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247230u;
        // 0x247234: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247230) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247238u;
label_247238:
    // 0x247238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24723c:
    // 0x24723c: 0x3d19021  addu        $s2, $fp, $s1
    ctx->pc = 0x24723cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_247240:
    // 0x247240: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x247240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_247244:
    // 0x247244: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x247244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247248:
    // 0x247248: 0x2b12021  addu        $a0, $s5, $s1
    ctx->pc = 0x247248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_24724c:
    // 0x24724c: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x24724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
label_247250:
    // 0x247250: 0xac85108c  sw          $a1, 0x108C($a0)
    ctx->pc = 0x247250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4236), GPR_U32(ctx, 5));
label_247254:
    // 0x247254: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x247254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247258:
    // 0x247258: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x247258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_24725c:
    // 0x24725c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_247260:
    // 0x247260: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x247260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_247264:
    // 0x247264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_247268:
    // 0x247268: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x247268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24726c:
    // 0x24726c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_247270:
    if (ctx->pc == 0x247270u) {
        ctx->pc = 0x247274u;
        goto label_247274;
    }
    ctx->pc = 0x24726Cu;
    {
        const bool branch_taken_0x24726c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24726c) {
            ctx->pc = 0x247358u;
            goto label_247358;
        }
    }
    ctx->pc = 0x247274u;
label_247274:
    // 0x247274: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x247274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_247278:
    // 0x247278: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x247278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24727c:
    // 0x24727c: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
label_247280:
    // 0x247280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247284:
    // 0x247284: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247288:
    // 0x247288: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_24728c:
    if (ctx->pc == 0x24728Cu) {
        ctx->pc = 0x247290u;
        goto label_247290;
    }
    ctx->pc = 0x247288u;
    {
        const bool branch_taken_0x247288 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x247288) {
            ctx->pc = 0x2472C8u;
            goto label_2472c8;
        }
    }
    ctx->pc = 0x247290u;
label_247290:
    // 0x247290: 0xc1752f8  jal         func_5D4BE0
label_247294:
    if (ctx->pc == 0x247294u) {
        ctx->pc = 0x247298u;
        goto label_247298;
    }
    ctx->pc = 0x247290u;
    SET_GPR_U32(ctx, 31, 0x247298u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247290u, 0x247298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247298u;
label_247298:
    // 0x247298: 0xc175278  jal         func_5D49E0
label_24729c:
    if (ctx->pc == 0x24729Cu) {
        ctx->pc = 0x24729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247298u;
        // 0x24729c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472A0u;
        goto label_2472a0;
    }
    ctx->pc = 0x247298u;
    SET_GPR_U32(ctx, 31, 0x2472A0u);
    ctx->pc = 0x24729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247298u;
    // 0x24729c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D49E0u, 0x247298u, 0x2472A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472A0u;
label_2472a0:
    // 0x2472a0: 0xc1752f8  jal         func_5D4BE0
label_2472a4:
    if (ctx->pc == 0x2472A4u) {
        ctx->pc = 0x2472A8u;
        goto label_2472a8;
    }
    ctx->pc = 0x2472A0u;
    SET_GPR_U32(ctx, 31, 0x2472A8u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x2472A0u, 0x2472A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472A8u;
label_2472a8:
    // 0x2472a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2472a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2472ac:
    // 0x2472ac: 0xc175280  jal         func_5D4A00
label_2472b0:
    if (ctx->pc == 0x2472B0u) {
        ctx->pc = 0x2472B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472ACu;
        // 0x2472b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472B4u;
        goto label_2472b4;
    }
    ctx->pc = 0x2472ACu;
    SET_GPR_U32(ctx, 31, 0x2472B4u);
    ctx->pc = 0x2472B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472ACu;
    // 0x2472b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4A00u, 0x2472ACu, 0x2472B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472B4u;
label_2472b4:
    // 0x2472b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2472b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2472b8:
    // 0x2472b8: 0x1260fff5  beqz        $s3, . + 4 + (-0xB << 2)
label_2472bc:
    if (ctx->pc == 0x2472BCu) {
        ctx->pc = 0x2472C0u;
        goto label_2472c0;
    }
    ctx->pc = 0x2472B8u;
    {
        const bool branch_taken_0x2472b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472b8) {
            ctx->pc = 0x247290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247290;
        }
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2472c4:
    if (ctx->pc == 0x2472C4u) {
        ctx->pc = 0x2472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472C0u;
        // 0x2472c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472C8u;
        goto label_2472c8;
    }
    ctx->pc = 0x2472C0u;
    {
        const bool branch_taken_0x2472c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472C0u;
        // 0x2472c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472c0) {
            ctx->pc = 0x247340u;
            goto label_247340;
        }
    }
    ctx->pc = 0x2472C8u;
label_2472c8:
    // 0x2472c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2472c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2472cc:
    // 0x2472cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2472d0:
    if (ctx->pc == 0x2472D0u) {
        ctx->pc = 0x2472D4u;
        goto label_2472d4;
    }
    ctx->pc = 0x2472CCu;
    {
        const bool branch_taken_0x2472cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472cc) {
            ctx->pc = 0x2472DCu;
            goto label_2472dc;
        }
    }
    ctx->pc = 0x2472D4u;
label_2472d4:
    // 0x2472d4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2472d8:
    if (ctx->pc == 0x2472D8u) {
        ctx->pc = 0x2472DCu;
        goto label_2472dc;
    }
    ctx->pc = 0x2472D4u;
    {
        const bool branch_taken_0x2472d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472d4) {
            ctx->pc = 0x247340u;
            goto label_247340;
        }
    }
    ctx->pc = 0x2472DCu;
label_2472dc:
    // 0x2472dc: 0x0  nop
    ctx->pc = 0x2472dcu;
    // NOP
label_2472e0:
    // 0x2472e0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2472e4:
    // 0x2472e4: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x2472e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
label_2472e8:
    // 0x2472e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2472ec:
    // 0x2472ec: 0xc1752f8  jal         func_5D4BE0
label_2472f0:
    if (ctx->pc == 0x2472F0u) {
        ctx->pc = 0x2472F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472ECu;
        // 0x2472f0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472F4u;
        goto label_2472f4;
    }
    ctx->pc = 0x2472ECu;
    SET_GPR_U32(ctx, 31, 0x2472F4u);
    ctx->pc = 0x2472F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472ECu;
    // 0x2472f0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x2472ECu, 0x2472F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472F4u;
label_2472f4:
    // 0x2472f4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2472f8:
    // 0x2472f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2472f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2472fc:
    // 0x2472fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_247300:
    // 0x247300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247304:
    // 0x247304: 0xc18dba0  jal         func_636E80
label_247308:
    if (ctx->pc == 0x247308u) {
        ctx->pc = 0x247308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247304u;
        // 0x247308: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24730Cu;
        goto label_24730c;
    }
    ctx->pc = 0x247304u;
    SET_GPR_U32(ctx, 31, 0x24730Cu);
    ctx->pc = 0x247308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247304u;
    // 0x247308: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x247304u, 0x24730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24730Cu;
label_24730c:
    // 0x24730c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247310:
    // 0x247310: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247314:
    // 0x247314: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_247318:
    // 0x247318: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x247318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_24731c:
    // 0x24731c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x24731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
label_247320:
    // 0x247320: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
label_247324:
    // 0x247324: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x247324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_247328:
    // 0x247328: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24732c:
    // 0x24732c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_247330:
    // 0x247330: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247334:
    // 0x247334: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x247334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247338:
    // 0x247338: 0xc08e93e  jal         func_23A4F8
label_24733c:
    if (ctx->pc == 0x24733Cu) {
        ctx->pc = 0x24733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247338u;
        // 0x24733c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247340u;
        goto label_247340;
    }
    ctx->pc = 0x247338u;
    SET_GPR_U32(ctx, 31, 0x247340u);
    ctx->pc = 0x24733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247338u;
    // 0x24733c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x247340u;
label_247340:
    // 0x247340: 0x8e990510  lw          $t9, 0x510($s4)
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1296)));
label_247344:
    // 0x247344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x247344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247348:
    // 0x247348: 0x9693056c  lhu         $s3, 0x56C($s4)
    ctx->pc = 0x247348u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1388)));
label_24734c:
    // 0x24734c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24734cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_247350:
    // 0x247350: 0x320f809  jalr        $t9
label_247354:
    if (ctx->pc == 0x247354u) {
        ctx->pc = 0x247354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247350u;
        // 0x247354: 0x26840510  addiu       $a0, $s4, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247358u;
        goto label_247358;
    }
    ctx->pc = 0x247350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247358u);
        ctx->pc = 0x247354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247350u;
        // 0x247354: 0x26840510  addiu       $a0, $s4, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247350u, 0x247358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247358u;
label_247358:
    // 0x247358: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x247358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24735c:
    // 0x24735c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x24735cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_247360:
    // 0x247360: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x247360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_247364:
    // 0x247364: 0x2d7182b  sltu        $v1, $s6, $s7
    ctx->pc = 0x247364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_247368:
    // 0x247368: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24736c:
    // 0x24736c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_247370:
    // 0x247370: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_247374:
    if (ctx->pc == 0x247374u) {
        ctx->pc = 0x247374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247370u;
        // 0x247374: 0xac9310b4  sw          $s3, 0x10B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4276), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247378u;
        goto label_247378;
    }
    ctx->pc = 0x247370u;
    {
        const bool branch_taken_0x247370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x247374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247370u;
        // 0x247374: 0xac9310b4  sw          $s3, 0x10B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4276), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247370) {
            ctx->pc = 0x24723Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24723c;
        }
    }
    ctx->pc = 0x247378u;
label_247378:
    // 0x247378: 0x26830400  addiu       $v1, $s4, 0x400
    ctx->pc = 0x247378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_24737c:
    // 0x24737c: 0xaea31080  sw          $v1, 0x1080($s5)
    ctx->pc = 0x24737cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4224), GPR_U32(ctx, 3));
label_247380:
    // 0x247380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247384:
    // 0x247384: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247388:
    // 0x247388: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_24738c:
    // 0x24738c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_247390:
    // 0x247390: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x247390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
label_247394:
    // 0x247394: 0x2cc30080  sltiu       $v1, $a2, 0x80
    ctx->pc = 0x247394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_247398:
    // 0x247398: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x247398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_24739c:
    // 0x24739c: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x24739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_2473a0:
    // 0x2473a0: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x2473a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
label_2473a4:
    // 0x2473a4: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x2473a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
label_2473a8:
    // 0x2473a8: 0xaca000ac  sw          $zero, 0xAC($a1)
    ctx->pc = 0x2473a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 0));
label_2473ac:
    // 0x2473ac: 0xaca000a8  sw          $zero, 0xA8($a1)
    ctx->pc = 0x2473acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
label_2473b0:
    // 0x2473b0: 0xaca000cc  sw          $zero, 0xCC($a1)
    ctx->pc = 0x2473b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 204), GPR_U32(ctx, 0));
label_2473b4:
    // 0x2473b4: 0xaca000c8  sw          $zero, 0xC8($a1)
    ctx->pc = 0x2473b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 0));
label_2473b8:
    // 0x2473b8: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x2473b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
label_2473bc:
    // 0x2473bc: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x2473bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
label_2473c0:
    // 0x2473c0: 0xaca0010c  sw          $zero, 0x10C($a1)
    ctx->pc = 0x2473c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 0));
label_2473c4:
    // 0x2473c4: 0xaca00108  sw          $zero, 0x108($a1)
    ctx->pc = 0x2473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 0));
label_2473c8:
    // 0x2473c8: 0xaca0012c  sw          $zero, 0x12C($a1)
    ctx->pc = 0x2473c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 0));
label_2473cc:
    // 0x2473cc: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x2473ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
label_2473d0:
    // 0x2473d0: 0xaca0014c  sw          $zero, 0x14C($a1)
    ctx->pc = 0x2473d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 0));
label_2473d4:
    // 0x2473d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_2473d8:
    if (ctx->pc == 0x2473D8u) {
        ctx->pc = 0x2473D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D4u;
        // 0x2473d8: 0xaca00148  sw          $zero, 0x148($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473DCu;
        goto label_2473dc;
    }
    ctx->pc = 0x2473D4u;
    {
        const bool branch_taken_0x2473d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D4u;
        // 0x2473d8: 0xaca00148  sw          $zero, 0x148($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473d4) {
            ctx->pc = 0x247388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247388;
        }
    }
    ctx->pc = 0x2473DCu;
label_2473dc:
    // 0x2473dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2473dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2473e0:
    // 0x2473e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2473e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2473e4:
    // 0x2473e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2473e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2473e8:
    // 0x2473e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2473e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2473ec:
    // 0x2473ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2473ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2473f0:
    // 0x2473f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2473f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2473f4:
    // 0x2473f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2473f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2473f8:
    // 0x2473f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2473f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2473fc:
    // 0x2473fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2473fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247400:
    // 0x247400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_247404:
    // 0x247404: 0x3e00008  jr          $ra
label_247408:
    if (ctx->pc == 0x247408u) {
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24740Cu;
        goto label_24740c;
    }
    ctx->pc = 0x247404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24740Cu;
label_24740c:
    // 0x24740c: 0x0  nop
    ctx->pc = 0x24740cu;
    // NOP
label_247410:
    // 0x247410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_247414:
    // 0x247414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_247418:
    // 0x247418: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24741c:
    // 0x24741c: 0x7d400000  sq          $zero, 0x0($t2)
    ctx->pc = 0x24741cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 0));
label_247420:
    // 0x247420: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_247424:
    // 0x247424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247428:
    // 0x247428: 0x2488006c  addiu       $t0, $a0, 0x6C
    ctx->pc = 0x247428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
label_24742c:
    // 0x24742c: 0x24870068  addiu       $a3, $a0, 0x68
    ctx->pc = 0x24742cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->pc = 0x247430u;
    return;
}
