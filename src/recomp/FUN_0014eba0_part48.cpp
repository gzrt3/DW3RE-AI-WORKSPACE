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


void FUN_0014eba0_part48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x165ad0u: goto label_165ad0;
        case 0x165ad4u: goto label_165ad4;
        case 0x165ad8u: goto label_165ad8;
        case 0x165adcu: goto label_165adc;
        case 0x165ae0u: goto label_165ae0;
        case 0x165ae4u: goto label_165ae4;
        case 0x165ae8u: goto label_165ae8;
        case 0x165aecu: goto label_165aec;
        case 0x165af0u: goto label_165af0;
        case 0x165af4u: goto label_165af4;
        case 0x165af8u: goto label_165af8;
        case 0x165afcu: goto label_165afc;
        case 0x165b00u: goto label_165b00;
        case 0x165b04u: goto label_165b04;
        case 0x165b08u: goto label_165b08;
        case 0x165b0cu: goto label_165b0c;
        case 0x165b10u: goto label_165b10;
        case 0x165b14u: goto label_165b14;
        case 0x165b18u: goto label_165b18;
        case 0x165b1cu: goto label_165b1c;
        case 0x165b20u: goto label_165b20;
        case 0x165b24u: goto label_165b24;
        case 0x165b28u: goto label_165b28;
        case 0x165b2cu: goto label_165b2c;
        case 0x165b30u: goto label_165b30;
        case 0x165b34u: goto label_165b34;
        case 0x165b38u: goto label_165b38;
        case 0x165b3cu: goto label_165b3c;
        case 0x165b40u: goto label_165b40;
        case 0x165b44u: goto label_165b44;
        case 0x165b48u: goto label_165b48;
        case 0x165b4cu: goto label_165b4c;
        case 0x165b50u: goto label_165b50;
        case 0x165b54u: goto label_165b54;
        case 0x165b58u: goto label_165b58;
        case 0x165b5cu: goto label_165b5c;
        case 0x165b60u: goto label_165b60;
        case 0x165b64u: goto label_165b64;
        case 0x165b68u: goto label_165b68;
        case 0x165b6cu: goto label_165b6c;
        case 0x165b70u: goto label_165b70;
        case 0x165b74u: goto label_165b74;
        case 0x165b78u: goto label_165b78;
        case 0x165b7cu: goto label_165b7c;
        case 0x165b80u: goto label_165b80;
        case 0x165b84u: goto label_165b84;
        case 0x165b88u: goto label_165b88;
        case 0x165b8cu: goto label_165b8c;
        case 0x165b90u: goto label_165b90;
        case 0x165b94u: goto label_165b94;
        case 0x165b98u: goto label_165b98;
        case 0x165b9cu: goto label_165b9c;
        case 0x165ba0u: goto label_165ba0;
        case 0x165ba4u: goto label_165ba4;
        case 0x165ba8u: goto label_165ba8;
        case 0x165bacu: goto label_165bac;
        case 0x165bb0u: goto label_165bb0;
        case 0x165bb4u: goto label_165bb4;
        case 0x165bb8u: goto label_165bb8;
        case 0x165bbcu: goto label_165bbc;
        case 0x165bc0u: goto label_165bc0;
        case 0x165bc4u: goto label_165bc4;
        case 0x165bc8u: goto label_165bc8;
        case 0x165bccu: goto label_165bcc;
        case 0x165bd0u: goto label_165bd0;
        case 0x165bd4u: goto label_165bd4;
        case 0x165bd8u: goto label_165bd8;
        case 0x165bdcu: goto label_165bdc;
        case 0x165be0u: goto label_165be0;
        case 0x165be4u: goto label_165be4;
        case 0x165be8u: goto label_165be8;
        case 0x165becu: goto label_165bec;
        case 0x165bf0u: goto label_165bf0;
        case 0x165bf4u: goto label_165bf4;
        case 0x165bf8u: goto label_165bf8;
        case 0x165bfcu: goto label_165bfc;
        case 0x165c00u: goto label_165c00;
        case 0x165c04u: goto label_165c04;
        case 0x165c08u: goto label_165c08;
        case 0x165c0cu: goto label_165c0c;
        case 0x165c10u: goto label_165c10;
        case 0x165c14u: goto label_165c14;
        case 0x165c18u: goto label_165c18;
        case 0x165c1cu: goto label_165c1c;
        case 0x165c20u: goto label_165c20;
        case 0x165c24u: goto label_165c24;
        case 0x165c28u: goto label_165c28;
        case 0x165c2cu: goto label_165c2c;
        case 0x165c30u: goto label_165c30;
        case 0x165c34u: goto label_165c34;
        case 0x165c38u: goto label_165c38;
        case 0x165c3cu: goto label_165c3c;
        case 0x165c40u: goto label_165c40;
        case 0x165c44u: goto label_165c44;
        case 0x165c48u: goto label_165c48;
        case 0x165c4cu: goto label_165c4c;
        case 0x165c50u: goto label_165c50;
        case 0x165c54u: goto label_165c54;
        case 0x165c58u: goto label_165c58;
        case 0x165c5cu: goto label_165c5c;
        case 0x165c60u: goto label_165c60;
        case 0x165c64u: goto label_165c64;
        case 0x165c68u: goto label_165c68;
        case 0x165c6cu: goto label_165c6c;
        case 0x165c70u: goto label_165c70;
        case 0x165c74u: goto label_165c74;
        case 0x165c78u: goto label_165c78;
        case 0x165c7cu: goto label_165c7c;
        case 0x165c80u: goto label_165c80;
        case 0x165c84u: goto label_165c84;
        case 0x165c88u: goto label_165c88;
        case 0x165c8cu: goto label_165c8c;
        case 0x165c90u: goto label_165c90;
        case 0x165c94u: goto label_165c94;
        case 0x165c98u: goto label_165c98;
        case 0x165c9cu: goto label_165c9c;
        case 0x165ca0u: goto label_165ca0;
        case 0x165ca4u: goto label_165ca4;
        case 0x165ca8u: goto label_165ca8;
        case 0x165cacu: goto label_165cac;
        case 0x165cb0u: goto label_165cb0;
        case 0x165cb4u: goto label_165cb4;
        case 0x165cb8u: goto label_165cb8;
        case 0x165cbcu: goto label_165cbc;
        case 0x165cc0u: goto label_165cc0;
        case 0x165cc4u: goto label_165cc4;
        case 0x165cc8u: goto label_165cc8;
        case 0x165cccu: goto label_165ccc;
        case 0x165cd0u: goto label_165cd0;
        case 0x165cd4u: goto label_165cd4;
        case 0x165cd8u: goto label_165cd8;
        case 0x165cdcu: goto label_165cdc;
        case 0x165ce0u: goto label_165ce0;
        case 0x165ce4u: goto label_165ce4;
        case 0x165ce8u: goto label_165ce8;
        case 0x165cecu: goto label_165cec;
        case 0x165cf0u: goto label_165cf0;
        case 0x165cf4u: goto label_165cf4;
        case 0x165cf8u: goto label_165cf8;
        case 0x165cfcu: goto label_165cfc;
        case 0x165d00u: goto label_165d00;
        case 0x165d04u: goto label_165d04;
        case 0x165d08u: goto label_165d08;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d10u: goto label_165d10;
        case 0x165d14u: goto label_165d14;
        case 0x165d18u: goto label_165d18;
        case 0x165d1cu: goto label_165d1c;
        case 0x165d20u: goto label_165d20;
        case 0x165d24u: goto label_165d24;
        case 0x165d28u: goto label_165d28;
        case 0x165d2cu: goto label_165d2c;
        case 0x165d30u: goto label_165d30;
        case 0x165d34u: goto label_165d34;
        case 0x165d38u: goto label_165d38;
        case 0x165d3cu: goto label_165d3c;
        case 0x165d40u: goto label_165d40;
        case 0x165d44u: goto label_165d44;
        case 0x165d48u: goto label_165d48;
        case 0x165d4cu: goto label_165d4c;
        case 0x165d50u: goto label_165d50;
        case 0x165d54u: goto label_165d54;
        case 0x165d58u: goto label_165d58;
        case 0x165d5cu: goto label_165d5c;
        case 0x165d60u: goto label_165d60;
        case 0x165d64u: goto label_165d64;
        case 0x165d68u: goto label_165d68;
        case 0x165d6cu: goto label_165d6c;
        case 0x165d70u: goto label_165d70;
        case 0x165d74u: goto label_165d74;
        case 0x165d78u: goto label_165d78;
        case 0x165d7cu: goto label_165d7c;
        case 0x165d80u: goto label_165d80;
        case 0x165d84u: goto label_165d84;
        case 0x165d88u: goto label_165d88;
        case 0x165d8cu: goto label_165d8c;
        case 0x165d90u: goto label_165d90;
        case 0x165d94u: goto label_165d94;
        case 0x165d98u: goto label_165d98;
        case 0x165d9cu: goto label_165d9c;
        case 0x165da0u: goto label_165da0;
        case 0x165da4u: goto label_165da4;
        case 0x165da8u: goto label_165da8;
        case 0x165dacu: goto label_165dac;
        case 0x165db0u: goto label_165db0;
        case 0x165db4u: goto label_165db4;
        case 0x165db8u: goto label_165db8;
        case 0x165dbcu: goto label_165dbc;
        case 0x165dc0u: goto label_165dc0;
        case 0x165dc4u: goto label_165dc4;
        case 0x165dc8u: goto label_165dc8;
        case 0x165dccu: goto label_165dcc;
        case 0x165dd0u: goto label_165dd0;
        case 0x165dd4u: goto label_165dd4;
        case 0x165dd8u: goto label_165dd8;
        case 0x165ddcu: goto label_165ddc;
        case 0x165de0u: goto label_165de0;
        case 0x165de4u: goto label_165de4;
        case 0x165de8u: goto label_165de8;
        case 0x165decu: goto label_165dec;
        case 0x165df0u: goto label_165df0;
        case 0x165df4u: goto label_165df4;
        case 0x165df8u: goto label_165df8;
        case 0x165dfcu: goto label_165dfc;
        case 0x165e00u: goto label_165e00;
        case 0x165e04u: goto label_165e04;
        case 0x165e08u: goto label_165e08;
        case 0x165e0cu: goto label_165e0c;
        case 0x165e10u: goto label_165e10;
        case 0x165e14u: goto label_165e14;
        case 0x165e18u: goto label_165e18;
        case 0x165e1cu: goto label_165e1c;
        case 0x165e20u: goto label_165e20;
        case 0x165e24u: goto label_165e24;
        case 0x165e28u: goto label_165e28;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e30u: goto label_165e30;
        case 0x165e34u: goto label_165e34;
        case 0x165e38u: goto label_165e38;
        case 0x165e3cu: goto label_165e3c;
        case 0x165e40u: goto label_165e40;
        case 0x165e44u: goto label_165e44;
        case 0x165e48u: goto label_165e48;
        case 0x165e4cu: goto label_165e4c;
        case 0x165e50u: goto label_165e50;
        case 0x165e54u: goto label_165e54;
        case 0x165e58u: goto label_165e58;
        case 0x165e5cu: goto label_165e5c;
        case 0x165e60u: goto label_165e60;
        case 0x165e64u: goto label_165e64;
        case 0x165e68u: goto label_165e68;
        case 0x165e6cu: goto label_165e6c;
        case 0x165e70u: goto label_165e70;
        case 0x165e74u: goto label_165e74;
        case 0x165e78u: goto label_165e78;
        case 0x165e7cu: goto label_165e7c;
        case 0x165e80u: goto label_165e80;
        case 0x165e84u: goto label_165e84;
        case 0x165e88u: goto label_165e88;
        case 0x165e8cu: goto label_165e8c;
        case 0x165e90u: goto label_165e90;
        case 0x165e94u: goto label_165e94;
        case 0x165e98u: goto label_165e98;
        case 0x165e9cu: goto label_165e9c;
        case 0x165ea0u: goto label_165ea0;
        case 0x165ea4u: goto label_165ea4;
        case 0x165ea8u: goto label_165ea8;
        case 0x165eacu: goto label_165eac;
        case 0x165eb0u: goto label_165eb0;
        case 0x165eb4u: goto label_165eb4;
        case 0x165eb8u: goto label_165eb8;
        case 0x165ebcu: goto label_165ebc;
        case 0x165ec0u: goto label_165ec0;
        case 0x165ec4u: goto label_165ec4;
        case 0x165ec8u: goto label_165ec8;
        case 0x165eccu: goto label_165ecc;
        case 0x165ed0u: goto label_165ed0;
        case 0x165ed4u: goto label_165ed4;
        case 0x165ed8u: goto label_165ed8;
        case 0x165edcu: goto label_165edc;
        case 0x165ee0u: goto label_165ee0;
        case 0x165ee4u: goto label_165ee4;
        case 0x165ee8u: goto label_165ee8;
        case 0x165eecu: goto label_165eec;
        case 0x165ef0u: goto label_165ef0;
        case 0x165ef4u: goto label_165ef4;
        case 0x165ef8u: goto label_165ef8;
        case 0x165efcu: goto label_165efc;
        case 0x165f00u: goto label_165f00;
        case 0x165f04u: goto label_165f04;
        case 0x165f08u: goto label_165f08;
        case 0x165f0cu: goto label_165f0c;
        case 0x165f10u: goto label_165f10;
        case 0x165f14u: goto label_165f14;
        case 0x165f18u: goto label_165f18;
        case 0x165f1cu: goto label_165f1c;
        case 0x165f20u: goto label_165f20;
        case 0x165f24u: goto label_165f24;
        case 0x165f28u: goto label_165f28;
        case 0x165f2cu: goto label_165f2c;
        case 0x165f30u: goto label_165f30;
        case 0x165f34u: goto label_165f34;
        case 0x165f38u: goto label_165f38;
        case 0x165f3cu: goto label_165f3c;
        case 0x165f40u: goto label_165f40;
        case 0x165f44u: goto label_165f44;
        case 0x165f48u: goto label_165f48;
        case 0x165f4cu: goto label_165f4c;
        case 0x165f50u: goto label_165f50;
        case 0x165f54u: goto label_165f54;
        case 0x165f58u: goto label_165f58;
        case 0x165f5cu: goto label_165f5c;
        case 0x165f60u: goto label_165f60;
        case 0x165f64u: goto label_165f64;
        case 0x165f68u: goto label_165f68;
        case 0x165f6cu: goto label_165f6c;
        case 0x165f70u: goto label_165f70;
        case 0x165f74u: goto label_165f74;
        case 0x165f78u: goto label_165f78;
        case 0x165f7cu: goto label_165f7c;
        case 0x165f80u: goto label_165f80;
        case 0x165f84u: goto label_165f84;
        case 0x165f88u: goto label_165f88;
        case 0x165f8cu: goto label_165f8c;
        case 0x165f90u: goto label_165f90;
        case 0x165f94u: goto label_165f94;
        case 0x165f98u: goto label_165f98;
        case 0x165f9cu: goto label_165f9c;
        case 0x165fa0u: goto label_165fa0;
        case 0x165fa4u: goto label_165fa4;
        case 0x165fa8u: goto label_165fa8;
        case 0x165facu: goto label_165fac;
        case 0x165fb0u: goto label_165fb0;
        case 0x165fb4u: goto label_165fb4;
        case 0x165fb8u: goto label_165fb8;
        case 0x165fbcu: goto label_165fbc;
        case 0x165fc0u: goto label_165fc0;
        case 0x165fc4u: goto label_165fc4;
        case 0x165fc8u: goto label_165fc8;
        case 0x165fccu: goto label_165fcc;
        case 0x165fd0u: goto label_165fd0;
        case 0x165fd4u: goto label_165fd4;
        case 0x165fd8u: goto label_165fd8;
        case 0x165fdcu: goto label_165fdc;
        case 0x165fe0u: goto label_165fe0;
        case 0x165fe4u: goto label_165fe4;
        case 0x165fe8u: goto label_165fe8;
        case 0x165fecu: goto label_165fec;
        case 0x165ff0u: goto label_165ff0;
        case 0x165ff4u: goto label_165ff4;
        case 0x165ff8u: goto label_165ff8;
        case 0x165ffcu: goto label_165ffc;
        case 0x166000u: goto label_166000;
        case 0x166004u: goto label_166004;
        case 0x166008u: goto label_166008;
        case 0x16600cu: goto label_16600c;
        case 0x166010u: goto label_166010;
        case 0x166014u: goto label_166014;
        case 0x166018u: goto label_166018;
        case 0x16601cu: goto label_16601c;
        case 0x166020u: goto label_166020;
        case 0x166024u: goto label_166024;
        case 0x166028u: goto label_166028;
        case 0x16602cu: goto label_16602c;
        case 0x166030u: goto label_166030;
        case 0x166034u: goto label_166034;
        case 0x166038u: goto label_166038;
        case 0x16603cu: goto label_16603c;
        case 0x166040u: goto label_166040;
        case 0x166044u: goto label_166044;
        case 0x166048u: goto label_166048;
        case 0x16604cu: goto label_16604c;
        case 0x166050u: goto label_166050;
        case 0x166054u: goto label_166054;
        case 0x166058u: goto label_166058;
        case 0x16605cu: goto label_16605c;
        case 0x166060u: goto label_166060;
        case 0x166064u: goto label_166064;
        case 0x166068u: goto label_166068;
        case 0x16606cu: goto label_16606c;
        case 0x166070u: goto label_166070;
        case 0x166074u: goto label_166074;
        case 0x166078u: goto label_166078;
        case 0x16607cu: goto label_16607c;
        case 0x166080u: goto label_166080;
        case 0x166084u: goto label_166084;
        case 0x166088u: goto label_166088;
        case 0x16608cu: goto label_16608c;
        case 0x166090u: goto label_166090;
        case 0x166094u: goto label_166094;
        case 0x166098u: goto label_166098;
        case 0x16609cu: goto label_16609c;
        case 0x1660a0u: goto label_1660a0;
        case 0x1660a4u: goto label_1660a4;
        case 0x1660a8u: goto label_1660a8;
        case 0x1660acu: goto label_1660ac;
        case 0x1660b0u: goto label_1660b0;
        case 0x1660b4u: goto label_1660b4;
        case 0x1660b8u: goto label_1660b8;
        case 0x1660bcu: goto label_1660bc;
        case 0x1660c0u: goto label_1660c0;
        case 0x1660c4u: goto label_1660c4;
        case 0x1660c8u: goto label_1660c8;
        case 0x1660ccu: goto label_1660cc;
        case 0x1660d0u: goto label_1660d0;
        case 0x1660d4u: goto label_1660d4;
        case 0x1660d8u: goto label_1660d8;
        case 0x1660dcu: goto label_1660dc;
        case 0x1660e0u: goto label_1660e0;
        case 0x1660e4u: goto label_1660e4;
        case 0x1660e8u: goto label_1660e8;
        case 0x1660ecu: goto label_1660ec;
        case 0x1660f0u: goto label_1660f0;
        case 0x1660f4u: goto label_1660f4;
        case 0x1660f8u: goto label_1660f8;
        case 0x1660fcu: goto label_1660fc;
        case 0x166100u: goto label_166100;
        case 0x166104u: goto label_166104;
        case 0x166108u: goto label_166108;
        case 0x16610cu: goto label_16610c;
        case 0x166110u: goto label_166110;
        case 0x166114u: goto label_166114;
        case 0x166118u: goto label_166118;
        case 0x16611cu: goto label_16611c;
        case 0x166120u: goto label_166120;
        case 0x166124u: goto label_166124;
        case 0x166128u: goto label_166128;
        case 0x16612cu: goto label_16612c;
        case 0x166130u: goto label_166130;
        case 0x166134u: goto label_166134;
        case 0x166138u: goto label_166138;
        case 0x16613cu: goto label_16613c;
        case 0x166140u: goto label_166140;
        case 0x166144u: goto label_166144;
        case 0x166148u: goto label_166148;
        case 0x16614cu: goto label_16614c;
        case 0x166150u: goto label_166150;
        case 0x166154u: goto label_166154;
        case 0x166158u: goto label_166158;
        case 0x16615cu: goto label_16615c;
        case 0x166160u: goto label_166160;
        case 0x166164u: goto label_166164;
        case 0x166168u: goto label_166168;
        case 0x16616cu: goto label_16616c;
        case 0x166170u: goto label_166170;
        case 0x166174u: goto label_166174;
        case 0x166178u: goto label_166178;
        case 0x16617cu: goto label_16617c;
        case 0x166180u: goto label_166180;
        case 0x166184u: goto label_166184;
        case 0x166188u: goto label_166188;
        case 0x16618cu: goto label_16618c;
        case 0x166190u: goto label_166190;
        case 0x166194u: goto label_166194;
        case 0x166198u: goto label_166198;
        case 0x16619cu: goto label_16619c;
        case 0x1661a0u: goto label_1661a0;
        case 0x1661a4u: goto label_1661a4;
        case 0x1661a8u: goto label_1661a8;
        case 0x1661acu: goto label_1661ac;
        case 0x1661b0u: goto label_1661b0;
        case 0x1661b4u: goto label_1661b4;
        case 0x1661b8u: goto label_1661b8;
        case 0x1661bcu: goto label_1661bc;
        case 0x1661c0u: goto label_1661c0;
        case 0x1661c4u: goto label_1661c4;
        case 0x1661c8u: goto label_1661c8;
        case 0x1661ccu: goto label_1661cc;
        case 0x1661d0u: goto label_1661d0;
        case 0x1661d4u: goto label_1661d4;
        case 0x1661d8u: goto label_1661d8;
        case 0x1661dcu: goto label_1661dc;
        case 0x1661e0u: goto label_1661e0;
        case 0x1661e4u: goto label_1661e4;
        case 0x1661e8u: goto label_1661e8;
        case 0x1661ecu: goto label_1661ec;
        case 0x1661f0u: goto label_1661f0;
        case 0x1661f4u: goto label_1661f4;
        case 0x1661f8u: goto label_1661f8;
        case 0x1661fcu: goto label_1661fc;
        case 0x166200u: goto label_166200;
        case 0x166204u: goto label_166204;
        case 0x166208u: goto label_166208;
        case 0x16620cu: goto label_16620c;
        case 0x166210u: goto label_166210;
        case 0x166214u: goto label_166214;
        case 0x166218u: goto label_166218;
        case 0x16621cu: goto label_16621c;
        case 0x166220u: goto label_166220;
        case 0x166224u: goto label_166224;
        case 0x166228u: goto label_166228;
        case 0x16622cu: goto label_16622c;
        case 0x166230u: goto label_166230;
        case 0x166234u: goto label_166234;
        case 0x166238u: goto label_166238;
        case 0x16623cu: goto label_16623c;
        case 0x166240u: goto label_166240;
        case 0x166244u: goto label_166244;
        case 0x166248u: goto label_166248;
        case 0x16624cu: goto label_16624c;
        case 0x166250u: goto label_166250;
        case 0x166254u: goto label_166254;
        case 0x166258u: goto label_166258;
        case 0x16625cu: goto label_16625c;
        case 0x166260u: goto label_166260;
        case 0x166264u: goto label_166264;
        case 0x166268u: goto label_166268;
        case 0x16626cu: goto label_16626c;
        case 0x166270u: goto label_166270;
        case 0x166274u: goto label_166274;
        case 0x166278u: goto label_166278;
        case 0x16627cu: goto label_16627c;
        case 0x166280u: goto label_166280;
        case 0x166284u: goto label_166284;
        case 0x166288u: goto label_166288;
        case 0x16628cu: goto label_16628c;
        case 0x166290u: goto label_166290;
        case 0x166294u: goto label_166294;
        case 0x166298u: goto label_166298;
        case 0x16629cu: goto label_16629c;
        default: return;
    }

