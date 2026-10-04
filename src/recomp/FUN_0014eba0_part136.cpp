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


void FUN_0014eba0_part136(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x190a50u: goto label_190a50;
        case 0x190a54u: goto label_190a54;
        case 0x190a58u: goto label_190a58;
        case 0x190a5cu: goto label_190a5c;
        case 0x190a60u: goto label_190a60;
        case 0x190a64u: goto label_190a64;
        case 0x190a68u: goto label_190a68;
        case 0x190a6cu: goto label_190a6c;
        case 0x190a70u: goto label_190a70;
        case 0x190a74u: goto label_190a74;
        case 0x190a78u: goto label_190a78;
        case 0x190a7cu: goto label_190a7c;
        case 0x190a80u: goto label_190a80;
        case 0x190a84u: goto label_190a84;
        case 0x190a88u: goto label_190a88;
        case 0x190a8cu: goto label_190a8c;
        case 0x190a90u: goto label_190a90;
        case 0x190a94u: goto label_190a94;
        case 0x190a98u: goto label_190a98;
        case 0x190a9cu: goto label_190a9c;
        case 0x190aa0u: goto label_190aa0;
        case 0x190aa4u: goto label_190aa4;
        case 0x190aa8u: goto label_190aa8;
        case 0x190aacu: goto label_190aac;
        case 0x190ab0u: goto label_190ab0;
        case 0x190ab4u: goto label_190ab4;
        case 0x190ab8u: goto label_190ab8;
        case 0x190abcu: goto label_190abc;
        case 0x190ac0u: goto label_190ac0;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ac8u: goto label_190ac8;
        case 0x190accu: goto label_190acc;
        case 0x190ad0u: goto label_190ad0;
        case 0x190ad4u: goto label_190ad4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190adcu: goto label_190adc;
        case 0x190ae0u: goto label_190ae0;
        case 0x190ae4u: goto label_190ae4;
        case 0x190ae8u: goto label_190ae8;
        case 0x190aecu: goto label_190aec;
        case 0x190af0u: goto label_190af0;
        case 0x190af4u: goto label_190af4;
        case 0x190af8u: goto label_190af8;
        case 0x190afcu: goto label_190afc;
        case 0x190b00u: goto label_190b00;
        case 0x190b04u: goto label_190b04;
        case 0x190b08u: goto label_190b08;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b10u: goto label_190b10;
        case 0x190b14u: goto label_190b14;
        case 0x190b18u: goto label_190b18;
        case 0x190b1cu: goto label_190b1c;
        case 0x190b20u: goto label_190b20;
        case 0x190b24u: goto label_190b24;
        case 0x190b28u: goto label_190b28;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b30u: goto label_190b30;
        case 0x190b34u: goto label_190b34;
        case 0x190b38u: goto label_190b38;
        case 0x190b3cu: goto label_190b3c;
        case 0x190b40u: goto label_190b40;
        case 0x190b44u: goto label_190b44;
        case 0x190b48u: goto label_190b48;
        case 0x190b4cu: goto label_190b4c;
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b60u: goto label_190b60;
        case 0x190b64u: goto label_190b64;
        case 0x190b68u: goto label_190b68;
        case 0x190b6cu: goto label_190b6c;
        case 0x190b70u: goto label_190b70;
        case 0x190b74u: goto label_190b74;
        case 0x190b78u: goto label_190b78;
        case 0x190b7cu: goto label_190b7c;
        case 0x190b80u: goto label_190b80;
        case 0x190b84u: goto label_190b84;
        case 0x190b88u: goto label_190b88;
        case 0x190b8cu: goto label_190b8c;
        case 0x190b90u: goto label_190b90;
        case 0x190b94u: goto label_190b94;
        case 0x190b98u: goto label_190b98;
        case 0x190b9cu: goto label_190b9c;
        case 0x190ba0u: goto label_190ba0;
        case 0x190ba4u: goto label_190ba4;
        case 0x190ba8u: goto label_190ba8;
        case 0x190bacu: goto label_190bac;
        case 0x190bb0u: goto label_190bb0;
        case 0x190bb4u: goto label_190bb4;
        case 0x190bb8u: goto label_190bb8;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc4u: goto label_190bc4;
        case 0x190bc8u: goto label_190bc8;
        case 0x190bccu: goto label_190bcc;
        case 0x190bd0u: goto label_190bd0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190bd8u: goto label_190bd8;
        case 0x190bdcu: goto label_190bdc;
        case 0x190be0u: goto label_190be0;
        case 0x190be4u: goto label_190be4;
        case 0x190be8u: goto label_190be8;
        case 0x190becu: goto label_190bec;
        case 0x190bf0u: goto label_190bf0;
        case 0x190bf4u: goto label_190bf4;
        case 0x190bf8u: goto label_190bf8;
        case 0x190bfcu: goto label_190bfc;
        case 0x190c00u: goto label_190c00;
        case 0x190c04u: goto label_190c04;
        case 0x190c08u: goto label_190c08;
        case 0x190c0cu: goto label_190c0c;
        case 0x190c10u: goto label_190c10;
        case 0x190c14u: goto label_190c14;
        case 0x190c18u: goto label_190c18;
        case 0x190c1cu: goto label_190c1c;
        case 0x190c20u: goto label_190c20;
        case 0x190c24u: goto label_190c24;
        case 0x190c28u: goto label_190c28;
        case 0x190c2cu: goto label_190c2c;
        case 0x190c30u: goto label_190c30;
        case 0x190c34u: goto label_190c34;
        case 0x190c38u: goto label_190c38;
        case 0x190c3cu: goto label_190c3c;
        case 0x190c40u: goto label_190c40;
        case 0x190c44u: goto label_190c44;
        case 0x190c48u: goto label_190c48;
        case 0x190c4cu: goto label_190c4c;
        case 0x190c50u: goto label_190c50;
        case 0x190c54u: goto label_190c54;
        case 0x190c58u: goto label_190c58;
        case 0x190c5cu: goto label_190c5c;
        case 0x190c60u: goto label_190c60;
        case 0x190c64u: goto label_190c64;
        case 0x190c68u: goto label_190c68;
        case 0x190c6cu: goto label_190c6c;
        case 0x190c70u: goto label_190c70;
        case 0x190c74u: goto label_190c74;
        case 0x190c78u: goto label_190c78;
        case 0x190c7cu: goto label_190c7c;
        case 0x190c80u: goto label_190c80;
        case 0x190c84u: goto label_190c84;
        case 0x190c88u: goto label_190c88;
        case 0x190c8cu: goto label_190c8c;
        case 0x190c90u: goto label_190c90;
        case 0x190c94u: goto label_190c94;
        case 0x190c98u: goto label_190c98;
        case 0x190c9cu: goto label_190c9c;
        case 0x190ca0u: goto label_190ca0;
        case 0x190ca4u: goto label_190ca4;
        case 0x190ca8u: goto label_190ca8;
        case 0x190cacu: goto label_190cac;
        case 0x190cb0u: goto label_190cb0;
        case 0x190cb4u: goto label_190cb4;
        case 0x190cb8u: goto label_190cb8;
        case 0x190cbcu: goto label_190cbc;
        case 0x190cc0u: goto label_190cc0;
        case 0x190cc4u: goto label_190cc4;
        case 0x190cc8u: goto label_190cc8;
        case 0x190cccu: goto label_190ccc;
        case 0x190cd0u: goto label_190cd0;
        case 0x190cd4u: goto label_190cd4;
        case 0x190cd8u: goto label_190cd8;
        case 0x190cdcu: goto label_190cdc;
        case 0x190ce0u: goto label_190ce0;
        case 0x190ce4u: goto label_190ce4;
        case 0x190ce8u: goto label_190ce8;
        case 0x190cecu: goto label_190cec;
        case 0x190cf0u: goto label_190cf0;
        case 0x190cf4u: goto label_190cf4;
        case 0x190cf8u: goto label_190cf8;
        case 0x190cfcu: goto label_190cfc;
        case 0x190d00u: goto label_190d00;
        case 0x190d04u: goto label_190d04;
        case 0x190d08u: goto label_190d08;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d10u: goto label_190d10;
        case 0x190d14u: goto label_190d14;
        case 0x190d18u: goto label_190d18;
        case 0x190d1cu: goto label_190d1c;
        case 0x190d20u: goto label_190d20;
        case 0x190d24u: goto label_190d24;
        case 0x190d28u: goto label_190d28;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d30u: goto label_190d30;
        case 0x190d34u: goto label_190d34;
        case 0x190d38u: goto label_190d38;
        case 0x190d3cu: goto label_190d3c;
        case 0x190d40u: goto label_190d40;
        case 0x190d44u: goto label_190d44;
        case 0x190d48u: goto label_190d48;
        case 0x190d4cu: goto label_190d4c;
        case 0x190d50u: goto label_190d50;
        case 0x190d54u: goto label_190d54;
        case 0x190d58u: goto label_190d58;
        case 0x190d5cu: goto label_190d5c;
        case 0x190d60u: goto label_190d60;
        case 0x190d64u: goto label_190d64;
        case 0x190d68u: goto label_190d68;
        case 0x190d6cu: goto label_190d6c;
        case 0x190d70u: goto label_190d70;
        case 0x190d74u: goto label_190d74;
        case 0x190d78u: goto label_190d78;
        case 0x190d7cu: goto label_190d7c;
        case 0x190d80u: goto label_190d80;
        case 0x190d84u: goto label_190d84;
        case 0x190d88u: goto label_190d88;
        case 0x190d8cu: goto label_190d8c;
        case 0x190d90u: goto label_190d90;
        case 0x190d94u: goto label_190d94;
        case 0x190d98u: goto label_190d98;
        case 0x190d9cu: goto label_190d9c;
        case 0x190da0u: goto label_190da0;
        case 0x190da4u: goto label_190da4;
        case 0x190da8u: goto label_190da8;
        case 0x190dacu: goto label_190dac;
        case 0x190db0u: goto label_190db0;
        case 0x190db4u: goto label_190db4;
        case 0x190db8u: goto label_190db8;
        case 0x190dbcu: goto label_190dbc;
        case 0x190dc0u: goto label_190dc0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190dc8u: goto label_190dc8;
        case 0x190dccu: goto label_190dcc;
        case 0x190dd0u: goto label_190dd0;
        case 0x190dd4u: goto label_190dd4;
        case 0x190dd8u: goto label_190dd8;
        case 0x190ddcu: goto label_190ddc;
        case 0x190de0u: goto label_190de0;
        case 0x190de4u: goto label_190de4;
        case 0x190de8u: goto label_190de8;
        case 0x190decu: goto label_190dec;
        case 0x190df0u: goto label_190df0;
        case 0x190df4u: goto label_190df4;
        case 0x190df8u: goto label_190df8;
        case 0x190dfcu: goto label_190dfc;
        case 0x190e00u: goto label_190e00;
        case 0x190e04u: goto label_190e04;
        case 0x190e08u: goto label_190e08;
        case 0x190e0cu: goto label_190e0c;
        case 0x190e10u: goto label_190e10;
        case 0x190e14u: goto label_190e14;
        case 0x190e18u: goto label_190e18;
        case 0x190e1cu: goto label_190e1c;
        case 0x190e20u: goto label_190e20;
        case 0x190e24u: goto label_190e24;
        case 0x190e28u: goto label_190e28;
        case 0x190e2cu: goto label_190e2c;
        case 0x190e30u: goto label_190e30;
        case 0x190e34u: goto label_190e34;
        case 0x190e38u: goto label_190e38;
        case 0x190e3cu: goto label_190e3c;
        case 0x190e40u: goto label_190e40;
        case 0x190e44u: goto label_190e44;
        case 0x190e48u: goto label_190e48;
        case 0x190e4cu: goto label_190e4c;
        case 0x190e50u: goto label_190e50;
        case 0x190e54u: goto label_190e54;
        case 0x190e58u: goto label_190e58;
        case 0x190e5cu: goto label_190e5c;
        case 0x190e60u: goto label_190e60;
        case 0x190e64u: goto label_190e64;
        case 0x190e68u: goto label_190e68;
        case 0x190e6cu: goto label_190e6c;
        case 0x190e70u: goto label_190e70;
        case 0x190e74u: goto label_190e74;
        case 0x190e78u: goto label_190e78;
        case 0x190e7cu: goto label_190e7c;
        case 0x190e80u: goto label_190e80;
        case 0x190e84u: goto label_190e84;
        case 0x190e88u: goto label_190e88;
        case 0x190e8cu: goto label_190e8c;
        case 0x190e90u: goto label_190e90;
        case 0x190e94u: goto label_190e94;
        case 0x190e98u: goto label_190e98;
        case 0x190e9cu: goto label_190e9c;
        case 0x190ea0u: goto label_190ea0;
        case 0x190ea4u: goto label_190ea4;
        case 0x190ea8u: goto label_190ea8;
        case 0x190eacu: goto label_190eac;
        case 0x190eb0u: goto label_190eb0;
        case 0x190eb4u: goto label_190eb4;
        case 0x190eb8u: goto label_190eb8;
        case 0x190ebcu: goto label_190ebc;
        case 0x190ec0u: goto label_190ec0;
        case 0x190ec4u: goto label_190ec4;
        case 0x190ec8u: goto label_190ec8;
        case 0x190eccu: goto label_190ecc;
        case 0x190ed0u: goto label_190ed0;
        case 0x190ed4u: goto label_190ed4;
        case 0x190ed8u: goto label_190ed8;
        case 0x190edcu: goto label_190edc;
        case 0x190ee0u: goto label_190ee0;
        case 0x190ee4u: goto label_190ee4;
        case 0x190ee8u: goto label_190ee8;
        case 0x190eecu: goto label_190eec;
        case 0x190ef0u: goto label_190ef0;
        case 0x190ef4u: goto label_190ef4;
        case 0x190ef8u: goto label_190ef8;
        case 0x190efcu: goto label_190efc;
        case 0x190f00u: goto label_190f00;
        case 0x190f04u: goto label_190f04;
        case 0x190f08u: goto label_190f08;
        case 0x190f0cu: goto label_190f0c;
        case 0x190f10u: goto label_190f10;
        case 0x190f14u: goto label_190f14;
        case 0x190f18u: goto label_190f18;
        case 0x190f1cu: goto label_190f1c;
        case 0x190f20u: goto label_190f20;
        case 0x190f24u: goto label_190f24;
        case 0x190f28u: goto label_190f28;
        case 0x190f2cu: goto label_190f2c;
        case 0x190f30u: goto label_190f30;
        case 0x190f34u: goto label_190f34;
        case 0x190f38u: goto label_190f38;
        case 0x190f3cu: goto label_190f3c;
        case 0x190f40u: goto label_190f40;
        case 0x190f44u: goto label_190f44;
        case 0x190f48u: goto label_190f48;
        case 0x190f4cu: goto label_190f4c;
        case 0x190f50u: goto label_190f50;
        case 0x190f54u: goto label_190f54;
        case 0x190f58u: goto label_190f58;
        case 0x190f5cu: goto label_190f5c;
        case 0x190f60u: goto label_190f60;
        case 0x190f64u: goto label_190f64;
        case 0x190f68u: goto label_190f68;
        case 0x190f6cu: goto label_190f6c;
        case 0x190f70u: goto label_190f70;
        case 0x190f74u: goto label_190f74;
        case 0x190f78u: goto label_190f78;
        case 0x190f7cu: goto label_190f7c;
        case 0x190f80u: goto label_190f80;
        case 0x190f84u: goto label_190f84;
        case 0x190f88u: goto label_190f88;
        case 0x190f8cu: goto label_190f8c;
        case 0x190f90u: goto label_190f90;
        case 0x190f94u: goto label_190f94;
        case 0x190f98u: goto label_190f98;
        case 0x190f9cu: goto label_190f9c;
        case 0x190fa0u: goto label_190fa0;
        case 0x190fa4u: goto label_190fa4;
        case 0x190fa8u: goto label_190fa8;
        case 0x190facu: goto label_190fac;
        case 0x190fb0u: goto label_190fb0;
        case 0x190fb4u: goto label_190fb4;
        case 0x190fb8u: goto label_190fb8;
        case 0x190fbcu: goto label_190fbc;
        case 0x190fc0u: goto label_190fc0;
        case 0x190fc4u: goto label_190fc4;
        case 0x190fc8u: goto label_190fc8;
        case 0x190fccu: goto label_190fcc;
        case 0x190fd0u: goto label_190fd0;
        case 0x190fd4u: goto label_190fd4;
        case 0x190fd8u: goto label_190fd8;
        case 0x190fdcu: goto label_190fdc;
        case 0x190fe0u: goto label_190fe0;
        case 0x190fe4u: goto label_190fe4;
        case 0x190fe8u: goto label_190fe8;
        case 0x190fecu: goto label_190fec;
        case 0x190ff0u: goto label_190ff0;
        case 0x190ff4u: goto label_190ff4;
        case 0x190ff8u: goto label_190ff8;
        case 0x190ffcu: goto label_190ffc;
        case 0x191000u: goto label_191000;
        case 0x191004u: goto label_191004;
        case 0x191008u: goto label_191008;
        case 0x19100cu: goto label_19100c;
        case 0x191010u: goto label_191010;
        case 0x191014u: goto label_191014;
        case 0x191018u: goto label_191018;
        case 0x19101cu: goto label_19101c;
        case 0x191020u: goto label_191020;
        case 0x191024u: goto label_191024;
        case 0x191028u: goto label_191028;
        case 0x19102cu: goto label_19102c;
        case 0x191030u: goto label_191030;
        case 0x191034u: goto label_191034;
        case 0x191038u: goto label_191038;
        case 0x19103cu: goto label_19103c;
        case 0x191040u: goto label_191040;
        case 0x191044u: goto label_191044;
        case 0x191048u: goto label_191048;
        case 0x19104cu: goto label_19104c;
        case 0x191050u: goto label_191050;
        case 0x191054u: goto label_191054;
        case 0x191058u: goto label_191058;
        case 0x19105cu: goto label_19105c;
        case 0x191060u: goto label_191060;
        case 0x191064u: goto label_191064;
        case 0x191068u: goto label_191068;
        case 0x19106cu: goto label_19106c;
        case 0x191070u: goto label_191070;
        case 0x191074u: goto label_191074;
        case 0x191078u: goto label_191078;
        case 0x19107cu: goto label_19107c;
        case 0x191080u: goto label_191080;
        case 0x191084u: goto label_191084;
        case 0x191088u: goto label_191088;
        case 0x19108cu: goto label_19108c;
        case 0x191090u: goto label_191090;
        case 0x191094u: goto label_191094;
        case 0x191098u: goto label_191098;
        case 0x19109cu: goto label_19109c;
        case 0x1910a0u: goto label_1910a0;
        case 0x1910a4u: goto label_1910a4;
        case 0x1910a8u: goto label_1910a8;
        case 0x1910acu: goto label_1910ac;
        case 0x1910b0u: goto label_1910b0;
        case 0x1910b4u: goto label_1910b4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910bcu: goto label_1910bc;
        case 0x1910c0u: goto label_1910c0;
        case 0x1910c4u: goto label_1910c4;
        case 0x1910c8u: goto label_1910c8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910d0u: goto label_1910d0;
        case 0x1910d4u: goto label_1910d4;
        case 0x1910d8u: goto label_1910d8;
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910e4u: goto label_1910e4;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910ecu: goto label_1910ec;
        case 0x1910f0u: goto label_1910f0;
        case 0x1910f4u: goto label_1910f4;
        case 0x1910f8u: goto label_1910f8;
        case 0x1910fcu: goto label_1910fc;
        case 0x191100u: goto label_191100;
        case 0x191104u: goto label_191104;
        case 0x191108u: goto label_191108;
        case 0x19110cu: goto label_19110c;
        case 0x191110u: goto label_191110;
        case 0x191114u: goto label_191114;
        case 0x191118u: goto label_191118;
        case 0x19111cu: goto label_19111c;
        case 0x191120u: goto label_191120;
        case 0x191124u: goto label_191124;
        case 0x191128u: goto label_191128;
        case 0x19112cu: goto label_19112c;
        case 0x191130u: goto label_191130;
        case 0x191134u: goto label_191134;
        case 0x191138u: goto label_191138;
        case 0x19113cu: goto label_19113c;
        case 0x191140u: goto label_191140;
        case 0x191144u: goto label_191144;
        case 0x191148u: goto label_191148;
        case 0x19114cu: goto label_19114c;
        case 0x191150u: goto label_191150;
        case 0x191154u: goto label_191154;
        case 0x191158u: goto label_191158;
        case 0x19115cu: goto label_19115c;
        case 0x191160u: goto label_191160;
        case 0x191164u: goto label_191164;
        case 0x191168u: goto label_191168;
        case 0x19116cu: goto label_19116c;
        case 0x191170u: goto label_191170;
        case 0x191174u: goto label_191174;
        case 0x191178u: goto label_191178;
        case 0x19117cu: goto label_19117c;
        case 0x191180u: goto label_191180;
        case 0x191184u: goto label_191184;
        case 0x191188u: goto label_191188;
        case 0x19118cu: goto label_19118c;
        case 0x191190u: goto label_191190;
        case 0x191194u: goto label_191194;
        case 0x191198u: goto label_191198;
        case 0x19119cu: goto label_19119c;
        case 0x1911a0u: goto label_1911a0;
        case 0x1911a4u: goto label_1911a4;
        case 0x1911a8u: goto label_1911a8;
        case 0x1911acu: goto label_1911ac;
        case 0x1911b0u: goto label_1911b0;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911b8u: goto label_1911b8;
        case 0x1911bcu: goto label_1911bc;
        case 0x1911c0u: goto label_1911c0;
        case 0x1911c4u: goto label_1911c4;
        case 0x1911c8u: goto label_1911c8;
        case 0x1911ccu: goto label_1911cc;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911d4u: goto label_1911d4;
        case 0x1911d8u: goto label_1911d8;
        case 0x1911dcu: goto label_1911dc;
        case 0x1911e0u: goto label_1911e0;
        case 0x1911e4u: goto label_1911e4;
        case 0x1911e8u: goto label_1911e8;
        case 0x1911ecu: goto label_1911ec;
        case 0x1911f0u: goto label_1911f0;
        case 0x1911f4u: goto label_1911f4;
        case 0x1911f8u: goto label_1911f8;
        case 0x1911fcu: goto label_1911fc;
        case 0x191200u: goto label_191200;
        case 0x191204u: goto label_191204;
        case 0x191208u: goto label_191208;
        case 0x19120cu: goto label_19120c;
        case 0x191210u: goto label_191210;
        case 0x191214u: goto label_191214;
        case 0x191218u: goto label_191218;
        case 0x19121cu: goto label_19121c;
        default: return;
    }

