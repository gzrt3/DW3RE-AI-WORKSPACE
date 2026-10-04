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


void FUN_0014eba0_part85(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x177be0u: goto label_177be0;
        case 0x177be4u: goto label_177be4;
        case 0x177be8u: goto label_177be8;
        case 0x177becu: goto label_177bec;
        case 0x177bf0u: goto label_177bf0;
        case 0x177bf4u: goto label_177bf4;
        case 0x177bf8u: goto label_177bf8;
        case 0x177bfcu: goto label_177bfc;
        case 0x177c00u: goto label_177c00;
        case 0x177c04u: goto label_177c04;
        case 0x177c08u: goto label_177c08;
        case 0x177c0cu: goto label_177c0c;
        case 0x177c10u: goto label_177c10;
        case 0x177c14u: goto label_177c14;
        case 0x177c18u: goto label_177c18;
        case 0x177c1cu: goto label_177c1c;
        case 0x177c20u: goto label_177c20;
        case 0x177c24u: goto label_177c24;
        case 0x177c28u: goto label_177c28;
        case 0x177c2cu: goto label_177c2c;
        case 0x177c30u: goto label_177c30;
        case 0x177c34u: goto label_177c34;
        case 0x177c38u: goto label_177c38;
        case 0x177c3cu: goto label_177c3c;
        case 0x177c40u: goto label_177c40;
        case 0x177c44u: goto label_177c44;
        case 0x177c48u: goto label_177c48;
        case 0x177c4cu: goto label_177c4c;
        case 0x177c50u: goto label_177c50;
        case 0x177c54u: goto label_177c54;
        case 0x177c58u: goto label_177c58;
        case 0x177c5cu: goto label_177c5c;
        case 0x177c60u: goto label_177c60;
        case 0x177c64u: goto label_177c64;
        case 0x177c68u: goto label_177c68;
        case 0x177c6cu: goto label_177c6c;
        case 0x177c70u: goto label_177c70;
        case 0x177c74u: goto label_177c74;
        case 0x177c78u: goto label_177c78;
        case 0x177c7cu: goto label_177c7c;
        case 0x177c80u: goto label_177c80;
        case 0x177c84u: goto label_177c84;
        case 0x177c88u: goto label_177c88;
        case 0x177c8cu: goto label_177c8c;
        case 0x177c90u: goto label_177c90;
        case 0x177c94u: goto label_177c94;
        case 0x177c98u: goto label_177c98;
        case 0x177c9cu: goto label_177c9c;
        case 0x177ca0u: goto label_177ca0;
        case 0x177ca4u: goto label_177ca4;
        case 0x177ca8u: goto label_177ca8;
        case 0x177cacu: goto label_177cac;
        case 0x177cb0u: goto label_177cb0;
        case 0x177cb4u: goto label_177cb4;
        case 0x177cb8u: goto label_177cb8;
        case 0x177cbcu: goto label_177cbc;
        case 0x177cc0u: goto label_177cc0;
        case 0x177cc4u: goto label_177cc4;
        case 0x177cc8u: goto label_177cc8;
        case 0x177cccu: goto label_177ccc;
        case 0x177cd0u: goto label_177cd0;
        case 0x177cd4u: goto label_177cd4;
        case 0x177cd8u: goto label_177cd8;
        case 0x177cdcu: goto label_177cdc;
        case 0x177ce0u: goto label_177ce0;
        case 0x177ce4u: goto label_177ce4;
        case 0x177ce8u: goto label_177ce8;
        case 0x177cecu: goto label_177cec;
        case 0x177cf0u: goto label_177cf0;
        case 0x177cf4u: goto label_177cf4;
        case 0x177cf8u: goto label_177cf8;
        case 0x177cfcu: goto label_177cfc;
        case 0x177d00u: goto label_177d00;
        case 0x177d04u: goto label_177d04;
        case 0x177d08u: goto label_177d08;
        case 0x177d0cu: goto label_177d0c;
        case 0x177d10u: goto label_177d10;
        case 0x177d14u: goto label_177d14;
        case 0x177d18u: goto label_177d18;
        case 0x177d1cu: goto label_177d1c;
        case 0x177d20u: goto label_177d20;
        case 0x177d24u: goto label_177d24;
        case 0x177d28u: goto label_177d28;
        case 0x177d2cu: goto label_177d2c;
        case 0x177d30u: goto label_177d30;
        case 0x177d34u: goto label_177d34;
        case 0x177d38u: goto label_177d38;
        case 0x177d3cu: goto label_177d3c;
        case 0x177d40u: goto label_177d40;
        case 0x177d44u: goto label_177d44;
        case 0x177d48u: goto label_177d48;
        case 0x177d4cu: goto label_177d4c;
        case 0x177d50u: goto label_177d50;
        case 0x177d54u: goto label_177d54;
        case 0x177d58u: goto label_177d58;
        case 0x177d5cu: goto label_177d5c;
        case 0x177d60u: goto label_177d60;
        case 0x177d64u: goto label_177d64;
        case 0x177d68u: goto label_177d68;
        case 0x177d6cu: goto label_177d6c;
        case 0x177d70u: goto label_177d70;
        case 0x177d74u: goto label_177d74;
        case 0x177d78u: goto label_177d78;
        case 0x177d7cu: goto label_177d7c;
        case 0x177d80u: goto label_177d80;
        case 0x177d84u: goto label_177d84;
        case 0x177d88u: goto label_177d88;
        case 0x177d8cu: goto label_177d8c;
        case 0x177d90u: goto label_177d90;
        case 0x177d94u: goto label_177d94;
        case 0x177d98u: goto label_177d98;
        case 0x177d9cu: goto label_177d9c;
        case 0x177da0u: goto label_177da0;
        case 0x177da4u: goto label_177da4;
        case 0x177da8u: goto label_177da8;
        case 0x177dacu: goto label_177dac;
        case 0x177db0u: goto label_177db0;
        case 0x177db4u: goto label_177db4;
        case 0x177db8u: goto label_177db8;
        case 0x177dbcu: goto label_177dbc;
        case 0x177dc0u: goto label_177dc0;
        case 0x177dc4u: goto label_177dc4;
        case 0x177dc8u: goto label_177dc8;
        case 0x177dccu: goto label_177dcc;
        case 0x177dd0u: goto label_177dd0;
        case 0x177dd4u: goto label_177dd4;
        case 0x177dd8u: goto label_177dd8;
        case 0x177ddcu: goto label_177ddc;
        case 0x177de0u: goto label_177de0;
        case 0x177de4u: goto label_177de4;
        case 0x177de8u: goto label_177de8;
        case 0x177decu: goto label_177dec;
        case 0x177df0u: goto label_177df0;
        case 0x177df4u: goto label_177df4;
        case 0x177df8u: goto label_177df8;
        case 0x177dfcu: goto label_177dfc;
        case 0x177e00u: goto label_177e00;
        case 0x177e04u: goto label_177e04;
        case 0x177e08u: goto label_177e08;
        case 0x177e0cu: goto label_177e0c;
        case 0x177e10u: goto label_177e10;
        case 0x177e14u: goto label_177e14;
        case 0x177e18u: goto label_177e18;
        case 0x177e1cu: goto label_177e1c;
        case 0x177e20u: goto label_177e20;
        case 0x177e24u: goto label_177e24;
        case 0x177e28u: goto label_177e28;
        case 0x177e2cu: goto label_177e2c;
        case 0x177e30u: goto label_177e30;
        case 0x177e34u: goto label_177e34;
        case 0x177e38u: goto label_177e38;
        case 0x177e3cu: goto label_177e3c;
        case 0x177e40u: goto label_177e40;
        case 0x177e44u: goto label_177e44;
        case 0x177e48u: goto label_177e48;
        case 0x177e4cu: goto label_177e4c;
        case 0x177e50u: goto label_177e50;
        case 0x177e54u: goto label_177e54;
        case 0x177e58u: goto label_177e58;
        case 0x177e5cu: goto label_177e5c;
        case 0x177e60u: goto label_177e60;
        case 0x177e64u: goto label_177e64;
        case 0x177e68u: goto label_177e68;
        case 0x177e6cu: goto label_177e6c;
        case 0x177e70u: goto label_177e70;
        case 0x177e74u: goto label_177e74;
        case 0x177e78u: goto label_177e78;
        case 0x177e7cu: goto label_177e7c;
        case 0x177e80u: goto label_177e80;
        case 0x177e84u: goto label_177e84;
        case 0x177e88u: goto label_177e88;
        case 0x177e8cu: goto label_177e8c;
        case 0x177e90u: goto label_177e90;
        case 0x177e94u: goto label_177e94;
        case 0x177e98u: goto label_177e98;
        case 0x177e9cu: goto label_177e9c;
        case 0x177ea0u: goto label_177ea0;
        case 0x177ea4u: goto label_177ea4;
        case 0x177ea8u: goto label_177ea8;
        case 0x177eacu: goto label_177eac;
        case 0x177eb0u: goto label_177eb0;
        case 0x177eb4u: goto label_177eb4;
        case 0x177eb8u: goto label_177eb8;
        case 0x177ebcu: goto label_177ebc;
        case 0x177ec0u: goto label_177ec0;
        case 0x177ec4u: goto label_177ec4;
        case 0x177ec8u: goto label_177ec8;
        case 0x177eccu: goto label_177ecc;
        case 0x177ed0u: goto label_177ed0;
        case 0x177ed4u: goto label_177ed4;
        case 0x177ed8u: goto label_177ed8;
        case 0x177edcu: goto label_177edc;
        case 0x177ee0u: goto label_177ee0;
        case 0x177ee4u: goto label_177ee4;
        case 0x177ee8u: goto label_177ee8;
        case 0x177eecu: goto label_177eec;
        case 0x177ef0u: goto label_177ef0;
        case 0x177ef4u: goto label_177ef4;
        case 0x177ef8u: goto label_177ef8;
        case 0x177efcu: goto label_177efc;
        case 0x177f00u: goto label_177f00;
        case 0x177f04u: goto label_177f04;
        case 0x177f08u: goto label_177f08;
        case 0x177f0cu: goto label_177f0c;
        case 0x177f10u: goto label_177f10;
        case 0x177f14u: goto label_177f14;
        case 0x177f18u: goto label_177f18;
        case 0x177f1cu: goto label_177f1c;
        case 0x177f20u: goto label_177f20;
        case 0x177f24u: goto label_177f24;
        case 0x177f28u: goto label_177f28;
        case 0x177f2cu: goto label_177f2c;
        case 0x177f30u: goto label_177f30;
        case 0x177f34u: goto label_177f34;
        case 0x177f38u: goto label_177f38;
        case 0x177f3cu: goto label_177f3c;
        case 0x177f40u: goto label_177f40;
        case 0x177f44u: goto label_177f44;
        case 0x177f48u: goto label_177f48;
        case 0x177f4cu: goto label_177f4c;
        case 0x177f50u: goto label_177f50;
        case 0x177f54u: goto label_177f54;
        case 0x177f58u: goto label_177f58;
        case 0x177f5cu: goto label_177f5c;
        case 0x177f60u: goto label_177f60;
        case 0x177f64u: goto label_177f64;
        case 0x177f68u: goto label_177f68;
        case 0x177f6cu: goto label_177f6c;
        case 0x177f70u: goto label_177f70;
        case 0x177f74u: goto label_177f74;
        case 0x177f78u: goto label_177f78;
        case 0x177f7cu: goto label_177f7c;
        case 0x177f80u: goto label_177f80;
        case 0x177f84u: goto label_177f84;
        case 0x177f88u: goto label_177f88;
        case 0x177f8cu: goto label_177f8c;
        case 0x177f90u: goto label_177f90;
        case 0x177f94u: goto label_177f94;
        case 0x177f98u: goto label_177f98;
        case 0x177f9cu: goto label_177f9c;
        case 0x177fa0u: goto label_177fa0;
        case 0x177fa4u: goto label_177fa4;
        case 0x177fa8u: goto label_177fa8;
        case 0x177facu: goto label_177fac;
        case 0x177fb0u: goto label_177fb0;
        case 0x177fb4u: goto label_177fb4;
        case 0x177fb8u: goto label_177fb8;
        case 0x177fbcu: goto label_177fbc;
        case 0x177fc0u: goto label_177fc0;
        case 0x177fc4u: goto label_177fc4;
        case 0x177fc8u: goto label_177fc8;
        case 0x177fccu: goto label_177fcc;
        case 0x177fd0u: goto label_177fd0;
        case 0x177fd4u: goto label_177fd4;
        case 0x177fd8u: goto label_177fd8;
        case 0x177fdcu: goto label_177fdc;
        case 0x177fe0u: goto label_177fe0;
        case 0x177fe4u: goto label_177fe4;
        case 0x177fe8u: goto label_177fe8;
        case 0x177fecu: goto label_177fec;
        case 0x177ff0u: goto label_177ff0;
        case 0x177ff4u: goto label_177ff4;
        case 0x177ff8u: goto label_177ff8;
        case 0x177ffcu: goto label_177ffc;
        case 0x178000u: goto label_178000;
        case 0x178004u: goto label_178004;
        case 0x178008u: goto label_178008;
        case 0x17800cu: goto label_17800c;
        case 0x178010u: goto label_178010;
        case 0x178014u: goto label_178014;
        case 0x178018u: goto label_178018;
        case 0x17801cu: goto label_17801c;
        case 0x178020u: goto label_178020;
        case 0x178024u: goto label_178024;
        case 0x178028u: goto label_178028;
        case 0x17802cu: goto label_17802c;
        case 0x178030u: goto label_178030;
        case 0x178034u: goto label_178034;
        case 0x178038u: goto label_178038;
        case 0x17803cu: goto label_17803c;
        case 0x178040u: goto label_178040;
        case 0x178044u: goto label_178044;
        case 0x178048u: goto label_178048;
        case 0x17804cu: goto label_17804c;
        case 0x178050u: goto label_178050;
        case 0x178054u: goto label_178054;
        case 0x178058u: goto label_178058;
        case 0x17805cu: goto label_17805c;
        case 0x178060u: goto label_178060;
        case 0x178064u: goto label_178064;
        case 0x178068u: goto label_178068;
        case 0x17806cu: goto label_17806c;
        case 0x178070u: goto label_178070;
        case 0x178074u: goto label_178074;
        case 0x178078u: goto label_178078;
        case 0x17807cu: goto label_17807c;
        case 0x178080u: goto label_178080;
        case 0x178084u: goto label_178084;
        case 0x178088u: goto label_178088;
        case 0x17808cu: goto label_17808c;
        case 0x178090u: goto label_178090;
        case 0x178094u: goto label_178094;
        case 0x178098u: goto label_178098;
        case 0x17809cu: goto label_17809c;
        case 0x1780a0u: goto label_1780a0;
        case 0x1780a4u: goto label_1780a4;
        case 0x1780a8u: goto label_1780a8;
        case 0x1780acu: goto label_1780ac;
        case 0x1780b0u: goto label_1780b0;
        case 0x1780b4u: goto label_1780b4;
        case 0x1780b8u: goto label_1780b8;
        case 0x1780bcu: goto label_1780bc;
        case 0x1780c0u: goto label_1780c0;
        case 0x1780c4u: goto label_1780c4;
        case 0x1780c8u: goto label_1780c8;
        case 0x1780ccu: goto label_1780cc;
        case 0x1780d0u: goto label_1780d0;
        case 0x1780d4u: goto label_1780d4;
        case 0x1780d8u: goto label_1780d8;
        case 0x1780dcu: goto label_1780dc;
        case 0x1780e0u: goto label_1780e0;
        case 0x1780e4u: goto label_1780e4;
        case 0x1780e8u: goto label_1780e8;
        case 0x1780ecu: goto label_1780ec;
        case 0x1780f0u: goto label_1780f0;
        case 0x1780f4u: goto label_1780f4;
        case 0x1780f8u: goto label_1780f8;
        case 0x1780fcu: goto label_1780fc;
        case 0x178100u: goto label_178100;
        case 0x178104u: goto label_178104;
        case 0x178108u: goto label_178108;
        case 0x17810cu: goto label_17810c;
        case 0x178110u: goto label_178110;
        case 0x178114u: goto label_178114;
        case 0x178118u: goto label_178118;
        case 0x17811cu: goto label_17811c;
        case 0x178120u: goto label_178120;
        case 0x178124u: goto label_178124;
        case 0x178128u: goto label_178128;
        case 0x17812cu: goto label_17812c;
        case 0x178130u: goto label_178130;
        case 0x178134u: goto label_178134;
        case 0x178138u: goto label_178138;
        case 0x17813cu: goto label_17813c;
        case 0x178140u: goto label_178140;
        case 0x178144u: goto label_178144;
        case 0x178148u: goto label_178148;
        case 0x17814cu: goto label_17814c;
        case 0x178150u: goto label_178150;
        case 0x178154u: goto label_178154;
        case 0x178158u: goto label_178158;
        case 0x17815cu: goto label_17815c;
        case 0x178160u: goto label_178160;
        case 0x178164u: goto label_178164;
        case 0x178168u: goto label_178168;
        case 0x17816cu: goto label_17816c;
        case 0x178170u: goto label_178170;
        case 0x178174u: goto label_178174;
        case 0x178178u: goto label_178178;
        case 0x17817cu: goto label_17817c;
        case 0x178180u: goto label_178180;
        case 0x178184u: goto label_178184;
        case 0x178188u: goto label_178188;
        case 0x17818cu: goto label_17818c;
        case 0x178190u: goto label_178190;
        case 0x178194u: goto label_178194;
        case 0x178198u: goto label_178198;
        case 0x17819cu: goto label_17819c;
        case 0x1781a0u: goto label_1781a0;
        case 0x1781a4u: goto label_1781a4;
        case 0x1781a8u: goto label_1781a8;
        case 0x1781acu: goto label_1781ac;
        case 0x1781b0u: goto label_1781b0;
        case 0x1781b4u: goto label_1781b4;
        case 0x1781b8u: goto label_1781b8;
        case 0x1781bcu: goto label_1781bc;
        case 0x1781c0u: goto label_1781c0;
        case 0x1781c4u: goto label_1781c4;
        case 0x1781c8u: goto label_1781c8;
        case 0x1781ccu: goto label_1781cc;
        case 0x1781d0u: goto label_1781d0;
        case 0x1781d4u: goto label_1781d4;
        case 0x1781d8u: goto label_1781d8;
        case 0x1781dcu: goto label_1781dc;
        case 0x1781e0u: goto label_1781e0;
        case 0x1781e4u: goto label_1781e4;
        case 0x1781e8u: goto label_1781e8;
        case 0x1781ecu: goto label_1781ec;
        case 0x1781f0u: goto label_1781f0;
        case 0x1781f4u: goto label_1781f4;
        case 0x1781f8u: goto label_1781f8;
        case 0x1781fcu: goto label_1781fc;
        case 0x178200u: goto label_178200;
        case 0x178204u: goto label_178204;
        case 0x178208u: goto label_178208;
        case 0x17820cu: goto label_17820c;
        case 0x178210u: goto label_178210;
        case 0x178214u: goto label_178214;
        case 0x178218u: goto label_178218;
        case 0x17821cu: goto label_17821c;
        case 0x178220u: goto label_178220;
        case 0x178224u: goto label_178224;
        case 0x178228u: goto label_178228;
        case 0x17822cu: goto label_17822c;
        case 0x178230u: goto label_178230;
        case 0x178234u: goto label_178234;
        case 0x178238u: goto label_178238;
        case 0x17823cu: goto label_17823c;
        case 0x178240u: goto label_178240;
        case 0x178244u: goto label_178244;
        case 0x178248u: goto label_178248;
        case 0x17824cu: goto label_17824c;
        case 0x178250u: goto label_178250;
        case 0x178254u: goto label_178254;
        case 0x178258u: goto label_178258;
        case 0x17825cu: goto label_17825c;
        case 0x178260u: goto label_178260;
        case 0x178264u: goto label_178264;
        case 0x178268u: goto label_178268;
        case 0x17826cu: goto label_17826c;
        case 0x178270u: goto label_178270;
        case 0x178274u: goto label_178274;
        case 0x178278u: goto label_178278;
        case 0x17827cu: goto label_17827c;
        case 0x178280u: goto label_178280;
        case 0x178284u: goto label_178284;
        case 0x178288u: goto label_178288;
        case 0x17828cu: goto label_17828c;
        case 0x178290u: goto label_178290;
        case 0x178294u: goto label_178294;
        case 0x178298u: goto label_178298;
        case 0x17829cu: goto label_17829c;
        case 0x1782a0u: goto label_1782a0;
        case 0x1782a4u: goto label_1782a4;
        case 0x1782a8u: goto label_1782a8;
        case 0x1782acu: goto label_1782ac;
        case 0x1782b0u: goto label_1782b0;
        case 0x1782b4u: goto label_1782b4;
        case 0x1782b8u: goto label_1782b8;
        case 0x1782bcu: goto label_1782bc;
        case 0x1782c0u: goto label_1782c0;
        case 0x1782c4u: goto label_1782c4;
        case 0x1782c8u: goto label_1782c8;
        case 0x1782ccu: goto label_1782cc;
        case 0x1782d0u: goto label_1782d0;
        case 0x1782d4u: goto label_1782d4;
        case 0x1782d8u: goto label_1782d8;
        case 0x1782dcu: goto label_1782dc;
        case 0x1782e0u: goto label_1782e0;
        case 0x1782e4u: goto label_1782e4;
        case 0x1782e8u: goto label_1782e8;
        case 0x1782ecu: goto label_1782ec;
        case 0x1782f0u: goto label_1782f0;
        case 0x1782f4u: goto label_1782f4;
        case 0x1782f8u: goto label_1782f8;
        case 0x1782fcu: goto label_1782fc;
        case 0x178300u: goto label_178300;
        case 0x178304u: goto label_178304;
        case 0x178308u: goto label_178308;
        case 0x17830cu: goto label_17830c;
        case 0x178310u: goto label_178310;
        case 0x178314u: goto label_178314;
        case 0x178318u: goto label_178318;
        case 0x17831cu: goto label_17831c;
        case 0x178320u: goto label_178320;
        case 0x178324u: goto label_178324;
        case 0x178328u: goto label_178328;
        case 0x17832cu: goto label_17832c;
        case 0x178330u: goto label_178330;
        case 0x178334u: goto label_178334;
        case 0x178338u: goto label_178338;
        case 0x17833cu: goto label_17833c;
        case 0x178340u: goto label_178340;
        case 0x178344u: goto label_178344;
        case 0x178348u: goto label_178348;
        case 0x17834cu: goto label_17834c;
        case 0x178350u: goto label_178350;
        case 0x178354u: goto label_178354;
        case 0x178358u: goto label_178358;
        case 0x17835cu: goto label_17835c;
        case 0x178360u: goto label_178360;
        case 0x178364u: goto label_178364;
        case 0x178368u: goto label_178368;
        case 0x17836cu: goto label_17836c;
        case 0x178370u: goto label_178370;
        case 0x178374u: goto label_178374;
        case 0x178378u: goto label_178378;
        case 0x17837cu: goto label_17837c;
        case 0x178380u: goto label_178380;
        case 0x178384u: goto label_178384;
        case 0x178388u: goto label_178388;
        case 0x17838cu: goto label_17838c;
        case 0x178390u: goto label_178390;
        case 0x178394u: goto label_178394;
        case 0x178398u: goto label_178398;
        case 0x17839cu: goto label_17839c;
        case 0x1783a0u: goto label_1783a0;
        case 0x1783a4u: goto label_1783a4;
        case 0x1783a8u: goto label_1783a8;
        case 0x1783acu: goto label_1783ac;
        default: return;
    }

