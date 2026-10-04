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


void FUN_0017d410_part49(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        case 0x194c28u: goto label_194c28;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c30u: goto label_194c30;
        case 0x194c34u: goto label_194c34;
        case 0x194c38u: goto label_194c38;
        case 0x194c3cu: goto label_194c3c;
        case 0x194c40u: goto label_194c40;
        case 0x194c44u: goto label_194c44;
        case 0x194c48u: goto label_194c48;
        case 0x194c4cu: goto label_194c4c;
        case 0x194c50u: goto label_194c50;
        case 0x194c54u: goto label_194c54;
        case 0x194c58u: goto label_194c58;
        case 0x194c5cu: goto label_194c5c;
        case 0x194c60u: goto label_194c60;
        case 0x194c64u: goto label_194c64;
        case 0x194c68u: goto label_194c68;
        case 0x194c6cu: goto label_194c6c;
        case 0x194c70u: goto label_194c70;
        case 0x194c74u: goto label_194c74;
        case 0x194c78u: goto label_194c78;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c80u: goto label_194c80;
        case 0x194c84u: goto label_194c84;
        case 0x194c88u: goto label_194c88;
        case 0x194c8cu: goto label_194c8c;
        case 0x194c90u: goto label_194c90;
        case 0x194c94u: goto label_194c94;
        case 0x194c98u: goto label_194c98;
        case 0x194c9cu: goto label_194c9c;
        case 0x194ca0u: goto label_194ca0;
        case 0x194ca4u: goto label_194ca4;
        case 0x194ca8u: goto label_194ca8;
        case 0x194cacu: goto label_194cac;
        case 0x194cb0u: goto label_194cb0;
        case 0x194cb4u: goto label_194cb4;
        case 0x194cb8u: goto label_194cb8;
        case 0x194cbcu: goto label_194cbc;
        case 0x194cc0u: goto label_194cc0;
        case 0x194cc4u: goto label_194cc4;
        case 0x194cc8u: goto label_194cc8;
        case 0x194cccu: goto label_194ccc;
        case 0x194cd0u: goto label_194cd0;
        case 0x194cd4u: goto label_194cd4;
        case 0x194cd8u: goto label_194cd8;
        case 0x194cdcu: goto label_194cdc;
        case 0x194ce0u: goto label_194ce0;
        case 0x194ce4u: goto label_194ce4;
        case 0x194ce8u: goto label_194ce8;
        case 0x194cecu: goto label_194cec;
        case 0x194cf0u: goto label_194cf0;
        case 0x194cf4u: goto label_194cf4;
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        case 0x194d58u: goto label_194d58;
        case 0x194d5cu: goto label_194d5c;
        case 0x194d60u: goto label_194d60;
        case 0x194d64u: goto label_194d64;
        case 0x194d68u: goto label_194d68;
        case 0x194d6cu: goto label_194d6c;
        case 0x194d70u: goto label_194d70;
        case 0x194d74u: goto label_194d74;
        case 0x194d78u: goto label_194d78;
        case 0x194d7cu: goto label_194d7c;
        case 0x194d80u: goto label_194d80;
        case 0x194d84u: goto label_194d84;
        case 0x194d88u: goto label_194d88;
        case 0x194d8cu: goto label_194d8c;
        case 0x194d90u: goto label_194d90;
        case 0x194d94u: goto label_194d94;
        case 0x194d98u: goto label_194d98;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194da4u: goto label_194da4;
        case 0x194da8u: goto label_194da8;
        case 0x194dacu: goto label_194dac;
        case 0x194db0u: goto label_194db0;
        case 0x194db4u: goto label_194db4;
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        case 0x195040u: goto label_195040;
        case 0x195044u: goto label_195044;
        case 0x195048u: goto label_195048;
        case 0x19504cu: goto label_19504c;
        case 0x195050u: goto label_195050;
        case 0x195054u: goto label_195054;
        case 0x195058u: goto label_195058;
        case 0x19505cu: goto label_19505c;
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950b0u: goto label_1950b0;
        case 0x1950b4u: goto label_1950b4;
        case 0x1950b8u: goto label_1950b8;
        case 0x1950bcu: goto label_1950bc;
        case 0x1950c0u: goto label_1950c0;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950c8u: goto label_1950c8;
        case 0x1950ccu: goto label_1950cc;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950d4u: goto label_1950d4;
        case 0x1950d8u: goto label_1950d8;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950e0u: goto label_1950e0;
        case 0x1950e4u: goto label_1950e4;
        case 0x1950e8u: goto label_1950e8;
        case 0x1950ecu: goto label_1950ec;
        case 0x1950f0u: goto label_1950f0;
        case 0x1950f4u: goto label_1950f4;
        case 0x1950f8u: goto label_1950f8;
        case 0x1950fcu: goto label_1950fc;
        case 0x195100u: goto label_195100;
        case 0x195104u: goto label_195104;
        case 0x195108u: goto label_195108;
        case 0x19510cu: goto label_19510c;
        case 0x195110u: goto label_195110;
        case 0x195114u: goto label_195114;
        case 0x195118u: goto label_195118;
        case 0x19511cu: goto label_19511c;
        case 0x195120u: goto label_195120;
        case 0x195124u: goto label_195124;
        case 0x195128u: goto label_195128;
        case 0x19512cu: goto label_19512c;
        case 0x195130u: goto label_195130;
        case 0x195134u: goto label_195134;
        case 0x195138u: goto label_195138;
        case 0x19513cu: goto label_19513c;
        case 0x195140u: goto label_195140;
        case 0x195144u: goto label_195144;
        case 0x195148u: goto label_195148;
        case 0x19514cu: goto label_19514c;
        case 0x195150u: goto label_195150;
        case 0x195154u: goto label_195154;
        case 0x195158u: goto label_195158;
        case 0x19515cu: goto label_19515c;
        case 0x195160u: goto label_195160;
        case 0x195164u: goto label_195164;
        case 0x195168u: goto label_195168;
        case 0x19516cu: goto label_19516c;
        case 0x195170u: goto label_195170;
        case 0x195174u: goto label_195174;
        case 0x195178u: goto label_195178;
        case 0x19517cu: goto label_19517c;
        case 0x195180u: goto label_195180;
        case 0x195184u: goto label_195184;
        case 0x195188u: goto label_195188;
        case 0x19518cu: goto label_19518c;
        case 0x195190u: goto label_195190;
        case 0x195194u: goto label_195194;
        case 0x195198u: goto label_195198;
        case 0x19519cu: goto label_19519c;
        case 0x1951a0u: goto label_1951a0;
        case 0x1951a4u: goto label_1951a4;
        case 0x1951a8u: goto label_1951a8;
        case 0x1951acu: goto label_1951ac;
        case 0x1951b0u: goto label_1951b0;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951b8u: goto label_1951b8;
        case 0x1951bcu: goto label_1951bc;
        case 0x1951c0u: goto label_1951c0;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951c8u: goto label_1951c8;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951d0u: goto label_1951d0;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951d8u: goto label_1951d8;
        case 0x1951dcu: goto label_1951dc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951e4u: goto label_1951e4;
        case 0x1951e8u: goto label_1951e8;
        case 0x1951ecu: goto label_1951ec;
        case 0x1951f0u: goto label_1951f0;
        case 0x1951f4u: goto label_1951f4;
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        case 0x195220u: goto label_195220;
        case 0x195224u: goto label_195224;
        case 0x195228u: goto label_195228;
        case 0x19522cu: goto label_19522c;
        case 0x195230u: goto label_195230;
        case 0x195234u: goto label_195234;
        case 0x195238u: goto label_195238;
        case 0x19523cu: goto label_19523c;
        case 0x195240u: goto label_195240;
        case 0x195244u: goto label_195244;
        case 0x195248u: goto label_195248;
        case 0x19524cu: goto label_19524c;
        case 0x195250u: goto label_195250;
        case 0x195254u: goto label_195254;
        case 0x195258u: goto label_195258;
        case 0x19525cu: goto label_19525c;
        case 0x195260u: goto label_195260;
        case 0x195264u: goto label_195264;
        case 0x195268u: goto label_195268;
        case 0x19526cu: goto label_19526c;
        case 0x195270u: goto label_195270;
        case 0x195274u: goto label_195274;
        case 0x195278u: goto label_195278;
        case 0x19527cu: goto label_19527c;
        case 0x195280u: goto label_195280;
        case 0x195284u: goto label_195284;
        case 0x195288u: goto label_195288;
        case 0x19528cu: goto label_19528c;
        case 0x195290u: goto label_195290;
        case 0x195294u: goto label_195294;
        case 0x195298u: goto label_195298;
        case 0x19529cu: goto label_19529c;
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a4u: goto label_1952a4;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952acu: goto label_1952ac;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952b4u: goto label_1952b4;
        case 0x1952b8u: goto label_1952b8;
        case 0x1952bcu: goto label_1952bc;
        case 0x1952c0u: goto label_1952c0;
        case 0x1952c4u: goto label_1952c4;
        case 0x1952c8u: goto label_1952c8;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952d4u: goto label_1952d4;
        case 0x1952d8u: goto label_1952d8;
        case 0x1952dcu: goto label_1952dc;
        default: return;
    }