label_190a50:
    // 0x190a50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_190a54:
    // 0x190a54: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x190a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_190a58:
    // 0x190a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190a5c:
    // 0x190a5c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x190a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_190a60:
    // 0x190a60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190a64:
    // 0x190a64: 0x3c03424c  lui         $v1, 0x424C
    ctx->pc = 0x190a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16972 << 16));
label_190a68:
    // 0x190a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190a6c:
    // 0x190a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190a70:
    // 0x190a70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x190a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_190a74:
    // 0x190a74: 0x3463cccc  ori         $v1, $v1, 0xCCCC
    ctx->pc = 0x190a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
label_190a78:
    // 0x190a78: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x190a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190a7c:
    // 0x190a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190a80:
    // 0x190a80: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x190a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_190a84:
    // 0x190a84: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_190a88:
    // 0x190a88: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x190a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_190a8c:
    // 0x190a8c: 0xc066e14  jal         func_19B850
label_190a90:
    if (ctx->pc == 0x190A90u) {
        ctx->pc = 0x190A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A8Cu;
        // 0x190a90: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A94u;
        goto label_190a94;
    }
    ctx->pc = 0x190A8Cu;
    SET_GPR_U32(ctx, 31, 0x190A94u);
    ctx->pc = 0x190A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A8Cu;
    // 0x190a90: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190A94u;
