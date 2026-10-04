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


void FUN_0014eba0_part50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x166a70u: goto label_166a70;
        case 0x166a74u: goto label_166a74;
        case 0x166a78u: goto label_166a78;
        case 0x166a7cu: goto label_166a7c;
        case 0x166a80u: goto label_166a80;
        case 0x166a84u: goto label_166a84;
        case 0x166a88u: goto label_166a88;
        case 0x166a8cu: goto label_166a8c;
        case 0x166a90u: goto label_166a90;
        case 0x166a94u: goto label_166a94;
        case 0x166a98u: goto label_166a98;
        case 0x166a9cu: goto label_166a9c;
        case 0x166aa0u: goto label_166aa0;
        case 0x166aa4u: goto label_166aa4;
        case 0x166aa8u: goto label_166aa8;
        case 0x166aacu: goto label_166aac;
        case 0x166ab0u: goto label_166ab0;
        case 0x166ab4u: goto label_166ab4;
        case 0x166ab8u: goto label_166ab8;
        case 0x166abcu: goto label_166abc;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ac4u: goto label_166ac4;
        case 0x166ac8u: goto label_166ac8;
        case 0x166accu: goto label_166acc;
        case 0x166ad0u: goto label_166ad0;
        case 0x166ad4u: goto label_166ad4;
        case 0x166ad8u: goto label_166ad8;
        case 0x166adcu: goto label_166adc;
        case 0x166ae0u: goto label_166ae0;
        case 0x166ae4u: goto label_166ae4;
        case 0x166ae8u: goto label_166ae8;
        case 0x166aecu: goto label_166aec;
        case 0x166af0u: goto label_166af0;
        case 0x166af4u: goto label_166af4;
        case 0x166af8u: goto label_166af8;
        case 0x166afcu: goto label_166afc;
        case 0x166b00u: goto label_166b00;
        case 0x166b04u: goto label_166b04;
        case 0x166b08u: goto label_166b08;
        case 0x166b0cu: goto label_166b0c;
        case 0x166b10u: goto label_166b10;
        case 0x166b14u: goto label_166b14;
        case 0x166b18u: goto label_166b18;
        case 0x166b1cu: goto label_166b1c;
        case 0x166b20u: goto label_166b20;
        case 0x166b24u: goto label_166b24;
        case 0x166b28u: goto label_166b28;
        case 0x166b2cu: goto label_166b2c;
        case 0x166b30u: goto label_166b30;
        case 0x166b34u: goto label_166b34;
        case 0x166b38u: goto label_166b38;
        case 0x166b3cu: goto label_166b3c;
        case 0x166b40u: goto label_166b40;
        case 0x166b44u: goto label_166b44;
        case 0x166b48u: goto label_166b48;
        case 0x166b4cu: goto label_166b4c;
        case 0x166b50u: goto label_166b50;
        case 0x166b54u: goto label_166b54;
        case 0x166b58u: goto label_166b58;
        case 0x166b5cu: goto label_166b5c;
        case 0x166b60u: goto label_166b60;
        case 0x166b64u: goto label_166b64;
        case 0x166b68u: goto label_166b68;
        case 0x166b6cu: goto label_166b6c;
        case 0x166b70u: goto label_166b70;
        case 0x166b74u: goto label_166b74;
        case 0x166b78u: goto label_166b78;
        case 0x166b7cu: goto label_166b7c;
        case 0x166b80u: goto label_166b80;
        case 0x166b84u: goto label_166b84;
        case 0x166b88u: goto label_166b88;
        case 0x166b8cu: goto label_166b8c;
        case 0x166b90u: goto label_166b90;
        case 0x166b94u: goto label_166b94;
        case 0x166b98u: goto label_166b98;
        case 0x166b9cu: goto label_166b9c;
        case 0x166ba0u: goto label_166ba0;
        case 0x166ba4u: goto label_166ba4;
        case 0x166ba8u: goto label_166ba8;
        case 0x166bacu: goto label_166bac;
        case 0x166bb0u: goto label_166bb0;
        case 0x166bb4u: goto label_166bb4;
        case 0x166bb8u: goto label_166bb8;
        case 0x166bbcu: goto label_166bbc;
        case 0x166bc0u: goto label_166bc0;
        case 0x166bc4u: goto label_166bc4;
        case 0x166bc8u: goto label_166bc8;
        case 0x166bccu: goto label_166bcc;
        case 0x166bd0u: goto label_166bd0;
        case 0x166bd4u: goto label_166bd4;
        case 0x166bd8u: goto label_166bd8;
        case 0x166bdcu: goto label_166bdc;
        case 0x166be0u: goto label_166be0;
        case 0x166be4u: goto label_166be4;
        case 0x166be8u: goto label_166be8;
        case 0x166becu: goto label_166bec;
        case 0x166bf0u: goto label_166bf0;
        case 0x166bf4u: goto label_166bf4;
        case 0x166bf8u: goto label_166bf8;
        case 0x166bfcu: goto label_166bfc;
        case 0x166c00u: goto label_166c00;
        case 0x166c04u: goto label_166c04;
        case 0x166c08u: goto label_166c08;
        case 0x166c0cu: goto label_166c0c;
        case 0x166c10u: goto label_166c10;
        case 0x166c14u: goto label_166c14;
        case 0x166c18u: goto label_166c18;
        case 0x166c1cu: goto label_166c1c;
        case 0x166c20u: goto label_166c20;
        case 0x166c24u: goto label_166c24;
        case 0x166c28u: goto label_166c28;
        case 0x166c2cu: goto label_166c2c;
        case 0x166c30u: goto label_166c30;
        case 0x166c34u: goto label_166c34;
        case 0x166c38u: goto label_166c38;
        case 0x166c3cu: goto label_166c3c;
        case 0x166c40u: goto label_166c40;
        case 0x166c44u: goto label_166c44;
        case 0x166c48u: goto label_166c48;
        case 0x166c4cu: goto label_166c4c;
        case 0x166c50u: goto label_166c50;
        case 0x166c54u: goto label_166c54;
        case 0x166c58u: goto label_166c58;
        case 0x166c5cu: goto label_166c5c;
        case 0x166c60u: goto label_166c60;
        case 0x166c64u: goto label_166c64;
        case 0x166c68u: goto label_166c68;
        case 0x166c6cu: goto label_166c6c;
        case 0x166c70u: goto label_166c70;
        case 0x166c74u: goto label_166c74;
        case 0x166c78u: goto label_166c78;
        case 0x166c7cu: goto label_166c7c;
        case 0x166c80u: goto label_166c80;
        case 0x166c84u: goto label_166c84;
        case 0x166c88u: goto label_166c88;
        case 0x166c8cu: goto label_166c8c;
        case 0x166c90u: goto label_166c90;
        case 0x166c94u: goto label_166c94;
        case 0x166c98u: goto label_166c98;
        case 0x166c9cu: goto label_166c9c;
        case 0x166ca0u: goto label_166ca0;
        case 0x166ca4u: goto label_166ca4;
        case 0x166ca8u: goto label_166ca8;
        case 0x166cacu: goto label_166cac;
        case 0x166cb0u: goto label_166cb0;
        case 0x166cb4u: goto label_166cb4;
        case 0x166cb8u: goto label_166cb8;
        case 0x166cbcu: goto label_166cbc;
        case 0x166cc0u: goto label_166cc0;
        case 0x166cc4u: goto label_166cc4;
        case 0x166cc8u: goto label_166cc8;
        case 0x166cccu: goto label_166ccc;
        case 0x166cd0u: goto label_166cd0;
        case 0x166cd4u: goto label_166cd4;
        case 0x166cd8u: goto label_166cd8;
        case 0x166cdcu: goto label_166cdc;
        case 0x166ce0u: goto label_166ce0;
        case 0x166ce4u: goto label_166ce4;
        case 0x166ce8u: goto label_166ce8;
        case 0x166cecu: goto label_166cec;
        case 0x166cf0u: goto label_166cf0;
        case 0x166cf4u: goto label_166cf4;
        case 0x166cf8u: goto label_166cf8;
        case 0x166cfcu: goto label_166cfc;
        case 0x166d00u: goto label_166d00;
        case 0x166d04u: goto label_166d04;
        case 0x166d08u: goto label_166d08;
        case 0x166d0cu: goto label_166d0c;
        case 0x166d10u: goto label_166d10;
        case 0x166d14u: goto label_166d14;
        case 0x166d18u: goto label_166d18;
        case 0x166d1cu: goto label_166d1c;
        case 0x166d20u: goto label_166d20;
        case 0x166d24u: goto label_166d24;
        case 0x166d28u: goto label_166d28;
        case 0x166d2cu: goto label_166d2c;
        case 0x166d30u: goto label_166d30;
        case 0x166d34u: goto label_166d34;
        case 0x166d38u: goto label_166d38;
        case 0x166d3cu: goto label_166d3c;
        case 0x166d40u: goto label_166d40;
        case 0x166d44u: goto label_166d44;
        case 0x166d48u: goto label_166d48;
        case 0x166d4cu: goto label_166d4c;
        case 0x166d50u: goto label_166d50;
        case 0x166d54u: goto label_166d54;
        case 0x166d58u: goto label_166d58;
        case 0x166d5cu: goto label_166d5c;
        case 0x166d60u: goto label_166d60;
        case 0x166d64u: goto label_166d64;
        case 0x166d68u: goto label_166d68;
        case 0x166d6cu: goto label_166d6c;
        case 0x166d70u: goto label_166d70;
        case 0x166d74u: goto label_166d74;
        case 0x166d78u: goto label_166d78;
        case 0x166d7cu: goto label_166d7c;
        case 0x166d80u: goto label_166d80;
        case 0x166d84u: goto label_166d84;
        case 0x166d88u: goto label_166d88;
        case 0x166d8cu: goto label_166d8c;
        case 0x166d90u: goto label_166d90;
        case 0x166d94u: goto label_166d94;
        case 0x166d98u: goto label_166d98;
        case 0x166d9cu: goto label_166d9c;
        case 0x166da0u: goto label_166da0;
        case 0x166da4u: goto label_166da4;
        case 0x166da8u: goto label_166da8;
        case 0x166dacu: goto label_166dac;
        case 0x166db0u: goto label_166db0;
        case 0x166db4u: goto label_166db4;
        case 0x166db8u: goto label_166db8;
        case 0x166dbcu: goto label_166dbc;
        case 0x166dc0u: goto label_166dc0;
        case 0x166dc4u: goto label_166dc4;
        case 0x166dc8u: goto label_166dc8;
        case 0x166dccu: goto label_166dcc;
        case 0x166dd0u: goto label_166dd0;
        case 0x166dd4u: goto label_166dd4;
        case 0x166dd8u: goto label_166dd8;
        case 0x166ddcu: goto label_166ddc;
        case 0x166de0u: goto label_166de0;
        case 0x166de4u: goto label_166de4;
        case 0x166de8u: goto label_166de8;
        case 0x166decu: goto label_166dec;
        case 0x166df0u: goto label_166df0;
        case 0x166df4u: goto label_166df4;
        case 0x166df8u: goto label_166df8;
        case 0x166dfcu: goto label_166dfc;
        case 0x166e00u: goto label_166e00;
        case 0x166e04u: goto label_166e04;
        case 0x166e08u: goto label_166e08;
        case 0x166e0cu: goto label_166e0c;
        case 0x166e10u: goto label_166e10;
        case 0x166e14u: goto label_166e14;
        case 0x166e18u: goto label_166e18;
        case 0x166e1cu: goto label_166e1c;
        case 0x166e20u: goto label_166e20;
        case 0x166e24u: goto label_166e24;
        case 0x166e28u: goto label_166e28;
        case 0x166e2cu: goto label_166e2c;
        case 0x166e30u: goto label_166e30;
        case 0x166e34u: goto label_166e34;
        case 0x166e38u: goto label_166e38;
        case 0x166e3cu: goto label_166e3c;
        case 0x166e40u: goto label_166e40;
        case 0x166e44u: goto label_166e44;
        case 0x166e48u: goto label_166e48;
        case 0x166e4cu: goto label_166e4c;
        case 0x166e50u: goto label_166e50;
        case 0x166e54u: goto label_166e54;
        case 0x166e58u: goto label_166e58;
        case 0x166e5cu: goto label_166e5c;
        case 0x166e60u: goto label_166e60;
        case 0x166e64u: goto label_166e64;
        case 0x166e68u: goto label_166e68;
        case 0x166e6cu: goto label_166e6c;
        case 0x166e70u: goto label_166e70;
        case 0x166e74u: goto label_166e74;
        case 0x166e78u: goto label_166e78;
        case 0x166e7cu: goto label_166e7c;
        case 0x166e80u: goto label_166e80;
        case 0x166e84u: goto label_166e84;
        case 0x166e88u: goto label_166e88;
        case 0x166e8cu: goto label_166e8c;
        case 0x166e90u: goto label_166e90;
        case 0x166e94u: goto label_166e94;
        case 0x166e98u: goto label_166e98;
        case 0x166e9cu: goto label_166e9c;
        case 0x166ea0u: goto label_166ea0;
        case 0x166ea4u: goto label_166ea4;
        case 0x166ea8u: goto label_166ea8;
        case 0x166eacu: goto label_166eac;
        case 0x166eb0u: goto label_166eb0;
        case 0x166eb4u: goto label_166eb4;
        case 0x166eb8u: goto label_166eb8;
        case 0x166ebcu: goto label_166ebc;
        case 0x166ec0u: goto label_166ec0;
        case 0x166ec4u: goto label_166ec4;
        case 0x166ec8u: goto label_166ec8;
        case 0x166eccu: goto label_166ecc;
        case 0x166ed0u: goto label_166ed0;
        case 0x166ed4u: goto label_166ed4;
        case 0x166ed8u: goto label_166ed8;
        case 0x166edcu: goto label_166edc;
        case 0x166ee0u: goto label_166ee0;
        case 0x166ee4u: goto label_166ee4;
        case 0x166ee8u: goto label_166ee8;
        case 0x166eecu: goto label_166eec;
        case 0x166ef0u: goto label_166ef0;
        case 0x166ef4u: goto label_166ef4;
        case 0x166ef8u: goto label_166ef8;
        case 0x166efcu: goto label_166efc;
        case 0x166f00u: goto label_166f00;
        case 0x166f04u: goto label_166f04;
        case 0x166f08u: goto label_166f08;
        case 0x166f0cu: goto label_166f0c;
        case 0x166f10u: goto label_166f10;
        case 0x166f14u: goto label_166f14;
        case 0x166f18u: goto label_166f18;
        case 0x166f1cu: goto label_166f1c;
        case 0x166f20u: goto label_166f20;
        case 0x166f24u: goto label_166f24;
        case 0x166f28u: goto label_166f28;
        case 0x166f2cu: goto label_166f2c;
        case 0x166f30u: goto label_166f30;
        case 0x166f34u: goto label_166f34;
        case 0x166f38u: goto label_166f38;
        case 0x166f3cu: goto label_166f3c;
        case 0x166f40u: goto label_166f40;
        case 0x166f44u: goto label_166f44;
        case 0x166f48u: goto label_166f48;
        case 0x166f4cu: goto label_166f4c;
        case 0x166f50u: goto label_166f50;
        case 0x166f54u: goto label_166f54;
        case 0x166f58u: goto label_166f58;
        case 0x166f5cu: goto label_166f5c;
        case 0x166f60u: goto label_166f60;
        case 0x166f64u: goto label_166f64;
        case 0x166f68u: goto label_166f68;
        case 0x166f6cu: goto label_166f6c;
        case 0x166f70u: goto label_166f70;
        case 0x166f74u: goto label_166f74;
        case 0x166f78u: goto label_166f78;
        case 0x166f7cu: goto label_166f7c;
        case 0x166f80u: goto label_166f80;
        case 0x166f84u: goto label_166f84;
        case 0x166f88u: goto label_166f88;
        case 0x166f8cu: goto label_166f8c;
        case 0x166f90u: goto label_166f90;
        case 0x166f94u: goto label_166f94;
        case 0x166f98u: goto label_166f98;
        case 0x166f9cu: goto label_166f9c;
        case 0x166fa0u: goto label_166fa0;
        case 0x166fa4u: goto label_166fa4;
        case 0x166fa8u: goto label_166fa8;
        case 0x166facu: goto label_166fac;
        case 0x166fb0u: goto label_166fb0;
        case 0x166fb4u: goto label_166fb4;
        case 0x166fb8u: goto label_166fb8;
        case 0x166fbcu: goto label_166fbc;
        case 0x166fc0u: goto label_166fc0;
        case 0x166fc4u: goto label_166fc4;
        case 0x166fc8u: goto label_166fc8;
        case 0x166fccu: goto label_166fcc;
        case 0x166fd0u: goto label_166fd0;
        case 0x166fd4u: goto label_166fd4;
        case 0x166fd8u: goto label_166fd8;
        case 0x166fdcu: goto label_166fdc;
        case 0x166fe0u: goto label_166fe0;
        case 0x166fe4u: goto label_166fe4;
        case 0x166fe8u: goto label_166fe8;
        case 0x166fecu: goto label_166fec;
        case 0x166ff0u: goto label_166ff0;
        case 0x166ff4u: goto label_166ff4;
        case 0x166ff8u: goto label_166ff8;
        case 0x166ffcu: goto label_166ffc;
        case 0x167000u: goto label_167000;
        case 0x167004u: goto label_167004;
        case 0x167008u: goto label_167008;
        case 0x16700cu: goto label_16700c;
        case 0x167010u: goto label_167010;
        case 0x167014u: goto label_167014;
        case 0x167018u: goto label_167018;
        case 0x16701cu: goto label_16701c;
        case 0x167020u: goto label_167020;
        case 0x167024u: goto label_167024;
        case 0x167028u: goto label_167028;
        case 0x16702cu: goto label_16702c;
        case 0x167030u: goto label_167030;
        case 0x167034u: goto label_167034;
        case 0x167038u: goto label_167038;
        case 0x16703cu: goto label_16703c;
        case 0x167040u: goto label_167040;
        case 0x167044u: goto label_167044;
        case 0x167048u: goto label_167048;
        case 0x16704cu: goto label_16704c;
        case 0x167050u: goto label_167050;
        case 0x167054u: goto label_167054;
        case 0x167058u: goto label_167058;
        case 0x16705cu: goto label_16705c;
        case 0x167060u: goto label_167060;
        case 0x167064u: goto label_167064;
        case 0x167068u: goto label_167068;
        case 0x16706cu: goto label_16706c;
        case 0x167070u: goto label_167070;
        case 0x167074u: goto label_167074;
        case 0x167078u: goto label_167078;
        case 0x16707cu: goto label_16707c;
        case 0x167080u: goto label_167080;
        case 0x167084u: goto label_167084;
        case 0x167088u: goto label_167088;
        case 0x16708cu: goto label_16708c;
        case 0x167090u: goto label_167090;
        case 0x167094u: goto label_167094;
        case 0x167098u: goto label_167098;
        case 0x16709cu: goto label_16709c;
        case 0x1670a0u: goto label_1670a0;
        case 0x1670a4u: goto label_1670a4;
        case 0x1670a8u: goto label_1670a8;
        case 0x1670acu: goto label_1670ac;
        case 0x1670b0u: goto label_1670b0;
        case 0x1670b4u: goto label_1670b4;
        case 0x1670b8u: goto label_1670b8;
        case 0x1670bcu: goto label_1670bc;
        case 0x1670c0u: goto label_1670c0;
        case 0x1670c4u: goto label_1670c4;
        case 0x1670c8u: goto label_1670c8;
        case 0x1670ccu: goto label_1670cc;
        case 0x1670d0u: goto label_1670d0;
        case 0x1670d4u: goto label_1670d4;
        case 0x1670d8u: goto label_1670d8;
        case 0x1670dcu: goto label_1670dc;
        case 0x1670e0u: goto label_1670e0;
        case 0x1670e4u: goto label_1670e4;
        case 0x1670e8u: goto label_1670e8;
        case 0x1670ecu: goto label_1670ec;
        case 0x1670f0u: goto label_1670f0;
        case 0x1670f4u: goto label_1670f4;
        case 0x1670f8u: goto label_1670f8;
        case 0x1670fcu: goto label_1670fc;
        case 0x167100u: goto label_167100;
        case 0x167104u: goto label_167104;
        case 0x167108u: goto label_167108;
        case 0x16710cu: goto label_16710c;
        case 0x167110u: goto label_167110;
        case 0x167114u: goto label_167114;
        case 0x167118u: goto label_167118;
        case 0x16711cu: goto label_16711c;
        case 0x167120u: goto label_167120;
        case 0x167124u: goto label_167124;
        case 0x167128u: goto label_167128;
        case 0x16712cu: goto label_16712c;
        case 0x167130u: goto label_167130;
        case 0x167134u: goto label_167134;
        case 0x167138u: goto label_167138;
        case 0x16713cu: goto label_16713c;
        case 0x167140u: goto label_167140;
        case 0x167144u: goto label_167144;
        case 0x167148u: goto label_167148;
        case 0x16714cu: goto label_16714c;
        case 0x167150u: goto label_167150;
        case 0x167154u: goto label_167154;
        case 0x167158u: goto label_167158;
        case 0x16715cu: goto label_16715c;
        case 0x167160u: goto label_167160;
        case 0x167164u: goto label_167164;
        case 0x167168u: goto label_167168;
        case 0x16716cu: goto label_16716c;
        case 0x167170u: goto label_167170;
        case 0x167174u: goto label_167174;
        case 0x167178u: goto label_167178;
        case 0x16717cu: goto label_16717c;
        case 0x167180u: goto label_167180;
        case 0x167184u: goto label_167184;
        case 0x167188u: goto label_167188;
        case 0x16718cu: goto label_16718c;
        case 0x167190u: goto label_167190;
        case 0x167194u: goto label_167194;
        case 0x167198u: goto label_167198;
        case 0x16719cu: goto label_16719c;
        case 0x1671a0u: goto label_1671a0;
        case 0x1671a4u: goto label_1671a4;
        case 0x1671a8u: goto label_1671a8;
        case 0x1671acu: goto label_1671ac;
        case 0x1671b0u: goto label_1671b0;
        case 0x1671b4u: goto label_1671b4;
        case 0x1671b8u: goto label_1671b8;
        case 0x1671bcu: goto label_1671bc;
        case 0x1671c0u: goto label_1671c0;
        case 0x1671c4u: goto label_1671c4;
        case 0x1671c8u: goto label_1671c8;
        case 0x1671ccu: goto label_1671cc;
        case 0x1671d0u: goto label_1671d0;
        case 0x1671d4u: goto label_1671d4;
        case 0x1671d8u: goto label_1671d8;
        case 0x1671dcu: goto label_1671dc;
        case 0x1671e0u: goto label_1671e0;
        case 0x1671e4u: goto label_1671e4;
        case 0x1671e8u: goto label_1671e8;
        case 0x1671ecu: goto label_1671ec;
        case 0x1671f0u: goto label_1671f0;
        case 0x1671f4u: goto label_1671f4;
        case 0x1671f8u: goto label_1671f8;
        case 0x1671fcu: goto label_1671fc;
        case 0x167200u: goto label_167200;
        case 0x167204u: goto label_167204;
        case 0x167208u: goto label_167208;
        case 0x16720cu: goto label_16720c;
        case 0x167210u: goto label_167210;
        case 0x167214u: goto label_167214;
        case 0x167218u: goto label_167218;
        case 0x16721cu: goto label_16721c;
        case 0x167220u: goto label_167220;
        case 0x167224u: goto label_167224;
        case 0x167228u: goto label_167228;
        case 0x16722cu: goto label_16722c;
        case 0x167230u: goto label_167230;
        case 0x167234u: goto label_167234;
        case 0x167238u: goto label_167238;
        case 0x16723cu: goto label_16723c;
        default: return;
    }

