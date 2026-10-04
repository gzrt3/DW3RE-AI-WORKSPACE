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


void FUN_0019b8d0_part241(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x210bd0u: goto label_210bd0;
        case 0x210bd4u: goto label_210bd4;
        case 0x210bd8u: goto label_210bd8;
        case 0x210bdcu: goto label_210bdc;
        case 0x210be0u: goto label_210be0;
        case 0x210be4u: goto label_210be4;
        case 0x210be8u: goto label_210be8;
        case 0x210becu: goto label_210bec;
        case 0x210bf0u: goto label_210bf0;
        case 0x210bf4u: goto label_210bf4;
        case 0x210bf8u: goto label_210bf8;
        case 0x210bfcu: goto label_210bfc;
        case 0x210c00u: goto label_210c00;
        case 0x210c04u: goto label_210c04;
        case 0x210c08u: goto label_210c08;
        case 0x210c0cu: goto label_210c0c;
        case 0x210c10u: goto label_210c10;
        case 0x210c14u: goto label_210c14;
        case 0x210c18u: goto label_210c18;
        case 0x210c1cu: goto label_210c1c;
        case 0x210c20u: goto label_210c20;
        case 0x210c24u: goto label_210c24;
        case 0x210c28u: goto label_210c28;
        case 0x210c2cu: goto label_210c2c;
        case 0x210c30u: goto label_210c30;
        case 0x210c34u: goto label_210c34;
        case 0x210c38u: goto label_210c38;
        case 0x210c3cu: goto label_210c3c;
        case 0x210c40u: goto label_210c40;
        case 0x210c44u: goto label_210c44;
        case 0x210c48u: goto label_210c48;
        case 0x210c4cu: goto label_210c4c;
        case 0x210c50u: goto label_210c50;
        case 0x210c54u: goto label_210c54;
        case 0x210c58u: goto label_210c58;
        case 0x210c5cu: goto label_210c5c;
        case 0x210c60u: goto label_210c60;
        case 0x210c64u: goto label_210c64;
        case 0x210c68u: goto label_210c68;
        case 0x210c6cu: goto label_210c6c;
        case 0x210c70u: goto label_210c70;
        case 0x210c74u: goto label_210c74;
        case 0x210c78u: goto label_210c78;
        case 0x210c7cu: goto label_210c7c;
        case 0x210c80u: goto label_210c80;
        case 0x210c84u: goto label_210c84;
        case 0x210c88u: goto label_210c88;
        case 0x210c8cu: goto label_210c8c;
        case 0x210c90u: goto label_210c90;
        case 0x210c94u: goto label_210c94;
        case 0x210c98u: goto label_210c98;
        case 0x210c9cu: goto label_210c9c;
        case 0x210ca0u: goto label_210ca0;
        case 0x210ca4u: goto label_210ca4;
        case 0x210ca8u: goto label_210ca8;
        case 0x210cacu: goto label_210cac;
        case 0x210cb0u: goto label_210cb0;
        case 0x210cb4u: goto label_210cb4;
        case 0x210cb8u: goto label_210cb8;
        case 0x210cbcu: goto label_210cbc;
        case 0x210cc0u: goto label_210cc0;
        case 0x210cc4u: goto label_210cc4;
        case 0x210cc8u: goto label_210cc8;
        case 0x210cccu: goto label_210ccc;
        case 0x210cd0u: goto label_210cd0;
        case 0x210cd4u: goto label_210cd4;
        case 0x210cd8u: goto label_210cd8;
        case 0x210cdcu: goto label_210cdc;
        case 0x210ce0u: goto label_210ce0;
        case 0x210ce4u: goto label_210ce4;
        case 0x210ce8u: goto label_210ce8;
        case 0x210cecu: goto label_210cec;
        case 0x210cf0u: goto label_210cf0;
        case 0x210cf4u: goto label_210cf4;
        case 0x210cf8u: goto label_210cf8;
        case 0x210cfcu: goto label_210cfc;
        case 0x210d00u: goto label_210d00;
        case 0x210d04u: goto label_210d04;
        case 0x210d08u: goto label_210d08;
        case 0x210d0cu: goto label_210d0c;
        case 0x210d10u: goto label_210d10;
        case 0x210d14u: goto label_210d14;
        case 0x210d18u: goto label_210d18;
        case 0x210d1cu: goto label_210d1c;
        case 0x210d20u: goto label_210d20;
        case 0x210d24u: goto label_210d24;
        case 0x210d28u: goto label_210d28;
        case 0x210d2cu: goto label_210d2c;
        case 0x210d30u: goto label_210d30;
        case 0x210d34u: goto label_210d34;
        case 0x210d38u: goto label_210d38;
        case 0x210d3cu: goto label_210d3c;
        case 0x210d40u: goto label_210d40;
        case 0x210d44u: goto label_210d44;
        case 0x210d48u: goto label_210d48;
        case 0x210d4cu: goto label_210d4c;
        case 0x210d50u: goto label_210d50;
        case 0x210d54u: goto label_210d54;
        case 0x210d58u: goto label_210d58;
        case 0x210d5cu: goto label_210d5c;
        case 0x210d60u: goto label_210d60;
        case 0x210d64u: goto label_210d64;
        case 0x210d68u: goto label_210d68;
        case 0x210d6cu: goto label_210d6c;
        case 0x210d70u: goto label_210d70;
        case 0x210d74u: goto label_210d74;
        case 0x210d78u: goto label_210d78;
        case 0x210d7cu: goto label_210d7c;
        case 0x210d80u: goto label_210d80;
        case 0x210d84u: goto label_210d84;
        case 0x210d88u: goto label_210d88;
        case 0x210d8cu: goto label_210d8c;
        case 0x210d90u: goto label_210d90;
        case 0x210d94u: goto label_210d94;
        case 0x210d98u: goto label_210d98;
        case 0x210d9cu: goto label_210d9c;
        case 0x210da0u: goto label_210da0;
        case 0x210da4u: goto label_210da4;
        case 0x210da8u: goto label_210da8;
        case 0x210dacu: goto label_210dac;
        case 0x210db0u: goto label_210db0;
        case 0x210db4u: goto label_210db4;
        case 0x210db8u: goto label_210db8;
        case 0x210dbcu: goto label_210dbc;
        case 0x210dc0u: goto label_210dc0;
        case 0x210dc4u: goto label_210dc4;
        case 0x210dc8u: goto label_210dc8;
        case 0x210dccu: goto label_210dcc;
        case 0x210dd0u: goto label_210dd0;
        case 0x210dd4u: goto label_210dd4;
        case 0x210dd8u: goto label_210dd8;
        case 0x210ddcu: goto label_210ddc;
        case 0x210de0u: goto label_210de0;
        case 0x210de4u: goto label_210de4;
        case 0x210de8u: goto label_210de8;
        case 0x210decu: goto label_210dec;
        case 0x210df0u: goto label_210df0;
        case 0x210df4u: goto label_210df4;
        case 0x210df8u: goto label_210df8;
        case 0x210dfcu: goto label_210dfc;
        case 0x210e00u: goto label_210e00;
        case 0x210e04u: goto label_210e04;
        case 0x210e08u: goto label_210e08;
        case 0x210e0cu: goto label_210e0c;
        case 0x210e10u: goto label_210e10;
        case 0x210e14u: goto label_210e14;
        case 0x210e18u: goto label_210e18;
        case 0x210e1cu: goto label_210e1c;
        case 0x210e20u: goto label_210e20;
        case 0x210e24u: goto label_210e24;
        case 0x210e28u: goto label_210e28;
        case 0x210e2cu: goto label_210e2c;
        case 0x210e30u: goto label_210e30;
        case 0x210e34u: goto label_210e34;
        case 0x210e38u: goto label_210e38;
        case 0x210e3cu: goto label_210e3c;
        case 0x210e40u: goto label_210e40;
        case 0x210e44u: goto label_210e44;
        case 0x210e48u: goto label_210e48;
        case 0x210e4cu: goto label_210e4c;
        case 0x210e50u: goto label_210e50;
        case 0x210e54u: goto label_210e54;
        case 0x210e58u: goto label_210e58;
        case 0x210e5cu: goto label_210e5c;
        case 0x210e60u: goto label_210e60;
        case 0x210e64u: goto label_210e64;
        case 0x210e68u: goto label_210e68;
        case 0x210e6cu: goto label_210e6c;
        case 0x210e70u: goto label_210e70;
        case 0x210e74u: goto label_210e74;
        case 0x210e78u: goto label_210e78;
        case 0x210e7cu: goto label_210e7c;
        case 0x210e80u: goto label_210e80;
        case 0x210e84u: goto label_210e84;
        case 0x210e88u: goto label_210e88;
        case 0x210e8cu: goto label_210e8c;
        case 0x210e90u: goto label_210e90;
        case 0x210e94u: goto label_210e94;
        case 0x210e98u: goto label_210e98;
        case 0x210e9cu: goto label_210e9c;
        case 0x210ea0u: goto label_210ea0;
        case 0x210ea4u: goto label_210ea4;
        case 0x210ea8u: goto label_210ea8;
        case 0x210eacu: goto label_210eac;
        case 0x210eb0u: goto label_210eb0;
        case 0x210eb4u: goto label_210eb4;
        case 0x210eb8u: goto label_210eb8;
        case 0x210ebcu: goto label_210ebc;
        case 0x210ec0u: goto label_210ec0;
        case 0x210ec4u: goto label_210ec4;
        case 0x210ec8u: goto label_210ec8;
        case 0x210eccu: goto label_210ecc;
        case 0x210ed0u: goto label_210ed0;
        case 0x210ed4u: goto label_210ed4;
        case 0x210ed8u: goto label_210ed8;
        case 0x210edcu: goto label_210edc;
        case 0x210ee0u: goto label_210ee0;
        case 0x210ee4u: goto label_210ee4;
        case 0x210ee8u: goto label_210ee8;
        case 0x210eecu: goto label_210eec;
        case 0x210ef0u: goto label_210ef0;
        case 0x210ef4u: goto label_210ef4;
        case 0x210ef8u: goto label_210ef8;
        case 0x210efcu: goto label_210efc;
        case 0x210f00u: goto label_210f00;
        case 0x210f04u: goto label_210f04;
        case 0x210f08u: goto label_210f08;
        case 0x210f0cu: goto label_210f0c;
        case 0x210f10u: goto label_210f10;
        case 0x210f14u: goto label_210f14;
        case 0x210f18u: goto label_210f18;
        case 0x210f1cu: goto label_210f1c;
        case 0x210f20u: goto label_210f20;
        case 0x210f24u: goto label_210f24;
        case 0x210f28u: goto label_210f28;
        case 0x210f2cu: goto label_210f2c;
        case 0x210f30u: goto label_210f30;
        case 0x210f34u: goto label_210f34;
        case 0x210f38u: goto label_210f38;
        case 0x210f3cu: goto label_210f3c;
        case 0x210f40u: goto label_210f40;
        case 0x210f44u: goto label_210f44;
        case 0x210f48u: goto label_210f48;
        case 0x210f4cu: goto label_210f4c;
        case 0x210f50u: goto label_210f50;
        case 0x210f54u: goto label_210f54;
        case 0x210f58u: goto label_210f58;
        case 0x210f5cu: goto label_210f5c;
        case 0x210f60u: goto label_210f60;
        case 0x210f64u: goto label_210f64;
        case 0x210f68u: goto label_210f68;
        case 0x210f6cu: goto label_210f6c;
        case 0x210f70u: goto label_210f70;
        case 0x210f74u: goto label_210f74;
        case 0x210f78u: goto label_210f78;
        case 0x210f7cu: goto label_210f7c;
        case 0x210f80u: goto label_210f80;
        case 0x210f84u: goto label_210f84;
        case 0x210f88u: goto label_210f88;
        case 0x210f8cu: goto label_210f8c;
        case 0x210f90u: goto label_210f90;
        case 0x210f94u: goto label_210f94;
        case 0x210f98u: goto label_210f98;
        case 0x210f9cu: goto label_210f9c;
        case 0x210fa0u: goto label_210fa0;
        case 0x210fa4u: goto label_210fa4;
        case 0x210fa8u: goto label_210fa8;
        case 0x210facu: goto label_210fac;
        case 0x210fb0u: goto label_210fb0;
        case 0x210fb4u: goto label_210fb4;
        case 0x210fb8u: goto label_210fb8;
        case 0x210fbcu: goto label_210fbc;
        case 0x210fc0u: goto label_210fc0;
        case 0x210fc4u: goto label_210fc4;
        case 0x210fc8u: goto label_210fc8;
        case 0x210fccu: goto label_210fcc;
        case 0x210fd0u: goto label_210fd0;
        case 0x210fd4u: goto label_210fd4;
        case 0x210fd8u: goto label_210fd8;
        case 0x210fdcu: goto label_210fdc;
        case 0x210fe0u: goto label_210fe0;
        case 0x210fe4u: goto label_210fe4;
        case 0x210fe8u: goto label_210fe8;
        case 0x210fecu: goto label_210fec;
        case 0x210ff0u: goto label_210ff0;
        case 0x210ff4u: goto label_210ff4;
        case 0x210ff8u: goto label_210ff8;
        case 0x210ffcu: goto label_210ffc;
        case 0x211000u: goto label_211000;
        case 0x211004u: goto label_211004;
        case 0x211008u: goto label_211008;
        case 0x21100cu: goto label_21100c;
        case 0x211010u: goto label_211010;
        case 0x211014u: goto label_211014;
        case 0x211018u: goto label_211018;
        case 0x21101cu: goto label_21101c;
        case 0x211020u: goto label_211020;
        case 0x211024u: goto label_211024;
        case 0x211028u: goto label_211028;
        case 0x21102cu: goto label_21102c;
        case 0x211030u: goto label_211030;
        case 0x211034u: goto label_211034;
        case 0x211038u: goto label_211038;
        case 0x21103cu: goto label_21103c;
        case 0x211040u: goto label_211040;
        case 0x211044u: goto label_211044;
        case 0x211048u: goto label_211048;
        case 0x21104cu: goto label_21104c;
        case 0x211050u: goto label_211050;
        case 0x211054u: goto label_211054;
        case 0x211058u: goto label_211058;
        case 0x21105cu: goto label_21105c;
        case 0x211060u: goto label_211060;
        case 0x211064u: goto label_211064;
        case 0x211068u: goto label_211068;
        case 0x21106cu: goto label_21106c;
        case 0x211070u: goto label_211070;
        case 0x211074u: goto label_211074;
        case 0x211078u: goto label_211078;
        case 0x21107cu: goto label_21107c;
        case 0x211080u: goto label_211080;
        case 0x211084u: goto label_211084;
        case 0x211088u: goto label_211088;
        case 0x21108cu: goto label_21108c;
        case 0x211090u: goto label_211090;
        case 0x211094u: goto label_211094;
        case 0x211098u: goto label_211098;
        case 0x21109cu: goto label_21109c;
        case 0x2110a0u: goto label_2110a0;
        case 0x2110a4u: goto label_2110a4;
        case 0x2110a8u: goto label_2110a8;
        case 0x2110acu: goto label_2110ac;
        case 0x2110b0u: goto label_2110b0;
        case 0x2110b4u: goto label_2110b4;
        case 0x2110b8u: goto label_2110b8;
        case 0x2110bcu: goto label_2110bc;
        case 0x2110c0u: goto label_2110c0;
        case 0x2110c4u: goto label_2110c4;
        case 0x2110c8u: goto label_2110c8;
        case 0x2110ccu: goto label_2110cc;
        case 0x2110d0u: goto label_2110d0;
        case 0x2110d4u: goto label_2110d4;
        case 0x2110d8u: goto label_2110d8;
        case 0x2110dcu: goto label_2110dc;
        case 0x2110e0u: goto label_2110e0;
        case 0x2110e4u: goto label_2110e4;
        case 0x2110e8u: goto label_2110e8;
        case 0x2110ecu: goto label_2110ec;
        case 0x2110f0u: goto label_2110f0;
        case 0x2110f4u: goto label_2110f4;
        case 0x2110f8u: goto label_2110f8;
        case 0x2110fcu: goto label_2110fc;
        case 0x211100u: goto label_211100;
        case 0x211104u: goto label_211104;
        case 0x211108u: goto label_211108;
        case 0x21110cu: goto label_21110c;
        case 0x211110u: goto label_211110;
        case 0x211114u: goto label_211114;
        case 0x211118u: goto label_211118;
        case 0x21111cu: goto label_21111c;
        case 0x211120u: goto label_211120;
        case 0x211124u: goto label_211124;
        case 0x211128u: goto label_211128;
        case 0x21112cu: goto label_21112c;
        case 0x211130u: goto label_211130;
        case 0x211134u: goto label_211134;
        case 0x211138u: goto label_211138;
        case 0x21113cu: goto label_21113c;
        case 0x211140u: goto label_211140;
        case 0x211144u: goto label_211144;
        case 0x211148u: goto label_211148;
        case 0x21114cu: goto label_21114c;
        case 0x211150u: goto label_211150;
        case 0x211154u: goto label_211154;
        case 0x211158u: goto label_211158;
        case 0x21115cu: goto label_21115c;
        case 0x211160u: goto label_211160;
        case 0x211164u: goto label_211164;
        case 0x211168u: goto label_211168;
        case 0x21116cu: goto label_21116c;
        case 0x211170u: goto label_211170;
        case 0x211174u: goto label_211174;
        case 0x211178u: goto label_211178;
        case 0x21117cu: goto label_21117c;
        case 0x211180u: goto label_211180;
        case 0x211184u: goto label_211184;
        case 0x211188u: goto label_211188;
        case 0x21118cu: goto label_21118c;
        case 0x211190u: goto label_211190;
        case 0x211194u: goto label_211194;
        case 0x211198u: goto label_211198;
        case 0x21119cu: goto label_21119c;
        case 0x2111a0u: goto label_2111a0;
        case 0x2111a4u: goto label_2111a4;
        case 0x2111a8u: goto label_2111a8;
        case 0x2111acu: goto label_2111ac;
        case 0x2111b0u: goto label_2111b0;
        case 0x2111b4u: goto label_2111b4;
        case 0x2111b8u: goto label_2111b8;
        case 0x2111bcu: goto label_2111bc;
        case 0x2111c0u: goto label_2111c0;
        case 0x2111c4u: goto label_2111c4;
        case 0x2111c8u: goto label_2111c8;
        case 0x2111ccu: goto label_2111cc;
        case 0x2111d0u: goto label_2111d0;
        case 0x2111d4u: goto label_2111d4;
        case 0x2111d8u: goto label_2111d8;
        case 0x2111dcu: goto label_2111dc;
        case 0x2111e0u: goto label_2111e0;
        case 0x2111e4u: goto label_2111e4;
        case 0x2111e8u: goto label_2111e8;
        case 0x2111ecu: goto label_2111ec;
        case 0x2111f0u: goto label_2111f0;
        case 0x2111f4u: goto label_2111f4;
        case 0x2111f8u: goto label_2111f8;
        case 0x2111fcu: goto label_2111fc;
        case 0x211200u: goto label_211200;
        case 0x211204u: goto label_211204;
        case 0x211208u: goto label_211208;
        case 0x21120cu: goto label_21120c;
        case 0x211210u: goto label_211210;
        case 0x211214u: goto label_211214;
        case 0x211218u: goto label_211218;
        case 0x21121cu: goto label_21121c;
        case 0x211220u: goto label_211220;
        case 0x211224u: goto label_211224;
        case 0x211228u: goto label_211228;
        case 0x21122cu: goto label_21122c;
        case 0x211230u: goto label_211230;
        case 0x211234u: goto label_211234;
        case 0x211238u: goto label_211238;
        case 0x21123cu: goto label_21123c;
        case 0x211240u: goto label_211240;
        case 0x211244u: goto label_211244;
        case 0x211248u: goto label_211248;
        case 0x21124cu: goto label_21124c;
        case 0x211250u: goto label_211250;
        case 0x211254u: goto label_211254;
        case 0x211258u: goto label_211258;
        case 0x21125cu: goto label_21125c;
        case 0x211260u: goto label_211260;
        case 0x211264u: goto label_211264;
        case 0x211268u: goto label_211268;
        case 0x21126cu: goto label_21126c;
        case 0x211270u: goto label_211270;
        case 0x211274u: goto label_211274;
        case 0x211278u: goto label_211278;
        case 0x21127cu: goto label_21127c;
        case 0x211280u: goto label_211280;
        case 0x211284u: goto label_211284;
        case 0x211288u: goto label_211288;
        case 0x21128cu: goto label_21128c;
        case 0x211290u: goto label_211290;
        case 0x211294u: goto label_211294;
        case 0x211298u: goto label_211298;
        case 0x21129cu: goto label_21129c;
        case 0x2112a0u: goto label_2112a0;
        case 0x2112a4u: goto label_2112a4;
        case 0x2112a8u: goto label_2112a8;
        case 0x2112acu: goto label_2112ac;
        case 0x2112b0u: goto label_2112b0;
        case 0x2112b4u: goto label_2112b4;
        case 0x2112b8u: goto label_2112b8;
        case 0x2112bcu: goto label_2112bc;
        case 0x2112c0u: goto label_2112c0;
        case 0x2112c4u: goto label_2112c4;
        case 0x2112c8u: goto label_2112c8;
        case 0x2112ccu: goto label_2112cc;
        case 0x2112d0u: goto label_2112d0;
        case 0x2112d4u: goto label_2112d4;
        case 0x2112d8u: goto label_2112d8;
        case 0x2112dcu: goto label_2112dc;
        case 0x2112e0u: goto label_2112e0;
        case 0x2112e4u: goto label_2112e4;
        case 0x2112e8u: goto label_2112e8;
        case 0x2112ecu: goto label_2112ec;
        case 0x2112f0u: goto label_2112f0;
        case 0x2112f4u: goto label_2112f4;
        case 0x2112f8u: goto label_2112f8;
        case 0x2112fcu: goto label_2112fc;
        case 0x211300u: goto label_211300;
        case 0x211304u: goto label_211304;
        case 0x211308u: goto label_211308;
        case 0x21130cu: goto label_21130c;
        case 0x211310u: goto label_211310;
        case 0x211314u: goto label_211314;
        case 0x211318u: goto label_211318;
        case 0x21131cu: goto label_21131c;
        case 0x211320u: goto label_211320;
        case 0x211324u: goto label_211324;
        case 0x211328u: goto label_211328;
        case 0x21132cu: goto label_21132c;
        case 0x211330u: goto label_211330;
        case 0x211334u: goto label_211334;
        case 0x211338u: goto label_211338;
        case 0x21133cu: goto label_21133c;
        case 0x211340u: goto label_211340;
        case 0x211344u: goto label_211344;
        case 0x211348u: goto label_211348;
        case 0x21134cu: goto label_21134c;
        case 0x211350u: goto label_211350;
        case 0x211354u: goto label_211354;
        case 0x211358u: goto label_211358;
        case 0x21135cu: goto label_21135c;
        case 0x211360u: goto label_211360;
        case 0x211364u: goto label_211364;
        case 0x211368u: goto label_211368;
        case 0x21136cu: goto label_21136c;
        case 0x211370u: goto label_211370;
        case 0x211374u: goto label_211374;
        case 0x211378u: goto label_211378;
        case 0x21137cu: goto label_21137c;
        case 0x211380u: goto label_211380;
        case 0x211384u: goto label_211384;
        case 0x211388u: goto label_211388;
        case 0x21138cu: goto label_21138c;
        case 0x211390u: goto label_211390;
        case 0x211394u: goto label_211394;
        case 0x211398u: goto label_211398;
        case 0x21139cu: goto label_21139c;
        default: return;
    }

