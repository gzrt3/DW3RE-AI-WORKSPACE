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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part511(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        case 0x278b08u: goto label_278b08;
        case 0x278b0cu: goto label_278b0c;
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        case 0x278b60u: goto label_278b60;
        case 0x278b64u: goto label_278b64;
        case 0x278b68u: goto label_278b68;
        case 0x278b6cu: goto label_278b6c;
        case 0x278b70u: goto label_278b70;
        case 0x278b74u: goto label_278b74;
        case 0x278b78u: goto label_278b78;
        case 0x278b7cu: goto label_278b7c;
        case 0x278b80u: goto label_278b80;
        case 0x278b84u: goto label_278b84;
        case 0x278b88u: goto label_278b88;
        case 0x278b8cu: goto label_278b8c;
        case 0x278b90u: goto label_278b90;
        case 0x278b94u: goto label_278b94;
        case 0x278b98u: goto label_278b98;
        case 0x278b9cu: goto label_278b9c;
        case 0x278ba0u: goto label_278ba0;
        case 0x278ba4u: goto label_278ba4;
        case 0x278ba8u: goto label_278ba8;
        case 0x278bacu: goto label_278bac;
        case 0x278bb0u: goto label_278bb0;
        case 0x278bb4u: goto label_278bb4;
        case 0x278bb8u: goto label_278bb8;
        case 0x278bbcu: goto label_278bbc;
        case 0x278bc0u: goto label_278bc0;
        case 0x278bc4u: goto label_278bc4;
        case 0x278bc8u: goto label_278bc8;
        case 0x278bccu: goto label_278bcc;
        case 0x278bd0u: goto label_278bd0;
        case 0x278bd4u: goto label_278bd4;
        case 0x278bd8u: goto label_278bd8;
        case 0x278bdcu: goto label_278bdc;
        case 0x278be0u: goto label_278be0;
        case 0x278be4u: goto label_278be4;
        case 0x278be8u: goto label_278be8;
        case 0x278becu: goto label_278bec;
        case 0x278bf0u: goto label_278bf0;
        case 0x278bf4u: goto label_278bf4;
        case 0x278bf8u: goto label_278bf8;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c00u: goto label_278c00;
        case 0x278c04u: goto label_278c04;
        case 0x278c08u: goto label_278c08;
        case 0x278c0cu: goto label_278c0c;
        case 0x278c10u: goto label_278c10;
        case 0x278c14u: goto label_278c14;
        case 0x278c18u: goto label_278c18;
        case 0x278c1cu: goto label_278c1c;
        case 0x278c20u: goto label_278c20;
        case 0x278c24u: goto label_278c24;
        case 0x278c28u: goto label_278c28;
        case 0x278c2cu: goto label_278c2c;
        case 0x278c30u: goto label_278c30;
        case 0x278c34u: goto label_278c34;
        case 0x278c38u: goto label_278c38;
        case 0x278c3cu: goto label_278c3c;
        case 0x278c40u: goto label_278c40;
        case 0x278c44u: goto label_278c44;
        case 0x278c48u: goto label_278c48;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c50u: goto label_278c50;
        case 0x278c54u: goto label_278c54;
        case 0x278c58u: goto label_278c58;
        case 0x278c5cu: goto label_278c5c;
        case 0x278c60u: goto label_278c60;
        case 0x278c64u: goto label_278c64;
        case 0x278c68u: goto label_278c68;
        case 0x278c6cu: goto label_278c6c;
        case 0x278c70u: goto label_278c70;
        case 0x278c74u: goto label_278c74;
        case 0x278c78u: goto label_278c78;
        case 0x278c7cu: goto label_278c7c;
        case 0x278c80u: goto label_278c80;
        case 0x278c84u: goto label_278c84;
        case 0x278c88u: goto label_278c88;
        case 0x278c8cu: goto label_278c8c;
        case 0x278c90u: goto label_278c90;
        case 0x278c94u: goto label_278c94;
        case 0x278c98u: goto label_278c98;
        case 0x278c9cu: goto label_278c9c;
        case 0x278ca0u: goto label_278ca0;
        case 0x278ca4u: goto label_278ca4;
        case 0x278ca8u: goto label_278ca8;
        case 0x278cacu: goto label_278cac;
        case 0x278cb0u: goto label_278cb0;
        case 0x278cb4u: goto label_278cb4;
        case 0x278cb8u: goto label_278cb8;
        case 0x278cbcu: goto label_278cbc;
        case 0x278cc0u: goto label_278cc0;
        case 0x278cc4u: goto label_278cc4;
        case 0x278cc8u: goto label_278cc8;
        case 0x278cccu: goto label_278ccc;
        case 0x278cd0u: goto label_278cd0;
        case 0x278cd4u: goto label_278cd4;
        case 0x278cd8u: goto label_278cd8;
        case 0x278cdcu: goto label_278cdc;
        case 0x278ce0u: goto label_278ce0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278ce8u: goto label_278ce8;
        case 0x278cecu: goto label_278cec;
        case 0x278cf0u: goto label_278cf0;
        case 0x278cf4u: goto label_278cf4;
        case 0x278cf8u: goto label_278cf8;
        case 0x278cfcu: goto label_278cfc;
        case 0x278d00u: goto label_278d00;
        case 0x278d04u: goto label_278d04;
        case 0x278d08u: goto label_278d08;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d10u: goto label_278d10;
        case 0x278d14u: goto label_278d14;
        case 0x278d18u: goto label_278d18;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d20u: goto label_278d20;
        case 0x278d24u: goto label_278d24;
        case 0x278d28u: goto label_278d28;
        case 0x278d2cu: goto label_278d2c;
        case 0x278d30u: goto label_278d30;
        case 0x278d34u: goto label_278d34;
        case 0x278d38u: goto label_278d38;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d40u: goto label_278d40;
        case 0x278d44u: goto label_278d44;
        case 0x278d48u: goto label_278d48;
        case 0x278d4cu: goto label_278d4c;
        case 0x278d50u: goto label_278d50;
        case 0x278d54u: goto label_278d54;
        case 0x278d58u: goto label_278d58;
        case 0x278d5cu: goto label_278d5c;
        case 0x278d60u: goto label_278d60;
        case 0x278d64u: goto label_278d64;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        case 0x278d70u: goto label_278d70;
        case 0x278d74u: goto label_278d74;
        case 0x278d78u: goto label_278d78;
        case 0x278d7cu: goto label_278d7c;
        case 0x278d80u: goto label_278d80;
        case 0x278d84u: goto label_278d84;
        case 0x278d88u: goto label_278d88;
        case 0x278d8cu: goto label_278d8c;
        case 0x278d90u: goto label_278d90;
        case 0x278d94u: goto label_278d94;
        case 0x278d98u: goto label_278d98;
        case 0x278d9cu: goto label_278d9c;
        case 0x278da0u: goto label_278da0;
        case 0x278da4u: goto label_278da4;
        case 0x278da8u: goto label_278da8;
        case 0x278dacu: goto label_278dac;
        case 0x278db0u: goto label_278db0;
        case 0x278db4u: goto label_278db4;
        case 0x278db8u: goto label_278db8;
        case 0x278dbcu: goto label_278dbc;
        case 0x278dc0u: goto label_278dc0;
        case 0x278dc4u: goto label_278dc4;
        case 0x278dc8u: goto label_278dc8;
        case 0x278dccu: goto label_278dcc;
        case 0x278dd0u: goto label_278dd0;
        case 0x278dd4u: goto label_278dd4;
        case 0x278dd8u: goto label_278dd8;
        case 0x278ddcu: goto label_278ddc;
        case 0x278de0u: goto label_278de0;
        case 0x278de4u: goto label_278de4;
        case 0x278de8u: goto label_278de8;
        case 0x278decu: goto label_278dec;
        case 0x278df0u: goto label_278df0;
        case 0x278df4u: goto label_278df4;
        case 0x278df8u: goto label_278df8;
        case 0x278dfcu: goto label_278dfc;
        case 0x278e00u: goto label_278e00;
        case 0x278e04u: goto label_278e04;
        case 0x278e08u: goto label_278e08;
        case 0x278e0cu: goto label_278e0c;
        case 0x278e10u: goto label_278e10;
        case 0x278e14u: goto label_278e14;
        case 0x278e18u: goto label_278e18;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e20u: goto label_278e20;
        case 0x278e24u: goto label_278e24;
        case 0x278e28u: goto label_278e28;
        case 0x278e2cu: goto label_278e2c;
        case 0x278e30u: goto label_278e30;
        case 0x278e34u: goto label_278e34;
        case 0x278e38u: goto label_278e38;
        case 0x278e3cu: goto label_278e3c;
        case 0x278e40u: goto label_278e40;
        case 0x278e44u: goto label_278e44;
        case 0x278e48u: goto label_278e48;
        case 0x278e4cu: goto label_278e4c;
        case 0x278e50u: goto label_278e50;
        case 0x278e54u: goto label_278e54;
        case 0x278e58u: goto label_278e58;
        case 0x278e5cu: goto label_278e5c;
        case 0x278e60u: goto label_278e60;
        case 0x278e64u: goto label_278e64;
        case 0x278e68u: goto label_278e68;
        case 0x278e6cu: goto label_278e6c;
        case 0x278e70u: goto label_278e70;
        case 0x278e74u: goto label_278e74;
        case 0x278e78u: goto label_278e78;
        case 0x278e7cu: goto label_278e7c;
        case 0x278e80u: goto label_278e80;
        case 0x278e84u: goto label_278e84;
        case 0x278e88u: goto label_278e88;
        case 0x278e8cu: goto label_278e8c;
        case 0x278e90u: goto label_278e90;
        case 0x278e94u: goto label_278e94;
        case 0x278e98u: goto label_278e98;
        case 0x278e9cu: goto label_278e9c;
        case 0x278ea0u: goto label_278ea0;
        case 0x278ea4u: goto label_278ea4;
        case 0x278ea8u: goto label_278ea8;
        case 0x278eacu: goto label_278eac;
        case 0x278eb0u: goto label_278eb0;
        case 0x278eb4u: goto label_278eb4;
        case 0x278eb8u: goto label_278eb8;
        case 0x278ebcu: goto label_278ebc;
        case 0x278ec0u: goto label_278ec0;
        case 0x278ec4u: goto label_278ec4;
        case 0x278ec8u: goto label_278ec8;
        case 0x278eccu: goto label_278ecc;
        case 0x278ed0u: goto label_278ed0;
        case 0x278ed4u: goto label_278ed4;
        case 0x278ed8u: goto label_278ed8;
        case 0x278edcu: goto label_278edc;
        case 0x278ee0u: goto label_278ee0;
        case 0x278ee4u: goto label_278ee4;
        case 0x278ee8u: goto label_278ee8;
        case 0x278eecu: goto label_278eec;
        case 0x278ef0u: goto label_278ef0;
        case 0x278ef4u: goto label_278ef4;
        case 0x278ef8u: goto label_278ef8;
        case 0x278efcu: goto label_278efc;
        case 0x278f00u: goto label_278f00;
        case 0x278f04u: goto label_278f04;
        case 0x278f08u: goto label_278f08;
        case 0x278f0cu: goto label_278f0c;
        case 0x278f10u: goto label_278f10;
        case 0x278f14u: goto label_278f14;
        case 0x278f18u: goto label_278f18;
        case 0x278f1cu: goto label_278f1c;
        case 0x278f20u: goto label_278f20;
        case 0x278f24u: goto label_278f24;
        case 0x278f28u: goto label_278f28;
        case 0x278f2cu: goto label_278f2c;
        case 0x278f30u: goto label_278f30;
        case 0x278f34u: goto label_278f34;
        case 0x278f38u: goto label_278f38;
        case 0x278f3cu: goto label_278f3c;
        case 0x278f40u: goto label_278f40;
        case 0x278f44u: goto label_278f44;
        case 0x278f48u: goto label_278f48;
        case 0x278f4cu: goto label_278f4c;
        case 0x278f50u: goto label_278f50;
        case 0x278f54u: goto label_278f54;
        case 0x278f58u: goto label_278f58;
        case 0x278f5cu: goto label_278f5c;
        case 0x278f60u: goto label_278f60;
        case 0x278f64u: goto label_278f64;
        case 0x278f68u: goto label_278f68;
        case 0x278f6cu: goto label_278f6c;
        case 0x278f70u: goto label_278f70;
        case 0x278f74u: goto label_278f74;
        case 0x278f78u: goto label_278f78;
        case 0x278f7cu: goto label_278f7c;
        case 0x278f80u: goto label_278f80;
        case 0x278f84u: goto label_278f84;
        case 0x278f88u: goto label_278f88;
        case 0x278f8cu: goto label_278f8c;
        case 0x278f90u: goto label_278f90;
        case 0x278f94u: goto label_278f94;
        case 0x278f98u: goto label_278f98;
        case 0x278f9cu: goto label_278f9c;
        case 0x278fa0u: goto label_278fa0;
        case 0x278fa4u: goto label_278fa4;
        case 0x278fa8u: goto label_278fa8;
        case 0x278facu: goto label_278fac;
        case 0x278fb0u: goto label_278fb0;
        case 0x278fb4u: goto label_278fb4;
        case 0x278fb8u: goto label_278fb8;
        case 0x278fbcu: goto label_278fbc;
        case 0x278fc0u: goto label_278fc0;
        case 0x278fc4u: goto label_278fc4;
        case 0x278fc8u: goto label_278fc8;
        case 0x278fccu: goto label_278fcc;
        case 0x278fd0u: goto label_278fd0;
        case 0x278fd4u: goto label_278fd4;
        case 0x278fd8u: goto label_278fd8;
        case 0x278fdcu: goto label_278fdc;
        case 0x278fe0u: goto label_278fe0;
        case 0x278fe4u: goto label_278fe4;
        case 0x278fe8u: goto label_278fe8;
        case 0x278fecu: goto label_278fec;
        case 0x278ff0u: goto label_278ff0;
        case 0x278ff4u: goto label_278ff4;
        case 0x278ff8u: goto label_278ff8;
        case 0x278ffcu: goto label_278ffc;
        case 0x279000u: goto label_279000;
        case 0x279004u: goto label_279004;
        case 0x279008u: goto label_279008;
        case 0x27900cu: goto label_27900c;
        case 0x279010u: goto label_279010;
        case 0x279014u: goto label_279014;
        case 0x279018u: goto label_279018;
        case 0x27901cu: goto label_27901c;
        case 0x279020u: goto label_279020;
        case 0x279024u: goto label_279024;
        case 0x279028u: goto label_279028;
        case 0x27902cu: goto label_27902c;
        case 0x279030u: goto label_279030;
        case 0x279034u: goto label_279034;
        case 0x279038u: goto label_279038;
        case 0x27903cu: goto label_27903c;
        case 0x279040u: goto label_279040;
        case 0x279044u: goto label_279044;
        case 0x279048u: goto label_279048;
        case 0x27904cu: goto label_27904c;
        case 0x279050u: goto label_279050;
        case 0x279054u: goto label_279054;
        case 0x279058u: goto label_279058;
        case 0x27905cu: goto label_27905c;
        case 0x279060u: goto label_279060;
        case 0x279064u: goto label_279064;
        case 0x279068u: goto label_279068;
        case 0x27906cu: goto label_27906c;
        case 0x279070u: goto label_279070;
        case 0x279074u: goto label_279074;
        case 0x279078u: goto label_279078;
        case 0x27907cu: goto label_27907c;
        case 0x279080u: goto label_279080;
        case 0x279084u: goto label_279084;
        case 0x279088u: goto label_279088;
        case 0x27908cu: goto label_27908c;
        case 0x279090u: goto label_279090;
        case 0x279094u: goto label_279094;
        case 0x279098u: goto label_279098;
        case 0x27909cu: goto label_27909c;
        case 0x2790a0u: goto label_2790a0;
        case 0x2790a4u: goto label_2790a4;
        case 0x2790a8u: goto label_2790a8;
        case 0x2790acu: goto label_2790ac;
        case 0x2790b0u: goto label_2790b0;
        case 0x2790b4u: goto label_2790b4;
        case 0x2790b8u: goto label_2790b8;
        case 0x2790bcu: goto label_2790bc;
        case 0x2790c0u: goto label_2790c0;
        case 0x2790c4u: goto label_2790c4;
        case 0x2790c8u: goto label_2790c8;
        case 0x2790ccu: goto label_2790cc;
        case 0x2790d0u: goto label_2790d0;
        case 0x2790d4u: goto label_2790d4;
        case 0x2790d8u: goto label_2790d8;
        case 0x2790dcu: goto label_2790dc;
        case 0x2790e0u: goto label_2790e0;
        case 0x2790e4u: goto label_2790e4;
        case 0x2790e8u: goto label_2790e8;
        case 0x2790ecu: goto label_2790ec;
        case 0x2790f0u: goto label_2790f0;
        case 0x2790f4u: goto label_2790f4;
        case 0x2790f8u: goto label_2790f8;
        case 0x2790fcu: goto label_2790fc;
        case 0x279100u: goto label_279100;
        case 0x279104u: goto label_279104;
        case 0x279108u: goto label_279108;
        case 0x27910cu: goto label_27910c;
        case 0x279110u: goto label_279110;
        case 0x279114u: goto label_279114;
        case 0x279118u: goto label_279118;
        case 0x27911cu: goto label_27911c;
        case 0x279120u: goto label_279120;
        case 0x279124u: goto label_279124;
        case 0x279128u: goto label_279128;
        case 0x27912cu: goto label_27912c;
        case 0x279130u: goto label_279130;
        case 0x279134u: goto label_279134;
        case 0x279138u: goto label_279138;
        case 0x27913cu: goto label_27913c;
        case 0x279140u: goto label_279140;
        case 0x279144u: goto label_279144;
        case 0x279148u: goto label_279148;
        case 0x27914cu: goto label_27914c;
        case 0x279150u: goto label_279150;
        case 0x279154u: goto label_279154;
        case 0x279158u: goto label_279158;
        case 0x27915cu: goto label_27915c;
        case 0x279160u: goto label_279160;
        case 0x279164u: goto label_279164;
        case 0x279168u: goto label_279168;
        case 0x27916cu: goto label_27916c;
        case 0x279170u: goto label_279170;
        case 0x279174u: goto label_279174;
        case 0x279178u: goto label_279178;
        case 0x27917cu: goto label_27917c;
        case 0x279180u: goto label_279180;
        case 0x279184u: goto label_279184;
        case 0x279188u: goto label_279188;
        case 0x27918cu: goto label_27918c;
        case 0x279190u: goto label_279190;
        case 0x279194u: goto label_279194;
        case 0x279198u: goto label_279198;
        case 0x27919cu: goto label_27919c;
        case 0x2791a0u: goto label_2791a0;
        case 0x2791a4u: goto label_2791a4;
        case 0x2791a8u: goto label_2791a8;
        case 0x2791acu: goto label_2791ac;
        case 0x2791b0u: goto label_2791b0;
        case 0x2791b4u: goto label_2791b4;
        case 0x2791b8u: goto label_2791b8;
        case 0x2791bcu: goto label_2791bc;
        case 0x2791c0u: goto label_2791c0;
        case 0x2791c4u: goto label_2791c4;
        case 0x2791c8u: goto label_2791c8;
        case 0x2791ccu: goto label_2791cc;
        case 0x2791d0u: goto label_2791d0;
        case 0x2791d4u: goto label_2791d4;
        case 0x2791d8u: goto label_2791d8;
        case 0x2791dcu: goto label_2791dc;
        case 0x2791e0u: goto label_2791e0;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791e8u: goto label_2791e8;
        case 0x2791ecu: goto label_2791ec;
        case 0x2791f0u: goto label_2791f0;
        case 0x2791f4u: goto label_2791f4;
        case 0x2791f8u: goto label_2791f8;
        case 0x2791fcu: goto label_2791fc;
        case 0x279200u: goto label_279200;
        case 0x279204u: goto label_279204;
        case 0x279208u: goto label_279208;
        case 0x27920cu: goto label_27920c;
        case 0x279210u: goto label_279210;
        case 0x279214u: goto label_279214;
        case 0x279218u: goto label_279218;
        case 0x27921cu: goto label_27921c;
        case 0x279220u: goto label_279220;
        case 0x279224u: goto label_279224;
        case 0x279228u: goto label_279228;
        case 0x27922cu: goto label_27922c;
        case 0x279230u: goto label_279230;
        case 0x279234u: goto label_279234;
        case 0x279238u: goto label_279238;
        case 0x27923cu: goto label_27923c;
        case 0x279240u: goto label_279240;
        case 0x279244u: goto label_279244;
        case 0x279248u: goto label_279248;
        case 0x27924cu: goto label_27924c;
        case 0x279250u: goto label_279250;
        case 0x279254u: goto label_279254;
        case 0x279258u: goto label_279258;
        case 0x27925cu: goto label_27925c;
        case 0x279260u: goto label_279260;
        case 0x279264u: goto label_279264;
        case 0x279268u: goto label_279268;
        case 0x27926cu: goto label_27926c;
        case 0x279270u: goto label_279270;
        case 0x279274u: goto label_279274;
        case 0x279278u: goto label_279278;
        case 0x27927cu: goto label_27927c;
        case 0x279280u: goto label_279280;
        case 0x279284u: goto label_279284;
        case 0x279288u: goto label_279288;
        case 0x27928cu: goto label_27928c;
        case 0x279290u: goto label_279290;
        case 0x279294u: goto label_279294;
        case 0x279298u: goto label_279298;
        case 0x27929cu: goto label_27929c;
        case 0x2792a0u: goto label_2792a0;
        case 0x2792a4u: goto label_2792a4;
        case 0x2792a8u: goto label_2792a8;
        case 0x2792acu: goto label_2792ac;
        case 0x2792b0u: goto label_2792b0;
        case 0x2792b4u: goto label_2792b4;
        case 0x2792b8u: goto label_2792b8;
        case 0x2792bcu: goto label_2792bc;
        case 0x2792c0u: goto label_2792c0;
        case 0x2792c4u: goto label_2792c4;
        case 0x2792c8u: goto label_2792c8;
        case 0x2792ccu: goto label_2792cc;
        default: return;
    }

