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


void FUN_0014eba0_part44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x163b90u: goto label_163b90;
        case 0x163b94u: goto label_163b94;
        case 0x163b98u: goto label_163b98;
        case 0x163b9cu: goto label_163b9c;
        case 0x163ba0u: goto label_163ba0;
        case 0x163ba4u: goto label_163ba4;
        case 0x163ba8u: goto label_163ba8;
        case 0x163bacu: goto label_163bac;
        case 0x163bb0u: goto label_163bb0;
        case 0x163bb4u: goto label_163bb4;
        case 0x163bb8u: goto label_163bb8;
        case 0x163bbcu: goto label_163bbc;
        case 0x163bc0u: goto label_163bc0;
        case 0x163bc4u: goto label_163bc4;
        case 0x163bc8u: goto label_163bc8;
        case 0x163bccu: goto label_163bcc;
        case 0x163bd0u: goto label_163bd0;
        case 0x163bd4u: goto label_163bd4;
        case 0x163bd8u: goto label_163bd8;
        case 0x163bdcu: goto label_163bdc;
        case 0x163be0u: goto label_163be0;
        case 0x163be4u: goto label_163be4;
        case 0x163be8u: goto label_163be8;
        case 0x163becu: goto label_163bec;
        case 0x163bf0u: goto label_163bf0;
        case 0x163bf4u: goto label_163bf4;
        case 0x163bf8u: goto label_163bf8;
        case 0x163bfcu: goto label_163bfc;
        case 0x163c00u: goto label_163c00;
        case 0x163c04u: goto label_163c04;
        case 0x163c08u: goto label_163c08;
        case 0x163c0cu: goto label_163c0c;
        case 0x163c10u: goto label_163c10;
        case 0x163c14u: goto label_163c14;
        case 0x163c18u: goto label_163c18;
        case 0x163c1cu: goto label_163c1c;
        case 0x163c20u: goto label_163c20;
        case 0x163c24u: goto label_163c24;
        case 0x163c28u: goto label_163c28;
        case 0x163c2cu: goto label_163c2c;
        case 0x163c30u: goto label_163c30;
        case 0x163c34u: goto label_163c34;
        case 0x163c38u: goto label_163c38;
        case 0x163c3cu: goto label_163c3c;
        case 0x163c40u: goto label_163c40;
        case 0x163c44u: goto label_163c44;
        case 0x163c48u: goto label_163c48;
        case 0x163c4cu: goto label_163c4c;
        case 0x163c50u: goto label_163c50;
        case 0x163c54u: goto label_163c54;
        case 0x163c58u: goto label_163c58;
        case 0x163c5cu: goto label_163c5c;
        case 0x163c60u: goto label_163c60;
        case 0x163c64u: goto label_163c64;
        case 0x163c68u: goto label_163c68;
        case 0x163c6cu: goto label_163c6c;
        case 0x163c70u: goto label_163c70;
        case 0x163c74u: goto label_163c74;
        case 0x163c78u: goto label_163c78;
        case 0x163c7cu: goto label_163c7c;
        case 0x163c80u: goto label_163c80;
        case 0x163c84u: goto label_163c84;
        case 0x163c88u: goto label_163c88;
        case 0x163c8cu: goto label_163c8c;
        case 0x163c90u: goto label_163c90;
        case 0x163c94u: goto label_163c94;
        case 0x163c98u: goto label_163c98;
        case 0x163c9cu: goto label_163c9c;
        case 0x163ca0u: goto label_163ca0;
        case 0x163ca4u: goto label_163ca4;
        case 0x163ca8u: goto label_163ca8;
        case 0x163cacu: goto label_163cac;
        case 0x163cb0u: goto label_163cb0;
        case 0x163cb4u: goto label_163cb4;
        case 0x163cb8u: goto label_163cb8;
        case 0x163cbcu: goto label_163cbc;
        case 0x163cc0u: goto label_163cc0;
        case 0x163cc4u: goto label_163cc4;
        case 0x163cc8u: goto label_163cc8;
        case 0x163cccu: goto label_163ccc;
        case 0x163cd0u: goto label_163cd0;
        case 0x163cd4u: goto label_163cd4;
        case 0x163cd8u: goto label_163cd8;
        case 0x163cdcu: goto label_163cdc;
        case 0x163ce0u: goto label_163ce0;
        case 0x163ce4u: goto label_163ce4;
        case 0x163ce8u: goto label_163ce8;
        case 0x163cecu: goto label_163cec;
        case 0x163cf0u: goto label_163cf0;
        case 0x163cf4u: goto label_163cf4;
        case 0x163cf8u: goto label_163cf8;
        case 0x163cfcu: goto label_163cfc;
        case 0x163d00u: goto label_163d00;
        case 0x163d04u: goto label_163d04;
        case 0x163d08u: goto label_163d08;
        case 0x163d0cu: goto label_163d0c;
        case 0x163d10u: goto label_163d10;
        case 0x163d14u: goto label_163d14;
        case 0x163d18u: goto label_163d18;
        case 0x163d1cu: goto label_163d1c;
        case 0x163d20u: goto label_163d20;
        case 0x163d24u: goto label_163d24;
        case 0x163d28u: goto label_163d28;
        case 0x163d2cu: goto label_163d2c;
        case 0x163d30u: goto label_163d30;
        case 0x163d34u: goto label_163d34;
        case 0x163d38u: goto label_163d38;
        case 0x163d3cu: goto label_163d3c;
        case 0x163d40u: goto label_163d40;
        case 0x163d44u: goto label_163d44;
        case 0x163d48u: goto label_163d48;
        case 0x163d4cu: goto label_163d4c;
        case 0x163d50u: goto label_163d50;
        case 0x163d54u: goto label_163d54;
        case 0x163d58u: goto label_163d58;
        case 0x163d5cu: goto label_163d5c;
        case 0x163d60u: goto label_163d60;
        case 0x163d64u: goto label_163d64;
        case 0x163d68u: goto label_163d68;
        case 0x163d6cu: goto label_163d6c;
        case 0x163d70u: goto label_163d70;
        case 0x163d74u: goto label_163d74;
        case 0x163d78u: goto label_163d78;
        case 0x163d7cu: goto label_163d7c;
        case 0x163d80u: goto label_163d80;
        case 0x163d84u: goto label_163d84;
        case 0x163d88u: goto label_163d88;
        case 0x163d8cu: goto label_163d8c;
        case 0x163d90u: goto label_163d90;
        case 0x163d94u: goto label_163d94;
        case 0x163d98u: goto label_163d98;
        case 0x163d9cu: goto label_163d9c;
        case 0x163da0u: goto label_163da0;
        case 0x163da4u: goto label_163da4;
        case 0x163da8u: goto label_163da8;
        case 0x163dacu: goto label_163dac;
        case 0x163db0u: goto label_163db0;
        case 0x163db4u: goto label_163db4;
        case 0x163db8u: goto label_163db8;
        case 0x163dbcu: goto label_163dbc;
        case 0x163dc0u: goto label_163dc0;
        case 0x163dc4u: goto label_163dc4;
        case 0x163dc8u: goto label_163dc8;
        case 0x163dccu: goto label_163dcc;
        case 0x163dd0u: goto label_163dd0;
        case 0x163dd4u: goto label_163dd4;
        case 0x163dd8u: goto label_163dd8;
        case 0x163ddcu: goto label_163ddc;
        case 0x163de0u: goto label_163de0;
        case 0x163de4u: goto label_163de4;
        case 0x163de8u: goto label_163de8;
        case 0x163decu: goto label_163dec;
        case 0x163df0u: goto label_163df0;
        case 0x163df4u: goto label_163df4;
        case 0x163df8u: goto label_163df8;
        case 0x163dfcu: goto label_163dfc;
        case 0x163e00u: goto label_163e00;
        case 0x163e04u: goto label_163e04;
        case 0x163e08u: goto label_163e08;
        case 0x163e0cu: goto label_163e0c;
        case 0x163e10u: goto label_163e10;
        case 0x163e14u: goto label_163e14;
        case 0x163e18u: goto label_163e18;
        case 0x163e1cu: goto label_163e1c;
        case 0x163e20u: goto label_163e20;
        case 0x163e24u: goto label_163e24;
        case 0x163e28u: goto label_163e28;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e30u: goto label_163e30;
        case 0x163e34u: goto label_163e34;
        case 0x163e38u: goto label_163e38;
        case 0x163e3cu: goto label_163e3c;
        case 0x163e40u: goto label_163e40;
        case 0x163e44u: goto label_163e44;
        case 0x163e48u: goto label_163e48;
        case 0x163e4cu: goto label_163e4c;
        case 0x163e50u: goto label_163e50;
        case 0x163e54u: goto label_163e54;
        case 0x163e58u: goto label_163e58;
        case 0x163e5cu: goto label_163e5c;
        case 0x163e60u: goto label_163e60;
        case 0x163e64u: goto label_163e64;
        case 0x163e68u: goto label_163e68;
        case 0x163e6cu: goto label_163e6c;
        case 0x163e70u: goto label_163e70;
        case 0x163e74u: goto label_163e74;
        case 0x163e78u: goto label_163e78;
        case 0x163e7cu: goto label_163e7c;
        case 0x163e80u: goto label_163e80;
        case 0x163e84u: goto label_163e84;
        case 0x163e88u: goto label_163e88;
        case 0x163e8cu: goto label_163e8c;
        case 0x163e90u: goto label_163e90;
        case 0x163e94u: goto label_163e94;
        case 0x163e98u: goto label_163e98;
        case 0x163e9cu: goto label_163e9c;
        case 0x163ea0u: goto label_163ea0;
        case 0x163ea4u: goto label_163ea4;
        case 0x163ea8u: goto label_163ea8;
        case 0x163eacu: goto label_163eac;
        case 0x163eb0u: goto label_163eb0;
        case 0x163eb4u: goto label_163eb4;
        case 0x163eb8u: goto label_163eb8;
        case 0x163ebcu: goto label_163ebc;
        case 0x163ec0u: goto label_163ec0;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ec8u: goto label_163ec8;
        case 0x163eccu: goto label_163ecc;
        case 0x163ed0u: goto label_163ed0;
        case 0x163ed4u: goto label_163ed4;
        case 0x163ed8u: goto label_163ed8;
        case 0x163edcu: goto label_163edc;
        case 0x163ee0u: goto label_163ee0;
        case 0x163ee4u: goto label_163ee4;
        case 0x163ee8u: goto label_163ee8;
        case 0x163eecu: goto label_163eec;
        case 0x163ef0u: goto label_163ef0;
        case 0x163ef4u: goto label_163ef4;
        case 0x163ef8u: goto label_163ef8;
        case 0x163efcu: goto label_163efc;
        case 0x163f00u: goto label_163f00;
        case 0x163f04u: goto label_163f04;
        case 0x163f08u: goto label_163f08;
        case 0x163f0cu: goto label_163f0c;
        case 0x163f10u: goto label_163f10;
        case 0x163f14u: goto label_163f14;
        case 0x163f18u: goto label_163f18;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f20u: goto label_163f20;
        case 0x163f24u: goto label_163f24;
        case 0x163f28u: goto label_163f28;
        case 0x163f2cu: goto label_163f2c;
        case 0x163f30u: goto label_163f30;
        case 0x163f34u: goto label_163f34;
        case 0x163f38u: goto label_163f38;
        case 0x163f3cu: goto label_163f3c;
        case 0x163f40u: goto label_163f40;
        case 0x163f44u: goto label_163f44;
        case 0x163f48u: goto label_163f48;
        case 0x163f4cu: goto label_163f4c;
        case 0x163f50u: goto label_163f50;
        case 0x163f54u: goto label_163f54;
        case 0x163f58u: goto label_163f58;
        case 0x163f5cu: goto label_163f5c;
        case 0x163f60u: goto label_163f60;
        case 0x163f64u: goto label_163f64;
        case 0x163f68u: goto label_163f68;
        case 0x163f6cu: goto label_163f6c;
        case 0x163f70u: goto label_163f70;
        case 0x163f74u: goto label_163f74;
        case 0x163f78u: goto label_163f78;
        case 0x163f7cu: goto label_163f7c;
        case 0x163f80u: goto label_163f80;
        case 0x163f84u: goto label_163f84;
        case 0x163f88u: goto label_163f88;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f90u: goto label_163f90;
        case 0x163f94u: goto label_163f94;
        case 0x163f98u: goto label_163f98;
        case 0x163f9cu: goto label_163f9c;
        case 0x163fa0u: goto label_163fa0;
        case 0x163fa4u: goto label_163fa4;
        case 0x163fa8u: goto label_163fa8;
        case 0x163facu: goto label_163fac;
        case 0x163fb0u: goto label_163fb0;
        case 0x163fb4u: goto label_163fb4;
        case 0x163fb8u: goto label_163fb8;
        case 0x163fbcu: goto label_163fbc;
        case 0x163fc0u: goto label_163fc0;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fc8u: goto label_163fc8;
        case 0x163fccu: goto label_163fcc;
        case 0x163fd0u: goto label_163fd0;
        case 0x163fd4u: goto label_163fd4;
        case 0x163fd8u: goto label_163fd8;
        case 0x163fdcu: goto label_163fdc;
        case 0x163fe0u: goto label_163fe0;
        case 0x163fe4u: goto label_163fe4;
        case 0x163fe8u: goto label_163fe8;
        case 0x163fecu: goto label_163fec;
        case 0x163ff0u: goto label_163ff0;
        case 0x163ff4u: goto label_163ff4;
        case 0x163ff8u: goto label_163ff8;
        case 0x163ffcu: goto label_163ffc;
        case 0x164000u: goto label_164000;
        case 0x164004u: goto label_164004;
        case 0x164008u: goto label_164008;
        case 0x16400cu: goto label_16400c;
        case 0x164010u: goto label_164010;
        case 0x164014u: goto label_164014;
        case 0x164018u: goto label_164018;
        case 0x16401cu: goto label_16401c;
        case 0x164020u: goto label_164020;
        case 0x164024u: goto label_164024;
        case 0x164028u: goto label_164028;
        case 0x16402cu: goto label_16402c;
        case 0x164030u: goto label_164030;
        case 0x164034u: goto label_164034;
        case 0x164038u: goto label_164038;
        case 0x16403cu: goto label_16403c;
        case 0x164040u: goto label_164040;
        case 0x164044u: goto label_164044;
        case 0x164048u: goto label_164048;
        case 0x16404cu: goto label_16404c;
        case 0x164050u: goto label_164050;
        case 0x164054u: goto label_164054;
        case 0x164058u: goto label_164058;
        case 0x16405cu: goto label_16405c;
        case 0x164060u: goto label_164060;
        case 0x164064u: goto label_164064;
        case 0x164068u: goto label_164068;
        case 0x16406cu: goto label_16406c;
        case 0x164070u: goto label_164070;
        case 0x164074u: goto label_164074;
        case 0x164078u: goto label_164078;
        case 0x16407cu: goto label_16407c;
        case 0x164080u: goto label_164080;
        case 0x164084u: goto label_164084;
        case 0x164088u: goto label_164088;
        case 0x16408cu: goto label_16408c;
        case 0x164090u: goto label_164090;
        case 0x164094u: goto label_164094;
        case 0x164098u: goto label_164098;
        case 0x16409cu: goto label_16409c;
        case 0x1640a0u: goto label_1640a0;
        case 0x1640a4u: goto label_1640a4;
        case 0x1640a8u: goto label_1640a8;
        case 0x1640acu: goto label_1640ac;
        case 0x1640b0u: goto label_1640b0;
        case 0x1640b4u: goto label_1640b4;
        case 0x1640b8u: goto label_1640b8;
        case 0x1640bcu: goto label_1640bc;
        case 0x1640c0u: goto label_1640c0;
        case 0x1640c4u: goto label_1640c4;
        case 0x1640c8u: goto label_1640c8;
        case 0x1640ccu: goto label_1640cc;
        case 0x1640d0u: goto label_1640d0;
        case 0x1640d4u: goto label_1640d4;
        case 0x1640d8u: goto label_1640d8;
        case 0x1640dcu: goto label_1640dc;
        case 0x1640e0u: goto label_1640e0;
        case 0x1640e4u: goto label_1640e4;
        case 0x1640e8u: goto label_1640e8;
        case 0x1640ecu: goto label_1640ec;
        case 0x1640f0u: goto label_1640f0;
        case 0x1640f4u: goto label_1640f4;
        case 0x1640f8u: goto label_1640f8;
        case 0x1640fcu: goto label_1640fc;
        case 0x164100u: goto label_164100;
        case 0x164104u: goto label_164104;
        case 0x164108u: goto label_164108;
        case 0x16410cu: goto label_16410c;
        case 0x164110u: goto label_164110;
        case 0x164114u: goto label_164114;
        case 0x164118u: goto label_164118;
        case 0x16411cu: goto label_16411c;
        case 0x164120u: goto label_164120;
        case 0x164124u: goto label_164124;
        case 0x164128u: goto label_164128;
        case 0x16412cu: goto label_16412c;
        case 0x164130u: goto label_164130;
        case 0x164134u: goto label_164134;
        case 0x164138u: goto label_164138;
        case 0x16413cu: goto label_16413c;
        case 0x164140u: goto label_164140;
        case 0x164144u: goto label_164144;
        case 0x164148u: goto label_164148;
        case 0x16414cu: goto label_16414c;
        case 0x164150u: goto label_164150;
        case 0x164154u: goto label_164154;
        case 0x164158u: goto label_164158;
        case 0x16415cu: goto label_16415c;
        case 0x164160u: goto label_164160;
        case 0x164164u: goto label_164164;
        case 0x164168u: goto label_164168;
        case 0x16416cu: goto label_16416c;
        case 0x164170u: goto label_164170;
        case 0x164174u: goto label_164174;
        case 0x164178u: goto label_164178;
        case 0x16417cu: goto label_16417c;
        case 0x164180u: goto label_164180;
        case 0x164184u: goto label_164184;
        case 0x164188u: goto label_164188;
        case 0x16418cu: goto label_16418c;
        case 0x164190u: goto label_164190;
        case 0x164194u: goto label_164194;
        case 0x164198u: goto label_164198;
        case 0x16419cu: goto label_16419c;
        case 0x1641a0u: goto label_1641a0;
        case 0x1641a4u: goto label_1641a4;
        case 0x1641a8u: goto label_1641a8;
        case 0x1641acu: goto label_1641ac;
        case 0x1641b0u: goto label_1641b0;
        case 0x1641b4u: goto label_1641b4;
        case 0x1641b8u: goto label_1641b8;
        case 0x1641bcu: goto label_1641bc;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641c4u: goto label_1641c4;
        case 0x1641c8u: goto label_1641c8;
        case 0x1641ccu: goto label_1641cc;
        case 0x1641d0u: goto label_1641d0;
        case 0x1641d4u: goto label_1641d4;
        case 0x1641d8u: goto label_1641d8;
        case 0x1641dcu: goto label_1641dc;
        case 0x1641e0u: goto label_1641e0;
        case 0x1641e4u: goto label_1641e4;
        case 0x1641e8u: goto label_1641e8;
        case 0x1641ecu: goto label_1641ec;
        case 0x1641f0u: goto label_1641f0;
        case 0x1641f4u: goto label_1641f4;
        case 0x1641f8u: goto label_1641f8;
        case 0x1641fcu: goto label_1641fc;
        case 0x164200u: goto label_164200;
        case 0x164204u: goto label_164204;
        case 0x164208u: goto label_164208;
        case 0x16420cu: goto label_16420c;
        case 0x164210u: goto label_164210;
        case 0x164214u: goto label_164214;
        case 0x164218u: goto label_164218;
        case 0x16421cu: goto label_16421c;
        case 0x164220u: goto label_164220;
        case 0x164224u: goto label_164224;
        case 0x164228u: goto label_164228;
        case 0x16422cu: goto label_16422c;
        case 0x164230u: goto label_164230;
        case 0x164234u: goto label_164234;
        case 0x164238u: goto label_164238;
        case 0x16423cu: goto label_16423c;
        case 0x164240u: goto label_164240;
        case 0x164244u: goto label_164244;
        case 0x164248u: goto label_164248;
        case 0x16424cu: goto label_16424c;
        case 0x164250u: goto label_164250;
        case 0x164254u: goto label_164254;
        case 0x164258u: goto label_164258;
        case 0x16425cu: goto label_16425c;
        case 0x164260u: goto label_164260;
        case 0x164264u: goto label_164264;
        case 0x164268u: goto label_164268;
        case 0x16426cu: goto label_16426c;
        case 0x164270u: goto label_164270;
        case 0x164274u: goto label_164274;
        case 0x164278u: goto label_164278;
        case 0x16427cu: goto label_16427c;
        case 0x164280u: goto label_164280;
        case 0x164284u: goto label_164284;
        case 0x164288u: goto label_164288;
        case 0x16428cu: goto label_16428c;
        case 0x164290u: goto label_164290;
        case 0x164294u: goto label_164294;
        case 0x164298u: goto label_164298;
        case 0x16429cu: goto label_16429c;
        case 0x1642a0u: goto label_1642a0;
        case 0x1642a4u: goto label_1642a4;
        case 0x1642a8u: goto label_1642a8;
        case 0x1642acu: goto label_1642ac;
        case 0x1642b0u: goto label_1642b0;
        case 0x1642b4u: goto label_1642b4;
        case 0x1642b8u: goto label_1642b8;
        case 0x1642bcu: goto label_1642bc;
        case 0x1642c0u: goto label_1642c0;
        case 0x1642c4u: goto label_1642c4;
        case 0x1642c8u: goto label_1642c8;
        case 0x1642ccu: goto label_1642cc;
        case 0x1642d0u: goto label_1642d0;
        case 0x1642d4u: goto label_1642d4;
        case 0x1642d8u: goto label_1642d8;
        case 0x1642dcu: goto label_1642dc;
        case 0x1642e0u: goto label_1642e0;
        case 0x1642e4u: goto label_1642e4;
        case 0x1642e8u: goto label_1642e8;
        case 0x1642ecu: goto label_1642ec;
        case 0x1642f0u: goto label_1642f0;
        case 0x1642f4u: goto label_1642f4;
        case 0x1642f8u: goto label_1642f8;
        case 0x1642fcu: goto label_1642fc;
        case 0x164300u: goto label_164300;
        case 0x164304u: goto label_164304;
        case 0x164308u: goto label_164308;
        case 0x16430cu: goto label_16430c;
        case 0x164310u: goto label_164310;
        case 0x164314u: goto label_164314;
        case 0x164318u: goto label_164318;
        case 0x16431cu: goto label_16431c;
        case 0x164320u: goto label_164320;
        case 0x164324u: goto label_164324;
        case 0x164328u: goto label_164328;
        case 0x16432cu: goto label_16432c;
        case 0x164330u: goto label_164330;
        case 0x164334u: goto label_164334;
        case 0x164338u: goto label_164338;
        case 0x16433cu: goto label_16433c;
        case 0x164340u: goto label_164340;
        case 0x164344u: goto label_164344;
        case 0x164348u: goto label_164348;
        case 0x16434cu: goto label_16434c;
        case 0x164350u: goto label_164350;
        case 0x164354u: goto label_164354;
        case 0x164358u: goto label_164358;
        case 0x16435cu: goto label_16435c;
        default: return;
    }

