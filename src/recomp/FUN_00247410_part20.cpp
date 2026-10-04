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


void FUN_00247410_part20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x250880u: goto label_250880;
        case 0x250884u: goto label_250884;
        case 0x250888u: goto label_250888;
        case 0x25088cu: goto label_25088c;
        case 0x250890u: goto label_250890;
        case 0x250894u: goto label_250894;
        case 0x250898u: goto label_250898;
        case 0x25089cu: goto label_25089c;
        case 0x2508a0u: goto label_2508a0;
        case 0x2508a4u: goto label_2508a4;
        case 0x2508a8u: goto label_2508a8;
        case 0x2508acu: goto label_2508ac;
        case 0x2508b0u: goto label_2508b0;
        case 0x2508b4u: goto label_2508b4;
        case 0x2508b8u: goto label_2508b8;
        case 0x2508bcu: goto label_2508bc;
        case 0x2508c0u: goto label_2508c0;
        case 0x2508c4u: goto label_2508c4;
        case 0x2508c8u: goto label_2508c8;
        case 0x2508ccu: goto label_2508cc;
        case 0x2508d0u: goto label_2508d0;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508d8u: goto label_2508d8;
        case 0x2508dcu: goto label_2508dc;
        case 0x2508e0u: goto label_2508e0;
        case 0x2508e4u: goto label_2508e4;
        case 0x2508e8u: goto label_2508e8;
        case 0x2508ecu: goto label_2508ec;
        case 0x2508f0u: goto label_2508f0;
        case 0x2508f4u: goto label_2508f4;
        case 0x2508f8u: goto label_2508f8;
        case 0x2508fcu: goto label_2508fc;
        case 0x250900u: goto label_250900;
        case 0x250904u: goto label_250904;
        case 0x250908u: goto label_250908;
        case 0x25090cu: goto label_25090c;
        case 0x250910u: goto label_250910;
        case 0x250914u: goto label_250914;
        case 0x250918u: goto label_250918;
        case 0x25091cu: goto label_25091c;
        case 0x250920u: goto label_250920;
        case 0x250924u: goto label_250924;
        case 0x250928u: goto label_250928;
        case 0x25092cu: goto label_25092c;
        case 0x250930u: goto label_250930;
        case 0x250934u: goto label_250934;
        case 0x250938u: goto label_250938;
        case 0x25093cu: goto label_25093c;
        case 0x250940u: goto label_250940;
        case 0x250944u: goto label_250944;
        case 0x250948u: goto label_250948;
        case 0x25094cu: goto label_25094c;
        case 0x250950u: goto label_250950;
        case 0x250954u: goto label_250954;
        case 0x250958u: goto label_250958;
        case 0x25095cu: goto label_25095c;
        case 0x250960u: goto label_250960;
        case 0x250964u: goto label_250964;
        case 0x250968u: goto label_250968;
        case 0x25096cu: goto label_25096c;
        case 0x250970u: goto label_250970;
        case 0x250974u: goto label_250974;
        case 0x250978u: goto label_250978;
        case 0x25097cu: goto label_25097c;
        case 0x250980u: goto label_250980;
        case 0x250984u: goto label_250984;
        case 0x250988u: goto label_250988;
        case 0x25098cu: goto label_25098c;
        case 0x250990u: goto label_250990;
        case 0x250994u: goto label_250994;
        case 0x250998u: goto label_250998;
        case 0x25099cu: goto label_25099c;
        case 0x2509a0u: goto label_2509a0;
        case 0x2509a4u: goto label_2509a4;
        case 0x2509a8u: goto label_2509a8;
        case 0x2509acu: goto label_2509ac;
        case 0x2509b0u: goto label_2509b0;
        case 0x2509b4u: goto label_2509b4;
        case 0x2509b8u: goto label_2509b8;
        case 0x2509bcu: goto label_2509bc;
        case 0x2509c0u: goto label_2509c0;
        case 0x2509c4u: goto label_2509c4;
        case 0x2509c8u: goto label_2509c8;
        case 0x2509ccu: goto label_2509cc;
        case 0x2509d0u: goto label_2509d0;
        case 0x2509d4u: goto label_2509d4;
        case 0x2509d8u: goto label_2509d8;
        case 0x2509dcu: goto label_2509dc;
        case 0x2509e0u: goto label_2509e0;
        case 0x2509e4u: goto label_2509e4;
        case 0x2509e8u: goto label_2509e8;
        case 0x2509ecu: goto label_2509ec;
        case 0x2509f0u: goto label_2509f0;
        case 0x2509f4u: goto label_2509f4;
        case 0x2509f8u: goto label_2509f8;
        case 0x2509fcu: goto label_2509fc;
        case 0x250a00u: goto label_250a00;
        case 0x250a04u: goto label_250a04;
        case 0x250a08u: goto label_250a08;
        case 0x250a0cu: goto label_250a0c;
        case 0x250a10u: goto label_250a10;
        case 0x250a14u: goto label_250a14;
        case 0x250a18u: goto label_250a18;
        case 0x250a1cu: goto label_250a1c;
        case 0x250a20u: goto label_250a20;
        case 0x250a24u: goto label_250a24;
        case 0x250a28u: goto label_250a28;
        case 0x250a2cu: goto label_250a2c;
        case 0x250a30u: goto label_250a30;
        case 0x250a34u: goto label_250a34;
        case 0x250a38u: goto label_250a38;
        case 0x250a3cu: goto label_250a3c;
        case 0x250a40u: goto label_250a40;
        case 0x250a44u: goto label_250a44;
        case 0x250a48u: goto label_250a48;
        case 0x250a4cu: goto label_250a4c;
        case 0x250a50u: goto label_250a50;
        case 0x250a54u: goto label_250a54;
        case 0x250a58u: goto label_250a58;
        case 0x250a5cu: goto label_250a5c;
        case 0x250a60u: goto label_250a60;
        case 0x250a64u: goto label_250a64;
        case 0x250a68u: goto label_250a68;
        case 0x250a6cu: goto label_250a6c;
        case 0x250a70u: goto label_250a70;
        case 0x250a74u: goto label_250a74;
        case 0x250a78u: goto label_250a78;
        case 0x250a7cu: goto label_250a7c;
        case 0x250a80u: goto label_250a80;
        case 0x250a84u: goto label_250a84;
        case 0x250a88u: goto label_250a88;
        case 0x250a8cu: goto label_250a8c;
        case 0x250a90u: goto label_250a90;
        case 0x250a94u: goto label_250a94;
        case 0x250a98u: goto label_250a98;
        case 0x250a9cu: goto label_250a9c;
        case 0x250aa0u: goto label_250aa0;
        case 0x250aa4u: goto label_250aa4;
        case 0x250aa8u: goto label_250aa8;
        case 0x250aacu: goto label_250aac;
        case 0x250ab0u: goto label_250ab0;
        case 0x250ab4u: goto label_250ab4;
        case 0x250ab8u: goto label_250ab8;
        case 0x250abcu: goto label_250abc;
        case 0x250ac0u: goto label_250ac0;
        case 0x250ac4u: goto label_250ac4;
        case 0x250ac8u: goto label_250ac8;
        case 0x250accu: goto label_250acc;
        case 0x250ad0u: goto label_250ad0;
        case 0x250ad4u: goto label_250ad4;
        case 0x250ad8u: goto label_250ad8;
        case 0x250adcu: goto label_250adc;
        case 0x250ae0u: goto label_250ae0;
        case 0x250ae4u: goto label_250ae4;
        case 0x250ae8u: goto label_250ae8;
        case 0x250aecu: goto label_250aec;
        case 0x250af0u: goto label_250af0;
        case 0x250af4u: goto label_250af4;
        case 0x250af8u: goto label_250af8;
        case 0x250afcu: goto label_250afc;
        case 0x250b00u: goto label_250b00;
        case 0x250b04u: goto label_250b04;
        case 0x250b08u: goto label_250b08;
        case 0x250b0cu: goto label_250b0c;
        case 0x250b10u: goto label_250b10;
        case 0x250b14u: goto label_250b14;
        case 0x250b18u: goto label_250b18;
        case 0x250b1cu: goto label_250b1c;
        case 0x250b20u: goto label_250b20;
        case 0x250b24u: goto label_250b24;
        case 0x250b28u: goto label_250b28;
        case 0x250b2cu: goto label_250b2c;
        case 0x250b30u: goto label_250b30;
        case 0x250b34u: goto label_250b34;
        case 0x250b38u: goto label_250b38;
        case 0x250b3cu: goto label_250b3c;
        case 0x250b40u: goto label_250b40;
        case 0x250b44u: goto label_250b44;
        case 0x250b48u: goto label_250b48;
        case 0x250b4cu: goto label_250b4c;
        case 0x250b50u: goto label_250b50;
        case 0x250b54u: goto label_250b54;
        case 0x250b58u: goto label_250b58;
        case 0x250b5cu: goto label_250b5c;
        case 0x250b60u: goto label_250b60;
        case 0x250b64u: goto label_250b64;
        case 0x250b68u: goto label_250b68;
        case 0x250b6cu: goto label_250b6c;
        case 0x250b70u: goto label_250b70;
        case 0x250b74u: goto label_250b74;
        case 0x250b78u: goto label_250b78;
        case 0x250b7cu: goto label_250b7c;
        case 0x250b80u: goto label_250b80;
        case 0x250b84u: goto label_250b84;
        case 0x250b88u: goto label_250b88;
        case 0x250b8cu: goto label_250b8c;
        case 0x250b90u: goto label_250b90;
        case 0x250b94u: goto label_250b94;
        case 0x250b98u: goto label_250b98;
        case 0x250b9cu: goto label_250b9c;
        case 0x250ba0u: goto label_250ba0;
        case 0x250ba4u: goto label_250ba4;
        case 0x250ba8u: goto label_250ba8;
        case 0x250bacu: goto label_250bac;
        case 0x250bb0u: goto label_250bb0;
        case 0x250bb4u: goto label_250bb4;
        case 0x250bb8u: goto label_250bb8;
        case 0x250bbcu: goto label_250bbc;
        case 0x250bc0u: goto label_250bc0;
        case 0x250bc4u: goto label_250bc4;
        case 0x250bc8u: goto label_250bc8;
        case 0x250bccu: goto label_250bcc;
        case 0x250bd0u: goto label_250bd0;
        case 0x250bd4u: goto label_250bd4;
        case 0x250bd8u: goto label_250bd8;
        case 0x250bdcu: goto label_250bdc;
        case 0x250be0u: goto label_250be0;
        case 0x250be4u: goto label_250be4;
        case 0x250be8u: goto label_250be8;
        case 0x250becu: goto label_250bec;
        case 0x250bf0u: goto label_250bf0;
        case 0x250bf4u: goto label_250bf4;
        case 0x250bf8u: goto label_250bf8;
        case 0x250bfcu: goto label_250bfc;
        case 0x250c00u: goto label_250c00;
        case 0x250c04u: goto label_250c04;
        case 0x250c08u: goto label_250c08;
        case 0x250c0cu: goto label_250c0c;
        case 0x250c10u: goto label_250c10;
        case 0x250c14u: goto label_250c14;
        case 0x250c18u: goto label_250c18;
        case 0x250c1cu: goto label_250c1c;
        case 0x250c20u: goto label_250c20;
        case 0x250c24u: goto label_250c24;
        case 0x250c28u: goto label_250c28;
        case 0x250c2cu: goto label_250c2c;
        case 0x250c30u: goto label_250c30;
        case 0x250c34u: goto label_250c34;
        case 0x250c38u: goto label_250c38;
        case 0x250c3cu: goto label_250c3c;
        case 0x250c40u: goto label_250c40;
        case 0x250c44u: goto label_250c44;
        case 0x250c48u: goto label_250c48;
        case 0x250c4cu: goto label_250c4c;
        case 0x250c50u: goto label_250c50;
        case 0x250c54u: goto label_250c54;
        case 0x250c58u: goto label_250c58;
        case 0x250c5cu: goto label_250c5c;
        case 0x250c60u: goto label_250c60;
        case 0x250c64u: goto label_250c64;
        case 0x250c68u: goto label_250c68;
        case 0x250c6cu: goto label_250c6c;
        case 0x250c70u: goto label_250c70;
        case 0x250c74u: goto label_250c74;
        case 0x250c78u: goto label_250c78;
        case 0x250c7cu: goto label_250c7c;
        case 0x250c80u: goto label_250c80;
        case 0x250c84u: goto label_250c84;
        case 0x250c88u: goto label_250c88;
        case 0x250c8cu: goto label_250c8c;
        case 0x250c90u: goto label_250c90;
        case 0x250c94u: goto label_250c94;
        case 0x250c98u: goto label_250c98;
        case 0x250c9cu: goto label_250c9c;
        case 0x250ca0u: goto label_250ca0;
        case 0x250ca4u: goto label_250ca4;
        case 0x250ca8u: goto label_250ca8;
        case 0x250cacu: goto label_250cac;
        case 0x250cb0u: goto label_250cb0;
        case 0x250cb4u: goto label_250cb4;
        case 0x250cb8u: goto label_250cb8;
        case 0x250cbcu: goto label_250cbc;
        case 0x250cc0u: goto label_250cc0;
        case 0x250cc4u: goto label_250cc4;
        case 0x250cc8u: goto label_250cc8;
        case 0x250cccu: goto label_250ccc;
        case 0x250cd0u: goto label_250cd0;
        case 0x250cd4u: goto label_250cd4;
        case 0x250cd8u: goto label_250cd8;
        case 0x250cdcu: goto label_250cdc;
        case 0x250ce0u: goto label_250ce0;
        case 0x250ce4u: goto label_250ce4;
        case 0x250ce8u: goto label_250ce8;
        case 0x250cecu: goto label_250cec;
        case 0x250cf0u: goto label_250cf0;
        case 0x250cf4u: goto label_250cf4;
        case 0x250cf8u: goto label_250cf8;
        case 0x250cfcu: goto label_250cfc;
        case 0x250d00u: goto label_250d00;
        case 0x250d04u: goto label_250d04;
        case 0x250d08u: goto label_250d08;
        case 0x250d0cu: goto label_250d0c;
        case 0x250d10u: goto label_250d10;
        case 0x250d14u: goto label_250d14;
        case 0x250d18u: goto label_250d18;
        case 0x250d1cu: goto label_250d1c;
        case 0x250d20u: goto label_250d20;
        case 0x250d24u: goto label_250d24;
        case 0x250d28u: goto label_250d28;
        case 0x250d2cu: goto label_250d2c;
        case 0x250d30u: goto label_250d30;
        case 0x250d34u: goto label_250d34;
        case 0x250d38u: goto label_250d38;
        case 0x250d3cu: goto label_250d3c;
        case 0x250d40u: goto label_250d40;
        case 0x250d44u: goto label_250d44;
        case 0x250d48u: goto label_250d48;
        case 0x250d4cu: goto label_250d4c;
        case 0x250d50u: goto label_250d50;
        case 0x250d54u: goto label_250d54;
        case 0x250d58u: goto label_250d58;
        case 0x250d5cu: goto label_250d5c;
        case 0x250d60u: goto label_250d60;
        case 0x250d64u: goto label_250d64;
        case 0x250d68u: goto label_250d68;
        case 0x250d6cu: goto label_250d6c;
        case 0x250d70u: goto label_250d70;
        case 0x250d74u: goto label_250d74;
        case 0x250d78u: goto label_250d78;
        case 0x250d7cu: goto label_250d7c;
        case 0x250d80u: goto label_250d80;
        case 0x250d84u: goto label_250d84;
        case 0x250d88u: goto label_250d88;
        case 0x250d8cu: goto label_250d8c;
        case 0x250d90u: goto label_250d90;
        case 0x250d94u: goto label_250d94;
        case 0x250d98u: goto label_250d98;
        case 0x250d9cu: goto label_250d9c;
        case 0x250da0u: goto label_250da0;
        case 0x250da4u: goto label_250da4;
        case 0x250da8u: goto label_250da8;
        case 0x250dacu: goto label_250dac;
        case 0x250db0u: goto label_250db0;
        case 0x250db4u: goto label_250db4;
        case 0x250db8u: goto label_250db8;
        case 0x250dbcu: goto label_250dbc;
        case 0x250dc0u: goto label_250dc0;
        case 0x250dc4u: goto label_250dc4;
        case 0x250dc8u: goto label_250dc8;
        case 0x250dccu: goto label_250dcc;
        case 0x250dd0u: goto label_250dd0;
        case 0x250dd4u: goto label_250dd4;
        case 0x250dd8u: goto label_250dd8;
        case 0x250ddcu: goto label_250ddc;
        case 0x250de0u: goto label_250de0;
        case 0x250de4u: goto label_250de4;
        case 0x250de8u: goto label_250de8;
        case 0x250decu: goto label_250dec;
        case 0x250df0u: goto label_250df0;
        case 0x250df4u: goto label_250df4;
        case 0x250df8u: goto label_250df8;
        case 0x250dfcu: goto label_250dfc;
        case 0x250e00u: goto label_250e00;
        case 0x250e04u: goto label_250e04;
        case 0x250e08u: goto label_250e08;
        case 0x250e0cu: goto label_250e0c;
        case 0x250e10u: goto label_250e10;
        case 0x250e14u: goto label_250e14;
        case 0x250e18u: goto label_250e18;
        case 0x250e1cu: goto label_250e1c;
        case 0x250e20u: goto label_250e20;
        case 0x250e24u: goto label_250e24;
        case 0x250e28u: goto label_250e28;
        case 0x250e2cu: goto label_250e2c;
        case 0x250e30u: goto label_250e30;
        case 0x250e34u: goto label_250e34;
        case 0x250e38u: goto label_250e38;
        case 0x250e3cu: goto label_250e3c;
        case 0x250e40u: goto label_250e40;
        case 0x250e44u: goto label_250e44;
        case 0x250e48u: goto label_250e48;
        case 0x250e4cu: goto label_250e4c;
        case 0x250e50u: goto label_250e50;
        case 0x250e54u: goto label_250e54;
        case 0x250e58u: goto label_250e58;
        case 0x250e5cu: goto label_250e5c;
        case 0x250e60u: goto label_250e60;
        case 0x250e64u: goto label_250e64;
        case 0x250e68u: goto label_250e68;
        case 0x250e6cu: goto label_250e6c;
        case 0x250e70u: goto label_250e70;
        case 0x250e74u: goto label_250e74;
        case 0x250e78u: goto label_250e78;
        case 0x250e7cu: goto label_250e7c;
        case 0x250e80u: goto label_250e80;
        case 0x250e84u: goto label_250e84;
        case 0x250e88u: goto label_250e88;
        case 0x250e8cu: goto label_250e8c;
        case 0x250e90u: goto label_250e90;
        case 0x250e94u: goto label_250e94;
        case 0x250e98u: goto label_250e98;
        case 0x250e9cu: goto label_250e9c;
        case 0x250ea0u: goto label_250ea0;
        case 0x250ea4u: goto label_250ea4;
        case 0x250ea8u: goto label_250ea8;
        case 0x250eacu: goto label_250eac;
        case 0x250eb0u: goto label_250eb0;
        case 0x250eb4u: goto label_250eb4;
        case 0x250eb8u: goto label_250eb8;
        case 0x250ebcu: goto label_250ebc;
        case 0x250ec0u: goto label_250ec0;
        case 0x250ec4u: goto label_250ec4;
        case 0x250ec8u: goto label_250ec8;
        case 0x250eccu: goto label_250ecc;
        case 0x250ed0u: goto label_250ed0;
        case 0x250ed4u: goto label_250ed4;
        case 0x250ed8u: goto label_250ed8;
        case 0x250edcu: goto label_250edc;
        case 0x250ee0u: goto label_250ee0;
        case 0x250ee4u: goto label_250ee4;
        case 0x250ee8u: goto label_250ee8;
        case 0x250eecu: goto label_250eec;
        case 0x250ef0u: goto label_250ef0;
        case 0x250ef4u: goto label_250ef4;
        case 0x250ef8u: goto label_250ef8;
        case 0x250efcu: goto label_250efc;
        case 0x250f00u: goto label_250f00;
        case 0x250f04u: goto label_250f04;
        case 0x250f08u: goto label_250f08;
        case 0x250f0cu: goto label_250f0c;
        case 0x250f10u: goto label_250f10;
        case 0x250f14u: goto label_250f14;
        case 0x250f18u: goto label_250f18;
        case 0x250f1cu: goto label_250f1c;
        case 0x250f20u: goto label_250f20;
        case 0x250f24u: goto label_250f24;
        case 0x250f28u: goto label_250f28;
        case 0x250f2cu: goto label_250f2c;
        case 0x250f30u: goto label_250f30;
        case 0x250f34u: goto label_250f34;
        case 0x250f38u: goto label_250f38;
        case 0x250f3cu: goto label_250f3c;
        case 0x250f40u: goto label_250f40;
        case 0x250f44u: goto label_250f44;
        case 0x250f48u: goto label_250f48;
        case 0x250f4cu: goto label_250f4c;
        case 0x250f50u: goto label_250f50;
        case 0x250f54u: goto label_250f54;
        case 0x250f58u: goto label_250f58;
        case 0x250f5cu: goto label_250f5c;
        case 0x250f60u: goto label_250f60;
        case 0x250f64u: goto label_250f64;
        case 0x250f68u: goto label_250f68;
        case 0x250f6cu: goto label_250f6c;
        case 0x250f70u: goto label_250f70;
        case 0x250f74u: goto label_250f74;
        case 0x250f78u: goto label_250f78;
        case 0x250f7cu: goto label_250f7c;
        case 0x250f80u: goto label_250f80;
        case 0x250f84u: goto label_250f84;
        case 0x250f88u: goto label_250f88;
        case 0x250f8cu: goto label_250f8c;
        case 0x250f90u: goto label_250f90;
        case 0x250f94u: goto label_250f94;
        case 0x250f98u: goto label_250f98;
        case 0x250f9cu: goto label_250f9c;
        case 0x250fa0u: goto label_250fa0;
        case 0x250fa4u: goto label_250fa4;
        case 0x250fa8u: goto label_250fa8;
        case 0x250facu: goto label_250fac;
        case 0x250fb0u: goto label_250fb0;
        case 0x250fb4u: goto label_250fb4;
        case 0x250fb8u: goto label_250fb8;
        case 0x250fbcu: goto label_250fbc;
        case 0x250fc0u: goto label_250fc0;
        case 0x250fc4u: goto label_250fc4;
        case 0x250fc8u: goto label_250fc8;
        case 0x250fccu: goto label_250fcc;
        case 0x250fd0u: goto label_250fd0;
        case 0x250fd4u: goto label_250fd4;
        case 0x250fd8u: goto label_250fd8;
        case 0x250fdcu: goto label_250fdc;
        case 0x250fe0u: goto label_250fe0;
        case 0x250fe4u: goto label_250fe4;
        case 0x250fe8u: goto label_250fe8;
        case 0x250fecu: goto label_250fec;
        case 0x250ff0u: goto label_250ff0;
        case 0x250ff4u: goto label_250ff4;
        case 0x250ff8u: goto label_250ff8;
        case 0x250ffcu: goto label_250ffc;
        case 0x251000u: goto label_251000;
        case 0x251004u: goto label_251004;
        case 0x251008u: goto label_251008;
        case 0x25100cu: goto label_25100c;
        case 0x251010u: goto label_251010;
        case 0x251014u: goto label_251014;
        case 0x251018u: goto label_251018;
        case 0x25101cu: goto label_25101c;
        case 0x251020u: goto label_251020;
        case 0x251024u: goto label_251024;
        case 0x251028u: goto label_251028;
        case 0x25102cu: goto label_25102c;
        case 0x251030u: goto label_251030;
        case 0x251034u: goto label_251034;
        case 0x251038u: goto label_251038;
        case 0x25103cu: goto label_25103c;
        case 0x251040u: goto label_251040;
        case 0x251044u: goto label_251044;
        case 0x251048u: goto label_251048;
        case 0x25104cu: goto label_25104c;
        default: return;
    }

