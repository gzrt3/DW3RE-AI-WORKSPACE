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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part319(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x236a78u: goto label_236a78;
        case 0x236a7cu: goto label_236a7c;
        case 0x236a80u: goto label_236a80;
        case 0x236a84u: goto label_236a84;
        case 0x236a88u: goto label_236a88;
        case 0x236a8cu: goto label_236a8c;
        case 0x236a90u: goto label_236a90;
        case 0x236a94u: goto label_236a94;
        case 0x236a98u: goto label_236a98;
        case 0x236a9cu: goto label_236a9c;
        case 0x236aa0u: goto label_236aa0;
        case 0x236aa4u: goto label_236aa4;
        case 0x236aa8u: goto label_236aa8;
        case 0x236aacu: goto label_236aac;
        case 0x236ab0u: goto label_236ab0;
        case 0x236ab4u: goto label_236ab4;
        case 0x236ab8u: goto label_236ab8;
        case 0x236abcu: goto label_236abc;
        case 0x236ac0u: goto label_236ac0;
        case 0x236ac4u: goto label_236ac4;
        case 0x236ac8u: goto label_236ac8;
        case 0x236accu: goto label_236acc;
        case 0x236ad0u: goto label_236ad0;
        case 0x236ad4u: goto label_236ad4;
        case 0x236ad8u: goto label_236ad8;
        case 0x236adcu: goto label_236adc;
        case 0x236ae0u: goto label_236ae0;
        case 0x236ae4u: goto label_236ae4;
        case 0x236ae8u: goto label_236ae8;
        case 0x236aecu: goto label_236aec;
        case 0x236af0u: goto label_236af0;
        case 0x236af4u: goto label_236af4;
        case 0x236af8u: goto label_236af8;
        case 0x236afcu: goto label_236afc;
        case 0x236b00u: goto label_236b00;
        case 0x236b04u: goto label_236b04;
        case 0x236b08u: goto label_236b08;
        case 0x236b0cu: goto label_236b0c;
        case 0x236b10u: goto label_236b10;
        case 0x236b14u: goto label_236b14;
        case 0x236b18u: goto label_236b18;
        case 0x236b1cu: goto label_236b1c;
        case 0x236b20u: goto label_236b20;
        case 0x236b24u: goto label_236b24;
        case 0x236b28u: goto label_236b28;
        case 0x236b2cu: goto label_236b2c;
        case 0x236b30u: goto label_236b30;
        case 0x236b34u: goto label_236b34;
        case 0x236b38u: goto label_236b38;
        case 0x236b3cu: goto label_236b3c;
        case 0x236b40u: goto label_236b40;
        case 0x236b44u: goto label_236b44;
        case 0x236b48u: goto label_236b48;
        case 0x236b4cu: goto label_236b4c;
        case 0x236b50u: goto label_236b50;
        case 0x236b54u: goto label_236b54;
        case 0x236b58u: goto label_236b58;
        case 0x236b5cu: goto label_236b5c;
        case 0x236b60u: goto label_236b60;
        case 0x236b64u: goto label_236b64;
        case 0x236b68u: goto label_236b68;
        case 0x236b6cu: goto label_236b6c;
        case 0x236b70u: goto label_236b70;
        case 0x236b74u: goto label_236b74;
        case 0x236b78u: goto label_236b78;
        case 0x236b7cu: goto label_236b7c;
        case 0x236b80u: goto label_236b80;
        case 0x236b84u: goto label_236b84;
        case 0x236b88u: goto label_236b88;
        case 0x236b8cu: goto label_236b8c;
        case 0x236b90u: goto label_236b90;
        case 0x236b94u: goto label_236b94;
        case 0x236b98u: goto label_236b98;
        case 0x236b9cu: goto label_236b9c;
        case 0x236ba0u: goto label_236ba0;
        case 0x236ba4u: goto label_236ba4;
        case 0x236ba8u: goto label_236ba8;
        case 0x236bacu: goto label_236bac;
        case 0x236bb0u: goto label_236bb0;
        case 0x236bb4u: goto label_236bb4;
        case 0x236bb8u: goto label_236bb8;
        case 0x236bbcu: goto label_236bbc;
        case 0x236bc0u: goto label_236bc0;
        case 0x236bc4u: goto label_236bc4;
        case 0x236bc8u: goto label_236bc8;
        case 0x236bccu: goto label_236bcc;
        case 0x236bd0u: goto label_236bd0;
        case 0x236bd4u: goto label_236bd4;
        case 0x236bd8u: goto label_236bd8;
        case 0x236bdcu: goto label_236bdc;
        case 0x236be0u: goto label_236be0;
        case 0x236be4u: goto label_236be4;
        case 0x236be8u: goto label_236be8;
        case 0x236becu: goto label_236bec;
        case 0x236bf0u: goto label_236bf0;
        case 0x236bf4u: goto label_236bf4;
        case 0x236bf8u: goto label_236bf8;
        case 0x236bfcu: goto label_236bfc;
        case 0x236c00u: goto label_236c00;
        case 0x236c04u: goto label_236c04;
        case 0x236c08u: goto label_236c08;
        case 0x236c0cu: goto label_236c0c;
        case 0x236c10u: goto label_236c10;
        case 0x236c14u: goto label_236c14;
        case 0x236c18u: goto label_236c18;
        case 0x236c1cu: goto label_236c1c;
        case 0x236c20u: goto label_236c20;
        case 0x236c24u: goto label_236c24;
        case 0x236c28u: goto label_236c28;
        case 0x236c2cu: goto label_236c2c;
        case 0x236c30u: goto label_236c30;
        case 0x236c34u: goto label_236c34;
        case 0x236c38u: goto label_236c38;
        case 0x236c3cu: goto label_236c3c;
        case 0x236c40u: goto label_236c40;
        case 0x236c44u: goto label_236c44;
        case 0x236c48u: goto label_236c48;
        case 0x236c4cu: goto label_236c4c;
        case 0x236c50u: goto label_236c50;
        case 0x236c54u: goto label_236c54;
        case 0x236c58u: goto label_236c58;
        case 0x236c5cu: goto label_236c5c;
        case 0x236c60u: goto label_236c60;
        case 0x236c64u: goto label_236c64;
        case 0x236c68u: goto label_236c68;
        case 0x236c6cu: goto label_236c6c;
        case 0x236c70u: goto label_236c70;
        case 0x236c74u: goto label_236c74;
        case 0x236c78u: goto label_236c78;
        case 0x236c7cu: goto label_236c7c;
        case 0x236c80u: goto label_236c80;
        case 0x236c84u: goto label_236c84;
        case 0x236c88u: goto label_236c88;
        case 0x236c8cu: goto label_236c8c;
        case 0x236c90u: goto label_236c90;
        case 0x236c94u: goto label_236c94;
        case 0x236c98u: goto label_236c98;
        case 0x236c9cu: goto label_236c9c;
        case 0x236ca0u: goto label_236ca0;
        case 0x236ca4u: goto label_236ca4;
        case 0x236ca8u: goto label_236ca8;
        case 0x236cacu: goto label_236cac;
        case 0x236cb0u: goto label_236cb0;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cb8u: goto label_236cb8;
        case 0x236cbcu: goto label_236cbc;
        case 0x236cc0u: goto label_236cc0;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cc8u: goto label_236cc8;
        case 0x236cccu: goto label_236ccc;
        case 0x236cd0u: goto label_236cd0;
        case 0x236cd4u: goto label_236cd4;
        case 0x236cd8u: goto label_236cd8;
        case 0x236cdcu: goto label_236cdc;
        case 0x236ce0u: goto label_236ce0;
        case 0x236ce4u: goto label_236ce4;
        case 0x236ce8u: goto label_236ce8;
        case 0x236cecu: goto label_236cec;
        case 0x236cf0u: goto label_236cf0;
        case 0x236cf4u: goto label_236cf4;
        case 0x236cf8u: goto label_236cf8;
        case 0x236cfcu: goto label_236cfc;
        case 0x236d00u: goto label_236d00;
        case 0x236d04u: goto label_236d04;
        case 0x236d08u: goto label_236d08;
        case 0x236d0cu: goto label_236d0c;
        case 0x236d10u: goto label_236d10;
        case 0x236d14u: goto label_236d14;
        case 0x236d18u: goto label_236d18;
        case 0x236d1cu: goto label_236d1c;
        case 0x236d20u: goto label_236d20;
        case 0x236d24u: goto label_236d24;
        case 0x236d28u: goto label_236d28;
        case 0x236d2cu: goto label_236d2c;
        case 0x236d30u: goto label_236d30;
        case 0x236d34u: goto label_236d34;
        case 0x236d38u: goto label_236d38;
        case 0x236d3cu: goto label_236d3c;
        case 0x236d40u: goto label_236d40;
        case 0x236d44u: goto label_236d44;
        case 0x236d48u: goto label_236d48;
        case 0x236d4cu: goto label_236d4c;
        case 0x236d50u: goto label_236d50;
        case 0x236d54u: goto label_236d54;
        case 0x236d58u: goto label_236d58;
        case 0x236d5cu: goto label_236d5c;
        case 0x236d60u: goto label_236d60;
        case 0x236d64u: goto label_236d64;
        case 0x236d68u: goto label_236d68;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d70u: goto label_236d70;
        case 0x236d74u: goto label_236d74;
        case 0x236d78u: goto label_236d78;
        case 0x236d7cu: goto label_236d7c;
        case 0x236d80u: goto label_236d80;
        case 0x236d84u: goto label_236d84;
        case 0x236d88u: goto label_236d88;
        case 0x236d8cu: goto label_236d8c;
        case 0x236d90u: goto label_236d90;
        case 0x236d94u: goto label_236d94;
        case 0x236d98u: goto label_236d98;
        case 0x236d9cu: goto label_236d9c;
        case 0x236da0u: goto label_236da0;
        case 0x236da4u: goto label_236da4;
        case 0x236da8u: goto label_236da8;
        case 0x236dacu: goto label_236dac;
        case 0x236db0u: goto label_236db0;
        case 0x236db4u: goto label_236db4;
        case 0x236db8u: goto label_236db8;
        case 0x236dbcu: goto label_236dbc;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc4u: goto label_236dc4;
        case 0x236dc8u: goto label_236dc8;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd4u: goto label_236dd4;
        case 0x236dd8u: goto label_236dd8;
        case 0x236ddcu: goto label_236ddc;
        case 0x236de0u: goto label_236de0;
        case 0x236de4u: goto label_236de4;
        case 0x236de8u: goto label_236de8;
        case 0x236decu: goto label_236dec;
        case 0x236df0u: goto label_236df0;
        case 0x236df4u: goto label_236df4;
        case 0x236df8u: goto label_236df8;
        case 0x236dfcu: goto label_236dfc;
        case 0x236e00u: goto label_236e00;
        case 0x236e04u: goto label_236e04;
        case 0x236e08u: goto label_236e08;
        case 0x236e0cu: goto label_236e0c;
        case 0x236e10u: goto label_236e10;
        case 0x236e14u: goto label_236e14;
        case 0x236e18u: goto label_236e18;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e20u: goto label_236e20;
        case 0x236e24u: goto label_236e24;
        case 0x236e28u: goto label_236e28;
        case 0x236e2cu: goto label_236e2c;
        case 0x236e30u: goto label_236e30;
        case 0x236e34u: goto label_236e34;
        case 0x236e38u: goto label_236e38;
        case 0x236e3cu: goto label_236e3c;
        case 0x236e40u: goto label_236e40;
        case 0x236e44u: goto label_236e44;
        case 0x236e48u: goto label_236e48;
        case 0x236e4cu: goto label_236e4c;
        case 0x236e50u: goto label_236e50;
        case 0x236e54u: goto label_236e54;
        case 0x236e58u: goto label_236e58;
        case 0x236e5cu: goto label_236e5c;
        case 0x236e60u: goto label_236e60;
        case 0x236e64u: goto label_236e64;
        case 0x236e68u: goto label_236e68;
        case 0x236e6cu: goto label_236e6c;
        case 0x236e70u: goto label_236e70;
        case 0x236e74u: goto label_236e74;
        case 0x236e78u: goto label_236e78;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e80u: goto label_236e80;
        case 0x236e84u: goto label_236e84;
        case 0x236e88u: goto label_236e88;
        case 0x236e8cu: goto label_236e8c;
        case 0x236e90u: goto label_236e90;
        case 0x236e94u: goto label_236e94;
        case 0x236e98u: goto label_236e98;
        case 0x236e9cu: goto label_236e9c;
        case 0x236ea0u: goto label_236ea0;
        case 0x236ea4u: goto label_236ea4;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eacu: goto label_236eac;
        case 0x236eb0u: goto label_236eb0;
        case 0x236eb4u: goto label_236eb4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236ebcu: goto label_236ebc;
        case 0x236ec0u: goto label_236ec0;
        case 0x236ec4u: goto label_236ec4;
        case 0x236ec8u: goto label_236ec8;
        case 0x236eccu: goto label_236ecc;
        case 0x236ed0u: goto label_236ed0;
        case 0x236ed4u: goto label_236ed4;
        case 0x236ed8u: goto label_236ed8;
        case 0x236edcu: goto label_236edc;
        case 0x236ee0u: goto label_236ee0;
        case 0x236ee4u: goto label_236ee4;
        case 0x236ee8u: goto label_236ee8;
        case 0x236eecu: goto label_236eec;
        case 0x236ef0u: goto label_236ef0;
        case 0x236ef4u: goto label_236ef4;
        case 0x236ef8u: goto label_236ef8;
        case 0x236efcu: goto label_236efc;
        case 0x236f00u: goto label_236f00;
        case 0x236f04u: goto label_236f04;
        case 0x236f08u: goto label_236f08;
        case 0x236f0cu: goto label_236f0c;
        case 0x236f10u: goto label_236f10;
        case 0x236f14u: goto label_236f14;
        case 0x236f18u: goto label_236f18;
        case 0x236f1cu: goto label_236f1c;
        case 0x236f20u: goto label_236f20;
        case 0x236f24u: goto label_236f24;
        case 0x236f28u: goto label_236f28;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f30u: goto label_236f30;
        case 0x236f34u: goto label_236f34;
        case 0x236f38u: goto label_236f38;
        case 0x236f3cu: goto label_236f3c;
        case 0x236f40u: goto label_236f40;
        case 0x236f44u: goto label_236f44;
        case 0x236f48u: goto label_236f48;
        case 0x236f4cu: goto label_236f4c;
        case 0x236f50u: goto label_236f50;
        case 0x236f54u: goto label_236f54;
        case 0x236f58u: goto label_236f58;
        case 0x236f5cu: goto label_236f5c;
        case 0x236f60u: goto label_236f60;
        case 0x236f64u: goto label_236f64;
        case 0x236f68u: goto label_236f68;
        case 0x236f6cu: goto label_236f6c;
        case 0x236f70u: goto label_236f70;
        case 0x236f74u: goto label_236f74;
        case 0x236f78u: goto label_236f78;
        case 0x236f7cu: goto label_236f7c;
        case 0x236f80u: goto label_236f80;
        case 0x236f84u: goto label_236f84;
        case 0x236f88u: goto label_236f88;
        case 0x236f8cu: goto label_236f8c;
        case 0x236f90u: goto label_236f90;
        case 0x236f94u: goto label_236f94;
        case 0x236f98u: goto label_236f98;
        case 0x236f9cu: goto label_236f9c;
        case 0x236fa0u: goto label_236fa0;
        case 0x236fa4u: goto label_236fa4;
        case 0x236fa8u: goto label_236fa8;
        case 0x236facu: goto label_236fac;
        case 0x236fb0u: goto label_236fb0;
        case 0x236fb4u: goto label_236fb4;
        case 0x236fb8u: goto label_236fb8;
        case 0x236fbcu: goto label_236fbc;
        case 0x236fc0u: goto label_236fc0;
        case 0x236fc4u: goto label_236fc4;
        case 0x236fc8u: goto label_236fc8;
        case 0x236fccu: goto label_236fcc;
        case 0x236fd0u: goto label_236fd0;
        case 0x236fd4u: goto label_236fd4;
        case 0x236fd8u: goto label_236fd8;
        case 0x236fdcu: goto label_236fdc;
        case 0x236fe0u: goto label_236fe0;
        case 0x236fe4u: goto label_236fe4;
        case 0x236fe8u: goto label_236fe8;
        case 0x236fecu: goto label_236fec;
        case 0x236ff0u: goto label_236ff0;
        case 0x236ff4u: goto label_236ff4;
        case 0x236ff8u: goto label_236ff8;
        case 0x236ffcu: goto label_236ffc;
        case 0x237000u: goto label_237000;
        case 0x237004u: goto label_237004;
        case 0x237008u: goto label_237008;
        case 0x23700cu: goto label_23700c;
        case 0x237010u: goto label_237010;
        case 0x237014u: goto label_237014;
        case 0x237018u: goto label_237018;
        case 0x23701cu: goto label_23701c;
        case 0x237020u: goto label_237020;
        case 0x237024u: goto label_237024;
        case 0x237028u: goto label_237028;
        case 0x23702cu: goto label_23702c;
        case 0x237030u: goto label_237030;
        case 0x237034u: goto label_237034;
        case 0x237038u: goto label_237038;
        case 0x23703cu: goto label_23703c;
        case 0x237040u: goto label_237040;
        case 0x237044u: goto label_237044;
        case 0x237048u: goto label_237048;
        case 0x23704cu: goto label_23704c;
        case 0x237050u: goto label_237050;
        case 0x237054u: goto label_237054;
        case 0x237058u: goto label_237058;
        case 0x23705cu: goto label_23705c;
        case 0x237060u: goto label_237060;
        case 0x237064u: goto label_237064;
        case 0x237068u: goto label_237068;
        case 0x23706cu: goto label_23706c;
        case 0x237070u: goto label_237070;
        case 0x237074u: goto label_237074;
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        case 0x2370c8u: goto label_2370c8;
        case 0x2370ccu: goto label_2370cc;
        case 0x2370d0u: goto label_2370d0;
        case 0x2370d4u: goto label_2370d4;
        case 0x2370d8u: goto label_2370d8;
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370e4u: goto label_2370e4;
        case 0x2370e8u: goto label_2370e8;
        case 0x2370ecu: goto label_2370ec;
        case 0x2370f0u: goto label_2370f0;
        case 0x2370f4u: goto label_2370f4;
        case 0x2370f8u: goto label_2370f8;
        case 0x2370fcu: goto label_2370fc;
        case 0x237100u: goto label_237100;
        case 0x237104u: goto label_237104;
        case 0x237108u: goto label_237108;
        case 0x23710cu: goto label_23710c;
        case 0x237110u: goto label_237110;
        case 0x237114u: goto label_237114;
        case 0x237118u: goto label_237118;
        case 0x23711cu: goto label_23711c;
        case 0x237120u: goto label_237120;
        case 0x237124u: goto label_237124;
        case 0x237128u: goto label_237128;
        case 0x23712cu: goto label_23712c;
        case 0x237130u: goto label_237130;
        case 0x237134u: goto label_237134;
        case 0x237138u: goto label_237138;
        case 0x23713cu: goto label_23713c;
        case 0x237140u: goto label_237140;
        case 0x237144u: goto label_237144;
        case 0x237148u: goto label_237148;
        case 0x23714cu: goto label_23714c;
        case 0x237150u: goto label_237150;
        case 0x237154u: goto label_237154;
        case 0x237158u: goto label_237158;
        case 0x23715cu: goto label_23715c;
        case 0x237160u: goto label_237160;
        case 0x237164u: goto label_237164;
        case 0x237168u: goto label_237168;
        case 0x23716cu: goto label_23716c;
        case 0x237170u: goto label_237170;
        case 0x237174u: goto label_237174;
        case 0x237178u: goto label_237178;
        case 0x23717cu: goto label_23717c;
        case 0x237180u: goto label_237180;
        case 0x237184u: goto label_237184;
        case 0x237188u: goto label_237188;
        case 0x23718cu: goto label_23718c;
        case 0x237190u: goto label_237190;
        case 0x237194u: goto label_237194;
        case 0x237198u: goto label_237198;
        case 0x23719cu: goto label_23719c;
        case 0x2371a0u: goto label_2371a0;
        case 0x2371a4u: goto label_2371a4;
        case 0x2371a8u: goto label_2371a8;
        case 0x2371acu: goto label_2371ac;
        case 0x2371b0u: goto label_2371b0;
        case 0x2371b4u: goto label_2371b4;
        case 0x2371b8u: goto label_2371b8;
        case 0x2371bcu: goto label_2371bc;
        case 0x2371c0u: goto label_2371c0;
        case 0x2371c4u: goto label_2371c4;
        case 0x2371c8u: goto label_2371c8;
        case 0x2371ccu: goto label_2371cc;
        case 0x2371d0u: goto label_2371d0;
        case 0x2371d4u: goto label_2371d4;
        case 0x2371d8u: goto label_2371d8;
        case 0x2371dcu: goto label_2371dc;
        case 0x2371e0u: goto label_2371e0;
        case 0x2371e4u: goto label_2371e4;
        case 0x2371e8u: goto label_2371e8;
        case 0x2371ecu: goto label_2371ec;
        case 0x2371f0u: goto label_2371f0;
        case 0x2371f4u: goto label_2371f4;
        case 0x2371f8u: goto label_2371f8;
        case 0x2371fcu: goto label_2371fc;
        case 0x237200u: goto label_237200;
        case 0x237204u: goto label_237204;
        case 0x237208u: goto label_237208;
        case 0x23720cu: goto label_23720c;
        case 0x237210u: goto label_237210;
        case 0x237214u: goto label_237214;
        case 0x237218u: goto label_237218;
        case 0x23721cu: goto label_23721c;
        case 0x237220u: goto label_237220;
        case 0x237224u: goto label_237224;
        case 0x237228u: goto label_237228;
        case 0x23722cu: goto label_23722c;
        case 0x237230u: goto label_237230;
        case 0x237234u: goto label_237234;
        case 0x237238u: goto label_237238;
        case 0x23723cu: goto label_23723c;
        case 0x237240u: goto label_237240;
        case 0x237244u: goto label_237244;
        default: return;
    }