label_163b90:
    if (ctx->pc == 0x163B90u) {
        ctx->pc = 0x163B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B8Cu;
        // 0x163b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B94u;
        goto label_163b94;
    }
    ctx->pc = 0x163B8Cu;
    SET_GPR_U32(ctx, 31, 0x163B94u);
    ctx->pc = 0x163B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B8Cu;
    // 0x163b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x163B94u;
label_163b94:
    // 0x163b94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163b98:
    // 0x163b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163b9c:
    // 0x163b9c: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_163ba0:
    // 0x163ba0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163ba4:
    // 0x163ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ba8:
    // 0x163ba8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163bac:
    // 0x163bac: 0xc066c72  jal         func_19B1C8
label_163bb0:
    if (ctx->pc == 0x163BB0u) {
        ctx->pc = 0x163BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BACu;
        // 0x163bb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BB4u;
        goto label_163bb4;
    }
    ctx->pc = 0x163BACu;
    SET_GPR_U32(ctx, 31, 0x163BB4u);
    ctx->pc = 0x163BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BACu;
    // 0x163bb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163BB4u;
label_163bb4:
    // 0x163bb4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163bb8:
    // 0x163bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163bbc:
    // 0x163bbc: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_163bc0:
    // 0x163bc0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163bc4:
    // 0x163bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163bc8:
    // 0x163bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163bcc:
    // 0x163bcc: 0xc066c72  jal         func_19B1C8