label_165ad0:
    // 0x165ad0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x165ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165ad4:
    // 0x165ad4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x165ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165ad8:
    // 0x165ad8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x165ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_165adc:
    // 0x165adc: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x165adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_165ae0:
    // 0x165ae0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_165ae4:
    // 0x165ae4: 0xa2270007  sb          $a3, 0x7($s1)
    ctx->pc = 0x165ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 7));
label_165ae8:
    // 0x165ae8: 0xa2240006  sb          $a0, 0x6($s1)
    ctx->pc = 0x165ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 4));
label_165aec:
    // 0x165aec: 0xa2340008  sb          $s4, 0x8($s1)
    ctx->pc = 0x165aecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 20));
label_165af0:
    // 0x165af0: 0x92270005  lbu         $a3, 0x5($s1)
    ctx->pc = 0x165af0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_165af4:
    // 0x165af4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_165af8:
    // 0x165af8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_165afc:
    // 0x165afc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x165afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_165b00:
    // 0x165b00: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x165b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_165b04:
    // 0x165b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_165b08:
    // 0x165b08: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x165b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_165b0c:
    // 0x165b0c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x165b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_165b10:
    // 0x165b10: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_165b14:
    // 0x165b14: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_165b18:
    // 0x165b18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_165b1c:
    // 0x165b1c: 0xc066e02  jal         func_19B808