label_236a78:
    // 0x236a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236a7c:
    // 0x236a7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236a80:
    // 0x236a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236a84:
    // 0x236a84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_236a88:
    // 0x236a88: 0xc08dbf8  jal         func_236FE0
label_236a8c:
    if (ctx->pc == 0x236A8Cu) {
        ctx->pc = 0x236A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A88u;
        // 0x236a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A90u;
        goto label_236a90;
    }
    ctx->pc = 0x236A88u;
    SET_GPR_U32(ctx, 31, 0x236A90u);
    ctx->pc = 0x236A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A88u;
    // 0x236a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236A90u;
label_236a90:
    // 0x236a90: 0xc08d736  jal         func_235CD8
label_236a94:
    if (ctx->pc == 0x236A94u) {
        ctx->pc = 0x236A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A90u;
        // 0x236a94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A98u;
        goto label_236a98;
    }
    ctx->pc = 0x236A90u;
    SET_GPR_U32(ctx, 31, 0x236A98u);
    ctx->pc = 0x236A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A90u;
    // 0x236a94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x236A98u;
label_236a98:
    // 0x236a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236a9c:
    // 0x236a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236aa0:
    // 0x236aa0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236aa4:
    // 0x236aa4: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236aa8:
    // 0x236aa8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x236aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_236aac:
    // 0x236aac: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_236ab0:
    if (ctx->pc == 0x236AB0u) {
        ctx->pc = 0x236AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AACu;
        // 0x236ab0: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236AB4u;
        goto label_236ab4;
    }
    ctx->pc = 0x236AACu;
    {
        const bool branch_taken_0x236aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AACu;
        // 0x236ab0: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aac) {
            ctx->pc = 0x236AE4u;
            goto label_236ae4;
        }
    }
    ctx->pc = 0x236AB4u;