label_163bd0:
    if (ctx->pc == 0x163BD0u) {
        ctx->pc = 0x163BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BCCu;
        // 0x163bd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BD4u;
        goto label_163bd4;
    }
    ctx->pc = 0x163BCCu;
    SET_GPR_U32(ctx, 31, 0x163BD4u);
    ctx->pc = 0x163BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BCCu;
    // 0x163bd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163BD4u;
label_163bd4:
    // 0x163bd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163bd8:
    // 0x163bd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163bdc:
    // 0x163bdc: 0x24a54c40  addiu       $a1, $a1, 0x4C40
    ctx->pc = 0x163bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19520));
label_163be0:
    // 0x163be0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163be4:
    // 0x163be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163be8:
    // 0x163be8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163bec:
    // 0x163bec: 0xc066c72  jal         func_19B1C8
label_163bf0:
    if (ctx->pc == 0x163BF0u) {
        ctx->pc = 0x163BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BECu;
        // 0x163bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163BF4u;
        goto label_163bf4;
    }
    ctx->pc = 0x163BECu;
    SET_GPR_U32(ctx, 31, 0x163BF4u);
    ctx->pc = 0x163BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BECu;
    // 0x163bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163BF4u;
label_163bf4:
    // 0x163bf4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163bf8:
    // 0x163bf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163bfc:
    // 0x163bfc: 0x24a54be0  addiu       $a1, $a1, 0x4BE0
    ctx->pc = 0x163bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19424));
label_163c00:
    // 0x163c00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163c04:
    // 0x163c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163c08:
    // 0x163c08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163c0c:
    // 0x163c0c: 0xc066c72  jal         func_19B1C8
label_163c10:
    if (ctx->pc == 0x163C10u) {
        ctx->pc = 0x163C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C0Cu;
        // 0x163c10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C14u;
        goto label_163c14;
    }
    ctx->pc = 0x163C0Cu;
    SET_GPR_U32(ctx, 31, 0x163C14u);
    ctx->pc = 0x163C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C0Cu;
    // 0x163c10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163C14u;
label_163c14:
    // 0x163c14: 0x8f93868c  lw          $s3, -0x7974($gp)
    ctx->pc = 0x163c14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
label_163c18:
    // 0x163c18: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
label_163c1c:
    if (ctx->pc == 0x163C1Cu) {
        ctx->pc = 0x163C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C18u;
        // 0x163c1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C20u;
        goto label_163c20;
    }
    ctx->pc = 0x163C18u;
    {
        const bool branch_taken_0x163c18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C18u;
        // 0x163c1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c18) {
            ctx->pc = 0x163CCCu;
            goto label_163ccc;
        }
    }
    ctx->pc = 0x163C20u;
label_163c20:
    // 0x163c20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x163c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163c24:
    // 0x163c24: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x163c24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_163c28:
    // 0x163c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163c2c:
    // 0x163c2c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_163c30:
    if (ctx->pc == 0x163C30u) {
        ctx->pc = 0x163C34u;
        goto label_163c34;
    }
    ctx->pc = 0x163C2Cu;
    {
        const bool branch_taken_0x163c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163c2c) {
            ctx->pc = 0x163CBCu;
            goto label_163cbc;
        }
    }
    ctx->pc = 0x163C34u;
label_163c34:
    // 0x163c34: 0x8e620368  lw          $v0, 0x368($s3)
    ctx->pc = 0x163c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 872)));
label_163c38:
    // 0x163c38: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_163c3c:
    if (ctx->pc == 0x163C3Cu) {
        ctx->pc = 0x163C40u;
        goto label_163c40;
    }
    ctx->pc = 0x163C38u;
    {
        const bool branch_taken_0x163c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c38) {
            ctx->pc = 0x163CBCu;
            goto label_163cbc;
        }
    }
    ctx->pc = 0x163C40u;
label_163c40:
    // 0x163c40: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x163c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_163c44:
    // 0x163c44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x163c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_163c48:
    // 0x163c48: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163c4c:
    // 0x163c4c: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x163c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_163c50:
    // 0x163c50: 0x248439a0  addiu       $a0, $a0, 0x39A0
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14752));
label_163c54:
    // 0x163c54: 0x26660250  addiu       $a2, $s3, 0x250
    ctx->pc = 0x163c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
label_163c58:
    // 0x163c58: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_163c5c:
    // 0x163c5c: 0xc066d7a  jal         func_19B5E8
label_163c60:
    if (ctx->pc == 0x163C60u) {
        ctx->pc = 0x163C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C5Cu;
        // 0x163c60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C64u;
        goto label_163c64;
    }
    ctx->pc = 0x163C5Cu;
    SET_GPR_U32(ctx, 31, 0x163C64u);
    ctx->pc = 0x163C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C5Cu;
    // 0x163c60: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x163C64u;
label_163c64:
    // 0x163c64: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x163c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_163c68:
    // 0x163c68: 0xc42139a8  lwc1        $f1, 0x39A8($at)
    ctx->pc = 0x163c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_163c6c:
    // 0x163c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_163c70:
    // 0x163c70: 0x0  nop
    ctx->pc = 0x163c70u;
    // NOP
label_163c74:
    // 0x163c74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_163c78:
    // 0x163c78: 0x0  nop
    ctx->pc = 0x163c78u;
    // NOP
label_163c7c:
    // 0x163c7c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_163c80:
    if (ctx->pc == 0x163C80u) {
        ctx->pc = 0x163C84u;
        goto label_163c84;
    }
    ctx->pc = 0x163C7Cu;
    {
        const bool branch_taken_0x163c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c7c) {
            ctx->pc = 0x163CBCu;
            goto label_163cbc;
        }
    }
    ctx->pc = 0x163C84u;
label_163c84:
    // 0x163c84: 0xc07f1a0  jal         func_1FC680
label_163c88:
    if (ctx->pc == 0x163C88u) {
        ctx->pc = 0x163C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C84u;
        // 0x163c88: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C8Cu;
        goto label_163c8c;
    }
    ctx->pc = 0x163C84u;
    SET_GPR_U32(ctx, 31, 0x163C8Cu);
    ctx->pc = 0x163C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C84u;
    // 0x163c88: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x163C8Cu;
label_163c8c:
    // 0x163c8c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x163c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_163c90:
    // 0x163c90: 0xc42139a8  lwc1        $f1, 0x39A8($at)
    ctx->pc = 0x163c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_163c94:
    // 0x163c94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_163c98:
    // 0x163c98: 0x0  nop
    ctx->pc = 0x163c98u;
    // NOP
label_163c9c:
    // 0x163c9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_163ca0:
    if (ctx->pc == 0x163CA0u) {
        ctx->pc = 0x163CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C9Cu;
        // 0x163ca0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CA4u;
        goto label_163ca4;
    }
    ctx->pc = 0x163C9Cu;
    {
        const bool branch_taken_0x163c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C9Cu;
        // 0x163ca0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c9c) {
            ctx->pc = 0x163CBCu;
            goto label_163cbc;
        }
    }
    ctx->pc = 0x163CA4u;
label_163ca4:
    // 0x163ca4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x163ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_163ca8:
    // 0x163ca8: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x163ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
label_163cac:
    // 0x163cac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_163cb0:
    // 0x163cb0: 0xe6610360  swc1        $f1, 0x360($s3)
    ctx->pc = 0x163cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 864), bits); }
label_163cb4:
    // 0x163cb4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x163cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_163cb8:
    // 0x163cb8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x163cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_163cbc:
    // 0x163cbc: 0x0  nop
    ctx->pc = 0x163cbcu;
    // NOP
label_163cc0:
    // 0x163cc0: 0x8e730008  lw          $s3, 0x8($s3)
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_163cc4:
    // 0x163cc4: 0x1660ffd7  bnez        $s3, . + 4 + (-0x29 << 2)
label_163cc8:
    if (ctx->pc == 0x163CC8u) {
        ctx->pc = 0x163CCCu;
        goto label_163ccc;
    }
    ctx->pc = 0x163CC4u;
    {
        const bool branch_taken_0x163cc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x163cc4) {
            ctx->pc = 0x163C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163c24;
        }
    }
    ctx->pc = 0x163CCCu;
label_163ccc:
    // 0x163ccc: 0x0  nop
    ctx->pc = 0x163cccu;
    // NOP
label_163cd0:
    // 0x163cd0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x163cd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_163cd4:
    // 0x163cd4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_163cd8:
    if (ctx->pc == 0x163CD8u) {
        ctx->pc = 0x163CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CD4u;
        // 0x163cd8: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CDCu;
        goto label_163cdc;
    }
    ctx->pc = 0x163CD4u;
    {
        const bool branch_taken_0x163cd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x163CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CD4u;
        // 0x163cd8: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cd4) {
            ctx->pc = 0x163CF4u;
            goto label_163cf4;
        }
    }
    ctx->pc = 0x163CDCu;
label_163cdc:
    // 0x163cdc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163ce0:
    // 0x163ce0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x163ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_163ce4:
    // 0x163ce4: 0x24843a00  addiu       $a0, $a0, 0x3A00
    ctx->pc = 0x163ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14848));
label_163ce8:
    // 0x163ce8: 0xc058f70  jal         func_163DC0