label_166a70:
    // 0x166a70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_166a74:
    if (ctx->pc == 0x166A74u) {
        ctx->pc = 0x166A78u;
        goto label_166a78;
    }
    ctx->pc = 0x166A70u;
    {
        const bool branch_taken_0x166a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166a70) {
            ctx->pc = 0x166A80u;
            goto label_166a80;
        }
    }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x166a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_166a7c:
    // 0x166a7c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x166a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_166a80:
    // 0x166a80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_166a84:
    // 0x166a84: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x166a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_166a88:
    // 0x166a88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_166a8c:
    if (ctx->pc == 0x166A8Cu) {
        ctx->pc = 0x166A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A88u;
        // 0x166a8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A90u;
        goto label_166a90;
    }
    ctx->pc = 0x166A88u;
    {
        const bool branch_taken_0x166a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A88u;
        // 0x166a8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a88) {
            ctx->pc = 0x166A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x166a40; return; }
        }
    }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0xc066e44  jal         func_19B910
label_166a94:
    if (ctx->pc == 0x166A94u) {
        ctx->pc = 0x166A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A90u;
        // 0x166a94: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A98u;
        goto label_166a98;
    }
    ctx->pc = 0x166A90u;
    SET_GPR_U32(ctx, 31, 0x166A98u);
    ctx->pc = 0x166A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A90u;
    // 0x166a94: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x166A98u;
