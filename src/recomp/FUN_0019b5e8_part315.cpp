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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part315(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x234b08u: goto label_234b08;
        case 0x234b0cu: goto label_234b0c;
        case 0x234b10u: goto label_234b10;
        case 0x234b14u: goto label_234b14;
        case 0x234b18u: goto label_234b18;
        case 0x234b1cu: goto label_234b1c;
        case 0x234b20u: goto label_234b20;
        case 0x234b24u: goto label_234b24;
        case 0x234b28u: goto label_234b28;
        case 0x234b2cu: goto label_234b2c;
        case 0x234b30u: goto label_234b30;
        case 0x234b34u: goto label_234b34;
        case 0x234b38u: goto label_234b38;
        case 0x234b3cu: goto label_234b3c;
        case 0x234b40u: goto label_234b40;
        case 0x234b44u: goto label_234b44;
        case 0x234b48u: goto label_234b48;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b50u: goto label_234b50;
        case 0x234b54u: goto label_234b54;
        case 0x234b58u: goto label_234b58;
        case 0x234b5cu: goto label_234b5c;
        case 0x234b60u: goto label_234b60;
        case 0x234b64u: goto label_234b64;
        case 0x234b68u: goto label_234b68;
        case 0x234b6cu: goto label_234b6c;
        case 0x234b70u: goto label_234b70;
        case 0x234b74u: goto label_234b74;
        case 0x234b78u: goto label_234b78;
        case 0x234b7cu: goto label_234b7c;
        case 0x234b80u: goto label_234b80;
        case 0x234b84u: goto label_234b84;
        case 0x234b88u: goto label_234b88;
        case 0x234b8cu: goto label_234b8c;
        case 0x234b90u: goto label_234b90;
        case 0x234b94u: goto label_234b94;
        case 0x234b98u: goto label_234b98;
        case 0x234b9cu: goto label_234b9c;
        case 0x234ba0u: goto label_234ba0;
        case 0x234ba4u: goto label_234ba4;
        case 0x234ba8u: goto label_234ba8;
        case 0x234bacu: goto label_234bac;
        case 0x234bb0u: goto label_234bb0;
        case 0x234bb4u: goto label_234bb4;
        case 0x234bb8u: goto label_234bb8;
        case 0x234bbcu: goto label_234bbc;
        case 0x234bc0u: goto label_234bc0;
        case 0x234bc4u: goto label_234bc4;
        case 0x234bc8u: goto label_234bc8;
        case 0x234bccu: goto label_234bcc;
        case 0x234bd0u: goto label_234bd0;
        case 0x234bd4u: goto label_234bd4;
        case 0x234bd8u: goto label_234bd8;
        case 0x234bdcu: goto label_234bdc;
        case 0x234be0u: goto label_234be0;
        case 0x234be4u: goto label_234be4;
        case 0x234be8u: goto label_234be8;
        case 0x234becu: goto label_234bec;
        case 0x234bf0u: goto label_234bf0;
        case 0x234bf4u: goto label_234bf4;
        case 0x234bf8u: goto label_234bf8;
        case 0x234bfcu: goto label_234bfc;
        case 0x234c00u: goto label_234c00;
        case 0x234c04u: goto label_234c04;
        case 0x234c08u: goto label_234c08;
        case 0x234c0cu: goto label_234c0c;
        case 0x234c10u: goto label_234c10;
        case 0x234c14u: goto label_234c14;
        case 0x234c18u: goto label_234c18;
        case 0x234c1cu: goto label_234c1c;
        case 0x234c20u: goto label_234c20;
        case 0x234c24u: goto label_234c24;
        case 0x234c28u: goto label_234c28;
        case 0x234c2cu: goto label_234c2c;
        case 0x234c30u: goto label_234c30;
        case 0x234c34u: goto label_234c34;
        case 0x234c38u: goto label_234c38;
        case 0x234c3cu: goto label_234c3c;
        case 0x234c40u: goto label_234c40;
        case 0x234c44u: goto label_234c44;
        case 0x234c48u: goto label_234c48;
        case 0x234c4cu: goto label_234c4c;
        case 0x234c50u: goto label_234c50;
        case 0x234c54u: goto label_234c54;
        case 0x234c58u: goto label_234c58;
        case 0x234c5cu: goto label_234c5c;
        case 0x234c60u: goto label_234c60;
        case 0x234c64u: goto label_234c64;
        case 0x234c68u: goto label_234c68;
        case 0x234c6cu: goto label_234c6c;
        case 0x234c70u: goto label_234c70;
        case 0x234c74u: goto label_234c74;
        case 0x234c78u: goto label_234c78;
        case 0x234c7cu: goto label_234c7c;
        case 0x234c80u: goto label_234c80;
        case 0x234c84u: goto label_234c84;
        case 0x234c88u: goto label_234c88;
        case 0x234c8cu: goto label_234c8c;
        case 0x234c90u: goto label_234c90;
        case 0x234c94u: goto label_234c94;
        case 0x234c98u: goto label_234c98;
        case 0x234c9cu: goto label_234c9c;
        case 0x234ca0u: goto label_234ca0;
        case 0x234ca4u: goto label_234ca4;
        case 0x234ca8u: goto label_234ca8;
        case 0x234cacu: goto label_234cac;
        case 0x234cb0u: goto label_234cb0;
        case 0x234cb4u: goto label_234cb4;
        case 0x234cb8u: goto label_234cb8;
        case 0x234cbcu: goto label_234cbc;
        case 0x234cc0u: goto label_234cc0;
        case 0x234cc4u: goto label_234cc4;
        case 0x234cc8u: goto label_234cc8;
        case 0x234cccu: goto label_234ccc;
        case 0x234cd0u: goto label_234cd0;
        case 0x234cd4u: goto label_234cd4;
        case 0x234cd8u: goto label_234cd8;
        case 0x234cdcu: goto label_234cdc;
        case 0x234ce0u: goto label_234ce0;
        case 0x234ce4u: goto label_234ce4;
        case 0x234ce8u: goto label_234ce8;
        case 0x234cecu: goto label_234cec;
        case 0x234cf0u: goto label_234cf0;
        case 0x234cf4u: goto label_234cf4;
        case 0x234cf8u: goto label_234cf8;
        case 0x234cfcu: goto label_234cfc;
        case 0x234d00u: goto label_234d00;
        case 0x234d04u: goto label_234d04;
        case 0x234d08u: goto label_234d08;
        case 0x234d0cu: goto label_234d0c;
        case 0x234d10u: goto label_234d10;
        case 0x234d14u: goto label_234d14;
        case 0x234d18u: goto label_234d18;
        case 0x234d1cu: goto label_234d1c;
        case 0x234d20u: goto label_234d20;
        case 0x234d24u: goto label_234d24;
        case 0x234d28u: goto label_234d28;
        case 0x234d2cu: goto label_234d2c;
        case 0x234d30u: goto label_234d30;
        case 0x234d34u: goto label_234d34;
        case 0x234d38u: goto label_234d38;
        case 0x234d3cu: goto label_234d3c;
        case 0x234d40u: goto label_234d40;
        case 0x234d44u: goto label_234d44;
        case 0x234d48u: goto label_234d48;
        case 0x234d4cu: goto label_234d4c;
        case 0x234d50u: goto label_234d50;
        case 0x234d54u: goto label_234d54;
        case 0x234d58u: goto label_234d58;
        case 0x234d5cu: goto label_234d5c;
        case 0x234d60u: goto label_234d60;
        case 0x234d64u: goto label_234d64;
        case 0x234d68u: goto label_234d68;
        case 0x234d6cu: goto label_234d6c;
        case 0x234d70u: goto label_234d70;
        case 0x234d74u: goto label_234d74;
        case 0x234d78u: goto label_234d78;
        case 0x234d7cu: goto label_234d7c;
        case 0x234d80u: goto label_234d80;
        case 0x234d84u: goto label_234d84;
        case 0x234d88u: goto label_234d88;
        case 0x234d8cu: goto label_234d8c;
        case 0x234d90u: goto label_234d90;
        case 0x234d94u: goto label_234d94;
        case 0x234d98u: goto label_234d98;
        case 0x234d9cu: goto label_234d9c;
        case 0x234da0u: goto label_234da0;
        case 0x234da4u: goto label_234da4;
        case 0x234da8u: goto label_234da8;
        case 0x234dacu: goto label_234dac;
        case 0x234db0u: goto label_234db0;
        case 0x234db4u: goto label_234db4;
        case 0x234db8u: goto label_234db8;
        case 0x234dbcu: goto label_234dbc;
        case 0x234dc0u: goto label_234dc0;
        case 0x234dc4u: goto label_234dc4;
        case 0x234dc8u: goto label_234dc8;
        case 0x234dccu: goto label_234dcc;
        case 0x234dd0u: goto label_234dd0;
        case 0x234dd4u: goto label_234dd4;
        case 0x234dd8u: goto label_234dd8;
        case 0x234ddcu: goto label_234ddc;
        case 0x234de0u: goto label_234de0;
        case 0x234de4u: goto label_234de4;
        case 0x234de8u: goto label_234de8;
        case 0x234decu: goto label_234dec;
        case 0x234df0u: goto label_234df0;
        case 0x234df4u: goto label_234df4;
        case 0x234df8u: goto label_234df8;
        case 0x234dfcu: goto label_234dfc;
        case 0x234e00u: goto label_234e00;
        case 0x234e04u: goto label_234e04;
        case 0x234e08u: goto label_234e08;
        case 0x234e0cu: goto label_234e0c;
        case 0x234e10u: goto label_234e10;
        case 0x234e14u: goto label_234e14;
        case 0x234e18u: goto label_234e18;
        case 0x234e1cu: goto label_234e1c;
        case 0x234e20u: goto label_234e20;
        case 0x234e24u: goto label_234e24;
        case 0x234e28u: goto label_234e28;
        case 0x234e2cu: goto label_234e2c;
        case 0x234e30u: goto label_234e30;
        case 0x234e34u: goto label_234e34;
        case 0x234e38u: goto label_234e38;
        case 0x234e3cu: goto label_234e3c;
        case 0x234e40u: goto label_234e40;
        case 0x234e44u: goto label_234e44;
        case 0x234e48u: goto label_234e48;
        case 0x234e4cu: goto label_234e4c;
        case 0x234e50u: goto label_234e50;
        case 0x234e54u: goto label_234e54;
        case 0x234e58u: goto label_234e58;
        case 0x234e5cu: goto label_234e5c;
        case 0x234e60u: goto label_234e60;
        case 0x234e64u: goto label_234e64;
        case 0x234e68u: goto label_234e68;
        case 0x234e6cu: goto label_234e6c;
        case 0x234e70u: goto label_234e70;
        case 0x234e74u: goto label_234e74;
        case 0x234e78u: goto label_234e78;
        case 0x234e7cu: goto label_234e7c;
        case 0x234e80u: goto label_234e80;
        case 0x234e84u: goto label_234e84;
        case 0x234e88u: goto label_234e88;
        case 0x234e8cu: goto label_234e8c;
        case 0x234e90u: goto label_234e90;
        case 0x234e94u: goto label_234e94;
        case 0x234e98u: goto label_234e98;
        case 0x234e9cu: goto label_234e9c;
        case 0x234ea0u: goto label_234ea0;
        case 0x234ea4u: goto label_234ea4;
        case 0x234ea8u: goto label_234ea8;
        case 0x234eacu: goto label_234eac;
        case 0x234eb0u: goto label_234eb0;
        case 0x234eb4u: goto label_234eb4;
        case 0x234eb8u: goto label_234eb8;
        case 0x234ebcu: goto label_234ebc;
        case 0x234ec0u: goto label_234ec0;
        case 0x234ec4u: goto label_234ec4;
        case 0x234ec8u: goto label_234ec8;
        case 0x234eccu: goto label_234ecc;
        case 0x234ed0u: goto label_234ed0;
        case 0x234ed4u: goto label_234ed4;
        case 0x234ed8u: goto label_234ed8;
        case 0x234edcu: goto label_234edc;
        case 0x234ee0u: goto label_234ee0;
        case 0x234ee4u: goto label_234ee4;
        case 0x234ee8u: goto label_234ee8;
        case 0x234eecu: goto label_234eec;
        case 0x234ef0u: goto label_234ef0;
        case 0x234ef4u: goto label_234ef4;
        case 0x234ef8u: goto label_234ef8;
        case 0x234efcu: goto label_234efc;
        case 0x234f00u: goto label_234f00;
        case 0x234f04u: goto label_234f04;
        case 0x234f08u: goto label_234f08;
        case 0x234f0cu: goto label_234f0c;
        case 0x234f10u: goto label_234f10;
        case 0x234f14u: goto label_234f14;
        case 0x234f18u: goto label_234f18;
        case 0x234f1cu: goto label_234f1c;
        case 0x234f20u: goto label_234f20;
        case 0x234f24u: goto label_234f24;
        case 0x234f28u: goto label_234f28;
        case 0x234f2cu: goto label_234f2c;
        case 0x234f30u: goto label_234f30;
        case 0x234f34u: goto label_234f34;
        case 0x234f38u: goto label_234f38;
        case 0x234f3cu: goto label_234f3c;
        case 0x234f40u: goto label_234f40;
        case 0x234f44u: goto label_234f44;
        case 0x234f48u: goto label_234f48;
        case 0x234f4cu: goto label_234f4c;
        case 0x234f50u: goto label_234f50;
        case 0x234f54u: goto label_234f54;
        case 0x234f58u: goto label_234f58;
        case 0x234f5cu: goto label_234f5c;
        case 0x234f60u: goto label_234f60;
        case 0x234f64u: goto label_234f64;
        case 0x234f68u: goto label_234f68;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f70u: goto label_234f70;
        case 0x234f74u: goto label_234f74;
        case 0x234f78u: goto label_234f78;
        case 0x234f7cu: goto label_234f7c;
        case 0x234f80u: goto label_234f80;
        case 0x234f84u: goto label_234f84;
        case 0x234f88u: goto label_234f88;
        case 0x234f8cu: goto label_234f8c;
        case 0x234f90u: goto label_234f90;
        case 0x234f94u: goto label_234f94;
        case 0x234f98u: goto label_234f98;
        case 0x234f9cu: goto label_234f9c;
        case 0x234fa0u: goto label_234fa0;
        case 0x234fa4u: goto label_234fa4;
        case 0x234fa8u: goto label_234fa8;
        case 0x234facu: goto label_234fac;
        case 0x234fb0u: goto label_234fb0;
        case 0x234fb4u: goto label_234fb4;
        case 0x234fb8u: goto label_234fb8;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fc0u: goto label_234fc0;
        case 0x234fc4u: goto label_234fc4;
        case 0x234fc8u: goto label_234fc8;
        case 0x234fccu: goto label_234fcc;
        case 0x234fd0u: goto label_234fd0;
        case 0x234fd4u: goto label_234fd4;
        case 0x234fd8u: goto label_234fd8;
        case 0x234fdcu: goto label_234fdc;
        case 0x234fe0u: goto label_234fe0;
        case 0x234fe4u: goto label_234fe4;
        case 0x234fe8u: goto label_234fe8;
        case 0x234fecu: goto label_234fec;
        case 0x234ff0u: goto label_234ff0;
        case 0x234ff4u: goto label_234ff4;
        case 0x234ff8u: goto label_234ff8;
        case 0x234ffcu: goto label_234ffc;
        case 0x235000u: goto label_235000;
        case 0x235004u: goto label_235004;
        case 0x235008u: goto label_235008;
        case 0x23500cu: goto label_23500c;
        case 0x235010u: goto label_235010;
        case 0x235014u: goto label_235014;
        case 0x235018u: goto label_235018;
        case 0x23501cu: goto label_23501c;
        case 0x235020u: goto label_235020;
        case 0x235024u: goto label_235024;
        case 0x235028u: goto label_235028;
        case 0x23502cu: goto label_23502c;
        case 0x235030u: goto label_235030;
        case 0x235034u: goto label_235034;
        case 0x235038u: goto label_235038;
        case 0x23503cu: goto label_23503c;
        case 0x235040u: goto label_235040;
        case 0x235044u: goto label_235044;
        case 0x235048u: goto label_235048;
        case 0x23504cu: goto label_23504c;
        case 0x235050u: goto label_235050;
        case 0x235054u: goto label_235054;
        case 0x235058u: goto label_235058;
        case 0x23505cu: goto label_23505c;
        case 0x235060u: goto label_235060;
        case 0x235064u: goto label_235064;
        case 0x235068u: goto label_235068;
        case 0x23506cu: goto label_23506c;
        case 0x235070u: goto label_235070;
        case 0x235074u: goto label_235074;
        case 0x235078u: goto label_235078;
        case 0x23507cu: goto label_23507c;
        case 0x235080u: goto label_235080;
        case 0x235084u: goto label_235084;
        case 0x235088u: goto label_235088;
        case 0x23508cu: goto label_23508c;
        case 0x235090u: goto label_235090;
        case 0x235094u: goto label_235094;
        case 0x235098u: goto label_235098;
        case 0x23509cu: goto label_23509c;
        case 0x2350a0u: goto label_2350a0;
        case 0x2350a4u: goto label_2350a4;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350acu: goto label_2350ac;
        case 0x2350b0u: goto label_2350b0;
        case 0x2350b4u: goto label_2350b4;
        case 0x2350b8u: goto label_2350b8;
        case 0x2350bcu: goto label_2350bc;
        case 0x2350c0u: goto label_2350c0;
        case 0x2350c4u: goto label_2350c4;
        case 0x2350c8u: goto label_2350c8;
        case 0x2350ccu: goto label_2350cc;
        case 0x2350d0u: goto label_2350d0;
        case 0x2350d4u: goto label_2350d4;
        case 0x2350d8u: goto label_2350d8;
        case 0x2350dcu: goto label_2350dc;
        case 0x2350e0u: goto label_2350e0;
        case 0x2350e4u: goto label_2350e4;
        case 0x2350e8u: goto label_2350e8;
        case 0x2350ecu: goto label_2350ec;
        case 0x2350f0u: goto label_2350f0;
        case 0x2350f4u: goto label_2350f4;
        case 0x2350f8u: goto label_2350f8;
        case 0x2350fcu: goto label_2350fc;
        case 0x235100u: goto label_235100;
        case 0x235104u: goto label_235104;
        case 0x235108u: goto label_235108;
        case 0x23510cu: goto label_23510c;
        case 0x235110u: goto label_235110;
        case 0x235114u: goto label_235114;
        case 0x235118u: goto label_235118;
        case 0x23511cu: goto label_23511c;
        case 0x235120u: goto label_235120;
        case 0x235124u: goto label_235124;
        case 0x235128u: goto label_235128;
        case 0x23512cu: goto label_23512c;
        case 0x235130u: goto label_235130;
        case 0x235134u: goto label_235134;
        case 0x235138u: goto label_235138;
        case 0x23513cu: goto label_23513c;
        case 0x235140u: goto label_235140;
        case 0x235144u: goto label_235144;
        case 0x235148u: goto label_235148;
        case 0x23514cu: goto label_23514c;
        case 0x235150u: goto label_235150;
        case 0x235154u: goto label_235154;
        case 0x235158u: goto label_235158;
        case 0x23515cu: goto label_23515c;
        case 0x235160u: goto label_235160;
        case 0x235164u: goto label_235164;
        case 0x235168u: goto label_235168;
        case 0x23516cu: goto label_23516c;
        case 0x235170u: goto label_235170;
        case 0x235174u: goto label_235174;
        case 0x235178u: goto label_235178;
        case 0x23517cu: goto label_23517c;
        case 0x235180u: goto label_235180;
        case 0x235184u: goto label_235184;
        case 0x235188u: goto label_235188;
        case 0x23518cu: goto label_23518c;
        case 0x235190u: goto label_235190;
        case 0x235194u: goto label_235194;
        case 0x235198u: goto label_235198;
        case 0x23519cu: goto label_23519c;
        case 0x2351a0u: goto label_2351a0;
        case 0x2351a4u: goto label_2351a4;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351acu: goto label_2351ac;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b4u: goto label_2351b4;
        case 0x2351b8u: goto label_2351b8;
        case 0x2351bcu: goto label_2351bc;
        case 0x2351c0u: goto label_2351c0;
        case 0x2351c4u: goto label_2351c4;
        case 0x2351c8u: goto label_2351c8;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351d4u: goto label_2351d4;
        case 0x2351d8u: goto label_2351d8;
        case 0x2351dcu: goto label_2351dc;
        case 0x2351e0u: goto label_2351e0;
        case 0x2351e4u: goto label_2351e4;
        case 0x2351e8u: goto label_2351e8;
        case 0x2351ecu: goto label_2351ec;
        case 0x2351f0u: goto label_2351f0;
        case 0x2351f4u: goto label_2351f4;
        case 0x2351f8u: goto label_2351f8;
        case 0x2351fcu: goto label_2351fc;
        case 0x235200u: goto label_235200;
        case 0x235204u: goto label_235204;
        case 0x235208u: goto label_235208;
        case 0x23520cu: goto label_23520c;
        case 0x235210u: goto label_235210;
        case 0x235214u: goto label_235214;
        case 0x235218u: goto label_235218;
        case 0x23521cu: goto label_23521c;
        case 0x235220u: goto label_235220;
        case 0x235224u: goto label_235224;
        case 0x235228u: goto label_235228;
        case 0x23522cu: goto label_23522c;
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        default: return;
    }

