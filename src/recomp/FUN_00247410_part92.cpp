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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part92(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        case 0x273b08u: goto label_273b08;
        case 0x273b0cu: goto label_273b0c;
        case 0x273b10u: goto label_273b10;
        case 0x273b14u: goto label_273b14;
        case 0x273b18u: goto label_273b18;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b20u: goto label_273b20;
        case 0x273b24u: goto label_273b24;
        case 0x273b28u: goto label_273b28;
        case 0x273b2cu: goto label_273b2c;
        case 0x273b30u: goto label_273b30;
        case 0x273b34u: goto label_273b34;
        case 0x273b38u: goto label_273b38;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b40u: goto label_273b40;
        case 0x273b44u: goto label_273b44;
        case 0x273b48u: goto label_273b48;
        case 0x273b4cu: goto label_273b4c;
        case 0x273b50u: goto label_273b50;
        case 0x273b54u: goto label_273b54;
        case 0x273b58u: goto label_273b58;
        case 0x273b5cu: goto label_273b5c;
        case 0x273b60u: goto label_273b60;
        case 0x273b64u: goto label_273b64;
        case 0x273b68u: goto label_273b68;
        case 0x273b6cu: goto label_273b6c;
        case 0x273b70u: goto label_273b70;
        case 0x273b74u: goto label_273b74;
        case 0x273b78u: goto label_273b78;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b80u: goto label_273b80;
        case 0x273b84u: goto label_273b84;
        case 0x273b88u: goto label_273b88;
        case 0x273b8cu: goto label_273b8c;
        case 0x273b90u: goto label_273b90;
        case 0x273b94u: goto label_273b94;
        case 0x273b98u: goto label_273b98;
        case 0x273b9cu: goto label_273b9c;
        case 0x273ba0u: goto label_273ba0;
        case 0x273ba4u: goto label_273ba4;
        case 0x273ba8u: goto label_273ba8;
        case 0x273bacu: goto label_273bac;
        case 0x273bb0u: goto label_273bb0;
        case 0x273bb4u: goto label_273bb4;
        case 0x273bb8u: goto label_273bb8;
        case 0x273bbcu: goto label_273bbc;
        case 0x273bc0u: goto label_273bc0;
        case 0x273bc4u: goto label_273bc4;
        case 0x273bc8u: goto label_273bc8;
        case 0x273bccu: goto label_273bcc;
        case 0x273bd0u: goto label_273bd0;
        case 0x273bd4u: goto label_273bd4;
        case 0x273bd8u: goto label_273bd8;
        case 0x273bdcu: goto label_273bdc;
        case 0x273be0u: goto label_273be0;
        case 0x273be4u: goto label_273be4;
        case 0x273be8u: goto label_273be8;
        case 0x273becu: goto label_273bec;
        case 0x273bf0u: goto label_273bf0;
        case 0x273bf4u: goto label_273bf4;
        case 0x273bf8u: goto label_273bf8;
        case 0x273bfcu: goto label_273bfc;
        case 0x273c00u: goto label_273c00;
        case 0x273c04u: goto label_273c04;
        case 0x273c08u: goto label_273c08;
        case 0x273c0cu: goto label_273c0c;
        case 0x273c10u: goto label_273c10;
        case 0x273c14u: goto label_273c14;
        case 0x273c18u: goto label_273c18;
        case 0x273c1cu: goto label_273c1c;
        case 0x273c20u: goto label_273c20;
        case 0x273c24u: goto label_273c24;
        case 0x273c28u: goto label_273c28;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c30u: goto label_273c30;
        case 0x273c34u: goto label_273c34;
        case 0x273c38u: goto label_273c38;
        case 0x273c3cu: goto label_273c3c;
        case 0x273c40u: goto label_273c40;
        case 0x273c44u: goto label_273c44;
        case 0x273c48u: goto label_273c48;
        case 0x273c4cu: goto label_273c4c;
        case 0x273c50u: goto label_273c50;
        case 0x273c54u: goto label_273c54;
        case 0x273c58u: goto label_273c58;
        case 0x273c5cu: goto label_273c5c;
        case 0x273c60u: goto label_273c60;
        case 0x273c64u: goto label_273c64;
        case 0x273c68u: goto label_273c68;
        case 0x273c6cu: goto label_273c6c;
        case 0x273c70u: goto label_273c70;
        case 0x273c74u: goto label_273c74;
        case 0x273c78u: goto label_273c78;
        case 0x273c7cu: goto label_273c7c;
        case 0x273c80u: goto label_273c80;
        case 0x273c84u: goto label_273c84;
        case 0x273c88u: goto label_273c88;
        case 0x273c8cu: goto label_273c8c;
        case 0x273c90u: goto label_273c90;
        case 0x273c94u: goto label_273c94;
        case 0x273c98u: goto label_273c98;
        case 0x273c9cu: goto label_273c9c;
        case 0x273ca0u: goto label_273ca0;
        case 0x273ca4u: goto label_273ca4;
        case 0x273ca8u: goto label_273ca8;
        case 0x273cacu: goto label_273cac;
        case 0x273cb0u: goto label_273cb0;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cb8u: goto label_273cb8;
        case 0x273cbcu: goto label_273cbc;
        case 0x273cc0u: goto label_273cc0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cc8u: goto label_273cc8;
        case 0x273cccu: goto label_273ccc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273cd4u: goto label_273cd4;
        case 0x273cd8u: goto label_273cd8;
        case 0x273cdcu: goto label_273cdc;
        case 0x273ce0u: goto label_273ce0;
        case 0x273ce4u: goto label_273ce4;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cecu: goto label_273cec;
        case 0x273cf0u: goto label_273cf0;
        case 0x273cf4u: goto label_273cf4;
        case 0x273cf8u: goto label_273cf8;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d00u: goto label_273d00;
        case 0x273d04u: goto label_273d04;
        case 0x273d08u: goto label_273d08;
        case 0x273d0cu: goto label_273d0c;
        case 0x273d10u: goto label_273d10;
        case 0x273d14u: goto label_273d14;
        case 0x273d18u: goto label_273d18;
        case 0x273d1cu: goto label_273d1c;
        case 0x273d20u: goto label_273d20;
        case 0x273d24u: goto label_273d24;
        case 0x273d28u: goto label_273d28;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d30u: goto label_273d30;
        case 0x273d34u: goto label_273d34;
        case 0x273d38u: goto label_273d38;
        case 0x273d3cu: goto label_273d3c;
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        case 0x273e90u: goto label_273e90;
        case 0x273e94u: goto label_273e94;
        case 0x273e98u: goto label_273e98;
        case 0x273e9cu: goto label_273e9c;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ea4u: goto label_273ea4;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eacu: goto label_273eac;
        case 0x273eb0u: goto label_273eb0;
        case 0x273eb4u: goto label_273eb4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273ebcu: goto label_273ebc;
        case 0x273ec0u: goto label_273ec0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273ec8u: goto label_273ec8;
        case 0x273eccu: goto label_273ecc;
        case 0x273ed0u: goto label_273ed0;
        case 0x273ed4u: goto label_273ed4;
        case 0x273ed8u: goto label_273ed8;
        case 0x273edcu: goto label_273edc;
        case 0x273ee0u: goto label_273ee0;
        case 0x273ee4u: goto label_273ee4;
        case 0x273ee8u: goto label_273ee8;
        case 0x273eecu: goto label_273eec;
        case 0x273ef0u: goto label_273ef0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273ef8u: goto label_273ef8;
        case 0x273efcu: goto label_273efc;
        case 0x273f00u: goto label_273f00;
        case 0x273f04u: goto label_273f04;
        case 0x273f08u: goto label_273f08;
        case 0x273f0cu: goto label_273f0c;
        case 0x273f10u: goto label_273f10;
        case 0x273f14u: goto label_273f14;
        case 0x273f18u: goto label_273f18;
        case 0x273f1cu: goto label_273f1c;
        case 0x273f20u: goto label_273f20;
        case 0x273f24u: goto label_273f24;
        case 0x273f28u: goto label_273f28;
        case 0x273f2cu: goto label_273f2c;
        case 0x273f30u: goto label_273f30;
        case 0x273f34u: goto label_273f34;
        case 0x273f38u: goto label_273f38;
        case 0x273f3cu: goto label_273f3c;
        case 0x273f40u: goto label_273f40;
        case 0x273f44u: goto label_273f44;
        case 0x273f48u: goto label_273f48;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f50u: goto label_273f50;
        case 0x273f54u: goto label_273f54;
        case 0x273f58u: goto label_273f58;
        case 0x273f5cu: goto label_273f5c;
        case 0x273f60u: goto label_273f60;
        case 0x273f64u: goto label_273f64;
        case 0x273f68u: goto label_273f68;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f70u: goto label_273f70;
        case 0x273f74u: goto label_273f74;
        case 0x273f78u: goto label_273f78;
        case 0x273f7cu: goto label_273f7c;
        case 0x273f80u: goto label_273f80;
        case 0x273f84u: goto label_273f84;
        case 0x273f88u: goto label_273f88;
        case 0x273f8cu: goto label_273f8c;
        case 0x273f90u: goto label_273f90;
        case 0x273f94u: goto label_273f94;
        case 0x273f98u: goto label_273f98;
        case 0x273f9cu: goto label_273f9c;
        case 0x273fa0u: goto label_273fa0;
        case 0x273fa4u: goto label_273fa4;
        case 0x273fa8u: goto label_273fa8;
        case 0x273facu: goto label_273fac;
        case 0x273fb0u: goto label_273fb0;
        case 0x273fb4u: goto label_273fb4;
        case 0x273fb8u: goto label_273fb8;
        case 0x273fbcu: goto label_273fbc;
        case 0x273fc0u: goto label_273fc0;
        case 0x273fc4u: goto label_273fc4;
        case 0x273fc8u: goto label_273fc8;
        case 0x273fccu: goto label_273fcc;
        case 0x273fd0u: goto label_273fd0;
        case 0x273fd4u: goto label_273fd4;
        case 0x273fd8u: goto label_273fd8;
        case 0x273fdcu: goto label_273fdc;
        case 0x273fe0u: goto label_273fe0;
        case 0x273fe4u: goto label_273fe4;
        case 0x273fe8u: goto label_273fe8;
        case 0x273fecu: goto label_273fec;
        case 0x273ff0u: goto label_273ff0;
        case 0x273ff4u: goto label_273ff4;
        case 0x273ff8u: goto label_273ff8;
        case 0x273ffcu: goto label_273ffc;
        case 0x274000u: goto label_274000;
        case 0x274004u: goto label_274004;
        case 0x274008u: goto label_274008;
        case 0x27400cu: goto label_27400c;
        case 0x274010u: goto label_274010;
        case 0x274014u: goto label_274014;
        case 0x274018u: goto label_274018;
        case 0x27401cu: goto label_27401c;
        case 0x274020u: goto label_274020;
        case 0x274024u: goto label_274024;
        case 0x274028u: goto label_274028;
        case 0x27402cu: goto label_27402c;
        case 0x274030u: goto label_274030;
        case 0x274034u: goto label_274034;
        case 0x274038u: goto label_274038;
        case 0x27403cu: goto label_27403c;
        case 0x274040u: goto label_274040;
        case 0x274044u: goto label_274044;
        case 0x274048u: goto label_274048;
        case 0x27404cu: goto label_27404c;
        case 0x274050u: goto label_274050;
        case 0x274054u: goto label_274054;
        case 0x274058u: goto label_274058;
        case 0x27405cu: goto label_27405c;
        case 0x274060u: goto label_274060;
        case 0x274064u: goto label_274064;
        case 0x274068u: goto label_274068;
        case 0x27406cu: goto label_27406c;
        case 0x274070u: goto label_274070;
        case 0x274074u: goto label_274074;
        case 0x274078u: goto label_274078;
        case 0x27407cu: goto label_27407c;
        case 0x274080u: goto label_274080;
        case 0x274084u: goto label_274084;
        case 0x274088u: goto label_274088;
        case 0x27408cu: goto label_27408c;
        case 0x274090u: goto label_274090;
        case 0x274094u: goto label_274094;
        case 0x274098u: goto label_274098;
        case 0x27409cu: goto label_27409c;
        case 0x2740a0u: goto label_2740a0;
        case 0x2740a4u: goto label_2740a4;
        case 0x2740a8u: goto label_2740a8;
        case 0x2740acu: goto label_2740ac;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740b4u: goto label_2740b4;
        case 0x2740b8u: goto label_2740b8;
        case 0x2740bcu: goto label_2740bc;
        case 0x2740c0u: goto label_2740c0;
        case 0x2740c4u: goto label_2740c4;
        case 0x2740c8u: goto label_2740c8;
        case 0x2740ccu: goto label_2740cc;
        case 0x2740d0u: goto label_2740d0;
        case 0x2740d4u: goto label_2740d4;
        case 0x2740d8u: goto label_2740d8;
        case 0x2740dcu: goto label_2740dc;
        case 0x2740e0u: goto label_2740e0;
        case 0x2740e4u: goto label_2740e4;
        case 0x2740e8u: goto label_2740e8;
        case 0x2740ecu: goto label_2740ec;
        case 0x2740f0u: goto label_2740f0;
        case 0x2740f4u: goto label_2740f4;
        case 0x2740f8u: goto label_2740f8;
        case 0x2740fcu: goto label_2740fc;
        case 0x274100u: goto label_274100;
        case 0x274104u: goto label_274104;
        case 0x274108u: goto label_274108;
        case 0x27410cu: goto label_27410c;
        case 0x274110u: goto label_274110;
        case 0x274114u: goto label_274114;
        case 0x274118u: goto label_274118;
        case 0x27411cu: goto label_27411c;
        case 0x274120u: goto label_274120;
        case 0x274124u: goto label_274124;
        case 0x274128u: goto label_274128;
        case 0x27412cu: goto label_27412c;
        case 0x274130u: goto label_274130;
        case 0x274134u: goto label_274134;
        case 0x274138u: goto label_274138;
        case 0x27413cu: goto label_27413c;
        case 0x274140u: goto label_274140;
        case 0x274144u: goto label_274144;
        case 0x274148u: goto label_274148;
        case 0x27414cu: goto label_27414c;
        case 0x274150u: goto label_274150;
        case 0x274154u: goto label_274154;
        case 0x274158u: goto label_274158;
        case 0x27415cu: goto label_27415c;
        case 0x274160u: goto label_274160;
        case 0x274164u: goto label_274164;
        case 0x274168u: goto label_274168;
        case 0x27416cu: goto label_27416c;
        case 0x274170u: goto label_274170;
        case 0x274174u: goto label_274174;
        case 0x274178u: goto label_274178;
        case 0x27417cu: goto label_27417c;
        case 0x274180u: goto label_274180;
        case 0x274184u: goto label_274184;
        case 0x274188u: goto label_274188;
        case 0x27418cu: goto label_27418c;
        case 0x274190u: goto label_274190;
        case 0x274194u: goto label_274194;
        case 0x274198u: goto label_274198;
        case 0x27419cu: goto label_27419c;
        case 0x2741a0u: goto label_2741a0;
        case 0x2741a4u: goto label_2741a4;
        case 0x2741a8u: goto label_2741a8;
        case 0x2741acu: goto label_2741ac;
        case 0x2741b0u: goto label_2741b0;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741b8u: goto label_2741b8;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741c0u: goto label_2741c0;
        case 0x2741c4u: goto label_2741c4;
        case 0x2741c8u: goto label_2741c8;
        case 0x2741ccu: goto label_2741cc;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741d4u: goto label_2741d4;
        case 0x2741d8u: goto label_2741d8;
        case 0x2741dcu: goto label_2741dc;
        case 0x2741e0u: goto label_2741e0;
        case 0x2741e4u: goto label_2741e4;
        case 0x2741e8u: goto label_2741e8;
        case 0x2741ecu: goto label_2741ec;
        case 0x2741f0u: goto label_2741f0;
        case 0x2741f4u: goto label_2741f4;
        case 0x2741f8u: goto label_2741f8;
        case 0x2741fcu: goto label_2741fc;
        case 0x274200u: goto label_274200;
        case 0x274204u: goto label_274204;
        case 0x274208u: goto label_274208;
        case 0x27420cu: goto label_27420c;
        case 0x274210u: goto label_274210;
        case 0x274214u: goto label_274214;
        case 0x274218u: goto label_274218;
        case 0x27421cu: goto label_27421c;
        case 0x274220u: goto label_274220;
        case 0x274224u: goto label_274224;
        case 0x274228u: goto label_274228;
        case 0x27422cu: goto label_27422c;
        case 0x274230u: goto label_274230;
        case 0x274234u: goto label_274234;
        case 0x274238u: goto label_274238;
        case 0x27423cu: goto label_27423c;
        case 0x274240u: goto label_274240;
        case 0x274244u: goto label_274244;
        case 0x274248u: goto label_274248;
        case 0x27424cu: goto label_27424c;
        case 0x274250u: goto label_274250;
        case 0x274254u: goto label_274254;
        case 0x274258u: goto label_274258;
        case 0x27425cu: goto label_27425c;
        case 0x274260u: goto label_274260;
        case 0x274264u: goto label_274264;
        case 0x274268u: goto label_274268;
        case 0x27426cu: goto label_27426c;
        case 0x274270u: goto label_274270;
        case 0x274274u: goto label_274274;
        case 0x274278u: goto label_274278;
        case 0x27427cu: goto label_27427c;
        case 0x274280u: goto label_274280;
        case 0x274284u: goto label_274284;
        case 0x274288u: goto label_274288;
        case 0x27428cu: goto label_27428c;
        case 0x274290u: goto label_274290;
        case 0x274294u: goto label_274294;
        case 0x274298u: goto label_274298;
        case 0x27429cu: goto label_27429c;
        case 0x2742a0u: goto label_2742a0;
        case 0x2742a4u: goto label_2742a4;
        case 0x2742a8u: goto label_2742a8;
        case 0x2742acu: goto label_2742ac;
        case 0x2742b0u: goto label_2742b0;
        case 0x2742b4u: goto label_2742b4;
        case 0x2742b8u: goto label_2742b8;
        case 0x2742bcu: goto label_2742bc;
        case 0x2742c0u: goto label_2742c0;
        case 0x2742c4u: goto label_2742c4;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742ccu: goto label_2742cc;
        default: return;
    }