label_163cec:
    if (ctx->pc == 0x163CECu) {
        ctx->pc = 0x163CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE8u;
        // 0x163cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CF0u;
        goto label_163cf0;
    }
    ctx->pc = 0x163CE8u;
    SET_GPR_U32(ctx, 31, 0x163CF0u);
    ctx->pc = 0x163CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CE8u;
    // 0x163cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163DC0u;
    goto label_163dc0;
    ctx->pc = 0x163CF0u;
label_163cf0:
    // 0x163cf0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x163cf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_163cf4:
    // 0x163cf4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_163cf8:
    if (ctx->pc == 0x163CF8u) {
        ctx->pc = 0x163CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CF4u;
        // 0x163cf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CFCu;
        goto label_163cfc;
    }
    ctx->pc = 0x163CF4u;
    {
        const bool branch_taken_0x163cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CF4u;
        // 0x163cf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cf4) {
            ctx->pc = 0x163D30u;
            goto label_163d30;
        }
    }
    ctx->pc = 0x163CFCu;
label_163cfc:
    // 0x163cfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x163cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d00:
    // 0x163d00: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x163d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_163d04:
    // 0x163d04: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
label_163d08:
    // 0x163d08: 0x53a821  addu        $s5, $v0, $s3
    ctx->pc = 0x163d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_163d0c:
    // 0x163d0c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x163d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_163d10:
    // 0x163d10: 0x8c820368  lw          $v0, 0x368($a0)
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
label_163d14:
    // 0x163d14: 0x40f809  jalr        $v0
label_163d18:
    if (ctx->pc == 0x163D18u) {
        ctx->pc = 0x163D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D14u;
        // 0x163d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D1Cu;
        goto label_163d1c;
    }
    ctx->pc = 0x163D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163D1Cu);
        ctx->pc = 0x163D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D14u;
        // 0x163d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D14u, 0x163D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163D1Cu;
label_163d1c:
    // 0x163d1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_163d20:
    // 0x163d20: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x163d20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_163d24:
    // 0x163d24: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x163d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_163d28:
    // 0x163d28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_163d2c:
    if (ctx->pc == 0x163D2Cu) {
        ctx->pc = 0x163D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D28u;
        // 0x163d2c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D30u;
        goto label_163d30;
    }
    ctx->pc = 0x163D28u;
    {
        const bool branch_taken_0x163d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D28u;
        // 0x163d2c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d28) {
            ctx->pc = 0x163D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163d00;
        }
    }
    ctx->pc = 0x163D30u;
label_163d30:
    // 0x163d30: 0x8f918680  lw          $s1, -0x7980($gp)
    ctx->pc = 0x163d30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
label_163d34:
    // 0x163d34: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_163d38:
    if (ctx->pc == 0x163D38u) {
        ctx->pc = 0x163D3Cu;
        goto label_163d3c;
    }
    ctx->pc = 0x163D34u;
    {
        const bool branch_taken_0x163d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d34) {
            ctx->pc = 0x163D6Cu;
            goto label_163d6c;
        }
    }
    ctx->pc = 0x163D3Cu;
label_163d3c:
    // 0x163d3c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x163d3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_163d40:
    // 0x163d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163d44:
    // 0x163d44: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_163d48:
    if (ctx->pc == 0x163D48u) {
        ctx->pc = 0x163D4Cu;
        goto label_163d4c;
    }
    ctx->pc = 0x163D44u;
    {
        const bool branch_taken_0x163d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163d44) {
            ctx->pc = 0x163D60u;
            goto label_163d60;
        }
    }
    ctx->pc = 0x163D4Cu;
label_163d4c:
    // 0x163d4c: 0x8e220368  lw          $v0, 0x368($s1)
    ctx->pc = 0x163d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
label_163d50:
    // 0x163d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_163d54:
    if (ctx->pc == 0x163D54u) {
        ctx->pc = 0x163D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D50u;
        // 0x163d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D58u;
        goto label_163d58;
    }
    ctx->pc = 0x163D50u;
    {
        const bool branch_taken_0x163d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D50u;
        // 0x163d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d50) {
            ctx->pc = 0x163D60u;
            goto label_163d60;
        }
    }
    ctx->pc = 0x163D58u;
label_163d58:
    // 0x163d58: 0x40f809  jalr        $v0
label_163d5c:
    if (ctx->pc == 0x163D5Cu) {
        ctx->pc = 0x163D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D58u;
        // 0x163d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D60u;
        goto label_163d60;
    }
    ctx->pc = 0x163D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163D60u);
        ctx->pc = 0x163D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D58u;
        // 0x163d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D58u, 0x163D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163D60u;
label_163d60:
    // 0x163d60: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x163d60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_163d64:
    // 0x163d64: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_163d68:
    if (ctx->pc == 0x163D68u) {
        ctx->pc = 0x163D6Cu;
        goto label_163d6c;
    }
    ctx->pc = 0x163D64u;
    {
        const bool branch_taken_0x163d64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x163d64) {
            ctx->pc = 0x163D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163d3c;
        }
    }
    ctx->pc = 0x163D6Cu;
label_163d6c:
    // 0x163d6c: 0x0  nop
    ctx->pc = 0x163d6cu;
    // NOP
label_163d70:
    // 0x163d70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163d74:
    // 0x163d74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163d78:
    // 0x163d78: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_163d7c:
    // 0x163d7c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163d80:
    // 0x163d80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d84:
    // 0x163d84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d88:
    // 0x163d88: 0xc066c72  jal         func_19B1C8
label_163d8c:
    if (ctx->pc == 0x163D8Cu) {
        ctx->pc = 0x163D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D88u;
        // 0x163d8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D90u;
        goto label_163d90;
    }
    ctx->pc = 0x163D88u;
    SET_GPR_U32(ctx, 31, 0x163D90u);
    ctx->pc = 0x163D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D88u;
    // 0x163d8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163D90u;
label_163d90:
    // 0x163d90: 0xc04e338  jal         func_138CE0
label_163d94:
    if (ctx->pc == 0x163D94u) {
        ctx->pc = 0x163D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D90u;
        // 0x163d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D98u;
        goto label_163d98;
    }
    ctx->pc = 0x163D90u;
    SET_GPR_U32(ctx, 31, 0x163D98u);
    ctx->pc = 0x163D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D90u;
    // 0x163d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CE0u, 0x163D90u, 0x163D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D98u;
label_163d98:
    // 0x163d98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x163d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_163d9c:
    // 0x163d9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x163d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_163da0:
    // 0x163da0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x163da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_163da4:
    // 0x163da4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_163da8:
    // 0x163da8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163dac:
    // 0x163dac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_163db0:
    // 0x163db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163db4:
    // 0x163db4: 0x3e00008  jr          $ra
label_163db8:
    if (ctx->pc == 0x163DB8u) {
        ctx->pc = 0x163DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DB4u;
        // 0x163db8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DBCu;
        goto label_163dbc;
    }
    ctx->pc = 0x163DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DB4u;
        // 0x163db8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163DBCu;
label_163dbc:
    // 0x163dbc: 0x0  nop
    ctx->pc = 0x163dbcu;
    // NOP
label_163dc0:
    // 0x163dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_163dc4:
    // 0x163dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_163dc8:
    // 0x163dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_163dcc:
    // 0x163dcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x163dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163dd0:
    // 0x163dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_163dd4:
    // 0x163dd4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x163dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_163dd8:
    // 0x163dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163ddc:
    // 0x163ddc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x163ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163de0:
    // 0x163de0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_163de4:
    if (ctx->pc == 0x163DE4u) {
        ctx->pc = 0x163DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE0u;
        // 0x163de4: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DE8u;
        goto label_163de8;
    }
    ctx->pc = 0x163DE0u;
    {
        const bool branch_taken_0x163de0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x163DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE0u;
        // 0x163de4: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163de0) {
            ctx->pc = 0x163DF0u;
            goto label_163df0;
        }
    }
    ctx->pc = 0x163DE8u;
label_163de8:
    // 0x163de8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x163de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_163dec:
    // 0x163dec: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x163decu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_163df0:
    // 0x163df0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_163df4:
    // 0x163df4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x163df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_163df8:
    // 0x163df8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x163df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_163dfc:
    // 0x163dfc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x163dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163e00:
    // 0x163e00: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x163e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163e04:
    // 0x163e04: 0x0  nop
    ctx->pc = 0x163e04u;
    // NOP
label_163e08:
    // 0x163e08: 0xc4e10360  lwc1        $f1, 0x360($a3)
    ctx->pc = 0x163e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_163e0c:
    // 0x163e0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_163e10:
    if (ctx->pc == 0x163E10u) {
        ctx->pc = 0x163E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E0Cu;
        // 0x163e10: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E14u;
        goto label_163e14;
    }
    ctx->pc = 0x163E0Cu;
    {
        const bool branch_taken_0x163e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E0Cu;
        // 0x163e10: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e0c) {
            ctx->pc = 0x163E20u;
            goto label_163e20;
        }
    }
    ctx->pc = 0x163E14u;
label_163e14:
    // 0x163e14: 0x0  nop
    ctx->pc = 0x163e14u;
    // NOP
label_163e18:
    // 0x163e18: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x163e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_163e1c:
    // 0x163e1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_163e20:
    // 0x163e20: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x163e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_163e24:
    // 0x163e24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163e28:
    // 0x163e28: 0xc4600360  lwc1        $f0, 0x360($v1)
    ctx->pc = 0x163e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163e2c:
    // 0x163e2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x163e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_163e30:
    // 0x163e30: 0x0  nop
    ctx->pc = 0x163e30u;
    // NOP
label_163e34:
    // 0x163e34: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
label_163e38:
    if (ctx->pc == 0x163E38u) {
        ctx->pc = 0x163E3Cu;
        goto label_163e3c;
    }
    ctx->pc = 0x163E34u;
    {
        const bool branch_taken_0x163e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163e34) {
            ctx->pc = 0x163E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163e14;
        }
    }
    ctx->pc = 0x163E3Cu;
label_163e3c:
    // 0x163e3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_163e40:
    if (ctx->pc == 0x163E40u) {
        ctx->pc = 0x163E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E3Cu;
        // 0x163e40: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E44u;
        goto label_163e44;
    }
    ctx->pc = 0x163E3Cu;
    {
        const bool branch_taken_0x163e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E3Cu;
        // 0x163e40: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e3c) {
            ctx->pc = 0x163E50u;
            goto label_163e50;
        }
    }
    ctx->pc = 0x163E44u;
label_163e44:
    // 0x163e44: 0x0  nop
    ctx->pc = 0x163e44u;
    // NOP
label_163e48:
    // 0x163e48: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x163e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_163e4c:
    // 0x163e4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_163e50:
    // 0x163e50: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x163e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_163e54:
    // 0x163e54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x163e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163e58:
    // 0x163e58: 0xc4600360  lwc1        $f0, 0x360($v1)
    ctx->pc = 0x163e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163e5c:
    // 0x163e5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_163e60:
    // 0x163e60: 0x0  nop
    ctx->pc = 0x163e60u;
    // NOP
label_163e64:
    // 0x163e64: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
label_163e68:
    if (ctx->pc == 0x163E68u) {
        ctx->pc = 0x163E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E64u;
        // 0x163e68: 0xd0082a  slt         $at, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E6Cu;
        goto label_163e6c;
    }
    ctx->pc = 0x163E64u;
    {
        const bool branch_taken_0x163e64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E64u;
        // 0x163e68: 0xd0082a  slt         $at, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e64) {
            ctx->pc = 0x163E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163e44;
        }
    }
    ctx->pc = 0x163E6Cu;