label_236ab4:
    // 0x236ab4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x236ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_236ab8:
    // 0x236ab8: 0xc08dc08  jal         func_237020
label_236abc:
    if (ctx->pc == 0x236ABCu) {
        ctx->pc = 0x236ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AB8u;
        // 0x236abc: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236AC0u;
        goto label_236ac0;
    }
    ctx->pc = 0x236AB8u;
    SET_GPR_U32(ctx, 31, 0x236AC0u);
    ctx->pc = 0x236ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AB8u;
    // 0x236abc: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    goto label_237020;
    ctx->pc = 0x236AC0u;
label_236ac0:
    // 0x236ac0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_236ac4:
    // 0x236ac4: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x236ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
label_236ac8:
    // 0x236ac8: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x236ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_236acc:
    // 0x236acc: 0x34a500a2  ori         $a1, $a1, 0xA2
    ctx->pc = 0x236accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)162);
label_236ad0:
    // 0x236ad0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_236ad4:
    if (ctx->pc == 0x236AD4u) {
        ctx->pc = 0x236AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AD0u;
        // 0x236ad4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236AD8u;
        goto label_236ad8;
    }
    ctx->pc = 0x236AD0u;
    {
        const bool branch_taken_0x236ad0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AD0u;
        // 0x236ad4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ad0) {
            ctx->pc = 0x236AE4u;
            goto label_236ae4;
        }
    }
    ctx->pc = 0x236AD8u;
label_236ad8:
    // 0x236ad8: 0xc08d74c  jal         func_235D30
label_236adc:
    if (ctx->pc == 0x236ADCu) {
        ctx->pc = 0x236AE0u;
        goto label_236ae0;
    }
    ctx->pc = 0x236AD8u;
    SET_GPR_U32(ctx, 31, 0x236AE0u);
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236AE0u;
label_236ae0:
    // 0x236ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ae4:
    // 0x236ae4: 0xc069210  jal         func_1A4840
label_236ae8:
    if (ctx->pc == 0x236AE8u) {
        ctx->pc = 0x236AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AE4u;
        // 0x236ae8: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236AECu;
        goto label_236aec;
    }
    ctx->pc = 0x236AE4u;
    SET_GPR_U32(ctx, 31, 0x236AECu);
    ctx->pc = 0x236AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AE4u;
    // 0x236ae8: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236AECu;
label_236aec:
    // 0x236aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236af0:
    // 0x236af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236af4:
    // 0x236af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236af8:
    // 0x236af8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236afc:
    // 0x236afc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236b00:
    // 0x236b00: 0x3e00008  jr          $ra
label_236b04:
    if (ctx->pc == 0x236B04u) {
        ctx->pc = 0x236B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B00u;
        // 0x236b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B08u;
        goto label_236b08;
    }
    ctx->pc = 0x236B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B00u;
        // 0x236b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B08u;
label_236b08:
    // 0x236b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_236b0c:
    // 0x236b0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_236b10:
    // 0x236b10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x236b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236b14:
    // 0x236b14: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236b18:
    // 0x236b18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236b1c:
    // 0x236b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236b20:
    // 0x236b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236b24:
    // 0x236b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236b28:
    // 0x236b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236b2c:
    // 0x236b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236b30:
    // 0x236b30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x236b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236b34:
    // 0x236b34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x236b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_236b38:
    // 0x236b38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_236b3c:
    // 0x236b3c: 0xc08dbf8  jal         func_236FE0
label_236b40:
    if (ctx->pc == 0x236B40u) {
        ctx->pc = 0x236B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B3Cu;
        // 0x236b40: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B44u;
        goto label_236b44;
    }
    ctx->pc = 0x236B3Cu;
    SET_GPR_U32(ctx, 31, 0x236B44u);
    ctx->pc = 0x236B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B3Cu;
    // 0x236b40: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236B44u;
label_236b44:
    // 0x236b44: 0xc08d736  jal         func_235CD8
label_236b48:
    if (ctx->pc == 0x236B48u) {
        ctx->pc = 0x236B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B44u;
        // 0x236b48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B4Cu;
        goto label_236b4c;
    }
    ctx->pc = 0x236B44u;
    SET_GPR_U32(ctx, 31, 0x236B4Cu);
    ctx->pc = 0x236B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B44u;
    // 0x236b48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x236B4Cu;
label_236b4c:
    // 0x236b4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x236b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236b50:
    // 0x236b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236b54:
    // 0x236b54: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236b58:
    // 0x236b58: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_236b5c:
    if (ctx->pc == 0x236B5Cu) {
        ctx->pc = 0x236B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B58u;
        // 0x236b5c: 0x2451b1c0  addiu       $s1, $v0, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B60u;
        goto label_236b60;
    }
    ctx->pc = 0x236B58u;
    {
        const bool branch_taken_0x236b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B58u;
        // 0x236b5c: 0x2451b1c0  addiu       $s1, $v0, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b58) {
            ctx->pc = 0x236B8Cu;
            goto label_236b8c;
        }
    }
    ctx->pc = 0x236B60u;
label_236b60:
    // 0x236b60: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x236b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_236b64:
    // 0x236b64: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x236b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_236b68:
    // 0x236b68: 0xc0692a8  jal         func_1A4AA0
label_236b6c:
    if (ctx->pc == 0x236B6Cu) {
        ctx->pc = 0x236B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B68u;
        // 0x236b6c: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B70u;
        goto label_236b70;
    }
    ctx->pc = 0x236B68u;
    SET_GPR_U32(ctx, 31, 0x236B70u);
    ctx->pc = 0x236B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B68u;
    // 0x236b6c: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x236B70u;
label_236b70:
    // 0x236b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236b74:
    // 0x236b74: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x236b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_236b78:
    // 0x236b78: 0xc08d74c  jal         func_235D30
label_236b7c:
    if (ctx->pc == 0x236B7Cu) {
        ctx->pc = 0x236B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B78u;
        // 0x236b7c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B80u;
        goto label_236b80;
    }
    ctx->pc = 0x236B78u;
    SET_GPR_U32(ctx, 31, 0x236B80u);
    ctx->pc = 0x236B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B78u;
    // 0x236b7c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236B80u;
label_236b80:
    // 0x236b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236b84:
    // 0x236b84: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_236b88:
    // 0x236b88: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x236b88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_236b8c:
    // 0x236b8c: 0xc069210  jal         func_1A4840
label_236b90:
    if (ctx->pc == 0x236B90u) {
        ctx->pc = 0x236B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B8Cu;
        // 0x236b90: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236B94u;
        goto label_236b94;
    }
    ctx->pc = 0x236B8Cu;
    SET_GPR_U32(ctx, 31, 0x236B94u);
    ctx->pc = 0x236B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B8Cu;
    // 0x236b90: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236B94u;
label_236b94:
    // 0x236b94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236b98:
    // 0x236b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236b9c:
    // 0x236b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236ba0:
    // 0x236ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236ba4:
    // 0x236ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236ba8:
    // 0x236ba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x236ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236bac:
    // 0x236bac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236bacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_236bb0:
    // 0x236bb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236bb4:
    // 0x236bb4: 0x3e00008  jr          $ra