label_177be0:
    // 0x177be0: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x177be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177be4:
    // 0x177be4: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_177be8:
    // 0x177be8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_177bec:
    // 0x177bec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_177bf0:
    // 0x177bf0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_177bf4:
    // 0x177bf4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_177bf8:
    // 0x177bf8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x177bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_177bfc:
    // 0x177bfc: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x177bfcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_177c00:
    // 0x177c00: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x177c00u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_177c04:
    // 0x177c04: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x177c04u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_177c08:
    // 0x177c08: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x177c08u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_177c0c:
    // 0x177c0c: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x177c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_177c10:
    // 0x177c10: 0x9fa400c0  lwu         $a0, 0xC0($sp)
    ctx->pc = 0x177c10u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_177c14:
    // 0x177c14: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x177c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_177c18:
    // 0x177c18: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x177c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_177c1c:
    // 0x177c1c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x177c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_177c20:
    // 0x177c20: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x177c20u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_177c24:
    // 0x177c24: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x177c24u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_177c28:
    // 0x177c28: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x177c28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_177c2c:
    // 0x177c2c: 0x10000019  b           . + 4 + (0x19 << 2)
label_177c30:
    if (ctx->pc == 0x177C30u) {
        ctx->pc = 0x177C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C2Cu;
        // 0x177c30: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177C34u;
        goto label_177c34;
    }
    ctx->pc = 0x177C2Cu;
    {
        const bool branch_taken_0x177c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C2Cu;
        // 0x177c30: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c2c) {
            ctx->pc = 0x177C94u;
            goto label_177c94;
        }
    }
    ctx->pc = 0x177C34u;