label_165b20:
    if (ctx->pc == 0x165B20u) {
        ctx->pc = 0x165B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B1Cu;
        // 0x165b20: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B24u;
        goto label_165b24;
    }
    ctx->pc = 0x165B1Cu;
    SET_GPR_U32(ctx, 31, 0x165B24u);
    ctx->pc = 0x165B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B1Cu;
    // 0x165b20: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x165B24u;
label_165b24:
    // 0x165b24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_165b28:
    // 0x165b28: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x165b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_165b2c:
    // 0x165b2c: 0xc066e26  jal         func_19B898
label_165b30:
    if (ctx->pc == 0x165B30u) {
        ctx->pc = 0x165B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B2Cu;
        // 0x165b30: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B34u;
        goto label_165b34;
    }
    ctx->pc = 0x165B2Cu;
    SET_GPR_U32(ctx, 31, 0x165B34u);
    ctx->pc = 0x165B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B2Cu;
    // 0x165b30: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165B34u;
label_165b34:
    // 0x165b34: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x165b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_165b38:
    // 0x165b38: 0xc066e26  jal         func_19B898
label_165b3c:
    if (ctx->pc == 0x165B3Cu) {
        ctx->pc = 0x165B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B38u;
        // 0x165b3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B40u;
        goto label_165b40;
    }
    ctx->pc = 0x165B38u;
    SET_GPR_U32(ctx, 31, 0x165B40u);
    ctx->pc = 0x165B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B38u;
    // 0x165b3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165B40u;
label_165b40:
    // 0x165b40: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x165b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_165b44:
    // 0x165b44: 0xc066e26  jal         func_19B898
label_165b48:
    if (ctx->pc == 0x165B48u) {
        ctx->pc = 0x165B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B44u;
        // 0x165b48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B4Cu;
        goto label_165b4c;
    }
    ctx->pc = 0x165B44u;
    SET_GPR_U32(ctx, 31, 0x165B4Cu);
    ctx->pc = 0x165B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B44u;
    // 0x165b48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165B4Cu;
label_165b4c:
    // 0x165b4c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_165b50:
    // 0x165b50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x165b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_165b54:
    // 0x165b54: 0xc066e02  jal         func_19B808
label_165b58:
    if (ctx->pc == 0x165B58u) {
        ctx->pc = 0x165B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B54u;
        // 0x165b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B5Cu;
        goto label_165b5c;
    }
    ctx->pc = 0x165B54u;
    SET_GPR_U32(ctx, 31, 0x165B5Cu);
    ctx->pc = 0x165B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B54u;
    // 0x165b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x165B5Cu;
label_165b5c:
    // 0x165b5c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x165b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_165b60:
    // 0x165b60: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_165b64:
    // 0x165b64: 0xc066e08  jal         func_19B820
label_165b68:
    if (ctx->pc == 0x165B68u) {
        ctx->pc = 0x165B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B64u;
        // 0x165b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B6Cu;
        goto label_165b6c;
    }
    ctx->pc = 0x165B64u;
    SET_GPR_U32(ctx, 31, 0x165B6Cu);
    ctx->pc = 0x165B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B64u;
    // 0x165b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x165B6Cu;
label_165b6c:
    // 0x165b6c: 0xc066e44  jal         func_19B910
label_165b70:
    if (ctx->pc == 0x165B70u) {
        ctx->pc = 0x165B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B6Cu;
        // 0x165b70: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B74u;
        goto label_165b74;
    }
    ctx->pc = 0x165B6Cu;
    SET_GPR_U32(ctx, 31, 0x165B74u);
    ctx->pc = 0x165B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B6Cu;
    // 0x165b70: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x165B74u;
label_165b74:
    // 0x165b74: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x165b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165b78:
    // 0x165b78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_165b7c:
    // 0x165b7c: 0xc066e96  jal         func_19BA58