label_234b08:
    // 0x234b08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_234b0c:
    // 0x234b0c: 0x3e00008  jr          $ra
label_234b10:
    if (ctx->pc == 0x234B10u) {
        ctx->pc = 0x234B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B0Cu;
        // 0x234b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B14u;
        goto label_234b14;
    }
    ctx->pc = 0x234B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B0Cu;
        // 0x234b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234B14u;
label_234b14:
    // 0x234b14: 0x0  nop
    ctx->pc = 0x234b14u;
    // NOP
label_234b18:
    // 0x234b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234b1c:
    // 0x234b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234b20:
    // 0x234b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234b24:
    // 0x234b24: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234b28:
    // 0x234b28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234b2c:
    // 0x234b2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234b30:
    // 0x234b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234b34:
    // 0x234b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234b38:
    // 0x234b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234b3c:
    // 0x234b3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234b40:
    // 0x234b40: 0xc08dbf8  jal         func_236FE0
label_234b44:
    if (ctx->pc == 0x234B44u) {
        ctx->pc = 0x234B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B40u;
        // 0x234b44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B48u;
        goto label_234b48;
    }
    ctx->pc = 0x234B40u;
    SET_GPR_U32(ctx, 31, 0x234B48u);
    ctx->pc = 0x234B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B40u;
    // 0x234b44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234B48u;