label_236bb8:
    if (ctx->pc == 0x236BB8u) {
        ctx->pc = 0x236BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BB4u;
        // 0x236bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236BBCu;
        goto label_236bbc;
    }
    ctx->pc = 0x236BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BB4u;
        // 0x236bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BBCu;
label_236bbc:
    // 0x236bbc: 0x0  nop
    ctx->pc = 0x236bbcu;
    // NOP
label_236bc0:
    // 0x236bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236bc4:
    // 0x236bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236bc8:
    // 0x236bc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236bcc:
    // 0x236bcc: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_236bd0:
    // 0x236bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236bd4:
    // 0x236bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236bd8:
    // 0x236bd8: 0xc08dbf8  jal         func_236FE0
label_236bdc:
    if (ctx->pc == 0x236BDCu) {
        ctx->pc = 0x236BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BD8u;
        // 0x236bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236BE0u;
        goto label_236be0;
    }
    ctx->pc = 0x236BD8u;
    SET_GPR_U32(ctx, 31, 0x236BE0u);
    ctx->pc = 0x236BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236BD8u;
    // 0x236bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236BE0u;
label_236be0:
    // 0x236be0: 0xc08d736  jal         func_235CD8
label_236be4:
    if (ctx->pc == 0x236BE4u) {
        ctx->pc = 0x236BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BE0u;
        // 0x236be4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236BE8u;
        goto label_236be8;
    }
    ctx->pc = 0x236BE0u;
    SET_GPR_U32(ctx, 31, 0x236BE8u);
    ctx->pc = 0x236BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236BE0u;
    // 0x236be4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    { ctx->pc = 0x235cd8; return; }
    ctx->pc = 0x236BE8u;
label_236be8:
    // 0x236be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236bec:
    // 0x236bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236bf0:
    // 0x236bf0: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x236bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_236bf4:
    // 0x236bf4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_236bf8:
    if (ctx->pc == 0x236BF8u) {
        ctx->pc = 0x236BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BF4u;
        // 0x236bf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236BFCu;
        goto label_236bfc;
    }
    ctx->pc = 0x236BF4u;
    {
        const bool branch_taken_0x236bf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BF4u;
        // 0x236bf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bf4) {
            ctx->pc = 0x236C0Cu;
            goto label_236c0c;
        }
    }
    ctx->pc = 0x236BFCu;
label_236bfc:
    // 0x236bfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236c00:
    // 0x236c00: 0xc08d74c  jal         func_235D30
label_236c04:
    if (ctx->pc == 0x236C04u) {
        ctx->pc = 0x236C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C00u;
        // 0x236c04: 0xac51b1c0  sw          $s1, -0x4E40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C08u;
        goto label_236c08;
    }
    ctx->pc = 0x236C00u;
    SET_GPR_U32(ctx, 31, 0x236C08u);
    ctx->pc = 0x236C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C00u;
    // 0x236c04: 0xac51b1c0  sw          $s1, -0x4E40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    { ctx->pc = 0x235d30; return; }
    ctx->pc = 0x236C08u;
label_236c08:
    // 0x236c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236c0c:
    // 0x236c0c: 0xc069210  jal         func_1A4840
label_236c10:
    if (ctx->pc == 0x236C10u) {
        ctx->pc = 0x236C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C0Cu;
        // 0x236c10: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C14u;
        goto label_236c14;
    }
    ctx->pc = 0x236C0Cu;
    SET_GPR_U32(ctx, 31, 0x236C14u);
    ctx->pc = 0x236C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C0Cu;
    // 0x236c10: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236C14u;
label_236c14:
    // 0x236c14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236c18:
    // 0x236c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236c1c:
    // 0x236c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236c20:
    // 0x236c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236c24:
    // 0x236c24: 0x3e00008  jr          $ra
label_236c28:
    if (ctx->pc == 0x236C28u) {
        ctx->pc = 0x236C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C24u;
        // 0x236c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C2Cu;
        goto label_236c2c;
    }
    ctx->pc = 0x236C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C24u;
        // 0x236c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C2Cu;
label_236c2c:
    // 0x236c2c: 0x0  nop
    ctx->pc = 0x236c2cu;
    // NOP
label_236c30:
    // 0x236c30: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x236c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_236c34:
    // 0x236c34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236c38:
    // 0x236c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236c3c:
    // 0x236c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236c40:
    // 0x236c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236c44:
    // 0x236c44: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_236c48:
    // 0x236c48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_236c4c:
    if (ctx->pc == 0x236C4Cu) {
        ctx->pc = 0x236C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C48u;
        // 0x236c4c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C50u;
        goto label_236c50;
    }
    ctx->pc = 0x236C48u;
    {
        const bool branch_taken_0x236c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C48u;
        // 0x236c4c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c48) {
            ctx->pc = 0x236C60u;
            goto label_236c60;
        }
    }
    ctx->pc = 0x236C50u;
label_236c50:
    // 0x236c50: 0x10000007  b           . + 4 + (0x7 << 2)
label_236c54:
    if (ctx->pc == 0x236C54u) {
        ctx->pc = 0x236C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C50u;
        // 0x236c54: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C58u;
        goto label_236c58;
    }
    ctx->pc = 0x236C50u;
    {
        const bool branch_taken_0x236c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C50u;
        // 0x236c54: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c50) {
            ctx->pc = 0x236C70u;
            goto label_236c70;
        }
    }
    ctx->pc = 0x236C58u;
label_236c58:
    // 0x236c58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_236c5c:
    if (ctx->pc == 0x236C5Cu) {
        ctx->pc = 0x236C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C58u;
        // 0x236c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C60u;
        goto label_236c60;
    }
    ctx->pc = 0x236C58u;
    {
        const bool branch_taken_0x236c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C58u;
        // 0x236c5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c58) {
            ctx->pc = 0x236C70u;
            goto label_236c70;
        }
    }
    ctx->pc = 0x236C60u;
label_236c60:
    // 0x236c60: 0xc069ea6  jal         func_1A7A98
label_236c64:
    if (ctx->pc == 0x236C64u) {
        ctx->pc = 0x236C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C60u;
        // 0x236c64: 0x2624b2e8  addiu       $a0, $s1, -0x4D18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C68u;
        goto label_236c68;
    }
    ctx->pc = 0x236C60u;
    SET_GPR_U32(ctx, 31, 0x236C68u);
    ctx->pc = 0x236C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C60u;
    // 0x236c64: 0x2624b2e8  addiu       $a0, $s1, -0x4D18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x236C68u;
label_236c68:
    // 0x236c68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_236c6c:
    if (ctx->pc == 0x236C6Cu) {
        ctx->pc = 0x236C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C68u;
        // 0x236c6c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C70u;
        goto label_236c70;
    }
    ctx->pc = 0x236C68u;
    {
        const bool branch_taken_0x236c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C68u;
        // 0x236c6c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c68) {
            ctx->pc = 0x236C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236c58;
        }
    }
    ctx->pc = 0x236C70u;
label_236c70:
    // 0x236c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236c74:
    // 0x236c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236c78:
    // 0x236c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236c7c:
    // 0x236c7c: 0x3e00008  jr          $ra
label_236c80:
    if (ctx->pc == 0x236C80u) {
        ctx->pc = 0x236C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C7Cu;
        // 0x236c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236C84u;
        goto label_236c84;
    }
    ctx->pc = 0x236C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C7Cu;
        // 0x236c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C84u;
label_236c84:
    // 0x236c84: 0x0  nop
    ctx->pc = 0x236c84u;
    // NOP
label_236c88:
    // 0x236c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_236c8c:
    // 0x236c8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x236c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_236c90:
    // 0x236c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236c94:
    // 0x236c94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x236c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_236c98:
    // 0x236c98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236c9c:
    // 0x236c9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_236ca0:
    // 0x236ca0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x236ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236ca4:
    // 0x236ca4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x236ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_236ca8:
    // 0x236ca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_236cac:
    // 0x236cac: 0xc08db0c  jal         func_236C30
label_236cb0:
    if (ctx->pc == 0x236CB0u) {
        ctx->pc = 0x236CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CACu;
        // 0x236cb0: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CB4u;
        goto label_236cb4;
    }
    ctx->pc = 0x236CACu;
    SET_GPR_U32(ctx, 31, 0x236CB4u);
    ctx->pc = 0x236CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CACu;
    // 0x236cb0: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    goto label_236c30;
    ctx->pc = 0x236CB4u;
label_236cb4:
    // 0x236cb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236cb8:
    // 0x236cb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236cbc:
    // 0x236cbc: 0x2450b280  addiu       $s0, $v0, -0x4D80
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
label_236cc0:
    // 0x236cc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_236cc4:
    // 0x236cc4: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x236cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_236cc8:
    // 0x236cc8: 0x2484b2e8  addiu       $a0, $a0, -0x4D18
    ctx->pc = 0x236cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947560));
label_236ccc:
    // 0x236ccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236cd0:
    // 0x236cd0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_236cd4:
    // 0x236cd4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x236cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236cd8:
    // 0x236cd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x236cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236cdc:
    // 0x236cdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x236cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236ce0:
    // 0x236ce0: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_236ce4:
    // 0x236ce4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_236ce8:
    if (ctx->pc == 0x236CE8u) {
        ctx->pc = 0x236CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CE4u;
        // 0x236ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CECu;
        goto label_236cec;
    }
    ctx->pc = 0x236CE4u;
    {
        const bool branch_taken_0x236ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CE4u;
        // 0x236ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ce4) {
            ctx->pc = 0x236D1Cu;
            goto label_236d1c;
        }
    }
    ctx->pc = 0x236CECu;
label_236cec:
    // 0x236cec: 0xc069e2a  jal         func_1A78A8
label_236cf0:
    if (ctx->pc == 0x236CF0u) {
        ctx->pc = 0x236CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CECu;
        // 0x236cf0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CF4u;
        goto label_236cf4;
    }
    ctx->pc = 0x236CECu;
    SET_GPR_U32(ctx, 31, 0x236CF4u);
    ctx->pc = 0x236CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CECu;
    // 0x236cf0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x236CF4u;
label_236cf4:
    // 0x236cf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236cf8:
    // 0x236cf8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_236cfc:
    if (ctx->pc == 0x236CFCu) {
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D00u;
        goto label_236d00;
    }
    ctx->pc = 0x236CF8u;
    {
        const bool branch_taken_0x236cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cf8) {
            ctx->pc = 0x236D10u;
            goto label_236d10;
        }
    }
    ctx->pc = 0x236D00u;