label_250880:
    // 0x250880: 0x2d6  .word       0x000002D6                   # dsrlv       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250880u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250884:
    // 0x250884: 0x2e8  .word       0x000002E8                   # mfsa        $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250884u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_250888:
    // 0x250888: 0x302  srl         $zero, $zero, 12
    ctx->pc = 0x250888u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_25088c:
    // 0x25088c: 0x315  .word       0x00000315                   # INVALID     $zero, $zero, 0x315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25088cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25088C raw=0x00000315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250890:
    // 0x250890: 0x32c  .word       0x0000032C                   # dadd        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250890u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250894:
    // 0x250894: 0x341  .word       0x00000341                   # INVALID     $zero, $zero, 0x341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250894 raw=0x00000341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250898:
    // 0x250898: 0x353  .word       0x00000353                   # mtlo        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250898u;
    ctx->lo = GPR_U64(ctx, 0);
label_25089c:
    // 0x25089c: 0x368  .word       0x00000368                   # mfsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25089cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2508a0:
    // 0x2508a0: 0x37c  dsll32      $zero, $zero, 13
    ctx->pc = 0x2508a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 13));
label_2508a4:
    // 0x2508a4: 0x392  .word       0x00000392                   # mflo        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508a4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2508a8:
    // 0x2508a8: 0x3a9  .word       0x000003A9                   # mtsa        $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2508a8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2508ac:
    // 0x2508ac: 0x3c1  .word       0x000003C1                   # INVALID     $zero, $zero, 0x3C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2508AC raw=0x000003C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2508b0:
    // 0x2508b0: 0x3d3  .word       0x000003D3                   # mtlo        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2508b4:
    // 0x2508b4: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2508b4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2508b8:
    // 0x2508b8: 0x3fa  dsrl        $zero, $zero, 15
    ctx->pc = 0x2508b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 15);