label_278b00:
    // 0x278b00: 0xfceb  .word       0x0000FCEB                   # sltu        $ra, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b00u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278b04:
    // 0x278b04: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x278b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_278b08:
    // 0x278b08: 0x0  nop
    ctx->pc = 0x278b08u;
    // NOP
label_278b0c:
    // 0x278b0c: 0x0  nop
    ctx->pc = 0x278b0cu;
    // NOP
label_278b10:
    // 0x278b10: 0xfcf8  dsll        $ra, $zero, 19
    ctx->pc = 0x278b10u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 19);
label_278b14:
    // 0x278b14: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_278b18:
    // 0x278b18: 0x0  nop
    ctx->pc = 0x278b18u;
    // NOP
label_278b1c:
    // 0x278b1c: 0x0  nop
    ctx->pc = 0x278b1cu;
    // NOP
label_278b20:
    // 0x278b20: 0xfd00  sll         $ra, $zero, 20
    ctx->pc = 0x278b20u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_278b24:
    // 0x278b24: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x278b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278b28:
    // 0x278b28: 0x0  nop
    ctx->pc = 0x278b28u;
    // NOP
label_278b2c:
    // 0x278b2c: 0x0  nop
    ctx->pc = 0x278b2cu;
    // NOP
label_278b30:
    // 0x278b30: 0xfd0e  .word       0x0000FD0E                   # INVALID     $zero, $zero, -0x2F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278B30 raw=0x0000FD0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278b34:
    // 0x278b34: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_278b38:
    // 0x278b38: 0x0  nop
    ctx->pc = 0x278b38u;
    // NOP
