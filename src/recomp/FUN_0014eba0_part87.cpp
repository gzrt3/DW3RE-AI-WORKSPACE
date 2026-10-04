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


void FUN_0014eba0_part87(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x178b80u: goto label_178b80;
        case 0x178b84u: goto label_178b84;
        case 0x178b88u: goto label_178b88;
        case 0x178b8cu: goto label_178b8c;
        case 0x178b90u: goto label_178b90;
        case 0x178b94u: goto label_178b94;
        case 0x178b98u: goto label_178b98;
        case 0x178b9cu: goto label_178b9c;
        case 0x178ba0u: goto label_178ba0;
        case 0x178ba4u: goto label_178ba4;
        case 0x178ba8u: goto label_178ba8;
        case 0x178bacu: goto label_178bac;
        case 0x178bb0u: goto label_178bb0;
        case 0x178bb4u: goto label_178bb4;
        case 0x178bb8u: goto label_178bb8;
        case 0x178bbcu: goto label_178bbc;
        case 0x178bc0u: goto label_178bc0;
        case 0x178bc4u: goto label_178bc4;
        case 0x178bc8u: goto label_178bc8;
        case 0x178bccu: goto label_178bcc;
        case 0x178bd0u: goto label_178bd0;
        case 0x178bd4u: goto label_178bd4;
        case 0x178bd8u: goto label_178bd8;
        case 0x178bdcu: goto label_178bdc;
        case 0x178be0u: goto label_178be0;
        case 0x178be4u: goto label_178be4;
        case 0x178be8u: goto label_178be8;
        case 0x178becu: goto label_178bec;
        case 0x178bf0u: goto label_178bf0;
        case 0x178bf4u: goto label_178bf4;
        case 0x178bf8u: goto label_178bf8;
        case 0x178bfcu: goto label_178bfc;
        case 0x178c00u: goto label_178c00;
        case 0x178c04u: goto label_178c04;
        case 0x178c08u: goto label_178c08;
        case 0x178c0cu: goto label_178c0c;
        case 0x178c10u: goto label_178c10;
        case 0x178c14u: goto label_178c14;
        case 0x178c18u: goto label_178c18;
        case 0x178c1cu: goto label_178c1c;
        case 0x178c20u: goto label_178c20;
        case 0x178c24u: goto label_178c24;
        case 0x178c28u: goto label_178c28;
        case 0x178c2cu: goto label_178c2c;
        case 0x178c30u: goto label_178c30;
        case 0x178c34u: goto label_178c34;
        case 0x178c38u: goto label_178c38;
        case 0x178c3cu: goto label_178c3c;
        case 0x178c40u: goto label_178c40;
        case 0x178c44u: goto label_178c44;
        case 0x178c48u: goto label_178c48;
        case 0x178c4cu: goto label_178c4c;
        case 0x178c50u: goto label_178c50;
        case 0x178c54u: goto label_178c54;
        case 0x178c58u: goto label_178c58;
        case 0x178c5cu: goto label_178c5c;
        case 0x178c60u: goto label_178c60;
        case 0x178c64u: goto label_178c64;
        case 0x178c68u: goto label_178c68;
        case 0x178c6cu: goto label_178c6c;
        case 0x178c70u: goto label_178c70;
        case 0x178c74u: goto label_178c74;
        case 0x178c78u: goto label_178c78;
        case 0x178c7cu: goto label_178c7c;
        case 0x178c80u: goto label_178c80;
        case 0x178c84u: goto label_178c84;
        case 0x178c88u: goto label_178c88;
        case 0x178c8cu: goto label_178c8c;
        case 0x178c90u: goto label_178c90;
        case 0x178c94u: goto label_178c94;
        case 0x178c98u: goto label_178c98;
        case 0x178c9cu: goto label_178c9c;
        case 0x178ca0u: goto label_178ca0;
        case 0x178ca4u: goto label_178ca4;
        case 0x178ca8u: goto label_178ca8;
        case 0x178cacu: goto label_178cac;
        case 0x178cb0u: goto label_178cb0;
        case 0x178cb4u: goto label_178cb4;
        case 0x178cb8u: goto label_178cb8;
        case 0x178cbcu: goto label_178cbc;
        case 0x178cc0u: goto label_178cc0;
        case 0x178cc4u: goto label_178cc4;
        case 0x178cc8u: goto label_178cc8;
        case 0x178cccu: goto label_178ccc;
        case 0x178cd0u: goto label_178cd0;
        case 0x178cd4u: goto label_178cd4;
        case 0x178cd8u: goto label_178cd8;
        case 0x178cdcu: goto label_178cdc;
        case 0x178ce0u: goto label_178ce0;
        case 0x178ce4u: goto label_178ce4;
        case 0x178ce8u: goto label_178ce8;
        case 0x178cecu: goto label_178cec;
        case 0x178cf0u: goto label_178cf0;
        case 0x178cf4u: goto label_178cf4;
        case 0x178cf8u: goto label_178cf8;
        case 0x178cfcu: goto label_178cfc;
        case 0x178d00u: goto label_178d00;
        case 0x178d04u: goto label_178d04;
        case 0x178d08u: goto label_178d08;
        case 0x178d0cu: goto label_178d0c;
        case 0x178d10u: goto label_178d10;
        case 0x178d14u: goto label_178d14;
        case 0x178d18u: goto label_178d18;
        case 0x178d1cu: goto label_178d1c;
        case 0x178d20u: goto label_178d20;
        case 0x178d24u: goto label_178d24;
        case 0x178d28u: goto label_178d28;
        case 0x178d2cu: goto label_178d2c;
        case 0x178d30u: goto label_178d30;
        case 0x178d34u: goto label_178d34;
        case 0x178d38u: goto label_178d38;
        case 0x178d3cu: goto label_178d3c;
        case 0x178d40u: goto label_178d40;
        case 0x178d44u: goto label_178d44;
        case 0x178d48u: goto label_178d48;
        case 0x178d4cu: goto label_178d4c;
        case 0x178d50u: goto label_178d50;
        case 0x178d54u: goto label_178d54;
        case 0x178d58u: goto label_178d58;
        case 0x178d5cu: goto label_178d5c;
        case 0x178d60u: goto label_178d60;
        case 0x178d64u: goto label_178d64;
        case 0x178d68u: goto label_178d68;
        case 0x178d6cu: goto label_178d6c;
        case 0x178d70u: goto label_178d70;
        case 0x178d74u: goto label_178d74;
        case 0x178d78u: goto label_178d78;
        case 0x178d7cu: goto label_178d7c;
        case 0x178d80u: goto label_178d80;
        case 0x178d84u: goto label_178d84;
        case 0x178d88u: goto label_178d88;
        case 0x178d8cu: goto label_178d8c;
        case 0x178d90u: goto label_178d90;
        case 0x178d94u: goto label_178d94;
        case 0x178d98u: goto label_178d98;
        case 0x178d9cu: goto label_178d9c;
        case 0x178da0u: goto label_178da0;
        case 0x178da4u: goto label_178da4;
        case 0x178da8u: goto label_178da8;
        case 0x178dacu: goto label_178dac;
        case 0x178db0u: goto label_178db0;
        case 0x178db4u: goto label_178db4;
        case 0x178db8u: goto label_178db8;
        case 0x178dbcu: goto label_178dbc;
        case 0x178dc0u: goto label_178dc0;
        case 0x178dc4u: goto label_178dc4;
        case 0x178dc8u: goto label_178dc8;
        case 0x178dccu: goto label_178dcc;
        case 0x178dd0u: goto label_178dd0;
        case 0x178dd4u: goto label_178dd4;
        case 0x178dd8u: goto label_178dd8;
        case 0x178ddcu: goto label_178ddc;
        case 0x178de0u: goto label_178de0;
        case 0x178de4u: goto label_178de4;
        case 0x178de8u: goto label_178de8;
        case 0x178decu: goto label_178dec;
        case 0x178df0u: goto label_178df0;
        case 0x178df4u: goto label_178df4;
        case 0x178df8u: goto label_178df8;
        case 0x178dfcu: goto label_178dfc;
        case 0x178e00u: goto label_178e00;
        case 0x178e04u: goto label_178e04;
        case 0x178e08u: goto label_178e08;
        case 0x178e0cu: goto label_178e0c;
        case 0x178e10u: goto label_178e10;
        case 0x178e14u: goto label_178e14;
        case 0x178e18u: goto label_178e18;
        case 0x178e1cu: goto label_178e1c;
        case 0x178e20u: goto label_178e20;
        case 0x178e24u: goto label_178e24;
        case 0x178e28u: goto label_178e28;
        case 0x178e2cu: goto label_178e2c;
        case 0x178e30u: goto label_178e30;
        case 0x178e34u: goto label_178e34;
        case 0x178e38u: goto label_178e38;
        case 0x178e3cu: goto label_178e3c;
        case 0x178e40u: goto label_178e40;
        case 0x178e44u: goto label_178e44;
        case 0x178e48u: goto label_178e48;
        case 0x178e4cu: goto label_178e4c;
        case 0x178e50u: goto label_178e50;
        case 0x178e54u: goto label_178e54;
        case 0x178e58u: goto label_178e58;
        case 0x178e5cu: goto label_178e5c;
        case 0x178e60u: goto label_178e60;
        case 0x178e64u: goto label_178e64;
        case 0x178e68u: goto label_178e68;
        case 0x178e6cu: goto label_178e6c;
        case 0x178e70u: goto label_178e70;
        case 0x178e74u: goto label_178e74;
        case 0x178e78u: goto label_178e78;
        case 0x178e7cu: goto label_178e7c;
        case 0x178e80u: goto label_178e80;
        case 0x178e84u: goto label_178e84;
        case 0x178e88u: goto label_178e88;
        case 0x178e8cu: goto label_178e8c;
        case 0x178e90u: goto label_178e90;
        case 0x178e94u: goto label_178e94;
        case 0x178e98u: goto label_178e98;
        case 0x178e9cu: goto label_178e9c;
        case 0x178ea0u: goto label_178ea0;
        case 0x178ea4u: goto label_178ea4;
        case 0x178ea8u: goto label_178ea8;
        case 0x178eacu: goto label_178eac;
        case 0x178eb0u: goto label_178eb0;
        case 0x178eb4u: goto label_178eb4;
        case 0x178eb8u: goto label_178eb8;
        case 0x178ebcu: goto label_178ebc;
        case 0x178ec0u: goto label_178ec0;
        case 0x178ec4u: goto label_178ec4;
        case 0x178ec8u: goto label_178ec8;
        case 0x178eccu: goto label_178ecc;
        case 0x178ed0u: goto label_178ed0;
        case 0x178ed4u: goto label_178ed4;
        case 0x178ed8u: goto label_178ed8;
        case 0x178edcu: goto label_178edc;
        case 0x178ee0u: goto label_178ee0;
        case 0x178ee4u: goto label_178ee4;
        case 0x178ee8u: goto label_178ee8;
        case 0x178eecu: goto label_178eec;
        case 0x178ef0u: goto label_178ef0;
        case 0x178ef4u: goto label_178ef4;
        case 0x178ef8u: goto label_178ef8;
        case 0x178efcu: goto label_178efc;
        case 0x178f00u: goto label_178f00;
        case 0x178f04u: goto label_178f04;
        case 0x178f08u: goto label_178f08;
        case 0x178f0cu: goto label_178f0c;
        case 0x178f10u: goto label_178f10;
        case 0x178f14u: goto label_178f14;
        case 0x178f18u: goto label_178f18;
        case 0x178f1cu: goto label_178f1c;
        case 0x178f20u: goto label_178f20;
        case 0x178f24u: goto label_178f24;
        case 0x178f28u: goto label_178f28;
        case 0x178f2cu: goto label_178f2c;
        case 0x178f30u: goto label_178f30;
        case 0x178f34u: goto label_178f34;
        case 0x178f38u: goto label_178f38;
        case 0x178f3cu: goto label_178f3c;
        case 0x178f40u: goto label_178f40;
        case 0x178f44u: goto label_178f44;
        case 0x178f48u: goto label_178f48;
        case 0x178f4cu: goto label_178f4c;
        case 0x178f50u: goto label_178f50;
        case 0x178f54u: goto label_178f54;
        case 0x178f58u: goto label_178f58;
        case 0x178f5cu: goto label_178f5c;
        case 0x178f60u: goto label_178f60;
        case 0x178f64u: goto label_178f64;
        case 0x178f68u: goto label_178f68;
        case 0x178f6cu: goto label_178f6c;
        case 0x178f70u: goto label_178f70;
        case 0x178f74u: goto label_178f74;
        case 0x178f78u: goto label_178f78;
        case 0x178f7cu: goto label_178f7c;
        case 0x178f80u: goto label_178f80;
        case 0x178f84u: goto label_178f84;
        case 0x178f88u: goto label_178f88;
        case 0x178f8cu: goto label_178f8c;
        case 0x178f90u: goto label_178f90;
        case 0x178f94u: goto label_178f94;
        case 0x178f98u: goto label_178f98;
        case 0x178f9cu: goto label_178f9c;
        case 0x178fa0u: goto label_178fa0;
        case 0x178fa4u: goto label_178fa4;
        case 0x178fa8u: goto label_178fa8;
        case 0x178facu: goto label_178fac;
        case 0x178fb0u: goto label_178fb0;
        case 0x178fb4u: goto label_178fb4;
        case 0x178fb8u: goto label_178fb8;
        case 0x178fbcu: goto label_178fbc;
        case 0x178fc0u: goto label_178fc0;
        case 0x178fc4u: goto label_178fc4;
        case 0x178fc8u: goto label_178fc8;
        case 0x178fccu: goto label_178fcc;
        case 0x178fd0u: goto label_178fd0;
        case 0x178fd4u: goto label_178fd4;
        case 0x178fd8u: goto label_178fd8;
        case 0x178fdcu: goto label_178fdc;
        case 0x178fe0u: goto label_178fe0;
        case 0x178fe4u: goto label_178fe4;
        case 0x178fe8u: goto label_178fe8;
        case 0x178fecu: goto label_178fec;
        case 0x178ff0u: goto label_178ff0;
        case 0x178ff4u: goto label_178ff4;
        case 0x178ff8u: goto label_178ff8;
        case 0x178ffcu: goto label_178ffc;
        case 0x179000u: goto label_179000;
        case 0x179004u: goto label_179004;
        case 0x179008u: goto label_179008;
        case 0x17900cu: goto label_17900c;
        case 0x179010u: goto label_179010;
        case 0x179014u: goto label_179014;
        case 0x179018u: goto label_179018;
        case 0x17901cu: goto label_17901c;
        case 0x179020u: goto label_179020;
        case 0x179024u: goto label_179024;
        case 0x179028u: goto label_179028;
        case 0x17902cu: goto label_17902c;
        case 0x179030u: goto label_179030;
        case 0x179034u: goto label_179034;
        case 0x179038u: goto label_179038;
        case 0x17903cu: goto label_17903c;
        case 0x179040u: goto label_179040;
        case 0x179044u: goto label_179044;
        case 0x179048u: goto label_179048;
        case 0x17904cu: goto label_17904c;
        case 0x179050u: goto label_179050;
        case 0x179054u: goto label_179054;
        case 0x179058u: goto label_179058;
        case 0x17905cu: goto label_17905c;
        case 0x179060u: goto label_179060;
        case 0x179064u: goto label_179064;
        case 0x179068u: goto label_179068;
        case 0x17906cu: goto label_17906c;
        case 0x179070u: goto label_179070;
        case 0x179074u: goto label_179074;
        case 0x179078u: goto label_179078;
        case 0x17907cu: goto label_17907c;
        case 0x179080u: goto label_179080;
        case 0x179084u: goto label_179084;
        case 0x179088u: goto label_179088;
        case 0x17908cu: goto label_17908c;
        case 0x179090u: goto label_179090;
        case 0x179094u: goto label_179094;
        case 0x179098u: goto label_179098;
        case 0x17909cu: goto label_17909c;
        case 0x1790a0u: goto label_1790a0;
        case 0x1790a4u: goto label_1790a4;
        case 0x1790a8u: goto label_1790a8;
        case 0x1790acu: goto label_1790ac;
        case 0x1790b0u: goto label_1790b0;
        case 0x1790b4u: goto label_1790b4;
        case 0x1790b8u: goto label_1790b8;
        case 0x1790bcu: goto label_1790bc;
        case 0x1790c0u: goto label_1790c0;
        case 0x1790c4u: goto label_1790c4;
        case 0x1790c8u: goto label_1790c8;
        case 0x1790ccu: goto label_1790cc;
        case 0x1790d0u: goto label_1790d0;
        case 0x1790d4u: goto label_1790d4;
        case 0x1790d8u: goto label_1790d8;
        case 0x1790dcu: goto label_1790dc;
        case 0x1790e0u: goto label_1790e0;
        case 0x1790e4u: goto label_1790e4;
        case 0x1790e8u: goto label_1790e8;
        case 0x1790ecu: goto label_1790ec;
        case 0x1790f0u: goto label_1790f0;
        case 0x1790f4u: goto label_1790f4;
        case 0x1790f8u: goto label_1790f8;
        case 0x1790fcu: goto label_1790fc;
        case 0x179100u: goto label_179100;
        case 0x179104u: goto label_179104;
        case 0x179108u: goto label_179108;
        case 0x17910cu: goto label_17910c;
        case 0x179110u: goto label_179110;
        case 0x179114u: goto label_179114;
        case 0x179118u: goto label_179118;
        case 0x17911cu: goto label_17911c;
        case 0x179120u: goto label_179120;
        case 0x179124u: goto label_179124;
        case 0x179128u: goto label_179128;
        case 0x17912cu: goto label_17912c;
        case 0x179130u: goto label_179130;
        case 0x179134u: goto label_179134;
        case 0x179138u: goto label_179138;
        case 0x17913cu: goto label_17913c;
        case 0x179140u: goto label_179140;
        case 0x179144u: goto label_179144;
        case 0x179148u: goto label_179148;
        case 0x17914cu: goto label_17914c;
        case 0x179150u: goto label_179150;
        case 0x179154u: goto label_179154;
        case 0x179158u: goto label_179158;
        case 0x17915cu: goto label_17915c;
        case 0x179160u: goto label_179160;
        case 0x179164u: goto label_179164;
        case 0x179168u: goto label_179168;
        case 0x17916cu: goto label_17916c;
        case 0x179170u: goto label_179170;
        case 0x179174u: goto label_179174;
        case 0x179178u: goto label_179178;
        case 0x17917cu: goto label_17917c;
        case 0x179180u: goto label_179180;
        case 0x179184u: goto label_179184;
        case 0x179188u: goto label_179188;
        case 0x17918cu: goto label_17918c;
        case 0x179190u: goto label_179190;
        case 0x179194u: goto label_179194;
        case 0x179198u: goto label_179198;
        case 0x17919cu: goto label_17919c;
        case 0x1791a0u: goto label_1791a0;
        case 0x1791a4u: goto label_1791a4;
        case 0x1791a8u: goto label_1791a8;
        case 0x1791acu: goto label_1791ac;
        case 0x1791b0u: goto label_1791b0;
        case 0x1791b4u: goto label_1791b4;
        case 0x1791b8u: goto label_1791b8;
        case 0x1791bcu: goto label_1791bc;
        case 0x1791c0u: goto label_1791c0;
        case 0x1791c4u: goto label_1791c4;
        case 0x1791c8u: goto label_1791c8;
        case 0x1791ccu: goto label_1791cc;
        case 0x1791d0u: goto label_1791d0;
        case 0x1791d4u: goto label_1791d4;
        case 0x1791d8u: goto label_1791d8;
        case 0x1791dcu: goto label_1791dc;
        case 0x1791e0u: goto label_1791e0;
        case 0x1791e4u: goto label_1791e4;
        case 0x1791e8u: goto label_1791e8;
        case 0x1791ecu: goto label_1791ec;
        case 0x1791f0u: goto label_1791f0;
        case 0x1791f4u: goto label_1791f4;
        case 0x1791f8u: goto label_1791f8;
        case 0x1791fcu: goto label_1791fc;
        case 0x179200u: goto label_179200;
        case 0x179204u: goto label_179204;
        case 0x179208u: goto label_179208;
        case 0x17920cu: goto label_17920c;
        case 0x179210u: goto label_179210;
        case 0x179214u: goto label_179214;
        case 0x179218u: goto label_179218;
        case 0x17921cu: goto label_17921c;
        case 0x179220u: goto label_179220;
        case 0x179224u: goto label_179224;
        case 0x179228u: goto label_179228;
        case 0x17922cu: goto label_17922c;
        case 0x179230u: goto label_179230;
        case 0x179234u: goto label_179234;
        case 0x179238u: goto label_179238;
        case 0x17923cu: goto label_17923c;
        case 0x179240u: goto label_179240;
        case 0x179244u: goto label_179244;
        case 0x179248u: goto label_179248;
        case 0x17924cu: goto label_17924c;
        case 0x179250u: goto label_179250;
        case 0x179254u: goto label_179254;
        case 0x179258u: goto label_179258;
        case 0x17925cu: goto label_17925c;
        case 0x179260u: goto label_179260;
        case 0x179264u: goto label_179264;
        case 0x179268u: goto label_179268;
        case 0x17926cu: goto label_17926c;
        case 0x179270u: goto label_179270;
        case 0x179274u: goto label_179274;
        case 0x179278u: goto label_179278;
        case 0x17927cu: goto label_17927c;
        case 0x179280u: goto label_179280;
        case 0x179284u: goto label_179284;
        case 0x179288u: goto label_179288;
        case 0x17928cu: goto label_17928c;
        case 0x179290u: goto label_179290;
        case 0x179294u: goto label_179294;
        case 0x179298u: goto label_179298;
        case 0x17929cu: goto label_17929c;
        case 0x1792a0u: goto label_1792a0;
        case 0x1792a4u: goto label_1792a4;
        case 0x1792a8u: goto label_1792a8;
        case 0x1792acu: goto label_1792ac;
        case 0x1792b0u: goto label_1792b0;
        case 0x1792b4u: goto label_1792b4;
        case 0x1792b8u: goto label_1792b8;
        case 0x1792bcu: goto label_1792bc;
        case 0x1792c0u: goto label_1792c0;
        case 0x1792c4u: goto label_1792c4;
        case 0x1792c8u: goto label_1792c8;
        case 0x1792ccu: goto label_1792cc;
        case 0x1792d0u: goto label_1792d0;
        case 0x1792d4u: goto label_1792d4;
        case 0x1792d8u: goto label_1792d8;
        case 0x1792dcu: goto label_1792dc;
        case 0x1792e0u: goto label_1792e0;
        case 0x1792e4u: goto label_1792e4;
        case 0x1792e8u: goto label_1792e8;
        case 0x1792ecu: goto label_1792ec;
        case 0x1792f0u: goto label_1792f0;
        case 0x1792f4u: goto label_1792f4;
        case 0x1792f8u: goto label_1792f8;
        case 0x1792fcu: goto label_1792fc;
        case 0x179300u: goto label_179300;
        case 0x179304u: goto label_179304;
        case 0x179308u: goto label_179308;
        case 0x17930cu: goto label_17930c;
        case 0x179310u: goto label_179310;
        case 0x179314u: goto label_179314;
        case 0x179318u: goto label_179318;
        case 0x17931cu: goto label_17931c;
        case 0x179320u: goto label_179320;
        case 0x179324u: goto label_179324;
        case 0x179328u: goto label_179328;
        case 0x17932cu: goto label_17932c;
        case 0x179330u: goto label_179330;
        case 0x179334u: goto label_179334;
        case 0x179338u: goto label_179338;
        case 0x17933cu: goto label_17933c;
        case 0x179340u: goto label_179340;
        case 0x179344u: goto label_179344;
        case 0x179348u: goto label_179348;
        case 0x17934cu: goto label_17934c;
        default: return;
    }