label_2508bc:
    // 0x2508bc: 0x40a  .word       0x0000040A                   # movz        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508bcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2508c0:
    // 0x2508c0: 0x41f  .word       0x0000041F                   # ddivu       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2508C0 raw=0x0000041F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2508c4:
    // 0x2508c4: 0x432  tlt         $zero, $zero, 16
    ctx->pc = 0x2508c4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2508c8:
    // 0x2508c8: 0x446  .word       0x00000446                   # srlv        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2508cc:
    // 0x2508cc: 0x0  nop
    ctx->pc = 0x2508ccu;
    // NOP
label_2508d0:
    // 0x2508d0: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_2508d4:
    if (ctx->pc == 0x2508D4u) {
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2508D8u;
        goto label_2508d8;
    }
    ctx->pc = 0x2508D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508D0u, 0x2508D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2508D8u;
label_2508d8:
    // 0x2508d8: 0x2b2  tlt         $zero, $zero, 10
    ctx->pc = 0x2508d8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2508dc:
    // 0x2508dc: 0x2c4  .word       0x000002C4                   # sllv        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2508e0:
    // 0x2508e0: 0x2d7  .word       0x000002D7                   # dsrav       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2508e4:
    // 0x2508e4: 0x2ea  .word       0x000002EA                   # slt         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508e4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2508e8:
    // 0x2508e8: 0x303  sra         $zero, $zero, 12
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 12));
label_2508ec:
    // 0x2508ec: 0x316  .word       0x00000316                   # dsrlv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2508f0:
    // 0x2508f0: 0x32d  .word       0x0000032D                   # daddu       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508f0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2508f4:
    // 0x2508f4: 0x342  srl         $zero, $zero, 13
    ctx->pc = 0x2508f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_2508f8:
    // 0x2508f8: 0x354  .word       0x00000354                   # dsllv       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2508fc:
    // 0x2508fc: 0x369  .word       0x00000369                   # mtsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2508fcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250900:
    // 0x250900: 0x37d  .word       0x0000037D                   # INVALID     $zero, $zero, 0x37D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x250900 raw=0x0000037D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250904:
    // 0x250904: 0x393  .word       0x00000393                   # mtlo        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250904u;
    ctx->lo = GPR_U64(ctx, 0);
label_250908:
    // 0x250908: 0x3aa  .word       0x000003AA                   # slt         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250908u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25090c:
    // 0x25090c: 0x3c2  srl         $zero, $zero, 15
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_250910:
    // 0x250910: 0x3d4  .word       0x000003D4                   # dsllv       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250910u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250914:
    // 0x250914: 0x3e9  .word       0x000003E9                   # mtsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250914u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250918:
    // 0x250918: 0x3fb  dsra        $zero, $zero, 15
    ctx->pc = 0x250918u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 15);
label_25091c:
    // 0x25091c: 0x40b  .word       0x0000040B                   # movn        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25091cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250920:
    // 0x250920: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250920u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250924:
    // 0x250924: 0x433  tltu        $zero, $zero, 16
    ctx->pc = 0x250924u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250928:
    // 0x250928: 0x447  .word       0x00000447                   # srav        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250928u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25092c:
    // 0x25092c: 0x0  nop
    ctx->pc = 0x25092cu;
    // NOP
label_250930:
    // 0x250930: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_250934:
    if (ctx->pc == 0x250934u) {
        ctx->pc = 0x250934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250930u;
        // 0x250934: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250938u;
        goto label_250938;
    }
    ctx->pc = 0x250930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250930u;
        // 0x250934: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250930u, 0x250938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250938u;
label_250938:
    // 0x250938: 0x2b2  tlt         $zero, $zero, 10
    ctx->pc = 0x250938u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25093c:
    // 0x25093c: 0x2c5  .word       0x000002C5                   # INVALID     $zero, $zero, 0x2C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25093cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25093C raw=0x000002C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250940:
    // 0x250940: 0x2d7  .word       0x000002D7                   # dsrav       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250940u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250944:
    // 0x250944: 0x2ee  .word       0x000002EE                   # dsub        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250944u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250948:
    // 0x250948: 0x303  sra         $zero, $zero, 12
    ctx->pc = 0x250948u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 12));
label_25094c:
    // 0x25094c: 0x316  .word       0x00000316                   # dsrlv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25094cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250950:
    // 0x250950: 0x32e  .word       0x0000032E                   # dsub        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250950u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250954:
    // 0x250954: 0x342  srl         $zero, $zero, 13
    ctx->pc = 0x250954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_250958:
    // 0x250958: 0x354  .word       0x00000354                   # dsllv       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250958u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25095c:
    // 0x25095c: 0x369  .word       0x00000369                   # mtsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25095cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250960:
    // 0x250960: 0x37d  .word       0x0000037D                   # INVALID     $zero, $zero, 0x37D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x250960 raw=0x0000037D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250964:
    // 0x250964: 0x393  .word       0x00000393                   # mtlo        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250964u;
    ctx->lo = GPR_U64(ctx, 0);
label_250968:
    // 0x250968: 0x3ab  .word       0x000003AB                   # sltu        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250968u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25096c:
    // 0x25096c: 0x3c2  srl         $zero, $zero, 15
    ctx->pc = 0x25096cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_250970:
    // 0x250970: 0x3d4  .word       0x000003D4                   # dsllv       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250970u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250974:
    // 0x250974: 0x3e9  .word       0x000003E9                   # mtsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250974u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250978:
    // 0x250978: 0x3fc  dsll32      $zero, $zero, 15
    ctx->pc = 0x250978u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 15));
label_25097c:
    // 0x25097c: 0x40b  .word       0x0000040B                   # movn        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25097cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250980:
    // 0x250980: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250984:
    // 0x250984: 0x433  tltu        $zero, $zero, 16
    ctx->pc = 0x250984u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250988:
    // 0x250988: 0x447  .word       0x00000447                   # srav        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250988u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25098c:
    // 0x25098c: 0x0  nop
    ctx->pc = 0x25098cu;
    // NOP