label_273b00:
    // 0x273b00: 0xa609  .word       0x0000A609                   # jalr        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_273b04:
    if (ctx->pc == 0x273B04u) {
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B08u;
        goto label_273b08;
    }
    ctx->pc = 0x273B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x273B08u);
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B00u, 0x273B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273B08u;
label_273b08:
    // 0x273b08: 0x0  nop
    ctx->pc = 0x273b08u;
    // NOP
label_273b0c:
    // 0x273b0c: 0x0  nop
    ctx->pc = 0x273b0cu;
    // NOP
label_273b10:
    // 0x273b10: 0xa615  .word       0x0000A615                   # INVALID     $zero, $zero, -0x59EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273B10 raw=0x0000A615"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b14:
    // 0x273b14: 0x7f00  sll         $t7, $zero, 28
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273b18:
    // 0x273b18: 0x0  nop
    ctx->pc = 0x273b18u;
    // NOP
label_273b1c:
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
label_273b20:
    // 0x273b20: 0xa625  .word       0x0000A625                   # move        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273b24:
    // 0x273b24: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x273b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b28:
    // 0x273b28: 0x0  nop
    ctx->pc = 0x273b28u;
    // NOP
label_273b2c:
    // 0x273b2c: 0x0  nop
    ctx->pc = 0x273b2cu;
    // NOP