label_178b80:
    if (ctx->pc == 0x178B80u) {
        ctx->pc = 0x178B84u;
        goto label_178b84;
    }
    ctx->pc = 0x178B7Cu;
    {
        const bool branch_taken_0x178b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b7c) {
            ctx->pc = 0x178BB0u;
            goto label_178bb0;
        }
    }
    ctx->pc = 0x178B84u;
label_178b84:
    // 0x178b84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x178b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_178b88:
    // 0x178b88: 0xc066e26  jal         func_19B898
label_178b8c:
    if (ctx->pc == 0x178B8Cu) {
        ctx->pc = 0x178B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B88u;
        // 0x178b8c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178B90u;
        goto label_178b90;
    }
    ctx->pc = 0x178B88u;
    SET_GPR_U32(ctx, 31, 0x178B90u);
    ctx->pc = 0x178B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B88u;
    // 0x178b8c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x178B90u;
label_178b90:
    // 0x178b90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x178b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_178b94:
    // 0x178b94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178b98:
    // 0x178b98: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x178b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_178b9c:
    // 0x178b9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178ba0:
    // 0x178ba0: 0xc05ced8  jal         func_173B60
label_178ba4:
    if (ctx->pc == 0x178BA4u) {
        ctx->pc = 0x178BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BA0u;
        // 0x178ba4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x178BA8u;
        goto label_178ba8;
    }
    ctx->pc = 0x178BA0u;
    SET_GPR_U32(ctx, 31, 0x178BA8u);
    ctx->pc = 0x178BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BA0u;
    // 0x178ba4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    { ctx->pc = 0x173b60; return; }
    ctx->pc = 0x178BA8u;