label_177c34:
    // 0x177c34: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x177c34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177c38:
    // 0x177c38: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_177c3c:
    // 0x177c3c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_177c40:
    // 0x177c40: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x177c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_177c44:
    // 0x177c44: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x177c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177c48:
    // 0x177c48: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_177c4c:
    // 0x177c4c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_177c50:
    // 0x177c50: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_177c54:
    // 0x177c54: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_177c58:
    // 0x177c58: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_177c5c:
    // 0x177c5c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_177c60:
    // 0x177c60: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x177c60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_177c64:
    // 0x177c64: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x177c64u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_177c68:
    // 0x177c68: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x177c68u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_177c6c:
    // 0x177c6c: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x177c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_177c70:
    // 0x177c70: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x177c70u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_177c74:
    // 0x177c74: 0x9fa400c0  lwu         $a0, 0xC0($sp)
    ctx->pc = 0x177c74u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_177c78:
    // 0x177c78: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x177c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_177c7c:
    // 0x177c7c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x177c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_177c80:
    // 0x177c80: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x177c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_177c84:
    // 0x177c84: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x177c84u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_177c88:
    // 0x177c88: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x177c88u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_177c8c:
    // 0x177c8c: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x177c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_177c90:
    // 0x177c90: 0xfea20048  sd          $v0, 0x48($s5)
    ctx->pc = 0x177c90u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