label_250990:
    // 0x250990: 0x2ee  .word       0x000002EE                   # dsub        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250990u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250994:
    // 0x250994: 0x2ef  .word       0x000002EF                   # dsubu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250994u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_250998:
    // 0x250998: 0x2f0  tge         $zero, $zero, 11
    ctx->pc = 0x250998u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25099c:
    // 0x25099c: 0x2f1  tgeu        $zero, $zero, 11
    ctx->pc = 0x25099cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2509a0:
    // 0x2509a0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2509a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2509a4:
    // 0x2509a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2509a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2509a8:
    // 0x2509a8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2509a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2509ac:
    // 0x2509ac: 0x8  jr          $zero
label_2509b0:
    if (ctx->pc == 0x2509B0u) {
        ctx->pc = 0x2509B4u;
        goto label_2509b4;
    }
    ctx->pc = 0x2509ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2509ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2509B4u;
label_2509b4:
    // 0x2509b4: 0x12  mflo        $zero
    ctx->pc = 0x2509b4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2509b8:
    // 0x2509b8: 0x0  nop
    ctx->pc = 0x2509b8u;
    // NOP
label_2509bc:
    // 0x2509bc: 0x0  nop
    ctx->pc = 0x2509bcu;
    // NOP
label_2509c0:
    // 0x2509c0: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x2509c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2509c4:
    // 0x2509c4: 0xc2100000  ll          $s0, 0x0($s0)
    ctx->pc = 0x2509c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2509c8:
    // 0x2509c8: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2509c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2509C8 raw=0x43340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2509cc:
    // 0x2509cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2509ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2509d0:
    // 0x2509d0: 0xf  sync
    ctx->pc = 0x2509d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2509d4:
    // 0x2509d4: 0x13  mtlo        $zero
    ctx->pc = 0x2509d4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2509d8:
    // 0x2509d8: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2509d8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2509dc:
    // 0x2509dc: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x2509dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2509e0:
    // 0x2509e0: 0x0  nop
    ctx->pc = 0x2509e0u;
    // NOP
label_2509e4:
    // 0x2509e4: 0x0  nop
    ctx->pc = 0x2509e4u;
    // NOP
label_2509e8:
    // 0x2509e8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2509e8u;
    
label_2509ec:
    // 0x2509ec: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2509ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2509f0:
    // 0x2509f0: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2509f0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2509f4:
    // 0x2509f4: 0x7c8  .word       0x000007C8                   # jr          $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_2509f8:
    if (ctx->pc == 0x2509F8u) {
        ctx->pc = 0x2509FCu;
        goto label_2509fc;
    }
    ctx->pc = 0x2509F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2509F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2509FCu;
label_2509fc:
    // 0x2509fc: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2509fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250a00:
    // 0x250a00: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x250a00u;
    
label_250a04:
    // 0x250a04: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x250a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250a08:
    // 0x250a08: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x250a08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_250a0c:
    // 0x250a0c: 0x838  dsll        $at, $zero, 0
    ctx->pc = 0x250a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 0);
label_250a10:
    // 0x250a10: 0x0  nop
    ctx->pc = 0x250a10u;
    // NOP
label_250a14:
    // 0x250a14: 0x0  nop
    ctx->pc = 0x250a14u;
    // NOP
label_250a18:
    // 0x250a18: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x250a18u;
    
label_250a1c:
    // 0x250a1c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250a20:
    // 0x250a20: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x250a20u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_250a24:
    // 0x250a24: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x250a24u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_250a28:
    // 0x250a28: 0x0  nop
    ctx->pc = 0x250a28u;
    // NOP
label_250a2c:
    // 0x250a2c: 0x0  nop
    ctx->pc = 0x250a2cu;
    // NOP
label_250a30:
    // 0x250a30: 0x0  nop
    ctx->pc = 0x250a30u;
    // NOP
label_250a34:
    // 0x250a34: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x250a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_250a38:
    // 0x250a38: 0xc47a0000  lwc1        $f26, 0x0($v1)
    ctx->pc = 0x250a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_250a3c:
    // 0x250a3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x250a3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_250a40:
    // 0x250a40: 0x0  nop
    ctx->pc = 0x250a40u;
    // NOP
label_250a44:
    // 0x250a44: 0x0  nop
    ctx->pc = 0x250a44u;
    // NOP
label_250a48:
    // 0x250a48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250A48 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a4c:
    // 0x250a4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250A4C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a50:
    // 0x250a50: 0x10  mfhi        $zero
    ctx->pc = 0x250a50u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250a54:
    // 0x250a54: 0x11  mthi        $zero
    ctx->pc = 0x250a54u;
    ctx->hi = GPR_U64(ctx, 0);
label_250a58:
    // 0x250a58: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x250a58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250a5c:
    // 0x250a5c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250A5C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a60:
    // 0x250a60: 0x11  mthi        $zero
    ctx->pc = 0x250a60u;
    ctx->hi = GPR_U64(ctx, 0);
label_250a64:
    // 0x250a64: 0x13  mtlo        $zero
    ctx->pc = 0x250a64u;
    ctx->lo = GPR_U64(ctx, 0);
label_250a68:
    // 0x250a68: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250a68u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250a6c:
    // 0x250a6c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250a6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250a70:
    // 0x250a70: 0x10  mfhi        $zero
    ctx->pc = 0x250a70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250a74:
    // 0x250a74: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250A74 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a78:
    // 0x250a78: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x250a78u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_250a7c:
    // 0x250a7c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x250a7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250a80:
    // 0x250a80: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x250a80u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250a84:
    // 0x250a84: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250A84 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a88:
    // 0x250a88: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x250a88u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250a8c:
    // 0x250a8c: 0x10  mfhi        $zero
    ctx->pc = 0x250a8cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250a90:
    // 0x250a90: 0x13  mtlo        $zero
    ctx->pc = 0x250a90u;
    ctx->lo = GPR_U64(ctx, 0);
label_250a94:
    // 0x250a94: 0x12  mflo        $zero
    ctx->pc = 0x250a94u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250a98:
    // 0x250a98: 0x11  mthi        $zero
    ctx->pc = 0x250a98u;
    ctx->hi = GPR_U64(ctx, 0);
label_250a9c:
    // 0x250a9c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x250a9cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250aa0:
    // 0x250aa0: 0x8  jr          $zero
label_250aa4:
    if (ctx->pc == 0x250AA4u) {
        ctx->pc = 0x250AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AA0u;
        // 0x250aa4: 0x11  mthi        $zero (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250AA8u;
        goto label_250aa8;
    }
    ctx->pc = 0x250AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AA0u;
        // 0x250aa4: 0x11  mthi        $zero (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250AA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250AA8u;
label_250aa8:
    // 0x250aa8: 0x13  mtlo        $zero
    ctx->pc = 0x250aa8u;
    ctx->lo = GPR_U64(ctx, 0);
label_250aac:
    // 0x250aac: 0x13  mtlo        $zero
    ctx->pc = 0x250aacu;
    ctx->lo = GPR_U64(ctx, 0);
label_250ab0:
    // 0x250ab0: 0x12  mflo        $zero
    ctx->pc = 0x250ab0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250ab4:
    // 0x250ab4: 0x10  mfhi        $zero
    ctx->pc = 0x250ab4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250ab8:
    // 0x250ab8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x250ab8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250abc:
    // 0x250abc: 0x9  jalr        $zero, $zero
label_250ac0:
    if (ctx->pc == 0x250AC0u) {
        ctx->pc = 0x250AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ABCu;
        // 0x250ac0: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250AC4u;
        goto label_250ac4;
    }
    ctx->pc = 0x250ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ABCu;
        // 0x250ac0: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250ABCu, 0x250AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250AC4u;
label_250ac4:
    // 0x250ac4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x250ac4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250ac8:
    // 0x250ac8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x250ac8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250acc:
    // 0x250acc: 0x10  mfhi        $zero
    ctx->pc = 0x250accu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250ad0:
    // 0x250ad0: 0x11  mthi        $zero
    ctx->pc = 0x250ad0u;
    ctx->hi = GPR_U64(ctx, 0);
label_250ad4:
    // 0x250ad4: 0x13  mtlo        $zero
    ctx->pc = 0x250ad4u;
    ctx->lo = GPR_U64(ctx, 0);
label_250ad8:
    // 0x250ad8: 0x12  mflo        $zero
    ctx->pc = 0x250ad8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250adc:
    // 0x250adc: 0xc  syscall     0
    ctx->pc = 0x250adcu;
    ctx->pc = 0x250AE0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_250ae0:
    // 0x250ae0: 0xd  break       0
    ctx->pc = 0x250ae0u;
    runtime->handleBreak(rdram, ctx);
label_250ae4:
    // 0x250ae4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x250AE4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ae8:
    // 0x250ae8: 0xf  sync
    ctx->pc = 0x250ae8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250aec:
    // 0x250aec: 0x10  mfhi        $zero
    ctx->pc = 0x250aecu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250af0:
    // 0x250af0: 0x12  mflo        $zero
    ctx->pc = 0x250af0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250af4:
    // 0x250af4: 0x10  mfhi        $zero
    ctx->pc = 0x250af4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250af8:
    // 0x250af8: 0x11  mthi        $zero
    ctx->pc = 0x250af8u;
    ctx->hi = GPR_U64(ctx, 0);
label_250afc:
    // 0x250afc: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x250afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250b00:
    // 0x250b00: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250B00 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b04:
    // 0x250b04: 0x11  mthi        $zero
    ctx->pc = 0x250b04u;
    ctx->hi = GPR_U64(ctx, 0);
label_250b08:
    // 0x250b08: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x250b08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250b0c:
    // 0x250b0c: 0x12  mflo        $zero
    ctx->pc = 0x250b0cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250b10:
    // 0x250b10: 0x13  mtlo        $zero
    ctx->pc = 0x250b10u;
    ctx->lo = GPR_U64(ctx, 0);
label_250b14:
    // 0x250b14: 0x11  mthi        $zero
    ctx->pc = 0x250b14u;
    ctx->hi = GPR_U64(ctx, 0);
label_250b18:
    // 0x250b18: 0x12  mflo        $zero
    ctx->pc = 0x250b18u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250b1c:
    // 0x250b1c: 0x11  mthi        $zero
    ctx->pc = 0x250b1cu;
    ctx->hi = GPR_U64(ctx, 0);
label_250b20:
    // 0x250b20: 0x0  nop
    ctx->pc = 0x250b20u;
    // NOP
label_250b24:
    // 0x250b24: 0x0  nop
    ctx->pc = 0x250b24u;
    // NOP