label_210bd0:
    if (ctx->pc == 0x210BD0u) {
        ctx->pc = 0x210BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BCCu;
        // 0x210bd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BD4u;
        goto label_210bd4;
    }
    ctx->pc = 0x210BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210BD4u);
        ctx->pc = 0x210BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BCCu;
        // 0x210bd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BCCu, 0x210BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210BD4u;
label_210bd4:
    // 0x210bd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210bd8:
    // 0x210bd8: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_210bdc:
    // 0x210bdc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_210be0:
    if (ctx->pc == 0x210BE0u) {
        ctx->pc = 0x210BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BDCu;
        // 0x210be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BE4u;
        goto label_210be4;
    }
    ctx->pc = 0x210BDCu;
    {
        const bool branch_taken_0x210bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BDCu;
        // 0x210be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bdc) {
            ctx->pc = 0x210BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x210bc0; return; }
        }
    }
    ctx->pc = 0x210BE4u;
label_210be4:
    // 0x210be4: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x210be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_210be8:
    // 0x210be8: 0x260f809  jalr        $s3
label_210bec:
    if (ctx->pc == 0x210BECu) {
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE8u;
        // 0x210bec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BF0u;
        goto label_210bf0;
    }
    ctx->pc = 0x210BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210BF0u);
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE8u;
        // 0x210bec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BE8u, 0x210BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210BF0u;