label_194b10:
    // 0x194b10: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x194b10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_194b14:
    // 0x194b14: 0x24639d7a  addiu       $v1, $v1, -0x6286
    ctx->pc = 0x194b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942074));
label_194b18:
    // 0x194b18: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x194b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_194b1c:
    // 0x194b1c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194b20:
    // 0x194b20: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194b20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194b24:
    // 0x194b24: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194b24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194b28:
    // 0x194b28: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x194b28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_194b2c:
    // 0x194b2c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194b30:
    if (ctx->pc == 0x194B30u) {
        ctx->pc = 0x194B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B2Cu;
        // 0x194b30: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B34u;
        goto label_194b34;
    }
    ctx->pc = 0x194B2Cu;
    {
        const bool branch_taken_0x194b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B2Cu;
        // 0x194b30: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b2c) {
            ctx->pc = 0x194B4Cu;
            goto label_194b4c;
        }
    }
    ctx->pc = 0x194B34u;
label_194b34:
    // 0x194b34: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x194b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_194b38:
    // 0x194b38: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194b3c:
    // 0x194b3c: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194b40:
    // 0x194b40: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194b44:
    // 0x194b44: 0x10000014  b           . + 4 + (0x14 << 2)
label_194b48:
    if (ctx->pc == 0x194B48u) {
        ctx->pc = 0x194B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B44u;
        // 0x194b48: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B4Cu;
        goto label_194b4c;
    }
    ctx->pc = 0x194B44u;
    {
        const bool branch_taken_0x194b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B44u;
        // 0x194b48: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b44) {
            ctx->pc = 0x194B98u;
            goto label_194b98;
        }
    }
    ctx->pc = 0x194B4Cu;
label_194b4c:
    // 0x194b4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_194b50:
    if (ctx->pc == 0x194B50u) {
        ctx->pc = 0x194B54u;
        goto label_194b54;
    }
    ctx->pc = 0x194B4Cu;
    {
        const bool branch_taken_0x194b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194b4c) {
            ctx->pc = 0x194B5Cu;
            goto label_194b5c;
        }
    }
    ctx->pc = 0x194B54u;
label_194b54:
    // 0x194b54: 0x1000000c  b           . + 4 + (0xC << 2)
label_194b58:
    if (ctx->pc == 0x194B58u) {
        ctx->pc = 0x194B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B54u;
        // 0x194b58: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B5Cu;
        goto label_194b5c;
    }
    ctx->pc = 0x194B54u;
    {
        const bool branch_taken_0x194b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B54u;
        // 0x194b58: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b54) {
            ctx->pc = 0x194B88u;
            goto label_194b88;
        }
    }
    ctx->pc = 0x194B5Cu;
label_194b5c:
    // 0x194b5c: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x194b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_194b60:
    // 0x194b60: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_194b64:
    if (ctx->pc == 0x194B64u) {
        ctx->pc = 0x194B68u;
        goto label_194b68;
    }
    ctx->pc = 0x194B60u;
    {
        const bool branch_taken_0x194b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194b60) {
            ctx->pc = 0x194B88u;
            goto label_194b88;
        }
    }
    ctx->pc = 0x194B68u;
label_194b68:
    // 0x194b68: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194b6c:
    // 0x194b6c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194b70:
    // 0x194b70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x194b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_194b74:
    // 0x194b74: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194b78:
    // 0x194b78: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194b7c:
    // 0x194b7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194b80:
    // 0x194b80: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194b84:
    // 0x194b84: 0x0  nop
    ctx->pc = 0x194b84u;
    // NOP
label_194b88:
    // 0x194b88: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194b8c:
    // 0x194b8c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194b90:
    // 0x194b90: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194b94:
    // 0x194b94: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194b98:
    // 0x194b98: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194b98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194b9c:
    // 0x194b9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194ba0:
    // 0x194ba0: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194ba0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194ba4:
    // 0x194ba4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194ba8:
    // 0x194ba8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194bac:
    // 0x194bac: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194bacu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194bb0:
    // 0x194bb0: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194bb4:
    // 0x194bb4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194bb8:
    if (ctx->pc == 0x194BB8u) {
        ctx->pc = 0x194BBCu;
        goto label_194bbc;
    }
    ctx->pc = 0x194BB4u;
    {
        const bool branch_taken_0x194bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194bb4) {
            ctx->pc = 0x194BC8u;
            goto label_194bc8;
        }
    }
    ctx->pc = 0x194BBCu;
label_194bbc:
    // 0x194bbc: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194bc0:
    // 0x194bc0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194bc4:
    if (ctx->pc == 0x194BC4u) {
        ctx->pc = 0x194BC8u;
        goto label_194bc8;
    }
    ctx->pc = 0x194BC0u;
    {
        const bool branch_taken_0x194bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194bc0) {
            ctx->pc = 0x194C0Cu;
            goto label_194c0c;
        }
    }
    ctx->pc = 0x194BC8u;
label_194bc8:
    // 0x194bc8: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194bcc:
    // 0x194bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194bd0:
    // 0x194bd0: 0x148300b5  bne         $a0, $v1, . + 4 + (0xB5 << 2)
label_194bd4:
    if (ctx->pc == 0x194BD4u) {
        ctx->pc = 0x194BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BD0u;
        // 0x194bd4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BD8u;
        goto label_194bd8;
    }
    ctx->pc = 0x194BD0u;
    {
        const bool branch_taken_0x194bd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BD0u;
        // 0x194bd4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bd0) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194BD8u;
label_194bd8:
    // 0x194bd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194bdc:
    // 0x194bdc: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194be0:
    // 0x194be0: 0x148300b1  bne         $a0, $v1, . + 4 + (0xB1 << 2)
label_194be4:
    if (ctx->pc == 0x194BE4u) {
        ctx->pc = 0x194BE8u;
        goto label_194be8;
    }
    ctx->pc = 0x194BE0u;
    {
        const bool branch_taken_0x194be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194be0) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194BE8u;
label_194be8:
    // 0x194be8: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194bec:
    // 0x194bec: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194bf0:
    // 0x194bf0: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
label_194bf4:
    if (ctx->pc == 0x194BF4u) {
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF0u;
        // 0x194bf4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BF8u;
        goto label_194bf8;
    }
    ctx->pc = 0x194BF0u;
    {
        const bool branch_taken_0x194bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF0u;
        // 0x194bf4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bf0) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194BF8u;
label_194bf8:
    // 0x194bf8: 0x10a300ab  beq         $a1, $v1, . + 4 + (0xAB << 2)
label_194bfc:
    if (ctx->pc == 0x194BFCu) {
        ctx->pc = 0x194C00u;
        goto label_194c00;
    }
    ctx->pc = 0x194BF8u;
    {
        const bool branch_taken_0x194bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194bf8) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194C00u;
label_194c00:
    // 0x194c00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194c04:
    // 0x194c04: 0x10a300a8  beq         $a1, $v1, . + 4 + (0xA8 << 2)
label_194c08:
    if (ctx->pc == 0x194C08u) {
        ctx->pc = 0x194C0Cu;
        goto label_194c0c;
    }
    ctx->pc = 0x194C04u;
    {
        const bool branch_taken_0x194c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194c04) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194C0Cu;
label_194c0c:
    // 0x194c0c: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194c10:
    // 0x194c10: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194c10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194c14:
    // 0x194c14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194c18:
    // 0x194c18: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194c1c:
    // 0x194c1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194c20:
    if (ctx->pc == 0x194C20u) {
        ctx->pc = 0x194C24u;
        goto label_194c24;
    }
    ctx->pc = 0x194C1Cu;
    {
        const bool branch_taken_0x194c1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c1c) {
            ctx->pc = 0x194C28u;
            goto label_194c28;
        }
    }
    ctx->pc = 0x194C24u;
label_194c24:
    // 0x194c24: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194c28:
    // 0x194c28: 0x1000009f  b           . + 4 + (0x9F << 2)
label_194c2c:
    if (ctx->pc == 0x194C2Cu) {
        ctx->pc = 0x194C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C28u;
        // 0x194c2c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C30u;
        goto label_194c30;
    }
    ctx->pc = 0x194C28u;
    {
        const bool branch_taken_0x194c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C28u;
        // 0x194c2c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c28) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194C30u;
label_194c30:
    // 0x194c30: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_194c34:
    if (ctx->pc == 0x194C34u) {
        ctx->pc = 0x194C38u;
        goto label_194c38;
    }
    ctx->pc = 0x194C30u;
    {
        const bool branch_taken_0x194c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c30) {
            ctx->pc = 0x194DB0u;
            goto label_194db0;
        }
    }
    ctx->pc = 0x194C38u;
label_194c38:
    // 0x194c38: 0x2624ffa7  addiu       $a0, $s1, -0x59
    ctx->pc = 0x194c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967207));