label_250b28:
    // 0x250b28: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250B28 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b2c:
    // 0x250b2c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250B2C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b30:
    // 0x250b30: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250B30 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b34:
    // 0x250b34: 0x12  mflo        $zero
    ctx->pc = 0x250b34u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250b38:
    // 0x250b38: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x250b38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250b3c:
    // 0x250b3c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250B3C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b40:
    // 0x250b40: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250b40u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250b44:
    // 0x250b44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250b44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250b48:
    // 0x250b48: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x250b48u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250b4c:
    // 0x250b4c: 0x10  mfhi        $zero
    ctx->pc = 0x250b4cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250b50:
    // 0x250b50: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x250b50u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250b54:
    // 0x250b54: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x250b54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_250b58:
    // 0x250b58: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x250b58u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_250b5c:
    // 0x250b5c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x250b5cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250b60:
    // 0x250b60: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250B60 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b64:
    // 0x250b64: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250b64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250B64 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250b68:
    // 0x250b68: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x250b68u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250b6c:
    // 0x250b6c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x250b6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250b70:
    // 0x250b70: 0x13  mtlo        $zero
    ctx->pc = 0x250b70u;
    ctx->lo = GPR_U64(ctx, 0);
label_250b74:
    // 0x250b74: 0x11  mthi        $zero
    ctx->pc = 0x250b74u;
    ctx->hi = GPR_U64(ctx, 0);
label_250b78:
    // 0x250b78: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x250b78u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250b7c:
    // 0x250b7c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x250b7cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250b80:
    // 0x250b80: 0x8  jr          $zero
label_250b84:
    if (ctx->pc == 0x250B84u) {
        ctx->pc = 0x250B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B80u;
        // 0x250b84: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250B84 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B88u;
        goto label_250b88;
    }
    ctx->pc = 0x250B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B80u;
        // 0x250b84: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250B84 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250B88u;
label_250b88:
    // 0x250b88: 0x13  mtlo        $zero
    ctx->pc = 0x250b88u;
    ctx->lo = GPR_U64(ctx, 0);
label_250b8c:
    // 0x250b8c: 0x9  jalr        $zero, $zero
label_250b90:
    if (ctx->pc == 0x250B90u) {
        ctx->pc = 0x250B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B8Cu;
        // 0x250b90: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B94u;
        goto label_250b94;
    }
    ctx->pc = 0x250B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B8Cu;
        // 0x250b90: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B8Cu, 0x250B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250B94u;
label_250b94:
    // 0x250b94: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x250b94u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250b98:
    // 0x250b98: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x250b98u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250b9c:
    // 0x250b9c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x250b9cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250ba0:
    // 0x250ba0: 0x10  mfhi        $zero
    ctx->pc = 0x250ba0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250ba4:
    // 0x250ba4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x250ba4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250ba8:
    // 0x250ba8: 0xd  break       0
    ctx->pc = 0x250ba8u;
    runtime->handleBreak(rdram, ctx);
label_250bac:
    // 0x250bac: 0xc  syscall     0
    ctx->pc = 0x250bacu;
    ctx->pc = 0x250BB0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_250bb0:
    // 0x250bb0: 0xc  syscall     0
    ctx->pc = 0x250bb0u;
    ctx->pc = 0x250BB4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_250bb4:
    // 0x250bb4: 0xf  sync
    ctx->pc = 0x250bb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250bb8:
    // 0x250bb8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250bb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x250BB8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250bbc:
    // 0x250bbc: 0x8  jr          $zero
label_250bc0:
    if (ctx->pc == 0x250BC0u) {
        ctx->pc = 0x250BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BBCu;
        // 0x250bc0: 0x12  mflo        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BC4u;
        goto label_250bc4;
    }
    ctx->pc = 0x250BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BBCu;
        // 0x250bc0: 0x12  mflo        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250BBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250BC4u;
label_250bc4:
    // 0x250bc4: 0x11  mthi        $zero
    ctx->pc = 0x250bc4u;
    ctx->hi = GPR_U64(ctx, 0);
label_250bc8:
    // 0x250bc8: 0x10  mfhi        $zero
    ctx->pc = 0x250bc8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250bcc:
    // 0x250bcc: 0x11  mthi        $zero
    ctx->pc = 0x250bccu;
    ctx->hi = GPR_U64(ctx, 0);
label_250bd0:
    // 0x250bd0: 0x12  mflo        $zero
    ctx->pc = 0x250bd0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250bd4:
    // 0x250bd4: 0x0  nop
    ctx->pc = 0x250bd4u;
    // NOP
label_250bd8:
    // 0x250bd8: 0x0  nop
    ctx->pc = 0x250bd8u;
    // NOP
label_250bdc:
    // 0x250bdc: 0x0  nop
    ctx->pc = 0x250bdcu;
    // NOP
label_250be0:
    // 0x250be0: 0x285  .word       0x00000285                   # INVALID     $zero, $zero, 0x285 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250be0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250BE0 raw=0x00000285"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250be4:
    // 0x250be4: 0x297  .word       0x00000297                   # dsrav       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250be8:
    // 0x250be8: 0x2b0  tge         $zero, $zero, 10
    ctx->pc = 0x250be8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250bec:
    // 0x250bec: 0x2c2  srl         $zero, $zero, 11
    ctx->pc = 0x250becu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 11));
label_250bf0:
    // 0x250bf0: 0x2d5  .word       0x000002D5                   # INVALID     $zero, $zero, 0x2D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250BF0 raw=0x000002D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250bf4:
    // 0x250bf4: 0x2ec  .word       0x000002EC                   # dadd        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250bf4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250bf8:
    // 0x250bf8: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x250bf8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_250bfc:
    // 0x250bfc: 0x312  .word       0x00000312                   # mflo        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250bfcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250c00:
    // 0x250c00: 0x329  .word       0x00000329                   # mtsa        $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250c00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250c04:
    // 0x250c04: 0x33e  dsrl32      $zero, $zero, 12
    ctx->pc = 0x250c04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 12));
label_250c08:
    // 0x250c08: 0x351  .word       0x00000351                   # mthi        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c08u;
    ctx->hi = GPR_U64(ctx, 0);
label_250c0c:
    // 0x250c0c: 0x366  .word       0x00000366                   # xor         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_250c10:
    // 0x250c10: 0x379  .word       0x00000379                   # INVALID     $zero, $zero, 0x379 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x250C10 raw=0x00000379"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c14:
    // 0x250c14: 0x391  .word       0x00000391                   # mthi        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c14u;
    ctx->hi = GPR_U64(ctx, 0);
label_250c18:
    // 0x250c18: 0x3a8  .word       0x000003A8                   # mfsa        $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250c18u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_250c1c:
    // 0x250c1c: 0x3be  dsrl32      $zero, $zero, 14
    ctx->pc = 0x250c1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 14));
label_250c20:
    // 0x250c20: 0x3d2  .word       0x000003D2                   # mflo        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c20u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250c24:
    // 0x250c24: 0x3e5  .word       0x000003E5                   # move        $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_250c28:
    // 0x250c28: 0x3f7  .word       0x000003F7                   # INVALID     $zero, $zero, 0x3F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x250C28 raw=0x000003F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c2c:
    // 0x250c2c: 0x40d  break       0, 16
    ctx->pc = 0x250c2cu;
    runtime->handleBreak(rdram, ctx);
label_250c30:
    // 0x250c30: 0x41c  .word       0x0000041C                   # dmult       $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x250C30 raw=0x0000041C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c34:
    // 0x250c34: 0x42f  .word       0x0000042F                   # dsubu       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_250c38:
    // 0x250c38: 0x444  .word       0x00000444                   # sllv        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c38u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250c3c:
    // 0x250c3c: 0x0  nop
    ctx->pc = 0x250c3cu;
    // NOP
label_250c40:
    // 0x250c40: 0x909  .word       0x00000909                   # jalr        $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_250c44:
    if (ctx->pc == 0x250C44u) {
        ctx->pc = 0x250C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C40u;
        // 0x250c44: 0x90f  .word       0x0000090F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C48u;
        goto label_250c48;
    }
    ctx->pc = 0x250C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x250C48u);
        ctx->pc = 0x250C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C40u;
        // 0x250c44: 0x90f  .word       0x0000090F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250C40u, 0x250C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250C48u;
label_250c48:
    // 0x250c48: 0x915  .word       0x00000915                   # INVALID     $zero, $zero, 0x915 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250C48 raw=0x00000915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c4c:
    // 0x250c4c: 0x91b  .word       0x0000091B                   # divu        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c4cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_250c50:
    // 0x250c50: 0x921  .word       0x00000921                   # addu        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_250c54:
    // 0x250c54: 0x927  .word       0x00000927                   # not         $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c54u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_250c58:
    // 0x250c58: 0x92d  .word       0x0000092D                   # daddu       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c58u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250c5c:
    // 0x250c5c: 0x933  tltu        $zero, $zero, 36
    ctx->pc = 0x250c5cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250c60:
    // 0x250c60: 0x939  .word       0x00000939                   # INVALID     $zero, $zero, 0x939 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x250C60 raw=0x00000939"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c64:
    // 0x250c64: 0x93f  dsra32      $at, $zero, 4
    ctx->pc = 0x250c64u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 4));
label_250c68:
    // 0x250c68: 0x945  .word       0x00000945                   # INVALID     $zero, $zero, 0x945 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250C68 raw=0x00000945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c6c:
    // 0x250c6c: 0x94b  .word       0x0000094B                   # movn        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_250c70:
    // 0x250c70: 0x951  .word       0x00000951                   # mthi        $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c70u;
    ctx->hi = GPR_U64(ctx, 0);
label_250c74:
    // 0x250c74: 0x957  .word       0x00000957                   # dsrav       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c74u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250c78:
    // 0x250c78: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_250c7c:
    // 0x250c7c: 0x966  .word       0x00000966                   # xor         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_250c80:
    // 0x250c80: 0x96c  .word       0x0000096C                   # dadd        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_250c84:
    // 0x250c84: 0x972  tlt         $zero, $zero, 37
    ctx->pc = 0x250c84u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250c88:
    // 0x250c88: 0x978  dsll        $at, $zero, 5
    ctx->pc = 0x250c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 5);
label_250c8c:
    // 0x250c8c: 0x97f  dsra32      $at, $zero, 5
    ctx->pc = 0x250c8cu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 5));
label_250c90:
    // 0x250c90: 0x985  .word       0x00000985                   # INVALID     $zero, $zero, 0x985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250C90 raw=0x00000985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250c94:
    // 0x250c94: 0x98b  .word       0x0000098B                   # movn        $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c94u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_250c98:
    // 0x250c98: 0x994  .word       0x00000994                   # dsllv       $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250c9c:
    // 0x250c9c: 0x0  nop
    ctx->pc = 0x250c9cu;
    // NOP
