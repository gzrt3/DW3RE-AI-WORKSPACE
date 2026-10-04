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


void FUN_0014eba0_part42(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x162bf0u: goto label_162bf0;
        case 0x162bf4u: goto label_162bf4;
        case 0x162bf8u: goto label_162bf8;
        case 0x162bfcu: goto label_162bfc;
        case 0x162c00u: goto label_162c00;
        case 0x162c04u: goto label_162c04;
        case 0x162c08u: goto label_162c08;
        case 0x162c0cu: goto label_162c0c;
        case 0x162c10u: goto label_162c10;
        case 0x162c14u: goto label_162c14;
        case 0x162c18u: goto label_162c18;
        case 0x162c1cu: goto label_162c1c;
        case 0x162c20u: goto label_162c20;
        case 0x162c24u: goto label_162c24;
        case 0x162c28u: goto label_162c28;
        case 0x162c2cu: goto label_162c2c;
        case 0x162c30u: goto label_162c30;
        case 0x162c34u: goto label_162c34;
        case 0x162c38u: goto label_162c38;
        case 0x162c3cu: goto label_162c3c;
        case 0x162c40u: goto label_162c40;
        case 0x162c44u: goto label_162c44;
        case 0x162c48u: goto label_162c48;
        case 0x162c4cu: goto label_162c4c;
        case 0x162c50u: goto label_162c50;
        case 0x162c54u: goto label_162c54;
        case 0x162c58u: goto label_162c58;
        case 0x162c5cu: goto label_162c5c;
        case 0x162c60u: goto label_162c60;
        case 0x162c64u: goto label_162c64;
        case 0x162c68u: goto label_162c68;
        case 0x162c6cu: goto label_162c6c;
        case 0x162c70u: goto label_162c70;
        case 0x162c74u: goto label_162c74;
        case 0x162c78u: goto label_162c78;
        case 0x162c7cu: goto label_162c7c;
        case 0x162c80u: goto label_162c80;
        case 0x162c84u: goto label_162c84;
        case 0x162c88u: goto label_162c88;
        case 0x162c8cu: goto label_162c8c;
        case 0x162c90u: goto label_162c90;
        case 0x162c94u: goto label_162c94;
        case 0x162c98u: goto label_162c98;
        case 0x162c9cu: goto label_162c9c;
        case 0x162ca0u: goto label_162ca0;
        case 0x162ca4u: goto label_162ca4;
        case 0x162ca8u: goto label_162ca8;
        case 0x162cacu: goto label_162cac;
        case 0x162cb0u: goto label_162cb0;
        case 0x162cb4u: goto label_162cb4;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cbcu: goto label_162cbc;
        case 0x162cc0u: goto label_162cc0;
        case 0x162cc4u: goto label_162cc4;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cccu: goto label_162ccc;
        case 0x162cd0u: goto label_162cd0;
        case 0x162cd4u: goto label_162cd4;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cdcu: goto label_162cdc;
        case 0x162ce0u: goto label_162ce0;
        case 0x162ce4u: goto label_162ce4;
        case 0x162ce8u: goto label_162ce8;
        case 0x162cecu: goto label_162cec;
        case 0x162cf0u: goto label_162cf0;
        case 0x162cf4u: goto label_162cf4;
        case 0x162cf8u: goto label_162cf8;
        case 0x162cfcu: goto label_162cfc;
        case 0x162d00u: goto label_162d00;
        case 0x162d04u: goto label_162d04;
        case 0x162d08u: goto label_162d08;
        case 0x162d0cu: goto label_162d0c;
        case 0x162d10u: goto label_162d10;
        case 0x162d14u: goto label_162d14;
        case 0x162d18u: goto label_162d18;
        case 0x162d1cu: goto label_162d1c;
        case 0x162d20u: goto label_162d20;
        case 0x162d24u: goto label_162d24;
        case 0x162d28u: goto label_162d28;
        case 0x162d2cu: goto label_162d2c;
        case 0x162d30u: goto label_162d30;
        case 0x162d34u: goto label_162d34;
        case 0x162d38u: goto label_162d38;
        case 0x162d3cu: goto label_162d3c;
        case 0x162d40u: goto label_162d40;
        case 0x162d44u: goto label_162d44;
        case 0x162d48u: goto label_162d48;
        case 0x162d4cu: goto label_162d4c;
        case 0x162d50u: goto label_162d50;
        case 0x162d54u: goto label_162d54;
        case 0x162d58u: goto label_162d58;
        case 0x162d5cu: goto label_162d5c;
        case 0x162d60u: goto label_162d60;
        case 0x162d64u: goto label_162d64;
        case 0x162d68u: goto label_162d68;
        case 0x162d6cu: goto label_162d6c;
        case 0x162d70u: goto label_162d70;
        case 0x162d74u: goto label_162d74;
        case 0x162d78u: goto label_162d78;
        case 0x162d7cu: goto label_162d7c;
        case 0x162d80u: goto label_162d80;
        case 0x162d84u: goto label_162d84;
        case 0x162d88u: goto label_162d88;
        case 0x162d8cu: goto label_162d8c;
        case 0x162d90u: goto label_162d90;
        case 0x162d94u: goto label_162d94;
        case 0x162d98u: goto label_162d98;
        case 0x162d9cu: goto label_162d9c;
        case 0x162da0u: goto label_162da0;
        case 0x162da4u: goto label_162da4;
        case 0x162da8u: goto label_162da8;
        case 0x162dacu: goto label_162dac;
        case 0x162db0u: goto label_162db0;
        case 0x162db4u: goto label_162db4;
        case 0x162db8u: goto label_162db8;
        case 0x162dbcu: goto label_162dbc;
        case 0x162dc0u: goto label_162dc0;
        case 0x162dc4u: goto label_162dc4;
        case 0x162dc8u: goto label_162dc8;
        case 0x162dccu: goto label_162dcc;
        case 0x162dd0u: goto label_162dd0;
        case 0x162dd4u: goto label_162dd4;
        case 0x162dd8u: goto label_162dd8;
        case 0x162ddcu: goto label_162ddc;
        case 0x162de0u: goto label_162de0;
        case 0x162de4u: goto label_162de4;
        case 0x162de8u: goto label_162de8;
        case 0x162decu: goto label_162dec;
        case 0x162df0u: goto label_162df0;
        case 0x162df4u: goto label_162df4;
        case 0x162df8u: goto label_162df8;
        case 0x162dfcu: goto label_162dfc;
        case 0x162e00u: goto label_162e00;
        case 0x162e04u: goto label_162e04;
        case 0x162e08u: goto label_162e08;
        case 0x162e0cu: goto label_162e0c;
        case 0x162e10u: goto label_162e10;
        case 0x162e14u: goto label_162e14;
        case 0x162e18u: goto label_162e18;
        case 0x162e1cu: goto label_162e1c;
        case 0x162e20u: goto label_162e20;
        case 0x162e24u: goto label_162e24;
        case 0x162e28u: goto label_162e28;
        case 0x162e2cu: goto label_162e2c;
        case 0x162e30u: goto label_162e30;
        case 0x162e34u: goto label_162e34;
        case 0x162e38u: goto label_162e38;
        case 0x162e3cu: goto label_162e3c;
        case 0x162e40u: goto label_162e40;
        case 0x162e44u: goto label_162e44;
        case 0x162e48u: goto label_162e48;
        case 0x162e4cu: goto label_162e4c;
        case 0x162e50u: goto label_162e50;
        case 0x162e54u: goto label_162e54;
        case 0x162e58u: goto label_162e58;
        case 0x162e5cu: goto label_162e5c;
        case 0x162e60u: goto label_162e60;
        case 0x162e64u: goto label_162e64;
        case 0x162e68u: goto label_162e68;
        case 0x162e6cu: goto label_162e6c;
        case 0x162e70u: goto label_162e70;
        case 0x162e74u: goto label_162e74;
        case 0x162e78u: goto label_162e78;
        case 0x162e7cu: goto label_162e7c;
        case 0x162e80u: goto label_162e80;
        case 0x162e84u: goto label_162e84;
        case 0x162e88u: goto label_162e88;
        case 0x162e8cu: goto label_162e8c;
        case 0x162e90u: goto label_162e90;
        case 0x162e94u: goto label_162e94;
        case 0x162e98u: goto label_162e98;
        case 0x162e9cu: goto label_162e9c;
        case 0x162ea0u: goto label_162ea0;
        case 0x162ea4u: goto label_162ea4;
        case 0x162ea8u: goto label_162ea8;
        case 0x162eacu: goto label_162eac;
        case 0x162eb0u: goto label_162eb0;
        case 0x162eb4u: goto label_162eb4;
        case 0x162eb8u: goto label_162eb8;
        case 0x162ebcu: goto label_162ebc;
        case 0x162ec0u: goto label_162ec0;
        case 0x162ec4u: goto label_162ec4;
        case 0x162ec8u: goto label_162ec8;
        case 0x162eccu: goto label_162ecc;
        case 0x162ed0u: goto label_162ed0;
        case 0x162ed4u: goto label_162ed4;
        case 0x162ed8u: goto label_162ed8;
        case 0x162edcu: goto label_162edc;
        case 0x162ee0u: goto label_162ee0;
        case 0x162ee4u: goto label_162ee4;
        case 0x162ee8u: goto label_162ee8;
        case 0x162eecu: goto label_162eec;
        case 0x162ef0u: goto label_162ef0;
        case 0x162ef4u: goto label_162ef4;
        case 0x162ef8u: goto label_162ef8;
        case 0x162efcu: goto label_162efc;
        case 0x162f00u: goto label_162f00;
        case 0x162f04u: goto label_162f04;
        case 0x162f08u: goto label_162f08;
        case 0x162f0cu: goto label_162f0c;
        case 0x162f10u: goto label_162f10;
        case 0x162f14u: goto label_162f14;
        case 0x162f18u: goto label_162f18;
        case 0x162f1cu: goto label_162f1c;
        case 0x162f20u: goto label_162f20;
        case 0x162f24u: goto label_162f24;
        case 0x162f28u: goto label_162f28;
        case 0x162f2cu: goto label_162f2c;
        case 0x162f30u: goto label_162f30;
        case 0x162f34u: goto label_162f34;
        case 0x162f38u: goto label_162f38;
        case 0x162f3cu: goto label_162f3c;
        case 0x162f40u: goto label_162f40;
        case 0x162f44u: goto label_162f44;
        case 0x162f48u: goto label_162f48;
        case 0x162f4cu: goto label_162f4c;
        case 0x162f50u: goto label_162f50;
        case 0x162f54u: goto label_162f54;
        case 0x162f58u: goto label_162f58;
        case 0x162f5cu: goto label_162f5c;
        case 0x162f60u: goto label_162f60;
        case 0x162f64u: goto label_162f64;
        case 0x162f68u: goto label_162f68;
        case 0x162f6cu: goto label_162f6c;
        case 0x162f70u: goto label_162f70;
        case 0x162f74u: goto label_162f74;
        case 0x162f78u: goto label_162f78;
        case 0x162f7cu: goto label_162f7c;
        case 0x162f80u: goto label_162f80;
        case 0x162f84u: goto label_162f84;
        case 0x162f88u: goto label_162f88;
        case 0x162f8cu: goto label_162f8c;
        case 0x162f90u: goto label_162f90;
        case 0x162f94u: goto label_162f94;
        case 0x162f98u: goto label_162f98;
        case 0x162f9cu: goto label_162f9c;
        case 0x162fa0u: goto label_162fa0;
        case 0x162fa4u: goto label_162fa4;
        case 0x162fa8u: goto label_162fa8;
        case 0x162facu: goto label_162fac;
        case 0x162fb0u: goto label_162fb0;
        case 0x162fb4u: goto label_162fb4;
        case 0x162fb8u: goto label_162fb8;
        case 0x162fbcu: goto label_162fbc;
        case 0x162fc0u: goto label_162fc0;
        case 0x162fc4u: goto label_162fc4;
        case 0x162fc8u: goto label_162fc8;
        case 0x162fccu: goto label_162fcc;
        case 0x162fd0u: goto label_162fd0;
        case 0x162fd4u: goto label_162fd4;
        case 0x162fd8u: goto label_162fd8;
        case 0x162fdcu: goto label_162fdc;
        case 0x162fe0u: goto label_162fe0;
        case 0x162fe4u: goto label_162fe4;
        case 0x162fe8u: goto label_162fe8;
        case 0x162fecu: goto label_162fec;
        case 0x162ff0u: goto label_162ff0;
        case 0x162ff4u: goto label_162ff4;
        case 0x162ff8u: goto label_162ff8;
        case 0x162ffcu: goto label_162ffc;
        case 0x163000u: goto label_163000;
        case 0x163004u: goto label_163004;
        case 0x163008u: goto label_163008;
        case 0x16300cu: goto label_16300c;
        case 0x163010u: goto label_163010;
        case 0x163014u: goto label_163014;
        case 0x163018u: goto label_163018;
        case 0x16301cu: goto label_16301c;
        case 0x163020u: goto label_163020;
        case 0x163024u: goto label_163024;
        case 0x163028u: goto label_163028;
        case 0x16302cu: goto label_16302c;
        case 0x163030u: goto label_163030;
        case 0x163034u: goto label_163034;
        case 0x163038u: goto label_163038;
        case 0x16303cu: goto label_16303c;
        case 0x163040u: goto label_163040;
        case 0x163044u: goto label_163044;
        case 0x163048u: goto label_163048;
        case 0x16304cu: goto label_16304c;
        case 0x163050u: goto label_163050;
        case 0x163054u: goto label_163054;
        case 0x163058u: goto label_163058;
        case 0x16305cu: goto label_16305c;
        case 0x163060u: goto label_163060;
        case 0x163064u: goto label_163064;
        case 0x163068u: goto label_163068;
        case 0x16306cu: goto label_16306c;
        case 0x163070u: goto label_163070;
        case 0x163074u: goto label_163074;
        case 0x163078u: goto label_163078;
        case 0x16307cu: goto label_16307c;
        case 0x163080u: goto label_163080;
        case 0x163084u: goto label_163084;
        case 0x163088u: goto label_163088;
        case 0x16308cu: goto label_16308c;
        case 0x163090u: goto label_163090;
        case 0x163094u: goto label_163094;
        case 0x163098u: goto label_163098;
        case 0x16309cu: goto label_16309c;
        case 0x1630a0u: goto label_1630a0;
        case 0x1630a4u: goto label_1630a4;
        case 0x1630a8u: goto label_1630a8;
        case 0x1630acu: goto label_1630ac;
        case 0x1630b0u: goto label_1630b0;
        case 0x1630b4u: goto label_1630b4;
        case 0x1630b8u: goto label_1630b8;
        case 0x1630bcu: goto label_1630bc;
        case 0x1630c0u: goto label_1630c0;
        case 0x1630c4u: goto label_1630c4;
        case 0x1630c8u: goto label_1630c8;
        case 0x1630ccu: goto label_1630cc;
        case 0x1630d0u: goto label_1630d0;
        case 0x1630d4u: goto label_1630d4;
        case 0x1630d8u: goto label_1630d8;
        case 0x1630dcu: goto label_1630dc;
        case 0x1630e0u: goto label_1630e0;
        case 0x1630e4u: goto label_1630e4;
        case 0x1630e8u: goto label_1630e8;
        case 0x1630ecu: goto label_1630ec;
        case 0x1630f0u: goto label_1630f0;
        case 0x1630f4u: goto label_1630f4;
        case 0x1630f8u: goto label_1630f8;
        case 0x1630fcu: goto label_1630fc;
        case 0x163100u: goto label_163100;
        case 0x163104u: goto label_163104;
        case 0x163108u: goto label_163108;
        case 0x16310cu: goto label_16310c;
        case 0x163110u: goto label_163110;
        case 0x163114u: goto label_163114;
        case 0x163118u: goto label_163118;
        case 0x16311cu: goto label_16311c;
        case 0x163120u: goto label_163120;
        case 0x163124u: goto label_163124;
        case 0x163128u: goto label_163128;
        case 0x16312cu: goto label_16312c;
        case 0x163130u: goto label_163130;
        case 0x163134u: goto label_163134;
        case 0x163138u: goto label_163138;
        case 0x16313cu: goto label_16313c;
        case 0x163140u: goto label_163140;
        case 0x163144u: goto label_163144;
        case 0x163148u: goto label_163148;
        case 0x16314cu: goto label_16314c;
        case 0x163150u: goto label_163150;
        case 0x163154u: goto label_163154;
        case 0x163158u: goto label_163158;
        case 0x16315cu: goto label_16315c;
        case 0x163160u: goto label_163160;
        case 0x163164u: goto label_163164;
        case 0x163168u: goto label_163168;
        case 0x16316cu: goto label_16316c;
        case 0x163170u: goto label_163170;
        case 0x163174u: goto label_163174;
        case 0x163178u: goto label_163178;
        case 0x16317cu: goto label_16317c;
        case 0x163180u: goto label_163180;
        case 0x163184u: goto label_163184;
        case 0x163188u: goto label_163188;
        case 0x16318cu: goto label_16318c;
        case 0x163190u: goto label_163190;
        case 0x163194u: goto label_163194;
        case 0x163198u: goto label_163198;
        case 0x16319cu: goto label_16319c;
        case 0x1631a0u: goto label_1631a0;
        case 0x1631a4u: goto label_1631a4;
        case 0x1631a8u: goto label_1631a8;
        case 0x1631acu: goto label_1631ac;
        case 0x1631b0u: goto label_1631b0;
        case 0x1631b4u: goto label_1631b4;
        case 0x1631b8u: goto label_1631b8;
        case 0x1631bcu: goto label_1631bc;
        case 0x1631c0u: goto label_1631c0;
        case 0x1631c4u: goto label_1631c4;
        case 0x1631c8u: goto label_1631c8;
        case 0x1631ccu: goto label_1631cc;
        case 0x1631d0u: goto label_1631d0;
        case 0x1631d4u: goto label_1631d4;
        case 0x1631d8u: goto label_1631d8;
        case 0x1631dcu: goto label_1631dc;
        case 0x1631e0u: goto label_1631e0;
        case 0x1631e4u: goto label_1631e4;
        case 0x1631e8u: goto label_1631e8;
        case 0x1631ecu: goto label_1631ec;
        case 0x1631f0u: goto label_1631f0;
        case 0x1631f4u: goto label_1631f4;
        case 0x1631f8u: goto label_1631f8;
        case 0x1631fcu: goto label_1631fc;
        case 0x163200u: goto label_163200;
        case 0x163204u: goto label_163204;
        case 0x163208u: goto label_163208;
        case 0x16320cu: goto label_16320c;
        case 0x163210u: goto label_163210;
        case 0x163214u: goto label_163214;
        case 0x163218u: goto label_163218;
        case 0x16321cu: goto label_16321c;
        case 0x163220u: goto label_163220;
        case 0x163224u: goto label_163224;
        case 0x163228u: goto label_163228;
        case 0x16322cu: goto label_16322c;
        case 0x163230u: goto label_163230;
        case 0x163234u: goto label_163234;
        case 0x163238u: goto label_163238;
        case 0x16323cu: goto label_16323c;
        case 0x163240u: goto label_163240;
        case 0x163244u: goto label_163244;
        case 0x163248u: goto label_163248;
        case 0x16324cu: goto label_16324c;
        case 0x163250u: goto label_163250;
        case 0x163254u: goto label_163254;
        case 0x163258u: goto label_163258;
        case 0x16325cu: goto label_16325c;
        case 0x163260u: goto label_163260;
        case 0x163264u: goto label_163264;
        case 0x163268u: goto label_163268;
        case 0x16326cu: goto label_16326c;
        case 0x163270u: goto label_163270;
        case 0x163274u: goto label_163274;
        case 0x163278u: goto label_163278;
        case 0x16327cu: goto label_16327c;
        case 0x163280u: goto label_163280;
        case 0x163284u: goto label_163284;
        case 0x163288u: goto label_163288;
        case 0x16328cu: goto label_16328c;
        case 0x163290u: goto label_163290;
        case 0x163294u: goto label_163294;
        case 0x163298u: goto label_163298;
        case 0x16329cu: goto label_16329c;
        case 0x1632a0u: goto label_1632a0;
        case 0x1632a4u: goto label_1632a4;
        case 0x1632a8u: goto label_1632a8;
        case 0x1632acu: goto label_1632ac;
        case 0x1632b0u: goto label_1632b0;
        case 0x1632b4u: goto label_1632b4;
        case 0x1632b8u: goto label_1632b8;
        case 0x1632bcu: goto label_1632bc;
        case 0x1632c0u: goto label_1632c0;
        case 0x1632c4u: goto label_1632c4;
        case 0x1632c8u: goto label_1632c8;
        case 0x1632ccu: goto label_1632cc;
        case 0x1632d0u: goto label_1632d0;
        case 0x1632d4u: goto label_1632d4;
        case 0x1632d8u: goto label_1632d8;
        case 0x1632dcu: goto label_1632dc;
        case 0x1632e0u: goto label_1632e0;
        case 0x1632e4u: goto label_1632e4;
        case 0x1632e8u: goto label_1632e8;
        case 0x1632ecu: goto label_1632ec;
        case 0x1632f0u: goto label_1632f0;
        case 0x1632f4u: goto label_1632f4;
        case 0x1632f8u: goto label_1632f8;
        case 0x1632fcu: goto label_1632fc;
        case 0x163300u: goto label_163300;
        case 0x163304u: goto label_163304;
        case 0x163308u: goto label_163308;
        case 0x16330cu: goto label_16330c;
        case 0x163310u: goto label_163310;
        case 0x163314u: goto label_163314;
        case 0x163318u: goto label_163318;
        case 0x16331cu: goto label_16331c;
        case 0x163320u: goto label_163320;
        case 0x163324u: goto label_163324;
        case 0x163328u: goto label_163328;
        case 0x16332cu: goto label_16332c;
        case 0x163330u: goto label_163330;
        case 0x163334u: goto label_163334;
        case 0x163338u: goto label_163338;
        case 0x16333cu: goto label_16333c;
        case 0x163340u: goto label_163340;
        case 0x163344u: goto label_163344;
        case 0x163348u: goto label_163348;
        case 0x16334cu: goto label_16334c;
        case 0x163350u: goto label_163350;
        case 0x163354u: goto label_163354;
        case 0x163358u: goto label_163358;
        case 0x16335cu: goto label_16335c;
        case 0x163360u: goto label_163360;
        case 0x163364u: goto label_163364;
        case 0x163368u: goto label_163368;
        case 0x16336cu: goto label_16336c;
        case 0x163370u: goto label_163370;
        case 0x163374u: goto label_163374;
        case 0x163378u: goto label_163378;
        case 0x16337cu: goto label_16337c;
        case 0x163380u: goto label_163380;
        case 0x163384u: goto label_163384;
        case 0x163388u: goto label_163388;
        case 0x16338cu: goto label_16338c;
        case 0x163390u: goto label_163390;
        case 0x163394u: goto label_163394;
        case 0x163398u: goto label_163398;
        case 0x16339cu: goto label_16339c;
        case 0x1633a0u: goto label_1633a0;
        case 0x1633a4u: goto label_1633a4;
        case 0x1633a8u: goto label_1633a8;
        case 0x1633acu: goto label_1633ac;
        case 0x1633b0u: goto label_1633b0;
        case 0x1633b4u: goto label_1633b4;
        case 0x1633b8u: goto label_1633b8;
        case 0x1633bcu: goto label_1633bc;
        default: return;
    }