label_234b48:
    // 0x234b48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_234b4c:
    if (ctx->pc == 0x234B4Cu) {
        ctx->pc = 0x234B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B48u;
        // 0x234b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B50u;
        goto label_234b50;
    }
    ctx->pc = 0x234B48u;
    {
        const bool branch_taken_0x234b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B48u;
        // 0x234b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b48) {
            ctx->pc = 0x234B90u;
            goto label_234b90;
        }
    }
    ctx->pc = 0x234B50u;
label_234b50:
    // 0x234b50: 0xc08d17c  jal         func_2345F0
label_234b54:
    if (ctx->pc == 0x234B54u) {
        ctx->pc = 0x234B58u;
        goto label_234b58;
    }
    ctx->pc = 0x234B50u;
    SET_GPR_U32(ctx, 31, 0x234B58u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234B58u;
label_234b58:
    // 0x234b58: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x234b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_234b5c:
    // 0x234b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234b60:
    // 0x234b60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234b64:
    // 0x234b64: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_234b68:
    // 0x234b68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_234b6c:
    // 0x234b6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_234b70:
    if (ctx->pc == 0x234B70u) {
        ctx->pc = 0x234B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B6Cu;
        // 0x234b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B74u;
        goto label_234b74;
    }
    ctx->pc = 0x234B6Cu;
    {
        const bool branch_taken_0x234b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B6Cu;
        // 0x234b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b6c) {
            ctx->pc = 0x234B84u;
            goto label_234b84;
        }
    }
    ctx->pc = 0x234B74u;
label_234b74:
    // 0x234b74: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x234b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_234b78:
    // 0x234b78: 0xc08d192  jal         func_234648
label_234b7c:
    if (ctx->pc == 0x234B7Cu) {
        ctx->pc = 0x234B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B78u;
        // 0x234b7c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B80u;
        goto label_234b80;
    }
    ctx->pc = 0x234B78u;
    SET_GPR_U32(ctx, 31, 0x234B80u);
    ctx->pc = 0x234B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B78u;
    // 0x234b7c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234B80u;
label_234b80:
    // 0x234b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234b84:
    // 0x234b84: 0xc069210  jal         func_1A4840
label_234b88:
    if (ctx->pc == 0x234B88u) {
        ctx->pc = 0x234B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B84u;
        // 0x234b88: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B8Cu;
        goto label_234b8c;
    }
    ctx->pc = 0x234B84u;
    SET_GPR_U32(ctx, 31, 0x234B8Cu);
    ctx->pc = 0x234B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B84u;
    // 0x234b88: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234B8Cu;
label_234b8c:
    // 0x234b8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234b90:
    // 0x234b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234b94:
    // 0x234b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234b98:
    // 0x234b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234b9c:
    // 0x234b9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234ba0:
    // 0x234ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234ba4:
    // 0x234ba4: 0x3e00008  jr          $ra
label_234ba8:
    if (ctx->pc == 0x234BA8u) {
        ctx->pc = 0x234BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BA4u;
        // 0x234ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BACu;
        goto label_234bac;
    }
    ctx->pc = 0x234BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BA4u;
        // 0x234ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234BACu;
label_234bac:
    // 0x234bac: 0x0  nop
    ctx->pc = 0x234bacu;
    // NOP
label_234bb0:
    // 0x234bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_234bb4:
    // 0x234bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234bb8:
    // 0x234bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234bbc:
    // 0x234bbc: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234bc0:
    // 0x234bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234bc4:
    // 0x234bc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234bc8:
    // 0x234bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234bcc:
    // 0x234bcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_234bd0:
    // 0x234bd0: 0xc08dbf8  jal         func_236FE0