label_278b3c:
    // 0x278b3c: 0x0  nop
    ctx->pc = 0x278b3cu;
    // NOP
label_278b40:
    // 0x278b40: 0xfd1d  .word       0x0000FD1D                   # dmultu      $zero, $zero # 0000FD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278B40 raw=0x0000FD1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278b44:
    // 0x278b44: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278b48:
    // 0x278b48: 0x0  nop
    ctx->pc = 0x278b48u;
    // NOP
label_278b4c:
    // 0x278b4c: 0x0  nop
    ctx->pc = 0x278b4cu;
    // NOP
label_278b50:
    // 0x278b50: 0xfd26  .word       0x0000FD26                   # xor         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b50u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_278b54:
    // 0x278b54: 0x2a90  .word       0x00002A90                   # mfhi        $a1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b54u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_278b58:
    // 0x278b58: 0x0  nop
    ctx->pc = 0x278b58u;
    // NOP
label_278b5c:
    // 0x278b5c: 0x0  nop
    ctx->pc = 0x278b5cu;
    // NOP
label_278b60:
    // 0x278b60: 0xfd2c  .word       0x0000FD2C                   # dadd        $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_278b64:
    // 0x278b64: 0xace0  .word       0x0000ACE0                   # add         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_278b68:
    // 0x278b68: 0x0  nop
    ctx->pc = 0x278b68u;
    // NOP
label_278b6c:
    // 0x278b6c: 0x0  nop
    ctx->pc = 0x278b6cu;
    // NOP
label_278b70:
    // 0x278b70: 0xfd42  srl         $ra, $zero, 21
    ctx->pc = 0x278b70u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_278b74:
    // 0x278b74: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_278b78:
    // 0x278b78: 0x0  nop
    ctx->pc = 0x278b78u;
    // NOP
label_278b7c:
    // 0x278b7c: 0x0  nop
    ctx->pc = 0x278b7cu;
    // NOP
label_278b80:
    // 0x278b80: 0xfd56  .word       0x0000FD56                   # dsrlv       $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b80u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278b84:
    // 0x278b84: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x278b84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_278b88:
    // 0x278b88: 0x0  nop
    ctx->pc = 0x278b88u;
    // NOP
label_278b8c:
    // 0x278b8c: 0x0  nop
    ctx->pc = 0x278b8cu;
    // NOP
label_278b90:
    // 0x278b90: 0xfd5f  .word       0x0000FD5F                   # ddivu       $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278B90 raw=0x0000FD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278b94:
    // 0x278b94: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x278b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278b98:
    // 0x278b98: 0x0  nop
    ctx->pc = 0x278b98u;
    // NOP
label_278b9c:
    // 0x278b9c: 0x0  nop
    ctx->pc = 0x278b9cu;
    // NOP
label_278ba0:
    // 0x278ba0: 0xfd6e  .word       0x0000FD6E                   # dsub        $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ba0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_278ba4:
    // 0x278ba4: 0x5930  tge         $zero, $zero, 356
    ctx->pc = 0x278ba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278ba8:
    // 0x278ba8: 0x0  nop
    ctx->pc = 0x278ba8u;
    // NOP
label_278bac:
    // 0x278bac: 0x0  nop
    ctx->pc = 0x278bacu;
    // NOP
label_278bb0:
    // 0x278bb0: 0xfd7a  dsrl        $ra, $zero, 21
    ctx->pc = 0x278bb0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 21);
label_278bb4:
    // 0x278bb4: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x278bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278bb8:
    // 0x278bb8: 0x0  nop
    ctx->pc = 0x278bb8u;
    // NOP
label_278bbc:
    // 0x278bbc: 0x0  nop
    ctx->pc = 0x278bbcu;
    // NOP
label_278bc0:
    // 0x278bc0: 0xfd8f  .word       0x0000FD8F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278bc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278bc4:
    // 0x278bc4: 0x8160  .word       0x00008160                   # add         $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_278bc8:
    // 0x278bc8: 0x0  nop
    ctx->pc = 0x278bc8u;
    // NOP
label_278bcc:
    // 0x278bcc: 0x0  nop
    ctx->pc = 0x278bccu;
    // NOP
label_278bd0:
    // 0x278bd0: 0xfda0  .word       0x0000FDA0                   # add         $ra, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278bd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_278bd4:
    // 0x278bd4: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x278bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_278bd8:
    // 0x278bd8: 0x0  nop
    ctx->pc = 0x278bd8u;
    // NOP
label_278bdc:
    // 0x278bdc: 0x0  nop
    ctx->pc = 0x278bdcu;
    // NOP
label_278be0:
    // 0x278be0: 0xfdaa  .word       0x0000FDAA                   # slt         $ra, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278be0u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278be4:
    // 0x278be4: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_278be8:
    // 0x278be8: 0x0  nop
    ctx->pc = 0x278be8u;
    // NOP
label_278bec:
    // 0x278bec: 0x0  nop
    ctx->pc = 0x278becu;
    // NOP
label_278bf0:
    // 0x278bf0: 0xfdb8  dsll        $ra, $zero, 22
    ctx->pc = 0x278bf0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 22);
label_278bf4:
    // 0x278bf4: 0x5880  sll         $t3, $zero, 2
    ctx->pc = 0x278bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_278bf8:
    // 0x278bf8: 0x0  nop
    ctx->pc = 0x278bf8u;
    // NOP
label_278bfc:
    // 0x278bfc: 0x0  nop
    ctx->pc = 0x278bfcu;
    // NOP
label_278c00:
    // 0x278c00: 0xfdc4  .word       0x0000FDC4                   # sllv        $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c00u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278c04:
    // 0x278c04: 0xb030  tge         $zero, $zero, 704
    ctx->pc = 0x278c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278c08:
    // 0x278c08: 0x0  nop
    ctx->pc = 0x278c08u;
    // NOP
label_278c0c:
    // 0x278c0c: 0x0  nop
    ctx->pc = 0x278c0cu;
    // NOP