label_178ba8:
    // 0x178ba8: 0x10000007  b           . + 4 + (0x7 << 2)
label_178bac:
    if (ctx->pc == 0x178BACu) {
        ctx->pc = 0x178BB0u;
        goto label_178bb0;
    }
    ctx->pc = 0x178BA8u;
    {
        const bool branch_taken_0x178ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ba8) {
            ctx->pc = 0x178BC8u;
            goto label_178bc8;
        }
    }
    ctx->pc = 0x178BB0u;
label_178bb0:
    // 0x178bb0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x178bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_178bb4:
    // 0x178bb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_178bb8:
    // 0x178bb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_178bbc:
    if (ctx->pc == 0x178BBCu) {
        ctx->pc = 0x178BC0u;
        goto label_178bc0;
    }
    ctx->pc = 0x178BB8u;
    {
        const bool branch_taken_0x178bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bb8) {
            ctx->pc = 0x178BC8u;
            goto label_178bc8;
        }
    }
    ctx->pc = 0x178BC0u;
label_178bc0:
    // 0x178bc0: 0xc05978c  jal         func_165E30
label_178bc4:
    if (ctx->pc == 0x178BC4u) {
        ctx->pc = 0x178BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BC0u;
        // 0x178bc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178BC8u;
        goto label_178bc8;
    }
    ctx->pc = 0x178BC0u;
    SET_GPR_U32(ctx, 31, 0x178BC8u);
    ctx->pc = 0x178BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BC0u;
    // 0x178bc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165E30u;
    { ctx->pc = 0x165e30; return; }
    ctx->pc = 0x178BC8u;
label_178bc8:
    // 0x178bc8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_178bcc:
    // 0x178bcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_178bd0:
    // 0x178bd0: 0x26100370  addiu       $s0, $s0, 0x370
    ctx->pc = 0x178bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_178bd4:
    // 0x178bd4: 0x0  nop
    ctx->pc = 0x178bd4u;
    // NOP
label_178bd8:
    // 0x178bd8: 0x8f838414  lw          $v1, -0x7BEC($gp)
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
label_178bdc:
    // 0x178bdc: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x178bdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_178be0:
    // 0x178be0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_178be4:
    if (ctx->pc == 0x178BE4u) {
        ctx->pc = 0x178BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BE0u;
        // 0x178be4: 0x2e430010  sltiu       $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x178BE8u;
        goto label_178be8;
    }
    ctx->pc = 0x178BE0u;
    {
        const bool branch_taken_0x178be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BE0u;
        // 0x178be4: 0x2e430010  sltiu       $v1, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178be0) {
            ctx->pc = 0x178BF0u;
            goto label_178bf0;
        }
    }
    ctx->pc = 0x178BE8u;
label_178be8:
    // 0x178be8: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_178bec:
    if (ctx->pc == 0x178BECu) {
        ctx->pc = 0x178BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BE8u;
        // 0x178bec: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178BF0u;
        goto label_178bf0;
    }
    ctx->pc = 0x178BE8u;
    {
        const bool branch_taken_0x178be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BE8u;
        // 0x178bec: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178be8) {
            ctx->pc = 0x178B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x178b64; return; }
        }
    }
    ctx->pc = 0x178BF0u;
label_178bf0:
    // 0x178bf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_178bf4:
    // 0x178bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178bf8:
    // 0x178bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178bfc:
    // 0x178bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178c00:
    // 0x178c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178c04:
    // 0x178c04: 0x3e00008  jr          $ra
label_178c08:
    if (ctx->pc == 0x178C08u) {
        ctx->pc = 0x178C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C04u;
        // 0x178c08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C0Cu;
        goto label_178c0c;
    }
    ctx->pc = 0x178C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C04u;
        // 0x178c08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C0Cu;