label_234bd4:
    if (ctx->pc == 0x234BD4u) {
        ctx->pc = 0x234BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD0u;
        // 0x234bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BD8u;
        goto label_234bd8;
    }
    ctx->pc = 0x234BD0u;
    SET_GPR_U32(ctx, 31, 0x234BD8u);
    ctx->pc = 0x234BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BD0u;
    // 0x234bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234BD8u;
label_234bd8:
    // 0x234bd8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_234bdc:
    if (ctx->pc == 0x234BDCu) {
        ctx->pc = 0x234BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD8u;
        // 0x234bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BE0u;
        goto label_234be0;
    }
    ctx->pc = 0x234BD8u;
    {
        const bool branch_taken_0x234bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD8u;
        // 0x234bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bd8) {
            ctx->pc = 0x234C18u;
            goto label_234c18;
        }
    }
    ctx->pc = 0x234BE0u;
label_234be0:
    // 0x234be0: 0xc08d17c  jal         func_2345F0
label_234be4:
    if (ctx->pc == 0x234BE4u) {
        ctx->pc = 0x234BE8u;
        goto label_234be8;
    }
    ctx->pc = 0x234BE0u;
    SET_GPR_U32(ctx, 31, 0x234BE8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234BE8u;
label_234be8:
    // 0x234be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234bec:
    // 0x234bec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234bf0:
    // 0x234bf0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_234bf4:
    // 0x234bf4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_234bf8:
    if (ctx->pc == 0x234BF8u) {
        ctx->pc = 0x234BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BF4u;
        // 0x234bf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BFCu;
        goto label_234bfc;
    }
    ctx->pc = 0x234BF4u;
    {
        const bool branch_taken_0x234bf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BF4u;
        // 0x234bf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bf4) {
            ctx->pc = 0x234C0Cu;
            goto label_234c0c;
        }
    }
    ctx->pc = 0x234BFCu;
label_234bfc:
    // 0x234bfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234c00:
    // 0x234c00: 0xc08d192  jal         func_234648
label_234c04:
    if (ctx->pc == 0x234C04u) {
        ctx->pc = 0x234C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C00u;
        // 0x234c04: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C08u;
        goto label_234c08;
    }
    ctx->pc = 0x234C00u;
    SET_GPR_U32(ctx, 31, 0x234C08u);
    ctx->pc = 0x234C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C00u;
    // 0x234c04: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234C08u;
label_234c08:
    // 0x234c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234c0c:
    // 0x234c0c: 0xc069210  jal         func_1A4840
label_234c10:
    if (ctx->pc == 0x234C10u) {
        ctx->pc = 0x234C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C0Cu;
        // 0x234c10: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C14u;
        goto label_234c14;
    }
    ctx->pc = 0x234C0Cu;
    SET_GPR_U32(ctx, 31, 0x234C14u);
    ctx->pc = 0x234C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C0Cu;
    // 0x234c10: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234C14u;
label_234c14:
    // 0x234c14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234c18:
    // 0x234c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234c1c:
    // 0x234c1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234c20:
    // 0x234c20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234c24:
    // 0x234c24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234c28:
    // 0x234c28: 0x3e00008  jr          $ra
label_234c2c:
    if (ctx->pc == 0x234C2Cu) {
        ctx->pc = 0x234C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C28u;
        // 0x234c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C30u;
        goto label_234c30;
    }
    ctx->pc = 0x234C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C28u;
        // 0x234c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234C30u;
label_234c30:
    // 0x234c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_234c34:
    // 0x234c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234c38:
    // 0x234c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234c3c:
    // 0x234c3c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234c40:
    // 0x234c40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234c44:
    // 0x234c44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234c48:
    // 0x234c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234c4c:
    // 0x234c4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_234c50:
    // 0x234c50: 0xc08dbf8  jal         func_236FE0
label_234c54:
    if (ctx->pc == 0x234C54u) {
        ctx->pc = 0x234C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C50u;
        // 0x234c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C58u;
        goto label_234c58;
    }
    ctx->pc = 0x234C50u;
    SET_GPR_U32(ctx, 31, 0x234C58u);
    ctx->pc = 0x234C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C50u;
    // 0x234c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234C58u;
label_234c58:
    // 0x234c58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_234c5c:
    if (ctx->pc == 0x234C5Cu) {
        ctx->pc = 0x234C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C58u;
        // 0x234c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C60u;
        goto label_234c60;
    }
    ctx->pc = 0x234C58u;
    {
        const bool branch_taken_0x234c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C58u;
        // 0x234c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c58) {
            ctx->pc = 0x234C98u;
            goto label_234c98;
        }
    }
    ctx->pc = 0x234C60u;
label_234c60:
    // 0x234c60: 0xc08d17c  jal         func_2345F0
label_234c64:
    if (ctx->pc == 0x234C64u) {
        ctx->pc = 0x234C68u;
        goto label_234c68;
    }
    ctx->pc = 0x234C60u;
    SET_GPR_U32(ctx, 31, 0x234C68u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234C68u;
label_234c68:
    // 0x234c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234c6c:
    // 0x234c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234c70:
    // 0x234c70: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x234c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_234c74:
    // 0x234c74: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_234c78:
    if (ctx->pc == 0x234C78u) {
        ctx->pc = 0x234C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C74u;
        // 0x234c78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C7Cu;
        goto label_234c7c;
    }
    ctx->pc = 0x234C74u;
    {
        const bool branch_taken_0x234c74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C74u;
        // 0x234c78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c74) {
            ctx->pc = 0x234C8Cu;
            goto label_234c8c;
        }
    }
    ctx->pc = 0x234C7Cu;
label_234c7c:
    // 0x234c7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234c80:
    // 0x234c80: 0xc08d192  jal         func_234648
label_234c84:
    if (ctx->pc == 0x234C84u) {
        ctx->pc = 0x234C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C80u;
        // 0x234c84: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C88u;
        goto label_234c88;
    }
    ctx->pc = 0x234C80u;
    SET_GPR_U32(ctx, 31, 0x234C88u);
    ctx->pc = 0x234C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C80u;
    // 0x234c84: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234C88u;
label_234c88:
    // 0x234c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234c8c:
    // 0x234c8c: 0xc069210  jal         func_1A4840
label_234c90:
    if (ctx->pc == 0x234C90u) {
        ctx->pc = 0x234C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C8Cu;
        // 0x234c90: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C94u;
        goto label_234c94;
    }
    ctx->pc = 0x234C8Cu;
    SET_GPR_U32(ctx, 31, 0x234C94u);
    ctx->pc = 0x234C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C8Cu;
    // 0x234c90: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234C94u;
label_234c94:
    // 0x234c94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234c98:
    // 0x234c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234c9c:
    // 0x234c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234ca0:
    // 0x234ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234ca4:
    // 0x234ca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234ca8:
    // 0x234ca8: 0x3e00008  jr          $ra
label_234cac:
    if (ctx->pc == 0x234CACu) {
        ctx->pc = 0x234CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CA8u;
        // 0x234cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CB0u;
        goto label_234cb0;
    }
    ctx->pc = 0x234CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CA8u;
        // 0x234cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234CB0u;
label_234cb0:
    // 0x234cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_234cb4:
    // 0x234cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234cb8:
    // 0x234cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234cbc:
    // 0x234cbc: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234cc0:
    // 0x234cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234cc4:
    // 0x234cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234cc8:
    // 0x234cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234ccc:
    // 0x234ccc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_234cd0:
    // 0x234cd0: 0xc08dbf8  jal         func_236FE0
label_234cd4:
    if (ctx->pc == 0x234CD4u) {
        ctx->pc = 0x234CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD0u;
        // 0x234cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CD8u;
        goto label_234cd8;
    }
    ctx->pc = 0x234CD0u;
    SET_GPR_U32(ctx, 31, 0x234CD8u);
    ctx->pc = 0x234CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CD0u;
    // 0x234cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234CD8u;
label_234cd8:
    // 0x234cd8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_234cdc:
    if (ctx->pc == 0x234CDCu) {
        ctx->pc = 0x234CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD8u;
        // 0x234cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CE0u;
        goto label_234ce0;
    }
    ctx->pc = 0x234CD8u;
    {
        const bool branch_taken_0x234cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD8u;
        // 0x234cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cd8) {
            ctx->pc = 0x234D18u;
            goto label_234d18;
        }
    }
    ctx->pc = 0x234CE0u;
label_234ce0:
    // 0x234ce0: 0xc08d17c  jal         func_2345F0
label_234ce4:
    if (ctx->pc == 0x234CE4u) {
        ctx->pc = 0x234CE8u;
        goto label_234ce8;
    }
    ctx->pc = 0x234CE0u;
    SET_GPR_U32(ctx, 31, 0x234CE8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234CE8u;
label_234ce8:
    // 0x234ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234cec:
    // 0x234cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234cf0:
    // 0x234cf0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x234cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_234cf4:
    // 0x234cf4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_234cf8:
    if (ctx->pc == 0x234CF8u) {
        ctx->pc = 0x234CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CF4u;
        // 0x234cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CFCu;
        goto label_234cfc;
    }
    ctx->pc = 0x234CF4u;
    {
        const bool branch_taken_0x234cf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CF4u;
        // 0x234cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cf4) {
            ctx->pc = 0x234D0Cu;
            goto label_234d0c;
        }
    }
    ctx->pc = 0x234CFCu;