label_163e6c:
    // 0x163e6c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_163e70:
    if (ctx->pc == 0x163E70u) {
        ctx->pc = 0x163E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E6Cu;
        // 0x163e70: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E74u;
        goto label_163e74;
    }
    ctx->pc = 0x163E6Cu;
    {
        const bool branch_taken_0x163e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E6Cu;
        // 0x163e70: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e6c) {
            ctx->pc = 0x163E9Cu;
            goto label_163e9c;
        }
    }
    ctx->pc = 0x163E74u;
label_163e74:
    // 0x163e74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x163e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_163e78:
    // 0x163e78: 0x2444021  addu        $t0, $s2, $a0
    ctx->pc = 0x163e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_163e7c:
    // 0x163e7c: 0x2434821  addu        $t1, $s2, $v1
    ctx->pc = 0x163e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_163e80:
    // 0x163e80: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x163e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_163e84:
    // 0x163e84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_163e88:
    // 0x163e88: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_163e8c:
    // 0x163e8c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x163e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_163e90:
    // 0x163e90: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x163e90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_163e94:
    // 0x163e94: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
label_163e98:
    if (ctx->pc == 0x163E98u) {
        ctx->pc = 0x163E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E94u;
        // 0x163e98: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E9Cu;
        goto label_163e9c;
    }
    ctx->pc = 0x163E94u;
    {
        const bool branch_taken_0x163e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E94u;
        // 0x163e98: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e94) {
            ctx->pc = 0x163E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163e08;
        }
    }
    ctx->pc = 0x163E9Cu;
label_163e9c:
    // 0x163e9c: 0x0  nop
    ctx->pc = 0x163e9cu;
    // NOP
label_163ea0:
    // 0x163ea0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x163ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_163ea4:
    // 0x163ea4: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x163ea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_163ea8:
    // 0x163ea8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_163eac:
    if (ctx->pc == 0x163EACu) {
        ctx->pc = 0x163EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EA8u;
        // 0x163eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EB0u;
        goto label_163eb0;
    }
    ctx->pc = 0x163EA8u;
    {
        const bool branch_taken_0x163ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EA8u;
        // 0x163eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ea8) {
            ctx->pc = 0x163EB8u;
            goto label_163eb8;
        }
    }
    ctx->pc = 0x163EB0u;
label_163eb0:
    // 0x163eb0: 0xc058f70  jal         func_163DC0
label_163eb4:
    if (ctx->pc == 0x163EB4u) {
        ctx->pc = 0x163EB8u;
        goto label_163eb8;
    }
    ctx->pc = 0x163EB0u;
    SET_GPR_U32(ctx, 31, 0x163EB8u);
    ctx->pc = 0x163DC0u;
    goto label_163dc0;
    ctx->pc = 0x163EB8u;
label_163eb8:
    // 0x163eb8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x163eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_163ebc:
    // 0x163ebc: 0xb1082a  slt         $at, $a1, $s1
    ctx->pc = 0x163ebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_163ec0:
    // 0x163ec0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_163ec4:
    if (ctx->pc == 0x163EC4u) {
        ctx->pc = 0x163EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC0u;
        // 0x163ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EC8u;
        goto label_163ec8;
    }
    ctx->pc = 0x163EC0u;
    {
        const bool branch_taken_0x163ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC0u;
        // 0x163ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ec0) {
            ctx->pc = 0x163ED0u;
            goto label_163ed0;
        }
    }
    ctx->pc = 0x163EC8u;
label_163ec8:
    // 0x163ec8: 0xc058f70  jal         func_163DC0
label_163ecc:
    if (ctx->pc == 0x163ECCu) {
        ctx->pc = 0x163ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC8u;
        // 0x163ecc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163ED0u;
        goto label_163ed0;
    }
    ctx->pc = 0x163EC8u;
    SET_GPR_U32(ctx, 31, 0x163ED0u);
    ctx->pc = 0x163ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EC8u;
    // 0x163ecc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163DC0u;
    goto label_163dc0;
    ctx->pc = 0x163ED0u;
label_163ed0:
    // 0x163ed0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163ed4:
    // 0x163ed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163ed8:
    // 0x163ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_163edc:
    // 0x163edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163ee0:
    // 0x163ee0: 0x3e00008  jr          $ra
label_163ee4:
    if (ctx->pc == 0x163EE4u) {
        ctx->pc = 0x163EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE0u;
        // 0x163ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EE8u;
        goto label_163ee8;
    }
    ctx->pc = 0x163EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE0u;
        // 0x163ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163EE8u;
label_163ee8:
    // 0x163ee8: 0x0  nop
    ctx->pc = 0x163ee8u;
    // NOP
label_163eec:
    // 0x163eec: 0x0  nop
    ctx->pc = 0x163eecu;
    // NOP
label_163ef0:
    // 0x163ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163ef4:
    // 0x163ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_163ef8:
    // 0x163ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163efc:
    // 0x163efc: 0x8f908698  lw          $s0, -0x7968($gp)
    ctx->pc = 0x163efcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_163f00:
    // 0x163f00: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_163f04:
    if (ctx->pc == 0x163F04u) {
        ctx->pc = 0x163F08u;
        goto label_163f08;
    }
    ctx->pc = 0x163F00u;
    {
        const bool branch_taken_0x163f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f00) {
            ctx->pc = 0x163F54u;
            goto label_163f54;
        }
    }
    ctx->pc = 0x163F08u;
label_163f08:
    // 0x163f08: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x163f08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_163f0c:
    // 0x163f0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163f10:
    // 0x163f10: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_163f14:
    if (ctx->pc == 0x163F14u) {
        ctx->pc = 0x163F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F10u;
        // 0x163f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F18u;
        goto label_163f18;
    }
    ctx->pc = 0x163F10u;
    {
        const bool branch_taken_0x163f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x163F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F10u;
        // 0x163f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f10) {
            ctx->pc = 0x163F28u;
            goto label_163f28;
        }
    }
    ctx->pc = 0x163F18u;
label_163f18:
    // 0x163f18: 0xc0591f8  jal         func_1647E0
label_163f1c:
    if (ctx->pc == 0x163F1Cu) {
        ctx->pc = 0x163F20u;
        goto label_163f20;
    }
    ctx->pc = 0x163F18u;
    SET_GPR_U32(ctx, 31, 0x163F20u);
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x163F20u;
label_163f20:
    // 0x163f20: 0x10000009  b           . + 4 + (0x9 << 2)
label_163f24:
    if (ctx->pc == 0x163F24u) {
        ctx->pc = 0x163F28u;
        goto label_163f28;
    }
    ctx->pc = 0x163F20u;
    {
        const bool branch_taken_0x163f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f20) {
            ctx->pc = 0x163F48u;
            goto label_163f48;
        }
    }
    ctx->pc = 0x163F28u;
label_163f28:
    // 0x163f28: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_163f2c:
    // 0x163f2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_163f30:
    if (ctx->pc == 0x163F30u) {
        ctx->pc = 0x163F34u;
        goto label_163f34;
    }
    ctx->pc = 0x163F2Cu;
    {
        const bool branch_taken_0x163f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f2c) {
            ctx->pc = 0x163F48u;
            goto label_163f48;
        }
    }
    ctx->pc = 0x163F34u;
label_163f34:
    // 0x163f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163f38:
    // 0x163f38: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x163f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_163f3c:
    // 0x163f3c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_163f40:
    // 0x163f40: 0x40f809  jalr        $v0
label_163f44:
    if (ctx->pc == 0x163F44u) {
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F48u;
        goto label_163f48;
    }
    ctx->pc = 0x163F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163F48u);
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F40u;
        // 0x163f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F40u, 0x163F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163F48u;
label_163f48:
    // 0x163f48: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x163f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_163f4c:
    // 0x163f4c: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
label_163f50:
    if (ctx->pc == 0x163F50u) {
        ctx->pc = 0x163F54u;
        goto label_163f54;
    }
    ctx->pc = 0x163F4Cu;
    {
        const bool branch_taken_0x163f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x163f4c) {
            ctx->pc = 0x163F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163f08;
        }
    }
    ctx->pc = 0x163F54u;
label_163f54:
    // 0x163f54: 0x0  nop
    ctx->pc = 0x163f54u;
    // NOP
label_163f58:
    // 0x163f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163f5c:
    // 0x163f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163f60:
    // 0x163f60: 0x3e00008  jr          $ra
label_163f64:
    if (ctx->pc == 0x163F64u) {
        ctx->pc = 0x163F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F60u;
        // 0x163f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F68u;
        goto label_163f68;
    }
    ctx->pc = 0x163F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F60u;
        // 0x163f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163F68u;
label_163f68:
    // 0x163f68: 0x0  nop
    ctx->pc = 0x163f68u;
    // NOP
label_163f6c:
    // 0x163f6c: 0x0  nop
    ctx->pc = 0x163f6cu;
    // NOP
label_163f70:
    // 0x163f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163f74:
    // 0x163f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_163f78:
    // 0x163f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_163f7c:
    // 0x163f7c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x163f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_163f80:
    // 0x163f80: 0x30837800  andi        $v1, $a0, 0x7800
    ctx->pc = 0x163f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)30720);
label_163f84:
    // 0x163f84: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_163f88:
    if (ctx->pc == 0x163F88u) {
        ctx->pc = 0x163F8Cu;
        goto label_163f8c;
    }
    ctx->pc = 0x163F84u;
    {
        const bool branch_taken_0x163f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f84) {
            ctx->pc = 0x163FC8u;
            goto label_163fc8;
        }
    }
    ctx->pc = 0x163F8Cu;
label_163f8c:
    // 0x163f8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_163f90:
    // 0x163f90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_163f94:
    // 0x163f94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_163f98:
    if (ctx->pc == 0x163F98u) {
        ctx->pc = 0x163F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F94u;
        // 0x163f98: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F9Cu;
        goto label_163f9c;
    }
    ctx->pc = 0x163F94u;
    {
        const bool branch_taken_0x163f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F94u;
        // 0x163f98: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f94) {
            ctx->pc = 0x163FA8u;
            goto label_163fa8;
        }
    }
    ctx->pc = 0x163F9Cu;
label_163f9c:
    // 0x163f9c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_163fa0:
    if (ctx->pc == 0x163FA0u) {
        ctx->pc = 0x163FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F9Cu;
        // 0x163fa0: 0xaf808644  sw          $zero, -0x79BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FA4u;
        goto label_163fa4;
    }
    ctx->pc = 0x163F9Cu;
    {
        const bool branch_taken_0x163f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F9Cu;
        // 0x163fa0: 0xaf808644  sw          $zero, -0x79BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f9c) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x163FA4u;
label_163fa4:
    // 0x163fa4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_163fa8:
    // 0x163fa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_163fac:
    // 0x163fac: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
label_163fb0:
    if (ctx->pc == 0x163FB0u) {
        ctx->pc = 0x163FB4u;
        goto label_163fb4;
    }
    ctx->pc = 0x163FACu;
    {
        const bool branch_taken_0x163fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fac) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x163FB4u;
label_163fb4:
    // 0x163fb4: 0x8f838644  lw          $v1, -0x79BC($gp)
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
label_163fb8:
    // 0x163fb8: 0x1c6000ad  bgtz        $v1, . + 4 + (0xAD << 2)
label_163fbc:
    if (ctx->pc == 0x163FBCu) {
        ctx->pc = 0x163FC0u;
        goto label_163fc0;
    }
    ctx->pc = 0x163FB8u;
    {
        const bool branch_taken_0x163fb8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x163fb8) {
            ctx->pc = 0x164270u;
            goto label_164270;
        }
    }
    ctx->pc = 0x163FC0u;