label_162bf0:
    // 0x162bf0: 0x34421531  ori         $v0, $v0, 0x1531
    ctx->pc = 0x162bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5425);
label_162bf4:
    // 0x162bf4: 0xdfa500d0  ld          $a1, 0xD0($sp)
    ctx->pc = 0x162bf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_162bf8:
    // 0x162bf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x162bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_162bfc:
    // 0x162bfc: 0x3c025315  lui         $v0, 0x5315
    ctx->pc = 0x162bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21269 << 16));
label_162c00:
    // 0x162c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162c04:
    // 0x162c04: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x162c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_162c08:
    // 0x162c08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162c0c:
    // 0x162c0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162c10:
    // 0x162c10: 0xc05e184  jal         func_178610
label_162c14:
    if (ctx->pc == 0x162C14u) {
        ctx->pc = 0x162C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C10u;
        // 0x162c14: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C18u;
        goto label_162c18;
    }
    ctx->pc = 0x162C10u;
    SET_GPR_U32(ctx, 31, 0x162C18u);
    ctx->pc = 0x162C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C10u;
    // 0x162c14: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178610u;
    { ctx->pc = 0x178610; return; }
    ctx->pc = 0x162C18u;
label_162c18:
    // 0x162c18: 0xdfa400d0  ld          $a0, 0xD0($sp)
    ctx->pc = 0x162c18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_162c1c:
    // 0x162c1c: 0xc06064c  jal         func_181930