label_190a94:
    // 0x190a94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190a98:
    // 0x190a98: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190a9c:
    // 0x190a9c: 0xc066e02  jal         func_19B808
label_190aa0:
    if (ctx->pc == 0x190AA0u) {
        ctx->pc = 0x190AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A9Cu;
        // 0x190aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AA4u;
        goto label_190aa4;
    }
    ctx->pc = 0x190A9Cu;
    SET_GPR_U32(ctx, 31, 0x190AA4u);
    ctx->pc = 0x190AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A9Cu;
    // 0x190aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190AA4u;
label_190aa4:
    // 0x190aa4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x190aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_190aa8:
    // 0x190aa8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190aac:
    // 0x190aac: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_190ab0:
    // 0x190ab0: 0xc066d98  jal         func_19B660
label_190ab4:
    if (ctx->pc == 0x190AB4u) {
        ctx->pc = 0x190AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AB0u;
        // 0x190ab4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AB8u;
        goto label_190ab8;
    }
    ctx->pc = 0x190AB0u;
    SET_GPR_U32(ctx, 31, 0x190AB8u);
    ctx->pc = 0x190AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AB0u;
    // 0x190ab4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x190AB8u;
label_190ab8:
    // 0x190ab8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190abc:
    // 0x190abc: 0xc066daa  jal         func_19B6A8
label_190ac0:
    if (ctx->pc == 0x190AC0u) {
        ctx->pc = 0x190AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ABCu;
        // 0x190ac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AC4u;
        goto label_190ac4;
    }
    ctx->pc = 0x190ABCu;
    SET_GPR_U32(ctx, 31, 0x190AC4u);
    ctx->pc = 0x190AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190ABCu;
    // 0x190ac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x190AC4u;
label_190ac4:
    // 0x190ac4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x190ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_190ac8:
    // 0x190ac8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190acc:
    // 0x190acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190ad0:
    // 0x190ad0: 0xc066e14  jal         func_19B850
label_190ad4:
    if (ctx->pc == 0x190AD4u) {
        ctx->pc = 0x190AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AD0u;
        // 0x190ad4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AD8u;
        goto label_190ad8;
    }
    ctx->pc = 0x190AD0u;
    SET_GPR_U32(ctx, 31, 0x190AD8u);
    ctx->pc = 0x190AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AD0u;
    // 0x190ad4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190AD8u;
label_190ad8:
    // 0x190ad8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190adc:
    // 0x190adc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x190adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190ae0:
    // 0x190ae0: 0xc066e14  jal         func_19B850
label_190ae4:
    if (ctx->pc == 0x190AE4u) {
        ctx->pc = 0x190AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AE0u;
        // 0x190ae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AE8u;
        goto label_190ae8;
    }
    ctx->pc = 0x190AE0u;
    SET_GPR_U32(ctx, 31, 0x190AE8u);
    ctx->pc = 0x190AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AE0u;
    // 0x190ae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190AE8u;
label_190ae8:
    // 0x190ae8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190aec:
    // 0x190aec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190af0:
    // 0x190af0: 0xc066e02  jal         func_19B808
label_190af4:
    if (ctx->pc == 0x190AF4u) {
        ctx->pc = 0x190AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AF0u;
        // 0x190af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190AF8u;
        goto label_190af8;
    }
    ctx->pc = 0x190AF0u;
    SET_GPR_U32(ctx, 31, 0x190AF8u);
    ctx->pc = 0x190AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AF0u;
    // 0x190af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190AF8u;
label_190af8:
    // 0x190af8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190afc:
    // 0x190afc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190b00:
    // 0x190b00: 0xc066e14  jal         func_19B850
label_190b04:
    if (ctx->pc == 0x190B04u) {
        ctx->pc = 0x190B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B00u;
        // 0x190b04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B08u;
        goto label_190b08;
    }
    ctx->pc = 0x190B00u;
    SET_GPR_U32(ctx, 31, 0x190B08u);
    ctx->pc = 0x190B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B00u;
    // 0x190b04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190B08u;
label_190b08:
    // 0x190b08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190b0c:
    // 0x190b0c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b10:
    // 0x190b10: 0xc066e02  jal         func_19B808
label_190b14:
    if (ctx->pc == 0x190B14u) {
        ctx->pc = 0x190B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B10u;
        // 0x190b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B18u;
        goto label_190b18;
    }
    ctx->pc = 0x190B10u;
    SET_GPR_U32(ctx, 31, 0x190B18u);
    ctx->pc = 0x190B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B10u;
    // 0x190b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190B18u;
label_190b18:
    // 0x190b18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b1c:
    // 0x190b1c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x190b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190b20:
    // 0x190b20: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x190b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b24:
    // 0x190b24: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190b28:
    // 0x190b28: 0xc064978  jal         func_1925E0
label_190b2c:
    if (ctx->pc == 0x190B2Cu) {
        ctx->pc = 0x190B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B28u;
        // 0x190b2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B30u;
        goto label_190b30;
    }
    ctx->pc = 0x190B28u;
    SET_GPR_U32(ctx, 31, 0x190B30u);
    ctx->pc = 0x190B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B28u;
    // 0x190b2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x190B30u;
label_190b30:
    // 0x190b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190b34:
    // 0x190b34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b38:
    // 0x190b38: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190b3c:
    // 0x190b3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_190b40:
    // 0x190b40: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x190b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190b44:
    // 0x190b44: 0xc064978  jal         func_1925E0