label_163fc0:
    // 0x163fc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x163fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_163fc4:
    // 0x163fc4: 0xaf828644  sw          $v0, -0x79BC($gp)
    ctx->pc = 0x163fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 2));
label_163fc8:
    // 0x163fc8: 0x8f90865c  lw          $s0, -0x79A4($gp)
    ctx->pc = 0x163fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
label_163fcc:
    // 0x163fcc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_163fd0:
    if (ctx->pc == 0x163FD0u) {
        ctx->pc = 0x163FD4u;
        goto label_163fd4;
    }
    ctx->pc = 0x163FCCu;
    {
        const bool branch_taken_0x163fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fcc) {
            ctx->pc = 0x164024u;
            goto label_164024;
        }
    }
    ctx->pc = 0x163FD4u;
label_163fd4:
    // 0x163fd4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x163fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_163fd8:
    // 0x163fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163fdc:
    // 0x163fdc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_163fe0:
    if (ctx->pc == 0x163FE0u) {
        ctx->pc = 0x163FE4u;
        goto label_163fe4;
    }
    ctx->pc = 0x163FDCu;
    {
        const bool branch_taken_0x163fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163fdc) {
            ctx->pc = 0x163FF4u;
            goto label_163ff4;
        }
    }
    ctx->pc = 0x163FE4u;
label_163fe4:
    // 0x163fe4: 0xc0591f8  jal         func_1647E0
label_163fe8:
    if (ctx->pc == 0x163FE8u) {
        ctx->pc = 0x163FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FE4u;
        // 0x163fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FECu;
        goto label_163fec;
    }
    ctx->pc = 0x163FE4u;
    SET_GPR_U32(ctx, 31, 0x163FECu);
    ctx->pc = 0x163FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163FE4u;
    // 0x163fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x163FECu;
label_163fec:
    // 0x163fec: 0x1000000a  b           . + 4 + (0xA << 2)
label_163ff0:
    if (ctx->pc == 0x163FF0u) {
        ctx->pc = 0x163FF4u;
        goto label_163ff4;
    }
    ctx->pc = 0x163FECu;
    {
        const bool branch_taken_0x163fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fec) {
            ctx->pc = 0x164018u;
            goto label_164018;
        }
    }
    ctx->pc = 0x163FF4u;
label_163ff4:
    // 0x163ff4: 0x0  nop
    ctx->pc = 0x163ff4u;
    // NOP
label_163ff8:
    // 0x163ff8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_163ffc:
    // 0x163ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164000:
    if (ctx->pc == 0x164000u) {
        ctx->pc = 0x164004u;
        goto label_164004;
    }
    ctx->pc = 0x163FFCu;
    {
        const bool branch_taken_0x163ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ffc) {
            ctx->pc = 0x164018u;
            goto label_164018;
        }
    }
    ctx->pc = 0x164004u;
label_164004:
    // 0x164004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164008:
    // 0x164008: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16400c:
    // 0x16400c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_164010:
    // 0x164010: 0x40f809  jalr        $v0
label_164014:
    if (ctx->pc == 0x164014u) {
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164018u;
        goto label_164018;
    }
    ctx->pc = 0x164010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164018u);
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164010u, 0x164018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164018u;
label_164018:
    // 0x164018: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16401c:
    // 0x16401c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164020:
    if (ctx->pc == 0x164020u) {
        ctx->pc = 0x164024u;
        goto label_164024;
    }
    ctx->pc = 0x16401Cu;
    {
        const bool branch_taken_0x16401c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16401c) {
            ctx->pc = 0x163FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163fd4;
        }
    }
    ctx->pc = 0x164024u;
label_164024:
    // 0x164024: 0x0  nop
    ctx->pc = 0x164024u;
    // NOP
label_164028:
    // 0x164028: 0x8f908698  lw          $s0, -0x7968($gp)
    ctx->pc = 0x164028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_16402c:
    // 0x16402c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164030:
    if (ctx->pc == 0x164030u) {
        ctx->pc = 0x164034u;
        goto label_164034;
    }
    ctx->pc = 0x16402Cu;
    {
        const bool branch_taken_0x16402c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16402c) {
            ctx->pc = 0x164084u;
            goto label_164084;
        }
    }
    ctx->pc = 0x164034u;
label_164034:
    // 0x164034: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164034u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164038:
    // 0x164038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16403c:
    // 0x16403c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164040:
    if (ctx->pc == 0x164040u) {
        ctx->pc = 0x164044u;
        goto label_164044;
    }
    ctx->pc = 0x16403Cu;
    {
        const bool branch_taken_0x16403c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16403c) {
            ctx->pc = 0x164054u;
            goto label_164054;
        }
    }
    ctx->pc = 0x164044u;
label_164044:
    // 0x164044: 0xc0591f8  jal         func_1647E0
label_164048:
    if (ctx->pc == 0x164048u) {
        ctx->pc = 0x164048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164044u;
        // 0x164048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16404Cu;
        goto label_16404c;
    }
    ctx->pc = 0x164044u;
    SET_GPR_U32(ctx, 31, 0x16404Cu);
    ctx->pc = 0x164048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164044u;
    // 0x164048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x16404Cu;
label_16404c:
    // 0x16404c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164050:
    if (ctx->pc == 0x164050u) {
        ctx->pc = 0x164054u;
        goto label_164054;
    }
    ctx->pc = 0x16404Cu;
    {
        const bool branch_taken_0x16404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16404c) {
            ctx->pc = 0x164078u;
            goto label_164078;
        }
    }
    ctx->pc = 0x164054u;
label_164054:
    // 0x164054: 0x0  nop
    ctx->pc = 0x164054u;
    // NOP
label_164058:
    // 0x164058: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x164058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_16405c:
    // 0x16405c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164060:
    if (ctx->pc == 0x164060u) {
        ctx->pc = 0x164064u;
        goto label_164064;
    }
    ctx->pc = 0x16405Cu;
    {
        const bool branch_taken_0x16405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16405c) {
            ctx->pc = 0x164078u;
            goto label_164078;
        }
    }
    ctx->pc = 0x164064u;
label_164064:
    // 0x164064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164068:
    // 0x164068: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16406c:
    // 0x16406c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x16406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_164070:
    // 0x164070: 0x40f809  jalr        $v0
label_164074:
    if (ctx->pc == 0x164074u) {
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164070u;
        // 0x164074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164078u;
        goto label_164078;
    }
    ctx->pc = 0x164070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164078u);
        ctx->pc = 0x164074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164070u;
        // 0x164074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164070u, 0x164078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164078u;
label_164078:
    // 0x164078: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16407c:
    // 0x16407c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164080:
    if (ctx->pc == 0x164080u) {
        ctx->pc = 0x164084u;
        goto label_164084;
    }
    ctx->pc = 0x16407Cu;
    {
        const bool branch_taken_0x16407c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16407c) {
            ctx->pc = 0x164034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164034;
        }
    }
    ctx->pc = 0x164084u;
label_164084:
    // 0x164084: 0x0  nop
    ctx->pc = 0x164084u;
    // NOP
label_164088:
    // 0x164088: 0x8f90868c  lw          $s0, -0x7974($gp)
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
label_16408c:
    // 0x16408c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164090:
    if (ctx->pc == 0x164090u) {
        ctx->pc = 0x164094u;
        goto label_164094;
    }
    ctx->pc = 0x16408Cu;
    {
        const bool branch_taken_0x16408c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16408c) {
            ctx->pc = 0x1640E4u;
            goto label_1640e4;
        }
    }
    ctx->pc = 0x164094u;
label_164094:
    // 0x164094: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164098:
    // 0x164098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16409c:
    // 0x16409c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1640a0:
    if (ctx->pc == 0x1640A0u) {
        ctx->pc = 0x1640A4u;
        goto label_1640a4;
    }
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x1640B4u;
            goto label_1640b4;
        }
    }
    ctx->pc = 0x1640A4u;
label_1640a4:
    // 0x1640a4: 0xc0591f8  jal         func_1647E0
label_1640a8:
    if (ctx->pc == 0x1640A8u) {
        ctx->pc = 0x1640A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640A4u;
        // 0x1640a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640ACu;
        goto label_1640ac;
    }
    ctx->pc = 0x1640A4u;
    SET_GPR_U32(ctx, 31, 0x1640ACu);
    ctx->pc = 0x1640A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640A4u;
    // 0x1640a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x1640ACu;
label_1640ac:
    // 0x1640ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_1640b0:
    if (ctx->pc == 0x1640B0u) {
        ctx->pc = 0x1640B4u;
        goto label_1640b4;
    }
    ctx->pc = 0x1640ACu;
    {
        const bool branch_taken_0x1640ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640ac) {
            ctx->pc = 0x1640D8u;
            goto label_1640d8;
        }
    }
    ctx->pc = 0x1640B4u;
label_1640b4:
    // 0x1640b4: 0x0  nop
    ctx->pc = 0x1640b4u;
    // NOP
label_1640b8:
    // 0x1640b8: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1640bc:
    // 0x1640bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1640c0:
    if (ctx->pc == 0x1640C0u) {
        ctx->pc = 0x1640C4u;
        goto label_1640c4;
    }
    ctx->pc = 0x1640BCu;
    {
        const bool branch_taken_0x1640bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640bc) {
            ctx->pc = 0x1640D8u;
            goto label_1640d8;
        }
    }
    ctx->pc = 0x1640C4u;
label_1640c4:
    // 0x1640c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1640c8:
    // 0x1640c8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1640c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1640cc:
    // 0x1640cc: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1640d0:
    // 0x1640d0: 0x40f809  jalr        $v0
label_1640d4:
    if (ctx->pc == 0x1640D4u) {
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1640D8u;
        goto label_1640d8;
    }
    ctx->pc = 0x1640D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1640D8u);
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1640D0u, 0x1640D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1640D8u;
label_1640d8:
    // 0x1640d8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1640dc:
    // 0x1640dc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_1640e0:
    if (ctx->pc == 0x1640E0u) {
        ctx->pc = 0x1640E4u;
        goto label_1640e4;
    }
    ctx->pc = 0x1640DCu;
    {
        const bool branch_taken_0x1640dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1640dc) {
            ctx->pc = 0x164094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164094;
        }
    }
    ctx->pc = 0x1640E4u;
label_1640e4:
    // 0x1640e4: 0x0  nop
    ctx->pc = 0x1640e4u;
    // NOP
label_1640e8:
    // 0x1640e8: 0x8f908674  lw          $s0, -0x798C($gp)
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
label_1640ec:
    // 0x1640ec: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1640f0:
    if (ctx->pc == 0x1640F0u) {
        ctx->pc = 0x1640F4u;
        goto label_1640f4;
    }
    ctx->pc = 0x1640ECu;
    {
        const bool branch_taken_0x1640ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640ec) {
            ctx->pc = 0x164144u;
            goto label_164144;
        }
    }
    ctx->pc = 0x1640F4u;
label_1640f4:
    // 0x1640f4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1640f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1640f8:
    // 0x1640f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1640f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1640fc:
    // 0x1640fc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164100:
    if (ctx->pc == 0x164100u) {
        ctx->pc = 0x164104u;
        goto label_164104;
    }
    ctx->pc = 0x1640FCu;
    {
        const bool branch_taken_0x1640fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1640fc) {
            ctx->pc = 0x164114u;
            goto label_164114;
        }
    }
    ctx->pc = 0x164104u;