label_165b80:
    if (ctx->pc == 0x165B80u) {
        ctx->pc = 0x165B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B7Cu;
        // 0x165b80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B84u;
        goto label_165b84;
    }
    ctx->pc = 0x165B7Cu;
    SET_GPR_U32(ctx, 31, 0x165B84u);
    ctx->pc = 0x165B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B7Cu;
    // 0x165b80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x165B84u;
label_165b84:
    // 0x165b84: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x165b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165b88:
    // 0x165b88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x165b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_165b8c:
    // 0x165b8c: 0xc066e6c  jal         func_19B9B0
label_165b90:
    if (ctx->pc == 0x165B90u) {
        ctx->pc = 0x165B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B8Cu;
        // 0x165b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B94u;
        goto label_165b94;
    }
    ctx->pc = 0x165B8Cu;
    SET_GPR_U32(ctx, 31, 0x165B94u);
    ctx->pc = 0x165B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B8Cu;
    // 0x165b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x165B94u;
label_165b94:
    // 0x165b94: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x165b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165b98:
    // 0x165b98: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x165b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_165b9c:
    // 0x165b9c: 0xc066ec0  jal         func_19BB00
label_165ba0:
    if (ctx->pc == 0x165BA0u) {
        ctx->pc = 0x165BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B9Cu;
        // 0x165ba0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BA4u;
        goto label_165ba4;
    }
    ctx->pc = 0x165B9Cu;
    SET_GPR_U32(ctx, 31, 0x165BA4u);
    ctx->pc = 0x165BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B9Cu;
    // 0x165ba0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x165BA4u;
label_165ba4:
    // 0x165ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165ba8:
    // 0x165ba8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x165ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_165bac:
    // 0x165bac: 0xc066e1a  jal         func_19B868
label_165bb0:
    if (ctx->pc == 0x165BB0u) {
        ctx->pc = 0x165BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BACu;
        // 0x165bb0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BB4u;
        goto label_165bb4;
    }
    ctx->pc = 0x165BACu;
    SET_GPR_U32(ctx, 31, 0x165BB4u);
    ctx->pc = 0x165BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BACu;
    // 0x165bb0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x165BB4u;
label_165bb4:
    // 0x165bb4: 0x0  nop
    ctx->pc = 0x165bb4u;
    // NOP
label_165bb8:
    // 0x165bb8: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x165bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_165bbc:
    // 0x165bbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_165bc0:
    // 0x165bc0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x165bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_165bc4:
    // 0x165bc4: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x165bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_165bc8:
    // 0x165bc8: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_165bcc:
    if (ctx->pc == 0x165BCCu) {
        ctx->pc = 0x165BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BC8u;
        // 0x165bcc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BD0u;
        goto label_165bd0;
    }
    ctx->pc = 0x165BC8u;
    {
        const bool branch_taken_0x165bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BC8u;
        // 0x165bcc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bc8) {
            ctx->pc = 0x165AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x165aac; return; }
        }
    }
    ctx->pc = 0x165BD0u;
label_165bd0:
    // 0x165bd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x165bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_165bd4:
    // 0x165bd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x165bd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_165bd8:
    // 0x165bd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x165bd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_165bdc:
    // 0x165bdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x165bdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_165be0:
    // 0x165be0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x165be0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_165be4:
    // 0x165be4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165be4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_165be8:
    // 0x165be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165bec:
    // 0x165bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165bf0:
    // 0x165bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165bf4:
    // 0x165bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_165bf8:
    // 0x165bf8: 0x3e00008  jr          $ra
label_165bfc:
    if (ctx->pc == 0x165BFCu) {
        ctx->pc = 0x165BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BF8u;
        // 0x165bfc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C00u;
        goto label_165c00;
    }
    ctx->pc = 0x165BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BF8u;
        // 0x165bfc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C00u;
label_165c00:
    // 0x165c00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x165c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_165c04:
    // 0x165c04: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x165c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_165c08:
    // 0x165c08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x165c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_165c0c:
    // 0x165c0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x165c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_165c10:
    // 0x165c10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_165c14:
    // 0x165c14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_165c18:
    // 0x165c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_165c1c:
    // 0x165c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_165c20:
    // 0x165c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_165c24:
    // 0x165c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_165c28:
    // 0x165c28: 0x8c35bd8c  lw          $s5, -0x4274($at)
    ctx->pc = 0x165c28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950284)));
label_165c2c:
    // 0x165c2c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x165c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_165c30:
    // 0x165c30: 0x8c3661dc  lw          $s6, 0x61DC($at)
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25052)));
label_165c34:
    // 0x165c34: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x165c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_165c38:
    // 0x165c38: 0x8c30621c  lw          $s0, 0x621C($at)
    ctx->pc = 0x165c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25116)));
label_165c3c:
    // 0x165c3c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_165c40:
    // 0x165c40: 0x8c34892c  lw          $s4, -0x76D4($at)
    ctx->pc = 0x165c40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936876)));
label_165c44:
    // 0x165c44: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_165c48:
    // 0x165c48: 0x8c23bd6c  lw          $v1, -0x4294($at)
    ctx->pc = 0x165c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950252)));
label_165c4c:
    // 0x165c4c: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x165c4cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165c50:
    // 0x165c50: 0x0  nop
    ctx->pc = 0x165c50u;
    // NOP
label_165c54:
    // 0x165c54: 0x0  nop
    ctx->pc = 0x165c54u;
    // NOP
label_165c58:
    // 0x165c58: 0x8812  mflo        $s1
    ctx->pc = 0x165c58u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_165c5c:
    // 0x165c5c: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
label_165c60:
    if (ctx->pc == 0x165C60u) {
        ctx->pc = 0x165C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C5Cu;
        // 0x165c60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C64u;
        goto label_165c64;
    }
    ctx->pc = 0x165C5Cu;
    {
        const bool branch_taken_0x165c5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C5Cu;
        // 0x165c60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c5c) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165C64u;
label_165c64:
    // 0x165c64: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_165c68:
    // 0x165c68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x165c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_165c6c:
    // 0x165c6c: 0xc066e44  jal         func_19B910
label_165c70:
    if (ctx->pc == 0x165C70u) {
        ctx->pc = 0x165C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C6Cu;
        // 0x165c70: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C74u;
        goto label_165c74;
    }
    ctx->pc = 0x165C6Cu;
    SET_GPR_U32(ctx, 31, 0x165C74u);
    ctx->pc = 0x165C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C6Cu;
    // 0x165c70: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x165C74u;
label_165c74:
    // 0x165c74: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x165c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165c78:
    // 0x165c78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x165c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_165c7c:
    // 0x165c7c: 0xc066ec0  jal         func_19BB00
label_165c80:
    if (ctx->pc == 0x165C80u) {
        ctx->pc = 0x165C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C7Cu;
        // 0x165c80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C84u;
        goto label_165c84;
    }
    ctx->pc = 0x165C7Cu;
    SET_GPR_U32(ctx, 31, 0x165C84u);
    ctx->pc = 0x165C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C7Cu;
    // 0x165c80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x165C84u;
label_165c84:
    // 0x165c84: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x165c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_165c88:
    // 0x165c88: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_165c8c:
    if (ctx->pc == 0x165C8Cu) {
        ctx->pc = 0x165C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C88u;
        // 0x165c8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C90u;
        goto label_165c90;
    }
    ctx->pc = 0x165C88u;
    {
        const bool branch_taken_0x165c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C88u;
        // 0x165c8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c88) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165C90u;
label_165c90:
    // 0x165c90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x165c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165c94:
    // 0x165c94: 0x2d33021  addu        $a2, $s6, $s3
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_165c98:
    // 0x165c98: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x165c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_165c9c:
    // 0x165c9c: 0xc066d7a  jal         func_19B5E8
label_165ca0:
    if (ctx->pc == 0x165CA0u) {
        ctx->pc = 0x165CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C9Cu;
        // 0x165ca0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CA4u;
        goto label_165ca4;
    }
    ctx->pc = 0x165C9Cu;
    SET_GPR_U32(ctx, 31, 0x165CA4u);
    ctx->pc = 0x165CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C9Cu;
    // 0x165ca0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x165CA4u;
label_165ca4:
    // 0x165ca4: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_165ca8:
    // 0x165ca8: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x165ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_165cac:
    // 0x165cac: 0xc066d7a  jal         func_19B5E8
label_165cb0:
    if (ctx->pc == 0x165CB0u) {
        ctx->pc = 0x165CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CACu;
        // 0x165cb0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CB4u;
        goto label_165cb4;
    }
    ctx->pc = 0x165CACu;
    SET_GPR_U32(ctx, 31, 0x165CB4u);
    ctx->pc = 0x165CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CACu;
    // 0x165cb0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x165CB4u;
label_165cb4:
    // 0x165cb4: 0xa2a00007  sb          $zero, 0x7($s5)
    ctx->pc = 0x165cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 7), (uint8_t)GPR_U32(ctx, 0));
label_165cb8:
    // 0x165cb8: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x165cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_165cbc:
    // 0x165cbc: 0xa2a00006  sb          $zero, 0x6($s5)
    ctx->pc = 0x165cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 6), (uint8_t)GPR_U32(ctx, 0));
label_165cc0:
    // 0x165cc0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x165cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_165cc4:
    // 0x165cc4: 0xa2b20004  sb          $s2, 0x4($s5)
    ctx->pc = 0x165cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 18));
label_165cc8:
    // 0x165cc8: 0xa6a0000c  sh          $zero, 0xC($s5)
    ctx->pc = 0x165cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 0));
label_165ccc:
    // 0x165ccc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_165cd0:
    // 0x165cd0: 0xa6a0000a  sh          $zero, 0xA($s5)
    ctx->pc = 0x165cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 0));