label_210bf0:
    // 0x210bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bf4:
    // 0x210bf4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_210bf8:
    // 0x210bf8: 0x260f809  jalr        $s3
label_210bfc:
    if (ctx->pc == 0x210BFCu) {
        ctx->pc = 0x210BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF8u;
        // 0x210bfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C00u;
        goto label_210c00;
    }
    ctx->pc = 0x210BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210C00u);
        ctx->pc = 0x210BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF8u;
        // 0x210bfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BF8u, 0x210C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C00u;
label_210c00:
    // 0x210c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c04:
    // 0x210c04: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_210c08:
    // 0x210c08: 0x260f809  jalr        $s3
label_210c0c:
    if (ctx->pc == 0x210C0Cu) {
        ctx->pc = 0x210C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C08u;
        // 0x210c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C10u;
        goto label_210c10;
    }
    ctx->pc = 0x210C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210C10u);
        ctx->pc = 0x210C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C08u;
        // 0x210c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C08u, 0x210C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C10u;
label_210c10:
    // 0x210c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c14:
    // 0x210c14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210c18:
    // 0x210c18: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x210c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_210c1c:
    // 0x210c1c: 0x2484000b  addiu       $a0, $a0, 0xB
    ctx->pc = 0x210c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
label_210c20:
    // 0x210c20: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_210c24:
    if (ctx->pc == 0x210C24u) {
        ctx->pc = 0x210C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C20u;
        // 0x210c24: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C28u;
        goto label_210c28;
    }
    ctx->pc = 0x210C20u;
    {
        const bool branch_taken_0x210c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C20u;
        // 0x210c24: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c20) {
            ctx->pc = 0x210B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x210b70; return; }
        }
    }
    ctx->pc = 0x210C28u;
label_210c28:
    // 0x210c28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x210c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_210c2c:
    // 0x210c2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x210c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210c30:
    // 0x210c30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210c34:
    // 0x210c34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210c38:
    // 0x210c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210c3c:
    // 0x210c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210c40:
    // 0x210c40: 0x3e00008  jr          $ra
label_210c44:
    if (ctx->pc == 0x210C44u) {
        ctx->pc = 0x210C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C40u;
        // 0x210c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C48u;
        goto label_210c48;
    }
    ctx->pc = 0x210C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C40u;
        // 0x210c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C48u;
label_210c48:
    // 0x210c48: 0x0  nop
    ctx->pc = 0x210c48u;
    // NOP
label_210c4c:
    // 0x210c4c: 0x0  nop
    ctx->pc = 0x210c4cu;
    // NOP
label_210c50:
    // 0x210c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_210c54:
    // 0x210c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x210c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_210c58:
    // 0x210c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210c5c:
    // 0x210c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210c60:
    // 0x210c60: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210c64:
    if (ctx->pc == 0x210C64u) {
        ctx->pc = 0x210C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C60u;
        // 0x210c64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C68u;
        goto label_210c68;
    }
    ctx->pc = 0x210C60u;
    {
        const bool branch_taken_0x210c60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C60u;
        // 0x210c64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c60) {
            ctx->pc = 0x210C74u;
            goto label_210c74;
        }
    }
    ctx->pc = 0x210C68u;
label_210c68:
    // 0x210c68: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210c68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_210c6c:
    // 0x210c6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_210c70:
    if (ctx->pc == 0x210C70u) {
        ctx->pc = 0x210C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C6Cu;
        // 0x210c70: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C74u;
        goto label_210c74;
    }
    ctx->pc = 0x210C6Cu;
    {
        const bool branch_taken_0x210c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C6Cu;
        // 0x210c70: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c6c) {
            ctx->pc = 0x210C7Cu;
            goto label_210c7c;
        }
    }
    ctx->pc = 0x210C74u;
label_210c74:
    // 0x210c74: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_210c78:
    // 0x210c78: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x210c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_210c7c:
    // 0x210c7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210c80:
    // 0x210c80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210c84:
    // 0x210c84: 0x34214e60  ori         $at, $at, 0x4E60
    ctx->pc = 0x210c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20064);
label_210c88:
    // 0x210c88: 0xa18821  addu        $s1, $a1, $at
    ctx->pc = 0x210c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_210c8c:
    // 0x210c8c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_210c90:
    // 0x210c90: 0x240f809  jalr        $s2
label_210c94:
    if (ctx->pc == 0x210C94u) {
        ctx->pc = 0x210C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C90u;
        // 0x210c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C98u;
        goto label_210c98;
    }
    ctx->pc = 0x210C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210C98u);
        ctx->pc = 0x210C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C90u;
        // 0x210c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C90u, 0x210C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C98u;
label_210c98:
    // 0x210c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c9c:
    // 0x210c9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210ca0:
    // 0x210ca0: 0x2a020065  slti        $v0, $s0, 0x65
    ctx->pc = 0x210ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)101) ? 1 : 0);
label_210ca4:
    // 0x210ca4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_210ca8:
    if (ctx->pc == 0x210CA8u) {
        ctx->pc = 0x210CACu;
        goto label_210cac;
    }
    ctx->pc = 0x210CA4u;
    {
        const bool branch_taken_0x210ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ca4) {
            ctx->pc = 0x210C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210c8c;
        }
    }
    ctx->pc = 0x210CACu;
label_210cac:
    // 0x210cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210cb0:
    // 0x210cb0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_210cb4:
    // 0x210cb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210cb8:
    // 0x210cb8: 0x240f809  jalr        $s2
label_210cbc:
    if (ctx->pc == 0x210CBCu) {
        ctx->pc = 0x210CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CB8u;
        // 0x210cbc: 0x24450065  addiu       $a1, $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CC0u;
        goto label_210cc0;
    }
    ctx->pc = 0x210CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CC0u);
        ctx->pc = 0x210CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CB8u;
        // 0x210cbc: 0x24450065  addiu       $a1, $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 101));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CB8u, 0x210CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CC0u;