label_234cfc:
    // 0x234cfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234d00:
    // 0x234d00: 0xc08d192  jal         func_234648
label_234d04:
    if (ctx->pc == 0x234D04u) {
        ctx->pc = 0x234D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D00u;
        // 0x234d04: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D08u;
        goto label_234d08;
    }
    ctx->pc = 0x234D00u;
    SET_GPR_U32(ctx, 31, 0x234D08u);
    ctx->pc = 0x234D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D00u;
    // 0x234d04: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234D08u;
label_234d08:
    // 0x234d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234d0c:
    // 0x234d0c: 0xc069210  jal         func_1A4840
label_234d10:
    if (ctx->pc == 0x234D10u) {
        ctx->pc = 0x234D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D0Cu;
        // 0x234d10: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D14u;
        goto label_234d14;
    }
    ctx->pc = 0x234D0Cu;
    SET_GPR_U32(ctx, 31, 0x234D14u);
    ctx->pc = 0x234D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D0Cu;
    // 0x234d10: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234D14u;
label_234d14:
    // 0x234d14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234d18:
    // 0x234d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234d1c:
    // 0x234d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234d20:
    // 0x234d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234d24:
    // 0x234d24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234d28:
    // 0x234d28: 0x3e00008  jr          $ra
label_234d2c:
    if (ctx->pc == 0x234D2Cu) {
        ctx->pc = 0x234D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D28u;
        // 0x234d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D30u;
        goto label_234d30;
    }
    ctx->pc = 0x234D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D28u;
        // 0x234d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234D30u;
label_234d30:
    // 0x234d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_234d34:
    // 0x234d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234d38:
    // 0x234d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234d3c:
    // 0x234d3c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234d40:
    // 0x234d40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234d44:
    // 0x234d44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234d48:
    // 0x234d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234d4c:
    // 0x234d4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_234d50:
    // 0x234d50: 0xc08dbf8  jal         func_236FE0
label_234d54:
    if (ctx->pc == 0x234D54u) {
        ctx->pc = 0x234D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D50u;
        // 0x234d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D58u;
        goto label_234d58;
    }
    ctx->pc = 0x234D50u;
    SET_GPR_U32(ctx, 31, 0x234D58u);
    ctx->pc = 0x234D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D50u;
    // 0x234d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234D58u;
label_234d58:
    // 0x234d58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_234d5c:
    if (ctx->pc == 0x234D5Cu) {
        ctx->pc = 0x234D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D58u;
        // 0x234d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D60u;
        goto label_234d60;
    }
    ctx->pc = 0x234D58u;
    {
        const bool branch_taken_0x234d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D58u;
        // 0x234d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d58) {
            ctx->pc = 0x234D98u;
            goto label_234d98;
        }
    }
    ctx->pc = 0x234D60u;
label_234d60:
    // 0x234d60: 0xc08d17c  jal         func_2345F0
label_234d64:
    if (ctx->pc == 0x234D64u) {
        ctx->pc = 0x234D68u;
        goto label_234d68;
    }
    ctx->pc = 0x234D60u;
    SET_GPR_U32(ctx, 31, 0x234D68u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234D68u;
label_234d68:
    // 0x234d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234d6c:
    // 0x234d6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234d70:
    // 0x234d70: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_234d74:
    // 0x234d74: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_234d78:
    if (ctx->pc == 0x234D78u) {
        ctx->pc = 0x234D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D74u;
        // 0x234d78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D7Cu;
        goto label_234d7c;
    }
    ctx->pc = 0x234D74u;
    {
        const bool branch_taken_0x234d74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D74u;
        // 0x234d78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d74) {
            ctx->pc = 0x234D8Cu;
            goto label_234d8c;
        }
    }
    ctx->pc = 0x234D7Cu;
label_234d7c:
    // 0x234d7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234d80:
    // 0x234d80: 0xc08d192  jal         func_234648
label_234d84:
    if (ctx->pc == 0x234D84u) {
        ctx->pc = 0x234D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D80u;
        // 0x234d84: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D88u;
        goto label_234d88;
    }
    ctx->pc = 0x234D80u;
    SET_GPR_U32(ctx, 31, 0x234D88u);
    ctx->pc = 0x234D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D80u;
    // 0x234d84: 0xac52ad00  sw          $s2, -0x5300($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946048), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234D88u;
label_234d88:
    // 0x234d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234d8c:
    // 0x234d8c: 0xc069210  jal         func_1A4840
label_234d90:
    if (ctx->pc == 0x234D90u) {
        ctx->pc = 0x234D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D8Cu;
        // 0x234d90: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D94u;
        goto label_234d94;
    }
    ctx->pc = 0x234D8Cu;
    SET_GPR_U32(ctx, 31, 0x234D94u);
    ctx->pc = 0x234D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D8Cu;
    // 0x234d90: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234D94u;
label_234d94:
    // 0x234d94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234d98:
    // 0x234d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234d9c:
    // 0x234d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234da0:
    // 0x234da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234da4:
    // 0x234da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234da8:
    // 0x234da8: 0x3e00008  jr          $ra
label_234dac:
    if (ctx->pc == 0x234DACu) {
        ctx->pc = 0x234DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DA8u;
        // 0x234dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DB0u;
        goto label_234db0;
    }
    ctx->pc = 0x234DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DA8u;
        // 0x234dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234DB0u;
label_234db0:
    // 0x234db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_234db4:
    // 0x234db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234db8:
    // 0x234db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234dbc:
    // 0x234dbc: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234dc0:
    // 0x234dc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234dc4:
    // 0x234dc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234dc8:
    // 0x234dc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234dcc:
    // 0x234dcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_234dd0:
    // 0x234dd0: 0xc08dbf8  jal         func_236FE0
label_234dd4:
    if (ctx->pc == 0x234DD4u) {
        ctx->pc = 0x234DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DD0u;
        // 0x234dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DD8u;
        goto label_234dd8;
    }
    ctx->pc = 0x234DD0u;
    SET_GPR_U32(ctx, 31, 0x234DD8u);
    ctx->pc = 0x234DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DD0u;
    // 0x234dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234DD8u;
label_234dd8:
    // 0x234dd8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_234ddc:
    if (ctx->pc == 0x234DDCu) {
        ctx->pc = 0x234DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DD8u;
        // 0x234ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DE0u;
        goto label_234de0;
    }
    ctx->pc = 0x234DD8u;
    {
        const bool branch_taken_0x234dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DD8u;
        // 0x234ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dd8) {
            ctx->pc = 0x234E48u;
            goto label_234e48;
        }
    }
    ctx->pc = 0x234DE0u;
label_234de0:
    // 0x234de0: 0xc08d17c  jal         func_2345F0
label_234de4:
    if (ctx->pc == 0x234DE4u) {
        ctx->pc = 0x234DE8u;
        goto label_234de8;
    }
    ctx->pc = 0x234DE0u;
    SET_GPR_U32(ctx, 31, 0x234DE8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234DE8u;
label_234de8:
    // 0x234de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234dec:
    // 0x234dec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234df0:
    // 0x234df0: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_234df4:
    // 0x234df4: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
label_234df8:
    if (ctx->pc == 0x234DF8u) {
        ctx->pc = 0x234DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DF4u;
        // 0x234df8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DFCu;
        goto label_234dfc;
    }
    ctx->pc = 0x234DF4u;
    {
        const bool branch_taken_0x234df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DF4u;
        // 0x234df8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234df4) {
            ctx->pc = 0x234E3Cu;
            goto label_234e3c;
        }
    }
    ctx->pc = 0x234DFCu;
label_234dfc:
    // 0x234dfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234e00:
    // 0x234e00: 0x2449ad00  addiu       $t1, $v0, -0x5300
    ctx->pc = 0x234e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_234e04:
    // 0x234e04: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x234e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_234e08:
    // 0x234e08: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x234e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_234e0c:
    // 0x234e0c: 0x6a47000f  ldl         $a3, 0xF($s2)
    ctx->pc = 0x234e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_234e10:
    // 0x234e10: 0x6e470008  ldr         $a3, 0x8($s2)
    ctx->pc = 0x234e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_234e14:
    // 0x234e14: 0x6a480017  ldl         $t0, 0x17($s2)
    ctx->pc = 0x234e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_234e18:
    // 0x234e18: 0x6e480010  ldr         $t0, 0x10($s2)
    ctx->pc = 0x234e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_234e1c:
    // 0x234e1c: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x234e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_234e20:
    // 0x234e20: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x234e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_234e24:
    // 0x234e24: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x234e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_234e28:
    // 0x234e28: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x234e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_234e2c:
    // 0x234e2c: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x234e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_234e30:
    // 0x234e30: 0xc08d192  jal         func_234648