label_273b30:
    // 0x273b30: 0xa633  tltu        $zero, $zero, 664
    ctx->pc = 0x273b30u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b34:
    // 0x273b34: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x273b34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_273b38:
    // 0x273b38: 0x0  nop
    ctx->pc = 0x273b38u;
    // NOP
label_273b3c:
    // 0x273b3c: 0x0  nop
    ctx->pc = 0x273b3cu;
    // NOP
label_273b40:
    // 0x273b40: 0xa63d  .word       0x0000A63D                   # INVALID     $zero, $zero, -0x59C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273B40 raw=0x0000A63D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b44:
    // 0x273b44: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273b48:
    // 0x273b48: 0x0  nop
    ctx->pc = 0x273b48u;
    // NOP
label_273b4c:
    // 0x273b4c: 0x0  nop
    ctx->pc = 0x273b4cu;
    // NOP
label_273b50:
    // 0x273b50: 0xa645  .word       0x0000A645                   # INVALID     $zero, $zero, -0x59BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273B50 raw=0x0000A645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b54:
    // 0x273b54: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x273b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b58:
    // 0x273b58: 0x0  nop
    ctx->pc = 0x273b58u;
    // NOP
label_273b5c:
    // 0x273b5c: 0x0  nop
    ctx->pc = 0x273b5cu;
    // NOP
label_273b60:
    // 0x273b60: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b60u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273b64:
    // 0x273b64: 0xaf60  .word       0x0000AF60                   # add         $s5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273b68:
    // 0x273b68: 0x0  nop
    ctx->pc = 0x273b68u;
    // NOP
label_273b6c:
    // 0x273b6c: 0x0  nop
    ctx->pc = 0x273b6cu;
    // NOP
label_273b70:
    // 0x273b70: 0xa666  .word       0x0000A666                   # xor         $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273b74:
    // 0x273b74: 0x30e0  .word       0x000030E0                   # add         $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_273b78:
    // 0x273b78: 0x0  nop
    ctx->pc = 0x273b78u;
    // NOP
label_273b7c:
    // 0x273b7c: 0x0  nop
    ctx->pc = 0x273b7cu;
    // NOP
label_273b80:
    // 0x273b80: 0xa66d  .word       0x0000A66D                   # daddu       $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b84:
    // 0x273b84: 0x3430  tge         $zero, $zero, 208
    ctx->pc = 0x273b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b88:
    // 0x273b88: 0x0  nop
    ctx->pc = 0x273b88u;
    // NOP
label_273b8c:
    // 0x273b8c: 0x0  nop
    ctx->pc = 0x273b8cu;
    // NOP
label_273b90:
    // 0x273b90: 0xa674  teq         $zero, $zero, 665
    ctx->pc = 0x273b90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b94:
    // 0x273b94: 0xd890  .word       0x0000D890                   # mfhi        $k1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273b98:
    // 0x273b98: 0x0  nop
    ctx->pc = 0x273b98u;
    // NOP
label_273b9c:
    // 0x273b9c: 0x0  nop
    ctx->pc = 0x273b9cu;
    // NOP
label_273ba0:
    // 0x273ba0: 0xa690  .word       0x0000A690                   # mfhi        $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ba0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273ba4:
    // 0x273ba4: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273ba8:
    // 0x273ba8: 0x0  nop
    ctx->pc = 0x273ba8u;
    // NOP
label_273bac:
    // 0x273bac: 0x0  nop
    ctx->pc = 0x273bacu;
    // NOP
label_273bb0:
    // 0x273bb0: 0xa6ab  .word       0x0000A6AB                   # sltu        $s4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bb0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_273bb4:
    // 0x273bb4: 0xb7d0  .word       0x0000B7D0                   # mfhi        $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bb4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273bb8:
    // 0x273bb8: 0x0  nop
    ctx->pc = 0x273bb8u;
    // NOP
label_273bbc:
    // 0x273bbc: 0x0  nop
    ctx->pc = 0x273bbcu;
    // NOP
label_273bc0:
    // 0x273bc0: 0xa6c2  srl         $s4, $zero, 27
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_273bc4:
    // 0x273bc4: 0x9470  tge         $zero, $zero, 593
    ctx->pc = 0x273bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273bc8:
    // 0x273bc8: 0x0  nop
    ctx->pc = 0x273bc8u;
    // NOP
label_273bcc:
    // 0x273bcc: 0x0  nop
    ctx->pc = 0x273bccu;
    // NOP
label_273bd0:
    // 0x273bd0: 0xa6d5  .word       0x0000A6D5                   # INVALID     $zero, $zero, -0x592B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273BD0 raw=0x0000A6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273bd4:
    // 0x273bd4: 0xd7a0  .word       0x0000D7A0                   # add         $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273bd8:
    // 0x273bd8: 0x0  nop
    ctx->pc = 0x273bd8u;
    // NOP
label_273bdc:
    // 0x273bdc: 0x0  nop
    ctx->pc = 0x273bdcu;
    // NOP
label_273be0:
    // 0x273be0: 0xa6f0  tge         $zero, $zero, 667
    ctx->pc = 0x273be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273be4:
    // 0x273be4: 0xe550  .word       0x0000E550                   # mfhi        $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273be4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273be8:
    // 0x273be8: 0x0  nop
    ctx->pc = 0x273be8u;
    // NOP
label_273bec:
    // 0x273bec: 0x0  nop
    ctx->pc = 0x273becu;
    // NOP
label_273bf0:
    // 0x273bf0: 0xa70d  break       0, 668
    ctx->pc = 0x273bf0u;
    runtime->handleBreak(rdram, ctx);
label_273bf4:
    // 0x273bf4: 0x13c30  tge         $zero, $at, 240
    ctx->pc = 0x273bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273bf8:
    // 0x273bf8: 0x0  nop
    ctx->pc = 0x273bf8u;
    // NOP
label_273bfc:
    // 0x273bfc: 0x0  nop
    ctx->pc = 0x273bfcu;
    // NOP
label_273c00:
    // 0x273c00: 0xa735  .word       0x0000A735                   # INVALID     $zero, $zero, -0x58CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273C00 raw=0x0000A735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273c04:
    // 0x273c04: 0x10c50  .word       0x00010C50                   # mfhi        $at # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c04u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_273c08:
    // 0x273c08: 0x0  nop
    ctx->pc = 0x273c08u;
    // NOP
label_273c0c:
    // 0x273c0c: 0x0  nop
    ctx->pc = 0x273c0cu;
    // NOP
label_273c10:
    // 0x273c10: 0xa757  .word       0x0000A757                   # dsrav       $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c10u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273c14:
    // 0x273c14: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_273c18:
    // 0x273c18: 0x0  nop
    ctx->pc = 0x273c18u;
    // NOP
label_273c1c:
    // 0x273c1c: 0x0  nop
    ctx->pc = 0x273c1cu;
    // NOP
label_273c20:
    // 0x273c20: 0xa765  .word       0x0000A765                   # move        $s4, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273c24:
    // 0x273c24: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x273c24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273c28:
    // 0x273c28: 0x0  nop
    ctx->pc = 0x273c28u;
    // NOP
label_273c2c:
    // 0x273c2c: 0x0  nop
    ctx->pc = 0x273c2cu;
    // NOP
label_273c30:
    // 0x273c30: 0xa77c  dsll32      $s4, $zero, 29
    ctx->pc = 0x273c30u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 29));
label_273c34:
    // 0x273c34: 0x161e0  .word       0x000161E0                   # add         $t4, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_273c38:
    // 0x273c38: 0x0  nop
    ctx->pc = 0x273c38u;
    // NOP
label_273c3c:
    // 0x273c3c: 0x0  nop
    ctx->pc = 0x273c3cu;
    // NOP
label_273c40:
    // 0x273c40: 0xa7a9  .word       0x0000A7A9                   # mtsa        $zero # 0000A780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273c40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273c44:
    // 0x273c44: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c44u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273c48:
    // 0x273c48: 0x0  nop
    ctx->pc = 0x273c48u;
    // NOP
label_273c4c:
    // 0x273c4c: 0x0  nop
    ctx->pc = 0x273c4cu;
    // NOP
label_273c50:
    // 0x273c50: 0xa7bf  dsra32      $s4, $zero, 30
    ctx->pc = 0x273c50u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 30));
label_273c54:
    // 0x273c54: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x273c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c58:
    // 0x273c58: 0x0  nop
    ctx->pc = 0x273c58u;
    // NOP
label_273c5c:
    // 0x273c5c: 0x0  nop
    ctx->pc = 0x273c5cu;
    // NOP