label_162c20:
    if (ctx->pc == 0x162C20u) {
        ctx->pc = 0x162C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C1Cu;
        // 0x162c20: 0x24050218  addiu       $a1, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C24u;
        goto label_162c24;
    }
    ctx->pc = 0x162C1Cu;
    SET_GPR_U32(ctx, 31, 0x162C24u);
    ctx->pc = 0x162C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C1Cu;
    // 0x162c20: 0x24050218  addiu       $a1, $zero, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    { ctx->pc = 0x181930; return; }
    ctx->pc = 0x162C24u;
label_162c24:
    // 0x162c24: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x162c24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_162c28:
    // 0x162c28: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x162c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_162c2c:
    // 0x162c2c: 0xa2250010  sb          $a1, 0x10($s1)
    ctx->pc = 0x162c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 5));
label_162c30:
    // 0x162c30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162c34:
    // 0x162c34: 0xa2250011  sb          $a1, 0x11($s1)
    ctx->pc = 0x162c34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 5));
label_162c38:
    // 0x162c38: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x162c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_162c3c:
    // 0x162c3c: 0xa2250012  sb          $a1, 0x12($s1)
    ctx->pc = 0x162c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 5));
label_162c40:
    // 0x162c40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_162c44:
    // 0x162c44: 0xa2240013  sb          $a0, 0x13($s1)
    ctx->pc = 0x162c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
label_162c48:
    // 0x162c48: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x162c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_162c4c:
    // 0x162c4c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x162c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_162c50:
    // 0x162c50: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x162c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_162c54:
    // 0x162c54: 0xa2250028  sb          $a1, 0x28($s1)
    ctx->pc = 0x162c54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 5));
label_162c58:
    // 0x162c58: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x162c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
label_162c5c:
    // 0x162c5c: 0xa225002a  sb          $a1, 0x2A($s1)
    ctx->pc = 0x162c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 5));