label_250ca0:
    // 0x250ca0: 0x285  .word       0x00000285                   # INVALID     $zero, $zero, 0x285 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250CA0 raw=0x00000285"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ca4:
    // 0x250ca4: 0x29f  .word       0x0000029F                   # ddivu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ca4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x250CA4 raw=0x0000029F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ca8:
    // 0x250ca8: 0x2b0  tge         $zero, $zero, 10
    ctx->pc = 0x250ca8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250cac:
    // 0x250cac: 0x2c2  srl         $zero, $zero, 11
    ctx->pc = 0x250cacu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 11));
label_250cb0:
    // 0x250cb0: 0x2db  .word       0x000002DB                   # divu        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cb0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_250cb4:
    // 0x250cb4: 0x2ec  .word       0x000002EC                   # dadd        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cb4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250cb8:
    // 0x250cb8: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x250cb8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_250cbc:
    // 0x250cbc: 0x319  .word       0x00000319                   # multu       $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cbcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_250cc0:
    // 0x250cc0: 0x331  tgeu        $zero, $zero, 12
    ctx->pc = 0x250cc0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250cc4:
    // 0x250cc4: 0x33e  dsrl32      $zero, $zero, 12
    ctx->pc = 0x250cc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 12));
label_250cc8:
    // 0x250cc8: 0x358  .word       0x00000358                   # mult        $zero, $zero, $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_250ccc:
    // 0x250ccc: 0x366  .word       0x00000366                   # xor         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_250cd0:
    // 0x250cd0: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x250cd0u;
    
label_250cd4:
    // 0x250cd4: 0x397  .word       0x00000397                   # dsrav       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250cd8:
    // 0x250cd8: 0x3ae  .word       0x000003AE                   # dsub        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cd8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250cdc:
    // 0x250cdc: 0x3be  dsrl32      $zero, $zero, 14
    ctx->pc = 0x250cdcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 14));
label_250ce0:
    // 0x250ce0: 0x3d7  .word       0x000003D7                   # dsrav       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ce0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250ce4:
    // 0x250ce4: 0x3e5  .word       0x000003E5                   # move        $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ce4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_250ce8:
    // 0x250ce8: 0x3f7  .word       0x000003F7                   # INVALID     $zero, $zero, 0x3F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ce8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x250CE8 raw=0x000003F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250cec:
    // 0x250cec: 0x40d  break       0, 16
    ctx->pc = 0x250cecu;
    runtime->handleBreak(rdram, ctx);
label_250cf0:
    // 0x250cf0: 0x41c  .word       0x0000041C                   # dmult       $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x250CF0 raw=0x0000041C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250cf4:
    // 0x250cf4: 0x436  tne         $zero, $zero, 16
    ctx->pc = 0x250cf4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250cf8:
    // 0x250cf8: 0x444  .word       0x00000444                   # sllv        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250cf8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250cfc:
    // 0x250cfc: 0x0  nop
    ctx->pc = 0x250cfcu;
    // NOP
label_250d00:
    // 0x250d00: 0x909  .word       0x00000909                   # jalr        $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_250d04:
    if (ctx->pc == 0x250D04u) {
        ctx->pc = 0x250D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D00u;
        // 0x250d04: 0x90f  .word       0x0000090F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D08u;
        goto label_250d08;
    }
    ctx->pc = 0x250D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x250D08u);
        ctx->pc = 0x250D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D00u;
        // 0x250d04: 0x90f  .word       0x0000090F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250D00u, 0x250D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250D08u;
label_250d08:
    // 0x250d08: 0x915  .word       0x00000915                   # INVALID     $zero, $zero, 0x915 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250D08 raw=0x00000915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d0c:
    // 0x250d0c: 0x91b  .word       0x0000091B                   # divu        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d0cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_250d10:
    // 0x250d10: 0x921  .word       0x00000921                   # addu        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_250d14:
    // 0x250d14: 0x927  .word       0x00000927                   # not         $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d14u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_250d18:
    // 0x250d18: 0x92d  .word       0x0000092D                   # daddu       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d18u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250d1c:
    // 0x250d1c: 0x933  tltu        $zero, $zero, 36
    ctx->pc = 0x250d1cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250d20:
    // 0x250d20: 0x939  .word       0x00000939                   # INVALID     $zero, $zero, 0x939 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x250D20 raw=0x00000939"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d24:
    // 0x250d24: 0x93f  dsra32      $at, $zero, 4
    ctx->pc = 0x250d24u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 4));
label_250d28:
    // 0x250d28: 0x945  .word       0x00000945                   # INVALID     $zero, $zero, 0x945 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250D28 raw=0x00000945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d2c:
    // 0x250d2c: 0x94b  .word       0x0000094B                   # movn        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d2cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_250d30:
    // 0x250d30: 0x951  .word       0x00000951                   # mthi        $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d30u;
    ctx->hi = GPR_U64(ctx, 0);
label_250d34:
    // 0x250d34: 0x959  .word       0x00000959                   # multu       $zero, $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d34u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_250d38:
    // 0x250d38: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_250d3c:
    // 0x250d3c: 0x966  .word       0x00000966                   # xor         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_250d40:
    // 0x250d40: 0x96c  .word       0x0000096C                   # dadd        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_250d44:
    // 0x250d44: 0x972  tlt         $zero, $zero, 37
    ctx->pc = 0x250d44u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250d48:
    // 0x250d48: 0x978  dsll        $at, $zero, 5
    ctx->pc = 0x250d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 5);
label_250d4c:
    // 0x250d4c: 0x97f  dsra32      $at, $zero, 5
    ctx->pc = 0x250d4cu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 5));
label_250d50:
    // 0x250d50: 0x985  .word       0x00000985                   # INVALID     $zero, $zero, 0x985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250D50 raw=0x00000985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d54:
    // 0x250d54: 0x98d  break       0, 38
    ctx->pc = 0x250d54u;
    runtime->handleBreak(rdram, ctx);
label_250d58:
    // 0x250d58: 0x994  .word       0x00000994                   # dsllv       $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250d5c:
    // 0x250d5c: 0x0  nop
    ctx->pc = 0x250d5cu;
    // NOP
label_250d60:
    // 0x250d60: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250d60u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250d64:
    // 0x250d64: 0x0  nop
    ctx->pc = 0x250d64u;
    // NOP
label_250d68:
    // 0x250d68: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x250d68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250d6c:
    // 0x250d6c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250d6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250d70:
    // 0x250d70: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250d70u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250d74:
    // 0x250d74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250D74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d78:
    // 0x250d78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250D78 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d7c:
    // 0x250d7c: 0x0  nop
    ctx->pc = 0x250d7cu;
    // NOP
label_250d80:
    // 0x250d80: 0x0  nop
    ctx->pc = 0x250d80u;
    // NOP
label_250d84:
    // 0x250d84: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250d84u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250d88:
    // 0x250d88: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250d88u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250d8c:
    // 0x250d8c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x250d8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250d90:
    // 0x250d90: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250D90 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250d94:
    // 0x250d94: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250d94u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250d98:
    // 0x250d98: 0x0  nop
    ctx->pc = 0x250d98u;
    // NOP
label_250d9c:
    // 0x250d9c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250d9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250D9C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250da0:
    // 0x250da0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DA0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250da4:
    // 0x250da4: 0x0  nop
    ctx->pc = 0x250da4u;
    // NOP
label_250da8:
    // 0x250da8: 0x0  nop
    ctx->pc = 0x250da8u;
    // NOP
label_250dac:
    // 0x250dac: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250dacu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250db0:
    // 0x250db0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DB0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250db4:
    // 0x250db4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250db4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250db8:
    // 0x250db8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250db8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DB8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250dbc:
    // 0x250dbc: 0x0  nop
    ctx->pc = 0x250dbcu;
    // NOP
label_250dc0:
    // 0x250dc0: 0x0  nop
    ctx->pc = 0x250dc0u;
    // NOP
label_250dc4:
    // 0x250dc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250dc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250dc8:
    // 0x250dc8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250dc8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250dcc:
    // 0x250dcc: 0x0  nop
    ctx->pc = 0x250dccu;
    // NOP
label_250dd0:
    // 0x250dd0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DD0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250dd4:
    // 0x250dd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250dd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250dd8:
    // 0x250dd8: 0x0  nop
    ctx->pc = 0x250dd8u;
    // NOP
label_250ddc:
    // 0x250ddc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ddcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250DDC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250de0:
    // 0x250de0: 0xf0f0f0f  jal         func_C3C3C3C
label_250de4:
    if (ctx->pc == 0x250DE4u) {
        ctx->pc = 0x250DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DE0u;
        // 0x250de4: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DE8u;
        goto label_250de8;
    }
    ctx->pc = 0x250DE0u;
    SET_GPR_U32(ctx, 31, 0x250DE8u);
    ctx->pc = 0x250DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DE0u;
    // 0x250de4: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x250DE0u, 0x250DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DE8u;
label_250de8:
    // 0x250de8: 0xf0f0f0f  jal         func_C3C3C3C
label_250dec:
    if (ctx->pc == 0x250DECu) {
        ctx->pc = 0x250DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DE8u;
        // 0x250dec: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DF0u;
        goto label_250df0;
    }
    ctx->pc = 0x250DE8u;
    SET_GPR_U32(ctx, 31, 0x250DF0u);
    ctx->pc = 0x250DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DE8u;
    // 0x250dec: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x250DE8u, 0x250DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DF0u;
label_250df0:
    // 0x250df0: 0xf0f0f0f  jal         func_C3C3C3C
label_250df4:
    if (ctx->pc == 0x250DF4u) {
        ctx->pc = 0x250DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DF0u;
        // 0x250df4: 0xf0f0f  .word       0x000F0F0F                   # sync.p # 000F0800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DF8u;
        goto label_250df8;
    }
    ctx->pc = 0x250DF0u;
    SET_GPR_U32(ctx, 31, 0x250DF8u);
    ctx->pc = 0x250DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DF0u;
    // 0x250df4: 0xf0f0f  .word       0x000F0F0F                   # sync.p # 000F0800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    // SYNC instruction - memory barrier
    // In recompiled code, we don't need explicit memory barriers
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x250DF0u, 0x250DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DF8u;
label_250df8:
    // 0x250df8: 0x0  nop
    ctx->pc = 0x250df8u;
    // NOP
label_250dfc:
    // 0x250dfc: 0x0  nop
    ctx->pc = 0x250dfcu;
    // NOP