label_190b48:
    if (ctx->pc == 0x190B48u) {
        ctx->pc = 0x190B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B44u;
        // 0x190b48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B4Cu;
        goto label_190b4c;
    }
    ctx->pc = 0x190B44u;
    SET_GPR_U32(ctx, 31, 0x190B4Cu);
    ctx->pc = 0x190B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B44u;
    // 0x190b48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x190B4Cu;
label_190b4c:
    // 0x190b4c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_190b50:
    if (ctx->pc == 0x190B50u) {
        ctx->pc = 0x190B54u;
        goto label_190b54;
    }
    ctx->pc = 0x190B4Cu;
    {
        const bool branch_taken_0x190b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b4c) {
            ctx->pc = 0x190B5Cu;
            goto label_190b5c;
        }
    }
    ctx->pc = 0x190B54u;
label_190b54:
    // 0x190b54: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_190b58:
    if (ctx->pc == 0x190B58u) {
        ctx->pc = 0x190B5Cu;
        goto label_190b5c;
    }
    ctx->pc = 0x190B54u;
    {
        const bool branch_taken_0x190b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190b54) {
            ctx->pc = 0x190C6Cu;
            goto label_190c6c;
        }
    }
    ctx->pc = 0x190B5Cu;
label_190b5c:
    // 0x190b5c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_190b60:
    if (ctx->pc == 0x190B60u) {
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190B64u;
        goto label_190b64;
    }
    ctx->pc = 0x190B5Cu;
    {
        const bool branch_taken_0x190b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B5Cu;
        // 0x190b60: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b5c) {
            ctx->pc = 0x190BE8u;
            goto label_190be8;
        }
    }
    ctx->pc = 0x190B64u;
label_190b64:
    // 0x190b64: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190b68:
    // 0x190b68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x190b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_190b6c:
    // 0x190b6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x190b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190b70:
    // 0x190b70: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190b74:
    // 0x190b74: 0x4a0002ff  vnop
    ctx->pc = 0x190b74u;
    // NOP operation, no action needed for VU0
label_190b78:
    // 0x190b78: 0x4a0002ff  vnop
    ctx->pc = 0x190b78u;
    // NOP operation, no action needed for VU0
label_190b7c:
    // 0x190b7c: 0x4a0002ff  vnop
    ctx->pc = 0x190b7cu;
    // NOP operation, no action needed for VU0
label_190b80:
    // 0x190b80: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x190b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190b84:
    // 0x190b84: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_190b88:
    // 0x190b88: 0x4a0002ff  vnop
    ctx->pc = 0x190b88u;
    // NOP operation, no action needed for VU0
label_190b8c:
    // 0x190b8c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190b8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190b90:
    // 0x190b90: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x190b90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190b94:
    // 0x190b94: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190b98:
    // 0x190b98: 0x4a0002ff  vnop
    ctx->pc = 0x190b98u;
    // NOP operation, no action needed for VU0
label_190b9c:
    // 0x190b9c: 0x4a0002ff  vnop
    ctx->pc = 0x190b9cu;
    // NOP operation, no action needed for VU0
label_190ba0:
    // 0x190ba0: 0x4a0002ff  vnop
    ctx->pc = 0x190ba0u;
    // NOP operation, no action needed for VU0
label_190ba4:
    // 0x190ba4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190ba4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_190ba8:
    // 0x190ba8: 0x4a0003bf  vwaitq
    ctx->pc = 0x190ba8u;
    // VWAITQ (Q already resolved in this runtime)
label_190bac:
    // 0x190bac: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x190bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_190bb0:
    // 0x190bb0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x190bb0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190bb4:
    // 0x190bb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x190bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_190bb8:
    // 0x190bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190bbc:
    // 0x190bbc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190bc0:
    // 0x190bc0: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x190bc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_190bc4:
    // 0x190bc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190bc8:
    // 0x190bc8: 0xc066e14  jal         func_19B850
label_190bcc:
    if (ctx->pc == 0x190BCCu) {
        ctx->pc = 0x190BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BC8u;
        // 0x190bcc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BD0u;
        goto label_190bd0;
    }
    ctx->pc = 0x190BC8u;
    SET_GPR_U32(ctx, 31, 0x190BD0u);
    ctx->pc = 0x190BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BC8u;
    // 0x190bcc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190BD0u;
label_190bd0:
    // 0x190bd0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190bd4:
    // 0x190bd4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_190bd8:
    // 0x190bd8: 0xc066e02  jal         func_19B808
label_190bdc:
    if (ctx->pc == 0x190BDCu) {
        ctx->pc = 0x190BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD8u;
        // 0x190bdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BE0u;
        goto label_190be0;
    }
    ctx->pc = 0x190BD8u;
    SET_GPR_U32(ctx, 31, 0x190BE0u);
    ctx->pc = 0x190BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BD8u;
    // 0x190bdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190BE0u;
label_190be0:
    // 0x190be0: 0x10000023  b           . + 4 + (0x23 << 2)
label_190be4:
    if (ctx->pc == 0x190BE4u) {
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE0u;
        // 0x190be4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BE8u;
        goto label_190be8;
    }
    ctx->pc = 0x190BE0u;
    {
        const bool branch_taken_0x190be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE0u;
        // 0x190be4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190be0) {
            ctx->pc = 0x190C70u;
            goto label_190c70;
        }
    }
    ctx->pc = 0x190BE8u;
label_190be8:
    // 0x190be8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_190bec:
    if (ctx->pc == 0x190BECu) {
        ctx->pc = 0x190BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE8u;
        // 0x190bec: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190BF0u;
        goto label_190bf0;
    }
    ctx->pc = 0x190BE8u;
    {
        const bool branch_taken_0x190be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BE8u;
        // 0x190bec: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190be8) {
            ctx->pc = 0x190C6Cu;
            goto label_190c6c;
        }
    }
    ctx->pc = 0x190BF0u;
label_190bf0:
    // 0x190bf0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190bf4:
    // 0x190bf4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x190bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_190bf8:
    // 0x190bf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x190bf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190bfc:
    // 0x190bfc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190bfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190c00:
    // 0x190c00: 0x4a0002ff  vnop
    ctx->pc = 0x190c00u;
    // NOP operation, no action needed for VU0
label_190c04:
    // 0x190c04: 0x4a0002ff  vnop
    ctx->pc = 0x190c04u;
    // NOP operation, no action needed for VU0
label_190c08:
    // 0x190c08: 0x4a0002ff  vnop
    ctx->pc = 0x190c08u;
    // NOP operation, no action needed for VU0
label_190c0c:
    // 0x190c0c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x190c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190c10:
    // 0x190c10: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_190c14:
    // 0x190c14: 0x4a0002ff  vnop
    ctx->pc = 0x190c14u;
    // NOP operation, no action needed for VU0
label_190c18:
    // 0x190c18: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190c1c:
    // 0x190c1c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x190c1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190c20:
    // 0x190c20: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190c24:
    // 0x190c24: 0x4a0002ff  vnop
    ctx->pc = 0x190c24u;
    // NOP operation, no action needed for VU0
label_190c28:
    // 0x190c28: 0x4a0002ff  vnop
    ctx->pc = 0x190c28u;
    // NOP operation, no action needed for VU0
label_190c2c:
    // 0x190c2c: 0x4a0002ff  vnop
    ctx->pc = 0x190c2cu;
    // NOP operation, no action needed for VU0
label_190c30:
    // 0x190c30: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190c30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_190c34:
    // 0x190c34: 0x4a0003bf  vwaitq
    ctx->pc = 0x190c34u;
    // VWAITQ (Q already resolved in this runtime)
label_190c38:
    // 0x190c38: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x190c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_190c3c:
    // 0x190c3c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x190c3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190c40:
    // 0x190c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_190c44:
    // 0x190c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190c48:
    // 0x190c48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190c4c:
    // 0x190c4c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x190c4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_190c50:
    // 0x190c50: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190c54:
    // 0x190c54: 0xc066e14  jal         func_19B850
label_190c58:
    if (ctx->pc == 0x190C58u) {
        ctx->pc = 0x190C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C54u;
        // 0x190c58: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C5Cu;
        goto label_190c5c;
    }
    ctx->pc = 0x190C54u;
    SET_GPR_U32(ctx, 31, 0x190C5Cu);
    ctx->pc = 0x190C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C54u;
    // 0x190c58: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190C5Cu;
label_190c5c:
    // 0x190c5c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190c60:
    // 0x190c60: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x190c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_190c64:
    // 0x190c64: 0xc066e02  jal         func_19B808
label_190c68:
    if (ctx->pc == 0x190C68u) {
        ctx->pc = 0x190C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C64u;
        // 0x190c68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C6Cu;
        goto label_190c6c;
    }
    ctx->pc = 0x190C64u;
    SET_GPR_U32(ctx, 31, 0x190C6Cu);
    ctx->pc = 0x190C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C64u;
    // 0x190c68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190C6Cu;
label_190c6c:
    // 0x190c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190c70:
    // 0x190c70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x190c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190c74:
    // 0x190c74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190c78:
    // 0x190c78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190c7c:
    // 0x190c7c: 0x3e00008  jr          $ra
label_190c80:
    if (ctx->pc == 0x190C80u) {
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190C84u;
        goto label_190c84;
    }
    ctx->pc = 0x190C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C84u;
label_190c84:
    // 0x190c84: 0x0  nop
    ctx->pc = 0x190c84u;
    // NOP
label_190c88:
    // 0x190c88: 0x0  nop
    ctx->pc = 0x190c88u;
    // NOP
label_190c8c:
    // 0x190c8c: 0x0  nop
    ctx->pc = 0x190c8cu;
    // NOP
label_190c90:
    // 0x190c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_190c94:
    // 0x190c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x190c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_190c98:
    // 0x190c98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x190c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_190c9c:
    // 0x190c9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190ca0:
    // 0x190ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190ca4:
    // 0x190ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190ca8:
    // 0x190ca8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x190ca8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_190cac:
    // 0x190cac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x190cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190cb0:
    // 0x190cb0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x190cb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_190cb4:
    // 0x190cb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190cb8:
    // 0x190cb8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x190cb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_190cbc:
    // 0x190cbc: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x190cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190cc0:
    // 0x190cc0: 0xc066e08  jal         func_19B820