label_194c3c:
    // 0x194c3c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_194c40:
    // 0x194c40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x194c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_194c44:
    // 0x194c44: 0x2442a5c0  addiu       $v0, $v0, -0x5A40
    ctx->pc = 0x194c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
label_194c48:
    // 0x194c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194c4c:
    // 0x194c4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x194c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194c50:
    // 0x194c50: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194c54:
    // 0x194c54: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x194c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194c58:
    // 0x194c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194c5c:
    // 0x194c5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194c60:
    // 0x194c60: 0xc06542c  jal         func_1950B0
label_194c64:
    if (ctx->pc == 0x194C64u) {
        ctx->pc = 0x194C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C60u;
        // 0x194c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C68u;
        goto label_194c68;
    }
    ctx->pc = 0x194C60u;
    SET_GPR_U32(ctx, 31, 0x194C68u);
    ctx->pc = 0x194C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C60u;
    // 0x194c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    goto label_1950b0;
    ctx->pc = 0x194C68u;
label_194c68:
    // 0x194c68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194c6c:
    // 0x194c6c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_194c70:
    // 0x194c70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_194c74:
    if (ctx->pc == 0x194C74u) {
        ctx->pc = 0x194C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C70u;
        // 0x194c74: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C78u;
        goto label_194c78;
    }
    ctx->pc = 0x194C70u;
    {
        const bool branch_taken_0x194c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C70u;
        // 0x194c74: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c70) {
            ctx->pc = 0x194C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194c58;
        }
    }
    ctx->pc = 0x194C78u;
label_194c78:
    // 0x194c78: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x194c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_194c7c:
    // 0x194c7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194c80:
    // 0x194c80: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x194c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194c84:
    // 0x194c84: 0x24639d78  addiu       $v1, $v1, -0x6288
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942072));
label_194c88:
    // 0x194c88: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x194c88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194c8c:
    // 0x194c8c: 0xde460270  ld          $a2, 0x270($s2)
    ctx->pc = 0x194c8cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194c90:
    // 0x194c90: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_194c94:
    // 0x194c94: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x194c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_194c98:
    // 0x194c98: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x194c98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_194c9c:
    // 0x194c9c: 0x24849d72  addiu       $a0, $a0, -0x628E
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942066));
label_194ca0:
    // 0x194ca0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_194ca4:
    // 0x194ca4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x194ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_194ca8:
    // 0x194ca8: 0xfe450270  sd          $a1, 0x270($s2)
    ctx->pc = 0x194ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 5));
label_194cac:
    // 0x194cac: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194cacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194cb0:
    // 0x194cb0: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x194cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_194cb4:
    // 0x194cb4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194cb8:
    if (ctx->pc == 0x194CB8u) {
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CBCu;
        goto label_194cbc;
    }
    ctx->pc = 0x194CB4u;
    {
        const bool branch_taken_0x194cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cb4) {
            ctx->pc = 0x194CD4u;
            goto label_194cd4;
        }
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_194cc0:
    // 0x194cc0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194cc4:
    // 0x194cc4: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194cc8:
    // 0x194cc8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194ccc:
    // 0x194ccc: 0x10000012  b           . + 4 + (0x12 << 2)
label_194cd0:
    if (ctx->pc == 0x194CD0u) {
        ctx->pc = 0x194CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CCCu;
        // 0x194cd0: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CD4u;
        goto label_194cd4;
    }
    ctx->pc = 0x194CCCu;
    {
        const bool branch_taken_0x194ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CCCu;
        // 0x194cd0: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ccc) {
            ctx->pc = 0x194D18u;
            goto label_194d18;
        }
    }
    ctx->pc = 0x194CD4u;
label_194cd4:
    // 0x194cd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_194cd8:
    if (ctx->pc == 0x194CD8u) {
        ctx->pc = 0x194CDCu;
        goto label_194cdc;
    }
    ctx->pc = 0x194CD4u;
    {
        const bool branch_taken_0x194cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194cd4) {
            ctx->pc = 0x194CE4u;
            goto label_194ce4;
        }
    }
    ctx->pc = 0x194CDCu;
label_194cdc:
    // 0x194cdc: 0x1000000a  b           . + 4 + (0xA << 2)
label_194ce0:
    if (ctx->pc == 0x194CE0u) {
        ctx->pc = 0x194CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CDCu;
        // 0x194ce0: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CE4u;
        goto label_194ce4;
    }
    ctx->pc = 0x194CDCu;
    {
        const bool branch_taken_0x194cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CDCu;
        // 0x194ce0: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cdc) {
            ctx->pc = 0x194D08u;
            goto label_194d08;
        }
    }
    ctx->pc = 0x194CE4u;
label_194ce4:
    // 0x194ce4: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x194ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_194ce8:
    // 0x194ce8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194cec:
    if (ctx->pc == 0x194CECu) {
        ctx->pc = 0x194CF0u;
        goto label_194cf0;
    }
    ctx->pc = 0x194CE8u;
    {
        const bool branch_taken_0x194ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194ce8) {
            ctx->pc = 0x194D08u;
            goto label_194d08;
        }
    }
    ctx->pc = 0x194CF0u;
label_194cf0:
    // 0x194cf0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x194cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194cf4:
    // 0x194cf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194cf8:
    // 0x194cf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194cfc:
    // 0x194cfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194d00:
    // 0x194d00: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194d00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194d04:
    // 0x194d04: 0x0  nop
    ctx->pc = 0x194d04u;
    // NOP
label_194d08:
    // 0x194d08: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194d0c:
    // 0x194d0c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194d10:
    // 0x194d10: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194d14:
    // 0x194d14: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194d18:
    // 0x194d18: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194d18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194d1c:
    // 0x194d1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194d20:
    // 0x194d20: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194d24:
    // 0x194d24: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194d28:
    // 0x194d28: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194d2c:
    // 0x194d2c: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194d30:
    // 0x194d30: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194d30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194d34:
    // 0x194d34: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194d38:
    if (ctx->pc == 0x194D38u) {
        ctx->pc = 0x194D3Cu;
        goto label_194d3c;
    }
    ctx->pc = 0x194D34u;
    {
        const bool branch_taken_0x194d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194d34) {
            ctx->pc = 0x194D48u;
            goto label_194d48;
        }
    }
    ctx->pc = 0x194D3Cu;