label_250e00:
    // 0x250e00: 0x0  nop
    ctx->pc = 0x250e00u;
    // NOP
label_250e04:
    // 0x250e04: 0x0  nop
    ctx->pc = 0x250e04u;
    // NOP
label_250e08:
    // 0x250e08: 0x0  nop
    ctx->pc = 0x250e08u;
    // NOP
label_250e0c:
    // 0x250e0c: 0x0  nop
    ctx->pc = 0x250e0cu;
    // NOP
label_250e10:
    // 0x250e10: 0xf00  sll         $at, $zero, 28
    ctx->pc = 0x250e10u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_250e14:
    // 0x250e14: 0x0  nop
    ctx->pc = 0x250e14u;
    // NOP
label_250e18:
    // 0x250e18: 0x0  nop
    ctx->pc = 0x250e18u;
    // NOP
label_250e1c:
    // 0x250e1c: 0xf000000  jal         func_C000000
label_250e20:
    if (ctx->pc == 0x250E20u) {
        ctx->pc = 0x250E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E1Cu;
        // 0x250e20: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E24u;
        goto label_250e24;
    }
    ctx->pc = 0x250E1Cu;
    SET_GPR_U32(ctx, 31, 0x250E24u);
    ctx->pc = 0x250E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E1Cu;
    // 0x250e20: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC000000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC000000u, 0x250E1Cu, 0x250E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E24u;
label_250e24:
    // 0x250e24: 0xf0f0f0f  jal         func_C3C3C3C
label_250e28:
    if (ctx->pc == 0x250E28u) {
        ctx->pc = 0x250E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E24u;
        // 0x250e28: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E2Cu;
        goto label_250e2c;
    }
    ctx->pc = 0x250E24u;
    SET_GPR_U32(ctx, 31, 0x250E2Cu);
    ctx->pc = 0x250E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E24u;
    // 0x250e28: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x250E24u, 0x250E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E2Cu;
label_250e2c:
    // 0x250e2c: 0xc000000  jal         func_000000
label_250e30:
    if (ctx->pc == 0x250E30u) {
        ctx->pc = 0x250E34u;
        goto label_250e34;
    }
    ctx->pc = 0x250E2Cu;
    SET_GPR_U32(ctx, 31, 0x250E34u);
    ctx->pc = 0x0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x0u, 0x250E2Cu, 0x250E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E34u;
label_250e34:
    // 0x250e34: 0x0  nop
    ctx->pc = 0x250e34u;
    // NOP
label_250e38:
    // 0x250e38: 0x0  nop
    ctx->pc = 0x250e38u;
    // NOP
label_250e3c:
    // 0x250e3c: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x250e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_250e40:
    // 0x250e40: 0x0  nop
    ctx->pc = 0x250e40u;
    // NOP
label_250e44:
    // 0x250e44: 0x0  nop
    ctx->pc = 0x250e44u;
    // NOP
label_250e48:
    // 0x250e48: 0xf000000  jal         func_C000000
label_250e4c:
    if (ctx->pc == 0x250E4Cu) {
        ctx->pc = 0x250E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E48u;
        // 0x250e4c: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E50u;
        goto label_250e50;
    }
    ctx->pc = 0x250E48u;
    SET_GPR_U32(ctx, 31, 0x250E50u);
    ctx->pc = 0x250E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E48u;
    // 0x250e4c: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC000000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC000000u, 0x250E48u, 0x250E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E50u;
label_250e50:
    // 0x250e50: 0xf0f0f0f  jal         func_C3C3C3C
label_250e54:
    if (ctx->pc == 0x250E54u) {
        ctx->pc = 0x250E58u;
        goto label_250e58;
    }
    ctx->pc = 0x250E50u;
    SET_GPR_U32(ctx, 31, 0x250E58u);
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x250E50u, 0x250E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E58u;
label_250e58:
    // 0x250e58: 0xf  sync
    ctx->pc = 0x250e58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250e5c:
    // 0x250e5c: 0xf000000  jal         func_C000000
label_250e60:
    if (ctx->pc == 0x250E60u) {
        ctx->pc = 0x250E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E5Cu;
        // 0x250e60: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E64u;
        goto label_250e64;
    }
    ctx->pc = 0x250E5Cu;
    SET_GPR_U32(ctx, 31, 0x250E64u);
    ctx->pc = 0x250E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E5Cu;
    // 0x250e60: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC000000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC000000u, 0x250E5Cu, 0x250E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E64u;
label_250e64:
    // 0x250e64: 0xf0f0f0f  jal         func_C3C3C3C
label_250e68:
    if (ctx->pc == 0x250E68u) {
        ctx->pc = 0x250E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E64u;
        // 0x250e68: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E6Cu;
        goto label_250e6c;
    }
    ctx->pc = 0x250E64u;
    SET_GPR_U32(ctx, 31, 0x250E6Cu);
    ctx->pc = 0x250E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E64u;
    // 0x250e68: 0xf  sync (Delay Slot)
    // SYNC instruction - memory barrier
    // In recompiled code, we don't need explicit memory barriers
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C3Cu, 0x250E64u, 0x250E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E6Cu;
label_250e6c:
    // 0x250e6c: 0x0  nop
    ctx->pc = 0x250e6cu;
    // NOP
label_250e70:
    // 0x250e70: 0x0  nop
    ctx->pc = 0x250e70u;
    // NOP
label_250e74:
    // 0x250e74: 0xf0f0000  jal         func_C3C0000
label_250e78:
    if (ctx->pc == 0x250E78u) {
        ctx->pc = 0x250E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E74u;
        // 0x250e78: 0x70f070f  .word       0x070F070F                   # INVALID     $t8, $t7, 0x70F # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x250E78 raw=0x070F070F");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E7Cu;
        goto label_250e7c;
    }
    ctx->pc = 0x250E74u;
    SET_GPR_U32(ctx, 31, 0x250E7Cu);
    ctx->pc = 0x250E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E74u;
    // 0x250e78: 0x70f070f  .word       0x070F070F                   # INVALID     $t8, $t7, 0x70F # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x250E78 raw=0x070F070F");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C0000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C0000u, 0x250E74u, 0x250E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E7Cu;
label_250e7c:
    // 0x250e7c: 0xf0d0f0f  jal         func_C343C3C
label_250e80:
    if (ctx->pc == 0x250E80u) {
        ctx->pc = 0x250E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E7Cu;
        // 0x250e80: 0xf0f060f  jal         func_C3C183C (Delay Slot)
        // JAL 0xC3C183C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E84u;
        goto label_250e84;
    }
    ctx->pc = 0x250E7Cu;
    SET_GPR_U32(ctx, 31, 0x250E84u);
    ctx->pc = 0x250E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E7Cu;
    // 0x250e80: 0xf0f060f  jal         func_C3C183C (Delay Slot)
    // JAL 0xC3C183C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC343C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC343C3Cu, 0x250E7Cu, 0x250E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E84u;
label_250e84:
    // 0x250e84: 0xf0f050f  jal         func_C3C143C
label_250e88:
    if (ctx->pc == 0x250E88u) {
        ctx->pc = 0x250E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E84u;
        // 0x250e88: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
        // JAL 0xC3C3C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E8Cu;
        goto label_250e8c;
    }
    ctx->pc = 0x250E84u;
    SET_GPR_U32(ctx, 31, 0x250E8Cu);
    ctx->pc = 0x250E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E84u;
    // 0x250e88: 0xf0f0f0f  jal         func_C3C3C3C (Delay Slot)
    // JAL 0xC3C3C3C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C143Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C143Cu, 0x250E84u, 0x250E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E8Cu;
label_250e8c:
    // 0x250e8c: 0xf0f0f05  jal         func_C3C3C14
label_250e90:
    if (ctx->pc == 0x250E90u) {
        ctx->pc = 0x250E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E8Cu;
        // 0x250e90: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x250E90 raw=0x05050505");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E94u;
        goto label_250e94;
    }
    ctx->pc = 0x250E8Cu;
    SET_GPR_U32(ctx, 31, 0x250E94u);
    ctx->pc = 0x250E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E8Cu;
    // 0x250e90: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x250E90 raw=0x05050505");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C14u, 0x250E8Cu, 0x250E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E94u;
label_250e94:
    // 0x250e94: 0xf0f0505  jal         func_C3C1414
label_250e98:
    if (ctx->pc == 0x250E98u) {
        ctx->pc = 0x250E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E94u;
        // 0x250e98: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x250E98 raw=0x05050505");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E9Cu;
        goto label_250e9c;
    }
    ctx->pc = 0x250E94u;
    SET_GPR_U32(ctx, 31, 0x250E9Cu);
    ctx->pc = 0x250E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E94u;
    // 0x250e98: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x250E98 raw=0x05050505");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C1414u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C1414u, 0x250E94u, 0x250E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E9Cu;
label_250e9c:
    // 0x250e9c: 0x505  .word       0x00000505                   # INVALID     $zero, $zero, 0x505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250e9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250E9C raw=0x00000505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ea0:
    // 0x250ea0: 0x0  nop
    ctx->pc = 0x250ea0u;
    // NOP
label_250ea4:
    // 0x250ea4: 0x0  nop
    ctx->pc = 0x250ea4u;
    // NOP
label_250ea8:
    // 0x250ea8: 0x0  nop
    ctx->pc = 0x250ea8u;
    // NOP
label_250eac:
    // 0x250eac: 0x0  nop
    ctx->pc = 0x250eacu;
    // NOP
label_250eb0:
    // 0x250eb0: 0xf0f0f00  jal         func_C3C3C00
label_250eb4:
    if (ctx->pc == 0x250EB4u) {
        ctx->pc = 0x250EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EB0u;
        // 0x250eb4: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EB8u;
        goto label_250eb8;
    }
    ctx->pc = 0x250EB0u;
    SET_GPR_U32(ctx, 31, 0x250EB8u);
    ctx->pc = 0x250EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EB0u;
    // 0x250eb4: 0xf  sync (Delay Slot)
    // SYNC instruction - memory barrier
    // In recompiled code, we don't need explicit memory barriers
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C3C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C3C00u, 0x250EB0u, 0x250EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EB8u;
label_250eb8:
    // 0x250eb8: 0x0  nop
    ctx->pc = 0x250eb8u;
    // NOP
label_250ebc:
    // 0x250ebc: 0x0  nop
    ctx->pc = 0x250ebcu;
    // NOP
label_250ec0:
    // 0x250ec0: 0x0  nop
    ctx->pc = 0x250ec0u;
    // NOP
label_250ec4:
    // 0x250ec4: 0xd0d0000  jal         func_4340000