label_165cd4:
    // 0x165cd4: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x165cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_165cd8:
    // 0x165cd8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_165cdc:
    if (ctx->pc == 0x165CDCu) {
        ctx->pc = 0x165CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD8u;
        // 0x165cdc: 0x2a4a821  addu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CE0u;
        goto label_165ce0;
    }
    ctx->pc = 0x165CD8u;
    {
        const bool branch_taken_0x165cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD8u;
        // 0x165cdc: 0x2a4a821  addu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cd8) {
            ctx->pc = 0x165C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165c94;
        }
    }
    ctx->pc = 0x165CE0u;
label_165ce0:
    // 0x165ce0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x165ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_165ce4:
    // 0x165ce4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x165ce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_165ce8:
    // 0x165ce8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x165ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_165cec:
    // 0x165cec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_165cf0:
    // 0x165cf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165cf4:
    // 0x165cf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165cf8:
    // 0x165cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165cfc:
    // 0x165cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_165d00:
    // 0x165d00: 0x3e00008  jr          $ra
label_165d04:
    if (ctx->pc == 0x165D04u) {
        ctx->pc = 0x165D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D00u;
        // 0x165d04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D08u;
        goto label_165d08;
    }
    ctx->pc = 0x165D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D00u;
        // 0x165d04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165D08u;
label_165d08:
    // 0x165d08: 0x0  nop
    ctx->pc = 0x165d08u;
    // NOP
label_165d0c:
    // 0x165d0c: 0x0  nop
    ctx->pc = 0x165d0cu;
    // NOP
label_165d10:
    // 0x165d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x165d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_165d14:
    // 0x165d14: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x165d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_165d18:
    // 0x165d18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x165d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_165d1c:
    // 0x165d1c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_165d20:
    // 0x165d20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x165d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_165d24:
    // 0x165d24: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x165d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_165d28:
    // 0x165d28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_165d2c:
    // 0x165d2c: 0x2463bd80  addiu       $v1, $v1, -0x4280
    ctx->pc = 0x165d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950272));
label_165d30:
    // 0x165d30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_165d34:
    // 0x165d34: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x165d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_165d38:
    // 0x165d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_165d3c:
    // 0x165d3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165d40:
    // 0x165d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_165d44:
    // 0x165d44: 0x246361d0  addiu       $v1, $v1, 0x61D0
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25040));
label_165d48:
    // 0x165d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_165d4c:
    // 0x165d4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x165d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_165d50:
    // 0x165d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_165d54:
    // 0x165d54: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x165d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_165d58:
    // 0x165d58: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x165d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_165d5c:
    // 0x165d5c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165d60:
    // 0x165d60: 0x24636210  addiu       $v1, $v1, 0x6210
    ctx->pc = 0x165d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25104));
label_165d64:
    // 0x165d64: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_165d68:
    // 0x165d68: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x165d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_165d6c:
    // 0x165d6c: 0x24638920  addiu       $v1, $v1, -0x76E0
    ctx->pc = 0x165d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936864));
label_165d70:
    // 0x165d70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_165d74:
    // 0x165d74: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x165d74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_165d78:
    // 0x165d78: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x165d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_165d7c:
    // 0x165d7c: 0x2463bd60  addiu       $v1, $v1, -0x42A0
    ctx->pc = 0x165d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950240));
label_165d80:
    // 0x165d80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x165d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_165d84:
    // 0x165d84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_165d88:
    // 0x165d88: 0x76001a  div         $zero, $v1, $s6
    ctx->pc = 0x165d88u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165d8c:
    // 0x165d8c: 0x0  nop
    ctx->pc = 0x165d8cu;
    // NOP
label_165d90:
    // 0x165d90: 0x0  nop
    ctx->pc = 0x165d90u;
    // NOP
label_165d94:
    // 0x165d94: 0x9812  mflo        $s3
    ctx->pc = 0x165d94u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_165d98:
    // 0x165d98: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_165d9c:
    if (ctx->pc == 0x165D9Cu) {
        ctx->pc = 0x165D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D98u;
        // 0x165d9c: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DA0u;
        goto label_165da0;
    }
    ctx->pc = 0x165D98u;
    {
        const bool branch_taken_0x165d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D98u;
        // 0x165d9c: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d98) {
            ctx->pc = 0x165E00u;
            goto label_165e00;
        }
    }
    ctx->pc = 0x165DA0u;
label_165da0:
    // 0x165da0: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_165da4:
    // 0x165da4: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x165da4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_165da8:
    // 0x165da8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x165da8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165dac:
    // 0x165dac: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_165db0:
    if (ctx->pc == 0x165DB0u) {
        ctx->pc = 0x165DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DACu;
        // 0x165db0: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DB4u;
        goto label_165db4;
    }
    ctx->pc = 0x165DACu;
    {
        const bool branch_taken_0x165dac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DACu;
        // 0x165db0: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dac) {
            ctx->pc = 0x165DFCu;
            goto label_165dfc;
        }
    }
    ctx->pc = 0x165DB4u;
label_165db4:
    // 0x165db4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x165db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165db8:
    // 0x165db8: 0x2352821  addu        $a1, $s1, $s5
    ctx->pc = 0x165db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_165dbc:
    // 0x165dbc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x165dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_165dc0:
    // 0x165dc0: 0xc066e26  jal         func_19B898
label_165dc4:
    if (ctx->pc == 0x165DC4u) {
        ctx->pc = 0x165DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DC0u;
        // 0x165dc4: 0xa2000007  sb          $zero, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DC8u;
        goto label_165dc8;
    }
    ctx->pc = 0x165DC0u;
    SET_GPR_U32(ctx, 31, 0x165DC8u);
    ctx->pc = 0x165DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DC0u;
    // 0x165dc4: 0xa2000007  sb          $zero, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165DC8u;
label_165dc8:
    // 0x165dc8: 0x2552821  addu        $a1, $s2, $s5
    ctx->pc = 0x165dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_165dcc:
    // 0x165dcc: 0xc066e26  jal         func_19B898
label_165dd0:
    if (ctx->pc == 0x165DD0u) {
        ctx->pc = 0x165DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DCCu;
        // 0x165dd0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DD4u;
        goto label_165dd4;
    }
    ctx->pc = 0x165DCCu;
    SET_GPR_U32(ctx, 31, 0x165DD4u);
    ctx->pc = 0x165DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DCCu;
    // 0x165dd0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165DD4u;
label_165dd4:
    // 0x165dd4: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x165dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_165dd8:
    // 0x165dd8: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_165ddc:
    // 0x165ddc: 0xa2140004  sb          $s4, 0x4($s0)
    ctx->pc = 0x165ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 20));
label_165de0:
    // 0x165de0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_165de4:
    // 0x165de4: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x165de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_165de8:
    // 0x165de8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_165dec:
    // 0x165dec: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x165decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_165df0:
    // 0x165df0: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x165df0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_165df4:
    // 0x165df4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_165df8:
    if (ctx->pc == 0x165DF8u) {
        ctx->pc = 0x165DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DF4u;
        // 0x165df8: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DFCu;
        goto label_165dfc;
    }
    ctx->pc = 0x165DF4u;
    {
        const bool branch_taken_0x165df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DF4u;
        // 0x165df8: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165df4) {
            ctx->pc = 0x165DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165db8;
        }
    }
    ctx->pc = 0x165DFCu;
label_165dfc:
    // 0x165dfc: 0x0  nop
    ctx->pc = 0x165dfcu;
    // NOP
label_165e00:
    // 0x165e00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x165e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_165e04:
    // 0x165e04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x165e04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_165e08:
    // 0x165e08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x165e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_165e0c:
    // 0x165e0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_165e10:
    // 0x165e10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165e14:
    // 0x165e14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165e18:
    // 0x165e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165e1c:
    // 0x165e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_165e20:
    // 0x165e20: 0x3e00008  jr          $ra
label_165e24:
    if (ctx->pc == 0x165E24u) {
        ctx->pc = 0x165E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E20u;
        // 0x165e24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E28u;
        goto label_165e28;
    }
    ctx->pc = 0x165E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E20u;
        // 0x165e24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E28u;
label_165e28:
    // 0x165e28: 0x0  nop
    ctx->pc = 0x165e28u;
    // NOP
label_165e2c:
    // 0x165e2c: 0x0  nop
    ctx->pc = 0x165e2cu;
    // NOP
label_165e30:
    // 0x165e30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_165e34:
    // 0x165e34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x165e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_165e38:
    // 0x165e38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x165e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_165e3c:
    // 0x165e3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x165e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_165e40:
    // 0x165e40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x165e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_165e44:
    // 0x165e44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x165e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_165e48:
    // 0x165e48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x165e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_165e4c:
    // 0x165e4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_165e50:
    // 0x165e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x165e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_165e54:
    // 0x165e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165e58:
    // 0x165e58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165e5c:
    // 0x165e5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x165e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_165e60:
    // 0x165e60: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x165e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_165e64:
    // 0x165e64: 0xc066e26  jal         func_19B898
label_165e68:
    if (ctx->pc == 0x165E68u) {
        ctx->pc = 0x165E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E64u;
        // 0x165e68: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E6Cu;
        goto label_165e6c;
    }
    ctx->pc = 0x165E64u;
    SET_GPR_U32(ctx, 31, 0x165E6Cu);
    ctx->pc = 0x165E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E64u;
    // 0x165e68: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165E6Cu;
label_165e6c:
    // 0x165e6c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x165e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_165e70:
    // 0x165e70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_165e74:
    // 0x165e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165e78:
    // 0x165e78: 0xc05f3d0  jal         func_17CF40
label_165e7c:
    if (ctx->pc == 0x165E7Cu) {
        ctx->pc = 0x165E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E78u;
        // 0x165e7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E80u;
        goto label_165e80;
    }
    ctx->pc = 0x165E78u;
    SET_GPR_U32(ctx, 31, 0x165E80u);
    ctx->pc = 0x165E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E78u;
    // 0x165e7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x165E80u;