label_166a98:
    // 0x166a98: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x166a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166a9c:
    // 0x166a9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x166a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_166aa0:
    // 0x166aa0: 0xc066e96  jal         func_19BA58
label_166aa4:
    if (ctx->pc == 0x166AA4u) {
        ctx->pc = 0x166AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AA0u;
        // 0x166aa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AA8u;
        goto label_166aa8;
    }
    ctx->pc = 0x166AA0u;
    SET_GPR_U32(ctx, 31, 0x166AA8u);
    ctx->pc = 0x166AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AA0u;
    // 0x166aa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x166AA8u;
label_166aa8:
    // 0x166aa8: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x166aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166aac:
    // 0x166aac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x166aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_166ab0:
    // 0x166ab0: 0xc066ec0  jal         func_19BB00
label_166ab4:
    if (ctx->pc == 0x166AB4u) {
        ctx->pc = 0x166AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AB0u;
        // 0x166ab4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AB8u;
        goto label_166ab8;
    }
    ctx->pc = 0x166AB0u;
    SET_GPR_U32(ctx, 31, 0x166AB8u);
    ctx->pc = 0x166AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AB0u;
    // 0x166ab4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x166AB8u;
label_166ab8:
    // 0x166ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166abc:
    // 0x166abc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_166ac0:
    // 0x166ac0: 0xc066e1a  jal         func_19B868
label_166ac4:
    if (ctx->pc == 0x166AC4u) {
        ctx->pc = 0x166AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AC0u;
        // 0x166ac4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AC8u;
        goto label_166ac8;
    }
    ctx->pc = 0x166AC0u;
    SET_GPR_U32(ctx, 31, 0x166AC8u);
    ctx->pc = 0x166AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AC0u;
    // 0x166ac4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x166AC8u;
label_166ac8:
    // 0x166ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166acc:
    // 0x166acc: 0xc041b88  jal         func_106E20
label_166ad0:
    if (ctx->pc == 0x166AD0u) {
        ctx->pc = 0x166AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166ACCu;
        // 0x166ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AD4u;
        goto label_166ad4;
    }
    ctx->pc = 0x166ACCu;
    SET_GPR_U32(ctx, 31, 0x166AD4u);
    ctx->pc = 0x166AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166ACCu;
    // 0x166ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E20u, 0x166ACCu, 0x166AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AD4u;
label_166ad4:
    // 0x166ad4: 0xc05ff64  jal         func_17FD90
label_166ad8:
    if (ctx->pc == 0x166AD8u) {
        ctx->pc = 0x166AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AD4u;
        // 0x166ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166ADCu;
        goto label_166adc;
    }
    ctx->pc = 0x166AD4u;
    SET_GPR_U32(ctx, 31, 0x166ADCu);
    ctx->pc = 0x166AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AD4u;
    // 0x166ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    { ctx->pc = 0x17fd90; return; }
    ctx->pc = 0x166ADCu;
label_166adc:
    // 0x166adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166ae0:
    // 0x166ae0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x166ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_166ae4:
    // 0x166ae4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x166ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_166ae8:
    // 0x166ae8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x166ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_166aec:
    // 0x166aec: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x166aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166af0:
    // 0x166af0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x166af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166af4:
    // 0x166af4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x166af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166af8:
    // 0x166af8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166afc:
    // 0x166afc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x166afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_166b00:
    // 0x166b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166b04:
    // 0x166b04: 0x3e00008  jr          $ra