label_194d3c:
    // 0x194d3c: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194d40:
    // 0x194d40: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194d44:
    if (ctx->pc == 0x194D44u) {
        ctx->pc = 0x194D48u;
        goto label_194d48;
    }
    ctx->pc = 0x194D40u;
    {
        const bool branch_taken_0x194d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d40) {
            ctx->pc = 0x194D8Cu;
            goto label_194d8c;
        }
    }
    ctx->pc = 0x194D48u;
label_194d48:
    // 0x194d48: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194d4c:
    // 0x194d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194d50:
    // 0x194d50: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_194d54:
    if (ctx->pc == 0x194D54u) {
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D58u;
        goto label_194d58;
    }
    ctx->pc = 0x194D50u;
    {
        const bool branch_taken_0x194d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d50) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D58u;
label_194d58:
    // 0x194d58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194d5c:
    // 0x194d5c: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194d60:
    // 0x194d60: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
label_194d64:
    if (ctx->pc == 0x194D64u) {
        ctx->pc = 0x194D68u;
        goto label_194d68;
    }
    ctx->pc = 0x194D60u;
    {
        const bool branch_taken_0x194d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194d60) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D68u;
label_194d68:
    // 0x194d68: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194d6c:
    // 0x194d6c: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194d70:
    // 0x194d70: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_194d74:
    if (ctx->pc == 0x194D74u) {
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D78u;
        goto label_194d78;
    }
    ctx->pc = 0x194D70u;
    {
        const bool branch_taken_0x194d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d70) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D78u;
label_194d78:
    // 0x194d78: 0x10a3004b  beq         $a1, $v1, . + 4 + (0x4B << 2)
label_194d7c:
    if (ctx->pc == 0x194D7Cu) {
        ctx->pc = 0x194D80u;
        goto label_194d80;
    }
    ctx->pc = 0x194D78u;
    {
        const bool branch_taken_0x194d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194d78) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D80u;
label_194d80:
    // 0x194d80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194d84:
    // 0x194d84: 0x10a30048  beq         $a1, $v1, . + 4 + (0x48 << 2)
label_194d88:
    if (ctx->pc == 0x194D88u) {
        ctx->pc = 0x194D8Cu;
        goto label_194d8c;
    }
    ctx->pc = 0x194D84u;
    {
        const bool branch_taken_0x194d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194d84) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D8Cu;
label_194d8c:
    // 0x194d8c: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194d90:
    // 0x194d90: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194d94:
    // 0x194d94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194d98:
    // 0x194d98: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194d9c:
    // 0x194d9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194da0:
    if (ctx->pc == 0x194DA0u) {
        ctx->pc = 0x194DA4u;
        goto label_194da4;
    }
    ctx->pc = 0x194D9Cu;
    {
        const bool branch_taken_0x194d9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d9c) {
            ctx->pc = 0x194DA8u;
            goto label_194da8;
        }
    }
    ctx->pc = 0x194DA4u;
label_194da4:
    // 0x194da4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194da8:
    // 0x194da8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_194dac:
    if (ctx->pc == 0x194DACu) {
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DB0u;
        goto label_194db0;
    }
    ctx->pc = 0x194DA8u;
    {
        const bool branch_taken_0x194da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194da8) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194DB0u;
label_194db0:
    // 0x194db0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_194db4:
    if (ctx->pc == 0x194DB4u) {
        ctx->pc = 0x194DB8u;
        goto label_194db8;
    }
    ctx->pc = 0x194DB0u;
    {
        const bool branch_taken_0x194db0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x194db0) {
            ctx->pc = 0x194DD0u;
            goto label_194dd0;
        }
    }
    ctx->pc = 0x194DB8u;
label_194db8:
    // 0x194db8: 0x2624ff55  addiu       $a0, $s1, -0xAB
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967125));
label_194dbc:
    // 0x194dbc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194dc0:
    // 0x194dc0: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194dc4:
    // 0x194dc4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194dc8:
    // 0x194dc8: 0x10000012  b           . + 4 + (0x12 << 2)
label_194dcc:
    if (ctx->pc == 0x194DCCu) {
        ctx->pc = 0x194DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DC8u;
        // 0x194dcc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DD0u;
        goto label_194dd0;
    }
    ctx->pc = 0x194DC8u;
    {
        const bool branch_taken_0x194dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DC8u;
        // 0x194dcc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dc8) {
            ctx->pc = 0x194E14u;
            goto label_194e14;
        }
    }
    ctx->pc = 0x194DD0u;
label_194dd0:
    // 0x194dd0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_194dd4:
    if (ctx->pc == 0x194DD4u) {
        ctx->pc = 0x194DD8u;
        goto label_194dd8;
    }
    ctx->pc = 0x194DD0u;
    {
        const bool branch_taken_0x194dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x194dd0) {
            ctx->pc = 0x194DE0u;
            goto label_194de0;
        }
    }
    ctx->pc = 0x194DD8u;
label_194dd8:
    // 0x194dd8: 0x1000000a  b           . + 4 + (0xA << 2)
label_194ddc:
    if (ctx->pc == 0x194DDCu) {
        ctx->pc = 0x194DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DD8u;
        // 0x194ddc: 0x2631ffd7  addiu       $s1, $s1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DE0u;
        goto label_194de0;
    }
    ctx->pc = 0x194DD8u;
    {
        const bool branch_taken_0x194dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DD8u;
        // 0x194ddc: 0x2631ffd7  addiu       $s1, $s1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dd8) {
            ctx->pc = 0x194E04u;
            goto label_194e04;
        }
    }
    ctx->pc = 0x194DE0u;
label_194de0:
    // 0x194de0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_194de4:
    if (ctx->pc == 0x194DE4u) {
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE0u;
        // 0x194de4: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DE8u;
        goto label_194de8;
    }
    ctx->pc = 0x194DE0u;
    {
        const bool branch_taken_0x194de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE0u;
        // 0x194de4: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194de0) {
            ctx->pc = 0x194E04u;
            goto label_194e04;
        }
    }
    ctx->pc = 0x194DE8u;
label_194de8:
    // 0x194de8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194dec:
    // 0x194dec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194df0:
    // 0x194df0: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194df4:
    // 0x194df4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194df8:
    // 0x194df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194dfc:
    // 0x194dfc: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x194dfcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194e00:
    // 0x194e00: 0x0  nop
    ctx->pc = 0x194e00u;
    // NOP
label_194e04:
    // 0x194e04: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194e08:
    // 0x194e08: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_194e0c:
    // 0x194e0c: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194e10:
    // 0x194e10: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194e14:
    // 0x194e14: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194e14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194e18:
    // 0x194e18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194e1c:
    // 0x194e1c: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194e1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194e20:
    // 0x194e20: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194e24:
    // 0x194e24: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194e28:
    // 0x194e28: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194e28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194e2c:
    // 0x194e2c: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194e30:
    // 0x194e30: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194e34:
    if (ctx->pc == 0x194E34u) {
        ctx->pc = 0x194E38u;
        goto label_194e38;
    }
    ctx->pc = 0x194E30u;
    {
        const bool branch_taken_0x194e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e30) {
            ctx->pc = 0x194E44u;
            goto label_194e44;
        }
    }
    ctx->pc = 0x194E38u;
label_194e38:
    // 0x194e38: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194e3c:
    // 0x194e3c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194e40:
    if (ctx->pc == 0x194E40u) {
        ctx->pc = 0x194E44u;
        goto label_194e44;
    }
    ctx->pc = 0x194E3Cu;
    {
        const bool branch_taken_0x194e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e3c) {
            ctx->pc = 0x194E88u;
            goto label_194e88;
        }
    }
    ctx->pc = 0x194E44u;