label_178c0c:
    // 0x178c0c: 0x0  nop
    ctx->pc = 0x178c0cu;
    // NOP
label_178c10:
    // 0x178c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_178c14:
    // 0x178c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_178c18:
    // 0x178c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_178c1c:
    // 0x178c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178c20:
    // 0x178c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178c24:
    // 0x178c24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178c28:
    // 0x178c28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178c2c:
    // 0x178c2c: 0xc040058  jal         func_100160
label_178c30:
    if (ctx->pc == 0x178C30u) {
        ctx->pc = 0x178C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C2Cu;
        // 0x178c30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C34u;
        goto label_178c34;
    }
    ctx->pc = 0x178C2Cu;
    SET_GPR_U32(ctx, 31, 0x178C34u);
    ctx->pc = 0x178C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C2Cu;
    // 0x178c30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x178C2Cu, 0x178C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C34u;
label_178c34:
    // 0x178c34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x178c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_178c38:
    // 0x178c38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x178c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_178c3c:
    // 0x178c3c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x178c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_178c40:
    // 0x178c40: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_178c44:
    // 0x178c44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x178c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_178c48:
    // 0x178c48: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_178c4c:
    if (ctx->pc == 0x178C4Cu) {
        ctx->pc = 0x178C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C48u;
        // 0x178c4c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C50u;
        goto label_178c50;
    }
    ctx->pc = 0x178C48u;
    {
        const bool branch_taken_0x178c48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C48u;
        // 0x178c4c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c48) {
            ctx->pc = 0x178C5Cu;
            goto label_178c5c;
        }
    }
    ctx->pc = 0x178C50u;
label_178c50:
    // 0x178c50: 0xaf808750  sw          $zero, -0x78B0($gp)
    ctx->pc = 0x178c50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936400), GPR_U32(ctx, 0));
label_178c54:
    // 0x178c54: 0x10000003  b           . + 4 + (0x3 << 2)
label_178c58:
    if (ctx->pc == 0x178C58u) {
        ctx->pc = 0x178C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C54u;
        // 0x178c58: 0xaf808414  sw          $zero, -0x7BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C5Cu;
        goto label_178c5c;
    }
    ctx->pc = 0x178C54u;
    {
        const bool branch_taken_0x178c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C54u;
        // 0x178c58: 0xaf808414  sw          $zero, -0x7BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c54) {
            ctx->pc = 0x178C64u;
            goto label_178c64;
        }
    }
    ctx->pc = 0x178C5Cu;
label_178c5c:
    // 0x178c5c: 0x8f828414  lw          $v0, -0x7BEC($gp)
    ctx->pc = 0x178c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
label_178c60:
    // 0x178c60: 0xaf828750  sw          $v0, -0x78B0($gp)
    ctx->pc = 0x178c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936400), GPR_U32(ctx, 2));
label_178c64:
    // 0x178c64: 0xc05feb4  jal         func_17FAD0
label_178c68:
    if (ctx->pc == 0x178C68u) {
        ctx->pc = 0x178C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C64u;
        // 0x178c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C6Cu;
        goto label_178c6c;
    }
    ctx->pc = 0x178C64u;
    SET_GPR_U32(ctx, 31, 0x178C6Cu);
    ctx->pc = 0x178C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C64u;
    // 0x178c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAD0u;
    { ctx->pc = 0x17fad0; return; }
    ctx->pc = 0x178C6Cu;
label_178c6c:
    // 0x178c6c: 0xc05eac8  jal         func_17AB20
label_178c70:
    if (ctx->pc == 0x178C70u) {
        ctx->pc = 0x178C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C6Cu;
        // 0x178c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C74u;
        goto label_178c74;
    }
    ctx->pc = 0x178C6Cu;
    SET_GPR_U32(ctx, 31, 0x178C74u);
    ctx->pc = 0x178C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C6Cu;
    // 0x178c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    { ctx->pc = 0x17ab20; return; }
    ctx->pc = 0x178C74u;
label_178c74:
    // 0x178c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178c78:
    // 0x178c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178c7c:
    // 0x178c7c: 0xc05eaf0  jal         func_17ABC0
label_178c80:
    if (ctx->pc == 0x178C80u) {
        ctx->pc = 0x178C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C7Cu;
        // 0x178c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C84u;
        goto label_178c84;
    }
    ctx->pc = 0x178C7Cu;
    SET_GPR_U32(ctx, 31, 0x178C84u);
    ctx->pc = 0x178C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C7Cu;
    // 0x178c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABC0u;
    { ctx->pc = 0x17abc0; return; }
    ctx->pc = 0x178C84u;
label_178c84:
    // 0x178c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178c88:
    // 0x178c88: 0xc05ea7c  jal         func_17A9F0
label_178c8c:
    if (ctx->pc == 0x178C8Cu) {
        ctx->pc = 0x178C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C88u;
        // 0x178c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C90u;
        goto label_178c90;
    }
    ctx->pc = 0x178C88u;
    SET_GPR_U32(ctx, 31, 0x178C90u);
    ctx->pc = 0x178C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C88u;
    // 0x178c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A9F0u;
    { ctx->pc = 0x17a9f0; return; }
    ctx->pc = 0x178C90u;
label_178c90:
    // 0x178c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178c94:
    // 0x178c94: 0xc05f548  jal         func_17D520
label_178c98:
    if (ctx->pc == 0x178C98u) {
        ctx->pc = 0x178C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C94u;
        // 0x178c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178C9Cu;
        goto label_178c9c;
    }
    ctx->pc = 0x178C94u;
    SET_GPR_U32(ctx, 31, 0x178C9Cu);
    ctx->pc = 0x178C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C94u;
    // 0x178c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D520u;
    { ctx->pc = 0x17d520; return; }
    ctx->pc = 0x178C9Cu;
label_178c9c:
    // 0x178c9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_178ca0:
    // 0x178ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178ca4:
    // 0x178ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178ca8:
    // 0x178ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178cac:
    // 0x178cac: 0x3e00008  jr          $ra
label_178cb0:
    if (ctx->pc == 0x178CB0u) {
        ctx->pc = 0x178CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CACu;
        // 0x178cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178CB4u;
        goto label_178cb4;
    }
    ctx->pc = 0x178CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CACu;
        // 0x178cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178CB4u;
label_178cb4:
    // 0x178cb4: 0x0  nop
    ctx->pc = 0x178cb4u;
    // NOP
label_178cb8:
    // 0x178cb8: 0x0  nop
    ctx->pc = 0x178cb8u;
    // NOP
label_178cbc:
    // 0x178cbc: 0x0  nop
    ctx->pc = 0x178cbcu;
    // NOP
label_178cc0:
    // 0x178cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_178cc4:
    // 0x178cc4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_178cc8:
    // 0x178cc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_178ccc:
    // 0x178ccc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x178cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_178cd0:
    // 0x178cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_178cd4:
    // 0x178cd4: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x178cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_178cd8:
    // 0x178cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178cdc:
    // 0x178cdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178ce0:
    // 0x178ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178ce4:
    // 0x178ce4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178ce8:
    // 0x178ce8: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x178ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_178cec:
    // 0x178cec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x178cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_178cf0:
    // 0x178cf0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_178cf4:
    if (ctx->pc == 0x178CF4u) {
        ctx->pc = 0x178CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CF0u;
        // 0x178cf4: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178CF8u;
        goto label_178cf8;
    }
    ctx->pc = 0x178CF0u;
    {
        const bool branch_taken_0x178cf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CF0u;
        // 0x178cf4: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cf0) {
            ctx->pc = 0x178D24u;
            goto label_178d24;
        }
    }
    ctx->pc = 0x178CF8u;
label_178cf8:
    // 0x178cf8: 0xc040058  jal         func_100160
label_178cfc:
    if (ctx->pc == 0x178CFCu) {
        ctx->pc = 0x178CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CF8u;
        // 0x178cfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D00u;
        goto label_178d00;
    }
    ctx->pc = 0x178CF8u;
    SET_GPR_U32(ctx, 31, 0x178D00u);
    ctx->pc = 0x178CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CF8u;
    // 0x178cfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x178CF8u, 0x178D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D00u;
label_178d00:
    // 0x178d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178d04:
    // 0x178d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178d08:
    // 0x178d08: 0xc05ea18  jal         func_17A860
label_178d0c:
    if (ctx->pc == 0x178D0Cu) {
        ctx->pc = 0x178D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D08u;
        // 0x178d0c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D10u;
        goto label_178d10;
    }
    ctx->pc = 0x178D08u;
    SET_GPR_U32(ctx, 31, 0x178D10u);
    ctx->pc = 0x178D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D08u;
    // 0x178d0c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    { ctx->pc = 0x17a860; return; }
    ctx->pc = 0x178D10u;
label_178d10:
    // 0x178d10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178d14:
    // 0x178d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178d18:
    // 0x178d18: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x178d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_178d1c:
    // 0x178d1c: 0xc05e440  jal         func_179100
label_178d20:
    if (ctx->pc == 0x178D20u) {
        ctx->pc = 0x178D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D1Cu;
        // 0x178d20: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D24u;
        goto label_178d24;
    }
    ctx->pc = 0x178D1Cu;
    SET_GPR_U32(ctx, 31, 0x178D24u);
    ctx->pc = 0x178D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D1Cu;
    // 0x178d20: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179100u;
    goto label_179100;
    ctx->pc = 0x178D24u;
label_178d24:
    // 0x178d24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_178d28:
    if (ctx->pc == 0x178D28u) {
        ctx->pc = 0x178D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D24u;
        // 0x178d28: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D2Cu;
        goto label_178d2c;
    }
    ctx->pc = 0x178D24u;
    {
        const bool branch_taken_0x178d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D24u;
        // 0x178d28: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d24) {
            ctx->pc = 0x178D58u;
            goto label_178d58;
        }
    }
    ctx->pc = 0x178D2Cu;