label_166b08:
    if (ctx->pc == 0x166B08u) {
        ctx->pc = 0x166B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B04u;
        // 0x166b08: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B0Cu;
        goto label_166b0c;
    }
    ctx->pc = 0x166B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B04u;
        // 0x166b08: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B0Cu;
label_166b0c:
    // 0x166b0c: 0x0  nop
    ctx->pc = 0x166b0cu;
    // NOP
label_166b10:
    // 0x166b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_166b14:
    // 0x166b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x166b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_166b18:
    // 0x166b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_166b1c:
    // 0x166b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_166b20:
    // 0x166b20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x166b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166b24:
    // 0x166b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_166b28:
    // 0x166b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166b2c:
    // 0x166b2c: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_166b30:
    // 0x166b30: 0x9083004c  lbu         $v1, 0x4C($a0)
    ctx->pc = 0x166b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
label_166b34:
    // 0x166b34: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x166b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_166b38:
    // 0x166b38: 0x8e50004c  lw          $s0, 0x4C($s2)
    ctx->pc = 0x166b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_166b3c:
    // 0x166b3c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x166b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_166b40:
    // 0x166b40: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x166b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_166b44:
    // 0x166b44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_166b48:
    // 0x166b48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_166b4c:
    if (ctx->pc == 0x166B4Cu) {
        ctx->pc = 0x166B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B48u;
        // 0x166b4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B50u;
        goto label_166b50;
    }
    ctx->pc = 0x166B48u;
    {
        const bool branch_taken_0x166b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B48u;
        // 0x166b4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b48) {
            ctx->pc = 0x166B60u;
            goto label_166b60;
        }
    }
    ctx->pc = 0x166B50u;
label_166b50:
    // 0x166b50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x166b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_166b54:
    // 0x166b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166b58:
    // 0x166b58: 0x1000006f  b           . + 4 + (0x6F << 2)
label_166b5c:
    if (ctx->pc == 0x166B5Cu) {
        ctx->pc = 0x166B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B58u;
        // 0x166b5c: 0xa263004e  sb          $v1, 0x4E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B60u;
        goto label_166b60;
    }
    ctx->pc = 0x166B58u;
    {
        const bool branch_taken_0x166b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B58u;
        // 0x166b5c: 0xa263004e  sb          $v1, 0x4E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b58) {
            ctx->pc = 0x166D18u;
            goto label_166d18;
        }
    }
    ctx->pc = 0x166B60u;
label_166b60:
    // 0x166b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166b64:
    // 0x166b64: 0xc06468c  jal         func_191A30
label_166b68:
    if (ctx->pc == 0x166B68u) {
        ctx->pc = 0x166B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B64u;
        // 0x166b68: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B6Cu;
        goto label_166b6c;
    }
    ctx->pc = 0x166B64u;
    SET_GPR_U32(ctx, 31, 0x166B6Cu);
    ctx->pc = 0x166B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B64u;
    // 0x166b68: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x166B6Cu;
label_166b6c:
    // 0x166b6c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x166b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166b70:
    // 0x166b70: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_166b74:
    // 0x166b74: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x166b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_166b78:
    // 0x166b78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166b7c:
    // 0x166b7c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x166b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_166b80:
    // 0x166b80: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x166b80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_166b84:
    // 0x166b84: 0x0  nop
    ctx->pc = 0x166b84u;
    // NOP
label_166b88:
    // 0x166b88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166b88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_166b8c:
    // 0x166b8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166b90:
    // 0x166b90: 0x0  nop
    ctx->pc = 0x166b90u;
    // NOP
label_166b94:
    // 0x166b94: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_166b98:
    if (ctx->pc == 0x166B98u) {
        ctx->pc = 0x166B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B94u;
        // 0x166b98: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B9Cu;
        goto label_166b9c;
    }
    ctx->pc = 0x166B94u;
    {
        const bool branch_taken_0x166b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B94u;
        // 0x166b98: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b94) {
            ctx->pc = 0x166BA4u;
            goto label_166ba4;
        }
    }
    ctx->pc = 0x166B9Cu;
label_166b9c:
    // 0x166b9c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_166ba0:
    if (ctx->pc == 0x166BA0u) {
        ctx->pc = 0x166BA4u;
        goto label_166ba4;
    }
    ctx->pc = 0x166B9Cu;
    {
        const bool branch_taken_0x166b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166b9c) {
            ctx->pc = 0x166BE0u;
            goto label_166be0;
        }
    }
    ctx->pc = 0x166BA4u;
label_166ba4:
    // 0x166ba4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x166ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166ba8:
    // 0x166ba8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x166ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_166bac:
    // 0x166bac: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x166bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_166bb0:
    // 0x166bb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166bb4:
    // 0x166bb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x166bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_166bb8:
    // 0x166bb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x166bb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_166bbc:
    // 0x166bbc: 0x0  nop
    ctx->pc = 0x166bbcu;
    // NOP
label_166bc0:
    // 0x166bc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_166bc4:
    // 0x166bc4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166bc8:
    // 0x166bc8: 0x0  nop
    ctx->pc = 0x166bc8u;
    // NOP
label_166bcc:
    // 0x166bcc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_166bd0:
    if (ctx->pc == 0x166BD0u) {
        ctx->pc = 0x166BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BCCu;
        // 0x166bd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BD4u;
        goto label_166bd4;
    }
    ctx->pc = 0x166BCCu;
    {
        const bool branch_taken_0x166bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BCCu;
        // 0x166bd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166bcc) {
            ctx->pc = 0x166BDCu;
            goto label_166bdc;
        }
    }
    ctx->pc = 0x166BD4u;
label_166bd4:
    // 0x166bd4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_166bd8:
    if (ctx->pc == 0x166BD8u) {
        ctx->pc = 0x166BDCu;
        goto label_166bdc;
    }
    ctx->pc = 0x166BD4u;
    {
        const bool branch_taken_0x166bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166bd4) {
            ctx->pc = 0x166BE0u;
            goto label_166be0;
        }
    }
    ctx->pc = 0x166BDCu;
label_166bdc:
    // 0x166bdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x166bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166be0:
    // 0x166be0: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x166be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_166be4:
    // 0x166be4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x166be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_166be8:
    // 0x166be8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_166bec:
    if (ctx->pc == 0x166BECu) {
        ctx->pc = 0x166BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BE8u;
        // 0x166bec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BF0u;
        goto label_166bf0;
    }
    ctx->pc = 0x166BE8u;
    {
        const bool branch_taken_0x166be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BE8u;
        // 0x166bec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166be8) {
            ctx->pc = 0x166C6Cu;
            goto label_166c6c;
        }
    }
    ctx->pc = 0x166BF0u;
label_166bf0:
    // 0x166bf0: 0xc06468c  jal         func_191A30
label_166bf4:
    if (ctx->pc == 0x166BF4u) {
        ctx->pc = 0x166BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BF0u;
        // 0x166bf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BF8u;
        goto label_166bf8;
    }
    ctx->pc = 0x166BF0u;
    SET_GPR_U32(ctx, 31, 0x166BF8u);
    ctx->pc = 0x166BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166BF0u;
    // 0x166bf4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x166BF8u;
label_166bf8:
    // 0x166bf8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x166bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166bfc:
    // 0x166bfc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x166bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_166c00:
    // 0x166c00: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x166c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_166c04:
    // 0x166c04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166c08:
    // 0x166c08: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_166c0c:
    // 0x166c0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x166c0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_166c10:
    // 0x166c10: 0x0  nop
    ctx->pc = 0x166c10u;
    // NOP
label_166c14:
    // 0x166c14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_166c18:
    // 0x166c18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166c1c:
    // 0x166c1c: 0x0  nop
    ctx->pc = 0x166c1cu;
    // NOP
label_166c20:
    // 0x166c20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_166c24:
    if (ctx->pc == 0x166C24u) {
        ctx->pc = 0x166C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C20u;
        // 0x166c24: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C28u;
        goto label_166c28;
    }
    ctx->pc = 0x166C20u;
    {
        const bool branch_taken_0x166c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C20u;
        // 0x166c24: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c20) {
            ctx->pc = 0x166C30u;
            goto label_166c30;
        }
    }
    ctx->pc = 0x166C28u;
label_166c28:
    // 0x166c28: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_166c2c:
    if (ctx->pc == 0x166C2Cu) {
        ctx->pc = 0x166C30u;
        goto label_166c30;
    }
    ctx->pc = 0x166C28u;
    {
        const bool branch_taken_0x166c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166c28) {
            ctx->pc = 0x166C6Cu;
            goto label_166c6c;
        }
    }
    ctx->pc = 0x166C30u;
label_166c30:
    // 0x166c30: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x166c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166c34:
    // 0x166c34: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x166c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_166c38:
    // 0x166c38: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x166c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_166c3c:
    // 0x166c3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166c40:
    // 0x166c40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x166c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_166c44:
    // 0x166c44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x166c44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_166c48:
    // 0x166c48: 0x0  nop
    ctx->pc = 0x166c48u;
    // NOP
label_166c4c:
    // 0x166c4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166c4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_166c50:
    // 0x166c50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166c54:
    // 0x166c54: 0x0  nop
    ctx->pc = 0x166c54u;
    // NOP
label_166c58:
    // 0x166c58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_166c5c:
    if (ctx->pc == 0x166C5Cu) {
        ctx->pc = 0x166C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C58u;
        // 0x166c5c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C60u;
        goto label_166c60;
    }
    ctx->pc = 0x166C58u;
    {
        const bool branch_taken_0x166c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C58u;
        // 0x166c5c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c58) {
            ctx->pc = 0x166C68u;
            goto label_166c68;
        }
    }
    ctx->pc = 0x166C60u;