label_273c60:
    // 0x273c60: 0xa7da  .word       0x0000A7DA                   # div         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273c64:
    // 0x273c64: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_273c68:
    // 0x273c68: 0x0  nop
    ctx->pc = 0x273c68u;
    // NOP
label_273c6c:
    // 0x273c6c: 0x0  nop
    ctx->pc = 0x273c6cu;
    // NOP
label_273c70:
    // 0x273c70: 0xa7f4  teq         $zero, $zero, 671
    ctx->pc = 0x273c70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c74:
    // 0x273c74: 0xa8f0  tge         $zero, $zero, 675
    ctx->pc = 0x273c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c78:
    // 0x273c78: 0x0  nop
    ctx->pc = 0x273c78u;
    // NOP
label_273c7c:
    // 0x273c7c: 0x0  nop
    ctx->pc = 0x273c7cu;
    // NOP
label_273c80:
    // 0x273c80: 0xa80a  movz        $s5, $zero, $zero
    ctx->pc = 0x273c80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273c84:
    // 0x273c84: 0xf550  .word       0x0000F550                   # mfhi        $fp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c84u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_273c88:
    // 0x273c88: 0x0  nop
    ctx->pc = 0x273c88u;
    // NOP
label_273c8c:
    // 0x273c8c: 0x0  nop
    ctx->pc = 0x273c8cu;
    // NOP
label_273c90:
    // 0x273c90: 0xa829  .word       0x0000A829                   # mtsa        $zero # 0000A800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273c90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273c94:
    // 0x273c94: 0xe0c0  sll         $gp, $zero, 3
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_273c98:
    // 0x273c98: 0x0  nop
    ctx->pc = 0x273c98u;
    // NOP
label_273c9c:
    // 0x273c9c: 0x0  nop
    ctx->pc = 0x273c9cu;
    // NOP
label_273ca0:
    // 0x273ca0: 0xa846  .word       0x0000A846                   # srlv        $s5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273ca4:
    // 0x273ca4: 0xe3c0  sll         $gp, $zero, 15
    ctx->pc = 0x273ca4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_273ca8:
    // 0x273ca8: 0x0  nop
    ctx->pc = 0x273ca8u;
    // NOP
label_273cac:
    // 0x273cac: 0x0  nop
    ctx->pc = 0x273cacu;
    // NOP
label_273cb0:
    // 0x273cb0: 0xa863  .word       0x0000A863                   # negu        $s5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273cb4:
    // 0x273cb4: 0x111c0  sll         $v0, $at, 7
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_273cb8:
    // 0x273cb8: 0x0  nop
    ctx->pc = 0x273cb8u;
    // NOP
label_273cbc:
    // 0x273cbc: 0x0  nop
    ctx->pc = 0x273cbcu;
    // NOP
label_273cc0:
    // 0x273cc0: 0xa886  .word       0x0000A886                   # srlv        $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273cc4:
    // 0x273cc4: 0xd020  add         $k0, $zero, $zero
    ctx->pc = 0x273cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273cc8:
    // 0x273cc8: 0x0  nop
    ctx->pc = 0x273cc8u;
    // NOP
label_273ccc:
    // 0x273ccc: 0x0  nop
    ctx->pc = 0x273cccu;
    // NOP
label_273cd0:
    // 0x273cd0: 0xa8a1  .word       0x0000A8A1                   # addu        $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273cd4:
    // 0x273cd4: 0x144c0  sll         $t0, $at, 19
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_273cd8:
    // 0x273cd8: 0x0  nop
    ctx->pc = 0x273cd8u;
    // NOP
label_273cdc:
    // 0x273cdc: 0x0  nop
    ctx->pc = 0x273cdcu;
    // NOP
label_273ce0:
    // 0x273ce0: 0xa8ca  .word       0x0000A8CA                   # movz        $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ce0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273ce4:
    // 0x273ce4: 0x9380  sll         $s2, $zero, 14
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_273ce8:
    // 0x273ce8: 0x0  nop
    ctx->pc = 0x273ce8u;
    // NOP
label_273cec:
    // 0x273cec: 0x0  nop
    ctx->pc = 0x273cecu;
    // NOP
label_273cf0:
    // 0x273cf0: 0xa8dd  .word       0x0000A8DD                   # dmultu      $zero, $zero # 0000A8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273CF0 raw=0x0000A8DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273cf4:
    // 0x273cf4: 0xe7f0  tge         $zero, $zero, 927
    ctx->pc = 0x273cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273cf8:
    // 0x273cf8: 0x0  nop
    ctx->pc = 0x273cf8u;
    // NOP
label_273cfc:
    // 0x273cfc: 0x0  nop
    ctx->pc = 0x273cfcu;
    // NOP
label_273d00:
    // 0x273d00: 0xa8fa  dsrl        $s5, $zero, 3
    ctx->pc = 0x273d00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> 3);
label_273d04:
    // 0x273d04: 0x16450  .word       0x00016450                   # mfhi        $t4 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d04u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273d08:
    // 0x273d08: 0x0  nop
    ctx->pc = 0x273d08u;
    // NOP
label_273d0c:
    // 0x273d0c: 0x0  nop
    ctx->pc = 0x273d0cu;
    // NOP
label_273d10:
    // 0x273d10: 0xa927  .word       0x0000A927                   # not         $s5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d10u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273d14:
    // 0x273d14: 0x118d0  .word       0x000118D0                   # mfhi        $v1 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_273d18:
    // 0x273d18: 0x0  nop
    ctx->pc = 0x273d18u;
    // NOP
label_273d1c:
    // 0x273d1c: 0x0  nop
    ctx->pc = 0x273d1cu;
    // NOP
label_273d20:
    // 0x273d20: 0xa94b  .word       0x0000A94B                   # movn        $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d24:
    // 0x273d24: 0xdd10  .word       0x0000DD10                   # mfhi        $k1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d24u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273d28:
    // 0x273d28: 0x0  nop
    ctx->pc = 0x273d28u;
    // NOP
label_273d2c:
    // 0x273d2c: 0x0  nop
    ctx->pc = 0x273d2cu;
    // NOP
label_273d30:
    // 0x273d30: 0xa967  .word       0x0000A967                   # not         $s5, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d30u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273d34:
    // 0x273d34: 0x11470  tge         $zero, $at, 81
    ctx->pc = 0x273d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273d38:
    // 0x273d38: 0x0  nop
    ctx->pc = 0x273d38u;
    // NOP
label_273d3c:
    // 0x273d3c: 0x0  nop
    ctx->pc = 0x273d3cu;
    // NOP
label_273d40:
    // 0x273d40: 0xa98a  .word       0x0000A98A                   # movz        $s5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d40u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d44:
    // 0x273d44: 0x16080  sll         $t4, $at, 2
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_273d48:
    // 0x273d48: 0x0  nop
    ctx->pc = 0x273d48u;
    // NOP
label_273d4c:
    // 0x273d4c: 0x0  nop
    ctx->pc = 0x273d4cu;
    // NOP
label_273d50:
    // 0x273d50: 0xa9b7  .word       0x0000A9B7                   # INVALID     $zero, $zero, -0x5649 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273D50 raw=0x0000A9B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d54:
    // 0x273d54: 0xfff0  tge         $zero, $zero, 1023
    ctx->pc = 0x273d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d58:
    // 0x273d58: 0x0  nop
    ctx->pc = 0x273d58u;
    // NOP
label_273d5c:
    // 0x273d5c: 0x0  nop
    ctx->pc = 0x273d5cu;
    // NOP
label_273d60:
    // 0x273d60: 0xa9d7  .word       0x0000A9D7                   # dsrav       $s5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d60u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273d64:
    // 0x273d64: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273d68:
    // 0x273d68: 0x0  nop
    ctx->pc = 0x273d68u;
    // NOP
label_273d6c:
    // 0x273d6c: 0x0  nop
    ctx->pc = 0x273d6cu;
    // NOP
label_273d70:
    // 0x273d70: 0xa9f0  tge         $zero, $zero, 679
    ctx->pc = 0x273d70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d74:
    // 0x273d74: 0xee60  .word       0x0000EE60                   # add         $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273d78:
    // 0x273d78: 0x0  nop
    ctx->pc = 0x273d78u;
    // NOP
label_273d7c:
    // 0x273d7c: 0x0  nop
    ctx->pc = 0x273d7cu;
    // NOP
label_273d80:
    // 0x273d80: 0xaa0e  .word       0x0000AA0E                   # INVALID     $zero, $zero, -0x55F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x273D80 raw=0x0000AA0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d84:
    // 0x273d84: 0xab90  .word       0x0000AB90                   # mfhi        $s5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d84u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273d88:
    // 0x273d88: 0x0  nop
    ctx->pc = 0x273d88u;
    // NOP
label_273d8c:
    // 0x273d8c: 0x0  nop
    ctx->pc = 0x273d8cu;
    // NOP
label_273d90:
    // 0x273d90: 0xaa24  .word       0x0000AA24                   # and         $s5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273d94:
    // 0x273d94: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273d98:
    // 0x273d98: 0x0  nop
    ctx->pc = 0x273d98u;
    // NOP
label_273d9c:
    // 0x273d9c: 0x0  nop
    ctx->pc = 0x273d9cu;
    // NOP
label_273da0:
    // 0x273da0: 0xaa3b  dsra        $s5, $zero, 8
    ctx->pc = 0x273da0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> 8);