label_190cc4:
    if (ctx->pc == 0x190CC4u) {
        ctx->pc = 0x190CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC0u;
        // 0x190cc4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CC8u;
        goto label_190cc8;
    }
    ctx->pc = 0x190CC0u;
    SET_GPR_U32(ctx, 31, 0x190CC8u);
    ctx->pc = 0x190CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CC0u;
    // 0x190cc4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x190CC8u;
label_190cc8:
    // 0x190cc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190ccc:
    // 0x190ccc: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x190cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_190cd0:
    // 0x190cd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x190cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190cd4:
    // 0x190cd4: 0xc066daa  jal         func_19B6A8
label_190cd8:
    if (ctx->pc == 0x190CD8u) {
        ctx->pc = 0x190CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CD4u;
        // 0x190cd8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CDCu;
        goto label_190cdc;
    }
    ctx->pc = 0x190CD4u;
    SET_GPR_U32(ctx, 31, 0x190CDCu);
    ctx->pc = 0x190CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CD4u;
    // 0x190cd8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x190CDCu;
label_190cdc:
    // 0x190cdc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_190ce0:
    // 0x190ce0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190ce4:
    // 0x190ce4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_190ce8:
    // 0x190ce8: 0xc066e14  jal         func_19B850
label_190cec:
    if (ctx->pc == 0x190CECu) {
        ctx->pc = 0x190CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CE8u;
        // 0x190cec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190CF0u;
        goto label_190cf0;
    }
    ctx->pc = 0x190CE8u;
    SET_GPR_U32(ctx, 31, 0x190CF0u);
    ctx->pc = 0x190CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CE8u;
    // 0x190cec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x190CF0u;
label_190cf0:
    // 0x190cf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_190cf4:
    // 0x190cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190cf8:
    // 0x190cf8: 0xc066e02  jal         func_19B808
label_190cfc:
    if (ctx->pc == 0x190CFCu) {
        ctx->pc = 0x190CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CF8u;
        // 0x190cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D00u;
        goto label_190d00;
    }
    ctx->pc = 0x190CF8u;
    SET_GPR_U32(ctx, 31, 0x190D00u);
    ctx->pc = 0x190CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CF8u;
    // 0x190cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190D00u;
label_190d00:
    // 0x190d00: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x190d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190d04:
    // 0x190d04: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x190d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_190d08:
    // 0x190d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d0c:
    // 0x190d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190d10:
    // 0x190d10: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x190d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_190d14:
    // 0x190d14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_190d18:
    // 0x190d18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190d1c:
    // 0x190d1c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x190d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_190d20:
    // 0x190d20: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x190d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190d24:
    // 0x190d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x190d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_190d28:
    // 0x190d28: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x190d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_190d2c:
    // 0x190d2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190d30:
    // 0x190d30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_190d34:
    // 0x190d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190d38:
    // 0x190d38: 0xc049e3c  jal         func_1278F0
label_190d3c:
    if (ctx->pc == 0x190D3Cu) {
        ctx->pc = 0x190D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D38u;
        // 0x190d3c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D40u;
        goto label_190d40;
    }
    ctx->pc = 0x190D38u;
    SET_GPR_U32(ctx, 31, 0x190D40u);
    ctx->pc = 0x190D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D38u;
    // 0x190d3c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x190D38u, 0x190D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D40u;
label_190d40:
    // 0x190d40: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x190d40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_190d44:
    // 0x190d44: 0xc049e3c  jal         func_1278F0
label_190d48:
    if (ctx->pc == 0x190D48u) {
        ctx->pc = 0x190D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D44u;
        // 0x190d48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D4Cu;
        goto label_190d4c;
    }
    ctx->pc = 0x190D44u;
    SET_GPR_U32(ctx, 31, 0x190D4Cu);
    ctx->pc = 0x190D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D44u;
    // 0x190d48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x190D44u, 0x190D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D4Cu;
label_190d4c:
    // 0x190d4c: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x190d4cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_190d50:
    // 0x190d50: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_190d54:
    // 0x190d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d58:
    // 0x190d58: 0x0  nop
    ctx->pc = 0x190d58u;
    // NOP
label_190d5c:
    // 0x190d5c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x190d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d60:
    // 0x190d60: 0x0  nop
    ctx->pc = 0x190d60u;
    // NOP
label_190d64:
    // 0x190d64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_190d68:
    if (ctx->pc == 0x190D68u) {
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x3c02c2c8  lui         $v0, 0xC2C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D6Cu;
        goto label_190d6c;
    }
    ctx->pc = 0x190D64u;
    {
        const bool branch_taken_0x190d64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x3c02c2c8  lui         $v0, 0xC2C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d64) {
            ctx->pc = 0x190D74u;
            goto label_190d74;
        }
    }
    ctx->pc = 0x190D6Cu;
label_190d6c:
    // 0x190d6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_190d70:
    if (ctx->pc == 0x190D70u) {
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190D74u;
        goto label_190d74;
    }
    ctx->pc = 0x190D6Cu;
    {
        const bool branch_taken_0x190d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D6Cu;
        // 0x190d70: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d6c) {
            ctx->pc = 0x190D90u;
            goto label_190d90;
        }
    }
    ctx->pc = 0x190D74u;
label_190d74:
    // 0x190d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190d78:
    // 0x190d78: 0x0  nop
    ctx->pc = 0x190d78u;
    // NOP
label_190d7c:
    // 0x190d7c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x190d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190d80:
    // 0x190d80: 0x0  nop
    ctx->pc = 0x190d80u;
    // NOP
label_190d84:
    // 0x190d84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_190d88:
    if (ctx->pc == 0x190D88u) {
        ctx->pc = 0x190D8Cu;
        goto label_190d8c;
    }
    ctx->pc = 0x190D84u;
    {
        const bool branch_taken_0x190d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d84) {
            ctx->pc = 0x190D90u;
            goto label_190d90;
        }
    }
    ctx->pc = 0x190D8Cu;
label_190d8c:
    // 0x190d8c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x190d8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_190d90:
    // 0x190d90: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_190d94:
    // 0x190d94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x190d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_190d98:
    // 0x190d98: 0xc06d51e  jal         func_1B5478
label_190d9c:
    if (ctx->pc == 0x190D9Cu) {
        ctx->pc = 0x190D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D98u;
        // 0x190d9c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DA0u;
        goto label_190da0;
    }
    ctx->pc = 0x190D98u;
    SET_GPR_U32(ctx, 31, 0x190DA0u);
    ctx->pc = 0x190D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D98u;
    // 0x190d9c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x190DA0u;
label_190da0:
    // 0x190da0: 0x3c03be68  lui         $v1, 0xBE68
    ctx->pc = 0x190da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48744 << 16));
label_190da4:
    // 0x190da4: 0x962200e4  lhu         $v0, 0xE4($s1)
    ctx->pc = 0x190da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_190da8:
    // 0x190da8: 0x34635697  ori         $v1, $v1, 0x5697
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22167);
label_190dac:
    // 0x190dac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190db0:
    // 0x190db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190db4:
    // 0x190db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_190db8:
    if (ctx->pc == 0x190DB8u) {
        ctx->pc = 0x190DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DB4u;
        // 0x190db8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DBCu;
        goto label_190dbc;
    }
    ctx->pc = 0x190DB4u;
    {
        const bool branch_taken_0x190db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DB4u;
        // 0x190db8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190db4) {
            ctx->pc = 0x190DCCu;
            goto label_190dcc;
        }
    }
    ctx->pc = 0x190DBCu;
label_190dbc:
    // 0x190dbc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_190dc0:
    // 0x190dc0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x190dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_190dc4:
    // 0x190dc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_190dc8:
    if (ctx->pc == 0x190DC8u) {
        ctx->pc = 0x190DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC4u;
        // 0x190dc8: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DCCu;
        goto label_190dcc;
    }
    ctx->pc = 0x190DC4u;
    {
        const bool branch_taken_0x190dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DC4u;
        // 0x190dc8: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dc4) {
            ctx->pc = 0x190DD4u;
            goto label_190dd4;
        }
    }
    ctx->pc = 0x190DCCu;
label_190dcc:
    // 0x190dcc: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x190dccu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_190dd0:
    // 0x190dd0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x190dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190dd4:
    // 0x190dd4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x190dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190dd8:
    // 0x190dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x190dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_190ddc:
    // 0x190ddc: 0xc06d448  jal         func_1B5120
label_190de0:
    if (ctx->pc == 0x190DE0u) {
        ctx->pc = 0x190DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DDCu;
        // 0x190de0: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190DE4u;
        goto label_190de4;
    }
    ctx->pc = 0x190DDCu;
    SET_GPR_U32(ctx, 31, 0x190DE4u);
    ctx->pc = 0x190DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190DDCu;
    // 0x190de0: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x190DE4u;
label_190de4:
    // 0x190de4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x190de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_190de8:
    // 0x190de8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190dec:
    // 0x190dec: 0x0  nop
    ctx->pc = 0x190decu;
    // NOP
label_190df0:
    // 0x190df0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190df4:
    // 0x190df4: 0x0  nop
    ctx->pc = 0x190df4u;
    // NOP
label_190df8:
    // 0x190df8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_190dfc:
    if (ctx->pc == 0x190DFCu) {
        ctx->pc = 0x190DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF8u;
        // 0x190dfc: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E00u;
        goto label_190e00;
    }
    ctx->pc = 0x190DF8u;
    {
        const bool branch_taken_0x190df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF8u;
        // 0x190dfc: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190df8) {
            ctx->pc = 0x190E30u;
            goto label_190e30;
        }
    }
    ctx->pc = 0x190E00u;
label_190e00:
    // 0x190e00: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x190e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e04:
    // 0x190e04: 0xc06d448  jal         func_1B5120