label_166c60:
    // 0x166c60: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_166c64:
    if (ctx->pc == 0x166C64u) {
        ctx->pc = 0x166C68u;
        goto label_166c68;
    }
    ctx->pc = 0x166C60u;
    {
        const bool branch_taken_0x166c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166c60) {
            ctx->pc = 0x166C6Cu;
            goto label_166c6c;
        }
    }
    ctx->pc = 0x166C68u;
label_166c68:
    // 0x166c68: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x166c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166c6c:
    // 0x166c6c: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_166c70:
    if (ctx->pc == 0x166C70u) {
        ctx->pc = 0x166C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C6Cu;
        // 0x166c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C74u;
        goto label_166c74;
    }
    ctx->pc = 0x166C6Cu;
    {
        const bool branch_taken_0x166c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C6Cu;
        // 0x166c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c6c) {
            ctx->pc = 0x166D18u;
            goto label_166d18;
        }
    }
    ctx->pc = 0x166C74u;
label_166c74:
    // 0x166c74: 0xa6600050  sh          $zero, 0x50($s3)
    ctx->pc = 0x166c74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_166c78:
    // 0x166c78: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x166c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_166c7c:
    // 0x166c7c: 0xa6600052  sh          $zero, 0x52($s3)
    ctx->pc = 0x166c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 0));
label_166c80:
    // 0x166c80: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x166c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_166c84:
    // 0x166c84: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x166c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_166c88:
    // 0x166c88: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x166c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_166c8c:
    // 0x166c8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x166c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_166c90:
    // 0x166c90: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x166c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_166c94:
    // 0x166c94: 0x96420056  lhu         $v0, 0x56($s2)
    ctx->pc = 0x166c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
label_166c98:
    // 0x166c98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x166c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_166c9c:
    // 0x166c9c: 0xa6420056  sh          $v0, 0x56($s2)
    ctx->pc = 0x166c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 86), (uint16_t)GPR_U32(ctx, 2));
label_166ca0:
    // 0x166ca0: 0xc08f0cc  jal         func_23C330
label_166ca4:
    if (ctx->pc == 0x166CA4u) {
        ctx->pc = 0x166CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CA0u;
        // 0x166ca4: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CA8u;
        goto label_166ca8;
    }
    ctx->pc = 0x166CA0u;
    SET_GPR_U32(ctx, 31, 0x166CA8u);
    ctx->pc = 0x166CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CA0u;
    // 0x166ca4: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x166CA8u;
label_166ca8:
    // 0x166ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166cac:
    // 0x166cac: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x166cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_166cb0:
    // 0x166cb0: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x166cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_166cb4:
    // 0x166cb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x166cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166cb8:
    // 0x166cb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x166cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_166cbc:
    // 0x166cbc: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x166cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_166cc0:
    // 0x166cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166cc4:
    // 0x166cc4: 0x0  nop
    ctx->pc = 0x166cc4u;
    // NOP
label_166cc8:
    // 0x166cc8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x166cc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_166ccc:
    // 0x166ccc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_166cd0:
    // 0x166cd0: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x166cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_166cd4:
    // 0x166cd4: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x166cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
label_166cd8:
    // 0x166cd8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x166cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_166cdc:
    // 0x166cdc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_166ce0:
    // 0x166ce0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x166ce0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166ce4:
    // 0x166ce4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x166ce4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166ce8:
    // 0x166ce8: 0x0  nop
    ctx->pc = 0x166ce8u;
    // NOP
label_166cec:
    // 0x166cec: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x166cecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_166cf0:
    // 0x166cf0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_166cf4:
    // 0x166cf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x166cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_166cf8:
    // 0x166cf8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x166cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_166cfc:
    // 0x166cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166d00:
    // 0x166d00: 0x0  nop
    ctx->pc = 0x166d00u;
    // NOP
label_166d04:
    // 0x166d04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_166d08:
    // 0x166d08: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x166d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_166d0c:
    // 0x166d0c: 0xc066daa  jal         func_19B6A8
label_166d10:
    if (ctx->pc == 0x166D10u) {
        ctx->pc = 0x166D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D0Cu;
        // 0x166d10: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D14u;
        goto label_166d14;
    }
    ctx->pc = 0x166D0Cu;
    SET_GPR_U32(ctx, 31, 0x166D14u);
    ctx->pc = 0x166D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D0Cu;
    // 0x166d10: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166d18:
    // 0x166d18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_166d1c:
    // 0x166d1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166d20:
    // 0x166d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166d24:
    // 0x166d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166d28:
    // 0x166d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166d2c:
    // 0x166d2c: 0x3e00008  jr          $ra
label_166d30:
    if (ctx->pc == 0x166D30u) {
        ctx->pc = 0x166D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D2Cu;
        // 0x166d30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D34u;
        goto label_166d34;
    }
    ctx->pc = 0x166D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D2Cu;
        // 0x166d30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166D34u;
label_166d34:
    // 0x166d34: 0x0  nop
    ctx->pc = 0x166d34u;
    // NOP
label_166d38:
    // 0x166d38: 0x0  nop
    ctx->pc = 0x166d38u;
    // NOP
label_166d3c:
    // 0x166d3c: 0x0  nop
    ctx->pc = 0x166d3cu;
    // NOP
label_166d40:
    // 0x166d40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x166d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_166d44:
    // 0x166d44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_166d48:
    // 0x166d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_166d4c:
    // 0x166d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_166d50:
    // 0x166d50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x166d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166d54:
    // 0x166d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166d58:
    // 0x166d58: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x166d58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_166d5c:
    // 0x166d5c: 0x94820050  lhu         $v0, 0x50($a0)
    ctx->pc = 0x166d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
label_166d60:
    // 0x166d60: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x166d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_166d64:
    // 0x166d64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166d68:
    // 0x166d68: 0x10e00074  beqz        $a3, . + 4 + (0x74 << 2)
label_166d6c:
    if (ctx->pc == 0x166D6Cu) {
        ctx->pc = 0x166D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D68u;
        // 0x166d6c: 0xa4820050  sh          $v0, 0x50($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D70u;
        goto label_166d70;
    }
    ctx->pc = 0x166D68u;
    {
        const bool branch_taken_0x166d68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D68u;
        // 0x166d6c: 0xa4820050  sh          $v0, 0x50($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d68) {
            ctx->pc = 0x166F3Cu;
            goto label_166f3c;
        }
    }
    ctx->pc = 0x166D70u;
label_166d70:
    // 0x166d70: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_166d74:
    if (ctx->pc == 0x166D74u) {
        ctx->pc = 0x166D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D70u;
        // 0x166d74: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D78u;
        goto label_166d78;
    }
    ctx->pc = 0x166D70u;
    {
        const bool branch_taken_0x166d70 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x166D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D70u;
        // 0x166d74: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d70) {
            ctx->pc = 0x166D84u;
            goto label_166d84;
        }
    }
    ctx->pc = 0x166D78u;
label_166d78:
    // 0x166d78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x166d78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166d7c:
    // 0x166d7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_166d80:
    if (ctx->pc == 0x166D80u) {
        ctx->pc = 0x166D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D7Cu;
        // 0x166d80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D84u;
        goto label_166d84;
    }
    ctx->pc = 0x166D7Cu;
    {
        const bool branch_taken_0x166d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D7Cu;
        // 0x166d80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d7c) {
            ctx->pc = 0x166D9Cu;
            goto label_166d9c;
        }
    }
    ctx->pc = 0x166D84u;
label_166d84:
    // 0x166d84: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x166d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_166d88:
    // 0x166d88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166d8c:
    // 0x166d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166d90:
    // 0x166d90: 0x0  nop
    ctx->pc = 0x166d90u;
    // NOP
label_166d94:
    // 0x166d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_166d98:
    // 0x166d98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x166d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_166d9c:
    // 0x166d9c: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x166d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_166da0:
    // 0x166da0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x166da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_166da4:
    // 0x166da4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x166da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_166da8:
    // 0x166da8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_166dac:
    // 0x166dac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x166dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_166db0:
    // 0x166db0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_166db4:
    // 0x166db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166db8:
    // 0x166db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166dbc:
    // 0x166dbc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x166dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166dc0:
    // 0x166dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_166dc4:
    // 0x166dc4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x166dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_166dc8:
    // 0x166dc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x166dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166dcc:
    // 0x166dcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_166dd0:
    // 0x166dd0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x166dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_166dd4:
    // 0x166dd4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x166dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_166dd8:
    // 0x166dd8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x166dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_166ddc:
    // 0x166ddc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166de0:
    // 0x166de0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x166de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_166de4:
    // 0x166de4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_166de8:
    // 0x166de8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166dec:
    // 0x166dec: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x166decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_166df0:
    // 0x166df0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166df4:
    // 0x166df4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x166df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_166df8:
    // 0x166df8: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x166df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_166dfc:
    // 0x166dfc: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x166dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166e00:
    // 0x166e00: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x166e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166e04:
    // 0x166e04: 0x0  nop
    ctx->pc = 0x166e04u;
    // NOP
label_166e08:
    // 0x166e08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_166e0c:
    if (ctx->pc == 0x166E0Cu) {
        ctx->pc = 0x166E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E08u;
        // 0x166e0c: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E10u;
        goto label_166e10;
    }
    ctx->pc = 0x166E08u;
    {
        const bool branch_taken_0x166e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E08u;
        // 0x166e0c: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e08) {
            ctx->pc = 0x166E1Cu;
            goto label_166e1c;
        }
    }
    ctx->pc = 0x166E10u;