label_273da4:
    // 0x273da4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273da4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273da8:
    // 0x273da8: 0x0  nop
    ctx->pc = 0x273da8u;
    // NOP
label_273dac:
    // 0x273dac: 0x0  nop
    ctx->pc = 0x273dacu;
    // NOP
label_273db0:
    // 0x273db0: 0xaa48  .word       0x0000AA48                   # jr          $zero # 0000AA40 <InstrIdType: CPU_SPECIAL>
label_273db4:
    if (ctx->pc == 0x273DB4u) {
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DB8u;
        goto label_273db8;
    }
    ctx->pc = 0x273DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273DB8u;
label_273db8:
    // 0x273db8: 0x0  nop
    ctx->pc = 0x273db8u;
    // NOP
label_273dbc:
    // 0x273dbc: 0x0  nop
    ctx->pc = 0x273dbcu;
    // NOP
label_273dc0:
    // 0x273dc0: 0xaa64  .word       0x0000AA64                   # and         $s5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273dc4:
    // 0x273dc4: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273dc8:
    // 0x273dc8: 0x0  nop
    ctx->pc = 0x273dc8u;
    // NOP
label_273dcc:
    // 0x273dcc: 0x0  nop
    ctx->pc = 0x273dccu;
    // NOP
label_273dd0:
    // 0x273dd0: 0xaa7c  dsll32      $s5, $zero, 9
    ctx->pc = 0x273dd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 9));
label_273dd4:
    // 0x273dd4: 0xe6e0  .word       0x0000E6E0                   # add         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_273dd8:
    // 0x273dd8: 0x0  nop
    ctx->pc = 0x273dd8u;
    // NOP
label_273ddc:
    // 0x273ddc: 0x0  nop
    ctx->pc = 0x273ddcu;
    // NOP
label_273de0:
    // 0x273de0: 0xaa99  .word       0x0000AA99                   # multu       $zero, $zero # 0000AA80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_273de4:
    // 0x273de4: 0xe610  .word       0x0000E610                   # mfhi        $gp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273de8:
    // 0x273de8: 0x0  nop
    ctx->pc = 0x273de8u;
    // NOP
label_273dec:
    // 0x273dec: 0x0  nop
    ctx->pc = 0x273decu;
    // NOP
label_273df0:
    // 0x273df0: 0xaab6  tne         $zero, $zero, 682
    ctx->pc = 0x273df0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df4:
    // 0x273df4: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x273df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df8:
    // 0x273df8: 0x0  nop
    ctx->pc = 0x273df8u;
    // NOP
label_273dfc:
    // 0x273dfc: 0x0  nop
    ctx->pc = 0x273dfcu;
    // NOP
label_273e00:
    // 0x273e00: 0xaac6  .word       0x0000AAC6                   # srlv        $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273e04:
    // 0x273e04: 0xee20  .word       0x0000EE20                   # add         $sp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273e08:
    // 0x273e08: 0x0  nop
    ctx->pc = 0x273e08u;
    // NOP
label_273e0c:
    // 0x273e0c: 0x0  nop
    ctx->pc = 0x273e0cu;
    // NOP
label_273e10:
    // 0x273e10: 0xaae4  .word       0x0000AAE4                   # and         $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273e14:
    // 0x273e14: 0xfbe0  .word       0x0000FBE0                   # add         $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_273e18:
    // 0x273e18: 0x0  nop
    ctx->pc = 0x273e18u;
    // NOP
label_273e1c:
    // 0x273e1c: 0x0  nop
    ctx->pc = 0x273e1cu;
    // NOP
label_273e20:
    // 0x273e20: 0xab04  .word       0x0000AB04                   # sllv        $s5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273e24:
    // 0x273e24: 0xf470  tge         $zero, $zero, 977
    ctx->pc = 0x273e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273e28:
    // 0x273e28: 0x0  nop
    ctx->pc = 0x273e28u;
    // NOP
label_273e2c:
    // 0x273e2c: 0x0  nop
    ctx->pc = 0x273e2cu;
    // NOP
label_273e30:
    // 0x273e30: 0xab23  .word       0x0000AB23                   # negu        $s5, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273e34:
    // 0x273e34: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273e38:
    // 0x273e38: 0x0  nop
    ctx->pc = 0x273e38u;
    // NOP
label_273e3c:
    // 0x273e3c: 0x0  nop
    ctx->pc = 0x273e3cu;
    // NOP
label_273e40:
    // 0x273e40: 0xab39  .word       0x0000AB39                   # INVALID     $zero, $zero, -0x54C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273E40 raw=0x0000AB39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273e44:
    // 0x273e44: 0x86f0  tge         $zero, $zero, 539
    ctx->pc = 0x273e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273e48:
    // 0x273e48: 0x0  nop
    ctx->pc = 0x273e48u;
    // NOP
label_273e4c:
    // 0x273e4c: 0x0  nop
    ctx->pc = 0x273e4cu;
    // NOP
label_273e50:
    // 0x273e50: 0xab4a  .word       0x0000AB4A                   # movz        $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273e54:
    // 0x273e54: 0xaba0  .word       0x0000ABA0                   # add         $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e58:
    // 0x273e58: 0x0  nop
    ctx->pc = 0x273e58u;
    // NOP
label_273e5c:
    // 0x273e5c: 0x0  nop
    ctx->pc = 0x273e5cu;
    // NOP
label_273e60:
    // 0x273e60: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e64:
    // 0x273e64: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e64u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273e68:
    // 0x273e68: 0x0  nop
    ctx->pc = 0x273e68u;
    // NOP
label_273e6c:
    // 0x273e6c: 0x0  nop
    ctx->pc = 0x273e6cu;
    // NOP
label_273e70:
    // 0x273e70: 0xab75  .word       0x0000AB75                   # INVALID     $zero, $zero, -0x548B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273E70 raw=0x0000AB75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273e74:
    // 0x273e74: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e78:
    // 0x273e78: 0x0  nop
    ctx->pc = 0x273e78u;
    // NOP
label_273e7c:
    // 0x273e7c: 0x0  nop
    ctx->pc = 0x273e7cu;
    // NOP
label_273e80:
    // 0x273e80: 0xab8b  .word       0x0000AB8B                   # movn        $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e80u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273e84:
    // 0x273e84: 0xcac0  sll         $t9, $zero, 11
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273e88:
    // 0x273e88: 0x0  nop
    ctx->pc = 0x273e88u;
    // NOP
label_273e8c:
    // 0x273e8c: 0x0  nop
    ctx->pc = 0x273e8cu;
    // NOP
label_273e90:
    // 0x273e90: 0xaba5  .word       0x0000ABA5                   # move        $s5, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273e94:
    // 0x273e94: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_273e98:
    // 0x273e98: 0x0  nop
    ctx->pc = 0x273e98u;
    // NOP
label_273e9c:
    // 0x273e9c: 0x0  nop
    ctx->pc = 0x273e9cu;
    // NOP
label_273ea0:
    // 0x273ea0: 0xabbd  .word       0x0000ABBD                   # INVALID     $zero, $zero, -0x5443 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273EA0 raw=0x0000ABBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273ea4:
    // 0x273ea4: 0x9ed0  .word       0x00009ED0                   # mfhi        $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ea4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273ea8:
    // 0x273ea8: 0x0  nop
    ctx->pc = 0x273ea8u;
    // NOP
label_273eac:
    // 0x273eac: 0x0  nop
    ctx->pc = 0x273eacu;
    // NOP
label_273eb0:
    // 0x273eb0: 0xabd1  .word       0x0000ABD1                   # mthi        $zero # 0000ABC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273eb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_273eb4:
    // 0x273eb4: 0xe4d0  .word       0x0000E4D0                   # mfhi        $gp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273eb4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273eb8:
    // 0x273eb8: 0x0  nop
    ctx->pc = 0x273eb8u;
    // NOP
label_273ebc:
    // 0x273ebc: 0x0  nop
    ctx->pc = 0x273ebcu;
    // NOP
label_273ec0:
    // 0x273ec0: 0xabee  .word       0x0000ABEE                   # dsub        $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273ec4:
    // 0x273ec4: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_273ec8:
    // 0x273ec8: 0x0  nop
    ctx->pc = 0x273ec8u;
    // NOP
label_273ecc:
    // 0x273ecc: 0x0  nop
    ctx->pc = 0x273eccu;
    // NOP
label_273ed0:
    // 0x273ed0: 0xac08  .word       0x0000AC08                   # jr          $zero # 0000AC00 <InstrIdType: CPU_SPECIAL>
label_273ed4:
    if (ctx->pc == 0x273ED4u) {
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0xba30  tge         $zero, $zero, 744 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ED8u;
        goto label_273ed8;
    }
    ctx->pc = 0x273ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0xba30  tge         $zero, $zero, 744 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273ED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273ED8u;
label_273ed8:
    // 0x273ed8: 0x0  nop
    ctx->pc = 0x273ed8u;
    // NOP
label_273edc:
    // 0x273edc: 0x0  nop
    ctx->pc = 0x273edcu;
    // NOP
label_273ee0:
    // 0x273ee0: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ee0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273ee4:
    // 0x273ee4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x273ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273ee8:
    // 0x273ee8: 0x0  nop
    ctx->pc = 0x273ee8u;
    // NOP
label_273eec:
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
label_273ef0:
    // 0x273ef0: 0xac33  tltu        $zero, $zero, 688
    ctx->pc = 0x273ef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ef4:
    // 0x273ef4: 0xb7b0  tge         $zero, $zero, 734
    ctx->pc = 0x273ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ef8:
    // 0x273ef8: 0x0  nop
    ctx->pc = 0x273ef8u;
    // NOP