label_236d00:
    // 0x236d00: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
label_236d04:
    if (ctx->pc == 0x236D04u) {
        ctx->pc = 0x236D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D00u;
        // 0x236d04: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D08u;
        goto label_236d08;
    }
    ctx->pc = 0x236D00u;
    {
        const bool branch_taken_0x236d00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x236d00) {
            ctx->pc = 0x236D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D00u;
            // 0x236d04: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D1Cu;
            goto label_236d1c;
        }
    }
    ctx->pc = 0x236D08u;
label_236d08:
    // 0x236d08: 0x10000005  b           . + 4 + (0x5 << 2)
label_236d0c:
    if (ctx->pc == 0x236D0Cu) {
        ctx->pc = 0x236D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D08u;
        // 0x236d0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D10u;
        goto label_236d10;
    }
    ctx->pc = 0x236D08u;
    {
        const bool branch_taken_0x236d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D08u;
        // 0x236d0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d08) {
            ctx->pc = 0x236D20u;
            goto label_236d20;
        }
    }
    ctx->pc = 0x236D10u;
label_236d10:
    // 0x236d10: 0x2402ff9d  addiu       $v0, $zero, -0x63
    ctx->pc = 0x236d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_236d14:
    // 0x236d14: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x236d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_236d18:
    // 0x236d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x236d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_236d1c:
    // 0x236d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236d20:
    // 0x236d20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_236d24:
    // 0x236d24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236d28:
    // 0x236d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236d2c:
    // 0x236d2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x236d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_236d30:
    // 0x236d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236d34:
    // 0x236d34: 0x3e00008  jr          $ra
label_236d38:
    if (ctx->pc == 0x236D38u) {
        ctx->pc = 0x236D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D34u;
        // 0x236d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D3Cu;
        goto label_236d3c;
    }
    ctx->pc = 0x236D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D34u;
        // 0x236d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D3Cu;
label_236d3c:
    // 0x236d3c: 0x0  nop
    ctx->pc = 0x236d3cu;
    // NOP
label_236d40:
    // 0x236d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236d44:
    // 0x236d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236d48:
    // 0x236d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236d4c:
    // 0x236d4c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236d50:
    // 0x236d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d54:
    // 0x236d54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236d58:
    // 0x236d58: 0xc08dbf8  jal         func_236FE0
label_236d5c:
    if (ctx->pc == 0x236D5Cu) {
        ctx->pc = 0x236D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D58u;
        // 0x236d5c: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D60u;
        goto label_236d60;
    }
    ctx->pc = 0x236D58u;
    SET_GPR_U32(ctx, 31, 0x236D60u);
    ctx->pc = 0x236D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D58u;
    // 0x236d5c: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236D60u;
label_236d60:
    // 0x236d60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_236d64:
    if (ctx->pc == 0x236D64u) {
        ctx->pc = 0x236D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D60u;
        // 0x236d64: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D68u;
        goto label_236d68;
    }
    ctx->pc = 0x236D60u;
    {
        const bool branch_taken_0x236d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D60u;
        // 0x236d64: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d60) {
            ctx->pc = 0x236D8Cu;
            goto label_236d8c;
        }
    }
    ctx->pc = 0x236D68u;
label_236d68:
    // 0x236d68: 0xc08db0c  jal         func_236C30
label_236d6c:
    if (ctx->pc == 0x236D6Cu) {
        ctx->pc = 0x236D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D68u;
        // 0x236d6c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D70u;
        goto label_236d70;
    }
    ctx->pc = 0x236D68u;
    SET_GPR_U32(ctx, 31, 0x236D70u);
    ctx->pc = 0x236D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D68u;
    // 0x236d6c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    goto label_236c30;
    ctx->pc = 0x236D70u;
label_236d70:
    // 0x236d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d74:
    // 0x236d74: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_236d78:
    if (ctx->pc == 0x236D78u) {
        ctx->pc = 0x236D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D74u;
        // 0x236d78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D7Cu;
        goto label_236d7c;
    }
    ctx->pc = 0x236D74u;
    {
        const bool branch_taken_0x236d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D74u;
        // 0x236d78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d74) {
            ctx->pc = 0x236D80u;
            goto label_236d80;
        }
    }
    ctx->pc = 0x236D7Cu;
label_236d7c:
    // 0x236d7c: 0x8c50b280  lw          $s0, -0x4D80($v0)
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947456)));
label_236d80:
    // 0x236d80: 0xc069210  jal         func_1A4840
label_236d84:
    if (ctx->pc == 0x236D84u) {
        ctx->pc = 0x236D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D80u;
        // 0x236d84: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D88u;
        goto label_236d88;
    }
    ctx->pc = 0x236D80u;
    SET_GPR_U32(ctx, 31, 0x236D88u);
    ctx->pc = 0x236D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D80u;
    // 0x236d84: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236D88u;
label_236d88:
    // 0x236d88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d8c:
    // 0x236d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236d90:
    // 0x236d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236d94:
    // 0x236d94: 0x3e00008  jr          $ra
label_236d98:
    if (ctx->pc == 0x236D98u) {
        ctx->pc = 0x236D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D94u;
        // 0x236d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D9Cu;
        goto label_236d9c;
    }
    ctx->pc = 0x236D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D94u;
        // 0x236d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D9Cu;
label_236d9c:
    // 0x236d9c: 0x0  nop
    ctx->pc = 0x236d9cu;
    // NOP
label_236da0:
    // 0x236da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236da4:
    // 0x236da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236da8:
    // 0x236da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236dac:
    // 0x236dac: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236db0:
    // 0x236db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236db4:
    // 0x236db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x236db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236db8:
    // 0x236db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236dbc:
    // 0x236dbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_236dc0:
    // 0x236dc0: 0xc08dbf8  jal         func_236FE0
label_236dc4:
    if (ctx->pc == 0x236DC4u) {
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC0u;
        // 0x236dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DC8u;
        goto label_236dc8;
    }
    ctx->pc = 0x236DC0u;
    SET_GPR_U32(ctx, 31, 0x236DC8u);
    ctx->pc = 0x236DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC0u;
    // 0x236dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236DC8u;
label_236dc8:
    // 0x236dc8: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_236dcc:
    // 0x236dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236dd0:
    // 0x236dd0: 0xc08db22  jal         func_236C88
label_236dd4:
    if (ctx->pc == 0x236DD4u) {
        ctx->pc = 0x236DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DD0u;
        // 0x236dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DD8u;
        goto label_236dd8;
    }
    ctx->pc = 0x236DD0u;
    SET_GPR_U32(ctx, 31, 0x236DD8u);
    ctx->pc = 0x236DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DD0u;
    // 0x236dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    goto label_236c88;
    ctx->pc = 0x236DD8u;
label_236dd8:
    // 0x236dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ddc:
    // 0x236ddc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236de0:
    // 0x236de0: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236de4:
    // 0x236de4: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_236de8:
    // 0x236de8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x236de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_236dec:
    // 0x236dec: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x236decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_236df0:
    // 0x236df0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x236df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_236df4:
    // 0x236df4: 0xc069210  jal         func_1A4840
label_236df8:
    if (ctx->pc == 0x236DF8u) {
        ctx->pc = 0x236DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DF4u;
        // 0x236df8: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DFCu;
        goto label_236dfc;
    }
    ctx->pc = 0x236DF4u;
    SET_GPR_U32(ctx, 31, 0x236DFCu);
    ctx->pc = 0x236DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DF4u;
    // 0x236df8: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236DFCu;
label_236dfc:
    // 0x236dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236e00:
    // 0x236e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236e04:
    // 0x236e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236e08:
    // 0x236e08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236e0c:
    // 0x236e0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236e10:
    // 0x236e10: 0x3e00008  jr          $ra
label_236e14:
    if (ctx->pc == 0x236E14u) {
        ctx->pc = 0x236E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E10u;
        // 0x236e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E18u;
        goto label_236e18;
    }
    ctx->pc = 0x236E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E10u;
        // 0x236e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E18u;
label_236e18:
    // 0x236e18: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236e1c:
    // 0x236e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236e20:
    // 0x236e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236e24:
    // 0x236e24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236e28:
    // 0x236e28: 0xc08dbf8  jal         func_236FE0
label_236e2c:
    if (ctx->pc == 0x236E2Cu) {
        ctx->pc = 0x236E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E28u;
        // 0x236e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E30u;
        goto label_236e30;
    }
    ctx->pc = 0x236E28u;
    SET_GPR_U32(ctx, 31, 0x236E30u);
    ctx->pc = 0x236E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E28u;
    // 0x236e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236E30u;
label_236e30:
    // 0x236e30: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_236e34:
    // 0x236e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236e38:
    // 0x236e38: 0xc08db22  jal         func_236C88
label_236e3c:
    if (ctx->pc == 0x236E3Cu) {
        ctx->pc = 0x236E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E38u;
        // 0x236e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E40u;
        goto label_236e40;
    }
    ctx->pc = 0x236E38u;
    SET_GPR_U32(ctx, 31, 0x236E40u);
    ctx->pc = 0x236E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E38u;
    // 0x236e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    goto label_236c88;
    ctx->pc = 0x236E40u;
label_236e40:
    // 0x236e40: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236e44:
    // 0x236e44: 0xc069210  jal         func_1A4840
label_236e48:
    if (ctx->pc == 0x236E48u) {
        ctx->pc = 0x236E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E44u;
        // 0x236e48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E4Cu;
        goto label_236e4c;
    }
    ctx->pc = 0x236E44u;
    SET_GPR_U32(ctx, 31, 0x236E4Cu);
    ctx->pc = 0x236E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E44u;
    // 0x236e48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236E4Cu;
label_236e4c:
    // 0x236e4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236e50:
    // 0x236e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236e54:
    // 0x236e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236e58:
    // 0x236e58: 0x3e00008  jr          $ra
label_236e5c:
    if (ctx->pc == 0x236E5Cu) {
        ctx->pc = 0x236E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E58u;
        // 0x236e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E60u;
        goto label_236e60;
    }
    ctx->pc = 0x236E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E58u;
        // 0x236e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E60u;
label_236e60:
    // 0x236e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236e64:
    // 0x236e64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236e68:
    // 0x236e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236e6c:
    // 0x236e6c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236e70:
    // 0x236e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236e74:
    // 0x236e74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236e78:
    // 0x236e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236e7c:
    // 0x236e7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_236e80:
    // 0x236e80: 0xc08dbf8  jal         func_236FE0