label_166e10:
    // 0x166e10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x166e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_166e14:
    // 0x166e14: 0x10000008  b           . + 4 + (0x8 << 2)
label_166e18:
    if (ctx->pc == 0x166E18u) {
        ctx->pc = 0x166E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E14u;
        // 0x166e18: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E1Cu;
        goto label_166e1c;
    }
    ctx->pc = 0x166E14u;
    {
        const bool branch_taken_0x166e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E14u;
        // 0x166e18: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e14) {
            ctx->pc = 0x166E38u;
            goto label_166e38;
        }
    }
    ctx->pc = 0x166E1Cu;
label_166e1c:
    // 0x166e1c: 0x0  nop
    ctx->pc = 0x166e1cu;
    // NOP
label_166e20:
    // 0x166e20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x166e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166e24:
    // 0x166e24: 0x0  nop
    ctx->pc = 0x166e24u;
    // NOP
label_166e28:
    // 0x166e28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_166e2c:
    if (ctx->pc == 0x166E2Cu) {
        ctx->pc = 0x166E30u;
        goto label_166e30;
    }
    ctx->pc = 0x166E28u;
    {
        const bool branch_taken_0x166e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166e28) {
            ctx->pc = 0x166E38u;
            goto label_166e38;
        }
    }
    ctx->pc = 0x166E30u;
label_166e30:
    // 0x166e30: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x166e30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_166e34:
    // 0x166e34: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x166e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_166e38:
    // 0x166e38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_166e3c:
    // 0x166e3c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x166e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_166e40:
    // 0x166e40: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_166e44:
    if (ctx->pc == 0x166E44u) {
        ctx->pc = 0x166E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E40u;
        // 0x166e44: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E48u;
        goto label_166e48;
    }
    ctx->pc = 0x166E40u;
    {
        const bool branch_taken_0x166e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E40u;
        // 0x166e44: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e40) {
            ctx->pc = 0x166DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166df8;
        }
    }
    ctx->pc = 0x166E48u;
label_166e48:
    // 0x166e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166e4c:
    // 0x166e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166e50:
    // 0x166e50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_166e54:
    // 0x166e54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_166e58:
    // 0x166e58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166e5c:
    // 0x166e5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x166e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_166e60:
    // 0x166e60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_166e64:
    // 0x166e64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166e68:
    // 0x166e68: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_166e6c:
    // 0x166e6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166e70:
    // 0x166e70: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x166e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_166e74:
    // 0x166e74: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x166e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_166e78:
    // 0x166e78: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x166e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166e7c:
    // 0x166e7c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x166e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166e80:
    // 0x166e80: 0x0  nop
    ctx->pc = 0x166e80u;
    // NOP
label_166e84:
    // 0x166e84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_166e88:
    if (ctx->pc == 0x166E88u) {
        ctx->pc = 0x166E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E84u;
        // 0x166e88: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E8Cu;
        goto label_166e8c;
    }
    ctx->pc = 0x166E84u;
    {
        const bool branch_taken_0x166e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E84u;
        // 0x166e88: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e84) {
            ctx->pc = 0x166E98u;
            goto label_166e98;
        }
    }
    ctx->pc = 0x166E8Cu;
label_166e8c:
    // 0x166e8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x166e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_166e90:
    // 0x166e90: 0x10000007  b           . + 4 + (0x7 << 2)
label_166e94:
    if (ctx->pc == 0x166E94u) {
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E90u;
        // 0x166e94: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E98u;
        goto label_166e98;
    }
    ctx->pc = 0x166E90u;
    {
        const bool branch_taken_0x166e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E90u;
        // 0x166e94: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e90) {
            ctx->pc = 0x166EB0u;
            goto label_166eb0;
        }
    }
    ctx->pc = 0x166E98u;
label_166e98:
    // 0x166e98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x166e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166e9c:
    // 0x166e9c: 0x0  nop
    ctx->pc = 0x166e9cu;
    // NOP
label_166ea0:
    // 0x166ea0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_166ea4:
    if (ctx->pc == 0x166EA4u) {
        ctx->pc = 0x166EA8u;
        goto label_166ea8;
    }
    ctx->pc = 0x166EA0u;
    {
        const bool branch_taken_0x166ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166ea0) {
            ctx->pc = 0x166EB0u;
            goto label_166eb0;
        }
    }
    ctx->pc = 0x166EA8u;
label_166ea8:
    // 0x166ea8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x166ea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_166eac:
    // 0x166eac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x166eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_166eb0:
    // 0x166eb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_166eb4:
    // 0x166eb4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x166eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_166eb8:
    // 0x166eb8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_166ebc:
    if (ctx->pc == 0x166EBCu) {
        ctx->pc = 0x166EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EB8u;
        // 0x166ebc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EC0u;
        goto label_166ec0;
    }
    ctx->pc = 0x166EB8u;
    {
        const bool branch_taken_0x166eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EB8u;
        // 0x166ebc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166eb8) {
            ctx->pc = 0x166E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166e74;
        }
    }
    ctx->pc = 0x166EC0u;
label_166ec0:
    // 0x166ec0: 0xc066e44  jal         func_19B910
label_166ec4:
    if (ctx->pc == 0x166EC4u) {
        ctx->pc = 0x166EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EC0u;
        // 0x166ec4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EC8u;
        goto label_166ec8;
    }
    ctx->pc = 0x166EC0u;
    SET_GPR_U32(ctx, 31, 0x166EC8u);
    ctx->pc = 0x166EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EC0u;
    // 0x166ec4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x166EC8u;
label_166ec8:
    // 0x166ec8: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x166ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166ecc:
    // 0x166ecc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_166ed0:
    // 0x166ed0: 0xc066e96  jal         func_19BA58
label_166ed4:
    if (ctx->pc == 0x166ED4u) {
        ctx->pc = 0x166ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166ED0u;
        // 0x166ed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166ED8u;
        goto label_166ed8;
    }
    ctx->pc = 0x166ED0u;
    SET_GPR_U32(ctx, 31, 0x166ED8u);
    ctx->pc = 0x166ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166ED0u;
    // 0x166ed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x166ED8u;
label_166ed8:
    // 0x166ed8: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x166ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166edc:
    // 0x166edc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_166ee0:
    // 0x166ee0: 0xc066e6c  jal         func_19B9B0
label_166ee4:
    if (ctx->pc == 0x166EE4u) {
        ctx->pc = 0x166EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EE0u;
        // 0x166ee4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EE8u;
        goto label_166ee8;
    }
    ctx->pc = 0x166EE0u;
    SET_GPR_U32(ctx, 31, 0x166EE8u);
    ctx->pc = 0x166EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EE0u;
    // 0x166ee4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x166EE8u;
label_166ee8:
    // 0x166ee8: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x166ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166eec:
    // 0x166eec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_166ef0:
    // 0x166ef0: 0xc066ec0  jal         func_19BB00
label_166ef4:
    if (ctx->pc == 0x166EF4u) {
        ctx->pc = 0x166EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF0u;
        // 0x166ef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EF8u;
        goto label_166ef8;
    }
    ctx->pc = 0x166EF0u;
    SET_GPR_U32(ctx, 31, 0x166EF8u);
    ctx->pc = 0x166EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EF0u;
    // 0x166ef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x166EF8u;
label_166ef8:
    // 0x166ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166efc:
    // 0x166efc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x166efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_166f00:
    // 0x166f00: 0xc066e1a  jal         func_19B868
label_166f04:
    if (ctx->pc == 0x166F04u) {
        ctx->pc = 0x166F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F00u;
        // 0x166f04: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F08u;
        goto label_166f08;
    }
    ctx->pc = 0x166F00u;
    SET_GPR_U32(ctx, 31, 0x166F08u);
    ctx->pc = 0x166F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F00u;
    // 0x166f04: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x166F08u;
label_166f08:
    // 0x166f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f0c:
    // 0x166f0c: 0xc041b88  jal         func_106E20
label_166f10:
    if (ctx->pc == 0x166F10u) {
        ctx->pc = 0x166F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F0Cu;
        // 0x166f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F14u;
        goto label_166f14;
    }
    ctx->pc = 0x166F0Cu;
    SET_GPR_U32(ctx, 31, 0x166F14u);
    ctx->pc = 0x166F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F0Cu;
    // 0x166f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E20u, 0x166F0Cu, 0x166F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F14u;
label_166f14:
    // 0x166f14: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_166f18:
    // 0x166f18: 0xc066e26  jal         func_19B898
label_166f1c:
    if (ctx->pc == 0x166F1Cu) {
        ctx->pc = 0x166F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F18u;
        // 0x166f1c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F20u;
        goto label_166f20;
    }
    ctx->pc = 0x166F18u;
    SET_GPR_U32(ctx, 31, 0x166F20u);
    ctx->pc = 0x166F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F18u;
    // 0x166f1c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x166F20u;
label_166f20:
    // 0x166f20: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_166f24:
    // 0x166f24: 0xc066e26  jal         func_19B898
label_166f28:
    if (ctx->pc == 0x166F28u) {
        ctx->pc = 0x166F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F24u;
        // 0x166f28: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F2Cu;
        goto label_166f2c;
    }
    ctx->pc = 0x166F24u;
    SET_GPR_U32(ctx, 31, 0x166F2Cu);
    ctx->pc = 0x166F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F24u;
    // 0x166f28: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x166F2Cu;
label_166f2c:
    // 0x166f2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x166f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_166f30:
    // 0x166f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166f34:
    // 0x166f34: 0x1000006a  b           . + 4 + (0x6A << 2)