label_278c10:
    // 0x278c10: 0xfddb  .word       0x0000FDDB                   # divu        $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c10u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_278c14:
    // 0x278c14: 0x76a0  .word       0x000076A0                   # add         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_278c18:
    // 0x278c18: 0x0  nop
    ctx->pc = 0x278c18u;
    // NOP
label_278c1c:
    // 0x278c1c: 0x0  nop
    ctx->pc = 0x278c1cu;
    // NOP
label_278c20:
    // 0x278c20: 0xfdea  .word       0x0000FDEA                   # slt         $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c20u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278c24:
    // 0x278c24: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278c28:
    // 0x278c28: 0x0  nop
    ctx->pc = 0x278c28u;
    // NOP
label_278c2c:
    // 0x278c2c: 0x0  nop
    ctx->pc = 0x278c2cu;
    // NOP
label_278c30:
    // 0x278c30: 0xfdf9  .word       0x0000FDF9                   # INVALID     $zero, $zero, -0x207 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x278C30 raw=0x0000FDF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278c34:
    // 0x278c34: 0x60a0  .word       0x000060A0                   # add         $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278c38:
    // 0x278c38: 0x0  nop
    ctx->pc = 0x278c38u;
    // NOP
label_278c3c:
    // 0x278c3c: 0x0  nop
    ctx->pc = 0x278c3cu;
    // NOP
label_278c40:
    // 0x278c40: 0xfe06  .word       0x0000FE06                   # srlv        $ra, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278c44:
    // 0x278c44: 0xeed0  .word       0x0000EED0                   # mfhi        $sp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c44u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_278c48:
    // 0x278c48: 0x0  nop
    ctx->pc = 0x278c48u;
    // NOP
label_278c4c:
    // 0x278c4c: 0x0  nop
    ctx->pc = 0x278c4cu;
    // NOP
label_278c50:
    // 0x278c50: 0xfe24  .word       0x0000FE24                   # and         $ra, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c50u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278c54:
    // 0x278c54: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_278c58:
    // 0x278c58: 0x0  nop
    ctx->pc = 0x278c58u;
    // NOP
label_278c5c:
    // 0x278c5c: 0x0  nop
    ctx->pc = 0x278c5cu;
    // NOP
label_278c60:
    // 0x278c60: 0xfe33  tltu        $zero, $zero, 1016
    ctx->pc = 0x278c60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278c64:
    // 0x278c64: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c64u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_278c68:
    // 0x278c68: 0x0  nop
    ctx->pc = 0x278c68u;
    // NOP
label_278c6c:
    // 0x278c6c: 0x0  nop
    ctx->pc = 0x278c6cu;
    // NOP
label_278c70:
    // 0x278c70: 0xfe46  .word       0x0000FE46                   # srlv        $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c70u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278c74:
    // 0x278c74: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x278c74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278c78:
    // 0x278c78: 0x0  nop
    ctx->pc = 0x278c78u;
    // NOP
label_278c7c:
    // 0x278c7c: 0x0  nop
    ctx->pc = 0x278c7cu;
    // NOP
label_278c80:
    // 0x278c80: 0xfe4f  .word       0x0000FE4F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278c84:
    // 0x278c84: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278c84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278c88:
    // 0x278c88: 0x0  nop
    ctx->pc = 0x278c88u;
    // NOP
label_278c8c:
    // 0x278c8c: 0x0  nop
    ctx->pc = 0x278c8cu;
    // NOP
label_278c90:
    // 0x278c90: 0xfe58  .word       0x0000FE58                   # mult        $ra, $zero, $zero # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278c94:
    // 0x278c94: 0x7f70  tge         $zero, $zero, 509
    ctx->pc = 0x278c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278c98:
    // 0x278c98: 0x0  nop
    ctx->pc = 0x278c98u;
    // NOP
label_278c9c:
    // 0x278c9c: 0x0  nop
    ctx->pc = 0x278c9cu;
    // NOP
label_278ca0:
    // 0x278ca0: 0xfe68  .word       0x0000FE68                   # mfsa        $ra # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278ca0u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_278ca4:
    // 0x278ca4: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x278ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278ca8:
    // 0x278ca8: 0x0  nop
    ctx->pc = 0x278ca8u;
    // NOP
label_278cac:
    // 0x278cac: 0x0  nop
    ctx->pc = 0x278cacu;
    // NOP
label_278cb0:
    // 0x278cb0: 0xfe77  .word       0x0000FE77                   # INVALID     $zero, $zero, -0x189 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x278CB0 raw=0x0000FE77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278cb4:
    // 0x278cb4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_278cb8:
    // 0x278cb8: 0x0  nop
    ctx->pc = 0x278cb8u;
    // NOP
label_278cbc:
    // 0x278cbc: 0x0  nop
    ctx->pc = 0x278cbcu;
    // NOP
label_278cc0:
    // 0x278cc0: 0xfe84  .word       0x0000FE84                   # sllv        $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cc0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278cc4:
    // 0x278cc4: 0x7ba0  .word       0x00007BA0                   # add         $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278cc8:
    // 0x278cc8: 0x0  nop
    ctx->pc = 0x278cc8u;
    // NOP
label_278ccc:
    // 0x278ccc: 0x0  nop
    ctx->pc = 0x278cccu;
    // NOP
label_278cd0:
    // 0x278cd0: 0xfe94  .word       0x0000FE94                   # dsllv       $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cd0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_278cd4:
    // 0x278cd4: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_278cd8:
    // 0x278cd8: 0x0  nop
    ctx->pc = 0x278cd8u;
    // NOP
label_278cdc:
    // 0x278cdc: 0x0  nop
    ctx->pc = 0x278cdcu;
    // NOP
label_278ce0:
    // 0x278ce0: 0xfe9f  .word       0x0000FE9F                   # ddivu       $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278CE0 raw=0x0000FE9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278ce4:
    // 0x278ce4: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x278ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278ce8:
    // 0x278ce8: 0x0  nop
    ctx->pc = 0x278ce8u;
    // NOP
label_278cec:
    // 0x278cec: 0x0  nop
    ctx->pc = 0x278cecu;
    // NOP
label_278cf0:
    // 0x278cf0: 0xfeb1  tgeu        $zero, $zero, 1018
    ctx->pc = 0x278cf0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278cf4:
    // 0x278cf4: 0x6940  sll         $t5, $zero, 5
    ctx->pc = 0x278cf4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_278cf8:
    // 0x278cf8: 0x0  nop
    ctx->pc = 0x278cf8u;
    // NOP
label_278cfc:
    // 0x278cfc: 0x0  nop
    ctx->pc = 0x278cfcu;
    // NOP
label_278d00:
    // 0x278d00: 0xfebf  dsra32      $ra, $zero, 26
    ctx->pc = 0x278d00u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 26));
label_278d04:
    // 0x278d04: 0x37d0  .word       0x000037D0                   # mfhi        $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d04u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_278d08:
    // 0x278d08: 0x0  nop
    ctx->pc = 0x278d08u;
    // NOP
label_278d0c:
    // 0x278d0c: 0x0  nop
    ctx->pc = 0x278d0cu;
    // NOP
label_278d10:
    // 0x278d10: 0xfec6  .word       0x0000FEC6                   # srlv        $ra, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d10u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278d14:
    // 0x278d14: 0x77d0  .word       0x000077D0                   # mfhi        $t6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278d18:
    // 0x278d18: 0x0  nop
    ctx->pc = 0x278d18u;
    // NOP
label_278d1c:
    // 0x278d1c: 0x0  nop
    ctx->pc = 0x278d1cu;
    // NOP
label_278d20:
    // 0x278d20: 0xfed5  .word       0x0000FED5                   # INVALID     $zero, $zero, -0x12B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x278D20 raw=0x0000FED5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278d24:
    // 0x278d24: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_278d28:
    // 0x278d28: 0x0  nop
    ctx->pc = 0x278d28u;
    // NOP
label_278d2c:
    // 0x278d2c: 0x0  nop
    ctx->pc = 0x278d2cu;
    // NOP
label_278d30:
    // 0x278d30: 0xfee7  .word       0x0000FEE7                   # not         $ra, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d30u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_278d34:
    // 0x278d34: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278d38:
    // 0x278d38: 0x0  nop
    ctx->pc = 0x278d38u;
    // NOP
label_278d3c:
    // 0x278d3c: 0x0  nop
    ctx->pc = 0x278d3cu;
    // NOP
label_278d40:
    // 0x278d40: 0xfef6  tne         $zero, $zero, 1019
    ctx->pc = 0x278d40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d44:
    // 0x278d44: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278d48:
    // 0x278d48: 0x0  nop
    ctx->pc = 0x278d48u;
    // NOP
label_278d4c:
    // 0x278d4c: 0x0  nop
    ctx->pc = 0x278d4cu;
    // NOP
label_278d50:
    // 0x278d50: 0xff04  .word       0x0000FF04                   # sllv        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d50u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278d54:
    // 0x278d54: 0x4940  sll         $t1, $zero, 5
    ctx->pc = 0x278d54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_278d58:
    // 0x278d58: 0x0  nop
    ctx->pc = 0x278d58u;
    // NOP
label_278d5c:
    // 0x278d5c: 0x0  nop
    ctx->pc = 0x278d5cu;
    // NOP
label_278d60:
    // 0x278d60: 0xff0e  .word       0x0000FF0E                   # INVALID     $zero, $zero, -0xF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278D60 raw=0x0000FF0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278d64:
    // 0x278d64: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x278d64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_278d68:
    // 0x278d68: 0x0  nop
    ctx->pc = 0x278d68u;
    // NOP
label_278d6c:
    // 0x278d6c: 0x0  nop
    ctx->pc = 0x278d6cu;
    // NOP
label_278d70:
    // 0x278d70: 0xff19  .word       0x0000FF19                   # multu       $zero, $zero # 0000FF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278d74:
    // 0x278d74: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x278d74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_278d78:
    // 0x278d78: 0x0  nop
    ctx->pc = 0x278d78u;
    // NOP