label_162c60:
    // 0x162c60: 0xa224002b  sb          $a0, 0x2B($s1)
    ctx->pc = 0x162c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
label_162c64:
    // 0x162c64: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x162c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_162c68:
    // 0x162c68: 0xa2250040  sb          $a1, 0x40($s1)
    ctx->pc = 0x162c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 5));
label_162c6c:
    // 0x162c6c: 0xa2250041  sb          $a1, 0x41($s1)
    ctx->pc = 0x162c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 5));
label_162c70:
    // 0x162c70: 0xa2250042  sb          $a1, 0x42($s1)
    ctx->pc = 0x162c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 5));
label_162c74:
    // 0x162c74: 0xa2240043  sb          $a0, 0x43($s1)
    ctx->pc = 0x162c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 4));
label_162c78:
    // 0x162c78: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x162c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_162c7c:
    // 0x162c7c: 0xa2250058  sb          $a1, 0x58($s1)
    ctx->pc = 0x162c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 5));
label_162c80:
    // 0x162c80: 0xa2250059  sb          $a1, 0x59($s1)
    ctx->pc = 0x162c80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 5));
label_162c84:
    // 0x162c84: 0xa225005a  sb          $a1, 0x5A($s1)
    ctx->pc = 0x162c84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 5));
label_162c88:
    // 0x162c88: 0xa224005b  sb          $a0, 0x5B($s1)
    ctx->pc = 0x162c88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 4));
label_162c8c:
    // 0x162c8c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_162c90:
    if (ctx->pc == 0x162C90u) {
        ctx->pc = 0x162C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C8Cu;
        // 0x162c90: 0xae23005c  sw          $v1, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162C94u;
        goto label_162c94;
    }
    ctx->pc = 0x162C8Cu;
    {
        const bool branch_taken_0x162c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C8Cu;
        // 0x162c90: 0xae23005c  sw          $v1, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c8c) {
            ctx->pc = 0x162BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x162bc8; return; }
        }
    }
    ctx->pc = 0x162C94u;
label_162c94:
    // 0x162c94: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162c98:
    // 0x162c98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162c9c:
    // 0x162c9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x162c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ca0:
    // 0x162ca0: 0x24533660  addiu       $s3, $v0, 0x3660
    ctx->pc = 0x162ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
label_162ca4:
    // 0x162ca4: 0x0  nop
    ctx->pc = 0x162ca4u;
    // NOP
label_162ca8:
    // 0x162ca8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162cac:
    // 0x162cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162cb0:
    // 0x162cb0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x162cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_162cb4:
    // 0x162cb4: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x162cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_162cb8:
    // 0x162cb8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x162cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_162cbc:
    // 0x162cbc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x162cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_162cc0:
    // 0x162cc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x162cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_162cc4:
    // 0x162cc4: 0xc08f0cc  jal         func_23C330
label_162cc8:
    if (ctx->pc == 0x162CC8u) {
        ctx->pc = 0x162CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CC4u;
        // 0x162cc8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162CCCu;
        goto label_162ccc;
    }
    ctx->pc = 0x162CC4u;
    SET_GPR_U32(ctx, 31, 0x162CCCu);
    ctx->pc = 0x162CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CC4u;
    // 0x162cc8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x162CCCu;
label_162ccc:
    // 0x162ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162cd0:
    // 0x162cd0: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x162cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_162cd4:
    // 0x162cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162cd8:
    // 0x162cd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162cdc:
    // 0x162cdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162ce0:
    // 0x162ce0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x162ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_162ce4:
    // 0x162ce4: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x162ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_162ce8:
    // 0x162ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162cec:
    // 0x162cec: 0x0  nop
    ctx->pc = 0x162cecu;
    // NOP
label_162cf0:
    // 0x162cf0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x162cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_162cf4:
    // 0x162cf4: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x162cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_162cf8:
    // 0x162cf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x162cf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162cfc:
    // 0x162cfc: 0x0  nop
    ctx->pc = 0x162cfcu;
    // NOP
label_162d00:
    // 0x162d00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x162d00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_162d04:
    // 0x162d04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162d04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_162d08:
    // 0x162d08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x162d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_162d0c:
    // 0x162d0c: 0x0  nop
    ctx->pc = 0x162d0cu;
    // NOP
label_162d10:
    // 0x162d10: 0xa2640004  sb          $a0, 0x4($s3)
    ctx->pc = 0x162d10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 4));
label_162d14:
    // 0x162d14: 0xa2630005  sb          $v1, 0x5($s3)
    ctx->pc = 0x162d14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 3));
label_162d18:
    // 0x162d18: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_162d1c:
    if (ctx->pc == 0x162D1Cu) {
        ctx->pc = 0x162D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D18u;
        // 0x162d1c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D20u;
        goto label_162d20;
    }
    ctx->pc = 0x162D18u;
    {
        const bool branch_taken_0x162d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D18u;
        // 0x162d1c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d18) {
            ctx->pc = 0x162CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162cb0;
        }
    }
    ctx->pc = 0x162D20u;
label_162d20:
    // 0x162d20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162d24:
    // 0x162d24: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x162d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_162d28:
    // 0x162d28: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_162d2c:
    if (ctx->pc == 0x162D2Cu) {
        ctx->pc = 0x162D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D28u;
        // 0x162d2c: 0x269447b8  addiu       $s4, $s4, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D30u;
        goto label_162d30;
    }
    ctx->pc = 0x162D28u;
    {
        const bool branch_taken_0x162d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D28u;
        // 0x162d2c: 0x269447b8  addiu       $s4, $s4, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d28) {
            ctx->pc = 0x162CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162ca4;
        }
    }
    ctx->pc = 0x162D30u;
label_162d30:
    // 0x162d30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162d34:
    // 0x162d34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x162d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162d38:
    // 0x162d38: 0xac404d10  sw          $zero, 0x4D10($v0)
    ctx->pc = 0x162d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19728), GPR_U32(ctx, 0));
label_162d3c:
    // 0x162d3c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162d40:
    // 0x162d40: 0x24524d20  addiu       $s2, $v0, 0x4D20
    ctx->pc = 0x162d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_162d44:
    // 0x162d44: 0x0  nop
    ctx->pc = 0x162d44u;
    // NOP
label_162d48:
    // 0x162d48: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162d4c:
    // 0x162d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162d50:
    // 0x162d50: 0x8c424d10  lw          $v0, 0x4D10($v0)
    ctx->pc = 0x162d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19728)));
label_162d54:
    // 0x162d54: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_162d58:
    // 0x162d58: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x162d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_162d5c:
    // 0x162d5c: 0xc05e234  jal         func_1788D0
label_162d60:
    if (ctx->pc == 0x162D60u) {
        ctx->pc = 0x162D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D5Cu;
        // 0x162d60: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162D64u;
        goto label_162d64;
    }
    ctx->pc = 0x162D5Cu;
    SET_GPR_U32(ctx, 31, 0x162D64u);
    ctx->pc = 0x162D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D5Cu;
    // 0x162d60: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x162D64u;
label_162d64:
    // 0x162d64: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162d68:
    // 0x162d68: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x162d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_162d6c:
    // 0x162d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162d70:
    // 0x162d70: 0x8c444d10  lw          $a0, 0x4D10($v0)
    ctx->pc = 0x162d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19728)));
label_162d74:
    // 0x162d74: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x162d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_162d78:
    // 0x162d78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x162d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_162d7c:
    // 0x162d7c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x162d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_162d80:
    // 0x162d80: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x162d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162d84:
    // 0x162d84: 0x3402f535  ori         $v0, $zero, 0xF535
    ctx->pc = 0x162d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_162d88:
    // 0x162d88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x162d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_162d8c:
    // 0x162d8c: 0x34453107  ori         $a1, $v0, 0x3107
    ctx->pc = 0x162d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_162d90:
    // 0x162d90: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x162d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_162d94:
    // 0x162d94: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x162d94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_162d98:
    // 0x162d98: 0xfe450018  sd          $a1, 0x18($s2)
    ctx->pc = 0x162d98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 5));
label_162d9c:
    // 0x162d9c: 0x0  nop
    ctx->pc = 0x162d9cu;
    // NOP
label_162da0:
    // 0x162da0: 0xdfa500d8  ld          $a1, 0xD8($sp)
    ctx->pc = 0x162da0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_162da4:
    // 0x162da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162da8:
    // 0x162da8: 0xc05e110  jal         func_178440
label_162dac:
    if (ctx->pc == 0x162DACu) {
        ctx->pc = 0x162DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DA8u;
        // 0x162dac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DB0u;
        goto label_162db0;
    }
    ctx->pc = 0x162DA8u;
    SET_GPR_U32(ctx, 31, 0x162DB0u);
    ctx->pc = 0x162DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DA8u;
    // 0x162dac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178440u;
    { ctx->pc = 0x178440; return; }
    ctx->pc = 0x162DB0u;
label_162db0:
    // 0x162db0: 0x3c024444  lui         $v0, 0x4444
    ctx->pc = 0x162db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17476 << 16));