label_250ec8:
    if (ctx->pc == 0x250EC8u) {
        ctx->pc = 0x250EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EC4u;
        // 0x250ec8: 0xd0d0d0d  jal         func_4343434 (Delay Slot)
        // JAL 0x4343434 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250ECCu;
        goto label_250ecc;
    }
    ctx->pc = 0x250EC4u;
    SET_GPR_U32(ctx, 31, 0x250ECCu);
    ctx->pc = 0x250EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EC4u;
    // 0x250ec8: 0xd0d0d0d  jal         func_4343434 (Delay Slot)
    // JAL 0x4343434 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4340000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4340000u, 0x250EC4u, 0x250ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250ECCu;
label_250ecc:
    // 0x250ecc: 0xf0d0d0f  jal         func_C34343C
label_250ed0:
    if (ctx->pc == 0x250ED0u) {
        ctx->pc = 0x250ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ECCu;
        // 0x250ed0: 0xf0f0d  break       15, 60 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250ED4u;
        goto label_250ed4;
    }
    ctx->pc = 0x250ECCu;
    SET_GPR_U32(ctx, 31, 0x250ED4u);
    ctx->pc = 0x250ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250ECCu;
    // 0x250ed0: 0xf0f0d  break       15, 60 (Delay Slot)
    runtime->handleBreak(rdram, ctx);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC34343Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC34343Cu, 0x250ECCu, 0x250ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250ED4u;
label_250ed4:
    // 0x250ed4: 0x0  nop
    ctx->pc = 0x250ed4u;
    // NOP
label_250ed8:
    // 0x250ed8: 0x0  nop
    ctx->pc = 0x250ed8u;
    // NOP
label_250edc:
    // 0x250edc: 0x0  nop
    ctx->pc = 0x250edcu;
    // NOP
label_250ee0:
    // 0x250ee0: 0x0  nop
    ctx->pc = 0x250ee0u;
    // NOP
label_250ee4:
    // 0x250ee4: 0x90000800  lbu         $zero, 0x800($zero)
    ctx->pc = 0x250ee4u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x800u));
label_250ee8:
    // 0x250ee8: 0x0  nop
    ctx->pc = 0x250ee8u;
    // NOP
label_250eec:
    // 0x250eec: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x250eecu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_250ef0:
    // 0x250ef0: 0x110032  tlt         $zero, $s1, 0
    ctx->pc = 0x250ef0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_250ef4:
    // 0x250ef4: 0x230a05  .word       0x00230A05                   # INVALID     $at, $v1, 0xA05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250EF4 raw=0x00230A05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ef8:
    // 0x250ef8: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x250ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_250efc:
    // 0x250efc: 0x0  nop
    ctx->pc = 0x250efcu;
    // NOP
label_250f00:
    // 0x250f00: 0x0  nop
    ctx->pc = 0x250f00u;
    // NOP
label_250f04:
    // 0x250f04: 0x90000800  lbu         $zero, 0x800($zero)
    ctx->pc = 0x250f04u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x800u));
label_250f08:
    // 0x250f08: 0x0  nop
    ctx->pc = 0x250f08u;
    // NOP
label_250f0c:
    // 0x250f0c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x250f0cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_250f10:
    // 0x250f10: 0x211005  .word       0x00211005                   # INVALID     $at, $at, 0x1005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250F10 raw=0x00211005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f14:
    // 0x250f14: 0x210e05  .word       0x00210E05                   # INVALID     $at, $at, 0xE05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250f14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250F14 raw=0x00210E05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f18:
    // 0x250f18: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x250f18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_250f1c:
    // 0x250f1c: 0x0  nop
    ctx->pc = 0x250f1cu;
    // NOP
label_250f20:
    // 0x250f20: 0x22  neg         $zero, $zero
    ctx->pc = 0x250f20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_250f24:
    // 0x250f24: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250f24u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x250F24 raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f28:
    // 0x250f28: 0x3d0efa35  .word       0x3D0EFA35                   # lui         $t6, 0xFA35 # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x250f28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64053 << 16));
label_250f2c:
    // 0x250f2c: 0x0  nop
    ctx->pc = 0x250f2cu;
    // NOP
label_250f30:
    // 0x250f30: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250f30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x250F30 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f34:
    // 0x250f34: 0x0  nop
    ctx->pc = 0x250f34u;
    // NOP
label_250f38:
    // 0x250f38: 0xc148cccd  ll          $t0, -0x3333($t2)
    ctx->pc = 0x250f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294954189); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_250f3c:
    // 0x250f3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x250f3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_250f40:
    // 0x250f40: 0x12  mflo        $zero
    ctx->pc = 0x250f40u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250f44:
    // 0x250f44: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250f44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x250F44 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f48:
    // 0x250f48: 0x3c64c389  .word       0x3C64C389                   # lui         $a0, 0xC389 # 00600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50057 << 16));
label_250f4c:
    // 0x250f4c: 0x0  nop
    ctx->pc = 0x250f4cu;
    // NOP
label_250f50:
    // 0x250f50: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250f50u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x250F50 raw=0x43160000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f54:
    // 0x250f54: 0x0  nop
    ctx->pc = 0x250f54u;
    // NOP
label_250f58:
    // 0x250f58: 0xc2b40000  ll          $s4, 0x0($s5)
    ctx->pc = 0x250f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_250f5c:
    // 0x250f5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x250f5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_250f60:
    // 0x250f60: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250f60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250f64:
    // 0x250f64: 0xef  .word       0x000000EF                   # dsubu       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250f64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_250f68:
    // 0x250f68: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x250f68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250f6c:
    // 0x250f6c: 0xf1  tgeu        $zero, $zero, 3
    ctx->pc = 0x250f6cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250f70:
    // 0x250f70: 0xf2  tlt         $zero, $zero, 3
    ctx->pc = 0x250f70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250f74:
    // 0x250f74: 0xf3  tltu        $zero, $zero, 3
    ctx->pc = 0x250f74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250f78:
    // 0x250f78: 0x0  nop
    ctx->pc = 0x250f78u;
    // NOP
label_250f7c:
    // 0x250f7c: 0x0  nop
    ctx->pc = 0x250f7cu;
    // NOP
label_250f80:
    // 0x250f80: 0x80003  sra         $zero, $t0, 0
    ctx->pc = 0x250f80u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), 0));
label_250f84:
    // 0x250f84: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250f84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x250F84 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f88:
    // 0x250f88: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x250f88u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_250f8c:
    // 0x250f8c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250f8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250F8C raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f90:
    // 0x250f90: 0x80103  sra         $zero, $t0, 4
    ctx->pc = 0x250f90u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), 4));
label_250f94:
    // 0x250f94: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250f94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x250F94 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250f98:
    // 0x250f98: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x250f98u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_250f9c:
    // 0x250f9c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250f9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250F9C raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fa0:
    // 0x250fa0: 0x60002  srl         $zero, $a2, 0
    ctx->pc = 0x250fa0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_250fa4:
    // 0x250fa4: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x250FA4 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fa8:
    // 0x250fa8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fa8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x250FA8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fac:
    // 0x250fac: 0x5000a  movz        $zero, $zero, $a1
    ctx->pc = 0x250facu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250fb0:
    // 0x250fb0: 0x60102  srl         $zero, $a2, 4
    ctx->pc = 0x250fb0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_250fb4:
    // 0x250fb4: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x250FB4 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fb8:
    // 0x250fb8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x250FB8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fbc:
    // 0x250fbc: 0x5000a  movz        $zero, $zero, $a1
    ctx->pc = 0x250fbcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250fc0:
    // 0x250fc0: 0x50001  .word       0x00050001                   # INVALID     $zero, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250FC0 raw=0x00050001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fc4:
    // 0x250fc4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x250FC4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fc8:
    // 0x250fc8: 0x41300000  .word       0x41300000                   # INVALID     $t1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x250FC8 raw=0x41300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fcc:
    // 0x250fcc: 0xa000f  .word       0x000A000F                   # sync # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250fccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250fd0:
    // 0x250fd0: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x250fd0u;
    
label_250fd4:
    // 0x250fd4: 0x41980000  .word       0x41980000                   # INVALID     $t4, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x250FD4 raw=0x41980000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fd8:
    // 0x250fd8: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x250FD8 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fdc:
    // 0x250fdc: 0xf0014  dsllv       $zero, $t7, $zero
    ctx->pc = 0x250fdcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) << (GPR_U32(ctx, 0) & 0x3F));
label_250fe0:
    // 0x250fe0: 0x80102  srl         $zero, $t0, 4
    ctx->pc = 0x250fe0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
label_250fe4:
    // 0x250fe4: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fe4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x250FE4 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fe8:
    // 0x250fe8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250fe8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x250FE8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250fec:
    // 0x250fec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250fecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250FEC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ff0:
    // 0x250ff0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250FF0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ff4:
    // 0x250ff4: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x250ff4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x250FF4 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ff8:
    // 0x250ff8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x250ff8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x250FF8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250ffc:
    // 0x250ffc: 0x1000019  multu       $t0, $zero
    ctx->pc = 0x250ffcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_251000:
    // 0x251000: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x251000u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_251004:
    // 0x251004: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x251004u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x251004 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251008:
    // 0x251008: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x251008u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x251008 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25100c:
    // 0x25100c: 0x10f001e  ddiv        $zero, $t0, $t7
    ctx->pc = 0x25100cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25100C raw=0x010F001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251010:
    // 0x251010: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x251010u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x251010 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251014:
    // 0x251014: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x251014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x251014 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251018:
    // 0x251018: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x251018u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x251018 raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25101c:
    // 0x25101c: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x25101cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x25101C raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251020:
    // 0x251020: 0x0  nop
    ctx->pc = 0x251020u;
    // NOP
label_251024:
    // 0x251024: 0x0  nop
    ctx->pc = 0x251024u;
    // NOP
label_251028:
    // 0x251028: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x251028u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x251028 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25102c:
    // 0x25102c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25102cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_251030:
    // 0x251030: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x251030u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_251034:
    // 0x251034: 0x8  jr          $zero
label_251038:
    if (ctx->pc == 0x251038u) {
        ctx->pc = 0x251038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251034u;
        // 0x251038: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25103Cu;
        goto label_25103c;
    }
    ctx->pc = 0x251034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251034u;
        // 0x251038: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251034u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25103Cu;
label_25103c:
    // 0x25103c: 0x19  multu       $zero, $zero
    ctx->pc = 0x25103cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_251040:
    // 0x251040: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x251040 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251044:
    // 0x251044: 0xc  syscall     0
    ctx->pc = 0x251044u;
    ctx->pc = 0x251048u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_251048:
    // 0x251048: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251048u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x251048 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25104c:
    // 0x25104c: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x25104cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25104C raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x251050u;
    return;
}