label_278d7c:
    // 0x278d7c: 0x0  nop
    ctx->pc = 0x278d7cu;
    // NOP
label_278d80:
    // 0x278d80: 0xff22  .word       0x0000FF22                   # neg         $ra, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278d80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_278d84:
    // 0x278d84: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x278d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d88:
    // 0x278d88: 0x0  nop
    ctx->pc = 0x278d88u;
    // NOP
label_278d8c:
    // 0x278d8c: 0x0  nop
    ctx->pc = 0x278d8cu;
    // NOP
label_278d90:
    // 0x278d90: 0xff32  tlt         $zero, $zero, 1020
    ctx->pc = 0x278d90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d94:
    // 0x278d94: 0x8f70  tge         $zero, $zero, 573
    ctx->pc = 0x278d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278d98:
    // 0x278d98: 0x0  nop
    ctx->pc = 0x278d98u;
    // NOP
label_278d9c:
    // 0x278d9c: 0x0  nop
    ctx->pc = 0x278d9cu;
    // NOP
label_278da0:
    // 0x278da0: 0xff44  .word       0x0000FF44                   # sllv        $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278da0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278da4:
    // 0x278da4: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x278da4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_278da8:
    // 0x278da8: 0x0  nop
    ctx->pc = 0x278da8u;
    // NOP
label_278dac:
    // 0x278dac: 0x0  nop
    ctx->pc = 0x278dacu;
    // NOP
label_278db0:
    // 0x278db0: 0xff4f  .word       0x0000FF4F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278db0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278db4:
    // 0x278db4: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278db4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_278db8:
    // 0x278db8: 0x0  nop
    ctx->pc = 0x278db8u;
    // NOP
label_278dbc:
    // 0x278dbc: 0x0  nop
    ctx->pc = 0x278dbcu;
    // NOP
label_278dc0:
    // 0x278dc0: 0xff56  .word       0x0000FF56                   # dsrlv       $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dc0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278dc4:
    // 0x278dc4: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dc4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278dc8:
    // 0x278dc8: 0x0  nop
    ctx->pc = 0x278dc8u;
    // NOP
label_278dcc:
    // 0x278dcc: 0x0  nop
    ctx->pc = 0x278dccu;
    // NOP
label_278dd0:
    // 0x278dd0: 0xff64  .word       0x0000FF64                   # and         $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dd0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278dd4:
    // 0x278dd4: 0x8250  .word       0x00008250                   # mfhi        $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278dd4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_278dd8:
    // 0x278dd8: 0x0  nop
    ctx->pc = 0x278dd8u;
    // NOP
label_278ddc:
    // 0x278ddc: 0x0  nop
    ctx->pc = 0x278ddcu;
    // NOP
label_278de0:
    // 0x278de0: 0xff75  .word       0x0000FF75                   # INVALID     $zero, $zero, -0x8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278de0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x278DE0 raw=0x0000FF75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278de4:
    // 0x278de4: 0x8240  sll         $s0, $zero, 9
    ctx->pc = 0x278de4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_278de8:
    // 0x278de8: 0x0  nop
    ctx->pc = 0x278de8u;
    // NOP
label_278dec:
    // 0x278dec: 0x0  nop
    ctx->pc = 0x278decu;
    // NOP
label_278df0:
    // 0x278df0: 0xff86  .word       0x0000FF86                   # srlv        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278df4:
    // 0x278df4: 0x7d90  .word       0x00007D90                   # mfhi        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278df4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_278df8:
    // 0x278df8: 0x0  nop
    ctx->pc = 0x278df8u;
    // NOP
label_278dfc:
    // 0x278dfc: 0x0  nop
    ctx->pc = 0x278dfcu;
    // NOP
label_278e00:
    // 0x278e00: 0xff96  .word       0x0000FF96                   # dsrlv       $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e00u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278e04:
    // 0x278e04: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x278e04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278e08:
    // 0x278e08: 0x0  nop
    ctx->pc = 0x278e08u;
    // NOP
label_278e0c:
    // 0x278e0c: 0x0  nop
    ctx->pc = 0x278e0cu;
    // NOP
label_278e10:
    // 0x278e10: 0xff9f  .word       0x0000FF9F                   # ddivu       $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278E10 raw=0x0000FF9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278e14:
    // 0x278e14: 0x8ea0  .word       0x00008EA0                   # add         $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_278e18:
    // 0x278e18: 0x0  nop
    ctx->pc = 0x278e18u;
    // NOP
label_278e1c:
    // 0x278e1c: 0x0  nop
    ctx->pc = 0x278e1cu;
    // NOP
label_278e20:
    // 0x278e20: 0xffb1  tgeu        $zero, $zero, 1022
    ctx->pc = 0x278e20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278e24:
    // 0x278e24: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278e28:
    // 0x278e28: 0x0  nop
    ctx->pc = 0x278e28u;
    // NOP
label_278e2c:
    // 0x278e2c: 0x0  nop
    ctx->pc = 0x278e2cu;
    // NOP
label_278e30:
    // 0x278e30: 0xffba  dsrl        $ra, $zero, 30
    ctx->pc = 0x278e30u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 30);
label_278e34:
    // 0x278e34: 0x7250  .word       0x00007250                   # mfhi        $t6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278e38:
    // 0x278e38: 0x0  nop
    ctx->pc = 0x278e38u;
    // NOP
label_278e3c:
    // 0x278e3c: 0x0  nop
    ctx->pc = 0x278e3cu;
    // NOP
label_278e40:
    // 0x278e40: 0xffc9  .word       0x0000FFC9                   # jalr        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_278e44:
    if (ctx->pc == 0x278E44u) {
        ctx->pc = 0x278E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E40u;
        // 0x278e44: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E48u;
        goto label_278e48;
    }
    ctx->pc = 0x278E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x278E48u);
        ctx->pc = 0x278E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E40u;
        // 0x278e44: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E40u, 0x278E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278E48u;
label_278e48:
    // 0x278e48: 0x0  nop
    ctx->pc = 0x278e48u;
    // NOP
label_278e4c:
    // 0x278e4c: 0x0  nop
    ctx->pc = 0x278e4cu;
    // NOP
label_278e50:
    // 0x278e50: 0xffdd  .word       0x0000FFDD                   # dmultu      $zero, $zero # 0000FFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278E50 raw=0x0000FFDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278e54:
    // 0x278e54: 0x48e0  .word       0x000048E0                   # add         $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_278e58:
    // 0x278e58: 0x0  nop
    ctx->pc = 0x278e58u;
    // NOP
label_278e5c:
    // 0x278e5c: 0x0  nop
    ctx->pc = 0x278e5cu;
    // NOP
label_278e60:
    // 0x278e60: 0xffe7  .word       0x0000FFE7                   # not         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e60u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_278e64:
    // 0x278e64: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x278e64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_278e68:
    // 0x278e68: 0x0  nop
    ctx->pc = 0x278e68u;
    // NOP
label_278e6c:
    // 0x278e6c: 0x0  nop
    ctx->pc = 0x278e6cu;
    // NOP
label_278e70:
    // 0x278e70: 0xfff9  .word       0x0000FFF9                   # INVALID     $zero, $zero, -0x7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x278E70 raw=0x0000FFF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278e74:
    // 0x278e74: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_278e78:
    // 0x278e78: 0x0  nop
    ctx->pc = 0x278e78u;
    // NOP
label_278e7c:
    // 0x278e7c: 0x0  nop
    ctx->pc = 0x278e7cu;
    // NOP
label_278e80:
    // 0x278e80: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_278e84:
    // 0x278e84: 0x2fe0  .word       0x00002FE0                   # add         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_278e88:
    // 0x278e88: 0x0  nop
    ctx->pc = 0x278e88u;
    // NOP
label_278e8c:
    // 0x278e8c: 0x0  nop
    ctx->pc = 0x278e8cu;
    // NOP
label_278e90:
    // 0x278e90: 0x10008  .word       0x00010008                   # jr          $zero # 00010000 <InstrIdType: CPU_SPECIAL>
label_278e94:
    if (ctx->pc == 0x278E94u) {
        ctx->pc = 0x278E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E90u;
        // 0x278e94: 0x4560  .word       0x00004560                   # add         $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E98u;
        goto label_278e98;
    }
    ctx->pc = 0x278E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x278E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E90u;
        // 0x278e94: 0x4560  .word       0x00004560                   # add         $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278E98u;
label_278e98:
    // 0x278e98: 0x0  nop
    ctx->pc = 0x278e98u;
    // NOP
label_278e9c:
    // 0x278e9c: 0x0  nop
    ctx->pc = 0x278e9cu;
    // NOP
label_278ea0:
    // 0x278ea0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ea0u;
    ctx->hi = GPR_U64(ctx, 0);
label_278ea4:
    // 0x278ea4: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_278ea8:
    // 0x278ea8: 0x0  nop
    ctx->pc = 0x278ea8u;
    // NOP
label_278eac:
    // 0x278eac: 0x0  nop
    ctx->pc = 0x278eacu;
    // NOP
label_278eb0:
    // 0x278eb0: 0x1001d  dmultu      $zero, $at
    ctx->pc = 0x278eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278EB0 raw=0x0001001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278eb4:
    // 0x278eb4: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278eb8:
    // 0x278eb8: 0x0  nop
    ctx->pc = 0x278eb8u;
    // NOP
label_278ebc:
    // 0x278ebc: 0x0  nop
    ctx->pc = 0x278ebcu;
    // NOP
label_278ec0:
    // 0x278ec0: 0x1002a  slt         $zero, $zero, $at
    ctx->pc = 0x278ec0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_278ec4:
    // 0x278ec4: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x278ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_278ec8:
    // 0x278ec8: 0x0  nop
    ctx->pc = 0x278ec8u;
    // NOP
label_278ecc:
    // 0x278ecc: 0x0  nop
    ctx->pc = 0x278eccu;
    // NOP