label_236e84:
    if (ctx->pc == 0x236E84u) {
        ctx->pc = 0x236E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E80u;
        // 0x236e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E88u;
        goto label_236e88;
    }
    ctx->pc = 0x236E80u;
    SET_GPR_U32(ctx, 31, 0x236E88u);
    ctx->pc = 0x236E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E80u;
    // 0x236e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236E88u;
label_236e88:
    // 0x236e88: 0xc08db0c  jal         func_236C30
label_236e8c:
    if (ctx->pc == 0x236E8Cu) {
        ctx->pc = 0x236E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E88u;
        // 0x236e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E90u;
        goto label_236e90;
    }
    ctx->pc = 0x236E88u;
    SET_GPR_U32(ctx, 31, 0x236E90u);
    ctx->pc = 0x236E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E88u;
    // 0x236e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    goto label_236c30;
    ctx->pc = 0x236E90u;
label_236e90:
    // 0x236e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236e94:
    // 0x236e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236e98:
    // 0x236e98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236e9c:
    // 0x236e9c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236ea0:
    // 0x236ea0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_236ea4:
    // 0x236ea4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_236ea8:
    if (ctx->pc == 0x236EA8u) {
        ctx->pc = 0x236EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EA4u;
        // 0x236ea8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EACu;
        goto label_236eac;
    }
    ctx->pc = 0x236EA4u;
    {
        const bool branch_taken_0x236ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EA4u;
        // 0x236ea8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ea4) {
            ctx->pc = 0x236EBCu;
            goto label_236ebc;
        }
    }
    ctx->pc = 0x236EACu;
label_236eac:
    // 0x236eac: 0xac5100c4  sw          $s1, 0xC4($v0)
    ctx->pc = 0x236eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
label_236eb0:
    // 0x236eb0: 0xc08db22  jal         func_236C88
label_236eb4:
    if (ctx->pc == 0x236EB4u) {
        ctx->pc = 0x236EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EB0u;
        // 0x236eb4: 0xac5200c0  sw          $s2, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EB8u;
        goto label_236eb8;
    }
    ctx->pc = 0x236EB0u;
    SET_GPR_U32(ctx, 31, 0x236EB8u);
    ctx->pc = 0x236EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EB0u;
    // 0x236eb4: 0xac5200c0  sw          $s2, 0xC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    goto label_236c88;
    ctx->pc = 0x236EB8u;
label_236eb8:
    // 0x236eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ebc:
    // 0x236ebc: 0xc069210  jal         func_1A4840
label_236ec0:
    if (ctx->pc == 0x236EC0u) {
        ctx->pc = 0x236EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EBCu;
        // 0x236ec0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EC4u;
        goto label_236ec4;
    }
    ctx->pc = 0x236EBCu;
    SET_GPR_U32(ctx, 31, 0x236EC4u);
    ctx->pc = 0x236EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EBCu;
    // 0x236ec0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236EC4u;
label_236ec4:
    // 0x236ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236ec8:
    // 0x236ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236ecc:
    // 0x236ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236ed0:
    // 0x236ed0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236ed4:
    // 0x236ed4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236ed8:
    // 0x236ed8: 0x3e00008  jr          $ra
label_236edc:
    if (ctx->pc == 0x236EDCu) {
        ctx->pc = 0x236EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ED8u;
        // 0x236edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EE0u;
        goto label_236ee0;
    }
    ctx->pc = 0x236ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ED8u;
        // 0x236edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236EE0u;
label_236ee0:
    // 0x236ee0: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236ee4:
    // 0x236ee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236ee8:
    // 0x236ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236eec:
    // 0x236eec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236ef0:
    // 0x236ef0: 0xc08dbf8  jal         func_236FE0
label_236ef4:
    if (ctx->pc == 0x236EF4u) {
        ctx->pc = 0x236EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EF0u;
        // 0x236ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EF8u;
        goto label_236ef8;
    }
    ctx->pc = 0x236EF0u;
    SET_GPR_U32(ctx, 31, 0x236EF8u);
    ctx->pc = 0x236EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EF0u;
    // 0x236ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236EF8u;
label_236ef8:
    // 0x236ef8: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x236ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_236efc:
    // 0x236efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f00:
    // 0x236f00: 0xc08db22  jal         func_236C88
label_236f04:
    if (ctx->pc == 0x236F04u) {
        ctx->pc = 0x236F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F00u;
        // 0x236f04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F08u;
        goto label_236f08;
    }
    ctx->pc = 0x236F00u;
    SET_GPR_U32(ctx, 31, 0x236F08u);
    ctx->pc = 0x236F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F00u;
    // 0x236f04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    goto label_236c88;
    ctx->pc = 0x236F08u;
label_236f08:
    // 0x236f08: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f0c:
    // 0x236f0c: 0xc069210  jal         func_1A4840
label_236f10:
    if (ctx->pc == 0x236F10u) {
        ctx->pc = 0x236F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F0Cu;
        // 0x236f10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F14u;
        goto label_236f14;
    }
    ctx->pc = 0x236F0Cu;
    SET_GPR_U32(ctx, 31, 0x236F14u);
    ctx->pc = 0x236F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F0Cu;
    // 0x236f10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236F14u;
label_236f14:
    // 0x236f14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236f18:
    // 0x236f18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236f1c:
    // 0x236f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236f20:
    // 0x236f20: 0x3e00008  jr          $ra
label_236f24:
    if (ctx->pc == 0x236F24u) {
        ctx->pc = 0x236F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F20u;
        // 0x236f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F28u;
        goto label_236f28;
    }
    ctx->pc = 0x236F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F20u;
        // 0x236f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236F28u;
label_236f28:
    // 0x236f28: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f2c:
    // 0x236f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236f30:
    // 0x236f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236f34:
    // 0x236f34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236f38:
    // 0x236f38: 0xc08dbf8  jal         func_236FE0
label_236f3c:
    if (ctx->pc == 0x236F3Cu) {
        ctx->pc = 0x236F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F38u;
        // 0x236f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F40u;
        goto label_236f40;
    }
    ctx->pc = 0x236F38u;
    SET_GPR_U32(ctx, 31, 0x236F40u);
    ctx->pc = 0x236F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F38u;
    // 0x236f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236F40u;
label_236f40:
    // 0x236f40: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x236f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_236f44:
    // 0x236f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f48:
    // 0x236f48: 0xc08db22  jal         func_236C88
label_236f4c:
    if (ctx->pc == 0x236F4Cu) {
        ctx->pc = 0x236F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F48u;
        // 0x236f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F50u;
        goto label_236f50;
    }
    ctx->pc = 0x236F48u;
    SET_GPR_U32(ctx, 31, 0x236F50u);
    ctx->pc = 0x236F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F48u;
    // 0x236f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    goto label_236c88;
    ctx->pc = 0x236F50u;
label_236f50:
    // 0x236f50: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f54:
    // 0x236f54: 0xc069210  jal         func_1A4840
label_236f58:
    if (ctx->pc == 0x236F58u) {
        ctx->pc = 0x236F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F54u;
        // 0x236f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F5Cu;
        goto label_236f5c;
    }
    ctx->pc = 0x236F54u;
    SET_GPR_U32(ctx, 31, 0x236F5Cu);
    ctx->pc = 0x236F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F54u;
    // 0x236f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236F5Cu;
label_236f5c:
    // 0x236f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236f60:
    // 0x236f60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236f64:
    // 0x236f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236f68:
    // 0x236f68: 0x3e00008  jr          $ra
label_236f6c:
    if (ctx->pc == 0x236F6Cu) {
        ctx->pc = 0x236F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F68u;
        // 0x236f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F70u;
        goto label_236f70;
    }
    ctx->pc = 0x236F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F68u;
        // 0x236f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236F70u;
label_236f70:
    // 0x236f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236f74:
    // 0x236f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236f78:
    // 0x236f78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236f7c:
    // 0x236f7c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f80:
    // 0x236f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236f84:
    // 0x236f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236f88:
    // 0x236f88: 0xc08dbf8  jal         func_236FE0
label_236f8c:
    if (ctx->pc == 0x236F8Cu) {
        ctx->pc = 0x236F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F88u;
        // 0x236f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F90u;
        goto label_236f90;
    }
    ctx->pc = 0x236F88u;
    SET_GPR_U32(ctx, 31, 0x236F90u);
    ctx->pc = 0x236F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F88u;
    // 0x236f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236F90u;
label_236f90:
    // 0x236f90: 0xc08db0c  jal         func_236C30
label_236f94:
    if (ctx->pc == 0x236F94u) {
        ctx->pc = 0x236F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F90u;
        // 0x236f94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F98u;
        goto label_236f98;
    }
    ctx->pc = 0x236F90u;
    SET_GPR_U32(ctx, 31, 0x236F98u);
    ctx->pc = 0x236F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F90u;
    // 0x236f94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    goto label_236c30;
    ctx->pc = 0x236F98u;
label_236f98:
    // 0x236f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x236f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_236f9c:
    // 0x236f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236fa0:
    // 0x236fa0: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x236fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_236fa4:
    // 0x236fa4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_236fa8:
    if (ctx->pc == 0x236FA8u) {
        ctx->pc = 0x236FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA4u;
        // 0x236fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FACu;
        goto label_236fac;
    }
    ctx->pc = 0x236FA4u;
    {
        const bool branch_taken_0x236fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA4u;
        // 0x236fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fa4) {
            ctx->pc = 0x236FBCu;
            goto label_236fbc;
        }
    }
    ctx->pc = 0x236FACu;
label_236fac:
    // 0x236fac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236fb0:
    // 0x236fb0: 0xc08db22  jal         func_236C88
label_236fb4:
    if (ctx->pc == 0x236FB4u) {
        ctx->pc = 0x236FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FB0u;
        // 0x236fb4: 0xac51b280  sw          $s1, -0x4D80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947456), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FB8u;
        goto label_236fb8;
    }
    ctx->pc = 0x236FB0u;
    SET_GPR_U32(ctx, 31, 0x236FB8u);
    ctx->pc = 0x236FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FB0u;
    // 0x236fb4: 0xac51b280  sw          $s1, -0x4D80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947456), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    goto label_236c88;
    ctx->pc = 0x236FB8u;
label_236fb8:
    // 0x236fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236fbc:
    // 0x236fbc: 0xc069210  jal         func_1A4840