label_234e34:
    if (ctx->pc == 0x234E34u) {
        ctx->pc = 0x234E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E30u;
        // 0x234e34: 0xb5280010  sdr         $t0, 0x10($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E38u;
        goto label_234e38;
    }
    ctx->pc = 0x234E30u;
    SET_GPR_U32(ctx, 31, 0x234E38u);
    ctx->pc = 0x234E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E30u;
    // 0x234e34: 0xb5280010  sdr         $t0, 0x10($t1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234E38u;
label_234e38:
    // 0x234e38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234e3c:
    // 0x234e3c: 0xc069210  jal         func_1A4840
label_234e40:
    if (ctx->pc == 0x234E40u) {
        ctx->pc = 0x234E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E3Cu;
        // 0x234e40: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E44u;
        goto label_234e44;
    }
    ctx->pc = 0x234E3Cu;
    SET_GPR_U32(ctx, 31, 0x234E44u);
    ctx->pc = 0x234E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E3Cu;
    // 0x234e40: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234E44u;
label_234e44:
    // 0x234e44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234e48:
    // 0x234e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234e4c:
    // 0x234e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234e50:
    // 0x234e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234e54:
    // 0x234e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234e58:
    // 0x234e58: 0x3e00008  jr          $ra
label_234e5c:
    if (ctx->pc == 0x234E5Cu) {
        ctx->pc = 0x234E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E58u;
        // 0x234e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E60u;
        goto label_234e60;
    }
    ctx->pc = 0x234E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E58u;
        // 0x234e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234E60u;
label_234e60:
    // 0x234e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234e64:
    // 0x234e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234e68:
    // 0x234e68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234e6c:
    // 0x234e6c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234e70:
    // 0x234e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234e74:
    // 0x234e74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234e78:
    // 0x234e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234e7c:
    // 0x234e7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234e80:
    // 0x234e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234e84:
    // 0x234e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234e88:
    // 0x234e88: 0xc08dbf8  jal         func_236FE0
label_234e8c:
    if (ctx->pc == 0x234E8Cu) {
        ctx->pc = 0x234E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E88u;
        // 0x234e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E90u;
        goto label_234e90;
    }
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x234E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E88u;
    // 0x234e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_234e94:
    if (ctx->pc == 0x234E94u) {
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E98u;
        goto label_234e98;
    }
    ctx->pc = 0x234E90u;
    {
        const bool branch_taken_0x234e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e90) {
            ctx->pc = 0x234ED8u;
            goto label_234ed8;
        }
    }
    ctx->pc = 0x234E98u;
label_234e98:
    // 0x234e98: 0xc08d17c  jal         func_2345F0
label_234e9c:
    if (ctx->pc == 0x234E9Cu) {
        ctx->pc = 0x234EA0u;
        goto label_234ea0;
    }
    ctx->pc = 0x234E98u;
    SET_GPR_U32(ctx, 31, 0x234EA0u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234EA0u;
label_234ea0:
    // 0x234ea0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_234ea4:
    // 0x234ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ea8:
    // 0x234ea8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234eac:
    // 0x234eac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_234eb0:
    // 0x234eb0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_234eb4:
    // 0x234eb4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_234eb8:
    if (ctx->pc == 0x234EB8u) {
        ctx->pc = 0x234EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB4u;
        // 0x234eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EBCu;
        goto label_234ebc;
    }
    ctx->pc = 0x234EB4u;
    {
        const bool branch_taken_0x234eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB4u;
        // 0x234eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234eb4) {
            ctx->pc = 0x234ECCu;
            goto label_234ecc;
        }
    }
    ctx->pc = 0x234EBCu;
label_234ebc:
    // 0x234ebc: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x234ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_234ec0:
    // 0x234ec0: 0xc08d192  jal         func_234648
label_234ec4:
    if (ctx->pc == 0x234EC4u) {
        ctx->pc = 0x234EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EC0u;
        // 0x234ec4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EC8u;
        goto label_234ec8;
    }
    ctx->pc = 0x234EC0u;
    SET_GPR_U32(ctx, 31, 0x234EC8u);
    ctx->pc = 0x234EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EC0u;
    // 0x234ec4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234EC8u;
label_234ec8:
    // 0x234ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ecc:
    // 0x234ecc: 0xc069210  jal         func_1A4840
label_234ed0:
    if (ctx->pc == 0x234ED0u) {
        ctx->pc = 0x234ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ECCu;
        // 0x234ed0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234ED4u;
        goto label_234ed4;
    }
    ctx->pc = 0x234ECCu;
    SET_GPR_U32(ctx, 31, 0x234ED4u);
    ctx->pc = 0x234ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ECCu;
    // 0x234ed0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234ED4u;
label_234ed4:
    // 0x234ed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234ed8:
    // 0x234ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234edc:
    // 0x234edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234ee0:
    // 0x234ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234ee4:
    // 0x234ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234ee8:
    // 0x234ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234eec:
    // 0x234eec: 0x3e00008  jr          $ra
label_234ef0:
    if (ctx->pc == 0x234EF0u) {
        ctx->pc = 0x234EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EECu;
        // 0x234ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EF4u;
        goto label_234ef4;
    }
    ctx->pc = 0x234EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EECu;
        // 0x234ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234EF4u;
label_234ef4:
    // 0x234ef4: 0x0  nop
    ctx->pc = 0x234ef4u;
    // NOP
label_234ef8:
    // 0x234ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234efc:
    // 0x234efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234f00:
    // 0x234f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234f04:
    // 0x234f04: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234f08:
    // 0x234f08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234f0c:
    // 0x234f0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234f10:
    // 0x234f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234f14:
    // 0x234f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234f18:
    // 0x234f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234f1c:
    // 0x234f1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234f20:
    // 0x234f20: 0xc08dbf8  jal         func_236FE0
label_234f24:
    if (ctx->pc == 0x234F24u) {
        ctx->pc = 0x234F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F20u;
        // 0x234f24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F28u;
        goto label_234f28;
    }
    ctx->pc = 0x234F20u;
    SET_GPR_U32(ctx, 31, 0x234F28u);
    ctx->pc = 0x234F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F20u;
    // 0x234f24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234F28u;
label_234f28:
    // 0x234f28: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_234f2c:
    if (ctx->pc == 0x234F2Cu) {
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F30u;
        goto label_234f30;
    }
    ctx->pc = 0x234F28u;
    {
        const bool branch_taken_0x234f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f28) {
            ctx->pc = 0x234F84u;
            goto label_234f84;
        }
    }
    ctx->pc = 0x234F30u;
label_234f30:
    // 0x234f30: 0xc08d17c  jal         func_2345F0
label_234f34:
    if (ctx->pc == 0x234F34u) {
        ctx->pc = 0x234F38u;
        goto label_234f38;
    }
    ctx->pc = 0x234F30u;
    SET_GPR_U32(ctx, 31, 0x234F38u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234F38u;
label_234f38:
    // 0x234f38: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_234f3c:
    // 0x234f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f40:
    // 0x234f40: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_234f44:
    // 0x234f44: 0x24470518  addiu       $a3, $v0, 0x518
    ctx->pc = 0x234f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
label_234f48:
    // 0x234f48: 0x2463af04  addiu       $v1, $v1, -0x50FC
    ctx->pc = 0x234f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946564));
label_234f4c:
    // 0x234f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234f50:
    // 0x234f50: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_234f54:
    // 0x234f54: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_234f58:
    if (ctx->pc == 0x234F58u) {
        ctx->pc = 0x234F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F54u;
        // 0x234f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F5Cu;
        goto label_234f5c;
    }
    ctx->pc = 0x234F54u;
    {
        const bool branch_taken_0x234f54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F54u;
        // 0x234f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f54) {
            ctx->pc = 0x234F78u;
            goto label_234f78;
        }
    }
    ctx->pc = 0x234F5Cu;
label_234f5c:
    // 0x234f5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x234f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_234f60:
    // 0x234f60: 0xacf20004  sw          $s2, 0x4($a3)
    ctx->pc = 0x234f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 18));
label_234f64:
    // 0x234f64: 0xac73fdfc  sw          $s3, -0x204($v1)
    ctx->pc = 0x234f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966780), GPR_U32(ctx, 19));
label_234f68:
    // 0x234f68: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x234f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_234f6c:
    // 0x234f6c: 0xc08d192  jal         func_234648
label_234f70:
    if (ctx->pc == 0x234F70u) {
        ctx->pc = 0x234F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F6Cu;
        // 0x234f70: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F74u;
        goto label_234f74;
    }
    ctx->pc = 0x234F6Cu;
    SET_GPR_U32(ctx, 31, 0x234F74u);
    ctx->pc = 0x234F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F6Cu;
    // 0x234f70: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234F74u;
label_234f74:
    // 0x234f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f78:
    // 0x234f78: 0xc069210  jal         func_1A4840