label_278ed0:
    // 0x278ed0: 0x1003c  dsll32      $zero, $at, 0
    ctx->pc = 0x278ed0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 0));
label_278ed4:
    // 0x278ed4: 0xb090  .word       0x0000B090                   # mfhi        $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ed4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_278ed8:
    // 0x278ed8: 0x0  nop
    ctx->pc = 0x278ed8u;
    // NOP
label_278edc:
    // 0x278edc: 0x0  nop
    ctx->pc = 0x278edcu;
    // NOP
label_278ee0:
    // 0x278ee0: 0x10053  .word       0x00010053                   # mtlo        $zero # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ee0u;
    ctx->lo = GPR_U64(ctx, 0);
label_278ee4:
    // 0x278ee4: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ee4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_278ee8:
    // 0x278ee8: 0x0  nop
    ctx->pc = 0x278ee8u;
    // NOP
label_278eec:
    // 0x278eec: 0x0  nop
    ctx->pc = 0x278eecu;
    // NOP
label_278ef0:
    // 0x278ef0: 0x10063  .word       0x00010063                   # negu        $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ef0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_278ef4:
    // 0x278ef4: 0x100e0  .word       0x000100E0                   # add         $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_278ef8:
    // 0x278ef8: 0x0  nop
    ctx->pc = 0x278ef8u;
    // NOP
label_278efc:
    // 0x278efc: 0x0  nop
    ctx->pc = 0x278efcu;
    // NOP
label_278f00:
    // 0x278f00: 0x10084  .word       0x00010084                   # sllv        $zero, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f00u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_278f04:
    // 0x278f04: 0xcdc0  sll         $t9, $zero, 23
    ctx->pc = 0x278f04u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_278f08:
    // 0x278f08: 0x0  nop
    ctx->pc = 0x278f08u;
    // NOP
label_278f0c:
    // 0x278f0c: 0x0  nop
    ctx->pc = 0x278f0cu;
    // NOP
label_278f10:
    // 0x278f10: 0x1009e  .word       0x0001009E                   # ddiv        $zero, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278F10 raw=0x0001009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278f14:
    // 0x278f14: 0xdff0  tge         $zero, $zero, 895
    ctx->pc = 0x278f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278f18:
    // 0x278f18: 0x0  nop
    ctx->pc = 0x278f18u;
    // NOP
label_278f1c:
    // 0x278f1c: 0x0  nop
    ctx->pc = 0x278f1cu;
    // NOP
label_278f20:
    // 0x278f20: 0x100ba  dsrl        $zero, $at, 2
    ctx->pc = 0x278f20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> 2);
label_278f24:
    // 0x278f24: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_278f28:
    // 0x278f28: 0x0  nop
    ctx->pc = 0x278f28u;
    // NOP
label_278f2c:
    // 0x278f2c: 0x0  nop
    ctx->pc = 0x278f2cu;
    // NOP
label_278f30:
    // 0x278f30: 0x100cd  break       1, 3
    ctx->pc = 0x278f30u;
    runtime->handleBreak(rdram, ctx);
label_278f34:
    // 0x278f34: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278f38:
    // 0x278f38: 0x0  nop
    ctx->pc = 0x278f38u;
    // NOP
label_278f3c:
    // 0x278f3c: 0x0  nop
    ctx->pc = 0x278f3cu;
    // NOP
label_278f40:
    // 0x278f40: 0x100dd  .word       0x000100DD                   # dmultu      $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278F40 raw=0x000100DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278f44:
    // 0x278f44: 0xf150  .word       0x0000F150                   # mfhi        $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f44u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_278f48:
    // 0x278f48: 0x0  nop
    ctx->pc = 0x278f48u;
    // NOP
label_278f4c:
    // 0x278f4c: 0x0  nop
    ctx->pc = 0x278f4cu;
    // NOP
label_278f50:
    // 0x278f50: 0x100fc  dsll32      $zero, $at, 3
    ctx->pc = 0x278f50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 3));
label_278f54:
    // 0x278f54: 0x62b0  tge         $zero, $zero, 394
    ctx->pc = 0x278f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278f58:
    // 0x278f58: 0x0  nop
    ctx->pc = 0x278f58u;
    // NOP
label_278f5c:
    // 0x278f5c: 0x0  nop
    ctx->pc = 0x278f5cu;
    // NOP
label_278f60:
    // 0x278f60: 0x10109  .word       0x00010109                   # jalr        $zero, $zero # 00010100 <InstrIdType: CPU_SPECIAL>
label_278f64:
    if (ctx->pc == 0x278F64u) {
        ctx->pc = 0x278F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F60u;
        // 0x278f64: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278F68u;
        goto label_278f68;
    }
    ctx->pc = 0x278F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x278F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F60u;
        // 0x278f64: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F60u, 0x278F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278F68u;
label_278f68:
    // 0x278f68: 0x0  nop
    ctx->pc = 0x278f68u;
    // NOP
label_278f6c:
    // 0x278f6c: 0x0  nop
    ctx->pc = 0x278f6cu;
    // NOP
label_278f70:
    // 0x278f70: 0x10121  .word       0x00010121                   # addu        $zero, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f70u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_278f74:
    // 0x278f74: 0xf2d0  .word       0x0000F2D0                   # mfhi        $fp # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f74u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_278f78:
    // 0x278f78: 0x0  nop
    ctx->pc = 0x278f78u;
    // NOP
label_278f7c:
    // 0x278f7c: 0x0  nop
    ctx->pc = 0x278f7cu;
    // NOP
label_278f80:
    // 0x278f80: 0x10140  sll         $zero, $at, 5
    ctx->pc = 0x278f80u;
    
label_278f84:
    // 0x278f84: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x278f84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_278f88:
    // 0x278f88: 0x0  nop
    ctx->pc = 0x278f88u;
    // NOP
label_278f8c:
    // 0x278f8c: 0x0  nop
    ctx->pc = 0x278f8cu;
    // NOP
label_278f90:
    // 0x278f90: 0x1014f  .word       0x0001014F                   # sync # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278f90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278f94:
    // 0x278f94: 0xe140  sll         $gp, $zero, 5
    ctx->pc = 0x278f94u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_278f98:
    // 0x278f98: 0x0  nop
    ctx->pc = 0x278f98u;
    // NOP
label_278f9c:
    // 0x278f9c: 0x0  nop
    ctx->pc = 0x278f9cu;
    // NOP
label_278fa0:
    // 0x278fa0: 0x1016c  .word       0x0001016C                   # dadd        $zero, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278fa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_278fa4:
    // 0x278fa4: 0x5650  .word       0x00005650                   # mfhi        $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278fa4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_278fa8:
    // 0x278fa8: 0x0  nop
    ctx->pc = 0x278fa8u;
    // NOP
label_278fac:
    // 0x278fac: 0x0  nop
    ctx->pc = 0x278facu;
    // NOP
label_278fb0:
    // 0x278fb0: 0x10177  .word       0x00010177                   # INVALID     $zero, $at, 0x177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278fb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x278FB0 raw=0x00010177"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278fb4:
    // 0x278fb4: 0x44b0  tge         $zero, $zero, 274
    ctx->pc = 0x278fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278fb8:
    // 0x278fb8: 0x0  nop
    ctx->pc = 0x278fb8u;
    // NOP
label_278fbc:
    // 0x278fbc: 0x0  nop
    ctx->pc = 0x278fbcu;
    // NOP
label_278fc0:
    // 0x278fc0: 0x10180  sll         $zero, $at, 6
    ctx->pc = 0x278fc0u;
    
label_278fc4:
    // 0x278fc4: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x278fc4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_278fc8:
    // 0x278fc8: 0x0  nop
    ctx->pc = 0x278fc8u;
    // NOP
label_278fcc:
    // 0x278fcc: 0x0  nop
    ctx->pc = 0x278fccu;
    // NOP
label_278fd0:
    // 0x278fd0: 0x1018e  .word       0x0001018E                   # INVALID     $zero, $at, 0x18E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278FD0 raw=0x0001018E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278fd4:
    // 0x278fd4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_278fd8:
    // 0x278fd8: 0x0  nop
    ctx->pc = 0x278fd8u;
    // NOP
label_278fdc:
    // 0x278fdc: 0x0  nop
    ctx->pc = 0x278fdcu;
    // NOP
label_278fe0:
    // 0x278fe0: 0x101a0  .word       0x000101A0                   # add         $zero, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_278fe4:
    // 0x278fe4: 0x6010  mfhi        $t4
    ctx->pc = 0x278fe4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_278fe8:
    // 0x278fe8: 0x0  nop
    ctx->pc = 0x278fe8u;
    // NOP
label_278fec:
    // 0x278fec: 0x0  nop
    ctx->pc = 0x278fecu;
    // NOP
label_278ff0:
    // 0x278ff0: 0x101ad  .word       0x000101AD                   # daddu       $zero, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278ff0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_278ff4:
    // 0x278ff4: 0xe240  sll         $gp, $zero, 9
    ctx->pc = 0x278ff4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_278ff8:
    // 0x278ff8: 0x0  nop
    ctx->pc = 0x278ff8u;
    // NOP
label_278ffc:
    // 0x278ffc: 0x0  nop
    ctx->pc = 0x278ffcu;
    // NOP
label_279000:
    // 0x279000: 0x101ca  .word       0x000101CA                   # movz        $zero, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279000u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_279004:
    // 0x279004: 0xaaf0  tge         $zero, $zero, 683
    ctx->pc = 0x279004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279008:
    // 0x279008: 0x0  nop
    ctx->pc = 0x279008u;
    // NOP
label_27900c:
    // 0x27900c: 0x0  nop
    ctx->pc = 0x27900cu;
    // NOP
label_279010:
    // 0x279010: 0x101e0  .word       0x000101E0                   # add         $zero, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279010u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_279014:
    // 0x279014: 0xd2b0  tge         $zero, $zero, 842
    ctx->pc = 0x279014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279018:
    // 0x279018: 0x0  nop
    ctx->pc = 0x279018u;
    // NOP