label_210cc0:
    // 0x210cc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210cc4:
    // 0x210cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210cc8:
    // 0x210cc8: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x210cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_210ccc:
    // 0x210ccc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_210cd0:
    if (ctx->pc == 0x210CD0u) {
        ctx->pc = 0x210CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CCCu;
        // 0x210cd0: 0x2625008e  addiu       $a1, $s1, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CD4u;
        goto label_210cd4;
    }
    ctx->pc = 0x210CCCu;
    {
        const bool branch_taken_0x210ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CCCu;
        // 0x210cd0: 0x2625008e  addiu       $a1, $s1, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ccc) {
            ctx->pc = 0x210CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210cb0;
        }
    }
    ctx->pc = 0x210CD4u;
label_210cd4:
    // 0x210cd4: 0x240f809  jalr        $s2
label_210cd8:
    if (ctx->pc == 0x210CD8u) {
        ctx->pc = 0x210CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CD4u;
        // 0x210cd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CDCu;
        goto label_210cdc;
    }
    ctx->pc = 0x210CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CDCu);
        ctx->pc = 0x210CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CD4u;
        // 0x210cd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CD4u, 0x210CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CDCu;
label_210cdc:
    // 0x210cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ce0:
    // 0x210ce0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x210ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_210ce4:
    // 0x210ce4: 0x240f809  jalr        $s2
label_210ce8:
    if (ctx->pc == 0x210CE8u) {
        ctx->pc = 0x210CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CE4u;
        // 0x210ce8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CECu;
        goto label_210cec;
    }
    ctx->pc = 0x210CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CECu);
        ctx->pc = 0x210CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CE4u;
        // 0x210ce8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CE4u, 0x210CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CECu;
label_210cec:
    // 0x210cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210cf0:
    // 0x210cf0: 0x26250094  addiu       $a1, $s1, 0x94
    ctx->pc = 0x210cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_210cf4:
    // 0x210cf4: 0x240f809  jalr        $s2
label_210cf8:
    if (ctx->pc == 0x210CF8u) {
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CFCu;
        goto label_210cfc;
    }
    ctx->pc = 0x210CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CFCu);
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CF4u, 0x210CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CFCu;
label_210cfc:
    // 0x210cfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d00:
    // 0x210d00: 0x26250098  addiu       $a1, $s1, 0x98
    ctx->pc = 0x210d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_210d04:
    // 0x210d04: 0x240f809  jalr        $s2
label_210d08:
    if (ctx->pc == 0x210D08u) {
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D04u;
        // 0x210d08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D0Cu;
        goto label_210d0c;
    }
    ctx->pc = 0x210D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D0Cu);
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D04u;
        // 0x210d08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D04u, 0x210D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D0Cu;
label_210d0c:
    // 0x210d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d10:
    // 0x210d10: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x210d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_210d14:
    // 0x210d14: 0x240f809  jalr        $s2
label_210d18:
    if (ctx->pc == 0x210D18u) {
        ctx->pc = 0x210D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D14u;
        // 0x210d18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D1Cu;
        goto label_210d1c;
    }
    ctx->pc = 0x210D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D1Cu);
        ctx->pc = 0x210D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D14u;
        // 0x210d18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D14u, 0x210D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D1Cu;
label_210d1c:
    // 0x210d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d20:
    // 0x210d20: 0x262500a8  addiu       $a1, $s1, 0xA8
    ctx->pc = 0x210d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_210d24:
    // 0x210d24: 0x240f809  jalr        $s2
label_210d28:
    if (ctx->pc == 0x210D28u) {
        ctx->pc = 0x210D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D24u;
        // 0x210d28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D2Cu;
        goto label_210d2c;
    }
    ctx->pc = 0x210D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D2Cu);
        ctx->pc = 0x210D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D24u;
        // 0x210d28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D24u, 0x210D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D2Cu;
label_210d2c:
    // 0x210d2c: 0x262500ac  addiu       $a1, $s1, 0xAC
    ctx->pc = 0x210d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_210d30:
    // 0x210d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d34:
    // 0x210d34: 0x240f809  jalr        $s2
label_210d38:
    if (ctx->pc == 0x210D38u) {
        ctx->pc = 0x210D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D34u;
        // 0x210d38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D3Cu;
        goto label_210d3c;
    }
    ctx->pc = 0x210D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D3Cu);
        ctx->pc = 0x210D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D34u;
        // 0x210d38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D34u, 0x210D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D3Cu;
label_210d3c:
    // 0x210d3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x210d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_210d40:
    // 0x210d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210d44:
    // 0x210d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210d48:
    // 0x210d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210d4c:
    // 0x210d4c: 0x3e00008  jr          $ra
label_210d50:
    if (ctx->pc == 0x210D50u) {
        ctx->pc = 0x210D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D4Cu;
        // 0x210d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D54u;
        goto label_210d54;
    }
    ctx->pc = 0x210D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D4Cu;
        // 0x210d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D54u;
label_210d54:
    // 0x210d54: 0x0  nop
    ctx->pc = 0x210d54u;
    // NOP
label_210d58:
    // 0x210d58: 0x0  nop
    ctx->pc = 0x210d58u;
    // NOP
label_210d5c:
    // 0x210d5c: 0x0  nop
    ctx->pc = 0x210d5cu;
    // NOP
label_210d60:
    // 0x210d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x210d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_210d64:
    // 0x210d64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x210d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_210d68:
    // 0x210d68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_210d6c:
    // 0x210d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x210d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_210d70:
    // 0x210d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210d74:
    // 0x210d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210d78:
    // 0x210d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210d7c:
    // 0x210d7c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210d80:
    if (ctx->pc == 0x210D80u) {
        ctx->pc = 0x210D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D7Cu;
        // 0x210d80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D84u;
        goto label_210d84;
    }
    ctx->pc = 0x210D7Cu;
    {
        const bool branch_taken_0x210d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D7Cu;
        // 0x210d80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d7c) {
            ctx->pc = 0x210D90u;
            goto label_210d90;
        }
    }
    ctx->pc = 0x210D84u;
label_210d84:
    // 0x210d84: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
label_210d88:
    // 0x210d88: 0x10000003  b           . + 4 + (0x3 << 2)
label_210d8c:
    if (ctx->pc == 0x210D8Cu) {
        ctx->pc = 0x210D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D88u;
        // 0x210d8c: 0x26942380  addiu       $s4, $s4, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D90u;
        goto label_210d90;
    }
    ctx->pc = 0x210D88u;
    {
        const bool branch_taken_0x210d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D88u;
        // 0x210d8c: 0x26942380  addiu       $s4, $s4, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d88) {
            ctx->pc = 0x210D98u;
            goto label_210d98;
        }
    }
    ctx->pc = 0x210D90u;
label_210d90:
    // 0x210d90: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x210d90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
label_210d94:
    // 0x210d94: 0x269423c0  addiu       $s4, $s4, 0x23C0
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9152));
label_210d98:
    // 0x210d98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210d9c:
    // 0x210d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210da0:
    // 0x210da0: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x210da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_210da4:
    // 0x210da4: 0xa19821  addu        $s3, $a1, $at
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_210da8:
    // 0x210da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210dac:
    // 0x210dac: 0x0  nop
    ctx->pc = 0x210dacu;
    // NOP
label_210db0:
    // 0x210db0: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_210db4:
    // 0x210db4: 0x280f809  jalr        $s4
label_210db8:
    if (ctx->pc == 0x210DB8u) {
        ctx->pc = 0x210DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DB4u;
        // 0x210db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DBCu;
        goto label_210dbc;
    }
    ctx->pc = 0x210DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210DBCu);
        ctx->pc = 0x210DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DB4u;
        // 0x210db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DB4u, 0x210DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210DBCu;
label_210dbc:
    // 0x210dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210dc0:
    // 0x210dc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210dc4:
    // 0x210dc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x210dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210dc8:
    // 0x210dc8: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_210dcc:
    // 0x210dcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x210dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_210dd0:
    // 0x210dd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210dd4:
    // 0x210dd4: 0x280f809  jalr        $s4
label_210dd8:
    if (ctx->pc == 0x210DD8u) {
        ctx->pc = 0x210DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DD4u;
        // 0x210dd8: 0x24450011  addiu       $a1, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DDCu;
        goto label_210ddc;
    }
    ctx->pc = 0x210DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210DDCu);
        ctx->pc = 0x210DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DD4u;
        // 0x210dd8: 0x24450011  addiu       $a1, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DD4u, 0x210DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210DDCu;
label_210ddc:
    // 0x210ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210de0:
    // 0x210de0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210de4:
    // 0x210de4: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x210de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_210de8:
    // 0x210de8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_210dec:
    if (ctx->pc == 0x210DECu) {
        ctx->pc = 0x210DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DE8u;
        // 0x210dec: 0x26b50011  addiu       $s5, $s5, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DF0u;
        goto label_210df0;
    }
    ctx->pc = 0x210DE8u;
    {
        const bool branch_taken_0x210de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DE8u;
        // 0x210dec: 0x26b50011  addiu       $s5, $s5, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210de8) {
            ctx->pc = 0x210DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210dc8;
        }
    }
    ctx->pc = 0x210DF0u;
label_210df0:
    // 0x210df0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210df4:
    // 0x210df4: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x210df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
label_210df8:
    // 0x210df8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_210dfc:
    if (ctx->pc == 0x210DFCu) {
        ctx->pc = 0x210E00u;
        goto label_210e00;
    }
    ctx->pc = 0x210DF8u;
    {
        const bool branch_taken_0x210df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210df8) {
            ctx->pc = 0x210DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210dac;
        }
    }
    ctx->pc = 0x210E00u;
label_210e00:
    // 0x210e00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210e04:
    // 0x210e04: 0x0  nop
    ctx->pc = 0x210e04u;
    // NOP
label_210e08:
    // 0x210e08: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_210e0c:
    // 0x210e0c: 0x2445009d  addiu       $a1, $v0, 0x9D
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 157));
label_210e10:
    // 0x210e10: 0x280f809  jalr        $s4
label_210e14:
    if (ctx->pc == 0x210E14u) {
        ctx->pc = 0x210E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E10u;
        // 0x210e14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E18u;
        goto label_210e18;
    }
    ctx->pc = 0x210E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E18u);
        ctx->pc = 0x210E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E10u;
        // 0x210e14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E10u, 0x210E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E18u;