label_234f7c:
    if (ctx->pc == 0x234F7Cu) {
        ctx->pc = 0x234F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F78u;
        // 0x234f7c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F80u;
        goto label_234f80;
    }
    ctx->pc = 0x234F78u;
    SET_GPR_U32(ctx, 31, 0x234F80u);
    ctx->pc = 0x234F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F78u;
    // 0x234f7c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234F80u;
label_234f80:
    // 0x234f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234f84:
    // 0x234f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234f88:
    // 0x234f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234f8c:
    // 0x234f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234f90:
    // 0x234f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234f94:
    // 0x234f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234f98:
    // 0x234f98: 0x3e00008  jr          $ra
label_234f9c:
    if (ctx->pc == 0x234F9Cu) {
        ctx->pc = 0x234F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F98u;
        // 0x234f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FA0u;
        goto label_234fa0;
    }
    ctx->pc = 0x234F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F98u;
        // 0x234f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234FA0u;
label_234fa0:
    // 0x234fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_234fa4:
    // 0x234fa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234fa8:
    // 0x234fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234fac:
    // 0x234fac: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234fb0:
    // 0x234fb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234fb4:
    // 0x234fb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234fb8:
    // 0x234fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234fbc:
    // 0x234fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234fc0:
    // 0x234fc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_234fc4:
    // 0x234fc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x234fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_234fc8:
    // 0x234fc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_234fcc:
    // 0x234fcc: 0x30f500ff  andi        $s5, $a3, 0xFF
    ctx->pc = 0x234fccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_234fd0:
    // 0x234fd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_234fd4:
    // 0x234fd4: 0x311600ff  andi        $s6, $t0, 0xFF
    ctx->pc = 0x234fd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_234fd8:
    // 0x234fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234fdc:
    // 0x234fdc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_234fe0:
    // 0x234fe0: 0xc08dbf8  jal         func_236FE0
label_234fe4:
    if (ctx->pc == 0x234FE4u) {
        ctx->pc = 0x234FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE0u;
        // 0x234fe4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FE8u;
        goto label_234fe8;
    }
    ctx->pc = 0x234FE0u;
    SET_GPR_U32(ctx, 31, 0x234FE8u);
    ctx->pc = 0x234FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FE0u;
    // 0x234fe4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234FE8u;
label_234fe8:
    // 0x234fe8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_234fec:
    if (ctx->pc == 0x234FECu) {
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FF0u;
        goto label_234ff0;
    }
    ctx->pc = 0x234FE8u;
    {
        const bool branch_taken_0x234fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fe8) {
            ctx->pc = 0x235038u;
            goto label_235038;
        }
    }
    ctx->pc = 0x234FF0u;
label_234ff0:
    // 0x234ff0: 0xc08d17c  jal         func_2345F0
label_234ff4:
    if (ctx->pc == 0x234FF4u) {
        ctx->pc = 0x234FF8u;
        goto label_234ff8;
    }
    ctx->pc = 0x234FF0u;
    SET_GPR_U32(ctx, 31, 0x234FF8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234FF8u;
label_234ff8:
    // 0x234ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234ffc:
    // 0x234ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235000:
    // 0x235000: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235004:
    // 0x235004: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235008:
    // 0x235008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23500c:
    // 0x23500c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_235010:
    if (ctx->pc == 0x235010u) {
        ctx->pc = 0x235010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23500Cu;
        // 0x235010: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235014u;
        goto label_235014;
    }
    ctx->pc = 0x23500Cu;
    {
        const bool branch_taken_0x23500c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23500Cu;
        // 0x235010: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23500c) {
            ctx->pc = 0x23502Cu;
            goto label_23502c;
        }
    }
    ctx->pc = 0x235014u;
label_235014:
    // 0x235014: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x235014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
label_235018:
    // 0x235018: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x235018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_23501c:
    // 0x23501c: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x23501cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
label_235020:
    // 0x235020: 0xc08d192  jal         func_234648
label_235024:
    if (ctx->pc == 0x235024u) {
        ctx->pc = 0x235024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235020u;
        // 0x235024: 0xac560008  sw          $s6, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235028u;
        goto label_235028;
    }
    ctx->pc = 0x235020u;
    SET_GPR_U32(ctx, 31, 0x235028u);
    ctx->pc = 0x235024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235020u;
    // 0x235024: 0xac560008  sw          $s6, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235028u;
label_235028:
    // 0x235028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23502c:
    // 0x23502c: 0xc069210  jal         func_1A4840
label_235030:
    if (ctx->pc == 0x235030u) {
        ctx->pc = 0x235030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23502Cu;
        // 0x235030: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235034u;
        goto label_235034;
    }
    ctx->pc = 0x23502Cu;
    SET_GPR_U32(ctx, 31, 0x235034u);
    ctx->pc = 0x235030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23502Cu;
    // 0x235030: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235034u;
label_235034:
    // 0x235034: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235038:
    // 0x235038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23503c:
    // 0x23503c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23503cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235040:
    // 0x235040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235044:
    // 0x235044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235048:
    // 0x235048: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23504c:
    // 0x23504c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23504cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235050:
    // 0x235050: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235050u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235054:
    // 0x235054: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235058:
    // 0x235058: 0x3e00008  jr          $ra
label_23505c:
    if (ctx->pc == 0x23505Cu) {
        ctx->pc = 0x23505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235058u;
        // 0x23505c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235060u;
        goto label_235060;
    }
    ctx->pc = 0x235058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235058u;
        // 0x23505c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235060u;
label_235060:
    // 0x235060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_235064:
    // 0x235064: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x235064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235068:
    // 0x235068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23506c:
    // 0x23506c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x23506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235070:
    // 0x235070: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x235070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_235074:
    // 0x235074: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x235074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235078:
    // 0x235078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23507c:
    // 0x23507c: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x23507cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_235080:
    // 0x235080: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x235080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_235084:
    // 0x235084: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235088:
    // 0x235088: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x235088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23508c:
    // 0x23508c: 0x808d3e8  j           func_234FA0
label_235090:
    if (ctx->pc == 0x235090u) {
        ctx->pc = 0x235090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23508Cu;
        // 0x235090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235094u;
        goto label_235094;
    }
    ctx->pc = 0x23508Cu;
    ctx->pc = 0x235090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23508Cu;
    // 0x235090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235094u;
label_235094:
    // 0x235094: 0x0  nop
    ctx->pc = 0x235094u;
    // NOP
label_235098:
    // 0x235098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23509c:
    // 0x23509c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23509cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2350a0:
    // 0x2350a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2350a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2350a4:
    // 0x2350a4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2350a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2350a8:
    // 0x2350a8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2350a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2350ac:
    // 0x2350ac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2350acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2350b0:
    // 0x2350b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2350b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2350b4:
    // 0x2350b4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2350b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2350b8:
    // 0x2350b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2350b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2350bc:
    // 0x2350bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2350bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350c0:
    // 0x2350c0: 0x808d3e8  j           func_234FA0
label_2350c4:
    if (ctx->pc == 0x2350C4u) {
        ctx->pc = 0x2350C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350C0u;
        // 0x2350c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350C8u;
        goto label_2350c8;
    }
    ctx->pc = 0x2350C0u;
    ctx->pc = 0x2350C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350C0u;
    // 0x2350c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x2350C8u;
label_2350c8:
    // 0x2350c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2350cc:
    // 0x2350cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2350ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2350d0:
    // 0x2350d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2350d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2350d4:
    // 0x2350d4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2350d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2350d8:
    // 0x2350d8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2350d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2350dc:
    // 0x2350dc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2350dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2350e0:
    // 0x2350e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2350e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2350e4:
    // 0x2350e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2350e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2350e8:
    // 0x2350e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2350e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2350ec:
    // 0x2350ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2350ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350f0:
    // 0x2350f0: 0x808d3e8  j           func_234FA0
label_2350f4:
    if (ctx->pc == 0x2350F4u) {
        ctx->pc = 0x2350F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350F0u;
        // 0x2350f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350F8u;
        goto label_2350f8;
    }
    ctx->pc = 0x2350F0u;
    ctx->pc = 0x2350F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350F0u;
    // 0x2350f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x2350F8u;
label_2350f8:
    // 0x2350f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2350fc:
    // 0x2350fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2350fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235100:
    // 0x235100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235104:
    // 0x235104: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235108:
    // 0x235108: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23510c:
    // 0x23510c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23510cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235110:
    // 0x235110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235114:
    // 0x235114: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_235118:
    // 0x235118: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23511c:
    // 0x23511c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23511cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235120:
    // 0x235120: 0x808d3e8  j           func_234FA0
label_235124:
    if (ctx->pc == 0x235124u) {
        ctx->pc = 0x235124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235120u;
        // 0x235124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235128u;
        goto label_235128;
    }
    ctx->pc = 0x235120u;
    ctx->pc = 0x235124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235120u;
    // 0x235124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235128u;