label_166f38:
    if (ctx->pc == 0x166F38u) {
        ctx->pc = 0x166F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F34u;
        // 0x166f38: 0xa243004e  sb          $v1, 0x4E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F3Cu;
        goto label_166f3c;
    }
    ctx->pc = 0x166F34u;
    {
        const bool branch_taken_0x166f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F34u;
        // 0x166f38: 0xa243004e  sb          $v1, 0x4E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f34) {
            ctx->pc = 0x1670E0u;
            goto label_1670e0;
        }
    }
    ctx->pc = 0x166F3Cu;
label_166f3c:
    // 0x166f3c: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x166f3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_166f40:
    // 0x166f40: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x166f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_166f44:
    // 0x166f44: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x166f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_166f48:
    // 0x166f48: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
label_166f4c:
    if (ctx->pc == 0x166F4Cu) {
        ctx->pc = 0x166F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F48u;
        // 0x166f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F50u;
        goto label_166f50;
    }
    ctx->pc = 0x166F48u;
    {
        const bool branch_taken_0x166f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F48u;
        // 0x166f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f48) {
            ctx->pc = 0x1670E0u;
            goto label_1670e0;
        }
    }
    ctx->pc = 0x166F50u;
label_166f50:
    // 0x166f50: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x166f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_166f54:
    // 0x166f54: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x166f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_166f58:
    // 0x166f58: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x166f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_166f5c:
    // 0x166f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166f60:
    // 0x166f60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x166f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166f64:
    // 0x166f64: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x166f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_166f68:
    // 0x166f68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x166f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_166f6c:
    // 0x166f6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166f70:
    // 0x166f70: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x166f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_166f74:
    // 0x166f74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x166f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_166f78:
    // 0x166f78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x166f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166f7c:
    // 0x166f7c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x166f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_166f80:
    // 0x166f80: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x166f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_166f84:
    // 0x166f84: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_166f88:
    // 0x166f88: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x166f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_166f8c:
    // 0x166f8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166f90:
    // 0x166f90: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x166f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_166f94:
    // 0x166f94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x166f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_166f98:
    // 0x166f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x166f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166f9c:
    // 0x166f9c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x166f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_166fa0:
    // 0x166fa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x166fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_166fa4:
    // 0x166fa4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x166fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_166fa8:
    // 0x166fa8: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x166fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_166fac:
    // 0x166fac: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x166facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166fb0:
    // 0x166fb0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x166fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166fb4:
    // 0x166fb4: 0x0  nop
    ctx->pc = 0x166fb4u;
    // NOP
label_166fb8:
    // 0x166fb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_166fbc:
    if (ctx->pc == 0x166FBCu) {
        ctx->pc = 0x166FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FB8u;
        // 0x166fbc: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FC0u;
        goto label_166fc0;
    }
    ctx->pc = 0x166FB8u;
    {
        const bool branch_taken_0x166fb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FB8u;
        // 0x166fbc: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fb8) {
            ctx->pc = 0x166FCCu;
            goto label_166fcc;
        }
    }
    ctx->pc = 0x166FC0u;
label_166fc0:
    // 0x166fc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x166fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_166fc4:
    // 0x166fc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_166fc8:
    if (ctx->pc == 0x166FC8u) {
        ctx->pc = 0x166FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FC4u;
        // 0x166fc8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FCCu;
        goto label_166fcc;
    }
    ctx->pc = 0x166FC4u;
    {
        const bool branch_taken_0x166fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FC4u;
        // 0x166fc8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fc4) {
            ctx->pc = 0x166FE8u;
            goto label_166fe8;
        }
    }
    ctx->pc = 0x166FCCu;
label_166fcc:
    // 0x166fcc: 0x0  nop
    ctx->pc = 0x166fccu;
    // NOP
label_166fd0:
    // 0x166fd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x166fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166fd4:
    // 0x166fd4: 0x0  nop
    ctx->pc = 0x166fd4u;
    // NOP
label_166fd8:
    // 0x166fd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_166fdc:
    if (ctx->pc == 0x166FDCu) {
        ctx->pc = 0x166FE0u;
        goto label_166fe0;
    }
    ctx->pc = 0x166FD8u;
    {
        const bool branch_taken_0x166fd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166fd8) {
            ctx->pc = 0x166FE8u;
            goto label_166fe8;
        }
    }
    ctx->pc = 0x166FE0u;
label_166fe0:
    // 0x166fe0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x166fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_166fe4:
    // 0x166fe4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x166fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_166fe8:
    // 0x166fe8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_166fec:
    // 0x166fec: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x166fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_166ff0:
    // 0x166ff0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_166ff4:
    if (ctx->pc == 0x166FF4u) {
        ctx->pc = 0x166FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FF0u;
        // 0x166ff4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FF8u;
        goto label_166ff8;
    }
    ctx->pc = 0x166FF0u;
    {
        const bool branch_taken_0x166ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FF0u;
        // 0x166ff4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ff0) {
            ctx->pc = 0x166FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166fa8;
        }
    }
    ctx->pc = 0x166FF8u;
label_166ff8:
    // 0x166ff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ffc:
    // 0x166ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167000:
    // 0x167000: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x167000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_167004:
    // 0x167004: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x167004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_167008:
    // 0x167008: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x167008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16700c:
    // 0x16700c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_167010:
    // 0x167010: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x167010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_167014:
    // 0x167014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x167014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167018:
    // 0x167018: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x167018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16701c:
    // 0x16701c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_167020:
    // 0x167020: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x167020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_167024:
    // 0x167024: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x167024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_167028:
    // 0x167028: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x167028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16702c:
    // 0x16702c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x16702cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167030:
    // 0x167030: 0x0  nop
    ctx->pc = 0x167030u;
    // NOP
label_167034:
    // 0x167034: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_167038:
    if (ctx->pc == 0x167038u) {
        ctx->pc = 0x167038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167034u;
        // 0x167038: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16703Cu;
        goto label_16703c;
    }
    ctx->pc = 0x167034u;
    {
        const bool branch_taken_0x167034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167034u;
        // 0x167038: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167034) {
            ctx->pc = 0x167048u;
            goto label_167048;
        }
    }
    ctx->pc = 0x16703Cu;
label_16703c:
    // 0x16703c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x16703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_167040:
    // 0x167040: 0x10000007  b           . + 4 + (0x7 << 2)
label_167044:
    if (ctx->pc == 0x167044u) {
        ctx->pc = 0x167044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167040u;
        // 0x167044: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167048u;
        goto label_167048;
    }
    ctx->pc = 0x167040u;
    {
        const bool branch_taken_0x167040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167040u;
        // 0x167044: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167040) {
            ctx->pc = 0x167060u;
            goto label_167060;
        }
    }
    ctx->pc = 0x167048u;
label_167048:
    // 0x167048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x167048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16704c:
    // 0x16704c: 0x0  nop
    ctx->pc = 0x16704cu;
    // NOP
label_167050:
    // 0x167050: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_167054:
    if (ctx->pc == 0x167054u) {
        ctx->pc = 0x167058u;
        goto label_167058;
    }
    ctx->pc = 0x167050u;
    {
        const bool branch_taken_0x167050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167050) {
            ctx->pc = 0x167060u;
            goto label_167060;
        }
    }
    ctx->pc = 0x167058u;
label_167058:
    // 0x167058: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x167058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_16705c:
    // 0x16705c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_167060:
    // 0x167060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_167064:
    // 0x167064: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x167064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_167068:
    // 0x167068: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_16706c:
    if (ctx->pc == 0x16706Cu) {
        ctx->pc = 0x16706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167068u;
        // 0x16706c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167070u;
        goto label_167070;
    }
    ctx->pc = 0x167068u;
    {
        const bool branch_taken_0x167068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167068u;
        // 0x16706c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167068) {
            ctx->pc = 0x167024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167024;
        }
    }
    ctx->pc = 0x167070u;
label_167070:
    // 0x167070: 0xc066e44  jal         func_19B910
label_167074:
    if (ctx->pc == 0x167074u) {
        ctx->pc = 0x167074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167070u;
        // 0x167074: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167078u;
        goto label_167078;
    }
    ctx->pc = 0x167070u;
    SET_GPR_U32(ctx, 31, 0x167078u);
    ctx->pc = 0x167074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167070u;
    // 0x167074: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x167078u;
label_167078:
    // 0x167078: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x167078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16707c:
    // 0x16707c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_167080:
    // 0x167080: 0xc066e96  jal         func_19BA58
label_167084:
    if (ctx->pc == 0x167084u) {
        ctx->pc = 0x167084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167080u;
        // 0x167084: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167088u;
        goto label_167088;
    }
    ctx->pc = 0x167080u;
    SET_GPR_U32(ctx, 31, 0x167088u);
    ctx->pc = 0x167084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167080u;
    // 0x167084: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x167088u;
label_167088:
    // 0x167088: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x167088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16708c:
    // 0x16708c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16708cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_167090:
    // 0x167090: 0xc066e6c  jal         func_19B9B0
label_167094:
    if (ctx->pc == 0x167094u) {
        ctx->pc = 0x167094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167090u;
        // 0x167094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167098u;
        goto label_167098;
    }
    ctx->pc = 0x167090u;
    SET_GPR_U32(ctx, 31, 0x167098u);
    ctx->pc = 0x167094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167090u;
    // 0x167094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x167098u;
label_167098:
    // 0x167098: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x167098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16709c:
    // 0x16709c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1670a0:
    // 0x1670a0: 0xc066ec0  jal         func_19BB00