label_210e18:
    // 0x210e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e1c:
    // 0x210e1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210e20:
    // 0x210e20: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x210e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_210e24:
    // 0x210e24: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_210e28:
    if (ctx->pc == 0x210E28u) {
        ctx->pc = 0x210E2Cu;
        goto label_210e2c;
    }
    ctx->pc = 0x210E24u;
    {
        const bool branch_taken_0x210e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210e24) {
            ctx->pc = 0x210E04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e04;
        }
    }
    ctx->pc = 0x210E2Cu;
label_210e2c:
    // 0x210e2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210e30:
    // 0x210e30: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x210e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_210e34:
    // 0x210e34: 0x244500a3  addiu       $a1, $v0, 0xA3
    ctx->pc = 0x210e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
label_210e38:
    // 0x210e38: 0x280f809  jalr        $s4
label_210e3c:
    if (ctx->pc == 0x210E3Cu) {
        ctx->pc = 0x210E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E38u;
        // 0x210e3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E40u;
        goto label_210e40;
    }
    ctx->pc = 0x210E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E40u);
        ctx->pc = 0x210E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E38u;
        // 0x210e3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E38u, 0x210E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E40u;
label_210e40:
    // 0x210e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e44:
    // 0x210e44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210e48:
    // 0x210e48: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x210e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_210e4c:
    // 0x210e4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_210e50:
    if (ctx->pc == 0x210E50u) {
        ctx->pc = 0x210E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E4Cu;
        // 0x210e50: 0x26650099  addiu       $a1, $s3, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E54u;
        goto label_210e54;
    }
    ctx->pc = 0x210E4Cu;
    {
        const bool branch_taken_0x210e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E4Cu;
        // 0x210e50: 0x26650099  addiu       $a1, $s3, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e4c) {
            ctx->pc = 0x210E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e30;
        }
    }
    ctx->pc = 0x210E54u;
label_210e54:
    // 0x210e54: 0x280f809  jalr        $s4
label_210e58:
    if (ctx->pc == 0x210E58u) {
        ctx->pc = 0x210E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E54u;
        // 0x210e58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E5Cu;
        goto label_210e5c;
    }
    ctx->pc = 0x210E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E5Cu);
        ctx->pc = 0x210E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E54u;
        // 0x210e58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E54u, 0x210E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E5Cu;
label_210e5c:
    // 0x210e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e60:
    // 0x210e60: 0x2665009a  addiu       $a1, $s3, 0x9A
    ctx->pc = 0x210e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 154));
label_210e64:
    // 0x210e64: 0x280f809  jalr        $s4
label_210e68:
    if (ctx->pc == 0x210E68u) {
        ctx->pc = 0x210E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E64u;
        // 0x210e68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E6Cu;
        goto label_210e6c;
    }
    ctx->pc = 0x210E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E6Cu);
        ctx->pc = 0x210E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E64u;
        // 0x210e68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E64u, 0x210E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E6Cu;
label_210e6c:
    // 0x210e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e70:
    // 0x210e70: 0x2665009b  addiu       $a1, $s3, 0x9B
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 155));
label_210e74:
    // 0x210e74: 0x280f809  jalr        $s4
label_210e78:
    if (ctx->pc == 0x210E78u) {
        ctx->pc = 0x210E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E74u;
        // 0x210e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E7Cu;
        goto label_210e7c;
    }
    ctx->pc = 0x210E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E7Cu);
        ctx->pc = 0x210E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E74u;
        // 0x210e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E74u, 0x210E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E7Cu;
label_210e7c:
    // 0x210e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e80:
    // 0x210e80: 0x2665009c  addiu       $a1, $s3, 0x9C
    ctx->pc = 0x210e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_210e84:
    // 0x210e84: 0x280f809  jalr        $s4
label_210e88:
    if (ctx->pc == 0x210E88u) {
        ctx->pc = 0x210E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E84u;
        // 0x210e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E8Cu;
        goto label_210e8c;
    }
    ctx->pc = 0x210E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E8Cu);
        ctx->pc = 0x210E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E84u;
        // 0x210e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E84u, 0x210E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E8Cu;
label_210e8c:
    // 0x210e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e90:
    // 0x210e90: 0x266500a8  addiu       $a1, $s3, 0xA8
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
label_210e94:
    // 0x210e94: 0x280f809  jalr        $s4
label_210e98:
    if (ctx->pc == 0x210E98u) {
        ctx->pc = 0x210E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E94u;
        // 0x210e98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E9Cu;
        goto label_210e9c;
    }
    ctx->pc = 0x210E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E9Cu);
        ctx->pc = 0x210E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E94u;
        // 0x210e98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E94u, 0x210E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E9Cu;
label_210e9c:
    // 0x210e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ea0:
    // 0x210ea0: 0x266500a9  addiu       $a1, $s3, 0xA9
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 169));
label_210ea4:
    // 0x210ea4: 0x280f809  jalr        $s4
label_210ea8:
    if (ctx->pc == 0x210EA8u) {
        ctx->pc = 0x210EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA4u;
        // 0x210ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EACu;
        goto label_210eac;
    }
    ctx->pc = 0x210EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210EACu);
        ctx->pc = 0x210EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA4u;
        // 0x210ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EA4u, 0x210EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210EACu;
label_210eac:
    // 0x210eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210eb0:
    // 0x210eb0: 0x266500ac  addiu       $a1, $s3, 0xAC
    ctx->pc = 0x210eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
label_210eb4:
    // 0x210eb4: 0x280f809  jalr        $s4
label_210eb8:
    if (ctx->pc == 0x210EB8u) {
        ctx->pc = 0x210EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EB4u;
        // 0x210eb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EBCu;
        goto label_210ebc;
    }
    ctx->pc = 0x210EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210EBCu);
        ctx->pc = 0x210EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EB4u;
        // 0x210eb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EB4u, 0x210EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210EBCu;
label_210ebc:
    // 0x210ebc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210ec0:
    // 0x210ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ec4:
    // 0x210ec4: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x210ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_210ec8:
    // 0x210ec8: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_210ecc:
    if (ctx->pc == 0x210ECCu) {
        ctx->pc = 0x210ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EC8u;
        // 0x210ecc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210ED0u;
        goto label_210ed0;
    }
    ctx->pc = 0x210EC8u;
    {
        const bool branch_taken_0x210ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EC8u;
        // 0x210ecc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ec8) {
            ctx->pc = 0x210DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210da8;
        }
    }
    ctx->pc = 0x210ED0u;
label_210ed0:
    // 0x210ed0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x210ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_210ed4:
    // 0x210ed4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x210ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_210ed8:
    // 0x210ed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x210ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210edc:
    // 0x210edc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210ee0:
    // 0x210ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210ee4:
    // 0x210ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210ee8:
    // 0x210ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210eec:
    // 0x210eec: 0x3e00008  jr          $ra
label_210ef0:
    if (ctx->pc == 0x210EF0u) {
        ctx->pc = 0x210EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EECu;
        // 0x210ef0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EF4u;
        goto label_210ef4;
    }
    ctx->pc = 0x210EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EECu;
        // 0x210ef0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210EF4u;
label_210ef4:
    // 0x210ef4: 0x0  nop
    ctx->pc = 0x210ef4u;
    // NOP
label_210ef8:
    // 0x210ef8: 0x0  nop
    ctx->pc = 0x210ef8u;
    // NOP
label_210efc:
    // 0x210efc: 0x0  nop
    ctx->pc = 0x210efcu;
    // NOP
label_210f00:
    // 0x210f00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_210f04:
    // 0x210f04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x210f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_210f08:
    // 0x210f08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x210f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_210f0c:
    // 0x210f0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x210f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_210f10:
    // 0x210f10: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_210f14:
    // 0x210f14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x210f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_210f18:
    // 0x210f18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_210f1c:
    // 0x210f1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_210f20:
    // 0x210f20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x210f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_210f24:
    // 0x210f24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210f28:
    // 0x210f28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210f2c:
    // 0x210f2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210f30:
    // 0x210f30: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
label_210f34:
    if (ctx->pc == 0x210F34u) {
        ctx->pc = 0x210F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F30u;
        // 0x210f34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F38u;
        goto label_210f38;
    }
    ctx->pc = 0x210F30u;
    {
        const bool branch_taken_0x210f30 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F30u;
        // 0x210f34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f30) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210F38u;
label_210f38:
    // 0x210f38: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x210f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_210f3c:
    // 0x210f3c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210f40:
    // 0x210f40: 0x26732380  addiu       $s3, $s3, 0x2380
    ctx->pc = 0x210f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
label_210f44:
    // 0x210f44: 0x10000005  b           . + 4 + (0x5 << 2)
label_210f48:
    if (ctx->pc == 0x210F48u) {
        ctx->pc = 0x210F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F44u;
        // 0x210f48: 0xac8230d4  sw          $v0, 0x30D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F4Cu;
        goto label_210f4c;
    }
    ctx->pc = 0x210F44u;
    {
        const bool branch_taken_0x210f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F44u;
        // 0x210f48: 0xac8230d4  sw          $v0, 0x30D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f44) {
            ctx->pc = 0x210F5Cu;
            goto label_210f5c;
        }
    }
    ctx->pc = 0x210F4Cu;
label_210f4c:
    // 0x210f4c: 0x8c8230d4  lw          $v0, 0x30D4($a0)
    ctx->pc = 0x210f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12500)));
label_210f50:
    // 0x210f50: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210f54:
    // 0x210f54: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_210f58:
    // 0x210f58: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x210f58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_210f5c:
    // 0x210f5c: 0x248430d8  addiu       $a0, $a0, 0x30D8
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12504));
label_210f60:
    // 0x210f60: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x210f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_210f64:
    // 0x210f64: 0x260f809  jalr        $s3
label_210f68:
    if (ctx->pc == 0x210F68u) {
        ctx->pc = 0x210F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F64u;
        // 0x210f68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F6Cu;
        goto label_210f6c;
    }
    ctx->pc = 0x210F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210F6Cu);
        ctx->pc = 0x210F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F64u;
        // 0x210f68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F64u, 0x210F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210F6Cu;
label_210f6c:
    // 0x210f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f70:
    // 0x210f70: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x210f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_210f74:
    // 0x210f74: 0x260f809  jalr        $s3