label_194e44:
    // 0x194e44: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194e44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194e48:
    // 0x194e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194e4c:
    // 0x194e4c: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_194e50:
    if (ctx->pc == 0x194E50u) {
        ctx->pc = 0x194E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E4Cu;
        // 0x194e50: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E54u;
        goto label_194e54;
    }
    ctx->pc = 0x194E4Cu;
    {
        const bool branch_taken_0x194e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E4Cu;
        // 0x194e50: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e4c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E54u;
label_194e54:
    // 0x194e54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194e58:
    // 0x194e58: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194e5c:
    // 0x194e5c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_194e60:
    if (ctx->pc == 0x194E60u) {
        ctx->pc = 0x194E64u;
        goto label_194e64;
    }
    ctx->pc = 0x194E5Cu;
    {
        const bool branch_taken_0x194e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194e5c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E64u;
label_194e64:
    // 0x194e64: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194e68:
    // 0x194e68: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194e6c:
    // 0x194e6c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_194e70:
    if (ctx->pc == 0x194E70u) {
        ctx->pc = 0x194E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E6Cu;
        // 0x194e70: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E74u;
        goto label_194e74;
    }
    ctx->pc = 0x194E6Cu;
    {
        const bool branch_taken_0x194e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E6Cu;
        // 0x194e70: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e6c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E74u;
label_194e74:
    // 0x194e74: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_194e78:
    if (ctx->pc == 0x194E78u) {
        ctx->pc = 0x194E7Cu;
        goto label_194e7c;
    }
    ctx->pc = 0x194E74u;
    {
        const bool branch_taken_0x194e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e74) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E7Cu;
label_194e7c:
    // 0x194e7c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194e80:
    // 0x194e80: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_194e84:
    if (ctx->pc == 0x194E84u) {
        ctx->pc = 0x194E88u;
        goto label_194e88;
    }
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194e8c:
    // 0x194e8c: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194e8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194e90:
    // 0x194e90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194e94:
    // 0x194e94: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194e98:
    // 0x194e98: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194e9c:
    if (ctx->pc == 0x194E9Cu) {
        ctx->pc = 0x194EA0u;
        goto label_194ea0;
    }
    ctx->pc = 0x194E98u;
    {
        const bool branch_taken_0x194e98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194e98) {
            ctx->pc = 0x194EA4u;
            goto label_194ea4;
        }
    }
    ctx->pc = 0x194EA0u;
label_194ea0:
    // 0x194ea0: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194ea4:
    // 0x194ea4: 0xa243024a  sb          $v1, 0x24A($s2)
    ctx->pc = 0x194ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
label_194ea8:
    // 0x194ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194eac:
    // 0x194eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_194eb0:
    // 0x194eb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_194eb4:
    // 0x194eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194eb8:
    // 0x194eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194ebc:
    // 0x194ebc: 0x3e00008  jr          $ra
label_194ec0:
    if (ctx->pc == 0x194EC0u) {
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EC4u;
        goto label_194ec4;
    }
    ctx->pc = 0x194EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194EC4u;
label_194ec4:
    // 0x194ec4: 0x0  nop
    ctx->pc = 0x194ec4u;
    // NOP
label_194ec8:
    // 0x194ec8: 0x0  nop
    ctx->pc = 0x194ec8u;
    // NOP
label_194ecc:
    // 0x194ecc: 0x0  nop
    ctx->pc = 0x194eccu;
    // NOP
label_194ed0:
    // 0x194ed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x194ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_194ed4:
    // 0x194ed4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x194ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_194ed8:
    // 0x194ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x194ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_194edc:
    // 0x194edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_194ee0:
    // 0x194ee0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x194ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ee4:
    // 0x194ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_194ee8:
    // 0x194ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194eec:
    // 0x194eec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194ef0:
    // 0x194ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194ef4:
    // 0x194ef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194ef8:
    // 0x194ef8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x194ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194efc:
    // 0x194efc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x194efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194f00:
    // 0x194f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194f04:
    // 0x194f04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194f08:
    // 0x194f08: 0xc06542c  jal         func_1950B0
label_194f0c:
    if (ctx->pc == 0x194F0Cu) {
        ctx->pc = 0x194F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F08u;
        // 0x194f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F10u;
        goto label_194f10;
    }
    ctx->pc = 0x194F08u;
    SET_GPR_U32(ctx, 31, 0x194F10u);
    ctx->pc = 0x194F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F08u;
    // 0x194f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    goto label_1950b0;
    ctx->pc = 0x194F10u;
label_194f10:
    // 0x194f10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x194f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_194f14:
    // 0x194f14: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_194f18:
    // 0x194f18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_194f1c:
    if (ctx->pc == 0x194F1Cu) {
        ctx->pc = 0x194F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F18u;
        // 0x194f1c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F20u;
        goto label_194f20;
    }
    ctx->pc = 0x194F18u;
    {
        const bool branch_taken_0x194f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F18u;
        // 0x194f1c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f18) {
            ctx->pc = 0x194F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194f00;
        }
    }
    ctx->pc = 0x194F20u;
label_194f20:
    // 0x194f20: 0xde440270  ld          $a0, 0x270($s2)
    ctx->pc = 0x194f20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194f24:
    // 0x194f24: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x194f24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_194f28:
    // 0x194f28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x194f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_194f2c:
    // 0x194f2c: 0x16000044  bnez        $s0, . + 4 + (0x44 << 2)
label_194f30:
    if (ctx->pc == 0x194F30u) {
        ctx->pc = 0x194F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F2Cu;
        // 0x194f30: 0xfe430270  sd          $v1, 0x270($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F34u;
        goto label_194f34;
    }
    ctx->pc = 0x194F2Cu;
    {
        const bool branch_taken_0x194f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F2Cu;
        // 0x194f30: 0xfe430270  sd          $v1, 0x270($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f2c) {
            ctx->pc = 0x195040u;
            goto label_195040;
        }
    }
    ctx->pc = 0x194F34u;
label_194f34:
    // 0x194f34: 0x9225000a  lbu         $a1, 0xA($s1)
    ctx->pc = 0x194f34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_194f38:
    // 0x194f38: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_194f3c:
    // 0x194f3c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194f40:
    if (ctx->pc == 0x194F40u) {
        ctx->pc = 0x194F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F3Cu;
        // 0x194f40: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F44u;
        goto label_194f44;
    }
    ctx->pc = 0x194F3Cu;
    {
        const bool branch_taken_0x194f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F3Cu;
        // 0x194f40: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f3c) {
            ctx->pc = 0x194F5Cu;
            goto label_194f5c;
        }
    }
    ctx->pc = 0x194F44u;
label_194f44:
    // 0x194f44: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x194f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_194f48:
    // 0x194f48: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194f4c:
    // 0x194f4c: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194f50:
    // 0x194f50: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194f54:
    // 0x194f54: 0x10000014  b           . + 4 + (0x14 << 2)
label_194f58:
    if (ctx->pc == 0x194F58u) {
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F5Cu;
        goto label_194f5c;
    }
    ctx->pc = 0x194F54u;
    {
        const bool branch_taken_0x194f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f54) {
            ctx->pc = 0x194FA8u;
            goto label_194fa8;
        }
    }
    ctx->pc = 0x194F5Cu;
label_194f5c:
    // 0x194f5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_194f60:
    if (ctx->pc == 0x194F60u) {
        ctx->pc = 0x194F64u;
        goto label_194f64;
    }
    ctx->pc = 0x194F5Cu;
    {
        const bool branch_taken_0x194f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f5c) {
            ctx->pc = 0x194F6Cu;
            goto label_194f6c;
        }
    }
    ctx->pc = 0x194F64u;
label_194f64:
    // 0x194f64: 0x1000000c  b           . + 4 + (0xC << 2)
label_194f68:
    if (ctx->pc == 0x194F68u) {
        ctx->pc = 0x194F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F64u;
        // 0x194f68: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F6Cu;
        goto label_194f6c;
    }
    ctx->pc = 0x194F64u;
    {
        const bool branch_taken_0x194f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F64u;
        // 0x194f68: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f64) {
            ctx->pc = 0x194F98u;
            goto label_194f98;
        }
    }
    ctx->pc = 0x194F6Cu;
label_194f6c:
    // 0x194f6c: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x194f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_194f70:
    // 0x194f70: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_194f74:
    if (ctx->pc == 0x194F74u) {
        ctx->pc = 0x194F78u;
        goto label_194f78;
    }
    ctx->pc = 0x194F70u;
    {
        const bool branch_taken_0x194f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f70) {
            ctx->pc = 0x194F98u;
            goto label_194f98;
        }
    }
    ctx->pc = 0x194F78u;