label_1670a4:
    if (ctx->pc == 0x1670A4u) {
        ctx->pc = 0x1670A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670A0u;
        // 0x1670a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670A8u;
        goto label_1670a8;
    }
    ctx->pc = 0x1670A0u;
    SET_GPR_U32(ctx, 31, 0x1670A8u);
    ctx->pc = 0x1670A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670A0u;
    // 0x1670a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1670A8u;
label_1670a8:
    // 0x1670a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1670a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1670ac:
    // 0x1670ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1670b0:
    // 0x1670b0: 0xc066e1a  jal         func_19B868
label_1670b4:
    if (ctx->pc == 0x1670B4u) {
        ctx->pc = 0x1670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670B0u;
        // 0x1670b4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670B8u;
        goto label_1670b8;
    }
    ctx->pc = 0x1670B0u;
    SET_GPR_U32(ctx, 31, 0x1670B8u);
    ctx->pc = 0x1670B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670B0u;
    // 0x1670b4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1670B8u;
label_1670b8:
    // 0x1670b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1670b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1670bc:
    // 0x1670bc: 0xc041b88  jal         func_106E20
label_1670c0:
    if (ctx->pc == 0x1670C0u) {
        ctx->pc = 0x1670C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670BCu;
        // 0x1670c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670C4u;
        goto label_1670c4;
    }
    ctx->pc = 0x1670BCu;
    SET_GPR_U32(ctx, 31, 0x1670C4u);
    ctx->pc = 0x1670C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670BCu;
    // 0x1670c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E20u, 0x1670BCu, 0x1670C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670C4u;
label_1670c4:
    // 0x1670c4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1670c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1670c8:
    // 0x1670c8: 0xc066e26  jal         func_19B898
label_1670cc:
    if (ctx->pc == 0x1670CCu) {
        ctx->pc = 0x1670CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670C8u;
        // 0x1670cc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670D0u;
        goto label_1670d0;
    }
    ctx->pc = 0x1670C8u;
    SET_GPR_U32(ctx, 31, 0x1670D0u);
    ctx->pc = 0x1670CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670C8u;
    // 0x1670cc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1670D0u;
label_1670d0:
    // 0x1670d0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1670d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1670d4:
    // 0x1670d4: 0xc066e26  jal         func_19B898
label_1670d8:
    if (ctx->pc == 0x1670D8u) {
        ctx->pc = 0x1670D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670D4u;
        // 0x1670d8: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670DCu;
        goto label_1670dc;
    }
    ctx->pc = 0x1670D4u;
    SET_GPR_U32(ctx, 31, 0x1670DCu);
    ctx->pc = 0x1670D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670D4u;
    // 0x1670d8: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1670DCu;
label_1670dc:
    // 0x1670dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1670e0:
    // 0x1670e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1670e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1670e4:
    // 0x1670e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1670e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1670e8:
    // 0x1670e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1670e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1670ec:
    // 0x1670ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1670ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1670f0:
    // 0x1670f0: 0x3e00008  jr          $ra
label_1670f4:
    if (ctx->pc == 0x1670F4u) {
        ctx->pc = 0x1670F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670F0u;
        // 0x1670f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670F8u;
        goto label_1670f8;
    }
    ctx->pc = 0x1670F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1670F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670F0u;
        // 0x1670f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1670F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1670F8u;
label_1670f8:
    // 0x1670f8: 0x0  nop
    ctx->pc = 0x1670f8u;
    // NOP
label_1670fc:
    // 0x1670fc: 0x0  nop
    ctx->pc = 0x1670fcu;
    // NOP
label_167100:
    // 0x167100: 0x3e00008  jr          $ra
label_167104:
    if (ctx->pc == 0x167104u) {
        ctx->pc = 0x167104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167100u;
        // 0x167104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167108u;
        goto label_167108;
    }
    ctx->pc = 0x167100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167100u;
        // 0x167104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167108u;
label_167108:
    // 0x167108: 0x0  nop
    ctx->pc = 0x167108u;
    // NOP
label_16710c:
    // 0x16710c: 0x0  nop
    ctx->pc = 0x16710cu;
    // NOP
label_167110:
    // 0x167110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_167114:
    // 0x167114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167118:
    // 0x167118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16711c:
    // 0x16711c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_167120:
    // 0x167120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_167124:
    // 0x167124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167128:
    // 0x167128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16712c:
    // 0x16712c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16712cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167130:
    // 0x167130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167134:
    // 0x167134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167138:
    // 0x167138: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_16713c:
    // 0x16713c: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_167140:
    // 0x167140: 0xc05f3d0  jal         func_17CF40
label_167144:
    if (ctx->pc == 0x167144u) {
        ctx->pc = 0x167144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167140u;
        // 0x167144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167148u;
        goto label_167148;
    }
    ctx->pc = 0x167140u;
    SET_GPR_U32(ctx, 31, 0x167148u);
    ctx->pc = 0x167144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167140u;
    // 0x167144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x167148u;
label_167148:
    // 0x167148: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x167148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16714c:
    // 0x16714c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_167150:
    // 0x167150: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x167150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167154:
    // 0x167154: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167158:
    // 0x167158: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x167158u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_16715c:
    // 0x16715c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16715cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_167160:
    // 0x167160: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x167160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167164:
    // 0x167164: 0x0  nop
    ctx->pc = 0x167164u;
    // NOP
label_167168:
    // 0x167168: 0x45010039  bc1t        . + 4 + (0x39 << 2)
label_16716c:
    if (ctx->pc == 0x16716Cu) {
        ctx->pc = 0x16716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167168u;
        // 0x16716c: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167170u;
        goto label_167170;
    }
    ctx->pc = 0x167168u;
    {
        const bool branch_taken_0x167168 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167168u;
        // 0x16716c: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167168) {
            ctx->pc = 0x167250u;
            { ctx->pc = 0x167250; return; }
        }
    }
    ctx->pc = 0x167170u;
label_167170:
    // 0x167170: 0x3c033f09  lui         $v1, 0x3F09
    ctx->pc = 0x167170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16137 << 16));
label_167174:
    // 0x167174: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_167178:
    // 0x167178: 0x34641870  ori         $a0, $v1, 0x1870
    ctx->pc = 0x167178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6256);
label_16717c:
    // 0x16717c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167180:
    // 0x167180: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x167180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167184:
    // 0x167184: 0x3443774f  ori         $v1, $v0, 0x774F
    ctx->pc = 0x167184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30543);
label_167188:
    // 0x167188: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_16718c:
    // 0x16718c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16718cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_167190:
    // 0x167190: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x167190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_167194:
    // 0x167194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167198:
    // 0x167198: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x167198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_16719c:
    // 0x16719c: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x16719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1671a0:
    // 0x1671a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1671a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1671a4:
    // 0x1671a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1671a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1671a8:
    // 0x1671a8: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x1671a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1671ac:
    // 0x1671ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1671acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1671b0:
    // 0x1671b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1671b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1671b4:
    // 0x1671b4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1671b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1671b8:
    // 0x1671b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1671b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1671bc:
    // 0x1671bc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1671bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1671c0:
    // 0x1671c0: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x1671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1671c4:
    // 0x1671c4: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1671c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1671c8:
    // 0x1671c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1671c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1671cc:
    // 0x1671cc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1671ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1671d0:
    // 0x1671d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1671d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1671d4:
    // 0x1671d4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1671d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1671d8:
    // 0x1671d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1671d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1671dc:
    // 0x1671dc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1671dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1671e0:
    // 0x1671e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1671e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1671e4:
    // 0x1671e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1671e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1671e8:
    // 0x1671e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1671e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1671ec:
    // 0x1671ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1671ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1671f0:
    // 0x1671f0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1671f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1671f4:
    // 0x1671f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1671f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1671f8:
    // 0x1671f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1671f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1671fc:
    // 0x1671fc: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_167200:
    // 0x167200: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x167200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167204:
    // 0x167204: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x167204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167208:
    // 0x167208: 0x0  nop
    ctx->pc = 0x167208u;
    // NOP
label_16720c:
    // 0x16720c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_167210:
    if (ctx->pc == 0x167210u) {
        ctx->pc = 0x167210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16720Cu;
        // 0x167210: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167214u;
        goto label_167214;
    }
    ctx->pc = 0x16720Cu;
    {
        const bool branch_taken_0x16720c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16720Cu;
        // 0x167210: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16720c) {
            ctx->pc = 0x167220u;
            goto label_167220;
        }
    }
    ctx->pc = 0x167214u;
label_167214:
    // 0x167214: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x167214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_167218:
    // 0x167218: 0x10000007  b           . + 4 + (0x7 << 2)
label_16721c:
    if (ctx->pc == 0x16721Cu) {
        ctx->pc = 0x16721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167218u;
        // 0x16721c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167220u;
        goto label_167220;
    }
    ctx->pc = 0x167218u;
    {
        const bool branch_taken_0x167218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167218u;
        // 0x16721c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167218) {
            ctx->pc = 0x167238u;
            goto label_167238;
        }
    }
    ctx->pc = 0x167220u;
label_167220:
    // 0x167220: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x167220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167224:
    // 0x167224: 0x0  nop
    ctx->pc = 0x167224u;
    // NOP
label_167228:
    // 0x167228: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16722c:
    if (ctx->pc == 0x16722Cu) {
        ctx->pc = 0x167230u;
        goto label_167230;
    }
    ctx->pc = 0x167228u;
    {
        const bool branch_taken_0x167228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167228) {
            ctx->pc = 0x167238u;
            goto label_167238;
        }
    }
    ctx->pc = 0x167230u;
label_167230:
    // 0x167230: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x167230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_167234:
    // 0x167234: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x167234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_167238:
    // 0x167238: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16723c:
    // 0x16723c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x16723cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    ctx->pc = 0x167240u;
    return;
}