label_177c94:
    // 0x177c94: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
label_177c98:
    // 0x177c98: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x177c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_177c9c:
    // 0x177c9c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x177c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_177ca0:
    // 0x177ca0: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_177ca4:
    // 0x177ca4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177ca8:
    // 0x177ca8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x177ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_177cac:
    // 0x177cac: 0xfea30050  sd          $v1, 0x50($s5)
    ctx->pc = 0x177cacu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 3));
label_177cb0:
    // 0x177cb0: 0x34421531  ori         $v0, $v0, 0x1531
    ctx->pc = 0x177cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5425);
label_177cb4:
    // 0x177cb4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x177cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_177cb8:
    // 0x177cb8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x177cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_177cbc:
    // 0x177cbc: 0x3c025315  lui         $v0, 0x5315
    ctx->pc = 0x177cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21269 << 16));
label_177cc0:
    // 0x177cc0: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_177cc4:
    // 0x177cc4: 0x34433106  ori         $v1, $v0, 0x3106
    ctx->pc = 0x177cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12550);
label_177cc8:
    // 0x177cc8: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x177cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_177ccc:
    // 0x177ccc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177cd0:
    // 0x177cd0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x177cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_177cd4:
    // 0x177cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177cd8:
    // 0x177cd8: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x177cd8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_177cdc:
    // 0x177cdc: 0xc08dc56  jal         func_237158
label_177ce0:
    if (ctx->pc == 0x177CE0u) {
        ctx->pc = 0x177CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CDCu;
        // 0x177ce0: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177CE4u;
        goto label_177ce4;
    }
    ctx->pc = 0x177CDCu;
    SET_GPR_U32(ctx, 31, 0x177CE4u);
    ctx->pc = 0x177CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CDCu;
    // 0x177ce0: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x177ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_177ce8:
    // 0x177ce8: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x177ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_177cec:
    // 0x177cec: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x177cecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_177cf0:
    // 0x177cf0: 0x2762021  addu        $a0, $s3, $s6
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_177cf4:
    // 0x177cf4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x177cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_177cf8:
    // 0x177cf8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x177cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_177cfc:
    // 0x177cfc: 0x248a6c00  addiu       $t2, $a0, 0x6C00
    ctx->pc = 0x177cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_177d00:
    // 0x177d00: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_177d04:
    // 0x177d04: 0x2572021  addu        $a0, $s2, $s7
    ctx->pc = 0x177d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_177d08:
    // 0x177d08: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x177d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_177d0c:
    // 0x177d0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x177d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_177d10:
    // 0x177d10: 0x24a97900  addiu       $t1, $a1, 0x7900
    ctx->pc = 0x177d10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_177d14:
    // 0x177d14: 0x84278  dsll        $t0, $t0, 9
    ctx->pc = 0x177d14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 9);
label_177d18:
    // 0x177d18: 0x33ccffff  andi        $t4, $fp, 0xFFFF
    ctx->pc = 0x177d18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_177d1c:
    // 0x177d1c: 0x3508015c  ori         $t0, $t0, 0x15C
    ctx->pc = 0x177d1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)348);
label_177d20:
    // 0x177d20: 0x248b7900  addiu       $t3, $a0, 0x7900
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_177d24:
    // 0x177d24: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x177d24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
label_177d28:
    // 0x177d28: 0xc2100  sll         $a0, $t4, 4
    ctx->pc = 0x177d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_177d2c:
    // 0x177d2c: 0xfe140000  sd          $s4, 0x0($s0)
    ctx->pc = 0x177d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 20));
label_177d30:
    // 0x177d30: 0xc2938  dsll        $a1, $t4, 4
    ctx->pc = 0x177d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << 4);
label_177d34:
    // 0x177d34: 0xa2070010  sb          $a3, 0x10($s0)
    ctx->pc = 0x177d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 7));
label_177d38:
    // 0x177d38: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_177d3c:
    // 0x177d3c: 0xa2070011  sb          $a3, 0x11($s0)
    ctx->pc = 0x177d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 7));
label_177d40:
    // 0x177d40: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x177d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
label_177d44:
    // 0x177d44: 0xa2070012  sb          $a3, 0x12($s0)
    ctx->pc = 0x177d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 7));
label_177d48:
    // 0x177d48: 0xa2070013  sb          $a3, 0x13($s0)
    ctx->pc = 0x177d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 7));
label_177d4c:
    // 0x177d4c: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x177d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_177d50:
    // 0x177d50: 0xa2070028  sb          $a3, 0x28($s0)
    ctx->pc = 0x177d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 7));
label_177d54:
    // 0x177d54: 0xa2070029  sb          $a3, 0x29($s0)
    ctx->pc = 0x177d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 7));
label_177d58:
    // 0x177d58: 0xa207002a  sb          $a3, 0x2A($s0)
    ctx->pc = 0x177d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 7));
label_177d5c:
    // 0x177d5c: 0xa207002b  sb          $a3, 0x2B($s0)
    ctx->pc = 0x177d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 7));
label_177d60:
    // 0x177d60: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x177d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
label_177d64:
    // 0x177d64: 0xa2070040  sb          $a3, 0x40($s0)
    ctx->pc = 0x177d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 7));
label_177d68:
    // 0x177d68: 0xa2070041  sb          $a3, 0x41($s0)
    ctx->pc = 0x177d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 7));
label_177d6c:
    // 0x177d6c: 0xa2070042  sb          $a3, 0x42($s0)
    ctx->pc = 0x177d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 7));
label_177d70:
    // 0x177d70: 0xa2070043  sb          $a3, 0x43($s0)
    ctx->pc = 0x177d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 7));
label_177d74:
    // 0x177d74: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x177d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
label_177d78:
    // 0x177d78: 0xa2070058  sb          $a3, 0x58($s0)
    ctx->pc = 0x177d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 7));
label_177d7c:
    // 0x177d7c: 0xa2070059  sb          $a3, 0x59($s0)
    ctx->pc = 0x177d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 7));
label_177d80:
    // 0x177d80: 0xa207005a  sb          $a3, 0x5A($s0)
    ctx->pc = 0x177d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 7));
label_177d84:
    // 0x177d84: 0xa207005b  sb          $a3, 0x5B($s0)
    ctx->pc = 0x177d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 7));
label_177d88:
    // 0x177d88: 0xae06005c  sw          $a2, 0x5C($s0)
    ctx->pc = 0x177d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
label_177d8c:
    // 0x177d8c: 0xa6a30080  sh          $v1, 0x80($s5)
    ctx->pc = 0x177d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 3));
label_177d90:
    // 0x177d90: 0xa6a90082  sh          $t1, 0x82($s5)
    ctx->pc = 0x177d90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 130), (uint16_t)GPR_U32(ctx, 9));
label_177d94:
    // 0x177d94: 0xaeb10084  sw          $s1, 0x84($s5)
    ctx->pc = 0x177d94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 17));
label_177d98:
    // 0x177d98: 0xa6aa0098  sh          $t2, 0x98($s5)
    ctx->pc = 0x177d98u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 152), (uint16_t)GPR_U32(ctx, 10));
label_177d9c:
    // 0x177d9c: 0xa6a9009a  sh          $t1, 0x9A($s5)
    ctx->pc = 0x177d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 154), (uint16_t)GPR_U32(ctx, 9));
label_177da0:
    // 0x177da0: 0xaeb1009c  sw          $s1, 0x9C($s5)
    ctx->pc = 0x177da0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 17));
label_177da4:
    // 0x177da4: 0xa6a300b0  sh          $v1, 0xB0($s5)
    ctx->pc = 0x177da4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 176), (uint16_t)GPR_U32(ctx, 3));
label_177da8:
    // 0x177da8: 0xa6ab00b2  sh          $t3, 0xB2($s5)
    ctx->pc = 0x177da8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 178), (uint16_t)GPR_U32(ctx, 11));
label_177dac:
    // 0x177dac: 0xaeb100b4  sw          $s1, 0xB4($s5)
    ctx->pc = 0x177dacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 17));
label_177db0:
    // 0x177db0: 0xa6aa00c8  sh          $t2, 0xC8($s5)
    ctx->pc = 0x177db0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 200), (uint16_t)GPR_U32(ctx, 10));