label_162db4:
    // 0x162db4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x162db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_162db8:
    // 0x162db8: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x162db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_162dbc:
    // 0x162dbc: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x162dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
label_162dc0:
    // 0x162dc0: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x162dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_162dc4:
    // 0x162dc4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x162dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_162dc8:
    // 0x162dc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x162dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_162dcc:
    // 0x162dcc: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x162dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_162dd0:
    // 0x162dd0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_162dd4:
    // 0x162dd4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x162dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_162dd8:
    // 0x162dd8: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x162dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_162ddc:
    // 0x162ddc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x162ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_162de0:
    // 0x162de0: 0xc066e34  jal         func_19B8D0
label_162de4:
    if (ctx->pc == 0x162DE4u) {
        ctx->pc = 0x162DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DE0u;
        // 0x162de4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DE8u;
        goto label_162de8;
    }
    ctx->pc = 0x162DE0u;
    SET_GPR_U32(ctx, 31, 0x162DE8u);
    ctx->pc = 0x162DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DE0u;
    // 0x162de4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x162DE8u;
label_162de8:
    // 0x162de8: 0x87a20120  lh          $v0, 0x120($sp)
    ctx->pc = 0x162de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
label_162dec:
    // 0x162dec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x162decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162df0:
    // 0x162df0: 0x27be0128  addiu       $fp, $sp, 0x128
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_162df4:
    // 0x162df4: 0x27b7012c  addiu       $s7, $sp, 0x12C
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_162df8:
    // 0x162df8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x162df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_162dfc:
    // 0x162dfc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x162dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_162e00:
    // 0x162e00: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x162e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_162e04:
    // 0x162e04: 0x2a2301fe  slti        $v1, $s1, 0x1FE
    ctx->pc = 0x162e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)510) ? 1 : 0);
label_162e08:
    // 0x162e08: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x162e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162e0c:
    // 0x162e0c: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x162e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_162e10:
    // 0x162e10: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_162e14:
    // 0x162e14: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162e18:
    // 0x162e18: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x162e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162e1c:
    // 0x162e1c: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x162e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
label_162e20:
    // 0x162e20: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x162e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_162e24:
    // 0x162e24: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x162e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162e28:
    // 0x162e28: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x162e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_162e2c:
    // 0x162e2c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x162e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_162e30:
    // 0x162e30: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x162e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162e34:
    // 0x162e34: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x162e34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_162e38:
    // 0x162e38: 0xa2060010  sb          $a2, 0x10($s0)
    ctx->pc = 0x162e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 6));
label_162e3c:
    // 0x162e3c: 0xa2060011  sb          $a2, 0x11($s0)
    ctx->pc = 0x162e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 6));
label_162e40:
    // 0x162e40: 0xa2060012  sb          $a2, 0x12($s0)
    ctx->pc = 0x162e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 6));
label_162e44:
    // 0x162e44: 0xa2050013  sb          $a1, 0x13($s0)
    ctx->pc = 0x162e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 5));
label_162e48:
    // 0x162e48: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x162e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_162e4c:
    // 0x162e4c: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_162e50:
    if (ctx->pc == 0x162E50u) {
        ctx->pc = 0x162E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E4Cu;
        // 0x162e50: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E54u;
        goto label_162e54;
    }
    ctx->pc = 0x162E4Cu;
    {
        const bool branch_taken_0x162e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E4Cu;
        // 0x162e50: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e4c) {
            ctx->pc = 0x162D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162d9c;
        }
    }
    ctx->pc = 0x162E54u;
label_162e54:
    // 0x162e54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_162e58:
    // 0x162e58: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x162e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_162e5c:
    // 0x162e5c: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_162e60:
    if (ctx->pc == 0x162E60u) {
        ctx->pc = 0x162E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E5Cu;
        // 0x162e60: 0x26527fa0  addiu       $s2, $s2, 0x7FA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E64u;
        goto label_162e64;
    }
    ctx->pc = 0x162E5Cu;
    {
        const bool branch_taken_0x162e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E5Cu;
        // 0x162e60: 0x26527fa0  addiu       $s2, $s2, 0x7FA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e5c) {
            ctx->pc = 0x162D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162d44;
        }
    }
    ctx->pc = 0x162E64u;
label_162e64:
    // 0x162e64: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162e68:
    // 0x162e68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x162e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162e6c:
    // 0x162e6c: 0x24530200  addiu       $s3, $v0, 0x200
    ctx->pc = 0x162e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_162e70:
    // 0x162e70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x162e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_162e74:
    // 0x162e74: 0xc05e234  jal         func_1788D0
label_162e78:
    if (ctx->pc == 0x162E78u) {
        ctx->pc = 0x162E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E74u;
        // 0x162e78: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162E7Cu;
        goto label_162e7c;
    }
    ctx->pc = 0x162E74u;
    SET_GPR_U32(ctx, 31, 0x162E7Cu);
    ctx->pc = 0x162E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E74u;
    // 0x162e78: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x162E7Cu;
label_162e7c:
    // 0x162e7c: 0x3c02c400  lui         $v0, 0xC400
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50176 << 16));
label_162e80:
    // 0x162e80: 0x34038020  ori         $v1, $zero, 0x8020
    ctx->pc = 0x162e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_162e84:
    // 0x162e84: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x162e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_162e88:
    // 0x162e88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162e8c:
    // 0x162e8c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_162e90:
    // 0x162e90: 0x3402f531  ori         $v0, $zero, 0xF531
    ctx->pc = 0x162e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62769);
label_162e94:
    // 0x162e94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x162e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_162e98:
    // 0x162e98: 0xfe640010  sd          $a0, 0x10($s3)
    ctx->pc = 0x162e98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 4));
label_162e9c:
    // 0x162e9c: 0x3c025315  lui         $v0, 0x5315
    ctx->pc = 0x162e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21269 << 16));
label_162ea0:
    // 0x162ea0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ea4:
    // 0x162ea4: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x162ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_162ea8:
    // 0x162ea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162eac:
    // 0x162eac: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x162eacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_162eb0:
    // 0x162eb0: 0xdfa500d0  ld          $a1, 0xD0($sp)
    ctx->pc = 0x162eb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_162eb4:
    // 0x162eb4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x162eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_162eb8:
    // 0x162eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162ebc:
    // 0x162ebc: 0xc05e130  jal         func_1784C0
label_162ec0:
    if (ctx->pc == 0x162EC0u) {
        ctx->pc = 0x162EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EBCu;
        // 0x162ec0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EC4u;
        goto label_162ec4;
    }
    ctx->pc = 0x162EBCu;
    SET_GPR_U32(ctx, 31, 0x162EC4u);
    ctx->pc = 0x162EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EBCu;
    // 0x162ec0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784C0u;
    { ctx->pc = 0x1784c0; return; }
    ctx->pc = 0x162EC4u;
label_162ec4:
    // 0x162ec4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x162ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162ec8:
    // 0x162ec8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x162ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_162ecc:
    // 0x162ecc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_162ed0:
    if (ctx->pc == 0x162ED0u) {
        ctx->pc = 0x162ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ECCu;
        // 0x162ed0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162ED4u;
        goto label_162ed4;
    }
    ctx->pc = 0x162ECCu;
    {
        const bool branch_taken_0x162ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ECCu;
        // 0x162ed0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ecc) {
            ctx->pc = 0x162EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162eb0;
        }
    }
    ctx->pc = 0x162ED4u;
label_162ed4:
    // 0x162ed4: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
label_162ed8:
    // 0x162ed8: 0x34038020  ori         $v1, $zero, 0x8020
    ctx->pc = 0x162ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_162edc:
    // 0x162edc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x162edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_162ee0:
    // 0x162ee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ee4:
    // 0x162ee4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x162ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_162ee8:
    // 0x162ee8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x162ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_162eec:
    // 0x162eec: 0x34421531  ori         $v0, $v0, 0x1531
    ctx->pc = 0x162eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5425);
label_162ef0:
    // 0x162ef0: 0xfe630c20  sd          $v1, 0xC20($s3)
    ctx->pc = 0x162ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3104), GPR_U64(ctx, 3));
label_162ef4:
    // 0x162ef4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x162ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_162ef8:
    // 0x162ef8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162efc:
    // 0x162efc: 0x3c025315  lui         $v0, 0x5315
    ctx->pc = 0x162efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21269 << 16));
label_162f00:
    // 0x162f00: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x162f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_162f04:
    // 0x162f04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162f08:
    // 0x162f08: 0xfe620c28  sd          $v0, 0xC28($s3)
    ctx->pc = 0x162f08u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3112), GPR_U64(ctx, 2));
label_162f0c:
    // 0x162f0c: 0x0  nop
    ctx->pc = 0x162f0cu;
    // NOP
label_162f10:
    // 0x162f10: 0xdfa500d0  ld          $a1, 0xD0($sp)
    ctx->pc = 0x162f10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_162f14:
    // 0x162f14: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x162f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_162f18:
    // 0x162f18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162f1c:
    // 0x162f1c: 0x24510c30  addiu       $s1, $v0, 0xC30
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
label_162f20:
    // 0x162f20: 0xc05e184  jal         func_178610