label_164104:
    // 0x164104: 0xc0591f8  jal         func_1647E0
label_164108:
    if (ctx->pc == 0x164108u) {
        ctx->pc = 0x164108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164104u;
        // 0x164108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16410Cu;
        goto label_16410c;
    }
    ctx->pc = 0x164104u;
    SET_GPR_U32(ctx, 31, 0x16410Cu);
    ctx->pc = 0x164108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164104u;
    // 0x164108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x16410Cu;
label_16410c:
    // 0x16410c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164110:
    if (ctx->pc == 0x164110u) {
        ctx->pc = 0x164114u;
        goto label_164114;
    }
    ctx->pc = 0x16410Cu;
    {
        const bool branch_taken_0x16410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16410c) {
            ctx->pc = 0x164138u;
            goto label_164138;
        }
    }
    ctx->pc = 0x164114u;
label_164114:
    // 0x164114: 0x0  nop
    ctx->pc = 0x164114u;
    // NOP
label_164118:
    // 0x164118: 0x8e020dd8  lw          $v0, 0xDD8($s0)
    ctx->pc = 0x164118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3544)));
label_16411c:
    // 0x16411c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164120:
    if (ctx->pc == 0x164120u) {
        ctx->pc = 0x164124u;
        goto label_164124;
    }
    ctx->pc = 0x16411Cu;
    {
        const bool branch_taken_0x16411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16411c) {
            ctx->pc = 0x164138u;
            goto label_164138;
        }
    }
    ctx->pc = 0x164124u;
label_164124:
    // 0x164124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164128:
    // 0x164128: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16412c:
    // 0x16412c: 0x8e020dd8  lw          $v0, 0xDD8($s0)
    ctx->pc = 0x16412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3544)));
label_164130:
    // 0x164130: 0x40f809  jalr        $v0
label_164134:
    if (ctx->pc == 0x164134u) {
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164138u;
        goto label_164138;
    }
    ctx->pc = 0x164130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164138u);
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164130u, 0x164138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164138u;
label_164138:
    // 0x164138: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16413c:
    // 0x16413c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164140:
    if (ctx->pc == 0x164140u) {
        ctx->pc = 0x164144u;
        goto label_164144;
    }
    ctx->pc = 0x16413Cu;
    {
        const bool branch_taken_0x16413c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16413c) {
            ctx->pc = 0x1640F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1640f4;
        }
    }
    ctx->pc = 0x164144u;
label_164144:
    // 0x164144: 0x0  nop
    ctx->pc = 0x164144u;
    // NOP
label_164148:
    // 0x164148: 0x8f908668  lw          $s0, -0x7998($gp)
    ctx->pc = 0x164148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_16414c:
    // 0x16414c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164150:
    if (ctx->pc == 0x164150u) {
        ctx->pc = 0x164154u;
        goto label_164154;
    }
    ctx->pc = 0x16414Cu;
    {
        const bool branch_taken_0x16414c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16414c) {
            ctx->pc = 0x1641A4u;
            goto label_1641a4;
        }
    }
    ctx->pc = 0x164154u;
label_164154:
    // 0x164154: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164158:
    // 0x164158: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16415c:
    // 0x16415c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164160:
    if (ctx->pc == 0x164160u) {
        ctx->pc = 0x164164u;
        goto label_164164;
    }
    ctx->pc = 0x16415Cu;
    {
        const bool branch_taken_0x16415c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16415c) {
            ctx->pc = 0x164174u;
            goto label_164174;
        }
    }
    ctx->pc = 0x164164u;
label_164164:
    // 0x164164: 0xc0591f8  jal         func_1647E0
label_164168:
    if (ctx->pc == 0x164168u) {
        ctx->pc = 0x164168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164164u;
        // 0x164168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16416Cu;
        goto label_16416c;
    }
    ctx->pc = 0x164164u;
    SET_GPR_U32(ctx, 31, 0x16416Cu);
    ctx->pc = 0x164168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164164u;
    // 0x164168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x16416Cu;
label_16416c:
    // 0x16416c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164170:
    if (ctx->pc == 0x164170u) {
        ctx->pc = 0x164174u;
        goto label_164174;
    }
    ctx->pc = 0x16416Cu;
    {
        const bool branch_taken_0x16416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16416c) {
            ctx->pc = 0x164198u;
            goto label_164198;
        }
    }
    ctx->pc = 0x164174u;
label_164174:
    // 0x164174: 0x0  nop
    ctx->pc = 0x164174u;
    // NOP
label_164178:
    // 0x164178: 0x8e021998  lw          $v0, 0x1998($s0)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6552)));
label_16417c:
    // 0x16417c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164180:
    if (ctx->pc == 0x164180u) {
        ctx->pc = 0x164184u;
        goto label_164184;
    }
    ctx->pc = 0x16417Cu;
    {
        const bool branch_taken_0x16417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16417c) {
            ctx->pc = 0x164198u;
            goto label_164198;
        }
    }
    ctx->pc = 0x164184u;
label_164184:
    // 0x164184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164188:
    // 0x164188: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16418c:
    // 0x16418c: 0x8e021998  lw          $v0, 0x1998($s0)
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6552)));
label_164190:
    // 0x164190: 0x40f809  jalr        $v0
label_164194:
    if (ctx->pc == 0x164194u) {
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164198u;
        goto label_164198;
    }
    ctx->pc = 0x164190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164198u);
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164190u, 0x164198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164198u;
label_164198:
    // 0x164198: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16419c:
    // 0x16419c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_1641a0:
    if (ctx->pc == 0x1641A0u) {
        ctx->pc = 0x1641A4u;
        goto label_1641a4;
    }
    ctx->pc = 0x16419Cu;
    {
        const bool branch_taken_0x16419c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16419c) {
            ctx->pc = 0x164154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164154;
        }
    }
    ctx->pc = 0x1641A4u;
label_1641a4:
    // 0x1641a4: 0x0  nop
    ctx->pc = 0x1641a4u;
    // NOP
label_1641a8:
    // 0x1641a8: 0x8f908650  lw          $s0, -0x79B0($gp)
    ctx->pc = 0x1641a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
label_1641ac:
    // 0x1641ac: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1641b0:
    if (ctx->pc == 0x1641B0u) {
        ctx->pc = 0x1641B4u;
        goto label_1641b4;
    }
    ctx->pc = 0x1641ACu;
    {
        const bool branch_taken_0x1641ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641ac) {
            ctx->pc = 0x164204u;
            goto label_164204;
        }
    }
    ctx->pc = 0x1641B4u;
label_1641b4:
    // 0x1641b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1641b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1641b8:
    // 0x1641b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1641bc:
    // 0x1641bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1641c0:
    if (ctx->pc == 0x1641C0u) {
        ctx->pc = 0x1641C4u;
        goto label_1641c4;
    }
    ctx->pc = 0x1641BCu;
    {
        const bool branch_taken_0x1641bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1641bc) {
            ctx->pc = 0x1641D4u;
            goto label_1641d4;
        }
    }
    ctx->pc = 0x1641C4u;
label_1641c4:
    // 0x1641c4: 0xc0591f8  jal         func_1647E0
label_1641c8:
    if (ctx->pc == 0x1641C8u) {
        ctx->pc = 0x1641C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641C4u;
        // 0x1641c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641CCu;
        goto label_1641cc;
    }
    ctx->pc = 0x1641C4u;
    SET_GPR_U32(ctx, 31, 0x1641CCu);
    ctx->pc = 0x1641C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641C4u;
    // 0x1641c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x1641CCu;
label_1641cc:
    // 0x1641cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1641d0:
    if (ctx->pc == 0x1641D0u) {
        ctx->pc = 0x1641D4u;
        goto label_1641d4;
    }
    ctx->pc = 0x1641CCu;
    {
        const bool branch_taken_0x1641cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641cc) {
            ctx->pc = 0x1641F8u;
            goto label_1641f8;
        }
    }
    ctx->pc = 0x1641D4u;
label_1641d4:
    // 0x1641d4: 0x0  nop
    ctx->pc = 0x1641d4u;
    // NOP
label_1641d8:
    // 0x1641d8: 0x8e021558  lw          $v0, 0x1558($s0)
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_1641dc:
    // 0x1641dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1641e0:
    if (ctx->pc == 0x1641E0u) {
        ctx->pc = 0x1641E4u;
        goto label_1641e4;
    }
    ctx->pc = 0x1641DCu;
    {
        const bool branch_taken_0x1641dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641dc) {
            ctx->pc = 0x1641F8u;
            goto label_1641f8;
        }
    }
    ctx->pc = 0x1641E4u;
label_1641e4:
    // 0x1641e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1641e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1641e8:
    // 0x1641e8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1641e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1641ec:
    // 0x1641ec: 0x8e021558  lw          $v0, 0x1558($s0)
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_1641f0:
    // 0x1641f0: 0x40f809  jalr        $v0
label_1641f4:
    if (ctx->pc == 0x1641F4u) {
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1641F8u;
        goto label_1641f8;
    }
    ctx->pc = 0x1641F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1641F8u);
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1641F0u, 0x1641F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1641F8u;
label_1641f8:
    // 0x1641f8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1641fc:
    // 0x1641fc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164200:
    if (ctx->pc == 0x164200u) {
        ctx->pc = 0x164204u;
        goto label_164204;
    }
    ctx->pc = 0x1641FCu;
    {
        const bool branch_taken_0x1641fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1641fc) {
            ctx->pc = 0x1641B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1641b4;
        }
    }
    ctx->pc = 0x164204u;
label_164204:
    // 0x164204: 0x0  nop
    ctx->pc = 0x164204u;
    // NOP
label_164208:
    // 0x164208: 0x8f908680  lw          $s0, -0x7980($gp)
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
label_16420c:
    // 0x16420c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_164210:
    if (ctx->pc == 0x164210u) {
        ctx->pc = 0x164214u;
        goto label_164214;
    }
    ctx->pc = 0x16420Cu;
    {
        const bool branch_taken_0x16420c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16420c) {
            ctx->pc = 0x164264u;
            goto label_164264;
        }
    }
    ctx->pc = 0x164214u;
label_164214:
    // 0x164214: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x164214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_164218:
    // 0x164218: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16421c:
    // 0x16421c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_164220:
    if (ctx->pc == 0x164220u) {
        ctx->pc = 0x164224u;
        goto label_164224;
    }
    ctx->pc = 0x16421Cu;
    {
        const bool branch_taken_0x16421c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16421c) {
            ctx->pc = 0x164234u;
            goto label_164234;
        }
    }
    ctx->pc = 0x164224u;
label_164224:
    // 0x164224: 0xc0591f8  jal         func_1647E0
label_164228:
    if (ctx->pc == 0x164228u) {
        ctx->pc = 0x164228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164224u;
        // 0x164228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16422Cu;
        goto label_16422c;
    }
    ctx->pc = 0x164224u;
    SET_GPR_U32(ctx, 31, 0x16422Cu);
    ctx->pc = 0x164228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164224u;
    // 0x164228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    { ctx->pc = 0x1647e0; return; }
    ctx->pc = 0x16422Cu;
label_16422c:
    // 0x16422c: 0x1000000a  b           . + 4 + (0xA << 2)