label_236fc0:
    if (ctx->pc == 0x236FC0u) {
        ctx->pc = 0x236FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FBCu;
        // 0x236fc0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FC4u;
        goto label_236fc4;
    }
    ctx->pc = 0x236FBCu;
    SET_GPR_U32(ctx, 31, 0x236FC4u);
    ctx->pc = 0x236FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FBCu;
    // 0x236fc0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236FC4u;
label_236fc4:
    // 0x236fc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236fc8:
    // 0x236fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236fcc:
    // 0x236fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236fd0:
    // 0x236fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236fd4:
    // 0x236fd4: 0x3e00008  jr          $ra
label_236fd8:
    if (ctx->pc == 0x236FD8u) {
        ctx->pc = 0x236FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FD4u;
        // 0x236fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FDCu;
        goto label_236fdc;
    }
    ctx->pc = 0x236FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FD4u;
        // 0x236fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236FDCu;
label_236fdc:
    // 0x236fdc: 0x0  nop
    ctx->pc = 0x236fdcu;
    // NOP
label_236fe0:
    // 0x236fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236fe4:
    // 0x236fe4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_236fe8:
    // 0x236fe8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_236fec:
    if (ctx->pc == 0x236FECu) {
        ctx->pc = 0x236FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FE8u;
        // 0x236fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FF0u;
        goto label_236ff0;
    }
    ctx->pc = 0x236FE8u;
    {
        const bool branch_taken_0x236fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FE8u;
        // 0x236fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fe8) {
            ctx->pc = 0x237000u;
            goto label_237000;
        }
    }
    ctx->pc = 0x236FF0u;
label_236ff0:
    // 0x236ff0: 0xc069218  jal         func_1A4860
label_236ff4:
    if (ctx->pc == 0x236FF4u) {
        ctx->pc = 0x236FF8u;
        goto label_236ff8;
    }
    ctx->pc = 0x236FF0u;
    SET_GPR_U32(ctx, 31, 0x236FF8u);
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x236FF8u;
label_236ff8:
    // 0x236ff8: 0x10000006  b           . + 4 + (0x6 << 2)
label_236ffc:
    if (ctx->pc == 0x236FFCu) {
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237000u;
        goto label_237000;
    }
    ctx->pc = 0x236FF8u;
    {
        const bool branch_taken_0x236ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ff8) {
            ctx->pc = 0x237014u;
            goto label_237014;
        }
    }
    ctx->pc = 0x237000u;
label_237000:
    // 0x237000: 0xc06921c  jal         func_1A4870
label_237004:
    if (ctx->pc == 0x237004u) {
        ctx->pc = 0x237008u;
        goto label_237008;
    }
    ctx->pc = 0x237000u;
    SET_GPR_U32(ctx, 31, 0x237008u);
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x237008u;
label_237008:
    // 0x237008: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23700c:
    // 0x23700c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
label_237010:
    if (ctx->pc == 0x237010u) {
        ctx->pc = 0x237010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23700Cu;
        // 0x237010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237014u;
        goto label_237014;
    }
    ctx->pc = 0x23700Cu;
    {
        const bool branch_taken_0x23700c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23700c) {
            ctx->pc = 0x237010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23700Cu;
            // 0x237010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237014u;
            goto label_237014;
        }
    }
    ctx->pc = 0x237014u;
label_237014:
    // 0x237014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237018:
    // 0x237018: 0x3e00008  jr          $ra
label_23701c:
    if (ctx->pc == 0x23701Cu) {
        ctx->pc = 0x23701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237018u;
        // 0x23701c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237020u;
        goto label_237020;
    }
    ctx->pc = 0x237018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237018u;
        // 0x23701c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237020u;
label_237020:
    // 0x237020: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
label_237024:
    if (ctx->pc == 0x237024u) {
        ctx->pc = 0x237024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237020u;
        // 0x237024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237028u;
        goto label_237028;
    }
    ctx->pc = 0x237020u;
    {
        const bool branch_taken_0x237020 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x237024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237020u;
        // 0x237024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237020) {
            ctx->pc = 0x237078u;
            goto label_237078;
        }
    }
    ctx->pc = 0x237028u;
label_237028:
    // 0x237028: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_23702c:
    // 0x23702c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_237030:
    // 0x237030: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x237030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_237034:
    // 0x237034: 0x0  nop
    ctx->pc = 0x237034u;
    // NOP
label_237038:
    // 0x237038: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x237038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23703c:
    // 0x23703c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x23703cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_237040:
    // 0x237040: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_237044:
    if (ctx->pc == 0x237044u) {
        ctx->pc = 0x237048u;
        goto label_237048;
    }
    ctx->pc = 0x237040u;
    {
        const bool branch_taken_0x237040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237040) {
            ctx->pc = 0x237070u;
            goto label_237070;
        }
    }
    ctx->pc = 0x237048u;
label_237048:
    // 0x237048: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x237048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23704c:
    // 0x23704c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_237050:
    // 0x237050: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_237054:
    // 0x237054: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x237054u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_237058:
    // 0x237058: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_23705c:
    if (ctx->pc == 0x23705Cu) {
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237060u;
        goto label_237060;
    }
    ctx->pc = 0x237058u;
    {
        const bool branch_taken_0x237058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237058) {
            ctx->pc = 0x237038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237038;
        }
    }
    ctx->pc = 0x237060u;
label_237060:
    // 0x237060: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x237060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_237064:
    // 0x237064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237068:
    // 0x237068: 0x3e00008  jr          $ra
label_23706c:
    if (ctx->pc == 0x23706Cu) {
        ctx->pc = 0x23706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237068u;
        // 0x23706c: 0xe3100a  movz        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237070u;
        goto label_237070;
    }
    ctx->pc = 0x237068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237068u;
        // 0x23706c: 0xe3100a  movz        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237070u;
label_237070:
    // 0x237070: 0x3e00008  jr          $ra
label_237074:
    if (ctx->pc == 0x237074u) {
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237078u;
        goto label_237078;
    }
    ctx->pc = 0x237070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237078u;
label_237078:
    // 0x237078: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x237078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_23707c:
    // 0x23707c: 0x3e00008  jr          $ra
label_237080:
    if (ctx->pc == 0x237080u) {
        ctx->pc = 0x237080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23707Cu;
        // 0x237080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237084u;
        goto label_237084;
    }
    ctx->pc = 0x23707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23707Cu;
        // 0x237080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237084u;
label_237084:
    // 0x237084: 0x0  nop
    ctx->pc = 0x237084u;
    // NOP
label_237088:
    // 0x237088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23708c:
    // 0x23708c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237090:
    // 0x237090: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x237090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_237094:
    // 0x237094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237098:
    // 0x237098: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x237098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23709c:
    // 0x23709c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2370a0:
    // 0x2370a0: 0xc08e9ac  jal         func_23A6B0
label_2370a4:
    if (ctx->pc == 0x2370A4u) {
        ctx->pc = 0x2370A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370A0u;
        // 0x2370a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370A8u;
        goto label_2370a8;
    }
    ctx->pc = 0x2370A0u;
    SET_GPR_U32(ctx, 31, 0x2370A8u);
    ctx->pc = 0x2370A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370A0u;
    // 0x2370a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x2370A8u;
label_2370a8:
    // 0x2370a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2370a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2370ac:
    // 0x2370ac: 0xc08dc32  jal         func_2370C8
label_2370b0:
    if (ctx->pc == 0x2370B0u) {
        ctx->pc = 0x2370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ACu;
        // 0x2370b0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370B4u;
        goto label_2370b4;
    }
    ctx->pc = 0x2370ACu;
    SET_GPR_U32(ctx, 31, 0x2370B4u);
    ctx->pc = 0x2370B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370ACu;
    // 0x2370b0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370C8u;
    goto label_2370c8;
    ctx->pc = 0x2370B4u;
label_2370b4:
    // 0x2370b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2370b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2370b8:
    // 0x2370b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2370b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2370bc:
    // 0x2370bc: 0x3e00008  jr          $ra
label_2370c0:
    if (ctx->pc == 0x2370C0u) {
        ctx->pc = 0x2370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370BCu;
        // 0x2370c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370C4u;
        goto label_2370c4;
    }
    ctx->pc = 0x2370BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370BCu;
        // 0x2370c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2370C4u;
label_2370c4:
    // 0x2370c4: 0x0  nop
    ctx->pc = 0x2370c4u;
    // NOP
label_2370c8:
    // 0x2370c8: 0x8f838300  lw          $v1, -0x7D00($gp)
    ctx->pc = 0x2370c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_2370cc:
    // 0x2370cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2370d0:
    // 0x2370d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2370d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2370d4:
    // 0x2370d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2370d8:
    // 0x2370d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2370d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2370dc:
    // 0x2370dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2370e0:
    if (ctx->pc == 0x2370E0u) {
        ctx->pc = 0x2370E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370DCu;
        // 0x2370e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370E4u;
        goto label_2370e4;
    }
    ctx->pc = 0x2370DCu;
    {
        const bool branch_taken_0x2370dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2370E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370DCu;
        // 0x2370e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370dc) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x2370E4u;
label_2370e4:
    // 0x2370e4: 0xc08d1d8  jal         func_234760
label_2370e8:
    if (ctx->pc == 0x2370E8u) {
        ctx->pc = 0x2370ECu;
        goto label_2370ec;
    }
    ctx->pc = 0x2370E4u;
    SET_GPR_U32(ctx, 31, 0x2370ECu);
    ctx->pc = 0x234760u;
    { ctx->pc = 0x234760; return; }
    ctx->pc = 0x2370ECu;
label_2370ec:
    // 0x2370ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2370f0:
    if (ctx->pc == 0x2370F0u) {
        ctx->pc = 0x2370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ECu;
        // 0x2370f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370F4u;
        goto label_2370f4;
    }
    ctx->pc = 0x2370ECu;
    {
        const bool branch_taken_0x2370ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ECu;
        // 0x2370f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370ec) {
            ctx->pc = 0x2370FCu;
            goto label_2370fc;
        }
    }
    ctx->pc = 0x2370F4u;
label_2370f4:
    // 0x2370f4: 0xc08d786  jal         func_235E18
label_2370f8:
    if (ctx->pc == 0x2370F8u) {
        ctx->pc = 0x2370FCu;
        goto label_2370fc;
    }
    ctx->pc = 0x2370F4u;
    SET_GPR_U32(ctx, 31, 0x2370FCu);
    ctx->pc = 0x235E18u;
    { ctx->pc = 0x235e18; return; }
    ctx->pc = 0x2370FCu;