label_27901c:
    // 0x27901c: 0x0  nop
    ctx->pc = 0x27901cu;
    // NOP
label_279020:
    // 0x279020: 0x101fb  dsra        $zero, $at, 7
    ctx->pc = 0x279020u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 7);
label_279024:
    // 0x279024: 0xdde0  .word       0x0000DDE0                   # add         $k1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_279028:
    // 0x279028: 0x0  nop
    ctx->pc = 0x279028u;
    // NOP
label_27902c:
    // 0x27902c: 0x0  nop
    ctx->pc = 0x27902cu;
    // NOP
label_279030:
    // 0x279030: 0x10217  .word       0x00010217                   # dsrav       $zero, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279030u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279034:
    // 0x279034: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_279038:
    // 0x279038: 0x0  nop
    ctx->pc = 0x279038u;
    // NOP
label_27903c:
    // 0x27903c: 0x0  nop
    ctx->pc = 0x27903cu;
    // NOP
label_279040:
    // 0x279040: 0x10227  .word       0x00010227                   # nor         $zero, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279040u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279044:
    // 0x279044: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x279044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279048:
    // 0x279048: 0x0  nop
    ctx->pc = 0x279048u;
    // NOP
label_27904c:
    // 0x27904c: 0x0  nop
    ctx->pc = 0x27904cu;
    // NOP
label_279050:
    // 0x279050: 0x1023e  dsrl32      $zero, $at, 8
    ctx->pc = 0x279050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (32 + 8));
label_279054:
    // 0x279054: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279054u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_279058:
    // 0x279058: 0x0  nop
    ctx->pc = 0x279058u;
    // NOP
label_27905c:
    // 0x27905c: 0x0  nop
    ctx->pc = 0x27905cu;
    // NOP
label_279060:
    // 0x279060: 0x1024f  .word       0x0001024F                   # sync # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279060u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_279064:
    // 0x279064: 0x2fb0  tge         $zero, $zero, 190
    ctx->pc = 0x279064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279068:
    // 0x279068: 0x0  nop
    ctx->pc = 0x279068u;
    // NOP
label_27906c:
    // 0x27906c: 0x0  nop
    ctx->pc = 0x27906cu;
    // NOP
label_279070:
    // 0x279070: 0x10255  .word       0x00010255                   # INVALID     $zero, $at, 0x255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x279070 raw=0x00010255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279074:
    // 0x279074: 0x3e30  tge         $zero, $zero, 248
    ctx->pc = 0x279074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279078:
    // 0x279078: 0x0  nop
    ctx->pc = 0x279078u;
    // NOP
label_27907c:
    // 0x27907c: 0x0  nop
    ctx->pc = 0x27907cu;
    // NOP
label_279080:
    // 0x279080: 0x1025d  .word       0x0001025D                   # dmultu      $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x279080 raw=0x0001025D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279084:
    // 0x279084: 0x94e0  .word       0x000094E0                   # add         $s2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_279088:
    // 0x279088: 0x0  nop
    ctx->pc = 0x279088u;
    // NOP
label_27908c:
    // 0x27908c: 0x0  nop
    ctx->pc = 0x27908cu;
    // NOP
label_279090:
    // 0x279090: 0x10270  tge         $zero, $at, 9
    ctx->pc = 0x279090u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279094:
    // 0x279094: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x279094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279098:
    // 0x279098: 0x0  nop
    ctx->pc = 0x279098u;
    // NOP
label_27909c:
    // 0x27909c: 0x0  nop
    ctx->pc = 0x27909cu;
    // NOP
label_2790a0:
    // 0x2790a0: 0x10289  .word       0x00010289                   # jalr        $zero, $zero # 00010280 <InstrIdType: CPU_SPECIAL>
label_2790a4:
    if (ctx->pc == 0x2790A4u) {
        ctx->pc = 0x2790A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790A0u;
        // 0x2790a4: 0x3ec0  sll         $a3, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2790A8u;
        goto label_2790a8;
    }
    ctx->pc = 0x2790A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2790A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790A0u;
        // 0x2790a4: 0x3ec0  sll         $a3, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2790A0u, 0x2790A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2790A8u;
label_2790a8:
    // 0x2790a8: 0x0  nop
    ctx->pc = 0x2790a8u;
    // NOP
label_2790ac:
    // 0x2790ac: 0x0  nop
    ctx->pc = 0x2790acu;
    // NOP
label_2790b0:
    // 0x2790b0: 0x10291  .word       0x00010291                   # mthi        $zero # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2790b4:
    // 0x2790b4: 0x9fd0  .word       0x00009FD0                   # mfhi        $s3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2790b8:
    // 0x2790b8: 0x0  nop
    ctx->pc = 0x2790b8u;
    // NOP
label_2790bc:
    // 0x2790bc: 0x0  nop
    ctx->pc = 0x2790bcu;
    // NOP
label_2790c0:
    // 0x2790c0: 0x102a5  .word       0x000102A5                   # or          $zero, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2790c4:
    // 0x2790c4: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2790c8:
    // 0x2790c8: 0x0  nop
    ctx->pc = 0x2790c8u;
    // NOP
label_2790cc:
    // 0x2790cc: 0x0  nop
    ctx->pc = 0x2790ccu;
    // NOP
label_2790d0:
    // 0x2790d0: 0x102b6  tne         $zero, $at, 10
    ctx->pc = 0x2790d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2790d4:
    // 0x2790d4: 0xa7b0  tge         $zero, $zero, 670
    ctx->pc = 0x2790d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2790d8:
    // 0x2790d8: 0x0  nop
    ctx->pc = 0x2790d8u;
    // NOP
label_2790dc:
    // 0x2790dc: 0x0  nop
    ctx->pc = 0x2790dcu;
    // NOP
label_2790e0:
    // 0x2790e0: 0x102cb  .word       0x000102CB                   # movn        $zero, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790e0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2790e4:
    // 0x2790e4: 0x4560  .word       0x00004560                   # add         $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2790e8:
    // 0x2790e8: 0x0  nop
    ctx->pc = 0x2790e8u;
    // NOP
label_2790ec:
    // 0x2790ec: 0x0  nop
    ctx->pc = 0x2790ecu;
    // NOP
label_2790f0:
    // 0x2790f0: 0x102d4  .word       0x000102D4                   # dsllv       $zero, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2790f4:
    // 0x2790f4: 0x3110  .word       0x00003110                   # mfhi        $a2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2790f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2790f8:
    // 0x2790f8: 0x0  nop
    ctx->pc = 0x2790f8u;
    // NOP
label_2790fc:
    // 0x2790fc: 0x0  nop
    ctx->pc = 0x2790fcu;
    // NOP
label_279100:
    // 0x279100: 0x102db  .word       0x000102DB                   # divu        $zero, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279100u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_279104:
    // 0x279104: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279104u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_279108:
    // 0x279108: 0x0  nop
    ctx->pc = 0x279108u;
    // NOP
label_27910c:
    // 0x27910c: 0x0  nop
    ctx->pc = 0x27910cu;
    // NOP
label_279110:
    // 0x279110: 0x102e7  .word       0x000102E7                   # nor         $zero, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279110u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279114:
    // 0x279114: 0x7940  sll         $t7, $zero, 5
    ctx->pc = 0x279114u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_279118:
    // 0x279118: 0x0  nop
    ctx->pc = 0x279118u;
    // NOP
label_27911c:
    // 0x27911c: 0x0  nop
    ctx->pc = 0x27911cu;
    // NOP
label_279120:
    // 0x279120: 0x102f7  .word       0x000102F7                   # INVALID     $zero, $at, 0x2F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x279120 raw=0x000102F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279124:
    // 0x279124: 0x3380  sll         $a2, $zero, 14
    ctx->pc = 0x279124u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_279128:
    // 0x279128: 0x0  nop
    ctx->pc = 0x279128u;
    // NOP
label_27912c:
    // 0x27912c: 0x0  nop
    ctx->pc = 0x27912cu;
    // NOP
label_279130:
    // 0x279130: 0x102fe  dsrl32      $zero, $at, 11
    ctx->pc = 0x279130u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (32 + 11));
label_279134:
    // 0x279134: 0x73f0  tge         $zero, $zero, 463
    ctx->pc = 0x279134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279138:
    // 0x279138: 0x0  nop
    ctx->pc = 0x279138u;
    // NOP
label_27913c:
    // 0x27913c: 0x0  nop
    ctx->pc = 0x27913cu;
    // NOP
label_279140:
    // 0x279140: 0x1030d  break       1, 12
    ctx->pc = 0x279140u;
    runtime->handleBreak(rdram, ctx);
label_279144:
    // 0x279144: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279144u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_279148:
    // 0x279148: 0x0  nop
    ctx->pc = 0x279148u;
    // NOP
label_27914c:
    // 0x27914c: 0x0  nop
    ctx->pc = 0x27914cu;
    // NOP
label_279150:
    // 0x279150: 0x1031e  .word       0x0001031E                   # ddiv        $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x279150 raw=0x0001031E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279154:
    // 0x279154: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_279158:
    // 0x279158: 0x0  nop
    ctx->pc = 0x279158u;
    // NOP
label_27915c:
    // 0x27915c: 0x0  nop
    ctx->pc = 0x27915cu;
    // NOP
label_279160:
    // 0x279160: 0x10327  .word       0x00010327                   # nor         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279160u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279164:
    // 0x279164: 0x6930  tge         $zero, $zero, 420
    ctx->pc = 0x279164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279168:
    // 0x279168: 0x0  nop
    ctx->pc = 0x279168u;
    // NOP
label_27916c:
    // 0x27916c: 0x0  nop
    ctx->pc = 0x27916cu;
    // NOP
label_279170:
    // 0x279170: 0x10335  .word       0x00010335                   # INVALID     $zero, $at, 0x335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x279170 raw=0x00010335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279174:
    // 0x279174: 0x6720  .word       0x00006720                   # add         $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_279178:
    // 0x279178: 0x0  nop
    ctx->pc = 0x279178u;
    // NOP