label_178d2c:
    // 0x178d2c: 0xc040058  jal         func_100160
label_178d30:
    if (ctx->pc == 0x178D30u) {
        ctx->pc = 0x178D34u;
        goto label_178d34;
    }
    ctx->pc = 0x178D2Cu;
    SET_GPR_U32(ctx, 31, 0x178D34u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x178D2Cu, 0x178D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D34u;
label_178d34:
    // 0x178d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178d38:
    // 0x178d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178d3c:
    // 0x178d3c: 0xc05ea18  jal         func_17A860
label_178d40:
    if (ctx->pc == 0x178D40u) {
        ctx->pc = 0x178D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D3Cu;
        // 0x178d40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D44u;
        goto label_178d44;
    }
    ctx->pc = 0x178D3Cu;
    SET_GPR_U32(ctx, 31, 0x178D44u);
    ctx->pc = 0x178D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D3Cu;
    // 0x178d40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    { ctx->pc = 0x17a860; return; }
    ctx->pc = 0x178D44u;
label_178d44:
    // 0x178d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178d48:
    // 0x178d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178d4c:
    // 0x178d4c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x178d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_178d50:
    // 0x178d50: 0xc05e440  jal         func_179100
label_178d54:
    if (ctx->pc == 0x178D54u) {
        ctx->pc = 0x178D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D50u;
        // 0x178d54: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D58u;
        goto label_178d58;
    }
    ctx->pc = 0x178D50u;
    SET_GPR_U32(ctx, 31, 0x178D58u);
    ctx->pc = 0x178D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D50u;
    // 0x178d54: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179100u;
    goto label_179100;
    ctx->pc = 0x178D58u;
label_178d58:
    // 0x178d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_178d5c:
    // 0x178d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178d60:
    // 0x178d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178d64:
    // 0x178d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178d68:
    // 0x178d68: 0x3e00008  jr          $ra
label_178d6c:
    if (ctx->pc == 0x178D6Cu) {
        ctx->pc = 0x178D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D68u;
        // 0x178d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178D70u;
        goto label_178d70;
    }
    ctx->pc = 0x178D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D68u;
        // 0x178d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D70u;
label_178d70:
    // 0x178d70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_178d74:
    // 0x178d74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x178d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_178d78:
    // 0x178d78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x178d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_178d7c:
    // 0x178d7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x178d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_178d80:
    // 0x178d80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_178d84:
    // 0x178d84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_178d88:
    // 0x178d88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_178d8c:
    // 0x178d8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_178d90:
    // 0x178d90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x178d90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178d94:
    // 0x178d94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_178d98:
    // 0x178d98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x178d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178d9c:
    // 0x178d9c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x178d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_178da0:
    // 0x178da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178da4:
    // 0x178da4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x178da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_178da8:
    // 0x178da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178dac:
    // 0x178dac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x178dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_178db0:
    // 0x178db0: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x178db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_178db4:
    // 0x178db4: 0x245e0004  addiu       $fp, $v0, 0x4
    ctx->pc = 0x178db4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_178db8:
    // 0x178db8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x178db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_178dbc:
    // 0x178dbc: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_178dc0:
    // 0x178dc0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x178dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_178dc4:
    // 0x178dc4: 0x5eb821  addu        $s7, $v0, $fp
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_178dc8:
    // 0x178dc8: 0x26f60003  addiu       $s6, $s7, 0x3
    ctx->pc = 0x178dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
label_178dcc:
    // 0x178dcc: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x178dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_178dd0:
    // 0x178dd0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_178dd4:
    if (ctx->pc == 0x178DD4u) {
        ctx->pc = 0x178DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DD0u;
        // 0x178dd4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178DD8u;
        goto label_178dd8;
    }
    ctx->pc = 0x178DD0u;
    {
        const bool branch_taken_0x178dd0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x178DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DD0u;
        // 0x178dd4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178dd0) {
            ctx->pc = 0x178DE0u;
            goto label_178de0;
        }
    }
    ctx->pc = 0x178DD8u;
label_178dd8:
    // 0x178dd8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x178dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_178ddc:
    // 0x178ddc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x178ddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_178de0:
    // 0x178de0: 0xc066d0a  jal         func_19B428
label_178de4:
    if (ctx->pc == 0x178DE4u) {
        ctx->pc = 0x178DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DE0u;
        // 0x178de4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178DE8u;
        goto label_178de8;
    }
    ctx->pc = 0x178DE0u;
    SET_GPR_U32(ctx, 31, 0x178DE8u);
    ctx->pc = 0x178DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DE0u;
    // 0x178de4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x178DE8u;
label_178de8:
    // 0x178de8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_178dec:
    // 0x178dec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x178decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_178df0:
    // 0x178df0: 0x8c285204  lw          $t0, 0x5204($at)
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_178df4:
    // 0x178df4: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
label_178df8:
    // 0x178df8: 0x24460024  addiu       $a2, $v0, 0x24
    ctx->pc = 0x178df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_178dfc:
    // 0x178dfc: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
label_178e00:
    // 0x178e00: 0x3c0d6c00  lui         $t5, 0x6C00
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)27648 << 16));
label_178e04:
    // 0x178e04: 0x24a596f0  addiu       $a1, $a1, -0x6910
    ctx->pc = 0x178e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940400));
label_178e08:
    // 0x178e08: 0x244c0014  addiu       $t4, $v0, 0x14
    ctx->pc = 0x178e08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_178e0c:
    // 0x178e0c: 0x25299700  addiu       $t1, $t1, -0x6900
    ctx->pc = 0x178e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940416));
label_178e10:
    // 0x178e10: 0x3c0b43fa  lui         $t3, 0x43FA
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17402 << 16));
label_178e14:
    // 0x178e14: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_178e18:
    // 0x178e18: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x178e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_178e1c:
    // 0x178e1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178e20:
    // 0x178e20: 0x350e8000  ori         $t6, $t0, 0x8000
    ctx->pc = 0x178e20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
label_178e24:
    // 0x178e24: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x178e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_178e28:
    // 0x178e28: 0x1c37025  or          $t6, $t6, $v1
    ctx->pc = 0x178e28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
label_178e2c:
    // 0x178e2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x178e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178e30:
    // 0x178e30: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x178e30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_178e34:
    // 0x178e34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178e38:
    // 0x178e38: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x178e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
label_178e3c:
    // 0x178e3c: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x178e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_178e40:
    // 0x178e40: 0x1be6821  addu        $t5, $t5, $fp
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 30)));
label_178e44:
    // 0x178e44: 0xac4d0004  sw          $t5, 0x4($v0)
    ctx->pc = 0x178e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 13));
label_178e48:
    // 0x178e48: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x178e48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_178e4c:
    // 0x178e4c: 0xac4d0008  sw          $t5, 0x8($v0)
    ctx->pc = 0x178e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 13));
label_178e50:
    // 0x178e50: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_178e54:
    // 0x178e54: 0xac4d000c  sw          $t5, 0xC($v0)
    ctx->pc = 0x178e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 13));
label_178e58:
    // 0x178e58: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_178e5c:
    // 0x178e5c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x178e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_178e60:
    // 0x178e60: 0xac2c5210  sw          $t4, 0x5210($at)
    ctx->pc = 0x178e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21008), GPR_U32(ctx, 12));
label_178e64:
    // 0x178e64: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x178e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_178e68:
    // 0x178e68: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x178e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_178e6c:
    // 0x178e6c: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_178e70:
    // 0x178e70: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x178e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_178e74:
    // 0x178e74: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x178e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_178e78:
    // 0x178e78: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x178e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_178e7c:
    // 0x178e7c: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x178e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_178e80:
    // 0x178e80: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x178e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
label_178e84:
    // 0x178e84: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x178e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_178e88:
    // 0x178e88: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x178e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_178e8c:
    // 0x178e8c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x178e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_178e90:
    // 0x178e90: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x178e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_178e94:
    // 0x178e94: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x178e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_178e98:
    // 0x178e98: 0xac4b0028  sw          $t3, 0x28($v0)
    ctx->pc = 0x178e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 11));
label_178e9c:
    // 0x178e9c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x178e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_178ea0:
    // 0x178ea0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x178ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_178ea4:
    // 0x178ea4: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x178ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_178ea8:
    // 0x178ea8: 0xac4a0030  sw          $t2, 0x30($v0)
    ctx->pc = 0x178ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 10));
label_178eac:
    // 0x178eac: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x178eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_178eb0:
    // 0x178eb0: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x178eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_178eb4:
    // 0x178eb4: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x178eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_178eb8:
    // 0x178eb8: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x178eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_178ebc:
    // 0x178ebc: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
label_178ec0:
    if (ctx->pc == 0x178EC0u) {
        ctx->pc = 0x178EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EBCu;
        // 0x178ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EC4u;
        goto label_178ec4;
    }
    ctx->pc = 0x178EBCu;
    {
        const bool branch_taken_0x178ebc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x178EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EBCu;
        // 0x178ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ebc) {
            ctx->pc = 0x179048u;
            goto label_179048;
        }
    }
    ctx->pc = 0x178EC4u;
label_178ec4:
    // 0x178ec4: 0x448b2800  mtc1        $t3, $f5
    ctx->pc = 0x178ec4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_178ec8:
    // 0x178ec8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x178ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_178ecc:
    // 0x178ecc: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
label_178ed0:
    if (ctx->pc == 0x178ED0u) {
        ctx->pc = 0x178ED4u;
        goto label_178ed4;
    }
    ctx->pc = 0x178ECCu;
    {
        const bool branch_taken_0x178ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x178ecc) {
            ctx->pc = 0x178EDCu;
            goto label_178edc;
        }
    }
    ctx->pc = 0x178ED4u;