label_177db4:
    // 0x177db4: 0xa6ab00ca  sh          $t3, 0xCA($s5)
    ctx->pc = 0x177db4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 202), (uint16_t)GPR_U32(ctx, 11));
label_177db8:
    // 0x177db8: 0xaeb100cc  sw          $s1, 0xCC($s5)
    ctx->pc = 0x177db8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 17));
label_177dbc:
    // 0x177dbc: 0xa6a40078  sh          $a0, 0x78($s5)
    ctx->pc = 0x177dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 4));
label_177dc0:
    // 0x177dc0: 0x97a700a0  lhu         $a3, 0xA0($sp)
    ctx->pc = 0x177dc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_177dc4:
    // 0x177dc4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x177dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_177dc8:
    // 0x177dc8: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x177dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_177dcc:
    // 0x177dcc: 0xa6a8007a  sh          $t0, 0x7A($s5)
    ctx->pc = 0x177dccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 8));
label_177dd0:
    // 0x177dd0: 0x97a300a8  lhu         $v1, 0xA8($sp)
    ctx->pc = 0x177dd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
label_177dd4:
    // 0x177dd4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x177dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_177dd8:
    // 0x177dd8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x177dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_177ddc:
    // 0x177ddc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x177ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_177de0:
    // 0x177de0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_177de4:
    // 0x177de4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x177de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_177de8:
    // 0x177de8: 0xa6a60090  sh          $a2, 0x90($s5)
    ctx->pc = 0x177de8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 6));
label_177dec:
    // 0x177dec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177decu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_177df0:
    // 0x177df0: 0xa6a80092  sh          $t0, 0x92($s5)
    ctx->pc = 0x177df0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 8));
label_177df4:
    // 0x177df4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x177df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_177df8:
    // 0x177df8: 0xa6a400a8  sh          $a0, 0xA8($s5)
    ctx->pc = 0x177df8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 168), (uint16_t)GPR_U32(ctx, 4));
label_177dfc:
    // 0x177dfc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x177dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_177e00:
    // 0x177e00: 0x97a300b0  lhu         $v1, 0xB0($sp)
    ctx->pc = 0x177e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_177e04:
    // 0x177e04: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x177e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_177e08:
    // 0x177e08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x177e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_177e0c:
    // 0x177e0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x177e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_177e10:
    // 0x177e10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_177e14:
    // 0x177e14: 0xa6a400aa  sh          $a0, 0xAA($s5)
    ctx->pc = 0x177e14u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 170), (uint16_t)GPR_U32(ctx, 4));
label_177e18:
    // 0x177e18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x177e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_177e1c:
    // 0x177e1c: 0xa6a600c0  sh          $a2, 0xC0($s5)
    ctx->pc = 0x177e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 192), (uint16_t)GPR_U32(ctx, 6));
label_177e20:
    // 0x177e20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_177e24:
    // 0x177e24: 0xa6a400c2  sh          $a0, 0xC2($s5)
    ctx->pc = 0x177e24u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 194), (uint16_t)GPR_U32(ctx, 4));
label_177e28:
    // 0x177e28: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x177e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_177e2c:
    // 0x177e2c: 0x97a400a0  lhu         $a0, 0xA0($sp)
    ctx->pc = 0x177e2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_177e30:
    // 0x177e30: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x177e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_177e34:
    // 0x177e34: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x177e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_177e38:
    // 0x177e38: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x177e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_177e3c:
    // 0x177e3c: 0xfea30040  sd          $v1, 0x40($s5)
    ctx->pc = 0x177e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 3));
label_177e40:
    // 0x177e40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x177e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_177e44:
    // 0x177e44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x177e44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_177e48:
    // 0x177e48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177e48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_177e4c:
    // 0x177e4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x177e4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177e50:
    // 0x177e50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177e54:
    // 0x177e54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177e58:
    // 0x177e58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177e5c:
    // 0x177e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177e60:
    // 0x177e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177e64:
    // 0x177e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_177e68:
    // 0x177e68: 0x3e00008  jr          $ra
label_177e6c:
    if (ctx->pc == 0x177E6Cu) {
        ctx->pc = 0x177E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E68u;
        // 0x177e6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177E70u;
        goto label_177e70;
    }
    ctx->pc = 0x177E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E68u;
        // 0x177e6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E70u;
label_177e70:
    // 0x177e70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x177e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_177e74:
    // 0x177e74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_177e78:
    // 0x177e78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x177e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_177e7c:
    // 0x177e7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_177e80:
    // 0x177e80: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_177e84:
    // 0x177e84: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_177e88:
    // 0x177e88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_177e8c:
    // 0x177e8c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_177e90:
    // 0x177e90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x177e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_177e94:
    // 0x177e94: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x177e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_177e98:
    // 0x177e98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_177e9c:
    // 0x177e9c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x177e9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_177ea0:
    // 0x177ea0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_177ea4:
    // 0x177ea4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x177ea4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_177ea8:
    // 0x177ea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_177eac:
    // 0x177eac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_177eb0:
    // 0x177eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177eb4:
    // 0x177eb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x177eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177eb8:
    // 0x177eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_177ebc:
    // 0x177ebc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x177ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_177ec0:
    // 0x177ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177ec4:
    // 0x177ec4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x177ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_177ec8:
    // 0x177ec8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x177ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_177ecc:
    // 0x177ecc: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x177eccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_177ed0:
    // 0x177ed0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x177ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_177ed4:
    // 0x177ed4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x177ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177ed8:
    // 0x177ed8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_177edc:
    if (ctx->pc == 0x177EDCu) {
        ctx->pc = 0x177EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ED8u;
        // 0x177edc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177EE0u;
        goto label_177ee0;
    }
    ctx->pc = 0x177ED8u;
    {
        const bool branch_taken_0x177ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ED8u;
        // 0x177edc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ed8) {
            ctx->pc = 0x177F44u;
            goto label_177f44;
        }
    }
    ctx->pc = 0x177EE0u;
label_177ee0:
    // 0x177ee0: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x177ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_177ee4:
    // 0x177ee4: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_177ee8:
    // 0x177ee8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_177eec:
    // 0x177eec: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x177eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_177ef0:
    // 0x177ef0: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x177ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177ef4:
    // 0x177ef4: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x177ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_177ef8:
    // 0x177ef8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x177ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_177efc:
    // 0x177efc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x177efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_177f00:
    // 0x177f00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_177f04:
    // 0x177f04: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x177f04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_177f08:
    // 0x177f08: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x177f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_177f0c:
    // 0x177f0c: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x177f0cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_177f10:
    // 0x177f10: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x177f10u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_177f14:
    // 0x177f14: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x177f14u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_177f18:
    // 0x177f18: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x177f18u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_177f1c:
    // 0x177f1c: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x177f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_177f20:
    // 0x177f20: 0x9fa400b0  lwu         $a0, 0xB0($sp)
    ctx->pc = 0x177f20u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_177f24:
    // 0x177f24: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x177f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_177f28:
    // 0x177f28: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x177f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_177f2c:
    // 0x177f2c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x177f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_177f30:
    // 0x177f30: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x177f30u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_177f34:
    // 0x177f34: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x177f34u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_177f38:
    // 0x177f38: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x177f38u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_177f3c:
    // 0x177f3c: 0x10000019  b           . + 4 + (0x19 << 2)
label_177f40:
    if (ctx->pc == 0x177F40u) {
        ctx->pc = 0x177F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F3Cu;
        // 0x177f40: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177F44u;
        goto label_177f44;
    }
    ctx->pc = 0x177F3Cu;
    {
        const bool branch_taken_0x177f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F3Cu;
        // 0x177f40: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f3c) {
            ctx->pc = 0x177FA4u;
            goto label_177fa4;
        }
    }
    ctx->pc = 0x177F44u;
label_177f44:
    // 0x177f44: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_177f48:
    // 0x177f48: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177f48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_177f4c:
    // 0x177f4c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_177f50:
    // 0x177f50: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_177f54:
    // 0x177f54: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x177f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177f58:
    // 0x177f58: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x177f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_177f5c:
    // 0x177f5c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_177f60:
    // 0x177f60: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_177f64:
    // 0x177f64: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x177f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_177f68:
    // 0x177f68: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x177f68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_177f6c:
    // 0x177f6c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x177f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_177f70:
    // 0x177f70: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x177f70u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_177f74:
    // 0x177f74: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x177f74u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_177f78:
    // 0x177f78: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x177f78u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_177f7c:
    // 0x177f7c: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x177f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_177f80:
    // 0x177f80: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x177f80u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_177f84:
    // 0x177f84: 0x9fa400b0  lwu         $a0, 0xB0($sp)
    ctx->pc = 0x177f84u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_177f88:
    // 0x177f88: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x177f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_177f8c:
    // 0x177f8c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x177f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_177f90:
    // 0x177f90: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x177f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_177f94:
    // 0x177f94: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x177f94u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_177f98:
    // 0x177f98: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x177f98u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_177f9c:
    // 0x177f9c: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x177f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_177fa0:
    // 0x177fa0: 0xfea20048  sd          $v0, 0x48($s5)
    ctx->pc = 0x177fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