label_194f78:
    // 0x194f78: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194f7c:
    // 0x194f7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194f80:
    // 0x194f80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_194f84:
    // 0x194f84: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194f88:
    // 0x194f88: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194f8c:
    // 0x194f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194f90:
    // 0x194f90: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194f90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194f94:
    // 0x194f94: 0x0  nop
    ctx->pc = 0x194f94u;
    // NOP
label_194f98:
    // 0x194f98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194f9c:
    // 0x194f9c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194fa0:
    // 0x194fa0: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194fa4:
    // 0x194fa4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194fa8:
    // 0x194fa8: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194fa8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194fac:
    // 0x194fac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194fb0:
    // 0x194fb0: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194fb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194fb4:
    // 0x194fb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194fb8:
    // 0x194fb8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194fbc:
    // 0x194fbc: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194fc0:
    // 0x194fc0: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194fc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194fc4:
    // 0x194fc4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194fc8:
    if (ctx->pc == 0x194FC8u) {
        ctx->pc = 0x194FCCu;
        goto label_194fcc;
    }
    ctx->pc = 0x194FC4u;
    {
        const bool branch_taken_0x194fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194fc4) {
            ctx->pc = 0x194FD8u;
            goto label_194fd8;
        }
    }
    ctx->pc = 0x194FCCu;
label_194fcc:
    // 0x194fcc: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194fd0:
    // 0x194fd0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194fd4:
    if (ctx->pc == 0x194FD4u) {
        ctx->pc = 0x194FD8u;
        goto label_194fd8;
    }
    ctx->pc = 0x194FD0u;
    {
        const bool branch_taken_0x194fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194fd0) {
            ctx->pc = 0x19501Cu;
            goto label_19501c;
        }
    }
    ctx->pc = 0x194FD8u;
label_194fd8:
    // 0x194fd8: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194fd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194fdc:
    // 0x194fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194fe0:
    // 0x194fe0: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
label_194fe4:
    if (ctx->pc == 0x194FE4u) {
        ctx->pc = 0x194FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE0u;
        // 0x194fe4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FE8u;
        goto label_194fe8;
    }
    ctx->pc = 0x194FE0u;
    {
        const bool branch_taken_0x194fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE0u;
        // 0x194fe4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fe0) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x194FE8u;
label_194fe8:
    // 0x194fe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194fec:
    // 0x194fec: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194ff0:
    // 0x194ff0: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
label_194ff4:
    if (ctx->pc == 0x194FF4u) {
        ctx->pc = 0x194FF8u;
        goto label_194ff8;
    }
    ctx->pc = 0x194FF0u;
    {
        const bool branch_taken_0x194ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194ff0) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x194FF8u;
label_194ff8:
    // 0x194ff8: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194ffc:
    // 0x194ffc: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_195000:
    // 0x195000: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_195004:
    if (ctx->pc == 0x195004u) {
        ctx->pc = 0x195004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195000u;
        // 0x195004: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195008u;
        goto label_195008;
    }
    ctx->pc = 0x195000u;
    {
        const bool branch_taken_0x195000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195000u;
        // 0x195004: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195000) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x195008u;
label_195008:
    // 0x195008: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_19500c:
    if (ctx->pc == 0x19500Cu) {
        ctx->pc = 0x195010u;
        goto label_195010;
    }
    ctx->pc = 0x195008u;
    {
        const bool branch_taken_0x195008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x195008) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x195010u;
label_195010:
    // 0x195010: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x195010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_195014:
    // 0x195014: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
label_195018:
    if (ctx->pc == 0x195018u) {
        ctx->pc = 0x19501Cu;
        goto label_19501c;
    }
    ctx->pc = 0x195014u;
    {
        const bool branch_taken_0x195014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x195014) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x19501Cu;
label_19501c:
    // 0x19501c: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x19501cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_195020:
    // 0x195020: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x195020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_195024:
    // 0x195024: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x195024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_195028:
    // 0x195028: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x195028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_19502c:
    // 0x19502c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_195030:
    if (ctx->pc == 0x195030u) {
        ctx->pc = 0x195034u;
        goto label_195034;
    }
    ctx->pc = 0x19502Cu;
    {
        const bool branch_taken_0x19502c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19502c) {
            ctx->pc = 0x195038u;
            goto label_195038;
        }
    }
    ctx->pc = 0x195034u;
label_195034:
    // 0x195034: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x195034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195038:
    // 0x195038: 0x10000012  b           . + 4 + (0x12 << 2)
label_19503c:
    if (ctx->pc == 0x19503Cu) {
        ctx->pc = 0x19503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195038u;
        // 0x19503c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195040u;
        goto label_195040;
    }
    ctx->pc = 0x195038u;
    {
        const bool branch_taken_0x195038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195038u;
        // 0x19503c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195038) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x195040u;
label_195040:
    // 0x195040: 0x9225000b  lbu         $a1, 0xB($s1)
    ctx->pc = 0x195040u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_195044:
    // 0x195044: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_195048:
    // 0x195048: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x195048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
label_19504c:
    // 0x19504c: 0xde440270  ld          $a0, 0x270($s2)
    ctx->pc = 0x19504cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_195050:
    // 0x195050: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_195054:
    // 0x195054: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x195054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195058:
    // 0x195058: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x195058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
label_19505c:
    // 0x19505c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_195060:
    // 0x195060: 0xfe430270  sd          $v1, 0x270($s2)
    ctx->pc = 0x195060u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 3));
label_195064:
    // 0x195064: 0x90a3003b  lbu         $v1, 0x3B($a1)
    ctx->pc = 0x195064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
label_195068:
    // 0x195068: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x195068u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_19506c:
    // 0x19506c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_195070:
    // 0x195070: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_195074:
    // 0x195074: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_195078:
    if (ctx->pc == 0x195078u) {
        ctx->pc = 0x19507Cu;
        goto label_19507c;
    }
    ctx->pc = 0x195074u;
    {
        const bool branch_taken_0x195074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195074) {
            ctx->pc = 0x195080u;
            goto label_195080;
        }
    }
    ctx->pc = 0x19507Cu;
label_19507c:
    // 0x19507c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195080:
    // 0x195080: 0xa243024a  sb          $v1, 0x24A($s2)
    ctx->pc = 0x195080u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
label_195084:
    // 0x195084: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x195084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_195088:
    // 0x195088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x195088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19508c:
    // 0x19508c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19508cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195090:
    // 0x195090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195094:
    // 0x195094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195098:
    // 0x195098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19509c:
    // 0x19509c: 0x3e00008  jr          $ra
label_1950a0:
    if (ctx->pc == 0x1950A0u) {
        ctx->pc = 0x1950A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19509Cu;
        // 0x1950a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950A4u;
        goto label_1950a4;
    }
    ctx->pc = 0x19509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1950A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19509Cu;
        // 0x1950a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1950A4u;
label_1950a4:
    // 0x1950a4: 0x0  nop
    ctx->pc = 0x1950a4u;
    // NOP
label_1950a8:
    // 0x1950a8: 0x0  nop
    ctx->pc = 0x1950a8u;
    // NOP
label_1950ac:
    // 0x1950ac: 0x0  nop
    ctx->pc = 0x1950acu;
    // NOP
label_1950b0:
    // 0x1950b0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_1950b4:
    if (ctx->pc == 0x1950B4u) {
        ctx->pc = 0x1950B8u;
        goto label_1950b8;
    }
    ctx->pc = 0x1950B0u;
    {
        const bool branch_taken_0x1950b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1950b0) {
            ctx->pc = 0x1950D0u;
            goto label_1950d0;
        }
    }
    ctx->pc = 0x1950B8u;
label_1950b8:
    // 0x1950b8: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x1950b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1950bc:
    // 0x1950bc: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1950bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1950c0:
    // 0x1950c0: 0x14e30007  bne         $a3, $v1, . + 4 + (0x7 << 2)
label_1950c4:
    if (ctx->pc == 0x1950C4u) {
        ctx->pc = 0x1950C8u;
        goto label_1950c8;
    }
    ctx->pc = 0x1950C0u;
    {
        const bool branch_taken_0x1950c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1950c0) {
            ctx->pc = 0x1950E0u;
            goto label_1950e0;
        }
    }
    ctx->pc = 0x1950C8u;