label_190e08:
    if (ctx->pc == 0x190E08u) {
        ctx->pc = 0x190E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E04u;
        // 0x190e08: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E0Cu;
        goto label_190e0c;
    }
    ctx->pc = 0x190E04u;
    SET_GPR_U32(ctx, 31, 0x190E0Cu);
    ctx->pc = 0x190E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E04u;
    // 0x190e08: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x190E0Cu;
label_190e0c:
    // 0x190e0c: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x190e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_190e10:
    // 0x190e10: 0x3463fa36  ori         $v1, $v1, 0xFA36
    ctx->pc = 0x190e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64054);
label_190e14:
    // 0x190e14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190e18:
    // 0x190e18: 0x0  nop
    ctx->pc = 0x190e18u;
    // NOP
label_190e1c:
    // 0x190e1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190e20:
    // 0x190e20: 0x0  nop
    ctx->pc = 0x190e20u;
    // NOP
label_190e24:
    // 0x190e24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_190e28:
    if (ctx->pc == 0x190E28u) {
        ctx->pc = 0x190E2Cu;
        goto label_190e2c;
    }
    ctx->pc = 0x190E24u;
    {
        const bool branch_taken_0x190e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190e24) {
            ctx->pc = 0x190E38u;
            goto label_190e38;
        }
    }
    ctx->pc = 0x190E2Cu;
label_190e2c:
    // 0x190e2c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x190e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_190e30:
    // 0x190e30: 0x10000002  b           . + 4 + (0x2 << 2)
label_190e34:
    if (ctx->pc == 0x190E34u) {
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E38u;
        goto label_190e38;
    }
    ctx->pc = 0x190E30u;
    {
        const bool branch_taken_0x190e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E30u;
        // 0x190e34: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e30) {
            ctx->pc = 0x190E3Cu;
            goto label_190e3c;
        }
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x190e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_190e3c:
    // 0x190e3c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190e40:
    // 0x190e40: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_190e44:
    if (ctx->pc == 0x190E44u) {
        ctx->pc = 0x190E48u;
        goto label_190e48;
    }
    ctx->pc = 0x190E40u;
    {
        const bool branch_taken_0x190e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e40) {
            ctx->pc = 0x190F64u;
            goto label_190f64;
        }
    }
    ctx->pc = 0x190E48u;
label_190e48:
    // 0x190e48: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x190e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190e4c:
    // 0x190e4c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x190e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e50:
    // 0x190e50: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x190e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_190e54:
    // 0x190e54: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_190e58:
    if (ctx->pc == 0x190E58u) {
        ctx->pc = 0x190E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E54u;
        // 0x190e58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E5Cu;
        goto label_190e5c;
    }
    ctx->pc = 0x190E54u;
    {
        const bool branch_taken_0x190e54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x190E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E54u;
        // 0x190e58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e54) {
            ctx->pc = 0x190E68u;
            goto label_190e68;
        }
    }
    ctx->pc = 0x190E5Cu;
label_190e5c:
    // 0x190e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x190e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190e60:
    // 0x190e60: 0x10000008  b           . + 4 + (0x8 << 2)
label_190e64:
    if (ctx->pc == 0x190E64u) {
        ctx->pc = 0x190E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E60u;
        // 0x190e64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190E68u;
        goto label_190e68;
    }
    ctx->pc = 0x190E60u;
    {
        const bool branch_taken_0x190e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E60u;
        // 0x190e64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e60) {
            ctx->pc = 0x190E84u;
            goto label_190e84;
        }
    }
    ctx->pc = 0x190E68u;
label_190e68:
    // 0x190e68: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_190e6c:
    // 0x190e6c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x190e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_190e70:
    // 0x190e70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_190e74:
    // 0x190e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190e78:
    // 0x190e78: 0x0  nop
    ctx->pc = 0x190e78u;
    // NOP
label_190e7c:
    // 0x190e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190e80:
    // 0x190e80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190e84:
    // 0x190e84: 0x0  nop
    ctx->pc = 0x190e84u;
    // NOP
label_190e88:
    // 0x190e88: 0x0  nop
    ctx->pc = 0x190e88u;
    // NOP
label_190e8c:
    // 0x190e8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x190e8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_190e90:
    // 0x190e90: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x190e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190e94:
    // 0x190e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_190e98:
    // 0x190e98: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x190e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_190e9c:
    // 0x190e9c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x190e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190ea0:
    // 0x190ea0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x190ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190ea4:
    // 0x190ea4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_190ea8:
    if (ctx->pc == 0x190EA8u) {
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EACu;
        goto label_190eac;
    }
    ctx->pc = 0x190EA4u;
    {
        const bool branch_taken_0x190ea4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EA4u;
        // 0x190ea8: 0x4600a041  sub.s       $f1, $f20, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea4) {
            ctx->pc = 0x190EB8u;
            goto label_190eb8;
        }
    }
    ctx->pc = 0x190EACu;
label_190eac:
    // 0x190eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190eb0:
    // 0x190eb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_190eb4:
    if (ctx->pc == 0x190EB4u) {
        ctx->pc = 0x190EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EB0u;
        // 0x190eb4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190EB8u;
        goto label_190eb8;
    }
    ctx->pc = 0x190EB0u;
    {
        const bool branch_taken_0x190eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EB0u;
        // 0x190eb4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190eb0) {
            ctx->pc = 0x190ED4u;
            goto label_190ed4;
        }
    }
    ctx->pc = 0x190EB8u;
label_190eb8:
    // 0x190eb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x190eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_190ebc:
    // 0x190ebc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190ec0:
    // 0x190ec0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_190ec4:
    // 0x190ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190ec8:
    // 0x190ec8: 0x0  nop
    ctx->pc = 0x190ec8u;
    // NOP
label_190ecc:
    // 0x190ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_190ed0:
    // 0x190ed0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190ed4:
    // 0x190ed4: 0x0  nop
    ctx->pc = 0x190ed4u;
    // NOP
label_190ed8:
    // 0x190ed8: 0x0  nop
    ctx->pc = 0x190ed8u;
    // NOP
label_190edc:
    // 0x190edc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x190edcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_190ee0:
    // 0x190ee0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x190ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_190ee4:
    // 0x190ee4: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_190ee8:
    // 0x190ee8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x190ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190eec:
    // 0x190eec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190ef0:
    // 0x190ef0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x190ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190ef4:
    // 0x190ef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_190ef8:
    // 0x190ef8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x190ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_190efc:
    // 0x190efc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190f00:
    // 0x190f00: 0xc066e44  jal         func_19B910
label_190f04:
    if (ctx->pc == 0x190F04u) {
        ctx->pc = 0x190F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F00u;
        // 0x190f04: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F08u;
        goto label_190f08;
    }
    ctx->pc = 0x190F00u;
    SET_GPR_U32(ctx, 31, 0x190F08u);
    ctx->pc = 0x190F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F00u;
    // 0x190f04: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x190F08u;
label_190f08:
    // 0x190f08: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x190f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190f0c:
    // 0x190f0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f10:
    // 0x190f10: 0xc066e6c  jal         func_19B9B0
label_190f14:
    if (ctx->pc == 0x190F14u) {
        ctx->pc = 0x190F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F10u;
        // 0x190f14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F18u;
        goto label_190f18;
    }
    ctx->pc = 0x190F10u;
    SET_GPR_U32(ctx, 31, 0x190F18u);
    ctx->pc = 0x190F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F10u;
    // 0x190f14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x190F18u;
label_190f18:
    // 0x190f18: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x190f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190f1c:
    // 0x190f1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f20:
    // 0x190f20: 0xc066e96  jal         func_19BA58
label_190f24:
    if (ctx->pc == 0x190F24u) {
        ctx->pc = 0x190F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F20u;
        // 0x190f24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F28u;
        goto label_190f28;
    }
    ctx->pc = 0x190F20u;
    SET_GPR_U32(ctx, 31, 0x190F28u);
    ctx->pc = 0x190F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F20u;
    // 0x190f24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x190F28u;
label_190f28:
    // 0x190f28: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x190f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190f2c:
    // 0x190f2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f30:
    // 0x190f30: 0xc066ec0  jal         func_19BB00
label_190f34:
    if (ctx->pc == 0x190F34u) {
        ctx->pc = 0x190F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F30u;
        // 0x190f34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F38u;
        goto label_190f38;
    }
    ctx->pc = 0x190F30u;
    SET_GPR_U32(ctx, 31, 0x190F38u);
    ctx->pc = 0x190F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F30u;
    // 0x190f34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x190F38u;
label_190f38:
    // 0x190f38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_190f3c:
    // 0x190f3c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190f40:
    // 0x190f40: 0xc066d7a  jal         func_19B5E8
label_190f44:
    if (ctx->pc == 0x190F44u) {
        ctx->pc = 0x190F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F40u;
        // 0x190f44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F48u;
        goto label_190f48;
    }
    ctx->pc = 0x190F40u;
    SET_GPR_U32(ctx, 31, 0x190F48u);
    ctx->pc = 0x190F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F40u;
    // 0x190f44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190F48u;
label_190f48:
    // 0x190f48: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_190f4c:
    // 0x190f4c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190f50:
    // 0x190f50: 0xc066e02  jal         func_19B808
label_190f54:
    if (ctx->pc == 0x190F54u) {
        ctx->pc = 0x190F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F50u;
        // 0x190f54: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F58u;
        goto label_190f58;
    }
    ctx->pc = 0x190F50u;
    SET_GPR_U32(ctx, 31, 0x190F58u);
    ctx->pc = 0x190F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F50u;
    // 0x190f54: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190F58u;
label_190f58:
    // 0x190f58: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190f5c:
    // 0x190f5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x190f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_190f60:
    // 0x190f60: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x190f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_190f64:
    // 0x190f64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x190f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_190f68:
    // 0x190f68: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x190f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_190f6c:
    // 0x190f6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x190f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_190f70:
    // 0x190f70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x190f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_190f74:
    // 0x190f74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190f78:
    // 0x190f78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x190f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190f7c:
    // 0x190f7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x190f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190f80:
    // 0x190f80: 0x3e00008  jr          $ra