label_162f24:
    if (ctx->pc == 0x162F24u) {
        ctx->pc = 0x162F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F20u;
        // 0x162f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F28u;
        goto label_162f28;
    }
    ctx->pc = 0x162F20u;
    SET_GPR_U32(ctx, 31, 0x162F28u);
    ctx->pc = 0x162F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F20u;
    // 0x162f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178610u;
    { ctx->pc = 0x178610; return; }
    ctx->pc = 0x162F28u;
label_162f28:
    // 0x162f28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x162f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_162f2c:
    // 0x162f2c: 0xa2200043  sb          $zero, 0x43($s1)
    ctx->pc = 0x162f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 0));
label_162f30:
    // 0x162f30: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x162f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_162f34:
    // 0x162f34: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x162f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_162f38:
    // 0x162f38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_162f3c:
    if (ctx->pc == 0x162F3Cu) {
        ctx->pc = 0x162F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F38u;
        // 0x162f3c: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F40u;
        goto label_162f40;
    }
    ctx->pc = 0x162F38u;
    {
        const bool branch_taken_0x162f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F38u;
        // 0x162f3c: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f38) {
            ctx->pc = 0x162F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f0c;
        }
    }
    ctx->pc = 0x162F40u;
label_162f40:
    // 0x162f40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x162f40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_162f44:
    // 0x162f44: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x162f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_162f48:
    // 0x162f48: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_162f4c:
    if (ctx->pc == 0x162F4Cu) {
        ctx->pc = 0x162F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F48u;
        // 0x162f4c: 0x26731a30  addiu       $s3, $s3, 0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F50u;
        goto label_162f50;
    }
    ctx->pc = 0x162F48u;
    {
        const bool branch_taken_0x162f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F48u;
        // 0x162f4c: 0x26731a30  addiu       $s3, $s3, 0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f48) {
            ctx->pc = 0x162E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162e70;
        }
    }
    ctx->pc = 0x162F50u;
label_162f50:
    // 0x162f50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162f54:
    // 0x162f54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_162f58:
    // 0x162f58: 0x34214f10  ori         $at, $at, 0x4F10
    ctx->pc = 0x162f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20240);
label_162f5c:
    // 0x162f5c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x162f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_162f60:
    // 0x162f60: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x162f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_162f64:
    // 0x162f64: 0x0  nop
    ctx->pc = 0x162f64u;
    // NOP
label_162f68:
    // 0x162f68: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x162f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_162f6c:
    // 0x162f6c: 0x0  nop
    ctx->pc = 0x162f6cu;
    // NOP
label_162f70:
    // 0x162f70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x162f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162f74:
    // 0x162f74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x162f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162f78:
    // 0x162f78: 0xa62000c8  sh          $zero, 0xC8($s1)
    ctx->pc = 0x162f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 200), (uint16_t)GPR_U32(ctx, 0));
label_162f7c:
    // 0x162f7c: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x162f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_162f80:
    // 0x162f80: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x162f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162f84:
    // 0x162f84: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x162f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_162f88:
    // 0x162f88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162f8c:
    // 0x162f8c: 0xa62000ca  sh          $zero, 0xCA($s1)
    ctx->pc = 0x162f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 202), (uint16_t)GPR_U32(ctx, 0));
label_162f90:
    // 0x162f90: 0x2328021  addu        $s0, $s1, $s2
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_162f94:
    // 0x162f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162f98:
    // 0x162f98: 0xc05e234  jal         func_1788D0
label_162f9c:
    if (ctx->pc == 0x162F9Cu) {
        ctx->pc = 0x162F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F98u;
        // 0x162f9c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FA0u;
        goto label_162fa0;
    }
    ctx->pc = 0x162F98u;
    SET_GPR_U32(ctx, 31, 0x162FA0u);
    ctx->pc = 0x162F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F98u;
    // 0x162f9c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x162FA0u;
label_162fa0:
    // 0x162fa0: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x162fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_162fa4:
    // 0x162fa4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x162fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_162fa8:
    // 0x162fa8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x162fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_162fac:
    // 0x162fac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x162facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_162fb0:
    // 0x162fb0: 0x3402f535  ori         $v0, $zero, 0xF535
    ctx->pc = 0x162fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_162fb4:
    // 0x162fb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x162fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_162fb8:
    // 0x162fb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x162fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_162fbc:
    // 0x162fbc: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x162fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
label_162fc0:
    // 0x162fc0: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x162fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_162fc4:
    // 0x162fc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162fc8:
    // 0x162fc8: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x162fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
label_162fcc:
    // 0x162fcc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x162fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_162fd0:
    // 0x162fd0: 0xc05e110  jal         func_178440
label_162fd4:
    if (ctx->pc == 0x162FD4u) {
        ctx->pc = 0x162FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FD0u;
        // 0x162fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FD8u;
        goto label_162fd8;
    }
    ctx->pc = 0x162FD0u;
    SET_GPR_U32(ctx, 31, 0x162FD8u);
    ctx->pc = 0x162FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162FD0u;
    // 0x162fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178440u;
    { ctx->pc = 0x178440; return; }
    ctx->pc = 0x162FD8u;
label_162fd8:
    // 0x162fd8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_162fdc:
    // 0x162fdc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_162fe0:
    // 0x162fe0: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x162fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_162fe4:
    // 0x162fe4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x162fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_162fe8:
    // 0x162fe8: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x162fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_162fec:
    // 0x162fec: 0xa2040010  sb          $a0, 0x10($s0)
    ctx->pc = 0x162fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 4));
label_162ff0:
    // 0x162ff0: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x162ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
label_162ff4:
    // 0x162ff4: 0x1357c2  srl         $t2, $s3, 31
    ctx->pc = 0x162ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
label_162ff8:
    // 0x162ff8: 0xa2040012  sb          $a0, 0x12($s0)
    ctx->pc = 0x162ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 4));
label_162ffc:
    // 0x162ffc: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x162ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_163000:
    // 0x163000: 0x3c084380  lui         $t0, 0x4380
    ctx->pc = 0x163000u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17280 << 16));
label_163004:
    // 0x163004: 0x3c074340  lui         $a3, 0x4340
    ctx->pc = 0x163004u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17216 << 16));
label_163008:
    // 0x163008: 0x3c02439f  lui         $v0, 0x439F
    ctx->pc = 0x163008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17311 << 16));
label_16300c:
    // 0x16300c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x16300cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_163010:
    // 0x163010: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x163010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_163014:
    // 0x163014: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x163014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_163018:
    // 0x163018: 0x1010  mfhi        $v0
    ctx->pc = 0x163018u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_16301c:
    // 0x16301c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_163020:
    // 0x163020: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_163024:
    // 0x163024: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x163024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
label_163028:
    // 0x163028: 0xae090014  sw          $t1, 0x14($s0)
    ctx->pc = 0x163028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 9));
label_16302c:
    // 0x16302c: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x16302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_163030:
    // 0x163030: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x163030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
label_163034:
    // 0x163034: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x163034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_163038:
    // 0x163038: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x163038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_16303c:
    // 0x16303c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x16303cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_163040:
    // 0x163040: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x163040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_163044:
    // 0x163044: 0xc066e34  jal         func_19B8D0
label_163048:
    if (ctx->pc == 0x163048u) {
        ctx->pc = 0x163048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163044u;
        // 0x163048: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16304Cu;
        goto label_16304c;
    }
    ctx->pc = 0x163044u;
    SET_GPR_U32(ctx, 31, 0x16304Cu);
    ctx->pc = 0x163048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163044u;
    // 0x163048: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x16304Cu;
label_16304c:
    // 0x16304c: 0x87a20120  lh          $v0, 0x120($sp)
    ctx->pc = 0x16304cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
label_163050:
    // 0x163050: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_163054:
    // 0x163054: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x163054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_163058:
    // 0x163058: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_16305c:
    // 0x16305c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x16305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_163060:
    // 0x163060: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x163060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_163064:
    // 0x163064: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_163068:
    // 0x163068: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x163068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16306c:
    // 0x16306c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x16306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_163070:
    // 0x163070: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x163070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
label_163074:
    // 0x163074: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_163078:
    // 0x163078: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_16307c:
    // 0x16307c: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x16307cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_163080:
    // 0x163080: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x163080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_163084:
    // 0x163084: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_163088:
    // 0x163088: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_16308c:
    if (ctx->pc == 0x16308Cu) {
        ctx->pc = 0x16308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163088u;
        // 0x16308c: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163090u;
        goto label_163090;
    }
    ctx->pc = 0x163088u;
    {
        const bool branch_taken_0x163088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163088u;
        // 0x16308c: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163088) {
            ctx->pc = 0x162F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f90;
        }
    }
    ctx->pc = 0x163090u;