label_177fa4:
    // 0x177fa4: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x177fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
label_177fa8:
    // 0x177fa8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x177fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_177fac:
    // 0x177fac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x177facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_177fb0:
    // 0x177fb0: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x177fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_177fb4:
    // 0x177fb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177fb8:
    // 0x177fb8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x177fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_177fbc:
    // 0x177fbc: 0xfea30050  sd          $v1, 0x50($s5)
    ctx->pc = 0x177fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 3));
label_177fc0:
    // 0x177fc0: 0x34421531  ori         $v0, $v0, 0x1531
    ctx->pc = 0x177fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5425);
label_177fc4:
    // 0x177fc4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x177fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177fc8:
    // 0x177fc8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x177fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_177fcc:
    // 0x177fcc: 0x3c025315  lui         $v0, 0x5315
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21269 << 16));
label_177fd0:
    // 0x177fd0: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_177fd4:
    // 0x177fd4: 0x34433106  ori         $v1, $v0, 0x3106
    ctx->pc = 0x177fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12550);
label_177fd8:
    // 0x177fd8: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x177fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_177fdc:
    // 0x177fdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177fe0:
    // 0x177fe0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x177fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_177fe4:
    // 0x177fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177fe8:
    // 0x177fe8: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x177fe8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_177fec:
    // 0x177fec: 0xc08dc56  jal         func_237158
label_177ff0:
    if (ctx->pc == 0x177FF0u) {
        ctx->pc = 0x177FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FECu;
        // 0x177ff0: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177FF4u;
        goto label_177ff4;
    }
    ctx->pc = 0x177FECu;
    SET_GPR_U32(ctx, 31, 0x177FF4u);
    ctx->pc = 0x177FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FECu;
    // 0x177ff0: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x177FF4u;
label_177ff4:
    // 0x177ff4: 0x8fab00b8  lw          $t3, 0xB8($sp)
    ctx->pc = 0x177ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177ff8:
    // 0x177ff8: 0x33c9ffff  andi        $t1, $fp, 0xFFFF
    ctx->pc = 0x177ff8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_177ffc:
    // 0x177ffc: 0x2692821  addu        $a1, $s3, $t1
    ctx->pc = 0x177ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_178000:
    // 0x178000: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_178004:
    // 0x178004: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x178004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_178008:
    // 0x178008: 0x32c8ffff  andi        $t0, $s6, 0xFFFF
    ctx->pc = 0x178008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_17800c:
    // 0x17800c: 0x24a76c00  addiu       $a3, $a1, 0x6C00
    ctx->pc = 0x17800cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_178010:
    // 0x178010: 0x1096021  addu        $t4, $t0, $t1
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_178014:
    // 0x178014: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x178014u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_178018:
    // 0x178018: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_17801c:
    // 0x17801c: 0x84138  dsll        $t0, $t0, 4
    ctx->pc = 0x17801cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 4);
label_178020:
    // 0x178020: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_178024:
    // 0x178024: 0xb5a78  dsll        $t3, $t3, 9
    ctx->pc = 0x178024u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 9);
label_178028:
    // 0x178028: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17802c:
    // 0x17802c: 0x356b015c  ori         $t3, $t3, 0x15C
    ctx->pc = 0x17802cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)348);
label_178030:
    // 0x178030: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x178030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_178034:
    // 0x178034: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x178034u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
label_178038:
    // 0x178038: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_17803c:
    // 0x17803c: 0xfe140000  sd          $s4, 0x0($s0)
    ctx->pc = 0x17803cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 20));
label_178040:
    // 0x178040: 0xc5900  sll         $t3, $t4, 4
    ctx->pc = 0x178040u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_178044:
    // 0x178044: 0xa2040010  sb          $a0, 0x10($s0)
    ctx->pc = 0x178044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 4));
label_178048:
    // 0x178048: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x178048u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_17804c:
    // 0x17804c: 0xa2040011  sb          $a0, 0x11($s0)
    ctx->pc = 0x17804cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 4));
label_178050:
    // 0x178050: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x178050u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_178054:
    // 0x178054: 0xa2040012  sb          $a0, 0x12($s0)
    ctx->pc = 0x178054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 4));
label_178058:
    // 0x178058: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x178058u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_17805c:
    // 0x17805c: 0xa2040013  sb          $a0, 0x13($s0)
    ctx->pc = 0x17805cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 4));
label_178060:
    // 0x178060: 0x32eaffff  andi        $t2, $s7, 0xFFFF
    ctx->pc = 0x178060u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_178064:
    // 0x178064: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x178064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_178068:
    // 0x178068: 0x350d000a  ori         $t5, $t0, 0xA
    ctx->pc = 0x178068u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
label_17806c:
    // 0x17806c: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x17806cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
label_178070:
    // 0x178070: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_178074:
    // 0x178074: 0xa2040029  sb          $a0, 0x29($s0)
    ctx->pc = 0x178074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 4));
label_178078:
    // 0x178078: 0xc63b8  dsll        $t4, $t4, 14
    ctx->pc = 0x178078u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 14);
label_17807c:
    // 0x17807c: 0xa204002a  sb          $a0, 0x2A($s0)
    ctx->pc = 0x17807cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 4));
label_178080:
    // 0x178080: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x178080u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_178084:
    // 0x178084: 0xa204002b  sb          $a0, 0x2B($s0)
    ctx->pc = 0x178084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 4));
label_178088:
    // 0x178088: 0xa6638  dsll        $t4, $t2, 24
    ctx->pc = 0x178088u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 24);
label_17808c:
    // 0x17808c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x17808cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_178090:
    // 0x178090: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_178094:
    // 0x178094: 0xa2040040  sb          $a0, 0x40($s0)
    ctx->pc = 0x178094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 4));
label_178098:
    // 0x178098: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x178098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_17809c:
    // 0x17809c: 0xa2040041  sb          $a0, 0x41($s0)
    ctx->pc = 0x17809cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 4));
label_1780a0:
    // 0x1780a0: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1780a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_1780a4:
    // 0x1780a4: 0xa2040042  sb          $a0, 0x42($s0)
    ctx->pc = 0x1780a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 4));
label_1780a8:
    // 0x1780a8: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x1780a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
label_1780ac:
    // 0x1780ac: 0xa2040043  sb          $a0, 0x43($s0)
    ctx->pc = 0x1780acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 4));
label_1780b0:
    // 0x1780b0: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1780b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1780b4:
    // 0x1780b4: 0xa2040058  sb          $a0, 0x58($s0)
    ctx->pc = 0x1780b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 4));
label_1780b8:
    // 0x1780b8: 0xa2040059  sb          $a0, 0x59($s0)
    ctx->pc = 0x1780b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 4));
label_1780bc:
    // 0x1780bc: 0xa204005a  sb          $a0, 0x5A($s0)
    ctx->pc = 0x1780bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 4));
label_1780c0:
    // 0x1780c0: 0xa204005b  sb          $a0, 0x5B($s0)
    ctx->pc = 0x1780c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 4));
label_1780c4:
    // 0x1780c4: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1780c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_1780c8:
    // 0x1780c8: 0xa6a60080  sh          $a2, 0x80($s5)
    ctx->pc = 0x1780c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 6));
label_1780cc:
    // 0x1780cc: 0xa6a50082  sh          $a1, 0x82($s5)
    ctx->pc = 0x1780ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 130), (uint16_t)GPR_U32(ctx, 5));
label_1780d0:
    // 0x1780d0: 0xaeb10084  sw          $s1, 0x84($s5)
    ctx->pc = 0x1780d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 17));
label_1780d4:
    // 0x1780d4: 0xa6a70098  sh          $a3, 0x98($s5)
    ctx->pc = 0x1780d4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 152), (uint16_t)GPR_U32(ctx, 7));
label_1780d8:
    // 0x1780d8: 0xa6a5009a  sh          $a1, 0x9A($s5)
    ctx->pc = 0x1780d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 154), (uint16_t)GPR_U32(ctx, 5));
label_1780dc:
    // 0x1780dc: 0xaeb1009c  sw          $s1, 0x9C($s5)
    ctx->pc = 0x1780dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 17));
label_1780e0:
    // 0x1780e0: 0xa6a600b0  sh          $a2, 0xB0($s5)
    ctx->pc = 0x1780e0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 176), (uint16_t)GPR_U32(ctx, 6));