label_27917c:
    // 0x27917c: 0x0  nop
    ctx->pc = 0x27917cu;
    // NOP
label_279180:
    // 0x279180: 0x10342  srl         $zero, $at, 13
    ctx->pc = 0x279180u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 13));
label_279184:
    // 0x279184: 0x9480  sll         $s2, $zero, 18
    ctx->pc = 0x279184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_279188:
    // 0x279188: 0x0  nop
    ctx->pc = 0x279188u;
    // NOP
label_27918c:
    // 0x27918c: 0x0  nop
    ctx->pc = 0x27918cu;
    // NOP
label_279190:
    // 0x279190: 0x10355  .word       0x00010355                   # INVALID     $zero, $at, 0x355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x279190 raw=0x00010355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279194:
    // 0x279194: 0x2af0  tge         $zero, $zero, 171
    ctx->pc = 0x279194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279198:
    // 0x279198: 0x0  nop
    ctx->pc = 0x279198u;
    // NOP
label_27919c:
    // 0x27919c: 0x0  nop
    ctx->pc = 0x27919cu;
    // NOP
label_2791a0:
    // 0x2791a0: 0x1035b  .word       0x0001035B                   # divu        $zero, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791a0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2791a4:
    // 0x2791a4: 0x4270  tge         $zero, $zero, 265
    ctx->pc = 0x2791a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2791a8:
    // 0x2791a8: 0x0  nop
    ctx->pc = 0x2791a8u;
    // NOP
label_2791ac:
    // 0x2791ac: 0x0  nop
    ctx->pc = 0x2791acu;
    // NOP
label_2791b0:
    // 0x2791b0: 0x10364  .word       0x00010364                   # and         $zero, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2791b4:
    // 0x2791b4: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x2791b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2791b8:
    // 0x2791b8: 0x0  nop
    ctx->pc = 0x2791b8u;
    // NOP
label_2791bc:
    // 0x2791bc: 0x0  nop
    ctx->pc = 0x2791bcu;
    // NOP
label_2791c0:
    // 0x2791c0: 0x10373  tltu        $zero, $at, 13
    ctx->pc = 0x2791c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2791c4:
    // 0x2791c4: 0x8e70  tge         $zero, $zero, 569
    ctx->pc = 0x2791c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2791c8:
    // 0x2791c8: 0x0  nop
    ctx->pc = 0x2791c8u;
    // NOP
label_2791cc:
    // 0x2791cc: 0x0  nop
    ctx->pc = 0x2791ccu;
    // NOP
label_2791d0:
    // 0x2791d0: 0x10385  .word       0x00010385                   # INVALID     $zero, $at, 0x385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2791D0 raw=0x00010385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2791d4:
    // 0x2791d4: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2791d8:
    // 0x2791d8: 0x0  nop
    ctx->pc = 0x2791d8u;
    // NOP
label_2791dc:
    // 0x2791dc: 0x0  nop
    ctx->pc = 0x2791dcu;
    // NOP
label_2791e0:
    // 0x2791e0: 0x10390  .word       0x00010390                   # mfhi        $zero # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2791e4:
    // 0x2791e4: 0x6070  tge         $zero, $zero, 385
    ctx->pc = 0x2791e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2791e8:
    // 0x2791e8: 0x0  nop
    ctx->pc = 0x2791e8u;
    // NOP
label_2791ec:
    // 0x2791ec: 0x0  nop
    ctx->pc = 0x2791ecu;
    // NOP
label_2791f0:
    // 0x2791f0: 0x1039d  .word       0x0001039D                   # dmultu      $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2791F0 raw=0x0001039D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2791f4:
    // 0x2791f4: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2791f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2791f8:
    // 0x2791f8: 0x0  nop
    ctx->pc = 0x2791f8u;
    // NOP
label_2791fc:
    // 0x2791fc: 0x0  nop
    ctx->pc = 0x2791fcu;
    // NOP
label_279200:
    // 0x279200: 0x103a8  .word       0x000103A8                   # mfsa        $zero # 00010380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279200u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_279204:
    // 0x279204: 0xa030  tge         $zero, $zero, 640
    ctx->pc = 0x279204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279208:
    // 0x279208: 0x0  nop
    ctx->pc = 0x279208u;
    // NOP
label_27920c:
    // 0x27920c: 0x0  nop
    ctx->pc = 0x27920cu;
    // NOP
label_279210:
    // 0x279210: 0x103bd  .word       0x000103BD                   # INVALID     $zero, $at, 0x3BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x279210 raw=0x000103BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279214:
    // 0x279214: 0x5bc0  sll         $t3, $zero, 15
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_279218:
    // 0x279218: 0x0  nop
    ctx->pc = 0x279218u;
    // NOP
label_27921c:
    // 0x27921c: 0x0  nop
    ctx->pc = 0x27921cu;
    // NOP
label_279220:
    // 0x279220: 0x103c9  .word       0x000103C9                   # jalr        $zero, $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
label_279224:
    if (ctx->pc == 0x279224u) {
        ctx->pc = 0x279224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279220u;
        // 0x279224: 0x4180  sll         $t0, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279228u;
        goto label_279228;
    }
    ctx->pc = 0x279220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x279224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279220u;
        // 0x279224: 0x4180  sll         $t0, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279220u, 0x279228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279228u;
label_279228:
    // 0x279228: 0x0  nop
    ctx->pc = 0x279228u;
    // NOP
label_27922c:
    // 0x27922c: 0x0  nop
    ctx->pc = 0x27922cu;
    // NOP
label_279230:
    // 0x279230: 0x103d2  .word       0x000103D2                   # mflo        $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279230u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_279234:
    // 0x279234: 0x8c80  sll         $s1, $zero, 18
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_279238:
    // 0x279238: 0x0  nop
    ctx->pc = 0x279238u;
    // NOP
label_27923c:
    // 0x27923c: 0x0  nop
    ctx->pc = 0x27923cu;
    // NOP
label_279240:
    // 0x279240: 0x103e4  .word       0x000103E4                   # and         $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279240u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_279244:
    // 0x279244: 0x4fb0  tge         $zero, $zero, 318
    ctx->pc = 0x279244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279248:
    // 0x279248: 0x0  nop
    ctx->pc = 0x279248u;
    // NOP
label_27924c:
    // 0x27924c: 0x0  nop
    ctx->pc = 0x27924cu;
    // NOP
label_279250:
    // 0x279250: 0x103ee  .word       0x000103EE                   # dsub        $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_279254:
    // 0x279254: 0x8e40  sll         $s1, $zero, 25
    ctx->pc = 0x279254u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_279258:
    // 0x279258: 0x0  nop
    ctx->pc = 0x279258u;
    // NOP
label_27925c:
    // 0x27925c: 0x0  nop
    ctx->pc = 0x27925cu;
    // NOP
label_279260:
    // 0x279260: 0x10400  sll         $zero, $at, 16
    ctx->pc = 0x279260u;
    
label_279264:
    // 0x279264: 0x4990  .word       0x00004990                   # mfhi        $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279264u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_279268:
    // 0x279268: 0x0  nop
    ctx->pc = 0x279268u;
    // NOP
label_27926c:
    // 0x27926c: 0x0  nop
    ctx->pc = 0x27926cu;
    // NOP
label_279270:
    // 0x279270: 0x1040a  .word       0x0001040A                   # movz        $zero, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279270u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_279274:
    // 0x279274: 0x7810  mfhi        $t7
    ctx->pc = 0x279274u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_279278:
    // 0x279278: 0x0  nop
    ctx->pc = 0x279278u;
    // NOP
label_27927c:
    // 0x27927c: 0x0  nop
    ctx->pc = 0x27927cu;
    // NOP
label_279280:
    // 0x279280: 0x1041a  .word       0x0001041A                   # div         $zero, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279280u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_279284:
    // 0x279284: 0x7830  tge         $zero, $zero, 480
    ctx->pc = 0x279284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279288:
    // 0x279288: 0x0  nop
    ctx->pc = 0x279288u;
    // NOP
label_27928c:
    // 0x27928c: 0x0  nop
    ctx->pc = 0x27928cu;
    // NOP
label_279290:
    // 0x279290: 0x1042a  .word       0x0001042A                   # slt         $zero, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279290u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_279294:
    // 0x279294: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x279294u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_279298:
    // 0x279298: 0x0  nop
    ctx->pc = 0x279298u;
    // NOP
label_27929c:
    // 0x27929c: 0x0  nop
    ctx->pc = 0x27929cu;
    // NOP
label_2792a0:
    // 0x2792a0: 0x1043c  dsll32      $zero, $at, 16
    ctx->pc = 0x2792a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 16));
label_2792a4:
    // 0x2792a4: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2792a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2792a8:
    // 0x2792a8: 0x0  nop
    ctx->pc = 0x2792a8u;
    // NOP
label_2792ac:
    // 0x2792ac: 0x0  nop
    ctx->pc = 0x2792acu;
    // NOP
label_2792b0:
    // 0x2792b0: 0x1044a  .word       0x0001044A                   # movz        $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2792b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2792b4:
    // 0x2792b4: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2792b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2792b8:
    // 0x2792b8: 0x0  nop
    ctx->pc = 0x2792b8u;
    // NOP
label_2792bc:
    // 0x2792bc: 0x0  nop
    ctx->pc = 0x2792bcu;
    // NOP
label_2792c0:
    // 0x2792c0: 0x1045e  .word       0x0001045E                   # ddiv        $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2792c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2792C0 raw=0x0001045E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2792c4:
    // 0x2792c4: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2792c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2792c8:
    // 0x2792c8: 0x0  nop
    ctx->pc = 0x2792c8u;
    // NOP
label_2792cc:
    // 0x2792cc: 0x0  nop
    ctx->pc = 0x2792ccu;
    // NOP
    ctx->pc = 0x2792d0u;
    return;
}