label_273efc:
    // 0x273efc: 0x0  nop
    ctx->pc = 0x273efcu;
    // NOP
label_273f00:
    // 0x273f00: 0xac4a  .word       0x0000AC4A                   # movz        $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273f04:
    // 0x273f04: 0xd2e0  .word       0x0000D2E0                   # add         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273f08:
    // 0x273f08: 0x0  nop
    ctx->pc = 0x273f08u;
    // NOP
label_273f0c:
    // 0x273f0c: 0x0  nop
    ctx->pc = 0x273f0cu;
    // NOP
label_273f10:
    // 0x273f10: 0xac65  .word       0x0000AC65                   # move        $s5, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273f14:
    // 0x273f14: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x273f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273f18:
    // 0x273f18: 0x0  nop
    ctx->pc = 0x273f18u;
    // NOP
label_273f1c:
    // 0x273f1c: 0x0  nop
    ctx->pc = 0x273f1cu;
    // NOP
label_273f20:
    // 0x273f20: 0xac78  dsll        $s5, $zero, 17
    ctx->pc = 0x273f20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 17);
label_273f24:
    // 0x273f24: 0xd6a0  .word       0x0000D6A0                   # add         $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273f28:
    // 0x273f28: 0x0  nop
    ctx->pc = 0x273f28u;
    // NOP
label_273f2c:
    // 0x273f2c: 0x0  nop
    ctx->pc = 0x273f2cu;
    // NOP
label_273f30:
    // 0x273f30: 0xac93  .word       0x0000AC93                   # mtlo        $zero # 0000AC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f30u;
    ctx->lo = GPR_U64(ctx, 0);
label_273f34:
    // 0x273f34: 0x15350  .word       0x00015350                   # mfhi        $t2 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_273f38:
    // 0x273f38: 0x0  nop
    ctx->pc = 0x273f38u;
    // NOP
label_273f3c:
    // 0x273f3c: 0x0  nop
    ctx->pc = 0x273f3cu;
    // NOP
label_273f40:
    // 0x273f40: 0xacbe  dsrl32      $s5, $zero, 18
    ctx->pc = 0x273f40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> (32 + 18));
label_273f44:
    // 0x273f44: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_273f48:
    // 0x273f48: 0x0  nop
    ctx->pc = 0x273f48u;
    // NOP
label_273f4c:
    // 0x273f4c: 0x0  nop
    ctx->pc = 0x273f4cu;
    // NOP
label_273f50:
    // 0x273f50: 0xacda  .word       0x0000ACDA                   # div         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273f54:
    // 0x273f54: 0xee20  .word       0x0000EE20                   # add         $sp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273f58:
    // 0x273f58: 0x0  nop
    ctx->pc = 0x273f58u;
    // NOP
label_273f5c:
    // 0x273f5c: 0x0  nop
    ctx->pc = 0x273f5cu;
    // NOP
label_273f60:
    // 0x273f60: 0xacf8  dsll        $s5, $zero, 19
    ctx->pc = 0x273f60u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 19);
label_273f64:
    // 0x273f64: 0x13f70  tge         $zero, $at, 253
    ctx->pc = 0x273f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273f68:
    // 0x273f68: 0x0  nop
    ctx->pc = 0x273f68u;
    // NOP
label_273f6c:
    // 0x273f6c: 0x0  nop
    ctx->pc = 0x273f6cu;
    // NOP
label_273f70:
    // 0x273f70: 0xad20  .word       0x0000AD20                   # add         $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273f74:
    // 0x273f74: 0xa430  tge         $zero, $zero, 656
    ctx->pc = 0x273f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273f78:
    // 0x273f78: 0x0  nop
    ctx->pc = 0x273f78u;
    // NOP
label_273f7c:
    // 0x273f7c: 0x0  nop
    ctx->pc = 0x273f7cu;
    // NOP
label_273f80:
    // 0x273f80: 0xad35  .word       0x0000AD35                   # INVALID     $zero, $zero, -0x52CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273F80 raw=0x0000AD35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273f84:
    // 0x273f84: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f84u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_273f88:
    // 0x273f88: 0x0  nop
    ctx->pc = 0x273f88u;
    // NOP
label_273f8c:
    // 0x273f8c: 0x0  nop
    ctx->pc = 0x273f8cu;
    // NOP
label_273f90:
    // 0x273f90: 0xad48  .word       0x0000AD48                   # jr          $zero # 0000AD40 <InstrIdType: CPU_SPECIAL>
label_273f94:
    if (ctx->pc == 0x273F94u) {
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F98u;
        goto label_273f98;
    }
    ctx->pc = 0x273F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273F98u;
label_273f98:
    // 0x273f98: 0x0  nop
    ctx->pc = 0x273f98u;
    // NOP
label_273f9c:
    // 0x273f9c: 0x0  nop
    ctx->pc = 0x273f9cu;
    // NOP
label_273fa0:
    // 0x273fa0: 0xad57  .word       0x0000AD57                   # dsrav       $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fa0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273fa4:
    // 0x273fa4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x273fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273fa8:
    // 0x273fa8: 0x0  nop
    ctx->pc = 0x273fa8u;
    // NOP
label_273fac:
    // 0x273fac: 0x0  nop
    ctx->pc = 0x273facu;
    // NOP
label_273fb0:
    // 0x273fb0: 0xad6e  .word       0x0000AD6E                   # dsub        $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273fb4:
    // 0x273fb4: 0x126c0  sll         $a0, $at, 27
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_273fb8:
    // 0x273fb8: 0x0  nop
    ctx->pc = 0x273fb8u;
    // NOP
label_273fbc:
    // 0x273fbc: 0x0  nop
    ctx->pc = 0x273fbcu;
    // NOP
label_273fc0:
    // 0x273fc0: 0xad93  .word       0x0000AD93                   # mtlo        $zero # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fc0u;
    ctx->lo = GPR_U64(ctx, 0);
label_273fc4:
    // 0x273fc4: 0xd170  tge         $zero, $zero, 837
    ctx->pc = 0x273fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273fc8:
    // 0x273fc8: 0x0  nop
    ctx->pc = 0x273fc8u;
    // NOP
label_273fcc:
    // 0x273fcc: 0x0  nop
    ctx->pc = 0x273fccu;
    // NOP
label_273fd0:
    // 0x273fd0: 0xadae  .word       0x0000ADAE                   # dsub        $s5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273fd4:
    // 0x273fd4: 0x8b40  sll         $s1, $zero, 13
    ctx->pc = 0x273fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_273fd8:
    // 0x273fd8: 0x0  nop
    ctx->pc = 0x273fd8u;
    // NOP
label_273fdc:
    // 0x273fdc: 0x0  nop
    ctx->pc = 0x273fdcu;
    // NOP
label_273fe0:
    // 0x273fe0: 0xadc0  sll         $s5, $zero, 23
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_273fe4:
    // 0x273fe4: 0xecd0  .word       0x0000ECD0                   # mfhi        $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fe4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_273fe8:
    // 0x273fe8: 0x0  nop
    ctx->pc = 0x273fe8u;
    // NOP
label_273fec:
    // 0x273fec: 0x0  nop
    ctx->pc = 0x273fecu;
    // NOP
label_273ff0:
    // 0x273ff0: 0xadde  .word       0x0000ADDE                   # ddiv        $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x273FF0 raw=0x0000ADDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273ff4:
    // 0x273ff4: 0x9100  sll         $s2, $zero, 4
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273ff8:
    // 0x273ff8: 0x0  nop
    ctx->pc = 0x273ff8u;
    // NOP
label_273ffc:
    // 0x273ffc: 0x0  nop
    ctx->pc = 0x273ffcu;
    // NOP
label_274000:
    // 0x274000: 0xadf1  tgeu        $zero, $zero, 695
    ctx->pc = 0x274000u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274004:
    // 0x274004: 0xc170  tge         $zero, $zero, 773
    ctx->pc = 0x274004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274008:
    // 0x274008: 0x0  nop
    ctx->pc = 0x274008u;
    // NOP
label_27400c:
    // 0x27400c: 0x0  nop
    ctx->pc = 0x27400cu;
    // NOP
label_274010:
    // 0x274010: 0xae0a  .word       0x0000AE0A                   # movz        $s5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274010u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_274014:
    // 0x274014: 0xbb50  .word       0x0000BB50                   # mfhi        $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274014u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274018:
    // 0x274018: 0x0  nop
    ctx->pc = 0x274018u;
    // NOP
label_27401c:
    // 0x27401c: 0x0  nop
    ctx->pc = 0x27401cu;
    // NOP
label_274020:
    // 0x274020: 0xae22  .word       0x0000AE22                   # neg         $s5, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_274024:
    // 0x274024: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_274028:
    // 0x274028: 0x0  nop
    ctx->pc = 0x274028u;
    // NOP
label_27402c:
    // 0x27402c: 0x0  nop
    ctx->pc = 0x27402cu;
    // NOP
label_274030:
    // 0x274030: 0xae40  sll         $s5, $zero, 25
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274034:
    // 0x274034: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_274038:
    // 0x274038: 0x0  nop
    ctx->pc = 0x274038u;
    // NOP
label_27403c:
    // 0x27403c: 0x0  nop
    ctx->pc = 0x27403cu;
    // NOP