label_1950c8:
    // 0x1950c8: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1950cc:
    if (ctx->pc == 0x1950CCu) {
        ctx->pc = 0x1950D0u;
        goto label_1950d0;
    }
    ctx->pc = 0x1950C8u;
    {
        const bool branch_taken_0x1950c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950c8) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x1950D0u;
label_1950d0:
    // 0x1950d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1950d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1950d4:
    // 0x1950d4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1950d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1950d8:
    // 0x1950d8: 0x1020012a  beqz        $at, . + 4 + (0x12A << 2)
label_1950dc:
    if (ctx->pc == 0x1950DCu) {
        ctx->pc = 0x1950E0u;
        goto label_1950e0;
    }
    ctx->pc = 0x1950D8u;
    {
        const bool branch_taken_0x1950d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950d8) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_1950e4:
    if (ctx->pc == 0x1950E4u) {
        ctx->pc = 0x1950E8u;
        goto label_1950e8;
    }
    ctx->pc = 0x1950E0u;
    {
        const bool branch_taken_0x1950e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1950e0) {
            ctx->pc = 0x195104u;
            goto label_195104;
        }
    }
    ctx->pc = 0x1950E8u;
label_1950e8:
    // 0x1950e8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1950e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1950ec:
    // 0x1950ec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1950ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1950f0:
    // 0x1950f0: 0x2463a230  addiu       $v1, $v1, -0x5DD0
    ctx->pc = 0x1950f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943280));
label_1950f4:
    // 0x1950f4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1950f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1950f8:
    // 0x1950f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1950fc:
    // 0x1950fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_195100:
    if (ctx->pc == 0x195100u) {
        ctx->pc = 0x195100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950FCu;
        // 0x195100: 0xdc670000  ld          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195104u;
        goto label_195104;
    }
    ctx->pc = 0x1950FCu;
    {
        const bool branch_taken_0x1950fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950FCu;
        // 0x195100: 0xdc670000  ld          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950fc) {
            ctx->pc = 0x195120u;
            goto label_195120;
        }
    }
    ctx->pc = 0x195104u;
label_195104:
    // 0x195104: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x195104u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_195108:
    // 0x195108: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x195108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_19510c:
    // 0x19510c: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x19510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
label_195110:
    // 0x195110: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x195110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_195114:
    // 0x195114: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_195118:
    // 0x195118: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x195118u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_19511c:
    // 0x19511c: 0x0  nop
    ctx->pc = 0x19511cu;
    // NOP
label_195120:
    // 0x195120: 0xdc860270  ld          $a2, 0x270($a0)
    ctx->pc = 0x195120u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 624)));
label_195124:
    // 0x195124: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x195124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_195128:
    // 0x195128: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x195128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_19512c:
    // 0x19512c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_195130:
    if (ctx->pc == 0x195130u) {
        ctx->pc = 0x195130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19512Cu;
        // 0x195130: 0xfc860270  sd          $a2, 0x270($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 624), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195134u;
        goto label_195134;
    }
    ctx->pc = 0x19512Cu;
    {
        const bool branch_taken_0x19512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19512Cu;
        // 0x195130: 0xfc860270  sd          $a2, 0x270($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 624), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19512c) {
            ctx->pc = 0x195200u;
            goto label_195200;
        }
    }
    ctx->pc = 0x195134u;
label_195134:
    // 0x195134: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195138:
    // 0x195138: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_19513c:
    if (ctx->pc == 0x19513Cu) {
        ctx->pc = 0x19513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195138u;
        // 0x19513c: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195140u;
        goto label_195140;
    }
    ctx->pc = 0x195138u;
    {
        const bool branch_taken_0x195138 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x19513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195138u;
        // 0x19513c: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195138) {
            ctx->pc = 0x19514Cu;
            goto label_19514c;
        }
    }
    ctx->pc = 0x195140u;
label_195140:
    // 0x195140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195144:
    // 0x195144: 0x10000007  b           . + 4 + (0x7 << 2)
label_195148:
    if (ctx->pc == 0x195148u) {
        ctx->pc = 0x195148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195144u;
        // 0x195148: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19514Cu;
        goto label_19514c;
    }
    ctx->pc = 0x195144u;
    {
        const bool branch_taken_0x195144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195144u;
        // 0x195148: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195144) {
            ctx->pc = 0x195164u;
            goto label_195164;
        }
    }
    ctx->pc = 0x19514Cu;
label_19514c:
    // 0x19514c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_195150:
    // 0x195150: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x195150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195154:
    // 0x195154: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x195154u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195158:
    // 0x195158: 0x0  nop
    ctx->pc = 0x195158u;
    // NOP
label_19515c:
    // 0x19515c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19515cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195160:
    // 0x195160: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x195160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_195164:
    // 0x195164: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_195168:
    // 0x195168: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x195168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19516c:
    // 0x19516c: 0xc48001e4  lwc1        $f0, 0x1E4($a0)
    ctx->pc = 0x19516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195170:
    // 0x195170: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x195170u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_195174:
    // 0x195174: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x195174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_195178:
    // 0x195178: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x195178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19517c:
    // 0x19517c: 0xe48001e4  swc1        $f0, 0x1E4($a0)
    ctx->pc = 0x19517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
label_195180:
    // 0x195180: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x195180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_195184:
    // 0x195184: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x195184u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_195188:
    // 0x195188: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x195188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19518c:
    // 0x19518c: 0x0  nop
    ctx->pc = 0x19518cu;
    // NOP
label_195190:
    // 0x195190: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_195194:
    if (ctx->pc == 0x195194u) {
        ctx->pc = 0x195198u;
        goto label_195198;
    }
    ctx->pc = 0x195190u;
    {
        const bool branch_taken_0x195190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195190) {
            ctx->pc = 0x19519Cu;
            goto label_19519c;
        }
    }
    ctx->pc = 0x195198u;
label_195198:
    // 0x195198: 0xe48201e4  swc1        $f2, 0x1E4($a0)
    ctx->pc = 0x195198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
label_19519c:
    // 0x19519c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19519cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1951a0:
    // 0x1951a0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1951a4:
    if (ctx->pc == 0x1951A4u) {
        ctx->pc = 0x1951A8u;
        goto label_1951a8;
    }
    ctx->pc = 0x1951A0u;
    {
        const bool branch_taken_0x1951a0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1951a0) {
            ctx->pc = 0x1951B4u;
            goto label_1951b4;
        }
    }
    ctx->pc = 0x1951A8u;
label_1951a8:
    // 0x1951a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1951a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1951ac:
    // 0x1951ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1951b0:
    if (ctx->pc == 0x1951B0u) {
        ctx->pc = 0x1951B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951ACu;
        // 0x1951b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951B4u;
        goto label_1951b4;
    }
    ctx->pc = 0x1951ACu;
    {
        const bool branch_taken_0x1951ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951ACu;
        // 0x1951b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951ac) {
            ctx->pc = 0x1951D0u;
            goto label_1951d0;
        }
    }
    ctx->pc = 0x1951B4u;
label_1951b4:
    // 0x1951b4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1951b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1951b8:
    // 0x1951b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1951b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1951bc:
    // 0x1951bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1951c0:
    // 0x1951c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1951c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1951c4:
    // 0x1951c4: 0x0  nop
    ctx->pc = 0x1951c4u;
    // NOP
label_1951c8:
    // 0x1951c8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1951c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1951cc:
    // 0x1951cc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1951ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1951d0:
    // 0x1951d0: 0x3c053f33  lui         $a1, 0x3F33
    ctx->pc = 0x1951d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16179 << 16));
label_1951d4:
    // 0x1951d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1951d8:
    // 0x1951d8: 0x34a53333  ori         $a1, $a1, 0x3333
    ctx->pc = 0x1951d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
label_1951dc:
    // 0x1951dc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1951dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1951e0:
    // 0x1951e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1951e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1951e4:
    // 0x1951e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1951e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1951e8:
    // 0x1951e8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1951e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1951ec:
    // 0x1951ec: 0xc48001e8  lwc1        $f0, 0x1E8($a0)
    ctx->pc = 0x1951ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1951f0:
    // 0x1951f0: 0x0  nop
    ctx->pc = 0x1951f0u;
    // NOP