label_1780e4:
    // 0x1780e4: 0x97a400a0  lhu         $a0, 0xA0($sp)
    ctx->pc = 0x1780e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_1780e8:
    // 0x1780e8: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1780ec:
    // 0x1780ec: 0x1443021  addu        $a2, $t2, $a0
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1780f0:
    // 0x1780f0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1780f4:
    // 0x1780f4: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1780f8:
    // 0x1780f8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1780f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1780fc:
    // 0x1780fc: 0xa6a400b2  sh          $a0, 0xB2($s5)
    ctx->pc = 0x1780fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 178), (uint16_t)GPR_U32(ctx, 4));
label_178100:
    // 0x178100: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x178100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_178104:
    // 0x178104: 0xaeb100b4  sw          $s1, 0xB4($s5)
    ctx->pc = 0x178104u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 17));
label_178108:
    // 0x178108: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_17810c:
    // 0x17810c: 0xa6a700c8  sh          $a3, 0xC8($s5)
    ctx->pc = 0x17810cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 200), (uint16_t)GPR_U32(ctx, 7));
label_178110:
    // 0x178110: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_178114:
    // 0x178114: 0xa6a400ca  sh          $a0, 0xCA($s5)
    ctx->pc = 0x178114u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 202), (uint16_t)GPR_U32(ctx, 4));
label_178118:
    // 0x178118: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x178118u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_17811c:
    // 0x17811c: 0xaeb100cc  sw          $s1, 0xCC($s5)
    ctx->pc = 0x17811cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 17));
label_178120:
    // 0x178120: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x178120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_178124:
    // 0x178124: 0xa6a90078  sh          $t1, 0x78($s5)
    ctx->pc = 0x178124u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 9));
label_178128:
    // 0x178128: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x178128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
label_17812c:
    // 0x17812c: 0xa6a8007a  sh          $t0, 0x7A($s5)
    ctx->pc = 0x17812cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 8));
label_178130:
    // 0x178130: 0xa6ab0090  sh          $t3, 0x90($s5)
    ctx->pc = 0x178130u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 11));
label_178134:
    // 0x178134: 0xa6a80092  sh          $t0, 0x92($s5)
    ctx->pc = 0x178134u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 8));
label_178138:
    // 0x178138: 0xa6a900a8  sh          $t1, 0xA8($s5)
    ctx->pc = 0x178138u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 168), (uint16_t)GPR_U32(ctx, 9));
label_17813c:
    // 0x17813c: 0xa6a500aa  sh          $a1, 0xAA($s5)
    ctx->pc = 0x17813cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 170), (uint16_t)GPR_U32(ctx, 5));
label_178140:
    // 0x178140: 0xa6ab00c0  sh          $t3, 0xC0($s5)
    ctx->pc = 0x178140u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 192), (uint16_t)GPR_U32(ctx, 11));
label_178144:
    // 0x178144: 0xa6a500c2  sh          $a1, 0xC2($s5)
    ctx->pc = 0x178144u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 194), (uint16_t)GPR_U32(ctx, 5));
label_178148:
    // 0x178148: 0xfea30040  sd          $v1, 0x40($s5)
    ctx->pc = 0x178148u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 3));
label_17814c:
    // 0x17814c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_178150:
    // 0x178150: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x178150u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_178154:
    // 0x178154: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x178154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_178158:
    // 0x178158: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x178158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17815c:
    // 0x17815c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17815cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_178160:
    // 0x178160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_178164:
    // 0x178164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178168:
    // 0x178168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17816c:
    // 0x17816c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17816cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178170:
    // 0x178170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178174:
    // 0x178174: 0x3e00008  jr          $ra
label_178178:
    if (ctx->pc == 0x178178u) {
        ctx->pc = 0x178178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178174u;
        // 0x178178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17817Cu;
        goto label_17817c;
    }
    ctx->pc = 0x178174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178174u;
        // 0x178178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17817Cu;
label_17817c:
    // 0x17817c: 0x0  nop
    ctx->pc = 0x17817cu;
    // NOP
label_178180:
    // 0x178180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_178184:
    // 0x178184: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_178188:
    // 0x178188: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x178188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17818c:
    // 0x17818c: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x17818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_178190:
    // 0x178190: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x178190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_178194:
    // 0x178194: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_178198:
    // 0x178198: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x178198u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17819c:
    // 0x17819c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1781a0:
    // 0x1781a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1781a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1781a4:
    // 0x1781a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1781a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1781a8:
    // 0x1781a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1781a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1781ac:
    // 0x1781ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1781acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1781b0:
    // 0x1781b0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1781b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1781b4:
    // 0x1781b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1781b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1781b8:
    // 0x1781b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1781b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1781bc:
    // 0x1781bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1781bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1781c0:
    // 0x1781c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1781c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1781c4:
    // 0x1781c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1781c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1781c8:
    // 0x1781c8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x1781c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1781cc:
    // 0x1781cc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1781ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_1781d0:
    // 0x1781d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1781d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1781d4:
    // 0x1781d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1781d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1781d8:
    // 0x1781d8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1781d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1781dc:
    // 0x1781dc: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
label_1781e0:
    if (ctx->pc == 0x1781E0u) {
        ctx->pc = 0x1781E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781DCu;
        // 0x1781e0: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1781E4u;
        goto label_1781e4;
    }
    ctx->pc = 0x1781DCu;
    {
        const bool branch_taken_0x1781dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1781E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781DCu;
        // 0x1781e0: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781dc) {
            ctx->pc = 0x178234u;
            goto label_178234;
        }
    }
    ctx->pc = 0x1781E4u;
label_1781e4:
    // 0x1781e4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1781e8:
    // 0x1781e8: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1781e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1781ec:
    // 0x1781ec: 0x24422170  addiu       $v0, $v0, 0x2170
    ctx->pc = 0x1781ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
label_1781f0:
    // 0x1781f0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1781f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1781f4:
    // 0x1781f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1781f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1781f8:
    // 0x1781f8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1781f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1781fc:
    // 0x1781fc: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1781fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_178200:
    // 0x178200: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_178204:
    // 0x178204: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_178208:
    // 0x178208: 0xfec70010  sd          $a3, 0x10($s6)
    ctx->pc = 0x178208u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 7));
label_17820c:
    // 0x17820c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x17820cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_178210:
    // 0x178210: 0xfec60018  sd          $a2, 0x18($s6)
    ctx->pc = 0x178210u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 6));
label_178214:
    // 0x178214: 0xfec50020  sd          $a1, 0x20($s6)
    ctx->pc = 0x178214u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 5));
label_178218:
    // 0x178218: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x178218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_17821c:
    // 0x17821c: 0xfec40028  sd          $a0, 0x28($s6)
    ctx->pc = 0x17821cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 40), GPR_U64(ctx, 4));
label_178220:
    // 0x178220: 0xfec00030  sd          $zero, 0x30($s6)
    ctx->pc = 0x178220u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 0));
label_178224:
    // 0x178224: 0xfec30038  sd          $v1, 0x38($s6)
    ctx->pc = 0x178224u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 56), GPR_U64(ctx, 3));
label_178228:
    // 0x178228: 0xfec00040  sd          $zero, 0x40($s6)
    ctx->pc = 0x178228u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 64), GPR_U64(ctx, 0));
label_17822c:
    // 0x17822c: 0x10000014  b           . + 4 + (0x14 << 2)
label_178230:
    if (ctx->pc == 0x178230u) {
        ctx->pc = 0x178230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17822Cu;
        // 0x178230: 0xfec20048  sd          $v0, 0x48($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178234u;
        goto label_178234;
    }
    ctx->pc = 0x17822Cu;
    {
        const bool branch_taken_0x17822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17822Cu;
        // 0x178230: 0xfec20048  sd          $v0, 0x48($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17822c) {
            ctx->pc = 0x178280u;
            goto label_178280;
        }
    }
    ctx->pc = 0x178234u;
label_178234:
    // 0x178234: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x178234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_178238:
    // 0x178238: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x178238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_17823c:
    // 0x17823c: 0x24422170  addiu       $v0, $v0, 0x2170
    ctx->pc = 0x17823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
label_178240:
    // 0x178240: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_178244:
    // 0x178244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_178248:
    // 0x178248: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x178248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17824c:
    // 0x17824c: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x17824cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_178250:
    // 0x178250: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x178250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_178254:
    // 0x178254: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x178254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_178258:
    // 0x178258: 0xfec70010  sd          $a3, 0x10($s6)
    ctx->pc = 0x178258u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 7));
label_17825c:
    // 0x17825c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x17825cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_178260:
    // 0x178260: 0xfec60018  sd          $a2, 0x18($s6)
    ctx->pc = 0x178260u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 6));
label_178264:
    // 0x178264: 0xfec50020  sd          $a1, 0x20($s6)
    ctx->pc = 0x178264u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 5));
label_178268:
    // 0x178268: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17826c:
    // 0x17826c: 0xfec40028  sd          $a0, 0x28($s6)
    ctx->pc = 0x17826cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 40), GPR_U64(ctx, 4));