label_163090:
    // 0x163090: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_163094:
    // 0x163094: 0x26730080  addiu       $s3, $s3, 0x80
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_163098:
    // 0x163098: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x163098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_16309c:
    // 0x16309c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_1630a0:
    if (ctx->pc == 0x1630A0u) {
        ctx->pc = 0x1630A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16309Cu;
        // 0x1630a0: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630A4u;
        goto label_1630a4;
    }
    ctx->pc = 0x16309Cu;
    {
        const bool branch_taken_0x16309c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1630A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16309Cu;
        // 0x1630a0: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16309c) {
            ctx->pc = 0x162F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f78;
        }
    }
    ctx->pc = 0x1630A4u;
label_1630a4:
    // 0x1630a4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1630a8:
    // 0x1630a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1630a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1630ac:
    // 0x1630ac: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1630acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1630b0:
    // 0x1630b0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1630b4:
    // 0x1630b4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1630b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1630b8:
    // 0x1630b8: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_1630bc:
    if (ctx->pc == 0x1630BCu) {
        ctx->pc = 0x1630C0u;
        goto label_1630c0;
    }
    ctx->pc = 0x1630B8u;
    {
        const bool branch_taken_0x1630b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1630b8) {
            ctx->pc = 0x162F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f6c;
        }
    }
    ctx->pc = 0x1630C0u;
label_1630c0:
    // 0x1630c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1630c4:
    // 0x1630c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1630c8:
    // 0x1630c8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1630c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1630cc:
    // 0x1630cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1630d0:
    // 0x1630d0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1630d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1630d4:
    // 0x1630d4: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_1630d8:
    if (ctx->pc == 0x1630D8u) {
        ctx->pc = 0x1630D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630D4u;
        // 0x1630d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630DCu;
        goto label_1630dc;
    }
    ctx->pc = 0x1630D4u;
    {
        const bool branch_taken_0x1630d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1630D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630D4u;
        // 0x1630d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630d4) {
            ctx->pc = 0x162F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f64;
        }
    }
    ctx->pc = 0x1630DCu;
label_1630dc:
    // 0x1630dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1630dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1630e0:
    // 0x1630e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1630e4:
    // 0x1630e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1630e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1630e8:
    // 0x1630e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1630e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1630ec:
    // 0x1630ec: 0x34217660  ori         $at, $at, 0x7660
    ctx->pc = 0x1630ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30304);
label_1630f0:
    // 0x1630f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1630f4:
    // 0x1630f4: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x1630f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1630f8:
    // 0x1630f8: 0xc05e234  jal         func_1788D0
label_1630fc:
    if (ctx->pc == 0x1630FCu) {
        ctx->pc = 0x1630FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630F8u;
        // 0x1630fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163100u;
        goto label_163100;
    }
    ctx->pc = 0x1630F8u;
    SET_GPR_U32(ctx, 31, 0x163100u);
    ctx->pc = 0x1630FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630F8u;
    // 0x1630fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x163100u;
label_163100:
    // 0x163100: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x163100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_163104:
    // 0x163104: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x163104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_163108:
    // 0x163108: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x163108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_16310c:
    // 0x16310c: 0x3402f535  ori         $v0, $zero, 0xF535
    ctx->pc = 0x16310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_163110:
    // 0x163110: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_163114:
    // 0x163114: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x163114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_163118:
    // 0x163118: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x163118u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_16311c:
    // 0x16311c: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x16311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_163120:
    // 0x163120: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x163120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_163124:
    // 0x163124: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x163124u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
label_163128:
    // 0x163128: 0xc070834  jal         func_1C20D0
label_16312c:
    if (ctx->pc == 0x16312Cu) {
        ctx->pc = 0x16312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163128u;
        // 0x16312c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163130u;
        goto label_163130;
    }
    ctx->pc = 0x163128u;
    SET_GPR_U32(ctx, 31, 0x163130u);
    ctx->pc = 0x16312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163128u;
    // 0x16312c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x163130u;
label_163130:
    // 0x163130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163134:
    // 0x163134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163138:
    // 0x163138: 0xc05e110  jal         func_178440
label_16313c:
    if (ctx->pc == 0x16313Cu) {
        ctx->pc = 0x16313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163138u;
        // 0x16313c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163140u;
        goto label_163140;
    }
    ctx->pc = 0x163138u;
    SET_GPR_U32(ctx, 31, 0x163140u);
    ctx->pc = 0x16313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163138u;
    // 0x16313c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178440u;
    { ctx->pc = 0x178440; return; }
    ctx->pc = 0x163140u;
label_163140:
    // 0x163140: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_163144:
    // 0x163144: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_163148:
    // 0x163148: 0xa2260010  sb          $a2, 0x10($s1)
    ctx->pc = 0x163148u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 6));
label_16314c:
    // 0x16314c: 0x3c02447d  lui         $v0, 0x447D
    ctx->pc = 0x16314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17533 << 16));
label_163150:
    // 0x163150: 0xa2260011  sb          $a2, 0x11($s1)
    ctx->pc = 0x163150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 6));
label_163154:
    // 0x163154: 0x3c044478  lui         $a0, 0x4478
    ctx->pc = 0x163154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17528 << 16));
label_163158:
    // 0x163158: 0xa2260012  sb          $a2, 0x12($s1)
    ctx->pc = 0x163158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 6));
label_16315c:
    // 0x16315c: 0x3c054358  lui         $a1, 0x4358
    ctx->pc = 0x16315cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17240 << 16));
label_163160:
    // 0x163160: 0xa2260013  sb          $a2, 0x13($s1)
    ctx->pc = 0x163160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 6));
label_163164:
    // 0x163164: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x163164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_163168:
    // 0x163168: 0x3446c000  ori         $a2, $v0, 0xC000
    ctx->pc = 0x163168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_16316c:
    // 0x16316c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x16316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_163170:
    // 0x163170: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_163174:
    // 0x163174: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x163174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_163178:
    // 0x163178: 0x3c03436f  lui         $v1, 0x436F
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17263 << 16));
label_16317c:
    // 0x16317c: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_163180:
    // 0x163180: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x163180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_163184:
    // 0x163184: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x163184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_163188:
    // 0x163188: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16318c:
    // 0x16318c: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_163190:
    // 0x163190: 0xc066e34  jal         func_19B8D0
label_163194:
    if (ctx->pc == 0x163194u) {
        ctx->pc = 0x163194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163190u;
        // 0x163194: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163198u;
        goto label_163198;
    }
    ctx->pc = 0x163190u;
    SET_GPR_U32(ctx, 31, 0x163198u);
    ctx->pc = 0x163194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163190u;
    // 0x163194: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x163198u;
label_163198:
    // 0x163198: 0x87a30120  lh          $v1, 0x120($sp)
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
label_16319c:
    // 0x16319c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16319cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1631a0:
    // 0x1631a0: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x1631a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1631a4:
    // 0x1631a4: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1631a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1631a8:
    // 0x1631a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1631a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1631ac:
    // 0x1631ac: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x1631acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
label_1631b0:
    // 0x1631b0: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x1631b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_1631b4:
    // 0x1631b4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1631b8:
    // 0x1631b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1631b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1631bc:
    // 0x1631bc: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x1631bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
label_1631c0:
    // 0x1631c0: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x1631c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_1631c4:
    // 0x1631c4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1631c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1631c8:
    // 0x1631c8: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x1631c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_1631cc:
    // 0x1631cc: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x1631ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_1631d0:
    // 0x1631d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1631d4:
    // 0x1631d4: 0x1480ffc2  bnez        $a0, . + 4 + (-0x3E << 2)
label_1631d8:
    if (ctx->pc == 0x1631D8u) {
        ctx->pc = 0x1631D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631D4u;
        // 0x1631d8: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1631DCu;
        goto label_1631dc;
    }
    ctx->pc = 0x1631D4u;
    {
        const bool branch_taken_0x1631d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631D4u;
        // 0x1631d8: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631d4) {
            ctx->pc = 0x1630E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1630e0;
        }
    }
    ctx->pc = 0x1631DCu;
label_1631dc:
    // 0x1631dc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1631e0:
    // 0x1631e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1631e4:
    // 0x1631e4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1631e8:
    // 0x1631e8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1631e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1631ec:
    // 0x1631ec: 0xac207720  sw          $zero, 0x7720($at)
    ctx->pc = 0x1631ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30496), GPR_U32(ctx, 0));
label_1631f0:
    // 0x1631f0: 0x34647730  ori         $a0, $v1, 0x7730
    ctx->pc = 0x1631f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30512);
label_1631f4:
    // 0x1631f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1631f8:
    // 0x1631f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1631fc:
    // 0x1631fc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1631fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_163200:
    // 0x163200: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x163200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_163204:
    // 0x163204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_163208:
    // 0x163208: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x163208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_16320c:
    // 0x16320c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_163210:
    // 0x163210: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_163214:
    // 0x163214: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x163214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_163218:
    // 0x163218: 0x1460fd62  bnez        $v1, . + 4 + (-0x29E << 2)