label_274040:
    // 0x274040: 0xae4a  .word       0x0000AE4A                   # movz        $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274040u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_274044:
    // 0x274044: 0x168d0  .word       0x000168D0                   # mfhi        $t5 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274044u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274048:
    // 0x274048: 0x0  nop
    ctx->pc = 0x274048u;
    // NOP
label_27404c:
    // 0x27404c: 0x0  nop
    ctx->pc = 0x27404cu;
    // NOP
label_274050:
    // 0x274050: 0xae78  dsll        $s5, $zero, 25
    ctx->pc = 0x274050u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 25);
label_274054:
    // 0x274054: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274054u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_274058:
    // 0x274058: 0x0  nop
    ctx->pc = 0x274058u;
    // NOP
label_27405c:
    // 0x27405c: 0x0  nop
    ctx->pc = 0x27405cu;
    // NOP
label_274060:
    // 0x274060: 0xae8d  break       0, 698
    ctx->pc = 0x274060u;
    runtime->handleBreak(rdram, ctx);
label_274064:
    // 0x274064: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274068:
    // 0x274068: 0x0  nop
    ctx->pc = 0x274068u;
    // NOP
label_27406c:
    // 0x27406c: 0x0  nop
    ctx->pc = 0x27406cu;
    // NOP
label_274070:
    // 0x274070: 0xae98  .word       0x0000AE98                   # mult        $s5, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_274074:
    // 0x274074: 0x71f0  tge         $zero, $zero, 455
    ctx->pc = 0x274074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274078:
    // 0x274078: 0x0  nop
    ctx->pc = 0x274078u;
    // NOP
label_27407c:
    // 0x27407c: 0x0  nop
    ctx->pc = 0x27407cu;
    // NOP
label_274080:
    // 0x274080: 0xaea7  .word       0x0000AEA7                   # not         $s5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274080u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_274084:
    // 0x274084: 0xbcd0  .word       0x0000BCD0                   # mfhi        $s7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274088:
    // 0x274088: 0x0  nop
    ctx->pc = 0x274088u;
    // NOP
label_27408c:
    // 0x27408c: 0x0  nop
    ctx->pc = 0x27408cu;
    // NOP
label_274090:
    // 0x274090: 0xaebf  dsra32      $s5, $zero, 26
    ctx->pc = 0x274090u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (32 + 26));
label_274094:
    // 0x274094: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274098:
    // 0x274098: 0x0  nop
    ctx->pc = 0x274098u;
    // NOP
label_27409c:
    // 0x27409c: 0x0  nop
    ctx->pc = 0x27409cu;
    // NOP
label_2740a0:
    // 0x2740a0: 0xaedc  .word       0x0000AEDC                   # dmult       $zero, $zero # 0000AEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2740A0 raw=0x0000AEDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2740a4:
    // 0x2740a4: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2740a8:
    // 0x2740a8: 0x0  nop
    ctx->pc = 0x2740a8u;
    // NOP
label_2740ac:
    // 0x2740ac: 0x0  nop
    ctx->pc = 0x2740acu;
    // NOP
label_2740b0:
    // 0x2740b0: 0xaef9  .word       0x0000AEF9                   # INVALID     $zero, $zero, -0x5107 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2740B0 raw=0x0000AEF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2740b4:
    // 0x2740b4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2740b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740b8:
    // 0x2740b8: 0x0  nop
    ctx->pc = 0x2740b8u;
    // NOP
label_2740bc:
    // 0x2740bc: 0x0  nop
    ctx->pc = 0x2740bcu;
    // NOP
label_2740c0:
    // 0x2740c0: 0xaf04  .word       0x0000AF04                   # sllv        $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2740c4:
    // 0x2740c4: 0xaff0  tge         $zero, $zero, 703
    ctx->pc = 0x2740c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740c8:
    // 0x2740c8: 0x0  nop
    ctx->pc = 0x2740c8u;
    // NOP
label_2740cc:
    // 0x2740cc: 0x0  nop
    ctx->pc = 0x2740ccu;
    // NOP
label_2740d0:
    // 0x2740d0: 0xaf1a  .word       0x0000AF1A                   # div         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2740d4:
    // 0x2740d4: 0xa3f0  tge         $zero, $zero, 655
    ctx->pc = 0x2740d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740d8:
    // 0x2740d8: 0x0  nop
    ctx->pc = 0x2740d8u;
    // NOP
label_2740dc:
    // 0x2740dc: 0x0  nop
    ctx->pc = 0x2740dcu;
    // NOP
label_2740e0:
    // 0x2740e0: 0xaf2f  .word       0x0000AF2F                   # dsubu       $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2740e4:
    // 0x2740e4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2740e8:
    // 0x2740e8: 0x0  nop
    ctx->pc = 0x2740e8u;
    // NOP
label_2740ec:
    // 0x2740ec: 0x0  nop
    ctx->pc = 0x2740ecu;
    // NOP
label_2740f0:
    // 0x2740f0: 0xaf40  sll         $s5, $zero, 29
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2740f4:
    // 0x2740f4: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x2740f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740f8:
    // 0x2740f8: 0x0  nop
    ctx->pc = 0x2740f8u;
    // NOP
label_2740fc:
    // 0x2740fc: 0x0  nop
    ctx->pc = 0x2740fcu;
    // NOP
label_274100:
    // 0x274100: 0xaf51  .word       0x0000AF51                   # mthi        $zero # 0000AF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274100u;
    ctx->hi = GPR_U64(ctx, 0);
label_274104:
    // 0x274104: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274108:
    // 0x274108: 0x0  nop
    ctx->pc = 0x274108u;
    // NOP
label_27410c:
    // 0x27410c: 0x0  nop
    ctx->pc = 0x27410cu;
    // NOP
label_274110:
    // 0x274110: 0xaf71  tgeu        $zero, $zero, 701
    ctx->pc = 0x274110u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274114:
    // 0x274114: 0x10a10  .word       0x00010A10                   # mfhi        $at # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274114u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_274118:
    // 0x274118: 0x0  nop
    ctx->pc = 0x274118u;
    // NOP
label_27411c:
    // 0x27411c: 0x0  nop
    ctx->pc = 0x27411cu;
    // NOP
label_274120:
    // 0x274120: 0xaf93  .word       0x0000AF93                   # mtlo        $zero # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274120u;
    ctx->lo = GPR_U64(ctx, 0);
label_274124:
    // 0x274124: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x274124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274128:
    // 0x274128: 0x0  nop
    ctx->pc = 0x274128u;
    // NOP
label_27412c:
    // 0x27412c: 0x0  nop
    ctx->pc = 0x27412cu;
    // NOP
label_274130:
    // 0x274130: 0xaf9d  .word       0x0000AF9D                   # dmultu      $zero, $zero # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x274130 raw=0x0000AF9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274134:
    // 0x274134: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_274138:
    // 0x274138: 0x0  nop
    ctx->pc = 0x274138u;
    // NOP
label_27413c:
    // 0x27413c: 0x0  nop
    ctx->pc = 0x27413cu;
    // NOP
label_274140:
    // 0x274140: 0xafb8  dsll        $s5, $zero, 30
    ctx->pc = 0x274140u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 30);
label_274144:
    // 0x274144: 0x11a00  sll         $v1, $at, 8
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_274148:
    // 0x274148: 0x0  nop
    ctx->pc = 0x274148u;
    // NOP
label_27414c:
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
label_274150:
    // 0x274150: 0xafdc  .word       0x0000AFDC                   # dmult       $zero, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274150 raw=0x0000AFDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274154:
    // 0x274154: 0x11f90  .word       0x00011F90                   # mfhi        $v1 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274154u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_274158:
    // 0x274158: 0x0  nop
    ctx->pc = 0x274158u;
    // NOP
label_27415c:
    // 0x27415c: 0x0  nop
    ctx->pc = 0x27415cu;
    // NOP
label_274160:
    // 0x274160: 0xb000  sll         $s6, $zero, 0
    ctx->pc = 0x274160u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_274164:
    // 0x274164: 0x1b870  tge         $zero, $at, 737
    ctx->pc = 0x274164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_274168:
    // 0x274168: 0x0  nop
    ctx->pc = 0x274168u;
    // NOP
label_27416c:
    // 0x27416c: 0x0  nop
    ctx->pc = 0x27416cu;
    // NOP
label_274170:
    // 0x274170: 0xb038  dsll        $s6, $zero, 0
    ctx->pc = 0x274170u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 0);
label_274174:
    // 0x274174: 0xd8c0  sll         $k1, $zero, 3
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_274178:
    // 0x274178: 0x0  nop
    ctx->pc = 0x274178u;
    // NOP
label_27417c:
    // 0x27417c: 0x0  nop
    ctx->pc = 0x27417cu;
    // NOP
label_274180:
    // 0x274180: 0xb054  .word       0x0000B054                   # dsllv       $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274180u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274184:
    // 0x274184: 0xf970  tge         $zero, $zero, 997
    ctx->pc = 0x274184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274188:
    // 0x274188: 0x0  nop
    ctx->pc = 0x274188u;
    // NOP
label_27418c:
    // 0x27418c: 0x0  nop
    ctx->pc = 0x27418cu;
    // NOP
label_274190:
    // 0x274190: 0xb074  teq         $zero, $zero, 705
    ctx->pc = 0x274190u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274194:
    // 0x274194: 0x11f60  .word       0x00011F60                   # add         $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_274198:
    // 0x274198: 0x0  nop
    ctx->pc = 0x274198u;
    // NOP