label_178ed4:
    // 0x178ed4: 0x1000000c  b           . + 4 + (0xC << 2)
label_178ed8:
    if (ctx->pc == 0x178ED8u) {
        ctx->pc = 0x178ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ED4u;
        // 0x178ed8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EDCu;
        goto label_178edc;
    }
    ctx->pc = 0x178ED4u;
    {
        const bool branch_taken_0x178ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ED4u;
        // 0x178ed8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ed4) {
            ctx->pc = 0x178F08u;
            goto label_178f08;
        }
    }
    ctx->pc = 0x178EDCu;
label_178edc:
    // 0x178edc: 0x0  nop
    ctx->pc = 0x178edcu;
    // NOP
label_178ee0:
    // 0x178ee0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_178ee4:
    // 0x178ee4: 0x8f898438  lw          $t1, -0x7BC8($gp)
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935608)));
label_178ee8:
    // 0x178ee8: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_178eec:
    // 0x178eec: 0x53c02  srl         $a3, $a1, 16
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_178ef0:
    // 0x178ef0: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x178ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_178ef4:
    // 0x178ef4: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x178ef4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
label_178ef8:
    // 0x178ef8: 0x74140  sll         $t0, $a3, 5
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_178efc:
    // 0x178efc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x178efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_178f00:
    // 0x178f00: 0x1253821  addu        $a3, $t1, $a1
    ctx->pc = 0x178f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_178f04:
    // 0x178f04: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_178f08:
    // 0x178f08: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_178f0c:
    // 0x178f0c: 0xe55021  addu        $t2, $a3, $a1
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_178f10:
    // 0x178f10: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x178f10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_178f14:
    // 0x178f14: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x178f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f18:
    // 0x178f18: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x178f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_178f1c:
    // 0x178f1c: 0x2a56021  addu        $t4, $s5, $a1
    ctx->pc = 0x178f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_178f20:
    // 0x178f20: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x178f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_178f24:
    // 0x178f24: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x178f24u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_178f28:
    // 0x178f28: 0xe4c60000  swc1        $f6, 0x0($a2)
    ctx->pc = 0x178f28u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_178f2c:
    // 0x178f2c: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x178f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f30:
    // 0x178f30: 0xe4c60004  swc1        $f6, 0x4($a2)
    ctx->pc = 0x178f30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_178f34:
    // 0x178f34: 0xc5460004  lwc1        $f6, 0x4($t2)
    ctx->pc = 0x178f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f38:
    // 0x178f38: 0x46061180  add.s       $f6, $f2, $f6
    ctx->pc = 0x178f38u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_178f3c:
    // 0x178f3c: 0xe4c60008  swc1        $f6, 0x8($a2)
    ctx->pc = 0x178f3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_178f40:
    // 0x178f40: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x178f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_178f44:
    // 0x178f44: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x178f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f48:
    // 0x178f48: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x178f48u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_178f4c:
    // 0x178f4c: 0xe4c60010  swc1        $f6, 0x10($a2)
    ctx->pc = 0x178f4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_178f50:
    // 0x178f50: 0xc5660004  lwc1        $f6, 0x4($t3)
    ctx->pc = 0x178f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f54:
    // 0x178f54: 0x46062180  add.s       $f6, $f4, $f6
    ctx->pc = 0x178f54u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_178f58:
    // 0x178f58: 0xe4c60014  swc1        $f6, 0x14($a2)
    ctx->pc = 0x178f58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_178f5c:
    // 0x178f5c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x178f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_178f60:
    // 0x178f60: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x178f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_178f64:
    // 0x178f64: 0x95890000  lhu         $t1, 0x0($t4)
    ctx->pc = 0x178f64u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_178f68:
    // 0x178f68: 0x8f858434  lw          $a1, -0x7BCC($gp)
    ctx->pc = 0x178f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935604)));
label_178f6c:
    // 0x178f6c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x178f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_178f70:
    // 0x178f70: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x178f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_178f74:
    // 0x178f74: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x178f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f78:
    // 0x178f78: 0xe4c60020  swc1        $f6, 0x20($a2)
    ctx->pc = 0x178f78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_178f7c:
    // 0x178f7c: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x178f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f80:
    // 0x178f80: 0xe4c60024  swc1        $f6, 0x24($a2)
    ctx->pc = 0x178f80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_178f84:
    // 0x178f84: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x178f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f88:
    // 0x178f88: 0xe4c60028  swc1        $f6, 0x28($a2)
    ctx->pc = 0x178f88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_178f8c:
    // 0x178f8c: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x178f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f90:
    // 0x178f90: 0xe4c6002c  swc1        $f6, 0x2C($a2)
    ctx->pc = 0x178f90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_178f94:
    // 0x178f94: 0xc5460008  lwc1        $f6, 0x8($t2)
    ctx->pc = 0x178f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178f98:
    // 0x178f98: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x178f98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_178f9c:
    // 0x178f9c: 0xe4c60030  swc1        $f6, 0x30($a2)
    ctx->pc = 0x178f9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_178fa0:
    // 0x178fa0: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x178fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178fa4:
    // 0x178fa4: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x178fa4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_178fa8:
    // 0x178fa8: 0xc546000c  lwc1        $f6, 0xC($t2)
    ctx->pc = 0x178fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178fac:
    // 0x178fac: 0x46061180  add.s       $f6, $f2, $f6
    ctx->pc = 0x178facu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_178fb0:
    // 0x178fb0: 0xe4c60038  swc1        $f6, 0x38($a2)
    ctx->pc = 0x178fb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_178fb4:
    // 0x178fb4: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x178fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
label_178fb8:
    // 0x178fb8: 0xc5660008  lwc1        $f6, 0x8($t3)
    ctx->pc = 0x178fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178fbc:
    // 0x178fbc: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x178fbcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_178fc0:
    // 0x178fc0: 0xe4c60040  swc1        $f6, 0x40($a2)
    ctx->pc = 0x178fc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
label_178fc4:
    // 0x178fc4: 0xc566000c  lwc1        $f6, 0xC($t3)
    ctx->pc = 0x178fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178fc8:
    // 0x178fc8: 0x46062180  add.s       $f6, $f4, $f6
    ctx->pc = 0x178fc8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_178fcc:
    // 0x178fcc: 0xe4c60044  swc1        $f6, 0x44($a2)
    ctx->pc = 0x178fccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
label_178fd0:
    // 0x178fd0: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x178fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
label_178fd4:
    // 0x178fd4: 0xacc0004c  sw          $zero, 0x4C($a2)
    ctx->pc = 0x178fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
label_178fd8:
    // 0x178fd8: 0x95890002  lhu         $t1, 0x2($t4)
    ctx->pc = 0x178fd8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
label_178fdc:
    // 0x178fdc: 0x8f858434  lw          $a1, -0x7BCC($gp)
    ctx->pc = 0x178fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935604)));
label_178fe0:
    // 0x178fe0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_178fe4:
    // 0x178fe4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x178fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_178fe8:
    // 0x178fe8: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x178fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178fec:
    // 0x178fec: 0xe4c60050  swc1        $f6, 0x50($a2)
    ctx->pc = 0x178fecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
label_178ff0:
    // 0x178ff0: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x178ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178ff4:
    // 0x178ff4: 0xe4c60054  swc1        $f6, 0x54($a2)
    ctx->pc = 0x178ff4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
label_178ff8:
    // 0x178ff8: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x178ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_178ffc:
    // 0x178ffc: 0xe4c60058  swc1        $f6, 0x58($a2)
    ctx->pc = 0x178ffcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
label_179000:
    // 0x179000: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x179000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_179004:
    // 0x179004: 0xe4c6005c  swc1        $f6, 0x5C($a2)
    ctx->pc = 0x179004u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
label_179008:
    // 0x179008: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_17900c:
    if (ctx->pc == 0x17900Cu) {
        ctx->pc = 0x17900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179008u;
        // 0x17900c: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179010u;
        goto label_179010;
    }
    ctx->pc = 0x179008u;
    {
        const bool branch_taken_0x179008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179008u;
        // 0x17900c: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179008) {
            ctx->pc = 0x179030u;
            goto label_179030;
        }
    }
    ctx->pc = 0x179010u;
label_179010:
    // 0x179010: 0xc6290028  lwc1        $f9, 0x28($s1)
    ctx->pc = 0x179010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_179014:
    // 0x179014: 0xc628002c  lwc1        $f8, 0x2C($s1)
    ctx->pc = 0x179014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_179018:
    // 0x179018: 0xc6070028  lwc1        $f7, 0x28($s0)
    ctx->pc = 0x179018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_17901c:
    // 0x17901c: 0xc606002c  lwc1        $f6, 0x2C($s0)
    ctx->pc = 0x17901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_179020:
    // 0x179020: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x179020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_179024:
    // 0x179024: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x179024u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_179028:
    // 0x179028: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x179028u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_17902c:
    // 0x17902c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x17902cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_179030:
    // 0x179030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_179034:
    // 0x179034: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x179034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_179038:
    // 0x179038: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x179038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17903c:
    // 0x17903c: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x17903cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_179040:
    // 0x179040: 0x1020ffa2  beqz        $at, . + 4 + (-0x5E << 2)
label_179044:
    if (ctx->pc == 0x179044u) {
        ctx->pc = 0x179044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179040u;
        // 0x179044: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179048u;
        goto label_179048;
    }
    ctx->pc = 0x179040u;
    {
        const bool branch_taken_0x179040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179040u;
        // 0x179044: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179040) {
            ctx->pc = 0x178ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178ecc;
        }
    }
    ctx->pc = 0x179048u;