label_210f78:
    if (ctx->pc == 0x210F78u) {
        ctx->pc = 0x210F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F74u;
        // 0x210f78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F7Cu;
        goto label_210f7c;
    }
    ctx->pc = 0x210F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210F7Cu);
        ctx->pc = 0x210F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F74u;
        // 0x210f78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F74u, 0x210F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210F7Cu;
label_210f7c:
    // 0x210f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f80:
    // 0x210f80: 0x26c5000c  addiu       $a1, $s6, 0xC
    ctx->pc = 0x210f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_210f84:
    // 0x210f84: 0x260f809  jalr        $s3
label_210f88:
    if (ctx->pc == 0x210F88u) {
        ctx->pc = 0x210F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F84u;
        // 0x210f88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F8Cu;
        goto label_210f8c;
    }
    ctx->pc = 0x210F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210F8Cu);
        ctx->pc = 0x210F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F84u;
        // 0x210f88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F84u, 0x210F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f90:
    // 0x210f90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f94:
    // 0x210f94: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x210f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_210f98:
    // 0x210f98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f9c:
    // 0x210f9c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x210f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_210fa0:
    // 0x210fa0: 0x260f809  jalr        $s3
label_210fa4:
    if (ctx->pc == 0x210FA4u) {
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FA8u;
        goto label_210fa8;
    }
    ctx->pc = 0x210FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210FA8u);
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FA0u, 0x210FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210FA8u;
label_210fa8:
    // 0x210fa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210fac:
    // 0x210fac: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_210fb0:
    // 0x210fb0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_210fb4:
    if (ctx->pc == 0x210FB4u) {
        ctx->pc = 0x210FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB0u;
        // 0x210fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FB8u;
        goto label_210fb8;
    }
    ctx->pc = 0x210FB0u;
    {
        const bool branch_taken_0x210fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB0u;
        // 0x210fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fb0) {
            ctx->pc = 0x210F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210f94;
        }
    }
    ctx->pc = 0x210FB8u;
label_210fb8:
    // 0x210fb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fbc:
    // 0x210fbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fc0:
    // 0x210fc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fc4:
    // 0x210fc4: 0x0  nop
    ctx->pc = 0x210fc4u;
    // NOP
label_210fc8:
    // 0x210fc8: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_210fcc:
    // 0x210fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210fd0:
    // 0x210fd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_210fd4:
    // 0x210fd4: 0x34211188  ori         $at, $at, 0x1188
    ctx->pc = 0x210fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4488);
label_210fd8:
    // 0x210fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210fdc:
    // 0x210fdc: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x210fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_210fe0:
    // 0x210fe0: 0x260f809  jalr        $s3
label_210fe4:
    if (ctx->pc == 0x210FE4u) {
        ctx->pc = 0x210FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FE0u;
        // 0x210fe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FE8u;
        goto label_210fe8;
    }
    ctx->pc = 0x210FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210FE8u);
        ctx->pc = 0x210FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FE0u;
        // 0x210fe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FE0u, 0x210FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210FE8u;
label_210fe8:
    // 0x210fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210fec:
    // 0x210fec: 0x2a030021  slti        $v1, $s0, 0x21
    ctx->pc = 0x210fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
label_210ff0:
    // 0x210ff0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_210ff4:
    if (ctx->pc == 0x210FF4u) {
        ctx->pc = 0x210FF8u;
        goto label_210ff8;
    }
    ctx->pc = 0x210FF0u;
    {
        const bool branch_taken_0x210ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ff0) {
            ctx->pc = 0x210FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210fc4;
        }
    }
    ctx->pc = 0x210FF8u;
label_210ff8:
    // 0x210ff8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210ffc:
    // 0x210ffc: 0x2a430021  slti        $v1, $s2, 0x21
    ctx->pc = 0x210ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
label_211000:
    // 0x211000: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_211004:
    if (ctx->pc == 0x211004u) {
        ctx->pc = 0x211004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211000u;
        // 0x211004: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211008u;
        goto label_211008;
    }
    ctx->pc = 0x211000u;
    {
        const bool branch_taken_0x211000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211000u;
        // 0x211004: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211000) {
            ctx->pc = 0x210FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210fc0;
        }
    }
    ctx->pc = 0x211008u;
label_211008:
    // 0x211008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x211008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21100c:
    // 0x21100c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_211010:
    // 0x211010: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_211014:
    // 0x211014: 0x342116b0  ori         $at, $at, 0x16B0
    ctx->pc = 0x211014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5808);
label_211018:
    // 0x211018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21101c:
    // 0x21101c: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_211020:
    // 0x211020: 0x260f809  jalr        $s3
label_211024:
    if (ctx->pc == 0x211024u) {
        ctx->pc = 0x211024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211020u;
        // 0x211024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211028u;
        goto label_211028;
    }
    ctx->pc = 0x211020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211028u);
        ctx->pc = 0x211024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211020u;
        // 0x211024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211020u, 0x211028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211028u;
label_211028:
    // 0x211028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21102c:
    // 0x21102c: 0x2a030140  slti        $v1, $s0, 0x140
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)320) ? 1 : 0);
label_211030:
    // 0x211030: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_211034:
    if (ctx->pc == 0x211034u) {
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211030u;
        // 0x211034: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211038u;
        goto label_211038;
    }
    ctx->pc = 0x211030u;
    {
        const bool branch_taken_0x211030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211030u;
        // 0x211034: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211030) {
            ctx->pc = 0x211010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211010;
        }
    }
    ctx->pc = 0x211038u;
label_211038:
    // 0x211038: 0x26d00020  addiu       $s0, $s6, 0x20
    ctx->pc = 0x211038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_21103c:
    // 0x21103c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211040:
    // 0x211040: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211044:
    // 0x211044: 0x0  nop
    ctx->pc = 0x211044u;
    // NOP
label_211048:
    // 0x211048: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_21104c:
    // 0x21104c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211050:
    // 0x211050: 0x260f809  jalr        $s3
label_211054:
    if (ctx->pc == 0x211054u) {
        ctx->pc = 0x211054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211050u;
        // 0x211054: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211058u;
        goto label_211058;
    }
    ctx->pc = 0x211050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211058u);
        ctx->pc = 0x211054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211050u;
        // 0x211054: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211050u, 0x211058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211058u;
label_211058:
    // 0x211058: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21105c:
    // 0x21105c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x21105cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_211060:
    // 0x211060: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_211064:
    if (ctx->pc == 0x211064u) {
        ctx->pc = 0x211064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211060u;
        // 0x211064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211068u;
        goto label_211068;
    }
    ctx->pc = 0x211060u;
    {
        const bool branch_taken_0x211060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211060u;
        // 0x211064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211060) {
            ctx->pc = 0x211044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211044;
        }
    }
    ctx->pc = 0x211068u;
label_211068:
    // 0x211068: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x211068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_21106c:
    // 0x21106c: 0x260f809  jalr        $s3
label_211070:
    if (ctx->pc == 0x211070u) {
        ctx->pc = 0x211070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21106Cu;
        // 0x211070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211074u;
        goto label_211074;
    }
    ctx->pc = 0x21106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211074u);
        ctx->pc = 0x211070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21106Cu;
        // 0x211070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21106Cu, 0x211074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211074u;
label_211074:
    // 0x211074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211078:
    // 0x211078: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_21107c:
    // 0x21107c: 0x260f809  jalr        $s3
label_211080:
    if (ctx->pc == 0x211080u) {
        ctx->pc = 0x211080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21107Cu;
        // 0x211080: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211084u;
        goto label_211084;
    }
    ctx->pc = 0x21107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211084u);
        ctx->pc = 0x211080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21107Cu;
        // 0x211080: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21107Cu, 0x211084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211084u;
label_211084:
    // 0x211084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211088:
    // 0x211088: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21108c:
    // 0x21108c: 0x260f809  jalr        $s3
label_211090:
    if (ctx->pc == 0x211090u) {
        ctx->pc = 0x211090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21108Cu;
        // 0x211090: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211094u;
        goto label_211094;
    }
    ctx->pc = 0x21108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211094u);
        ctx->pc = 0x211090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21108Cu;
        // 0x211090: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21108Cu, 0x211094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211094u;
label_211094:
    // 0x211094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211098:
    // 0x211098: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21109c:
    // 0x21109c: 0x260f809  jalr        $s3
label_2110a0:
    if (ctx->pc == 0x2110A0u) {
        ctx->pc = 0x2110A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21109Cu;
        // 0x2110a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110A4u;
        goto label_2110a4;
    }
    ctx->pc = 0x21109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2110A4u);
        ctx->pc = 0x2110A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21109Cu;
        // 0x2110a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21109Cu, 0x2110A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2110A4u;
label_2110a4:
    // 0x2110a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2110a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2110a8:
    // 0x2110a8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2110a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_2110ac:
    // 0x2110ac: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_2110b0:
    if (ctx->pc == 0x2110B0u) {
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ACu;
        // 0x2110b0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110B4u;
        goto label_2110b4;
    }
    ctx->pc = 0x2110ACu;
    {
        const bool branch_taken_0x2110ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ACu;
        // 0x2110b0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110ac) {
            ctx->pc = 0x211040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211040;
        }
    }
    ctx->pc = 0x2110B4u;
label_2110b4:
    // 0x2110b4: 0x26d100e0  addiu       $s1, $s6, 0xE0
    ctx->pc = 0x2110b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
label_2110b8:
    // 0x2110b8: 0x26d240a0  addiu       $s2, $s6, 0x40A0
    ctx->pc = 0x2110b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16544));
label_2110bc:
    // 0x2110bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2110bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2110c0:
    // 0x2110c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2110c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2110c4:
    // 0x2110c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2110c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2110c8:
    // 0x2110c8: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2110c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2110cc:
    // 0x2110cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2110d0:
    // 0x2110d0: 0x260f809  jalr        $s3
label_2110d4:
    if (ctx->pc == 0x2110D4u) {
        ctx->pc = 0x2110D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110D0u;
        // 0x2110d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110D8u;
        goto label_2110d8;
    }
    ctx->pc = 0x2110D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2110D8u);
        ctx->pc = 0x2110D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110D0u;
        // 0x2110d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110D0u, 0x2110D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2110D8u;