label_1951f4:
    // 0x1951f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1951f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1951f8:
    // 0x1951f8: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_1951fc:
    if (ctx->pc == 0x1951FCu) {
        ctx->pc = 0x1951FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F8u;
        // 0x1951fc: 0xe48001e8  swc1        $f0, 0x1E8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195200u;
        goto label_195200;
    }
    ctx->pc = 0x1951F8u;
    {
        const bool branch_taken_0x1951f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F8u;
        // 0x1951fc: 0xe48001e8  swc1        $f0, 0x1E8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951f8) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x195200u;
label_195200:
    // 0x195200: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x195200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_195204:
    // 0x195204: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_195208:
    if (ctx->pc == 0x195208u) {
        ctx->pc = 0x195208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195204u;
        // 0x195208: 0x30e30004  andi        $v1, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19520Cu;
        goto label_19520c;
    }
    ctx->pc = 0x195204u;
    {
        const bool branch_taken_0x195204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195204u;
        // 0x195208: 0x30e30004  andi        $v1, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195204) {
            ctx->pc = 0x19527Cu;
            goto label_19527c;
        }
    }
    ctx->pc = 0x19520Cu;
label_19520c:
    // 0x19520c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195210:
    // 0x195210: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_195214:
    if (ctx->pc == 0x195214u) {
        ctx->pc = 0x195218u;
        goto label_195218;
    }
    ctx->pc = 0x195210u;
    {
        const bool branch_taken_0x195210 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x195210) {
            ctx->pc = 0x195224u;
            goto label_195224;
        }
    }
    ctx->pc = 0x195218u;
label_195218:
    // 0x195218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19521c:
    // 0x19521c: 0x10000008  b           . + 4 + (0x8 << 2)
label_195220:
    if (ctx->pc == 0x195220u) {
        ctx->pc = 0x195220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19521Cu;
        // 0x195220: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195224u;
        goto label_195224;
    }
    ctx->pc = 0x19521Cu;
    {
        const bool branch_taken_0x19521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19521Cu;
        // 0x195220: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19521c) {
            ctx->pc = 0x195240u;
            goto label_195240;
        }
    }
    ctx->pc = 0x195224u;
label_195224:
    // 0x195224: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x195224u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_195228:
    // 0x195228: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x195228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19522c:
    // 0x19522c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19522cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_195230:
    // 0x195230: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x195230u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195234:
    // 0x195234: 0x0  nop
    ctx->pc = 0x195234u;
    // NOP
label_195238:
    // 0x195238: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x195238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19523c:
    // 0x19523c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19523cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_195240:
    // 0x195240: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x195240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_195244:
    // 0x195244: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195248:
    // 0x195248: 0xc48001ec  lwc1        $f0, 0x1EC($a0)
    ctx->pc = 0x195248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19524c:
    // 0x19524c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x19524cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_195250:
    // 0x195250: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x195250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_195254:
    // 0x195254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x195254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_195258:
    // 0x195258: 0xe48001ec  swc1        $f0, 0x1EC($a0)
    ctx->pc = 0x195258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
label_19525c:
    // 0x19525c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x19525cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_195260:
    // 0x195260: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x195260u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_195264:
    // 0x195264: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x195264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_195268:
    // 0x195268: 0x0  nop
    ctx->pc = 0x195268u;
    // NOP
label_19526c:
    // 0x19526c: 0x450000c5  bc1f        . + 4 + (0xC5 << 2)
label_195270:
    if (ctx->pc == 0x195270u) {
        ctx->pc = 0x195274u;
        goto label_195274;
    }
    ctx->pc = 0x19526Cu;
    {
        const bool branch_taken_0x19526c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19526c) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x195274u;
label_195274:
    // 0x195274: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_195278:
    if (ctx->pc == 0x195278u) {
        ctx->pc = 0x195278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195274u;
        // 0x195278: 0xe48301ec  swc1        $f3, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19527Cu;
        goto label_19527c;
    }
    ctx->pc = 0x195274u;
    {
        const bool branch_taken_0x195274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195274u;
        // 0x195278: 0xe48301ec  swc1        $f3, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195274) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x19527Cu;
label_19527c:
    // 0x19527c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_195280:
    if (ctx->pc == 0x195280u) {
        ctx->pc = 0x195284u;
        goto label_195284;
    }
    ctx->pc = 0x19527Cu;
    {
        const bool branch_taken_0x19527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19527c) {
            ctx->pc = 0x1952ACu;
            goto label_1952ac;
        }
    }
    ctx->pc = 0x195284u;
label_195284:
    // 0x195284: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x195284u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195288:
    // 0x195288: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x195288u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_19528c:
    // 0x19528c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195290:
    // 0x195290: 0xa4830252  sh          $v1, 0x252($a0)
    ctx->pc = 0x195290u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 3));
label_195294:
    // 0x195294: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x195294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_195298:
    // 0x195298: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x195298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_19529c:
    // 0x19529c: 0x142000b9  bnez        $at, . + 4 + (0xB9 << 2)
label_1952a0:
    if (ctx->pc == 0x1952A0u) {
        ctx->pc = 0x1952A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19529Cu;
        // 0x1952a0: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952A4u;
        goto label_1952a4;
    }
    ctx->pc = 0x19529Cu;
    {
        const bool branch_taken_0x19529c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19529Cu;
        // 0x1952a0: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19529c) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x1952A4u;
label_1952a4:
    // 0x1952a4: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1952a8:
    if (ctx->pc == 0x1952A8u) {
        ctx->pc = 0x1952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A4u;
        // 0x1952a8: 0xa4830252  sh          $v1, 0x252($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952ACu;
        goto label_1952ac;
    }
    ctx->pc = 0x1952A4u;
    {
        const bool branch_taken_0x1952a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A4u;
        // 0x1952a8: 0xa4830252  sh          $v1, 0x252($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952a4) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x1952ACu;
label_1952ac:
    // 0x1952ac: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x1952acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_1952b0:
    // 0x1952b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1952b4:
    if (ctx->pc == 0x1952B4u) {
        ctx->pc = 0x1952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952B0u;
        // 0x1952b4: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952B8u;
        goto label_1952b8;
    }
    ctx->pc = 0x1952B0u;
    {
        const bool branch_taken_0x1952b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952B0u;
        // 0x1952b4: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952b0) {
            ctx->pc = 0x1952E0u;
            { ctx->pc = 0x1952e0; return; }
        }
    }
    ctx->pc = 0x1952B8u;
label_1952b8:
    // 0x1952b8: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1952b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1952bc:
    // 0x1952bc: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_1952c0:
    // 0x1952c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1952c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1952c4:
    // 0x1952c4: 0xa4830220  sh          $v1, 0x220($a0)
    ctx->pc = 0x1952c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
label_1952c8:
    // 0x1952c8: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x1952c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_1952cc:
    // 0x1952cc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1952ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_1952d0:
    // 0x1952d0: 0x142000ac  bnez        $at, . + 4 + (0xAC << 2)
label_1952d4:
    if (ctx->pc == 0x1952D4u) {
        ctx->pc = 0x1952D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D0u;
        // 0x1952d4: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952D8u;
        goto label_1952d8;
    }
    ctx->pc = 0x1952D0u;
    {
        const bool branch_taken_0x1952d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D0u;
        // 0x1952d4: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952d0) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x1952D8u;
label_1952d8:
    // 0x1952d8: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1952dc:
    if (ctx->pc == 0x1952DCu) {
        ctx->pc = 0x1952DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D8u;
        // 0x1952dc: 0xa4830220  sh          $v1, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952E0u;
        { ctx->pc = 0x1952e0; return; }
    }
    ctx->pc = 0x1952D8u;
    {
        const bool branch_taken_0x1952d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D8u;
        // 0x1952dc: 0xa4830220  sh          $v1, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952d8) {
            ctx->pc = 0x195584u;
            { ctx->pc = 0x195584; return; }
        }
    }
    ctx->pc = 0x1952E0u;
    ctx->pc = 0x1952e0u;
    return;
}