label_27419c:
    // 0x27419c: 0x0  nop
    ctx->pc = 0x27419cu;
    // NOP
label_2741a0:
    // 0x2741a0: 0xb098  .word       0x0000B098                   # mult        $s6, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2741a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2741a4:
    // 0x2741a4: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2741a8:
    // 0x2741a8: 0x0  nop
    ctx->pc = 0x2741a8u;
    // NOP
label_2741ac:
    // 0x2741ac: 0x0  nop
    ctx->pc = 0x2741acu;
    // NOP
label_2741b0:
    // 0x2741b0: 0xb0ac  .word       0x0000B0AC                   # dadd        $s6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2741b4:
    // 0x2741b4: 0xde30  tge         $zero, $zero, 888
    ctx->pc = 0x2741b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2741b8:
    // 0x2741b8: 0x0  nop
    ctx->pc = 0x2741b8u;
    // NOP
label_2741bc:
    // 0x2741bc: 0x0  nop
    ctx->pc = 0x2741bcu;
    // NOP
label_2741c0:
    // 0x2741c0: 0xb0c8  .word       0x0000B0C8                   # jr          $zero # 0000B0C0 <InstrIdType: CPU_SPECIAL>
label_2741c4:
    if (ctx->pc == 0x2741C4u) {
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x10f10  .word       0x00010F10                   # mfhi        $at # 00010700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741C8u;
        goto label_2741c8;
    }
    ctx->pc = 0x2741C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x10f10  .word       0x00010F10                   # mfhi        $at # 00010700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2741C8u;
label_2741c8:
    // 0x2741c8: 0x0  nop
    ctx->pc = 0x2741c8u;
    // NOP
label_2741cc:
    // 0x2741cc: 0x0  nop
    ctx->pc = 0x2741ccu;
    // NOP
label_2741d0:
    // 0x2741d0: 0xb0ea  .word       0x0000B0EA                   # slt         $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741d0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2741d4:
    // 0x2741d4: 0x11cd0  .word       0x00011CD0                   # mfhi        $v1 # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2741d8:
    // 0x2741d8: 0x0  nop
    ctx->pc = 0x2741d8u;
    // NOP
label_2741dc:
    // 0x2741dc: 0x0  nop
    ctx->pc = 0x2741dcu;
    // NOP
label_2741e0:
    // 0x2741e0: 0xb10e  .word       0x0000B10E                   # INVALID     $zero, $zero, -0x4EF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2741E0 raw=0x0000B10E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2741e4:
    // 0x2741e4: 0x100e0  .word       0x000100E0                   # add         $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2741e8:
    // 0x2741e8: 0x0  nop
    ctx->pc = 0x2741e8u;
    // NOP
label_2741ec:
    // 0x2741ec: 0x0  nop
    ctx->pc = 0x2741ecu;
    // NOP
label_2741f0:
    // 0x2741f0: 0xb12f  .word       0x0000B12F                   # dsubu       $s6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2741f4:
    // 0x2741f4: 0x13d20  .word       0x00013D20                   # add         $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2741f8:
    // 0x2741f8: 0x0  nop
    ctx->pc = 0x2741f8u;
    // NOP
label_2741fc:
    // 0x2741fc: 0x0  nop
    ctx->pc = 0x2741fcu;
    // NOP
label_274200:
    // 0x274200: 0xb157  .word       0x0000B157                   # dsrav       $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274200u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274204:
    // 0x274204: 0xe0d0  .word       0x0000E0D0                   # mfhi        $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274204u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_274208:
    // 0x274208: 0x0  nop
    ctx->pc = 0x274208u;
    // NOP
label_27420c:
    // 0x27420c: 0x0  nop
    ctx->pc = 0x27420cu;
    // NOP
label_274210:
    // 0x274210: 0xb174  teq         $zero, $zero, 709
    ctx->pc = 0x274210u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274214:
    // 0x274214: 0x12c40  sll         $a1, $at, 17
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_274218:
    // 0x274218: 0x0  nop
    ctx->pc = 0x274218u;
    // NOP
label_27421c:
    // 0x27421c: 0x0  nop
    ctx->pc = 0x27421cu;
    // NOP
label_274220:
    // 0x274220: 0xb19a  .word       0x0000B19A                   # div         $s6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274220u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274224:
    // 0x274224: 0xee80  sll         $sp, $zero, 26
    ctx->pc = 0x274224u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_274228:
    // 0x274228: 0x0  nop
    ctx->pc = 0x274228u;
    // NOP
label_27422c:
    // 0x27422c: 0x0  nop
    ctx->pc = 0x27422cu;
    // NOP
label_274230:
    // 0x274230: 0xb1b8  dsll        $s6, $zero, 6
    ctx->pc = 0x274230u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 6);
label_274234:
    // 0x274234: 0x162c0  sll         $t4, $at, 11
    ctx->pc = 0x274234u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_274238:
    // 0x274238: 0x0  nop
    ctx->pc = 0x274238u;
    // NOP
label_27423c:
    // 0x27423c: 0x0  nop
    ctx->pc = 0x27423cu;
    // NOP
label_274240:
    // 0x274240: 0xb1e5  .word       0x0000B1E5                   # move        $s6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274240u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274244:
    // 0x274244: 0x13610  .word       0x00013610                   # mfhi        $a2 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274244u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_274248:
    // 0x274248: 0x0  nop
    ctx->pc = 0x274248u;
    // NOP
label_27424c:
    // 0x27424c: 0x0  nop
    ctx->pc = 0x27424cu;
    // NOP
label_274250:
    // 0x274250: 0xb20c  syscall     712
    ctx->pc = 0x274250u;
    ctx->pc = 0x274254u;
runtime->handleSyscall(rdram, ctx, 0x2C8u);
label_274254:
    // 0x274254: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x274254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_274258:
    // 0x274258: 0x0  nop
    ctx->pc = 0x274258u;
    // NOP
label_27425c:
    // 0x27425c: 0x0  nop
    ctx->pc = 0x27425cu;
    // NOP
label_274260:
    // 0x274260: 0xb219  .word       0x0000B219                   # multu       $zero, $zero # 0000B200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274260u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_274264:
    // 0x274264: 0x17510  .word       0x00017510                   # mfhi        $t6 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274264u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_274268:
    // 0x274268: 0x0  nop
    ctx->pc = 0x274268u;
    // NOP
label_27426c:
    // 0x27426c: 0x0  nop
    ctx->pc = 0x27426cu;
    // NOP
label_274270:
    // 0x274270: 0xb248  .word       0x0000B248                   # jr          $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
label_274274:
    if (ctx->pc == 0x274274u) {
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274270u;
        // 0x274274: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274278u;
        goto label_274278;
    }
    ctx->pc = 0x274270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274270u;
        // 0x274274: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274270u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274278u;
label_274278:
    // 0x274278: 0x0  nop
    ctx->pc = 0x274278u;
    // NOP
label_27427c:
    // 0x27427c: 0x0  nop
    ctx->pc = 0x27427cu;
    // NOP
label_274280:
    // 0x274280: 0xb273  tltu        $zero, $zero, 713
    ctx->pc = 0x274280u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274284:
    // 0x274284: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x274284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274288:
    // 0x274288: 0x0  nop
    ctx->pc = 0x274288u;
    // NOP
label_27428c:
    // 0x27428c: 0x0  nop
    ctx->pc = 0x27428cu;
    // NOP
label_274290:
    // 0x274290: 0xb28f  .word       0x0000B28F                   # sync # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274290u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274294:
    // 0x274294: 0xf960  .word       0x0000F960                   # add         $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_274298:
    // 0x274298: 0x0  nop
    ctx->pc = 0x274298u;
    // NOP
label_27429c:
    // 0x27429c: 0x0  nop
    ctx->pc = 0x27429cu;
    // NOP
label_2742a0:
    // 0x2742a0: 0xb2af  .word       0x0000B2AF                   # dsubu       $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2742a4:
    // 0x2742a4: 0xc820  add         $t9, $zero, $zero
    ctx->pc = 0x2742a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2742a8:
    // 0x2742a8: 0x0  nop
    ctx->pc = 0x2742a8u;
    // NOP
label_2742ac:
    // 0x2742ac: 0x0  nop
    ctx->pc = 0x2742acu;
    // NOP
label_2742b0:
    // 0x2742b0: 0xb2c9  .word       0x0000B2C9                   # jalr        $s6, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_2742b4:
    if (ctx->pc == 0x2742B4u) {
        ctx->pc = 0x2742B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B0u;
        // 0x2742b4: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742B8u;
        goto label_2742b8;
    }
    ctx->pc = 0x2742B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x2742B8u);
        ctx->pc = 0x2742B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B0u;
        // 0x2742b4: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742B0u, 0x2742B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2742B8u;
label_2742b8:
    // 0x2742b8: 0x0  nop
    ctx->pc = 0x2742b8u;
    // NOP
label_2742bc:
    // 0x2742bc: 0x0  nop
    ctx->pc = 0x2742bcu;
    // NOP
label_2742c0:
    // 0x2742c0: 0xb2e7  .word       0x0000B2E7                   # not         $s6, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742c0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2742c4:
    // 0x2742c4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x2742c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2742c8:
    // 0x2742c8: 0x0  nop
    ctx->pc = 0x2742c8u;
    // NOP
label_2742cc:
    // 0x2742cc: 0x0  nop
    ctx->pc = 0x2742ccu;
    // NOP
    ctx->pc = 0x2742d0u;
    return;
}