label_179048:
    // 0x179048: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17904c:
    // 0x17904c: 0x8c265204  lw          $a2, 0x5204($at)
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_179050:
    // 0x179050: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x179050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_179054:
    // 0x179054: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x179054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_179058:
    // 0x179058: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x179058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_17905c:
    // 0x17905c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17905cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_179060:
    // 0x179060: 0x0  nop
    ctx->pc = 0x179060u;
    // NOP
label_179064:
    // 0x179064: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x179064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_179068:
    // 0x179068: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17906c:
    // 0x17906c: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x17906cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_179070:
    // 0x179070: 0x8c245200  lw          $a0, 0x5200($at)
    ctx->pc = 0x179070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20992)));
label_179074:
    // 0x179074: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179078:
    // 0x179078: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17907c:
    // 0x17907c: 0x8c235214  lw          $v1, 0x5214($at)
    ctx->pc = 0x17907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21012)));
label_179080:
    // 0x179080: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179084:
    // 0x179084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_179088:
    // 0x179088: 0x8c225218  lw          $v0, 0x5218($at)
    ctx->pc = 0x179088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21016)));
label_17908c:
    // 0x17908c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179090:
    // 0x179090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_179094:
    // 0x179094: 0xac265204  sw          $a2, 0x5204($at)
    ctx->pc = 0x179094u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 6));
label_179098:
    // 0x179098: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17909c:
    // 0x17909c: 0xac245200  sw          $a0, 0x5200($at)
    ctx->pc = 0x17909cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20992), GPR_U32(ctx, 4));
label_1790a0:
    // 0x1790a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1790a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1790a4:
    // 0x1790a4: 0xac235214  sw          $v1, 0x5214($at)
    ctx->pc = 0x1790a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21012), GPR_U32(ctx, 3));
label_1790a8:
    // 0x1790a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1790a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1790ac:
    // 0x1790ac: 0xac225218  sw          $v0, 0x5218($at)
    ctx->pc = 0x1790acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21016), GPR_U32(ctx, 2));
label_1790b0:
    // 0x1790b0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1790b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1790b4:
    // 0x1790b4: 0x8c225218  lw          $v0, 0x5218($at)
    ctx->pc = 0x1790b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21016)));
label_1790b8:
    // 0x1790b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1790b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1790bc:
    // 0x1790bc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1790bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1790c0:
    // 0x1790c0: 0xac225218  sw          $v0, 0x5218($at)
    ctx->pc = 0x1790c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21016), GPR_U32(ctx, 2));
label_1790c4:
    // 0x1790c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1790c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1790c8:
    // 0x1790c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1790c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1790cc:
    // 0x1790cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1790ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1790d0:
    // 0x1790d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1790d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1790d4:
    // 0x1790d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1790d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1790d8:
    // 0x1790d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1790d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1790dc:
    // 0x1790dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1790dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1790e0:
    // 0x1790e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1790e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1790e4:
    // 0x1790e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1790e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1790e8:
    // 0x1790e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1790e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1790ec:
    // 0x1790ec: 0x3e00008  jr          $ra
label_1790f0:
    if (ctx->pc == 0x1790F0u) {
        ctx->pc = 0x1790F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790ECu;
        // 0x1790f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790F4u;
        goto label_1790f4;
    }
    ctx->pc = 0x1790ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790ECu;
        // 0x1790f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1790F4u;
label_1790f4:
    // 0x1790f4: 0x0  nop
    ctx->pc = 0x1790f4u;
    // NOP
label_1790f8:
    // 0x1790f8: 0x0  nop
    ctx->pc = 0x1790f8u;
    // NOP
label_1790fc:
    // 0x1790fc: 0x0  nop
    ctx->pc = 0x1790fcu;
    // NOP
label_179100:
    // 0x179100: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_179104:
    // 0x179104: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179108:
    // 0x179108: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x179108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_17910c:
    // 0x17910c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_179110:
    // 0x179110: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x179110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_179114:
    // 0x179114: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x179114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_179118:
    // 0x179118: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x179118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17911c:
    // 0x17911c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_179120:
    // 0x179120: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x179120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_179124:
    // 0x179124: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x179124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179128:
    // 0x179128: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x179128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17912c:
    // 0x17912c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_179130:
    // 0x179130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_179134:
    // 0x179134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x179134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_179138:
    // 0x179138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17913c:
    // 0x17913c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17913cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_179140:
    // 0x179140: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x179140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
label_179144:
    // 0x179144: 0x8fb000cc  lw          $s0, 0xCC($sp)
    ctx->pc = 0x179144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_179148:
    // 0x179148: 0xac205204  sw          $zero, 0x5204($at)
    ctx->pc = 0x179148u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 0));
label_17914c:
    // 0x17914c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179150:
    // 0x179150: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x179150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_179154:
    // 0x179154: 0xac205200  sw          $zero, 0x5200($at)
    ctx->pc = 0x179154u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20992), GPR_U32(ctx, 0));
label_179158:
    // 0x179158: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x179158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17915c:
    // 0x17915c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17915cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179160:
    // 0x179160: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x179160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
label_179164:
    // 0x179164: 0xac20521c  sw          $zero, 0x521C($at)
    ctx->pc = 0x179164u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21020), GPR_U32(ctx, 0));
label_179168:
    // 0x179168: 0x12a00100  beqz        $s5, . + 4 + (0x100 << 2)
label_17916c:
    if (ctx->pc == 0x17916Cu) {
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179168u;
        // 0x17916c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179170u;
        goto label_179170;
    }
    ctx->pc = 0x179168u;
    {
        const bool branch_taken_0x179168 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179168u;
        // 0x17916c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179168) {
            ctx->pc = 0x17956Cu;
            { ctx->pc = 0x17956c; return; }
        }
    }
    ctx->pc = 0x179170u;
label_179170:
    // 0x179170: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x179170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179174:
    // 0x179174: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x179174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_179178:
    // 0x179178: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x179178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17917c:
    // 0x17917c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x17917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_179180:
    // 0x179180: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x179180u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_179184:
    // 0x179184: 0x8eb60008  lw          $s6, 0x8($s5)
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_179188:
    // 0x179188: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x179188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17918c:
    // 0x17918c: 0x8ebe0004  lw          $fp, 0x4($s5)
    ctx->pc = 0x17918cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_179190:
    // 0x179190: 0x0  nop
    ctx->pc = 0x179190u;
    // NOP
label_179194:
    // 0x179194: 0x0  nop
    ctx->pc = 0x179194u;
    // NOP
label_179198:
    // 0x179198: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x179198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17919c:
    // 0x17919c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1791a0:
    // 0x1791a0: 0x8f82843c  lw          $v0, -0x7BC4($gp)
    ctx->pc = 0x1791a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935612)));
label_1791a4:
    // 0x1791a4: 0x30c5007f  andi        $a1, $a2, 0x7F
    ctx->pc = 0x1791a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
label_1791a8:
    // 0x1791a8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1791a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1791ac:
    // 0x1791ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1791acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1791b0:
    // 0x1791b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1791b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1791b4:
    // 0x1791b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1791b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1791b8:
    // 0x1791b8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1791bc:
    if (ctx->pc == 0x1791BCu) {
        ctx->pc = 0x1791BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B8u;
        // 0x1791bc: 0x449821  addu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791C0u;
        goto label_1791c0;
    }
    ctx->pc = 0x1791B8u;
    {
        const bool branch_taken_0x1791b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1791BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B8u;
        // 0x1791bc: 0x449821  addu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b8) {
            ctx->pc = 0x1791D4u;
            goto label_1791d4;
        }
    }
    ctx->pc = 0x1791C0u;
label_1791c0:
    // 0x1791c0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1791c4:
    // 0x1791c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1791c8:
    // 0x1791c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1791c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1791cc:
    // 0x1791cc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1791d0:
    if (ctx->pc == 0x1791D0u) {
        ctx->pc = 0x1791D4u;
        goto label_1791d4;
    }
    ctx->pc = 0x1791CCu;
    {
        const bool branch_taken_0x1791cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1791cc) {
            ctx->pc = 0x1791F4u;
            goto label_1791f4;
        }
    }
    ctx->pc = 0x1791D4u;
label_1791d4:
    // 0x1791d4: 0x0  nop
    ctx->pc = 0x1791d4u;
    // NOP
label_1791d8:
    // 0x1791d8: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x1791d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_1791dc:
    // 0x1791dc: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_1791e0:
    // 0x1791e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1791e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1791e4:
    // 0x1791e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1791e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1791e8:
    // 0x1791e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1791ec:
    // 0x1791ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1791f0:
    if (ctx->pc == 0x1791F0u) {
        ctx->pc = 0x1791F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791ECu;
        // 0x1791f0: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1791F4u;
        goto label_1791f4;
    }
    ctx->pc = 0x1791ECu;
    {
        const bool branch_taken_0x1791ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791ECu;
        // 0x1791f0: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791ec) {
            ctx->pc = 0x1791FCu;
            goto label_1791fc;
        }
    }
    ctx->pc = 0x1791F4u;
label_1791f4:
    // 0x1791f4: 0x0  nop
    ctx->pc = 0x1791f4u;
    // NOP
label_1791f8:
    // 0x1791f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1791f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791fc:
    // 0x1791fc: 0x0  nop
    ctx->pc = 0x1791fcu;
    // NOP
label_179200:
    // 0x179200: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
label_179204:
    if (ctx->pc == 0x179204u) {
        ctx->pc = 0x179208u;
        goto label_179208;
    }
    ctx->pc = 0x179200u;
    {
        const bool branch_taken_0x179200 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x179200) {
            ctx->pc = 0x1792DCu;
            goto label_1792dc;
        }
    }
    ctx->pc = 0x179208u;