label_2110d8:
    // 0x2110d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2110d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2110dc:
    // 0x2110dc: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x2110dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_2110e0:
    // 0x2110e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2110e4:
    if (ctx->pc == 0x2110E4u) {
        ctx->pc = 0x2110E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E0u;
        // 0x2110e4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110E8u;
        goto label_2110e8;
    }
    ctx->pc = 0x2110E0u;
    {
        const bool branch_taken_0x2110e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2110E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E0u;
        // 0x2110e4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110e0) {
            ctx->pc = 0x2110C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2110c8;
        }
    }
    ctx->pc = 0x2110E8u;
label_2110e8:
    // 0x2110e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2110ec:
    // 0x2110ec: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2110f0:
    // 0x2110f0: 0x260f809  jalr        $s3
label_2110f4:
    if (ctx->pc == 0x2110F4u) {
        ctx->pc = 0x2110F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110F0u;
        // 0x2110f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110F8u;
        goto label_2110f8;
    }
    ctx->pc = 0x2110F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2110F8u);
        ctx->pc = 0x2110F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110F0u;
        // 0x2110f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110F0u, 0x2110F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2110F8u;
label_2110f8:
    // 0x2110f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2110fc:
    // 0x2110fc: 0x26250005  addiu       $a1, $s1, 0x5
    ctx->pc = 0x2110fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
label_211100:
    // 0x211100: 0x260f809  jalr        $s3
label_211104:
    if (ctx->pc == 0x211104u) {
        ctx->pc = 0x211104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211100u;
        // 0x211104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211108u;
        goto label_211108;
    }
    ctx->pc = 0x211100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211108u);
        ctx->pc = 0x211104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211100u;
        // 0x211104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211100u, 0x211108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211108u;
label_211108:
    // 0x211108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21110c:
    // 0x21110c: 0x26250006  addiu       $a1, $s1, 0x6
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_211110:
    // 0x211110: 0x260f809  jalr        $s3
label_211114:
    if (ctx->pc == 0x211114u) {
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211118u;
        goto label_211118;
    }
    ctx->pc = 0x211110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211118u);
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211110u, 0x211118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211118u;
label_211118:
    // 0x211118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21111c:
    // 0x21111c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_211120:
    // 0x211120: 0x260f809  jalr        $s3
label_211124:
    if (ctx->pc == 0x211124u) {
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211128u;
        goto label_211128;
    }
    ctx->pc = 0x211120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211128u);
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211120u, 0x211128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211128u;
label_211128:
    // 0x211128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21112c:
    // 0x21112c: 0x2625000a  addiu       $a1, $s1, 0xA
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_211130:
    // 0x211130: 0x260f809  jalr        $s3
label_211134:
    if (ctx->pc == 0x211134u) {
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211138u;
        goto label_211138;
    }
    ctx->pc = 0x211130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211138u);
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211130u, 0x211138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211138u;
label_211138:
    // 0x211138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21113c:
    // 0x21113c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_211140:
    // 0x211140: 0x260f809  jalr        $s3
label_211144:
    if (ctx->pc == 0x211144u) {
        ctx->pc = 0x211144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211140u;
        // 0x211144: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211148u;
        goto label_211148;
    }
    ctx->pc = 0x211140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211148u);
        ctx->pc = 0x211144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211140u;
        // 0x211144: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211140u, 0x211148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211148u;
label_211148:
    // 0x211148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21114c:
    // 0x21114c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x21114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_211150:
    // 0x211150: 0x260f809  jalr        $s3
label_211154:
    if (ctx->pc == 0x211154u) {
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211158u;
        goto label_211158;
    }
    ctx->pc = 0x211150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211158u);
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211150u, 0x211158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211158u;
label_211158:
    // 0x211158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21115c:
    // 0x21115c: 0x2625000f  addiu       $a1, $s1, 0xF
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
label_211160:
    // 0x211160: 0x260f809  jalr        $s3
label_211164:
    if (ctx->pc == 0x211164u) {
        ctx->pc = 0x211164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211160u;
        // 0x211164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211168u;
        goto label_211168;
    }
    ctx->pc = 0x211160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211168u);
        ctx->pc = 0x211164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211160u;
        // 0x211164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211160u, 0x211168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211168u;
label_211168:
    // 0x211168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21116c:
    // 0x21116c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_211170:
    // 0x211170: 0x260f809  jalr        $s3
label_211174:
    if (ctx->pc == 0x211174u) {
        ctx->pc = 0x211174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211170u;
        // 0x211174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211178u;
        goto label_211178;
    }
    ctx->pc = 0x211170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211178u);
        ctx->pc = 0x211174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211170u;
        // 0x211174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211170u, 0x211178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211178u;
label_211178:
    // 0x211178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21117c:
    // 0x21117c: 0x26250011  addiu       $a1, $s1, 0x11
    ctx->pc = 0x21117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17));
label_211180:
    // 0x211180: 0x260f809  jalr        $s3
label_211184:
    if (ctx->pc == 0x211184u) {
        ctx->pc = 0x211184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211180u;
        // 0x211184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211188u;
        goto label_211188;
    }
    ctx->pc = 0x211180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211188u);
        ctx->pc = 0x211184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211180u;
        // 0x211184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211180u, 0x211188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211188u;
label_211188:
    // 0x211188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21118c:
    // 0x21118c: 0x26250012  addiu       $a1, $s1, 0x12
    ctx->pc = 0x21118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_211190:
    // 0x211190: 0x260f809  jalr        $s3
label_211194:
    if (ctx->pc == 0x211194u) {
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211198u;
        goto label_211198;
    }
    ctx->pc = 0x211190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211198u);
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211190u, 0x211198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211198u;
label_211198:
    // 0x211198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21119c:
    // 0x21119c: 0x26250013  addiu       $a1, $s1, 0x13
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 19));
label_2111a0:
    // 0x2111a0: 0x260f809  jalr        $s3
label_2111a4:
    if (ctx->pc == 0x2111A4u) {
        ctx->pc = 0x2111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A0u;
        // 0x2111a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111A8u;
        goto label_2111a8;
    }
    ctx->pc = 0x2111A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111A8u);
        ctx->pc = 0x2111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A0u;
        // 0x2111a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111A0u, 0x2111A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111A8u;
label_2111a8:
    // 0x2111a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111ac:
    // 0x2111ac: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x2111acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2111b0:
    // 0x2111b0: 0x260f809  jalr        $s3
label_2111b4:
    if (ctx->pc == 0x2111B4u) {
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111B8u;
        goto label_2111b8;
    }
    ctx->pc = 0x2111B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111B8u);
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111B0u, 0x2111B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111B8u;
label_2111b8:
    // 0x2111b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111bc:
    // 0x2111bc: 0x26250015  addiu       $a1, $s1, 0x15
    ctx->pc = 0x2111bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
label_2111c0:
    // 0x2111c0: 0x260f809  jalr        $s3
label_2111c4:
    if (ctx->pc == 0x2111C4u) {
        ctx->pc = 0x2111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111C0u;
        // 0x2111c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111C8u;
        goto label_2111c8;
    }
    ctx->pc = 0x2111C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111C8u);
        ctx->pc = 0x2111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111C0u;
        // 0x2111c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111C0u, 0x2111C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111C8u;
label_2111c8:
    // 0x2111c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111cc:
    // 0x2111cc: 0x26250016  addiu       $a1, $s1, 0x16
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
label_2111d0:
    // 0x2111d0: 0x260f809  jalr        $s3
label_2111d4:
    if (ctx->pc == 0x2111D4u) {
        ctx->pc = 0x2111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111D0u;
        // 0x2111d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111D8u;
        goto label_2111d8;
    }
    ctx->pc = 0x2111D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111D8u);
        ctx->pc = 0x2111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111D0u;
        // 0x2111d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111D0u, 0x2111D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111D8u;
label_2111d8:
    // 0x2111d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111dc:
    // 0x2111dc: 0x26250017  addiu       $a1, $s1, 0x17
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
label_2111e0:
    // 0x2111e0: 0x260f809  jalr        $s3
label_2111e4:
    if (ctx->pc == 0x2111E4u) {
        ctx->pc = 0x2111E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111E0u;
        // 0x2111e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111E8u;
        goto label_2111e8;
    }
    ctx->pc = 0x2111E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111E8u);
        ctx->pc = 0x2111E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111E0u;
        // 0x2111e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111E0u, 0x2111E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111E8u;
label_2111e8:
    // 0x2111e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111ec:
    // 0x2111ec: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2111ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2111f0:
    // 0x2111f0: 0x260f809  jalr        $s3
label_2111f4:
    if (ctx->pc == 0x2111F4u) {
        ctx->pc = 0x2111F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F0u;
        // 0x2111f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111F8u;
        goto label_2111f8;
    }
    ctx->pc = 0x2111F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111F8u);
        ctx->pc = 0x2111F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F0u;
        // 0x2111f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111F0u, 0x2111F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111F8u;
label_2111f8:
    // 0x2111f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111fc:
    // 0x2111fc: 0x2625001a  addiu       $a1, $s1, 0x1A
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
label_211200:
    // 0x211200: 0x260f809  jalr        $s3
label_211204:
    if (ctx->pc == 0x211204u) {
        ctx->pc = 0x211204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211200u;
        // 0x211204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211208u;
        goto label_211208;
    }
    ctx->pc = 0x211200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211208u);
        ctx->pc = 0x211204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211200u;
        // 0x211204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211200u, 0x211208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211208u;
label_211208:
    // 0x211208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21120c:
    // 0x21120c: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x21120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_211210:
    // 0x211210: 0x260f809  jalr        $s3
label_211214:
    if (ctx->pc == 0x211214u) {
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211210u;
        // 0x211214: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211218u;
        goto label_211218;
    }
    ctx->pc = 0x211210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211218u);
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211210u;
        // 0x211214: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211210u, 0x211218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211218u;
label_211218:
    // 0x211218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21121c:
    // 0x21121c: 0x2625001e  addiu       $a1, $s1, 0x1E
    ctx->pc = 0x21121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_211220:
    // 0x211220: 0x260f809  jalr        $s3
label_211224:
    if (ctx->pc == 0x211224u) {
        ctx->pc = 0x211224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211220u;
        // 0x211224: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211228u;
        goto label_211228;
    }
    ctx->pc = 0x211220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211228u);
        ctx->pc = 0x211224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211220u;
        // 0x211224: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211220u, 0x211228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211228u;
label_211228:
    // 0x211228: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