label_16321c:
    if (ctx->pc == 0x16321Cu) {
        ctx->pc = 0x163220u;
        goto label_163220;
    }
    ctx->pc = 0x163218u;
    {
        const bool branch_taken_0x163218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163218) {
            ctx->pc = 0x1627A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1627a4; return; }
        }
    }
    ctx->pc = 0x163220u;
label_163220:
    // 0x163220: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x163220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_163224:
    // 0x163224: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x163224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_163228:
    // 0x163228: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x163228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16322c:
    // 0x16322c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16322cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_163230:
    // 0x163230: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x163230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_163234:
    // 0x163234: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x163234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_163238:
    // 0x163238: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16323c:
    // 0x16323c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16323cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163240:
    // 0x163240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_163244:
    // 0x163244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163248:
    // 0x163248: 0x3e00008  jr          $ra
label_16324c:
    if (ctx->pc == 0x16324Cu) {
        ctx->pc = 0x16324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163248u;
        // 0x16324c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163250u;
        goto label_163250;
    }
    ctx->pc = 0x163248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163248u;
        // 0x16324c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163250u;
label_163250:
    // 0x163250: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x163250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_163254:
    // 0x163254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163258:
    // 0x163258: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x163258u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_16325c:
    // 0x16325c: 0x9025761f  lbu         $a1, 0x761F($at)
    ctx->pc = 0x16325cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30239)));
label_163260:
    // 0x163260: 0x14a30021  bne         $a1, $v1, . + 4 + (0x21 << 2)
label_163264:
    if (ctx->pc == 0x163264u) {
        ctx->pc = 0x163264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163260u;
        // 0x163264: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163268u;
        goto label_163268;
    }
    ctx->pc = 0x163260u;
    {
        const bool branch_taken_0x163260 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x163264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163260u;
        // 0x163264: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163260) {
            ctx->pc = 0x1632E8u;
            goto label_1632e8;
        }
    }
    ctx->pc = 0x163268u;
label_163268:
    // 0x163268: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x163268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16326c:
    // 0x16326c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16326cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_163270:
    // 0x163270: 0x9027490d  lbu         $a3, 0x490D($at)
    ctx->pc = 0x163270u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_163274:
    // 0x163274: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x163274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_163278:
    // 0x163278: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16327c:
    // 0x16327c: 0x24a55640  addiu       $a1, $a1, 0x5640
    ctx->pc = 0x16327cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22080));
label_163280:
    // 0x163280: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x163280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_163284:
    // 0x163284: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x163284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_163288:
    // 0x163288: 0x24635641  addiu       $v1, $v1, 0x5641
    ctx->pc = 0x163288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22081));
label_16328c:
    // 0x16328c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x16328cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_163290:
    // 0x163290: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_163294:
    // 0x163294: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x163294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_163298:
    // 0x163298: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x163298u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_16329c:
    // 0x16329c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x16329cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1632a0:
    // 0x1632a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1632a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1632a4:
    // 0x1632a4: 0x0  nop
    ctx->pc = 0x1632a4u;
    // NOP
label_1632a8:
    // 0x1632a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1632a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1632ac:
    // 0x1632ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1632acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1632b0:
    // 0x1632b0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1632b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1632b4:
    // 0x1632b4: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x1632b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1632b8:
    // 0x1632b8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1632bc:
    // 0x1632bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1632bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1632c0:
    // 0x1632c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1632c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1632c4:
    // 0x1632c4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1632c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1632c8:
    // 0x1632c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1632c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1632cc:
    // 0x1632cc: 0x0  nop
    ctx->pc = 0x1632ccu;
    // NOP
label_1632d0:
    // 0x1632d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1632d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1632d4:
    // 0x1632d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1632d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1632d8:
    // 0x1632d8: 0x0  nop
    ctx->pc = 0x1632d8u;
    // NOP
label_1632dc:
    // 0x1632dc: 0x0  nop
    ctx->pc = 0x1632dcu;
    // NOP
label_1632e0:
    // 0x1632e0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1632e4:
    if (ctx->pc == 0x1632E4u) {
        ctx->pc = 0x1632E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632E0u;
        // 0x1632e4: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1632E8u;
        goto label_1632e8;
    }
    ctx->pc = 0x1632E0u;
    {
        const bool branch_taken_0x1632e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632E0u;
        // 0x1632e4: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632e0) {
            ctx->pc = 0x16336Cu;
            goto label_16336c;
        }
    }
    ctx->pc = 0x1632E8u;
label_1632e8:
    // 0x1632e8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1632e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1632ec:
    // 0x1632ec: 0x9028490d  lbu         $t0, 0x490D($at)
    ctx->pc = 0x1632ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1632f0:
    // 0x1632f0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1632f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1632f4:
    // 0x1632f4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1632f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1632f8:
    // 0x1632f8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_1632fc:
    // 0x1632fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1632fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_163300:
    // 0x163300: 0x24e75640  addiu       $a3, $a3, 0x5640
    ctx->pc = 0x163300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22080));
label_163304:
    // 0x163304: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_163308:
    // 0x163308: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_16330c:
    // 0x16330c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_163310:
    // 0x163310: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x163310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_163314:
    // 0x163314: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x163314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_163318:
    // 0x163318: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_16331c:
    // 0x16331c: 0x24635641  addiu       $v1, $v1, 0x5641
    ctx->pc = 0x16331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22081));
label_163320:
    // 0x163320: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x163320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_163324:
    // 0x163324: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x163324u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_163328:
    // 0x163328: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x163328u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16332c:
    // 0x16332c: 0x0  nop
    ctx->pc = 0x16332cu;
    // NOP
label_163330:
    // 0x163330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_163334:
    // 0x163334: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_163338:
    // 0x163338: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x163338u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_16333c:
    // 0x16333c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x16333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_163340:
    // 0x163340: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x163340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_163344:
    // 0x163344: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x163344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_163348:
    // 0x163348: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x163348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16334c:
    // 0x16334c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16334cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_163350:
    // 0x163350: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x163350u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_163354:
    // 0x163354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x163354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_163358:
    // 0x163358: 0x0  nop
    ctx->pc = 0x163358u;
    // NOP
label_16335c:
    // 0x16335c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16335cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_163360:
    // 0x163360: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_163364:
    // 0x163364: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x163364u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_163368:
    // 0x163368: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x163368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_16336c:
    // 0x16336c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16336cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_163370:
    // 0x163370: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x163370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_163374:
    // 0x163374: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x163374u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_163378:
    // 0x163378: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_16337c:
    if (ctx->pc == 0x16337Cu) {
        ctx->pc = 0x163380u;
        goto label_163380;
    }
    ctx->pc = 0x163378u;
    {
        const bool branch_taken_0x163378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x163378) {
            ctx->pc = 0x16338Cu;
            goto label_16338c;
        }
    }
    ctx->pc = 0x163380u;
label_163380:
    // 0x163380: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x163380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_163384:
    // 0x163384: 0x10000023  b           . + 4 + (0x23 << 2)
label_163388:
    if (ctx->pc == 0x163388u) {
        ctx->pc = 0x163388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163384u;
        // 0x163388: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16338Cu;
        goto label_16338c;
    }
    ctx->pc = 0x163384u;
    {
        const bool branch_taken_0x163384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163384u;
        // 0x163388: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163384) {
            ctx->pc = 0x163414u;
            { ctx->pc = 0x163414; return; }
        }
    }
    ctx->pc = 0x16338Cu;
label_16338c:
    // 0x16338c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x16338cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_163390:
    // 0x163390: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x163390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
label_163394:
    // 0x163394: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x163394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_163398:
    // 0x163398: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x163398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_16339c:
    // 0x16339c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16339cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1633a0:
    // 0x1633a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1633a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1633a4:
    // 0x1633a4: 0x0  nop
    ctx->pc = 0x1633a4u;
    // NOP
label_1633a8:
    // 0x1633a8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1633a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1633ac:
    // 0x1633ac: 0x0  nop
    ctx->pc = 0x1633acu;
    // NOP
label_1633b0:
    // 0x1633b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1633b4:
    if (ctx->pc == 0x1633B4u) {
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B0u;
        // 0x1633b4: 0x3c0347ea  lui         $v1, 0x47EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18410 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633B8u;
        goto label_1633b8;
    }
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B0u;
        // 0x1633b4: 0x3c0347ea  lui         $v1, 0x47EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633C0u;
            { ctx->pc = 0x1633c0; return; }
        }
    }
    ctx->pc = 0x1633B8u;
label_1633b8:
    // 0x1633b8: 0x10000016  b           . + 4 + (0x16 << 2)
label_1633bc:
    if (ctx->pc == 0x1633BCu) {
        ctx->pc = 0x1633BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B8u;
        // 0x1633bc: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633C0u;
        { ctx->pc = 0x1633c0; return; }
    }
    ctx->pc = 0x1633B8u;
    {
        const bool branch_taken_0x1633b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B8u;
        // 0x1633bc: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b8) {
            ctx->pc = 0x163414u;
            { ctx->pc = 0x163414; return; }
        }
    }
    ctx->pc = 0x1633C0u;
    ctx->pc = 0x1633c0u;
    return;
}