label_190f84:
    if (ctx->pc == 0x190F84u) {
        ctx->pc = 0x190F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F80u;
        // 0x190f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190F88u;
        goto label_190f88;
    }
    ctx->pc = 0x190F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F80u;
        // 0x190f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190F88u;
label_190f88:
    // 0x190f88: 0x0  nop
    ctx->pc = 0x190f88u;
    // NOP
label_190f8c:
    // 0x190f8c: 0x0  nop
    ctx->pc = 0x190f8cu;
    // NOP
label_190f90:
    // 0x190f90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x190f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_190f94:
    // 0x190f94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_190f98:
    // 0x190f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_190f9c:
    // 0x190f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_190fa0:
    // 0x190fa0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x190fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_190fa4:
    // 0x190fa4: 0x948200e4  lhu         $v0, 0xE4($a0)
    ctx->pc = 0x190fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 228)));
label_190fa8:
    // 0x190fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190fac:
    // 0x190fac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_190fb0:
    if (ctx->pc == 0x190FB0u) {
        ctx->pc = 0x190FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FACu;
        // 0x190fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FB4u;
        goto label_190fb4;
    }
    ctx->pc = 0x190FACu;
    {
        const bool branch_taken_0x190fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FACu;
        // 0x190fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fac) {
            ctx->pc = 0x191014u;
            goto label_191014;
        }
    }
    ctx->pc = 0x190FB4u;
label_190fb4:
    // 0x190fb4: 0xc066e26  jal         func_19B898
label_190fb8:
    if (ctx->pc == 0x190FB8u) {
        ctx->pc = 0x190FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FB4u;
        // 0x190fb8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FBCu;
        goto label_190fbc;
    }
    ctx->pc = 0x190FB4u;
    SET_GPR_U32(ctx, 31, 0x190FBCu);
    ctx->pc = 0x190FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190FB4u;
    // 0x190fb8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190FBCu;
label_190fbc:
    // 0x190fbc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190fc0:
    // 0x190fc0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_190fc4:
    // 0x190fc4: 0xc066e08  jal         func_19B820
label_190fc8:
    if (ctx->pc == 0x190FC8u) {
        ctx->pc = 0x190FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FC4u;
        // 0x190fc8: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190FCCu;
        goto label_190fcc;
    }
    ctx->pc = 0x190FC4u;
    SET_GPR_U32(ctx, 31, 0x190FCCu);
    ctx->pc = 0x190FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190FC4u;
    // 0x190fc8: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x190FCCu;
label_190fcc:
    // 0x190fcc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x190fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190fd0:
    // 0x190fd0: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_190fd4:
    // 0x190fd4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x190fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190fd8:
    // 0x190fd8: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x190fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190fdc:
    // 0x190fdc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x190fdcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_190fe0:
    // 0x190fe0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x190fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_190fe4:
    // 0x190fe4: 0x46000344  c1          0x344
    ctx->pc = 0x190fe4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_190fe8:
    // 0x190fe8: 0x0  nop
    ctx->pc = 0x190fe8u;
    // NOP
label_190fec:
    // 0x190fec: 0x0  nop
    ctx->pc = 0x190fecu;
    // NOP
label_190ff0:
    // 0x190ff0: 0xc06d51e  jal         func_1B5478
label_190ff4:
    if (ctx->pc == 0x190FF4u) {
        ctx->pc = 0x190FF8u;
        goto label_190ff8;
    }
    ctx->pc = 0x190FF0u;
    SET_GPR_U32(ctx, 31, 0x190FF8u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x190FF8u;
label_190ff8:
    // 0x190ff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x190ff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_190ffc:
    // 0x190ffc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x190ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_191000:
    // 0x191000: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x191000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191004:
    // 0x191004: 0xc06d51e  jal         func_1B5478
label_191008:
    if (ctx->pc == 0x191008u) {
        ctx->pc = 0x191008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191004u;
        // 0x191008: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19100Cu;
        goto label_19100c;
    }
    ctx->pc = 0x191004u;
    SET_GPR_U32(ctx, 31, 0x19100Cu);
    ctx->pc = 0x191008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191004u;
    // 0x191008: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x19100Cu;
label_19100c:
    // 0x19100c: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_191010:
    if (ctx->pc == 0x191010u) {
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191014u;
        goto label_191014;
    }
    ctx->pc = 0x19100Cu;
    {
        const bool branch_taken_0x19100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19100c) {
            ctx->pc = 0x1913E8u;
            { ctx->pc = 0x1913e8; return; }
        }
    }
    ctx->pc = 0x191014u;
label_191014:
    // 0x191014: 0xc066e26  jal         func_19B898
label_191018:
    if (ctx->pc == 0x191018u) {
        ctx->pc = 0x191018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191014u;
        // 0x191018: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19101Cu;
        goto label_19101c;
    }
    ctx->pc = 0x191014u;
    SET_GPR_U32(ctx, 31, 0x19101Cu);
    ctx->pc = 0x191018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191014u;
    // 0x191018: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19101Cu;
label_19101c:
    // 0x19101c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_191020:
    // 0x191020: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_191024:
    // 0x191024: 0xc066e08  jal         func_19B820
label_191028:
    if (ctx->pc == 0x191028u) {
        ctx->pc = 0x191028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191024u;
        // 0x191028: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19102Cu;
        goto label_19102c;
    }
    ctx->pc = 0x191024u;
    SET_GPR_U32(ctx, 31, 0x19102Cu);
    ctx->pc = 0x191028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191024u;
    // 0x191028: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x19102Cu;
label_19102c:
    // 0x19102c: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x19102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_191030:
    // 0x191030: 0xc06d51e  jal         func_1B5478
label_191034:
    if (ctx->pc == 0x191034u) {
        ctx->pc = 0x191034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191030u;
        // 0x191034: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191038u;
        goto label_191038;
    }
    ctx->pc = 0x191030u;
    SET_GPR_U32(ctx, 31, 0x191038u);
    ctx->pc = 0x191034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191030u;
    // 0x191034: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191038u;
label_191038:
    // 0x191038: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19103c:
    // 0x19103c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19103cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_191040:
    // 0x191040: 0xc06d448  jal         func_1B5120
label_191044:
    if (ctx->pc == 0x191044u) {
        ctx->pc = 0x191044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191040u;
        // 0x191044: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191048u;
        goto label_191048;
    }
    ctx->pc = 0x191040u;
    SET_GPR_U32(ctx, 31, 0x191048u);
    ctx->pc = 0x191044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191040u;
    // 0x191044: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x191048u;
label_191048:
    // 0x191048: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x191048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_19104c:
    // 0x19104c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191050:
    // 0x191050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191054:
    // 0x191054: 0x0  nop
    ctx->pc = 0x191054u;
    // NOP
label_191058:
    // 0x191058: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19105c:
    // 0x19105c: 0x0  nop
    ctx->pc = 0x19105cu;
    // NOP
label_191060:
    // 0x191060: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_191064:
    if (ctx->pc == 0x191064u) {
        ctx->pc = 0x191068u;
        goto label_191068;
    }
    ctx->pc = 0x191060u;
    {
        const bool branch_taken_0x191060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191060) {
            ctx->pc = 0x1910BCu;
            goto label_1910bc;
        }
    }
    ctx->pc = 0x191068u;
label_191068:
    // 0x191068: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19106c:
    // 0x19106c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19106cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191070:
    // 0x191070: 0x0  nop
    ctx->pc = 0x191070u;
    // NOP
label_191074:
    // 0x191074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191078:
    // 0x191078: 0x0  nop
    ctx->pc = 0x191078u;
    // NOP
label_19107c:
    // 0x19107c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_191080:
    if (ctx->pc == 0x191080u) {
        ctx->pc = 0x191080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19107Cu;
        // 0x191080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191084u;
        goto label_191084;
    }
    ctx->pc = 0x19107Cu;
    {
        const bool branch_taken_0x19107c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19107Cu;
        // 0x191080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19107c) {
            ctx->pc = 0x191094u;
            goto label_191094;
        }
    }
    ctx->pc = 0x191084u;
label_191084:
    // 0x191084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191088:
    // 0x191088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19108c:
    // 0x19108c: 0x0  nop
    ctx->pc = 0x19108cu;
    // NOP
label_191090:
    // 0x191090: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x191090u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_191094:
    // 0x191094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191098:
    // 0x191098: 0x0  nop
    ctx->pc = 0x191098u;
    // NOP
label_19109c:
    // 0x19109c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19109cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910a0:
    // 0x1910a0: 0x0  nop
    ctx->pc = 0x1910a0u;
    // NOP
label_1910a4:
    // 0x1910a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1910a8:
    if (ctx->pc == 0x1910A8u) {
        ctx->pc = 0x1910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910A4u;
        // 0x1910a8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910ACu;
        goto label_1910ac;
    }
    ctx->pc = 0x1910A4u;
    {
        const bool branch_taken_0x1910a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910A4u;
        // 0x1910a8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910a4) {
            ctx->pc = 0x1910BCu;
            goto label_1910bc;
        }
    }
    ctx->pc = 0x1910ACu;
label_1910ac:
    // 0x1910ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1910acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1910b0:
    // 0x1910b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1910b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1910b4:
    // 0x1910b4: 0x0  nop
    ctx->pc = 0x1910b4u;
    // NOP
label_1910b8:
    // 0x1910b8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1910b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1910bc:
    // 0x1910bc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1910bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1910c0:
    // 0x1910c0: 0xc06d448  jal         func_1B5120
label_1910c4:
    if (ctx->pc == 0x1910C4u) {
        ctx->pc = 0x1910C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910C0u;
        // 0x1910c4: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910C8u;
        goto label_1910c8;
    }
    ctx->pc = 0x1910C0u;
    SET_GPR_U32(ctx, 31, 0x1910C8u);
    ctx->pc = 0x1910C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910C0u;
    // 0x1910c4: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1910C8u;