label_165e80:
    // 0x165e80: 0x27aa00d4  addiu       $t2, $sp, 0xD4
    ctx->pc = 0x165e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_165e84:
    // 0x165e84: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x165e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_165e88:
    // 0x165e88: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x165e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_165e8c:
    // 0x165e8c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x165e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_165e90:
    // 0x165e90: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x165e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_165e94:
    // 0x165e94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x165e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_165e98:
    // 0x165e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_165e9c:
    // 0x165e9c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x165e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_165ea0:
    // 0x165ea0: 0x8c293ffc  lw          $t1, 0x3FFC($at)
    ctx->pc = 0x165ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_165ea4:
    // 0x165ea4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x165ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_165ea8:
    // 0x165ea8: 0x24e71e00  addiu       $a3, $a3, 0x1E00
    ctx->pc = 0x165ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7680));
label_165eac:
    // 0x165eac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_165eb0:
    // 0x165eb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x165eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_165eb4:
    // 0x165eb4: 0x24a55fb0  addiu       $a1, $a1, 0x5FB0
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24496));
label_165eb8:
    // 0x165eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165ebc:
    // 0x165ebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x165ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_165ec0:
    // 0x165ec0: 0x24730060  addiu       $s3, $v1, 0x60
    ctx->pc = 0x165ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_165ec4:
    // 0x165ec4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x165ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_165ec8:
    // 0x165ec8: 0x94140  sll         $t0, $t1, 5
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_165ecc:
    // 0x165ecc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x165eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_165ed0:
    // 0x165ed0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x165ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_165ed4:
    // 0x165ed4: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x165ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_165ed8:
    // 0x165ed8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x165ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_165edc:
    // 0x165edc: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x165edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165ee0:
    // 0x165ee0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_165ee4:
    // 0x165ee4: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x165ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_165ee8:
    // 0x165ee8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x165ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_165eec:
    // 0x165eec: 0xc7ae00e8  lwc1        $f14, 0xE8($sp)
    ctx->pc = 0x165eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_165ef0:
    // 0x165ef0: 0x7b13c  dsll32      $s6, $a3, 4
    ctx->pc = 0x165ef0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) << (32 + 4));
label_165ef4:
    // 0x165ef4: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x165ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_165ef8:
    // 0x165ef8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x165ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_165efc:
    // 0x165efc: 0xc066fc0  jal         func_19BF00
label_165f00:
    if (ctx->pc == 0x165F00u) {
        ctx->pc = 0x165F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EFCu;
        // 0x165f00: 0x16b13e  dsrl32      $s6, $s6, 4 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F04u;
        goto label_165f04;
    }
    ctx->pc = 0x165EFCu;
    SET_GPR_U32(ctx, 31, 0x165F04u);
    ctx->pc = 0x165F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EFCu;
    // 0x165f00: 0x16b13e  dsrl32      $s6, $s6, 4 (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    { ctx->pc = 0x19bf00; return; }
    ctx->pc = 0x165F04u;
label_165f04:
    // 0x165f04: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_165f08:
    // 0x165f08: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_165f0c:
    // 0x165f0c: 0xc066e1a  jal         func_19B868
label_165f10:
    if (ctx->pc == 0x165F10u) {
        ctx->pc = 0x165F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F0Cu;
        // 0x165f10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F14u;
        goto label_165f14;
    }
    ctx->pc = 0x165F0Cu;
    SET_GPR_U32(ctx, 31, 0x165F14u);
    ctx->pc = 0x165F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F0Cu;
    // 0x165f10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x165F14u;
label_165f14:
    // 0x165f14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x165f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_165f18:
    // 0x165f18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x165f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_165f1c:
    // 0x165f1c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x165f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_165f20:
    // 0x165f20: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_165f24:
    // 0x165f24: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x165f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165f28:
    // 0x165f28: 0xc066d86  jal         func_19B618
label_165f2c:
    if (ctx->pc == 0x165F2Cu) {
        ctx->pc = 0x165F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F28u;
        // 0x165f2c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F30u;
        goto label_165f30;
    }
    ctx->pc = 0x165F28u;
    SET_GPR_U32(ctx, 31, 0x165F30u);
    ctx->pc = 0x165F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F28u;
    // 0x165f2c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x165F30u;
label_165f30:
    // 0x165f30: 0xc07f190  jal         func_1FC640
label_165f34:
    if (ctx->pc == 0x165F34u) {
        ctx->pc = 0x165F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F30u;
        // 0x165f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F38u;
        goto label_165f38;
    }
    ctx->pc = 0x165F30u;
    SET_GPR_U32(ctx, 31, 0x165F38u);
    ctx->pc = 0x165F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F30u;
    // 0x165f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x165F38u;
label_165f38:
    // 0x165f38: 0x27b400cc  addiu       $s4, $sp, 0xCC
    ctx->pc = 0x165f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_165f3c:
    // 0x165f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165f40:
    // 0x165f40: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x165f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_165f44:
    // 0x165f44: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x165f44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_165f48:
    // 0x165f48: 0x0  nop
    ctx->pc = 0x165f48u;
    // NOP
label_165f4c:
    // 0x165f4c: 0x0  nop
    ctx->pc = 0x165f4cu;
    // NOP
label_165f50:
    // 0x165f50: 0xc07f198  jal         func_1FC660
label_165f54:
    if (ctx->pc == 0x165F54u) {
        ctx->pc = 0x165F58u;
        goto label_165f58;
    }
    ctx->pc = 0x165F50u;
    SET_GPR_U32(ctx, 31, 0x165F58u);
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x165F58u;
label_165f58:
    // 0x165f58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x165f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_165f5c:
    // 0x165f5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x165f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_165f60:
    // 0x165f60: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x165f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_165f64:
    // 0x165f64: 0x0  nop
    ctx->pc = 0x165f64u;
    // NOP
label_165f68:
    // 0x165f68: 0x2a410100  slti        $at, $s2, 0x100
    ctx->pc = 0x165f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
label_165f6c:
    // 0x165f6c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_165f70:
    if (ctx->pc == 0x165F70u) {
        ctx->pc = 0x165F74u;
        goto label_165f74;
    }
    ctx->pc = 0x165F6Cu;
    {
        const bool branch_taken_0x165f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x165f6c) {
            ctx->pc = 0x165F7Cu;
            goto label_165f7c;
        }
    }
    ctx->pc = 0x165F74u;
label_165f74:
    // 0x165f74: 0x10000004  b           . + 4 + (0x4 << 2)
label_165f78:
    if (ctx->pc == 0x165F78u) {
        ctx->pc = 0x165F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F74u;
        // 0x165f78: 0x241200ff  addiu       $s2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F7Cu;
        goto label_165f7c;
    }
    ctx->pc = 0x165F74u;
    {
        const bool branch_taken_0x165f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F74u;
        // 0x165f78: 0x241200ff  addiu       $s2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f74) {
            ctx->pc = 0x165F88u;
            goto label_165f88;
        }
    }
    ctx->pc = 0x165F7Cu;
label_165f7c:
    // 0x165f7c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_165f80:
    if (ctx->pc == 0x165F80u) {
        ctx->pc = 0x165F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F7Cu;
        // 0x165f80: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F84u;
        goto label_165f84;
    }
    ctx->pc = 0x165F7Cu;
    {
        const bool branch_taken_0x165f7c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x165F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F7Cu;
        // 0x165f80: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f7c) {
            ctx->pc = 0x165F8Cu;
            goto label_165f8c;
        }
    }
    ctx->pc = 0x165F84u;
label_165f84:
    // 0x165f84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165f88:
    // 0x165f88: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x165f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_165f8c:
    // 0x165f8c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x165f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_165f90:
    // 0x165f90: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_165f94:
    // 0x165f94: 0x266602d0  addiu       $a2, $s3, 0x2D0
    ctx->pc = 0x165f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
label_165f98:
    // 0x165f98: 0xc06703a  jal         func_19C0E8
label_165f9c:
    if (ctx->pc == 0x165F9Cu) {
        ctx->pc = 0x165F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F98u;
        // 0x165f9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FA0u;
        goto label_165fa0;
    }
    ctx->pc = 0x165F98u;
    SET_GPR_U32(ctx, 31, 0x165FA0u);
    ctx->pc = 0x165F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F98u;
    // 0x165f9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x165FA0u;
label_165fa0:
    // 0x165fa0: 0x12a900  sll         $s5, $s2, 4
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_165fa4:
    // 0x165fa4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x165fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_165fa8:
    // 0x165fa8: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x165fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
label_165fac:
    // 0x165fac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_165fb0:
    // 0x165fb0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x165fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_165fb4:
    // 0x165fb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_165fb8:
    // 0x165fb8: 0x0  nop
    ctx->pc = 0x165fb8u;
    // NOP
label_165fbc:
    // 0x165fbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_165fc0:
    if (ctx->pc == 0x165FC0u) {
        ctx->pc = 0x165FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FBCu;
        // 0x165fc0: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FC4u;
        goto label_165fc4;
    }
    ctx->pc = 0x165FBCu;
    {
        const bool branch_taken_0x165fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FBCu;
        // 0x165fc0: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fbc) {
            ctx->pc = 0x165FD0u;
            goto label_165fd0;
        }
    }
    ctx->pc = 0x165FC4u;
label_165fc4:
    // 0x165fc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_165fc8:
    // 0x165fc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x165fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_165fcc:
    // 0x165fcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x165fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_165fd0:
    // 0x165fd0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_165fd4:
    // 0x165fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165fd8:
    // 0x165fd8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_165fdc:
    // 0x165fdc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_165fe0:
    // 0x165fe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_165fe4:
    // 0x165fe4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x165fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_165fe8:
    // 0x165fe8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_165fec:
    // 0x165fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x165fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165ff0:
    // 0x165ff0: 0xc06703a  jal         func_19C0E8