label_179208:
    // 0x179208: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17920c:
    // 0x17920c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_179210:
    // 0x179210: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_179214:
    // 0x179214: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x179214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_179218:
    // 0x179218: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x179218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_17921c:
    // 0x17921c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_179220:
    if (ctx->pc == 0x179220u) {
        ctx->pc = 0x179224u;
        goto label_179224;
    }
    ctx->pc = 0x17921Cu;
    {
        const bool branch_taken_0x17921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17921c) {
            ctx->pc = 0x179238u;
            goto label_179238;
        }
    }
    ctx->pc = 0x179224u;
label_179224:
    // 0x179224: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179228:
    // 0x179228: 0x8c22521c  lw          $v0, 0x521C($at)
    ctx->pc = 0x179228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_17922c:
    // 0x17922c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_179230:
    // 0x179230: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_179234:
    if (ctx->pc == 0x179234u) {
        ctx->pc = 0x179238u;
        goto label_179238;
    }
    ctx->pc = 0x179230u;
    {
        const bool branch_taken_0x179230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179230) {
            ctx->pc = 0x179280u;
            goto label_179280;
        }
    }
    ctx->pc = 0x179238u;
label_179238:
    // 0x179238: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17923c:
    // 0x17923c: 0x8c22521c  lw          $v0, 0x521C($at)
    ctx->pc = 0x17923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_179240:
    // 0x179240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_179244:
    if (ctx->pc == 0x179244u) {
        ctx->pc = 0x179248u;
        goto label_179248;
    }
    ctx->pc = 0x179240u;
    {
        const bool branch_taken_0x179240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179240) {
            ctx->pc = 0x179250u;
            goto label_179250;
        }
    }
    ctx->pc = 0x179248u;
label_179248:
    // 0x179248: 0xc05e570  jal         func_1795C0
label_17924c:
    if (ctx->pc == 0x17924Cu) {
        ctx->pc = 0x17924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179248u;
        // 0x17924c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179250u;
        goto label_179250;
    }
    ctx->pc = 0x179248u;
    SET_GPR_U32(ctx, 31, 0x179250u);
    ctx->pc = 0x17924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179248u;
    // 0x17924c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795C0u;
    { ctx->pc = 0x1795c0; return; }
    ctx->pc = 0x179250u;
label_179250:
    // 0x179250: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_179254:
    // 0x179254: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x179254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_179258:
    // 0x179258: 0xc05e5d8  jal         func_179760
label_17925c:
    if (ctx->pc == 0x17925Cu) {
        ctx->pc = 0x17925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179258u;
        // 0x17925c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179260u;
        goto label_179260;
    }
    ctx->pc = 0x179258u;
    SET_GPR_U32(ctx, 31, 0x179260u);
    ctx->pc = 0x17925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179258u;
    // 0x17925c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179760u;
    { ctx->pc = 0x179760; return; }
    ctx->pc = 0x179260u;
label_179260:
    // 0x179260: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_179264:
    // 0x179264: 0xc05e5d8  jal         func_179760
label_179268:
    if (ctx->pc == 0x179268u) {
        ctx->pc = 0x179268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179264u;
        // 0x179268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17926Cu;
        goto label_17926c;
    }
    ctx->pc = 0x179264u;
    SET_GPR_U32(ctx, 31, 0x17926Cu);
    ctx->pc = 0x179268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179264u;
    // 0x179268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179760u;
    { ctx->pc = 0x179760; return; }
    ctx->pc = 0x17926Cu;
label_17926c:
    // 0x17926c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_179270:
    // 0x179270: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_179274:
    // 0x179274: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x179274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_179278:
    // 0x179278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17927c:
    // 0x17927c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17927cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_179280:
    // 0x179280: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x179280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_179284:
    // 0x179284: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_179288:
    // 0x179288: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x179288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17928c:
    // 0x17928c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_179290:
    // 0x179290: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x179290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_179294:
    // 0x179294: 0xc05e8fc  jal         func_17A3F0
label_179298:
    if (ctx->pc == 0x179298u) {
        ctx->pc = 0x179298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179294u;
        // 0x179298: 0x30480800  andi        $t0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17929Cu;
        goto label_17929c;
    }
    ctx->pc = 0x179294u;
    SET_GPR_U32(ctx, 31, 0x17929Cu);
    ctx->pc = 0x179298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179294u;
    // 0x179298: 0x30480800  andi        $t0, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3F0u;
    { ctx->pc = 0x17a3f0; return; }
    ctx->pc = 0x17929Cu;
label_17929c:
    // 0x17929c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x17929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1792a0:
    // 0x1792a0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1792a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1792a4:
    // 0x1792a4: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x1792a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1792a8:
    // 0x1792a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1792a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1792ac:
    // 0x1792ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1792acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1792b0:
    // 0x1792b0: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x1792b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1792b4:
    // 0x1792b4: 0xc05e8fc  jal         func_17A3F0
label_1792b8:
    if (ctx->pc == 0x1792B8u) {
        ctx->pc = 0x1792B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792B4u;
        // 0x1792b8: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792BCu;
        goto label_1792bc;
    }
    ctx->pc = 0x1792B4u;
    SET_GPR_U32(ctx, 31, 0x1792BCu);
    ctx->pc = 0x1792B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1792B4u;
    // 0x1792b8: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3F0u;
    { ctx->pc = 0x17a3f0; return; }
    ctx->pc = 0x1792BCu;
label_1792bc:
    // 0x1792bc: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x1792bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1792c0:
    // 0x1792c0: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1792c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_1792c4:
    // 0x1792c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1792c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1792c8:
    // 0x1792c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1792c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1792cc:
    // 0x1792cc: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1792d0:
    if (ctx->pc == 0x1792D0u) {
        ctx->pc = 0x1792D4u;
        goto label_1792d4;
    }
    ctx->pc = 0x1792CCu;
    {
        const bool branch_taken_0x1792cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792cc) {
            ctx->pc = 0x179354u;
            { ctx->pc = 0x179354; return; }
        }
    }
    ctx->pc = 0x1792D4u;
label_1792d4:
    // 0x1792d4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1792d8:
    if (ctx->pc == 0x1792D8u) {
        ctx->pc = 0x1792D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792D4u;
        // 0x1792d8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792DCu;
        goto label_1792dc;
    }
    ctx->pc = 0x1792D4u;
    {
        const bool branch_taken_0x1792d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792D4u;
        // 0x1792d8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792d4) {
            ctx->pc = 0x179354u;
            { ctx->pc = 0x179354; return; }
        }
    }
    ctx->pc = 0x1792DCu;
label_1792dc:
    // 0x1792dc: 0x0  nop
    ctx->pc = 0x1792dcu;
    // NOP
label_1792e0:
    // 0x1792e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1792e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1792e4:
    // 0x1792e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1792e8:
    // 0x1792e8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1792ec:
    if (ctx->pc == 0x1792ECu) {
        ctx->pc = 0x1792F0u;
        goto label_1792f0;
    }
    ctx->pc = 0x1792E8u;
    {
        const bool branch_taken_0x1792e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1792e8) {
            ctx->pc = 0x179304u;
            goto label_179304;
        }
    }
    ctx->pc = 0x1792F0u;
label_1792f0:
    // 0x1792f0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1792f4:
    // 0x1792f4: 0x8c22521c  lw          $v0, 0x521C($at)
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_1792f8:
    // 0x1792f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1792f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1792fc:
    // 0x1792fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_179300:
    if (ctx->pc == 0x179300u) {
        ctx->pc = 0x179304u;
        goto label_179304;
    }
    ctx->pc = 0x1792FCu;
    {
        const bool branch_taken_0x1792fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1792fc) {
            ctx->pc = 0x179338u;
            goto label_179338;
        }
    }
    ctx->pc = 0x179304u;
label_179304:
    // 0x179304: 0x0  nop
    ctx->pc = 0x179304u;
    // NOP
label_179308:
    // 0x179308: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17930c:
    // 0x17930c: 0x8c22521c  lw          $v0, 0x521C($at)
    ctx->pc = 0x17930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_179310:
    // 0x179310: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_179314:
    if (ctx->pc == 0x179314u) {
        ctx->pc = 0x179318u;
        goto label_179318;
    }
    ctx->pc = 0x179310u;
    {
        const bool branch_taken_0x179310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179310) {
            ctx->pc = 0x179320u;
            goto label_179320;
        }
    }
    ctx->pc = 0x179318u;
label_179318:
    // 0x179318: 0xc05e570  jal         func_1795C0
label_17931c:
    if (ctx->pc == 0x17931Cu) {
        ctx->pc = 0x17931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179318u;
        // 0x17931c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179320u;
        goto label_179320;
    }
    ctx->pc = 0x179318u;
    SET_GPR_U32(ctx, 31, 0x179320u);
    ctx->pc = 0x17931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179318u;
    // 0x17931c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795C0u;
    { ctx->pc = 0x1795c0; return; }
    ctx->pc = 0x179320u;
label_179320:
    // 0x179320: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_179324:
    // 0x179324: 0x8fb000cc  lw          $s0, 0xCC($sp)
    ctx->pc = 0x179324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_179328:
    // 0x179328: 0xc05e5d8  jal         func_179760
label_17932c:
    if (ctx->pc == 0x17932Cu) {
        ctx->pc = 0x17932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179328u;
        // 0x17932c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179330u;
        goto label_179330;
    }
    ctx->pc = 0x179328u;
    SET_GPR_U32(ctx, 31, 0x179330u);
    ctx->pc = 0x17932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179328u;
    // 0x17932c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179760u;
    { ctx->pc = 0x179760; return; }
    ctx->pc = 0x179330u;
label_179330:
    // 0x179330: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_179334:
    // 0x179334: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x179334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_179338:
    // 0x179338: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x179338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17933c:
    // 0x17933c: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_179340:
    // 0x179340: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x179340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_179344:
    // 0x179344: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x179344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_179348:
    // 0x179348: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x179348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_17934c:
    // 0x17934c: 0xc05e8fc  jal         func_17A3F0
    ctx->pc = 0x179350u;
    return;
}