label_178270:
    // 0x178270: 0xfec00030  sd          $zero, 0x30($s6)
    ctx->pc = 0x178270u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 0));
label_178274:
    // 0x178274: 0xfec30038  sd          $v1, 0x38($s6)
    ctx->pc = 0x178274u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 56), GPR_U64(ctx, 3));
label_178278:
    // 0x178278: 0xfec00040  sd          $zero, 0x40($s6)
    ctx->pc = 0x178278u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 64), GPR_U64(ctx, 0));
label_17827c:
    // 0x17827c: 0xfec20048  sd          $v0, 0x48($s6)
    ctx->pc = 0x17827cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
label_178280:
    // 0x178280: 0x3c02a400  lui         $v0, 0xA400
    ctx->pc = 0x178280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41984 << 16));
label_178284:
    // 0x178284: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x178284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_178288:
    // 0x178288: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x178288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17828c:
    // 0x17828c: 0x26d00060  addiu       $s0, $s6, 0x60
    ctx->pc = 0x17828cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_178290:
    // 0x178290: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x178290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_178294:
    // 0x178294: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_178298:
    // 0x178298: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_17829c:
    // 0x17829c: 0xfec40050  sd          $a0, 0x50($s6)
    ctx->pc = 0x17829cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 80), GPR_U64(ctx, 4));
label_1782a0:
    // 0x1782a0: 0x3c021515  lui         $v0, 0x1515
    ctx->pc = 0x1782a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5397 << 16));
label_1782a4:
    // 0x1782a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1782a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1782a8:
    // 0x1782a8: 0x34421510  ori         $v0, $v0, 0x1510
    ctx->pc = 0x1782a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5392);
label_1782ac:
    // 0x1782ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1782acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1782b0:
    // 0x1782b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1782b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1782b4:
    // 0x1782b4: 0x51100b  movn        $v0, $v0, $s1
    ctx->pc = 0x1782b4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 2));
label_1782b8:
    // 0x1782b8: 0xc08dc56  jal         func_237158
label_1782bc:
    if (ctx->pc == 0x1782BCu) {
        ctx->pc = 0x1782BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782B8u;
        // 0x1782bc: 0xfec20058  sd          $v0, 0x58($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1782C0u;
        goto label_1782c0;
    }
    ctx->pc = 0x1782B8u;
    SET_GPR_U32(ctx, 31, 0x1782C0u);
    ctx->pc = 0x1782BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782B8u;
    // 0x1782bc: 0xfec20058  sd          $v0, 0x58($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 88), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x1782C0u;
label_1782c0:
    // 0x1782c0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1782c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_1782c4:
    // 0x1782c4: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1782c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1782c8:
    // 0x1782c8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1782c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1782cc:
    // 0x1782cc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1782ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1782d0:
    // 0x1782d0: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x1782d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
label_1782d4:
    // 0x1782d4: 0x3485014c  ori         $a1, $a0, 0x14C
    ctx->pc = 0x1782d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)332);
label_1782d8:
    // 0x1782d8: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x1782d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_1782dc:
    // 0x1782dc: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1782dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
label_1782e0:
    // 0x1782e0: 0x24866c00  addiu       $a2, $a0, 0x6C00
    ctx->pc = 0x1782e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1782e4:
    // 0x1782e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1782e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1782e8:
    // 0x1782e8: 0x24876c00  addiu       $a3, $a0, 0x6C00
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1782ec:
    // 0x1782ec: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1782ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_1782f0:
    // 0x1782f0: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x1782f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1782f4:
    // 0x1782f4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1782f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1782f8:
    // 0x1782f8: 0x24857900  addiu       $a1, $a0, 0x7900
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1782fc:
    // 0x1782fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1782fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_178300:
    // 0x178300: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x178300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_178304:
    // 0x178304: 0x24687900  addiu       $t0, $v1, 0x7900
    ctx->pc = 0x178304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_178308:
    // 0x178308: 0xa2040008  sb          $a0, 0x8($s0)
    ctx->pc = 0x178308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 4));
label_17830c:
    // 0x17830c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_178310:
    // 0x178310: 0xa2040009  sb          $a0, 0x9($s0)
    ctx->pc = 0x178310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 4));
label_178314:
    // 0x178314: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x178314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
label_178318:
    // 0x178318: 0xa204000b  sb          $a0, 0xB($s0)
    ctx->pc = 0x178318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 4));
label_17831c:
    // 0x17831c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x17831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_178320:
    // 0x178320: 0xa2040018  sb          $a0, 0x18($s0)
    ctx->pc = 0x178320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 4));
label_178324:
    // 0x178324: 0xa2040019  sb          $a0, 0x19($s0)
    ctx->pc = 0x178324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 4));
label_178328:
    // 0x178328: 0xa204001a  sb          $a0, 0x1A($s0)
    ctx->pc = 0x178328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 4));
label_17832c:
    // 0x17832c: 0xa204001b  sb          $a0, 0x1B($s0)
    ctx->pc = 0x17832cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 4));
label_178330:
    // 0x178330: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x178330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_178334:
    // 0x178334: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x178334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
label_178338:
    // 0x178338: 0xa2040029  sb          $a0, 0x29($s0)
    ctx->pc = 0x178338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 4));
label_17833c:
    // 0x17833c: 0xa204002a  sb          $a0, 0x2A($s0)
    ctx->pc = 0x17833cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 4));
label_178340:
    // 0x178340: 0xa204002b  sb          $a0, 0x2B($s0)
    ctx->pc = 0x178340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 4));
label_178344:
    // 0x178344: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x178344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_178348:
    // 0x178348: 0xa2040038  sb          $a0, 0x38($s0)
    ctx->pc = 0x178348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 4));
label_17834c:
    // 0x17834c: 0xa2040039  sb          $a0, 0x39($s0)
    ctx->pc = 0x17834cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 4));
label_178350:
    // 0x178350: 0xa204003a  sb          $a0, 0x3A($s0)
    ctx->pc = 0x178350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 4));
label_178354:
    // 0x178354: 0xa204003b  sb          $a0, 0x3B($s0)
    ctx->pc = 0x178354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 4));
label_178358:
    // 0x178358: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x178358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_17835c:
    // 0x17835c: 0xa6c60070  sh          $a2, 0x70($s6)
    ctx->pc = 0x17835cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 112), (uint16_t)GPR_U32(ctx, 6));
label_178360:
    // 0x178360: 0xa6c50072  sh          $a1, 0x72($s6)
    ctx->pc = 0x178360u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 114), (uint16_t)GPR_U32(ctx, 5));
label_178364:
    // 0x178364: 0xaed30074  sw          $s3, 0x74($s6)
    ctx->pc = 0x178364u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 19));
label_178368:
    // 0x178368: 0xa6c70080  sh          $a3, 0x80($s6)
    ctx->pc = 0x178368u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 128), (uint16_t)GPR_U32(ctx, 7));
label_17836c:
    // 0x17836c: 0xa6c50082  sh          $a1, 0x82($s6)
    ctx->pc = 0x17836cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 130), (uint16_t)GPR_U32(ctx, 5));
label_178370:
    // 0x178370: 0xaed30084  sw          $s3, 0x84($s6)
    ctx->pc = 0x178370u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 132), GPR_U32(ctx, 19));
label_178374:
    // 0x178374: 0xa6c60090  sh          $a2, 0x90($s6)
    ctx->pc = 0x178374u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 144), (uint16_t)GPR_U32(ctx, 6));
label_178378:
    // 0x178378: 0xa6c80092  sh          $t0, 0x92($s6)
    ctx->pc = 0x178378u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 146), (uint16_t)GPR_U32(ctx, 8));
label_17837c:
    // 0x17837c: 0xaed30094  sw          $s3, 0x94($s6)
    ctx->pc = 0x17837cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 19));
label_178380:
    // 0x178380: 0xa6c700a0  sh          $a3, 0xA0($s6)
    ctx->pc = 0x178380u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 160), (uint16_t)GPR_U32(ctx, 7));
label_178384:
    // 0x178384: 0xa6c800a2  sh          $t0, 0xA2($s6)
    ctx->pc = 0x178384u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 162), (uint16_t)GPR_U32(ctx, 8));
label_178388:
    // 0x178388: 0xaed300a4  sw          $s3, 0xA4($s6)
    ctx->pc = 0x178388u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 19));
label_17838c:
    // 0x17838c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_178390:
    // 0x178390: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x178390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_178394:
    // 0x178394: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x178394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_178398:
    // 0x178398: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x178398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17839c:
    // 0x17839c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17839cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1783a0:
    // 0x1783a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1783a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1783a4:
    // 0x1783a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1783a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1783a8:
    // 0x1783a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1783a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1783ac:
    // 0x1783ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1783acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1783b0u;
    return;
}