label_165ff4:
    if (ctx->pc == 0x165FF4u) {
        ctx->pc = 0x165FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FF0u;
        // 0x165ff4: 0x244602d0  addiu       $a2, $v0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FF8u;
        goto label_165ff8;
    }
    ctx->pc = 0x165FF0u;
    SET_GPR_U32(ctx, 31, 0x165FF8u);
    ctx->pc = 0x165FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FF0u;
    // 0x165ff4: 0x244602d0  addiu       $a2, $v0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x165FF8u;
label_165ff8:
    // 0x165ff8: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x165ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
label_165ffc:
    // 0x165ffc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x165ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_166000:
    // 0x166000: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x166000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166004:
    // 0x166004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166008:
    // 0x166008: 0x0  nop
    ctx->pc = 0x166008u;
    // NOP
label_16600c:
    // 0x16600c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16600cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166010:
    // 0x166010: 0x0  nop
    ctx->pc = 0x166010u;
    // NOP
label_166014:
    // 0x166014: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_166018:
    if (ctx->pc == 0x166018u) {
        ctx->pc = 0x166018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166014u;
        // 0x166018: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16601Cu;
        goto label_16601c;
    }
    ctx->pc = 0x166014u;
    {
        const bool branch_taken_0x166014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166014u;
        // 0x166018: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166014) {
            ctx->pc = 0x166028u;
            goto label_166028;
        }
    }
    ctx->pc = 0x16601Cu;
label_16601c:
    // 0x16601c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166020:
    // 0x166020: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x166020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_166024:
    // 0x166024: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x166024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_166028:
    // 0x166028: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16602c:
    // 0x16602c: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x16602cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_166030:
    // 0x166030: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_166034:
    if (ctx->pc == 0x166034u) {
        ctx->pc = 0x166034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166030u;
        // 0x166034: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166038u;
        goto label_166038;
    }
    ctx->pc = 0x166030u;
    {
        const bool branch_taken_0x166030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166030u;
        // 0x166034: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166030) {
            ctx->pc = 0x165FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165fd8;
        }
    }
    ctx->pc = 0x166038u;
label_166038:
    // 0x166038: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x166038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16603c:
    // 0x16603c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16603cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166040:
    // 0x166040: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_166044:
    // 0x166044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x166044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166048:
    // 0x166048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16604c:
    // 0x16604c: 0xc066c72  jal         func_19B1C8
label_166050:
    if (ctx->pc == 0x166050u) {
        ctx->pc = 0x166050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16604Cu;
        // 0x166050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166054u;
        goto label_166054;
    }
    ctx->pc = 0x16604Cu;
    SET_GPR_U32(ctx, 31, 0x166054u);
    ctx->pc = 0x166050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16604Cu;
    // 0x166050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x166054u;
label_166054:
    // 0x166054: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x166054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_166058:
    // 0x166058: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x166058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16605c:
    // 0x16605c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x16605cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_166060:
    // 0x166060: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x166060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_166064:
    // 0x166064: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x166064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_166068:
    // 0x166068: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x166068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16606c:
    // 0x16606c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16606cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166070:
    // 0x166070: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166074:
    // 0x166074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166078:
    // 0x166078: 0x3e00008  jr          $ra
label_16607c:
    if (ctx->pc == 0x16607Cu) {
        ctx->pc = 0x16607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166078u;
        // 0x16607c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166080u;
        goto label_166080;
    }
    ctx->pc = 0x166078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166078u;
        // 0x16607c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166080u;
label_166080:
    // 0x166080: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_166084:
    // 0x166084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166088:
    // 0x166088: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x166088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16608c:
    // 0x16608c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_166090:
    // 0x166090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x166090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_166094:
    // 0x166094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166098:
    // 0x166098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x166098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16609c:
    // 0x16609c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16609cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1660a0:
    // 0x1660a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1660a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1660a4:
    // 0x1660a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1660a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1660a8:
    // 0x1660a8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1660a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1660ac:
    // 0x1660ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1660acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1660b0:
    // 0x1660b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1660b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1660b4:
    // 0x1660b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1660b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1660b8:
    // 0x1660b8: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x1660b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1660bc:
    // 0x1660bc: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x1660bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1660c0:
    // 0x1660c0: 0xc05f3d0  jal         func_17CF40
label_1660c4:
    if (ctx->pc == 0x1660C4u) {
        ctx->pc = 0x1660C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660C0u;
        // 0x1660c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660C8u;
        goto label_1660c8;
    }
    ctx->pc = 0x1660C0u;
    SET_GPR_U32(ctx, 31, 0x1660C8u);
    ctx->pc = 0x1660C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660C0u;
    // 0x1660c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x1660C8u;
label_1660c8:
    // 0x1660c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1660c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1660cc:
    // 0x1660cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1660ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1660d0:
    // 0x1660d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1660d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1660d4:
    // 0x1660d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1660d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1660d8:
    // 0x1660d8: 0xc066e14  jal         func_19B850
label_1660dc:
    if (ctx->pc == 0x1660DCu) {
        ctx->pc = 0x1660DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660D8u;
        // 0x1660dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660E0u;
        goto label_1660e0;
    }
    ctx->pc = 0x1660D8u;
    SET_GPR_U32(ctx, 31, 0x1660E0u);
    ctx->pc = 0x1660DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660D8u;
    // 0x1660dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1660E0u;
label_1660e0:
    // 0x1660e0: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x1660e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
label_1660e4:
    // 0x1660e4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1660e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1660e8:
    // 0x1660e8: 0x3442b852  ori         $v0, $v0, 0xB852
    ctx->pc = 0x1660e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47186);
label_1660ec:
    // 0x1660ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1660ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1660f0:
    // 0x1660f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1660f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1660f4:
    // 0x1660f4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1660f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1660f8:
    // 0x1660f8: 0xc067054  jal         func_19C150
label_1660fc:
    if (ctx->pc == 0x1660FCu) {
        ctx->pc = 0x1660FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660F8u;
        // 0x1660fc: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166100u;
        goto label_166100;
    }
    ctx->pc = 0x1660F8u;
    SET_GPR_U32(ctx, 31, 0x166100u);
    ctx->pc = 0x1660FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660F8u;
    // 0x1660fc: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C150u;
    { ctx->pc = 0x19c150; return; }
    ctx->pc = 0x166100u;
label_166100:
    // 0x166100: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x166100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_166104:
    // 0x166104: 0xc066daa  jal         func_19B6A8
label_166108:
    if (ctx->pc == 0x166108u) {
        ctx->pc = 0x166108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166104u;
        // 0x166108: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16610Cu;
        goto label_16610c;
    }
    ctx->pc = 0x166104u;
    SET_GPR_U32(ctx, 31, 0x16610Cu);
    ctx->pc = 0x166108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166104u;
    // 0x166108: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x16610Cu;
label_16610c:
    // 0x16610c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x16610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_166110:
    // 0x166110: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x166110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_166114:
    // 0x166114: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166118:
    // 0x166118: 0xc066e14  jal         func_19B850
label_16611c:
    if (ctx->pc == 0x16611Cu) {
        ctx->pc = 0x16611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166118u;
        // 0x16611c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166120u;
        goto label_166120;
    }
    ctx->pc = 0x166118u;
    SET_GPR_U32(ctx, 31, 0x166120u);
    ctx->pc = 0x16611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166118u;
    // 0x16611c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x166120u;
label_166120:
    // 0x166120: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x166120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_166124:
    // 0x166124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166128:
    // 0x166128: 0xc066e02  jal         func_19B808
label_16612c:
    if (ctx->pc == 0x16612Cu) {
        ctx->pc = 0x16612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166128u;
        // 0x16612c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166130u;
        goto label_166130;
    }
    ctx->pc = 0x166128u;
    SET_GPR_U32(ctx, 31, 0x166130u);
    ctx->pc = 0x16612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166128u;
    // 0x16612c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x166130u;
label_166130:
    // 0x166130: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x166130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_166134:
    // 0x166134: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x166134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_166138:
    // 0x166138: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_16613c:
    if (ctx->pc == 0x16613Cu) {
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166140u;
        goto label_166140;
    }
    ctx->pc = 0x166138u;
    {
        const bool branch_taken_0x166138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166138) {
            ctx->pc = 0x16616Cu;
            goto label_16616c;
        }
    }
    ctx->pc = 0x166140u;
label_166140:
    // 0x166140: 0x8e660048  lw          $a2, 0x48($s3)
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_166144:
    // 0x166144: 0x8c224968  lw          $v0, 0x4968($at)
    ctx->pc = 0x166144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_166148:
    // 0x166148: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x166148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16614c:
    // 0x16614c: 0xc066e08  jal         func_19B820
label_166150:
    if (ctx->pc == 0x166150u) {
        ctx->pc = 0x166150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16614Cu;
        // 0x166150: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166154u;
        goto label_166154;
    }
    ctx->pc = 0x16614Cu;
    SET_GPR_U32(ctx, 31, 0x166154u);
    ctx->pc = 0x166150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16614Cu;
    // 0x166150: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x166154u;
label_166154:
    // 0x166154: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x166154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166158:
    // 0x166158: 0xc066da0  jal         func_19B680
label_16615c:
    if (ctx->pc == 0x16615Cu) {
        ctx->pc = 0x16615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166158u;
        // 0x16615c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166160u;
        goto label_166160;
    }
    ctx->pc = 0x166158u;
    SET_GPR_U32(ctx, 31, 0x166160u);
    ctx->pc = 0x16615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166158u;
    // 0x16615c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x166160u;
label_166160:
    // 0x166160: 0x0  nop
    ctx->pc = 0x166160u;
    // NOP
label_166164:
    // 0x166164: 0x0  nop
    ctx->pc = 0x166164u;
    // NOP
label_166168:
    // 0x166168: 0x46000544  c1          0x544
    ctx->pc = 0x166168u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