label_1910c8:
    // 0x1910c8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1910c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1910cc:
    // 0x1910cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1910ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1910d0:
    // 0x1910d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1910d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1910d4:
    // 0x1910d4: 0x0  nop
    ctx->pc = 0x1910d4u;
    // NOP
label_1910d8:
    // 0x1910d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1910d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910dc:
    // 0x1910dc: 0x0  nop
    ctx->pc = 0x1910dcu;
    // NOP
label_1910e0:
    // 0x1910e0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_1910e4:
    if (ctx->pc == 0x1910E4u) {
        ctx->pc = 0x1910E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E0u;
        // 0x1910e4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1910E8u;
        goto label_1910e8;
    }
    ctx->pc = 0x1910E0u;
    {
        const bool branch_taken_0x1910e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1910E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E0u;
        // 0x1910e4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e0) {
            ctx->pc = 0x1911C4u;
            goto label_1911c4;
        }
    }
    ctx->pc = 0x1910E8u;
label_1910e8:
    // 0x1910e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1910e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1910ec:
    // 0x1910ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1910ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1910f0:
    // 0x1910f0: 0x0  nop
    ctx->pc = 0x1910f0u;
    // NOP
label_1910f4:
    // 0x1910f4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1910f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1910f8:
    // 0x1910f8: 0x0  nop
    ctx->pc = 0x1910f8u;
    // NOP
label_1910fc:
    // 0x1910fc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191100:
    if (ctx->pc == 0x191100u) {
        ctx->pc = 0x191104u;
        goto label_191104;
    }
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191118u;
            goto label_191118;
        }
    }
    ctx->pc = 0x191104u;
label_191104:
    // 0x191104: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191108:
    // 0x191108: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19110c:
    // 0x19110c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19110cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191110:
    // 0x191110: 0x1000000e  b           . + 4 + (0xE << 2)
label_191114:
    if (ctx->pc == 0x191114u) {
        ctx->pc = 0x191114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191110u;
        // 0x191114: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191118u;
        goto label_191118;
    }
    ctx->pc = 0x191110u;
    {
        const bool branch_taken_0x191110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191110u;
        // 0x191114: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191110) {
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191118u;
label_191118:
    // 0x191118: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19111c:
    // 0x19111c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191120:
    // 0x191120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191124:
    // 0x191124: 0x0  nop
    ctx->pc = 0x191124u;
    // NOP
label_191128:
    // 0x191128: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x191128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19112c:
    // 0x19112c: 0x0  nop
    ctx->pc = 0x19112cu;
    // NOP
label_191130:
    // 0x191130: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191134:
    if (ctx->pc == 0x191134u) {
        ctx->pc = 0x191138u;
        goto label_191138;
    }
    ctx->pc = 0x191130u;
    {
        const bool branch_taken_0x191130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191130) {
            ctx->pc = 0x19114Cu;
            goto label_19114c;
        }
    }
    ctx->pc = 0x191138u;
label_191138:
    // 0x191138: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19113c:
    // 0x19113c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191140:
    // 0x191140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191144:
    // 0x191144: 0x0  nop
    ctx->pc = 0x191144u;
    // NOP
label_191148:
    // 0x191148: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x191148u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19114c:
    // 0x19114c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_191150:
    // 0x191150: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_191154:
    // 0x191154: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x191154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191158:
    // 0x191158: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_19115c:
    // 0x19115c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19115cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_191160:
    // 0x191160: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191164:
    // 0x191164: 0xc066e44  jal         func_19B910
label_191168:
    if (ctx->pc == 0x191168u) {
        ctx->pc = 0x191168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191164u;
        // 0x191168: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19116Cu;
        goto label_19116c;
    }
    ctx->pc = 0x191164u;
    SET_GPR_U32(ctx, 31, 0x19116Cu);
    ctx->pc = 0x191168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191164u;
    // 0x191168: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19116Cu;
label_19116c:
    // 0x19116c: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x19116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191170:
    // 0x191170: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191174:
    // 0x191174: 0xc066e6c  jal         func_19B9B0
label_191178:
    if (ctx->pc == 0x191178u) {
        ctx->pc = 0x191178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191174u;
        // 0x191178: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19117Cu;
        goto label_19117c;
    }
    ctx->pc = 0x191174u;
    SET_GPR_U32(ctx, 31, 0x19117Cu);
    ctx->pc = 0x191178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191174u;
    // 0x191178: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x19117Cu;
label_19117c:
    // 0x19117c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x19117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191180:
    // 0x191180: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191184:
    // 0x191184: 0xc066e96  jal         func_19BA58
label_191188:
    if (ctx->pc == 0x191188u) {
        ctx->pc = 0x191188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191184u;
        // 0x191188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19118Cu;
        goto label_19118c;
    }
    ctx->pc = 0x191184u;
    SET_GPR_U32(ctx, 31, 0x19118Cu);
    ctx->pc = 0x191188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191184u;
    // 0x191188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x19118Cu;
label_19118c:
    // 0x19118c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x19118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191190:
    // 0x191190: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_191194:
    // 0x191194: 0xc066ec0  jal         func_19BB00
label_191198:
    if (ctx->pc == 0x191198u) {
        ctx->pc = 0x191198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191194u;
        // 0x191198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19119Cu;
        goto label_19119c;
    }
    ctx->pc = 0x191194u;
    SET_GPR_U32(ctx, 31, 0x19119Cu);
    ctx->pc = 0x191198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191194u;
    // 0x191198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x19119Cu;
label_19119c:
    // 0x19119c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1911a0:
    // 0x1911a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1911a4:
    // 0x1911a4: 0xc066d7a  jal         func_19B5E8
label_1911a8:
    if (ctx->pc == 0x1911A8u) {
        ctx->pc = 0x1911A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911A4u;
        // 0x1911a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911ACu;
        goto label_1911ac;
    }
    ctx->pc = 0x1911A4u;
    SET_GPR_U32(ctx, 31, 0x1911ACu);
    ctx->pc = 0x1911A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911A4u;
    // 0x1911a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1911ACu;
label_1911ac:
    // 0x1911ac: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1911acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1911b0:
    // 0x1911b0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1911b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1911b4:
    // 0x1911b4: 0xc066e02  jal         func_19B808
label_1911b8:
    if (ctx->pc == 0x1911B8u) {
        ctx->pc = 0x1911B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911B4u;
        // 0x1911b8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911BCu;
        goto label_1911bc;
    }
    ctx->pc = 0x1911B4u;
    SET_GPR_U32(ctx, 31, 0x1911BCu);
    ctx->pc = 0x1911B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911B4u;
    // 0x1911b8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1911BCu;
label_1911bc:
    // 0x1911bc: 0xc064720  jal         func_191C80
label_1911c0:
    if (ctx->pc == 0x1911C0u) {
        ctx->pc = 0x1911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911BCu;
        // 0x1911c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911C4u;
        goto label_1911c4;
    }
    ctx->pc = 0x1911BCu;
    SET_GPR_U32(ctx, 31, 0x1911C4u);
    ctx->pc = 0x1911C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911BCu;
    // 0x1911c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C80u;
    { ctx->pc = 0x191c80; return; }
    ctx->pc = 0x1911C4u;
label_1911c4:
    // 0x1911c4: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1911c8:
    // 0x1911c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1911cc:
    // 0x1911cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1911d0:
    // 0x1911d0: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1911d4:
    // 0x1911d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1911d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1911d8:
    // 0x1911d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1911dc:
    // 0x1911dc: 0xc066d7a  jal         func_19B5E8
label_1911e0:
    if (ctx->pc == 0x1911E0u) {
        ctx->pc = 0x1911E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911DCu;
        // 0x1911e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911E4u;
        goto label_1911e4;
    }
    ctx->pc = 0x1911DCu;
    SET_GPR_U32(ctx, 31, 0x1911E4u);
    ctx->pc = 0x1911E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911DCu;
    // 0x1911e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1911E4u;
label_1911e4:
    // 0x1911e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1911e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1911e8:
    // 0x1911e8: 0xc066daa  jal         func_19B6A8
label_1911ec:
    if (ctx->pc == 0x1911ECu) {
        ctx->pc = 0x1911ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911E8u;
        // 0x1911ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911F0u;
        goto label_1911f0;
    }
    ctx->pc = 0x1911E8u;
    SET_GPR_U32(ctx, 31, 0x1911F0u);
    ctx->pc = 0x1911ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911E8u;
    // 0x1911ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x1911F0u;
label_1911f0:
    // 0x1911f0: 0xc06d448  jal         func_1B5120
label_1911f4:
    if (ctx->pc == 0x1911F4u) {
        ctx->pc = 0x1911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F0u;
        // 0x1911f4: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1911F8u;
        goto label_1911f8;
    }
    ctx->pc = 0x1911F0u;
    SET_GPR_U32(ctx, 31, 0x1911F8u);
    ctx->pc = 0x1911F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911F0u;
    // 0x1911f4: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1911F8u;
label_1911f8:
    // 0x1911f8: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1911f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1911fc:
    // 0x1911fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1911fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191200:
    // 0x191200: 0x0  nop
    ctx->pc = 0x191200u;
    // NOP
label_191204:
    // 0x191204: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_191208:
    if (ctx->pc == 0x191208u) {
        ctx->pc = 0x19120Cu;
        goto label_19120c;
    }
    ctx->pc = 0x191204u;
    {
        const bool branch_taken_0x191204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191204) {
            ctx->pc = 0x191248u;
            { ctx->pc = 0x191248; return; }
        }
    }
    ctx->pc = 0x19120Cu;
label_19120c:
    // 0x19120c: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x19120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191210:
    // 0x191210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191214:
    // 0x191214: 0x0  nop
    ctx->pc = 0x191214u;
    // NOP
label_191218:
    // 0x191218: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x191218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19121c:
    // 0x19121c: 0x0  nop
    ctx->pc = 0x19121cu;
    // NOP
    ctx->pc = 0x191220u;
    return;
}