label_164230:
    if (ctx->pc == 0x164230u) {
        ctx->pc = 0x164234u;
        goto label_164234;
    }
    ctx->pc = 0x16422Cu;
    {
        const bool branch_taken_0x16422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16422c) {
            ctx->pc = 0x164258u;
            goto label_164258;
        }
    }
    ctx->pc = 0x164234u;
label_164234:
    // 0x164234: 0x0  nop
    ctx->pc = 0x164234u;
    // NOP
label_164238:
    // 0x164238: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x164238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_16423c:
    // 0x16423c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164240:
    if (ctx->pc == 0x164240u) {
        ctx->pc = 0x164244u;
        goto label_164244;
    }
    ctx->pc = 0x16423Cu;
    {
        const bool branch_taken_0x16423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16423c) {
            ctx->pc = 0x164258u;
            goto label_164258;
        }
    }
    ctx->pc = 0x164244u;
label_164244:
    // 0x164244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164248:
    // 0x164248: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16424c:
    // 0x16424c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x16424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_164250:
    // 0x164250: 0x40f809  jalr        $v0
label_164254:
    if (ctx->pc == 0x164254u) {
        ctx->pc = 0x164254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164250u;
        // 0x164254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164258u;
        goto label_164258;
    }
    ctx->pc = 0x164250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164258u);
        ctx->pc = 0x164254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164250u;
        // 0x164254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164250u, 0x164258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164258u;
label_164258:
    // 0x164258: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16425c:
    // 0x16425c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_164260:
    if (ctx->pc == 0x164260u) {
        ctx->pc = 0x164264u;
        goto label_164264;
    }
    ctx->pc = 0x16425Cu;
    {
        const bool branch_taken_0x16425c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16425c) {
            ctx->pc = 0x164214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164214;
        }
    }
    ctx->pc = 0x164264u;
label_164264:
    // 0x164264: 0x0  nop
    ctx->pc = 0x164264u;
    // NOP
label_164268:
    // 0x164268: 0xc0713d4  jal         func_1C4F50
label_16426c:
    if (ctx->pc == 0x16426Cu) {
        ctx->pc = 0x164270u;
        goto label_164270;
    }
    ctx->pc = 0x164268u;
    SET_GPR_U32(ctx, 31, 0x164270u);
    ctx->pc = 0x1C4F50u;
    { ctx->pc = 0x1c4f50; return; }
    ctx->pc = 0x164270u;
label_164270:
    // 0x164270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_164274:
    // 0x164274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164278:
    // 0x164278: 0x3e00008  jr          $ra
label_16427c:
    if (ctx->pc == 0x16427Cu) {
        ctx->pc = 0x16427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164278u;
        // 0x16427c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164280u;
        goto label_164280;
    }
    ctx->pc = 0x164278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164278u;
        // 0x16427c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164280u;
label_164280:
    // 0x164280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_164284:
    // 0x164284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164288:
    // 0x164288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16428c:
    // 0x16428c: 0x8f84869c  lw          $a0, -0x7964($gp)
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
label_164290:
    // 0x164290: 0xc08e9ac  jal         func_23A6B0
label_164294:
    if (ctx->pc == 0x164294u) {
        ctx->pc = 0x164294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164290u;
        // 0x164294: 0x24066720  addiu       $a2, $zero, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164298u;
        goto label_164298;
    }
    ctx->pc = 0x164290u;
    SET_GPR_U32(ctx, 31, 0x164298u);
    ctx->pc = 0x164294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164290u;
    // 0x164294: 0x24066720  addiu       $a2, $zero, 0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x164298u;
label_164298:
    // 0x164298: 0x8f848690  lw          $a0, -0x7970($gp)
    ctx->pc = 0x164298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
label_16429c:
    // 0x16429c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1642a0:
    // 0x1642a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1642a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1642a4:
    // 0x1642a4: 0x34460740  ori         $a2, $v0, 0x740
    ctx->pc = 0x1642a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1856);
label_1642a8:
    // 0x1642a8: 0xaf808698  sw          $zero, -0x7968($gp)
    ctx->pc = 0x1642a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 0));
label_1642ac:
    // 0x1642ac: 0xc08e9ac  jal         func_23A6B0
label_1642b0:
    if (ctx->pc == 0x1642B0u) {
        ctx->pc = 0x1642B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642ACu;
        // 0x1642b0: 0xaf808694  sw          $zero, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1642B4u;
        goto label_1642b4;
    }
    ctx->pc = 0x1642ACu;
    SET_GPR_U32(ctx, 31, 0x1642B4u);
    ctx->pc = 0x1642B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642ACu;
    // 0x1642b0: 0xaf808694  sw          $zero, -0x796C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1642B4u;
label_1642b4:
    // 0x1642b4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1642b8:
    // 0x1642b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1642b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1642bc:
    // 0x1642bc: 0x24843a00  addiu       $a0, $a0, 0x3A00
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14848));
label_1642c0:
    // 0x1642c0: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_1642c4:
    // 0x1642c4: 0xaf80868c  sw          $zero, -0x7974($gp)
    ctx->pc = 0x1642c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 0));
label_1642c8:
    // 0x1642c8: 0xc08e9ac  jal         func_23A6B0
label_1642cc:
    if (ctx->pc == 0x1642CCu) {
        ctx->pc = 0x1642CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642C8u;
        // 0x1642cc: 0xaf808688  sw          $zero, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1642D0u;
        goto label_1642d0;
    }
    ctx->pc = 0x1642C8u;
    SET_GPR_U32(ctx, 31, 0x1642D0u);
    ctx->pc = 0x1642CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642C8u;
    // 0x1642cc: 0xaf808688  sw          $zero, -0x7978($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1642D0u;
label_1642d0:
    // 0x1642d0: 0x8f848678  lw          $a0, -0x7988($gp)
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_1642d4:
    // 0x1642d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1642d8:
    // 0x1642d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1642d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1642dc:
    // 0x1642dc: 0xc08e9ac  jal         func_23A6B0
label_1642e0:
    if (ctx->pc == 0x1642E0u) {
        ctx->pc = 0x1642E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642DCu;
        // 0x1642e0: 0x3446a040  ori         $a2, $v0, 0xA040 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1642E4u;
        goto label_1642e4;
    }
    ctx->pc = 0x1642DCu;
    SET_GPR_U32(ctx, 31, 0x1642E4u);
    ctx->pc = 0x1642E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642DCu;
    // 0x1642e0: 0x3446a040  ori         $a2, $v0, 0xA040 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1642E4u;
label_1642e4:
    // 0x1642e4: 0x8f848660  lw          $a0, -0x79A0($gp)
    ctx->pc = 0x1642e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
label_1642e8:
    // 0x1642e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1642e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1642ec:
    // 0x1642ec: 0x24065780  addiu       $a2, $zero, 0x5780
    ctx->pc = 0x1642ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
label_1642f0:
    // 0x1642f0: 0xaf808674  sw          $zero, -0x798C($gp)
    ctx->pc = 0x1642f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 0));
label_1642f4:
    // 0x1642f4: 0xc08e9ac  jal         func_23A6B0
label_1642f8:
    if (ctx->pc == 0x1642F8u) {
        ctx->pc = 0x1642F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642F4u;
        // 0x1642f8: 0xaf808670  sw          $zero, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1642FCu;
        goto label_1642fc;
    }
    ctx->pc = 0x1642F4u;
    SET_GPR_U32(ctx, 31, 0x1642FCu);
    ctx->pc = 0x1642F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642F4u;
    // 0x1642f8: 0xaf808670  sw          $zero, -0x7990($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1642FCu;
label_1642fc:
    // 0x1642fc: 0x8f848684  lw          $a0, -0x797C($gp)
    ctx->pc = 0x1642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
label_164300:
    // 0x164300: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x164300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_164304:
    // 0x164304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164308:
    // 0x164308: 0x34460e80  ori         $a2, $v0, 0xE80
    ctx->pc = 0x164308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3712);
label_16430c:
    // 0x16430c: 0xaf80865c  sw          $zero, -0x79A4($gp)
    ctx->pc = 0x16430cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 0));
label_164310:
    // 0x164310: 0xc08e9ac  jal         func_23A6B0
label_164314:
    if (ctx->pc == 0x164314u) {
        ctx->pc = 0x164314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164310u;
        // 0x164314: 0xaf808658  sw          $zero, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164318u;
        goto label_164318;
    }
    ctx->pc = 0x164310u;
    SET_GPR_U32(ctx, 31, 0x164318u);
    ctx->pc = 0x164314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164310u;
    // 0x164314: 0xaf808658  sw          $zero, -0x79A8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x164318u;
label_164318:
    // 0x164318: 0x8f84866c  lw          $a0, -0x7994($gp)
    ctx->pc = 0x164318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
label_16431c:
    // 0x16431c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x16431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_164320:
    // 0x164320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164324:
    // 0x164324: 0x34460140  ori         $a2, $v0, 0x140
    ctx->pc = 0x164324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_164328:
    // 0x164328: 0xaf808680  sw          $zero, -0x7980($gp)
    ctx->pc = 0x164328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 0));
label_16432c:
    // 0x16432c: 0xc08e9ac  jal         func_23A6B0
label_164330:
    if (ctx->pc == 0x164330u) {
        ctx->pc = 0x164330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16432Cu;
        // 0x164330: 0xaf80867c  sw          $zero, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164334u;
        goto label_164334;
    }
    ctx->pc = 0x16432Cu;
    SET_GPR_U32(ctx, 31, 0x164334u);
    ctx->pc = 0x164330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16432Cu;
    // 0x164330: 0xaf80867c  sw          $zero, -0x7984($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x164334u;
label_164334:
    // 0x164334: 0x8f848654  lw          $a0, -0x79AC($gp)
    ctx->pc = 0x164334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
label_164338:
    // 0x164338: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_16433c:
    // 0x16433c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16433cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164340:
    // 0x164340: 0x34462cc0  ori         $a2, $v0, 0x2CC0
    ctx->pc = 0x164340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11456);
label_164344:
    // 0x164344: 0xaf808668  sw          $zero, -0x7998($gp)
    ctx->pc = 0x164344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 0));
label_164348:
    // 0x164348: 0xc08e9ac  jal         func_23A6B0
label_16434c:
    if (ctx->pc == 0x16434Cu) {
        ctx->pc = 0x16434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164348u;
        // 0x16434c: 0xaf808664  sw          $zero, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164350u;
        goto label_164350;
    }
    ctx->pc = 0x164348u;
    SET_GPR_U32(ctx, 31, 0x164350u);
    ctx->pc = 0x16434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164348u;
    // 0x16434c: 0xaf808664  sw          $zero, -0x799C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x164350u;
label_164350:
    // 0x164350: 0xaf808650  sw          $zero, -0x79B0($gp)
    ctx->pc = 0x164350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 0));
label_164354:
    // 0x164354: 0xc07214c  jal         func_1C8530
label_164358:
    if (ctx->pc == 0x164358u) {
        ctx->pc = 0x164358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164354u;
        // 0x164358: 0xaf80864c  sw          $zero, -0x79B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16435Cu;
        goto label_16435c;
    }
    ctx->pc = 0x164354u;
    SET_GPR_U32(ctx, 31, 0x16435Cu);
    ctx->pc = 0x164358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164354u;
    // 0x164358: 0xaf80864c  sw          $zero, -0x79B4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8530u;
    { ctx->pc = 0x1c8530; return; }
    ctx->pc = 0x16435Cu;
label_16435c:
    // 0x16435c: 0xc0713ec  jal         func_1C4FB0
    ctx->pc = 0x164360u;
    return;
}