label_21122c:
    if (ctx->pc == 0x21122Cu) {
        ctx->pc = 0x211230u;
        goto label_211230;
    }
    ctx->pc = 0x211228u;
    {
        const bool branch_taken_0x211228 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x211228) {
            ctx->pc = 0x21126Cu;
            goto label_21126c;
        }
    }
    ctx->pc = 0x211230u;
label_211230:
    // 0x211230: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x211230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_211234:
    // 0x211234: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x211234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_211238:
    // 0x211238: 0x2463b4e0  addiu       $v1, $v1, -0x4B20
    ctx->pc = 0x211238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
label_21123c:
    // 0x21123c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_211240:
    // 0x211240: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_211244:
    if (ctx->pc == 0x211244u) {
        ctx->pc = 0x211244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211240u;
        // 0x211244: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211248u;
        goto label_211248;
    }
    ctx->pc = 0x211240u;
    {
        const bool branch_taken_0x211240 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x211244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211240u;
        // 0x211244: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211240) {
            ctx->pc = 0x211250u;
            goto label_211250;
        }
    }
    ctx->pc = 0x211248u;
label_211248:
    // 0x211248: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x211248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_21124c:
    // 0x21124c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x21124cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_211250:
    // 0x211250: 0xa7a300ae  sh          $v1, 0xAE($sp)
    ctx->pc = 0x211250u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 3));
label_211254:
    // 0x211254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211258:
    // 0x211258: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_21125c:
    // 0x21125c: 0x260f809  jalr        $s3
label_211260:
    if (ctx->pc == 0x211260u) {
        ctx->pc = 0x211260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21125Cu;
        // 0x211260: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211264u;
        goto label_211264;
    }
    ctx->pc = 0x21125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211264u);
        ctx->pc = 0x211260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21125Cu;
        // 0x211260: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21125Cu, 0x211264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211264u;
label_211264:
    // 0x211264: 0x1000001d  b           . + 4 + (0x1D << 2)
label_211268:
    if (ctx->pc == 0x211268u) {
        ctx->pc = 0x21126Cu;
        goto label_21126c;
    }
    ctx->pc = 0x211264u;
    {
        const bool branch_taken_0x211264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211264) {
            ctx->pc = 0x2112DCu;
            goto label_2112dc;
        }
    }
    ctx->pc = 0x21126Cu;
label_21126c:
    // 0x21126c: 0x0  nop
    ctx->pc = 0x21126cu;
    // NOP
label_211270:
    // 0x211270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211274:
    // 0x211274: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_211278:
    // 0x211278: 0x260f809  jalr        $s3
label_21127c:
    if (ctx->pc == 0x21127Cu) {
        ctx->pc = 0x21127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211278u;
        // 0x21127c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211280u;
        goto label_211280;
    }
    ctx->pc = 0x211278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211280u);
        ctx->pc = 0x21127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211278u;
        // 0x21127c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211278u, 0x211280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211280u;
label_211280:
    // 0x211280: 0x87a700ae  lh          $a3, 0xAE($sp)
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
label_211284:
    // 0x211284: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_211288:
    // 0x211288: 0x34848081  ori         $a0, $a0, 0x8081
    ctx->pc = 0x211288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32897);
label_21128c:
    // 0x21128c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x21128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_211290:
    // 0x211290: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_211294:
    // 0x211294: 0x2463b4e0  addiu       $v1, $v1, -0x4B20
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
label_211298:
    // 0x211298: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x211298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21129c:
    // 0x21129c: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x21129cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_2112a0:
    // 0x2112a0: 0x0  nop
    ctx->pc = 0x2112a0u;
    // NOP
label_2112a4:
    // 0x2112a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2112a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2112a8:
    // 0x2112a8: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x2112a8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2112ac:
    // 0x2112ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2112b0:
    // 0x2112b0: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_2112b4:
    // 0x2112b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2112b8:
    // 0x2112b8: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x2112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2112bc:
    // 0x2112bc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2112bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2112c0:
    // 0x2112c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2112c4:
    // 0x2112c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2112c8:
    // 0x2112c8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2112cc:
    // 0x2112cc: 0x2010  mfhi        $a0
    ctx->pc = 0x2112ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2112d0:
    // 0x2112d0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2112d4:
    // 0x2112d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2112d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2112d8:
    // 0x2112d8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2112d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2112dc:
    // 0x2112dc: 0x0  nop
    ctx->pc = 0x2112dcu;
    // NOP
label_2112e0:
    // 0x2112e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2112e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2112e4:
    // 0x2112e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2112e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2112e8:
    // 0x2112e8: 0x255a021  addu        $s4, $s2, $s5
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2112ec:
    // 0x2112ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2112ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2112f0:
    // 0x2112f0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x2112f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2112f4:
    // 0x2112f4: 0x260f809  jalr        $s3
label_2112f8:
    if (ctx->pc == 0x2112F8u) {
        ctx->pc = 0x2112F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112F4u;
        // 0x2112f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112FCu;
        goto label_2112fc;
    }
    ctx->pc = 0x2112F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2112FCu);
        ctx->pc = 0x2112F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112F4u;
        // 0x2112f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112F4u, 0x2112FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2112FCu;
label_2112fc:
    // 0x2112fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2112fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211300:
    // 0x211300: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_211304:
    // 0x211304: 0x260f809  jalr        $s3
label_211308:
    if (ctx->pc == 0x211308u) {
        ctx->pc = 0x211308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211304u;
        // 0x211308: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21130Cu;
        goto label_21130c;
    }
    ctx->pc = 0x211304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21130Cu);
        ctx->pc = 0x211308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211304u;
        // 0x211308: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211304u, 0x21130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21130Cu;
label_21130c:
    // 0x21130c: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x21130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_211310:
    // 0x211310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211314:
    // 0x211314: 0x260f809  jalr        $s3
label_211318:
    if (ctx->pc == 0x211318u) {
        ctx->pc = 0x211318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211314u;
        // 0x211318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21131Cu;
        goto label_21131c;
    }
    ctx->pc = 0x211314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21131Cu);
        ctx->pc = 0x211318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211314u;
        // 0x211318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211314u, 0x21131Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21131Cu;
label_21131c:
    // 0x21131c: 0x250a021  addu        $s4, $s2, $s0
    ctx->pc = 0x21131cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_211320:
    // 0x211320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211324:
    // 0x211324: 0x26850022  addiu       $a1, $s4, 0x22
    ctx->pc = 0x211324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
label_211328:
    // 0x211328: 0x260f809  jalr        $s3
label_21132c:
    if (ctx->pc == 0x21132Cu) {
        ctx->pc = 0x21132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211328u;
        // 0x21132c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211330u;
        goto label_211330;
    }
    ctx->pc = 0x211328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211330u);
        ctx->pc = 0x21132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211328u;
        // 0x21132c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211328u, 0x211330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211330u;
label_211330:
    // 0x211330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211334:
    // 0x211334: 0x26850024  addiu       $a1, $s4, 0x24
    ctx->pc = 0x211334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_211338:
    // 0x211338: 0x260f809  jalr        $s3
label_21133c:
    if (ctx->pc == 0x21133Cu) {
        ctx->pc = 0x21133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211338u;
        // 0x21133c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211340u;
        goto label_211340;
    }
    ctx->pc = 0x211338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211340u);
        ctx->pc = 0x21133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211338u;
        // 0x21133c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211338u, 0x211340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211340u;
label_211340:
    // 0x211340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211344:
    // 0x211344: 0x26850026  addiu       $a1, $s4, 0x26
    ctx->pc = 0x211344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 38));
label_211348:
    // 0x211348: 0x260f809  jalr        $s3
label_21134c:
    if (ctx->pc == 0x21134Cu) {
        ctx->pc = 0x21134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211348u;
        // 0x21134c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211350u;
        goto label_211350;
    }
    ctx->pc = 0x211348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211350u);
        ctx->pc = 0x21134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211348u;
        // 0x21134c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211348u, 0x211350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211350u;
label_211350:
    // 0x211350: 0x26850028  addiu       $a1, $s4, 0x28
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_211354:
    // 0x211354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211358:
    // 0x211358: 0x260f809  jalr        $s3
label_21135c:
    if (ctx->pc == 0x21135Cu) {
        ctx->pc = 0x21135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211358u;
        // 0x21135c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211360u;
        goto label_211360;
    }
    ctx->pc = 0x211358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211360u);
        ctx->pc = 0x21135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211358u;
        // 0x21135c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211358u, 0x211360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211360u;
label_211360:
    // 0x211360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_211364:
    // 0x211364: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x211364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_211368:
    // 0x211368: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_21136c:
    if (ctx->pc == 0x21136Cu) {
        ctx->pc = 0x21136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211368u;
        // 0x21136c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211370u;
        goto label_211370;
    }
    ctx->pc = 0x211368u;
    {
        const bool branch_taken_0x211368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211368u;
        // 0x21136c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211368) {
            ctx->pc = 0x2112E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2112e8;
        }
    }
    ctx->pc = 0x211370u;
label_211370:
    // 0x211370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211374:
    // 0x211374: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_211378:
    // 0x211378: 0x260f809  jalr        $s3
label_21137c:
    if (ctx->pc == 0x21137Cu) {
        ctx->pc = 0x21137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211378u;
        // 0x21137c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211380u;
        goto label_211380;
    }
    ctx->pc = 0x211378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211380u);
        ctx->pc = 0x21137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211378u;
        // 0x21137c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211378u, 0x211380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211380u;
label_211380:
    // 0x211380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211384:
    // 0x211384: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_211388:
    // 0x211388: 0x260f809  jalr        $s3
label_21138c:
    if (ctx->pc == 0x21138Cu) {
        ctx->pc = 0x21138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211388u;
        // 0x21138c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211390u;
        goto label_211390;
    }
    ctx->pc = 0x211388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211390u);
        ctx->pc = 0x21138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211388u;
        // 0x21138c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211388u, 0x211390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211390u;
label_211390:
    // 0x211390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211394:
    // 0x211394: 0x26450021  addiu       $a1, $s2, 0x21
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
label_211398:
    // 0x211398: 0x260f809  jalr        $s3
label_21139c:
    if (ctx->pc == 0x21139Cu) {
        ctx->pc = 0x21139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211398u;
        // 0x21139c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113A0u;
        { ctx->pc = 0x2113a0; return; }
    }
    ctx->pc = 0x211398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113A0u);
        ctx->pc = 0x21139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211398u;
        // 0x21139c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211398u, 0x2113A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113A0u;
    ctx->pc = 0x2113a0u;
    return;
}