label_235128:
    // 0x235128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23512c:
    // 0x23512c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23512cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235130:
    // 0x235130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235134:
    // 0x235134: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235138:
    // 0x235138: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235138u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23513c:
    // 0x23513c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23513cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235140:
    // 0x235140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235144:
    // 0x235144: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_235148:
    // 0x235148: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23514c:
    // 0x23514c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235150:
    // 0x235150: 0x808d3e8  j           func_234FA0
label_235154:
    if (ctx->pc == 0x235154u) {
        ctx->pc = 0x235154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235150u;
        // 0x235154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235158u;
        goto label_235158;
    }
    ctx->pc = 0x235150u;
    ctx->pc = 0x235154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235150u;
    // 0x235154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235158u;
label_235158:
    // 0x235158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23515c:
    // 0x23515c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x23515cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235160:
    // 0x235160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235164:
    // 0x235164: 0x849c2  srl         $t1, $t0, 7
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
label_235168:
    // 0x235168: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x235168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_23516c:
    // 0x23516c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23516cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235170:
    // 0x235170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235174:
    // 0x235174: 0x3108007f  andi        $t0, $t0, 0x7F
    ctx->pc = 0x235174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
label_235178:
    // 0x235178: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x235178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_23517c:
    // 0x23517c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x23517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_235180:
    // 0x235180: 0x808d3e8  j           func_234FA0
label_235184:
    if (ctx->pc == 0x235184u) {
        ctx->pc = 0x235184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235180u;
        // 0x235184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235188u;
        goto label_235188;
    }
    ctx->pc = 0x235180u;
    ctx->pc = 0x235184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235180u;
    // 0x235184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235188u;
label_235188:
    // 0x235188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23518c:
    // 0x23518c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235190:
    // 0x235190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235194:
    // 0x235194: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235198:
    // 0x235198: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23519c:
    // 0x23519c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23519cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2351a0:
    // 0x2351a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2351a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2351a4:
    // 0x2351a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2351a8:
    // 0x2351a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2351a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2351ac:
    // 0x2351ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2351acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2351b0:
    // 0x2351b0: 0x808d3e8  j           func_234FA0
label_2351b4:
    if (ctx->pc == 0x2351B4u) {
        ctx->pc = 0x2351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351B0u;
        // 0x2351b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2351B8u;
        goto label_2351b8;
    }
    ctx->pc = 0x2351B0u;
    ctx->pc = 0x2351B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351B0u;
    // 0x2351b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x2351B8u;
label_2351b8:
    // 0x2351b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2351bc:
    // 0x2351bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2351bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2351c0:
    // 0x2351c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2351c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2351c4:
    // 0x2351c4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2351c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2351c8:
    // 0x2351c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2351c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2351cc:
    // 0x2351cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2351ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2351d0:
    // 0x2351d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2351d4:
    // 0x2351d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2351d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2351d8:
    // 0x2351d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2351d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2351dc:
    // 0x2351dc: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x2351dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2351e0:
    // 0x2351e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2351e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2351e4:
    // 0x2351e4: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x2351e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2351e8:
    // 0x2351e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2351e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2351ec:
    // 0x2351ec: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2351f0:
    // 0x2351f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2351f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2351f4:
    // 0x2351f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2351f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2351f8:
    // 0x2351f8: 0xc08dbf8  jal         func_236FE0
label_2351fc:
    if (ctx->pc == 0x2351FCu) {
        ctx->pc = 0x2351FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351F8u;
        // 0x2351fc: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235200u;
        goto label_235200;
    }
    ctx->pc = 0x2351F8u;
    SET_GPR_U32(ctx, 31, 0x235200u);
    ctx->pc = 0x2351FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351F8u;
    // 0x2351fc: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235200u;
label_235200:
    // 0x235200: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_235204:
    if (ctx->pc == 0x235204u) {
        ctx->pc = 0x235204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235200u;
        // 0x235204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235208u;
        goto label_235208;
    }
    ctx->pc = 0x235200u;
    {
        const bool branch_taken_0x235200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235200u;
        // 0x235204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235200) {
            ctx->pc = 0x235254u;
            goto label_235254;
        }
    }
    ctx->pc = 0x235208u;
label_235208:
    // 0x235208: 0xc08d17c  jal         func_2345F0
label_23520c:
    if (ctx->pc == 0x23520Cu) {
        ctx->pc = 0x235210u;
        goto label_235210;
    }
    ctx->pc = 0x235208u;
    SET_GPR_U32(ctx, 31, 0x235210u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x235210u;
label_235210:
    // 0x235210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235214:
    // 0x235214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235218:
    // 0x235218: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_23521c:
    // 0x23521c: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x23521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235220:
    // 0x235220: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x235220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_235224:
    // 0x235224: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_235228:
    if (ctx->pc == 0x235228u) {
        ctx->pc = 0x235228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235224u;
        // 0x235228: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23522Cu;
        goto label_23522c;
    }
    ctx->pc = 0x235224u;
    {
        const bool branch_taken_0x235224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235224u;
        // 0x235228: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235224) {
            ctx->pc = 0x235248u;
            goto label_235248;
        }
    }
    ctx->pc = 0x23522Cu;
label_23522c:
    // 0x23522c: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x23522cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_235230:
    // 0x235230: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_235234:
    // 0x235234: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x235234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_235238:
    // 0x235238: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_23523c:
    // 0x23523c: 0xc08d192  jal         func_234648
label_235240:
    if (ctx->pc == 0x235240u) {
        ctx->pc = 0x235240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23523Cu;
        // 0x235240: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235244u;
        goto label_235244;
    }
    ctx->pc = 0x23523Cu;
    SET_GPR_U32(ctx, 31, 0x235244u);
    ctx->pc = 0x235240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23523Cu;
    // 0x235240: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235244u;
label_235244:
    // 0x235244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235248:
    // 0x235248: 0xc069210  jal         func_1A4840
label_23524c:
    if (ctx->pc == 0x23524Cu) {
        ctx->pc = 0x23524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235248u;
        // 0x23524c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235250u;
        goto label_235250;
    }
    ctx->pc = 0x235248u;
    SET_GPR_U32(ctx, 31, 0x235250u);
    ctx->pc = 0x23524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235248u;
    // 0x23524c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235250u;
label_235250:
    // 0x235250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235254:
    // 0x235254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235258:
    // 0x235258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23525c:
    // 0x23525c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235260:
    // 0x235260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235264:
    // 0x235264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235268:
    // 0x235268: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23526c:
    // 0x23526c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23526cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235270:
    // 0x235270: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235274:
    // 0x235274: 0x3e00008  jr          $ra
label_235278:
    if (ctx->pc == 0x235278u) {
        ctx->pc = 0x235278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235274u;
        // 0x235278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23527Cu;
        goto label_23527c;
    }
    ctx->pc = 0x235274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235274u;
        // 0x235278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23527Cu;
label_23527c:
    // 0x23527c: 0x0  nop
    ctx->pc = 0x23527cu;
    // NOP
label_235280:
    // 0x235280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235284:
    // 0x235284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235288:
    // 0x235288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23528c:
    // 0x23528c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235290:
    // 0x235290: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_235294:
    // 0x235294: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235298:
    // 0x235298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23529c:
    // 0x23529c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2352a0:
    // 0x2352a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2352a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2352a4:
    // 0x2352a4: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x2352a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2352a8:
    // 0x2352a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2352a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2352ac:
    // 0x2352ac: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x2352acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2352b0:
    // 0x2352b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2352b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2352b4:
    // 0x2352b4: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2352b8:
    // 0x2352b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2352b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2352bc:
    // 0x2352bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2352bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2352c0:
    // 0x2352c0: 0xc08dbf8  jal         func_236FE0
label_2352c4:
    if (ctx->pc == 0x2352C4u) {
        ctx->pc = 0x2352C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C0u;
        // 0x2352c4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352C8u;
        goto label_2352c8;
    }
    ctx->pc = 0x2352C0u;
    SET_GPR_U32(ctx, 31, 0x2352C8u);
    ctx->pc = 0x2352C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2352C0u;
    // 0x2352c4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2352C8u;
label_2352c8:
    // 0x2352c8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2352cc:
    if (ctx->pc == 0x2352CCu) {
        ctx->pc = 0x2352CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C8u;
        // 0x2352cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352D0u;
        goto label_2352d0;
    }
    ctx->pc = 0x2352C8u;
    {
        const bool branch_taken_0x2352c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2352CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C8u;
        // 0x2352cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352c8) {
            ctx->pc = 0x23531Cu;
            { ctx->pc = 0x23531c; return; }
        }
    }
    ctx->pc = 0x2352D0u;
label_2352d0:
    // 0x2352d0: 0xc08d17c  jal         func_2345F0
label_2352d4:
    if (ctx->pc == 0x2352D4u) {
        ctx->pc = 0x2352D8u;
        { ctx->pc = 0x2352d8; return; }
    }
    ctx->pc = 0x2352D0u;
    SET_GPR_U32(ctx, 31, 0x2352D8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x2352D8u;
    ctx->pc = 0x2352d8u;
    return;
}