label_16616c:
    // 0x16616c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x16616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_166170:
    // 0x166170: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x166170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_166174:
    // 0x166174: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_166178:
    if (ctx->pc == 0x166178u) {
        ctx->pc = 0x166178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166174u;
        // 0x166178: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16617Cu;
        goto label_16617c;
    }
    ctx->pc = 0x166174u;
    {
        const bool branch_taken_0x166174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166174u;
        // 0x166178: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166174) {
            ctx->pc = 0x1661BCu;
            goto label_1661bc;
        }
    }
    ctx->pc = 0x16617Cu;
label_16617c:
    // 0x16617c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_166180:
    // 0x166180: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x166180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_166184:
    // 0x166184: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_166188:
    if (ctx->pc == 0x166188u) {
        ctx->pc = 0x166188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166184u;
        // 0x166188: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16618Cu;
        goto label_16618c;
    }
    ctx->pc = 0x166184u;
    {
        const bool branch_taken_0x166184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166184u;
        // 0x166188: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166184) {
            ctx->pc = 0x1661B8u;
            goto label_1661b8;
        }
    }
    ctx->pc = 0x16618Cu;
label_16618c:
    // 0x16618c: 0x8e660048  lw          $a2, 0x48($s3)
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_166190:
    // 0x166190: 0x8c2249f8  lw          $v0, 0x49F8($at)
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_166194:
    // 0x166194: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x166194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_166198:
    // 0x166198: 0xc066e08  jal         func_19B820
label_16619c:
    if (ctx->pc == 0x16619Cu) {
        ctx->pc = 0x16619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166198u;
        // 0x16619c: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661A0u;
        goto label_1661a0;
    }
    ctx->pc = 0x166198u;
    SET_GPR_U32(ctx, 31, 0x1661A0u);
    ctx->pc = 0x16619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166198u;
    // 0x16619c: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1661A0u;
label_1661a0:
    // 0x1661a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1661a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1661a4:
    // 0x1661a4: 0xc066da0  jal         func_19B680
label_1661a8:
    if (ctx->pc == 0x1661A8u) {
        ctx->pc = 0x1661A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661A4u;
        // 0x1661a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661ACu;
        goto label_1661ac;
    }
    ctx->pc = 0x1661A4u;
    SET_GPR_U32(ctx, 31, 0x1661ACu);
    ctx->pc = 0x1661A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661A4u;
    // 0x1661a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x1661ACu;
label_1661ac:
    // 0x1661ac: 0x0  nop
    ctx->pc = 0x1661acu;
    // NOP
label_1661b0:
    // 0x1661b0: 0x0  nop
    ctx->pc = 0x1661b0u;
    // NOP
label_1661b4:
    // 0x1661b4: 0x46000584  c1          0x584
    ctx->pc = 0x1661b4u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_1661b8:
    // 0x1661b8: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x1661b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_1661bc:
    // 0x1661bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1661bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1661c0:
    // 0x1661c0: 0x0  nop
    ctx->pc = 0x1661c0u;
    // NOP
label_1661c4:
    // 0x1661c4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1661c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1661c8:
    // 0x1661c8: 0x0  nop
    ctx->pc = 0x1661c8u;
    // NOP
label_1661cc:
    // 0x1661cc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1661d0:
    if (ctx->pc == 0x1661D0u) {
        ctx->pc = 0x1661D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661CCu;
        // 0x1661d0: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661D4u;
        goto label_1661d4;
    }
    ctx->pc = 0x1661CCu;
    {
        const bool branch_taken_0x1661cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1661D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661CCu;
        // 0x1661d0: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661cc) {
            ctx->pc = 0x1661FCu;
            goto label_1661fc;
        }
    }
    ctx->pc = 0x1661D4u;
label_1661d4:
    // 0x1661d4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1661d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1661d8:
    // 0x1661d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1661d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1661dc:
    // 0x1661dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1661dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1661e0:
    // 0x1661e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1661e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1661e4:
    // 0x1661e4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1661e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1661e8:
    // 0x1661e8: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x1661e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_1661ec:
    // 0x1661ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1661ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1661f0:
    // 0x1661f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1661f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1661f4:
    // 0x1661f4: 0xc07586c  jal         func_1D61B0
label_1661f8:
    if (ctx->pc == 0x1661F8u) {
        ctx->pc = 0x1661F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661F4u;
        // 0x1661f8: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661FCu;
        goto label_1661fc;
    }
    ctx->pc = 0x1661F4u;
    SET_GPR_U32(ctx, 31, 0x1661FCu);
    ctx->pc = 0x1661F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661F4u;
    // 0x1661f8: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x1661FCu;
label_1661fc:
    // 0x1661fc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1661fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_166200:
    // 0x166200: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x166200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_166204:
    // 0x166204: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_166208:
    if (ctx->pc == 0x166208u) {
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166204u;
        // 0x166208: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16620Cu;
        goto label_16620c;
    }
    ctx->pc = 0x166204u;
    {
        const bool branch_taken_0x166204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166204u;
        // 0x166208: 0x3c02457a  lui         $v0, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166204) {
            ctx->pc = 0x16624Cu;
            goto label_16624c;
        }
    }
    ctx->pc = 0x16620Cu;
label_16620c:
    // 0x16620c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16620cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166210:
    // 0x166210: 0x0  nop
    ctx->pc = 0x166210u;
    // NOP
label_166214:
    // 0x166214: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x166214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166218:
    // 0x166218: 0x0  nop
    ctx->pc = 0x166218u;
    // NOP
label_16621c:
    // 0x16621c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_166220:
    if (ctx->pc == 0x166220u) {
        ctx->pc = 0x166220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16621Cu;
        // 0x166220: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166224u;
        goto label_166224;
    }
    ctx->pc = 0x16621Cu;
    {
        const bool branch_taken_0x16621c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16621Cu;
        // 0x166220: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16621c) {
            ctx->pc = 0x16624Cu;
            goto label_16624c;
        }
    }
    ctx->pc = 0x166224u;
label_166224:
    // 0x166224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x166224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166228:
    // 0x166228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x166228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16622c:
    // 0x16622c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x16622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_166230:
    // 0x166230: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x166230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166234:
    // 0x166234: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x166234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_166238:
    // 0x166238: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x166238u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
label_16623c:
    // 0x16623c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16623cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_166240:
    // 0x166240: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166244:
    // 0x166244: 0xc07586c  jal         func_1D61B0
label_166248:
    if (ctx->pc == 0x166248u) {
        ctx->pc = 0x166248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166244u;
        // 0x166248: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16624Cu;
        goto label_16624c;
    }
    ctx->pc = 0x166244u;
    SET_GPR_U32(ctx, 31, 0x16624Cu);
    ctx->pc = 0x166248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166244u;
    // 0x166248: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x16624Cu;
label_16624c:
    // 0x16624c: 0x96630052  lhu         $v1, 0x52($s3)
    ctx->pc = 0x16624cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_166250:
    // 0x166250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_166254:
    // 0x166254: 0x106200f5  beq         $v1, $v0, . + 4 + (0xF5 << 2)
label_166258:
    if (ctx->pc == 0x166258u) {
        ctx->pc = 0x166258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166254u;
        // 0x166258: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16625Cu;
        goto label_16625c;
    }
    ctx->pc = 0x166254u;
    {
        const bool branch_taken_0x166254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166254u;
        // 0x166258: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166254) {
            ctx->pc = 0x16662Cu;
            { ctx->pc = 0x16662c; return; }
        }
    }
    ctx->pc = 0x16625Cu;
label_16625c:
    // 0x16625c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166260:
    // 0x166260: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
label_166264:
    if (ctx->pc == 0x166264u) {
        ctx->pc = 0x166264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166260u;
        // 0x166264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166268u;
        goto label_166268;
    }
    ctx->pc = 0x166260u;
    {
        const bool branch_taken_0x166260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166260u;
        // 0x166264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166260) {
            ctx->pc = 0x166330u;
            { ctx->pc = 0x166330; return; }
        }
    }
    ctx->pc = 0x166268u;
label_166268:
    // 0x166268: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_16626c:
    if (ctx->pc == 0x16626Cu) {
        ctx->pc = 0x166270u;
        goto label_166270;
    }
    ctx->pc = 0x166268u;
    {
        const bool branch_taken_0x166268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166268) {
            ctx->pc = 0x1662A8u;
            { ctx->pc = 0x1662a8; return; }
        }
    }
    ctx->pc = 0x166270u;
label_166270:
    // 0x166270: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_166274:
    if (ctx->pc == 0x166274u) {
        ctx->pc = 0x166278u;
        goto label_166278;
    }
    ctx->pc = 0x166270u;
    {
        const bool branch_taken_0x166270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166270) {
            ctx->pc = 0x166280u;
            goto label_166280;
        }
    }
    ctx->pc = 0x166278u;
label_166278:
    // 0x166278: 0x10000205  b           . + 4 + (0x205 << 2)
label_16627c:
    if (ctx->pc == 0x16627Cu) {
        ctx->pc = 0x166280u;
        goto label_166280;
    }
    ctx->pc = 0x166278u;
    {
        const bool branch_taken_0x166278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166278) {
            ctx->pc = 0x166A90u;
            { ctx->pc = 0x166a90; return; }
        }
    }
    ctx->pc = 0x166280u;
label_166280:
    // 0x166280: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x166280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_166284:
    // 0x166284: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x166284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
label_166288:
    // 0x166288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x166288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16628c:
    // 0x16628c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x16628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_166290:
    // 0x166290: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x166290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_166294:
    // 0x166294: 0x96620052  lhu         $v0, 0x52($s3)
    ctx->pc = 0x166294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
label_166298:
    // 0x166298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16629c:
    // 0x16629c: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x16629cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1662a0u;
    return;
}