label_2370fc:
    // 0x2370fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237100:
    // 0x237100: 0xaf838300  sw          $v1, -0x7D00($gp)
    ctx->pc = 0x237100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 3));
label_237104:
    // 0x237104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237108:
    // 0x237108: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23710c:
    // 0x23710c: 0x3e00008  jr          $ra
label_237110:
    if (ctx->pc == 0x237110u) {
        ctx->pc = 0x237110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23710Cu;
        // 0x237110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237114u;
        goto label_237114;
    }
    ctx->pc = 0x23710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23710Cu;
        // 0x237110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237114u;
label_237114:
    // 0x237114: 0x0  nop
    ctx->pc = 0x237114u;
    // NOP
label_237118:
    // 0x237118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23711c:
    // 0x23711c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_237120:
    // 0x237120: 0xc08f1ac  jal         func_23C6B0
label_237124:
    if (ctx->pc == 0x237124u) {
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237128u;
        goto label_237128;
    }
    ctx->pc = 0x237120u;
    SET_GPR_U32(ctx, 31, 0x237128u);
    ctx->pc = 0x237124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237120u;
    // 0x237124: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C6B0u;
    { ctx->pc = 0x23c6b0; return; }
    ctx->pc = 0x237128u;
label_237128:
    // 0x237128: 0xc04002e  jal         func_1000B8
label_23712c:
    if (ctx->pc == 0x23712Cu) {
        ctx->pc = 0x23712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237128u;
        // 0x23712c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237130u;
        goto label_237130;
    }
    ctx->pc = 0x237128u;
    SET_GPR_U32(ctx, 31, 0x237130u);
    ctx->pc = 0x23712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237128u;
    // 0x23712c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000B8u, 0x237128u, 0x237130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237130u;
label_237130:
    // 0x237130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_237134:
    // 0x237134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237138:
    // 0x237138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23713c:
    // 0x23713c: 0xc08f5fc  jal         func_23D7F0
label_237140:
    if (ctx->pc == 0x237140u) {
        ctx->pc = 0x237140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23713Cu;
        // 0x237140: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237144u;
        goto label_237144;
    }
    ctx->pc = 0x23713Cu;
    SET_GPR_U32(ctx, 31, 0x237144u);
    ctx->pc = 0x237140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23713Cu;
    // 0x237140: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D7F0u;
    { ctx->pc = 0x23d7f0; return; }
    ctx->pc = 0x237144u;
label_237144:
    // 0x237144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237148:
    // 0x237148: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23714c:
    // 0x23714c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23714cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_237150:
    // 0x237150: 0x3e00008  jr          $ra
label_237154:
    if (ctx->pc == 0x237154u) {
        ctx->pc = 0x237154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237150u;
        // 0x237154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237158u;
        goto label_237158;
    }
    ctx->pc = 0x237150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237150u;
        // 0x237154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237158u;
label_237158:
    // 0x237158: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_23715c:
    if (ctx->pc == 0x23715Cu) {
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237160u;
        goto label_237160;
    }
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237158) {
            ctx->pc = 0x237184u;
            goto label_237184;
        }
    }
    ctx->pc = 0x237160u;
label_237160:
    // 0x237160: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237164:
    // 0x237164: 0x0  nop
    ctx->pc = 0x237164u;
    // NOP
label_237168:
    // 0x237168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23716c:
    // 0x23716c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23716cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_237170:
    // 0x237170: 0x0  nop
    ctx->pc = 0x237170u;
    // NOP
label_237174:
    // 0x237174: 0x0  nop
    ctx->pc = 0x237174u;
    // NOP
label_237178:
    // 0x237178: 0x0  nop
    ctx->pc = 0x237178u;
    // NOP
label_23717c:
    // 0x23717c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_237180:
    if (ctx->pc == 0x237180u) {
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237184u;
        goto label_237184;
    }
    ctx->pc = 0x23717Cu;
    {
        const bool branch_taken_0x23717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23717c) {
            ctx->pc = 0x237168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237168;
        }
    }
    ctx->pc = 0x237184u;
label_237184:
    // 0x237184: 0x3e00008  jr          $ra
label_237188:
    if (ctx->pc == 0x237188u) {
        ctx->pc = 0x23718Cu;
        goto label_23718c;
    }
    ctx->pc = 0x237184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23718Cu;
label_23718c:
    // 0x23718c: 0x0  nop
    ctx->pc = 0x23718cu;
    // NOP
label_237190:
    // 0x237190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_237194:
    // 0x237194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_237198:
    // 0x237198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23719c:
    // 0x23719c: 0xc08e708  jal         func_239C20
label_2371a0:
    if (ctx->pc == 0x2371A0u) {
        ctx->pc = 0x2371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23719Cu;
        // 0x2371a0: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371A4u;
        goto label_2371a4;
    }
    ctx->pc = 0x23719Cu;
    SET_GPR_U32(ctx, 31, 0x2371A4u);
    ctx->pc = 0x2371A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23719Cu;
    // 0x2371a0: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x2371A4u;
label_2371a4:
    // 0x2371a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2371a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2371a8:
    // 0x2371a8: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_2371ac:
    if (ctx->pc == 0x2371ACu) {
        ctx->pc = 0x2371ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371A8u;
        // 0x2371ac: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371B0u;
        goto label_2371b0;
    }
    ctx->pc = 0x2371A8u;
    {
        const bool branch_taken_0x2371a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371A8u;
        // 0x2371ac: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371a8) {
            ctx->pc = 0x237234u;
            goto label_237234;
        }
    }
    ctx->pc = 0x2371B0u;
label_2371b0:
    // 0x2371b0: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x2371b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_2371b4:
    // 0x2371b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2371b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2371b8:
    // 0x2371b8: 0x2447fffc  addiu       $a3, $v0, -0x4
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2371bc:
    // 0x2371bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2371bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2371c0:
    // 0x2371c0: 0x2ce20025  sltiu       $v0, $a3, 0x25
    ctx->pc = 0x2371c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
label_2371c4:
    // 0x2371c4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2371c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2371c8:
    // 0x2371c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2371c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2371cc:
    // 0x2371cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2371d0:
    if (ctx->pc == 0x2371D0u) {
        ctx->pc = 0x2371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371CCu;
        // 0x2371d0: 0x2ce80014  sltiu       $t0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371D4u;
        goto label_2371d4;
    }
    ctx->pc = 0x2371CCu;
    {
        const bool branch_taken_0x2371cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371CCu;
        // 0x2371d0: 0x2ce80014  sltiu       $t0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371cc) {
            ctx->pc = 0x237228u;
            goto label_237228;
        }
    }
    ctx->pc = 0x2371D4u;
label_2371d4:
    // 0x2371d4: 0x1500000e  bnez        $t0, . + 4 + (0xE << 2)
label_2371d8:
    if (ctx->pc == 0x2371D8u) {
        ctx->pc = 0x2371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371D4u;
        // 0x2371d8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371DCu;
        goto label_2371dc;
    }
    ctx->pc = 0x2371D4u;
    {
        const bool branch_taken_0x2371d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371D4u;
        // 0x2371d8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371d4) {
            ctx->pc = 0x237210u;
            goto label_237210;
        }
    }
    ctx->pc = 0x2371DCu;
label_2371dc:
    // 0x2371dc: 0x2ce2001c  sltiu       $v0, $a3, 0x1C
    ctx->pc = 0x2371dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
label_2371e0:
    // 0x2371e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2371e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2371e4:
    // 0x2371e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2371e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2371e8:
    // 0x2371e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2371ec:
    if (ctx->pc == 0x2371ECu) {
        ctx->pc = 0x2371ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371E8u;
        // 0x2371ec: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371F0u;
        goto label_2371f0;
    }
    ctx->pc = 0x2371E8u;
    {
        const bool branch_taken_0x2371e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371E8u;
        // 0x2371ec: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371e8) {
            ctx->pc = 0x237210u;
            goto label_237210;
        }
    }
    ctx->pc = 0x2371F0u;
label_2371f0:
    // 0x2371f0: 0x2ce20024  sltiu       $v0, $a3, 0x24
    ctx->pc = 0x2371f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_2371f4:
    // 0x2371f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2371f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2371f8:
    // 0x2371f8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2371f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2371fc:
    // 0x2371fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_237200:
    if (ctx->pc == 0x237200u) {
        ctx->pc = 0x237200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371FCu;
        // 0x237200: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237204u;
        goto label_237204;
    }
    ctx->pc = 0x2371FCu;
    {
        const bool branch_taken_0x2371fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371FCu;
        // 0x237200: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371fc) {
            ctx->pc = 0x237210u;
            goto label_237210;
        }
    }
    ctx->pc = 0x237204u;
label_237204:
    // 0x237204: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x237204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_237208:
    // 0x237208: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_23720c:
    // 0x23720c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x23720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_237210:
    // 0x237210: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x237210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_237214:
    // 0x237214: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_237218:
    // 0x237218: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x237218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23721c:
    // 0x23721c: 0x10000004  b           . + 4 + (0x4 << 2)
label_237220:
    if (ctx->pc == 0x237220u) {
        ctx->pc = 0x237220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23721Cu;
        // 0x237220: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237224u;
        goto label_237224;
    }
    ctx->pc = 0x23721Cu;
    {
        const bool branch_taken_0x23721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23721Cu;
        // 0x237220: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23721c) {
            ctx->pc = 0x237230u;
            goto label_237230;
        }
    }
    ctx->pc = 0x237224u;
label_237224:
    // 0x237224: 0x0  nop
    ctx->pc = 0x237224u;
    // NOP
label_237228:
    // 0x237228: 0xc08e9ac  jal         func_23A6B0
label_23722c:
    if (ctx->pc == 0x23722Cu) {
        ctx->pc = 0x237230u;
        goto label_237230;
    }
    ctx->pc = 0x237228u;
    SET_GPR_U32(ctx, 31, 0x237230u);
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x237230u;
label_237230:
    // 0x237230: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237234:
    // 0x237234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237238:
    // 0x237238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23723c:
    // 0x23723c: 0x3e00008  jr          $ra
label_237240:
    if (ctx->pc == 0x237240u) {
        ctx->pc = 0x237240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23723Cu;
        // 0x237240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237244u;
        goto label_237244;
    }
    ctx->pc = 0x23723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23723Cu;
        // 0x237240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237244u;
label_237244:
    // 0x237244: 0x0  nop
    ctx->pc = 0x237244u;
    // NOP
    ctx->pc = 0x237248u;
    return;
}
