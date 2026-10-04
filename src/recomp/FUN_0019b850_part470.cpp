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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x280860u: goto label_280860;
        case 0x280864u: goto label_280864;
        case 0x280868u: goto label_280868;
        case 0x28086cu: goto label_28086c;
        case 0x280870u: goto label_280870;
        case 0x280874u: goto label_280874;
        case 0x280878u: goto label_280878;
        case 0x28087cu: goto label_28087c;
        case 0x280880u: goto label_280880;
        case 0x280884u: goto label_280884;
        case 0x280888u: goto label_280888;
        case 0x28088cu: goto label_28088c;
        case 0x280890u: goto label_280890;
        case 0x280894u: goto label_280894;
        case 0x280898u: goto label_280898;
        case 0x28089cu: goto label_28089c;
        case 0x2808a0u: goto label_2808a0;
        case 0x2808a4u: goto label_2808a4;
        case 0x2808a8u: goto label_2808a8;
        case 0x2808acu: goto label_2808ac;
        case 0x2808b0u: goto label_2808b0;
        case 0x2808b4u: goto label_2808b4;
        case 0x2808b8u: goto label_2808b8;
        case 0x2808bcu: goto label_2808bc;
        case 0x2808c0u: goto label_2808c0;
        case 0x2808c4u: goto label_2808c4;
        case 0x2808c8u: goto label_2808c8;
        case 0x2808ccu: goto label_2808cc;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808d4u: goto label_2808d4;
        case 0x2808d8u: goto label_2808d8;
        case 0x2808dcu: goto label_2808dc;
        case 0x2808e0u: goto label_2808e0;
        case 0x2808e4u: goto label_2808e4;
        case 0x2808e8u: goto label_2808e8;
        case 0x2808ecu: goto label_2808ec;
        case 0x2808f0u: goto label_2808f0;
        case 0x2808f4u: goto label_2808f4;
        case 0x2808f8u: goto label_2808f8;
        case 0x2808fcu: goto label_2808fc;
        case 0x280900u: goto label_280900;
        case 0x280904u: goto label_280904;
        case 0x280908u: goto label_280908;
        case 0x28090cu: goto label_28090c;
        case 0x280910u: goto label_280910;
        case 0x280914u: goto label_280914;
        case 0x280918u: goto label_280918;
        case 0x28091cu: goto label_28091c;
        case 0x280920u: goto label_280920;
        case 0x280924u: goto label_280924;
        case 0x280928u: goto label_280928;
        case 0x28092cu: goto label_28092c;
        case 0x280930u: goto label_280930;
        case 0x280934u: goto label_280934;
        case 0x280938u: goto label_280938;
        case 0x28093cu: goto label_28093c;
        case 0x280940u: goto label_280940;
        case 0x280944u: goto label_280944;
        case 0x280948u: goto label_280948;
        case 0x28094cu: goto label_28094c;
        case 0x280950u: goto label_280950;
        case 0x280954u: goto label_280954;
        case 0x280958u: goto label_280958;
        case 0x28095cu: goto label_28095c;
        case 0x280960u: goto label_280960;
        case 0x280964u: goto label_280964;
        case 0x280968u: goto label_280968;
        case 0x28096cu: goto label_28096c;
        case 0x280970u: goto label_280970;
        case 0x280974u: goto label_280974;
        case 0x280978u: goto label_280978;
        case 0x28097cu: goto label_28097c;
        case 0x280980u: goto label_280980;
        case 0x280984u: goto label_280984;
        case 0x280988u: goto label_280988;
        case 0x28098cu: goto label_28098c;
        case 0x280990u: goto label_280990;
        case 0x280994u: goto label_280994;
        case 0x280998u: goto label_280998;
        case 0x28099cu: goto label_28099c;
        case 0x2809a0u: goto label_2809a0;
        case 0x2809a4u: goto label_2809a4;
        case 0x2809a8u: goto label_2809a8;
        case 0x2809acu: goto label_2809ac;
        case 0x2809b0u: goto label_2809b0;
        case 0x2809b4u: goto label_2809b4;
        case 0x2809b8u: goto label_2809b8;
        case 0x2809bcu: goto label_2809bc;
        case 0x2809c0u: goto label_2809c0;
        case 0x2809c4u: goto label_2809c4;
        case 0x2809c8u: goto label_2809c8;
        case 0x2809ccu: goto label_2809cc;
        case 0x2809d0u: goto label_2809d0;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809d8u: goto label_2809d8;
        case 0x2809dcu: goto label_2809dc;
        case 0x2809e0u: goto label_2809e0;
        case 0x2809e4u: goto label_2809e4;
        case 0x2809e8u: goto label_2809e8;
        case 0x2809ecu: goto label_2809ec;
        case 0x2809f0u: goto label_2809f0;
        case 0x2809f4u: goto label_2809f4;
        case 0x2809f8u: goto label_2809f8;
        case 0x2809fcu: goto label_2809fc;
        case 0x280a00u: goto label_280a00;
        case 0x280a04u: goto label_280a04;
        case 0x280a08u: goto label_280a08;
        case 0x280a0cu: goto label_280a0c;
        case 0x280a10u: goto label_280a10;
        case 0x280a14u: goto label_280a14;
        case 0x280a18u: goto label_280a18;
        case 0x280a1cu: goto label_280a1c;
        case 0x280a20u: goto label_280a20;
        case 0x280a24u: goto label_280a24;
        case 0x280a28u: goto label_280a28;
        case 0x280a2cu: goto label_280a2c;
        case 0x280a30u: goto label_280a30;
        case 0x280a34u: goto label_280a34;
        case 0x280a38u: goto label_280a38;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a40u: goto label_280a40;
        case 0x280a44u: goto label_280a44;
        case 0x280a48u: goto label_280a48;
        case 0x280a4cu: goto label_280a4c;
        case 0x280a50u: goto label_280a50;
        case 0x280a54u: goto label_280a54;
        case 0x280a58u: goto label_280a58;
        case 0x280a5cu: goto label_280a5c;
        case 0x280a60u: goto label_280a60;
        case 0x280a64u: goto label_280a64;
        case 0x280a68u: goto label_280a68;
        case 0x280a6cu: goto label_280a6c;
        case 0x280a70u: goto label_280a70;
        case 0x280a74u: goto label_280a74;
        case 0x280a78u: goto label_280a78;
        case 0x280a7cu: goto label_280a7c;
        case 0x280a80u: goto label_280a80;
        case 0x280a84u: goto label_280a84;
        case 0x280a88u: goto label_280a88;
        case 0x280a8cu: goto label_280a8c;
        case 0x280a90u: goto label_280a90;
        case 0x280a94u: goto label_280a94;
        case 0x280a98u: goto label_280a98;
        case 0x280a9cu: goto label_280a9c;
        case 0x280aa0u: goto label_280aa0;
        case 0x280aa4u: goto label_280aa4;
        case 0x280aa8u: goto label_280aa8;
        case 0x280aacu: goto label_280aac;
        case 0x280ab0u: goto label_280ab0;
        case 0x280ab4u: goto label_280ab4;
        case 0x280ab8u: goto label_280ab8;
        case 0x280abcu: goto label_280abc;
        case 0x280ac0u: goto label_280ac0;
        case 0x280ac4u: goto label_280ac4;
        case 0x280ac8u: goto label_280ac8;
        case 0x280accu: goto label_280acc;
        case 0x280ad0u: goto label_280ad0;
        case 0x280ad4u: goto label_280ad4;
        case 0x280ad8u: goto label_280ad8;
        case 0x280adcu: goto label_280adc;
        case 0x280ae0u: goto label_280ae0;
        case 0x280ae4u: goto label_280ae4;
        case 0x280ae8u: goto label_280ae8;
        case 0x280aecu: goto label_280aec;
        case 0x280af0u: goto label_280af0;
        case 0x280af4u: goto label_280af4;
        case 0x280af8u: goto label_280af8;
        case 0x280afcu: goto label_280afc;
        case 0x280b00u: goto label_280b00;
        case 0x280b04u: goto label_280b04;
        case 0x280b08u: goto label_280b08;
        case 0x280b0cu: goto label_280b0c;
        case 0x280b10u: goto label_280b10;
        case 0x280b14u: goto label_280b14;
        case 0x280b18u: goto label_280b18;
        case 0x280b1cu: goto label_280b1c;
        case 0x280b20u: goto label_280b20;
        case 0x280b24u: goto label_280b24;
        case 0x280b28u: goto label_280b28;
        case 0x280b2cu: goto label_280b2c;
        case 0x280b30u: goto label_280b30;
        case 0x280b34u: goto label_280b34;
        case 0x280b38u: goto label_280b38;
        case 0x280b3cu: goto label_280b3c;
        case 0x280b40u: goto label_280b40;
        case 0x280b44u: goto label_280b44;
        case 0x280b48u: goto label_280b48;
        case 0x280b4cu: goto label_280b4c;
        case 0x280b50u: goto label_280b50;
        case 0x280b54u: goto label_280b54;
        case 0x280b58u: goto label_280b58;
        case 0x280b5cu: goto label_280b5c;
        case 0x280b60u: goto label_280b60;
        case 0x280b64u: goto label_280b64;
        case 0x280b68u: goto label_280b68;
        case 0x280b6cu: goto label_280b6c;
        case 0x280b70u: goto label_280b70;
        case 0x280b74u: goto label_280b74;
        case 0x280b78u: goto label_280b78;
        case 0x280b7cu: goto label_280b7c;
        case 0x280b80u: goto label_280b80;
        case 0x280b84u: goto label_280b84;
        case 0x280b88u: goto label_280b88;
        case 0x280b8cu: goto label_280b8c;
        case 0x280b90u: goto label_280b90;
        case 0x280b94u: goto label_280b94;
        case 0x280b98u: goto label_280b98;
        case 0x280b9cu: goto label_280b9c;
        case 0x280ba0u: goto label_280ba0;
        case 0x280ba4u: goto label_280ba4;
        case 0x280ba8u: goto label_280ba8;
        case 0x280bacu: goto label_280bac;
        case 0x280bb0u: goto label_280bb0;
        case 0x280bb4u: goto label_280bb4;
        case 0x280bb8u: goto label_280bb8;
        case 0x280bbcu: goto label_280bbc;
        case 0x280bc0u: goto label_280bc0;
        case 0x280bc4u: goto label_280bc4;
        case 0x280bc8u: goto label_280bc8;
        case 0x280bccu: goto label_280bcc;
        case 0x280bd0u: goto label_280bd0;
        case 0x280bd4u: goto label_280bd4;
        case 0x280bd8u: goto label_280bd8;
        case 0x280bdcu: goto label_280bdc;
        case 0x280be0u: goto label_280be0;
        case 0x280be4u: goto label_280be4;
        case 0x280be8u: goto label_280be8;
        case 0x280becu: goto label_280bec;
        case 0x280bf0u: goto label_280bf0;
        case 0x280bf4u: goto label_280bf4;
        case 0x280bf8u: goto label_280bf8;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c00u: goto label_280c00;
        case 0x280c04u: goto label_280c04;
        case 0x280c08u: goto label_280c08;
        case 0x280c0cu: goto label_280c0c;
        case 0x280c10u: goto label_280c10;
        case 0x280c14u: goto label_280c14;
        case 0x280c18u: goto label_280c18;
        case 0x280c1cu: goto label_280c1c;
        case 0x280c20u: goto label_280c20;
        case 0x280c24u: goto label_280c24;
        case 0x280c28u: goto label_280c28;
        case 0x280c2cu: goto label_280c2c;
        case 0x280c30u: goto label_280c30;
        case 0x280c34u: goto label_280c34;
        case 0x280c38u: goto label_280c38;
        case 0x280c3cu: goto label_280c3c;
        case 0x280c40u: goto label_280c40;
        case 0x280c44u: goto label_280c44;
        case 0x280c48u: goto label_280c48;
        case 0x280c4cu: goto label_280c4c;
        case 0x280c50u: goto label_280c50;
        case 0x280c54u: goto label_280c54;
        case 0x280c58u: goto label_280c58;
        case 0x280c5cu: goto label_280c5c;
        case 0x280c60u: goto label_280c60;
        case 0x280c64u: goto label_280c64;
        case 0x280c68u: goto label_280c68;
        case 0x280c6cu: goto label_280c6c;
        case 0x280c70u: goto label_280c70;
        case 0x280c74u: goto label_280c74;
        case 0x280c78u: goto label_280c78;
        case 0x280c7cu: goto label_280c7c;
        case 0x280c80u: goto label_280c80;
        case 0x280c84u: goto label_280c84;
        case 0x280c88u: goto label_280c88;
        case 0x280c8cu: goto label_280c8c;
        case 0x280c90u: goto label_280c90;
        case 0x280c94u: goto label_280c94;
        case 0x280c98u: goto label_280c98;
        case 0x280c9cu: goto label_280c9c;
        case 0x280ca0u: goto label_280ca0;
        case 0x280ca4u: goto label_280ca4;
        case 0x280ca8u: goto label_280ca8;
        case 0x280cacu: goto label_280cac;
        case 0x280cb0u: goto label_280cb0;
        case 0x280cb4u: goto label_280cb4;
        case 0x280cb8u: goto label_280cb8;
        case 0x280cbcu: goto label_280cbc;
        case 0x280cc0u: goto label_280cc0;
        case 0x280cc4u: goto label_280cc4;
        case 0x280cc8u: goto label_280cc8;
        case 0x280cccu: goto label_280ccc;
        case 0x280cd0u: goto label_280cd0;
        case 0x280cd4u: goto label_280cd4;
        case 0x280cd8u: goto label_280cd8;
        case 0x280cdcu: goto label_280cdc;
        case 0x280ce0u: goto label_280ce0;
        case 0x280ce4u: goto label_280ce4;
        case 0x280ce8u: goto label_280ce8;
        case 0x280cecu: goto label_280cec;
        case 0x280cf0u: goto label_280cf0;
        case 0x280cf4u: goto label_280cf4;
        case 0x280cf8u: goto label_280cf8;
        case 0x280cfcu: goto label_280cfc;
        case 0x280d00u: goto label_280d00;
        case 0x280d04u: goto label_280d04;
        case 0x280d08u: goto label_280d08;
        case 0x280d0cu: goto label_280d0c;
        case 0x280d10u: goto label_280d10;
        case 0x280d14u: goto label_280d14;
        case 0x280d18u: goto label_280d18;
        case 0x280d1cu: goto label_280d1c;
        case 0x280d20u: goto label_280d20;
        case 0x280d24u: goto label_280d24;
        case 0x280d28u: goto label_280d28;
        case 0x280d2cu: goto label_280d2c;
        case 0x280d30u: goto label_280d30;
        case 0x280d34u: goto label_280d34;
        case 0x280d38u: goto label_280d38;
        case 0x280d3cu: goto label_280d3c;
        case 0x280d40u: goto label_280d40;
        case 0x280d44u: goto label_280d44;
        case 0x280d48u: goto label_280d48;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d50u: goto label_280d50;
        case 0x280d54u: goto label_280d54;
        case 0x280d58u: goto label_280d58;
        case 0x280d5cu: goto label_280d5c;
        case 0x280d60u: goto label_280d60;
        case 0x280d64u: goto label_280d64;
        case 0x280d68u: goto label_280d68;
        case 0x280d6cu: goto label_280d6c;
        case 0x280d70u: goto label_280d70;
        case 0x280d74u: goto label_280d74;
        case 0x280d78u: goto label_280d78;
        case 0x280d7cu: goto label_280d7c;
        case 0x280d80u: goto label_280d80;
        case 0x280d84u: goto label_280d84;
        case 0x280d88u: goto label_280d88;
        case 0x280d8cu: goto label_280d8c;
        case 0x280d90u: goto label_280d90;
        case 0x280d94u: goto label_280d94;
        case 0x280d98u: goto label_280d98;
        case 0x280d9cu: goto label_280d9c;
        case 0x280da0u: goto label_280da0;
        case 0x280da4u: goto label_280da4;
        case 0x280da8u: goto label_280da8;
        case 0x280dacu: goto label_280dac;
        case 0x280db0u: goto label_280db0;
        case 0x280db4u: goto label_280db4;
        case 0x280db8u: goto label_280db8;
        case 0x280dbcu: goto label_280dbc;
        case 0x280dc0u: goto label_280dc0;
        case 0x280dc4u: goto label_280dc4;
        case 0x280dc8u: goto label_280dc8;
        case 0x280dccu: goto label_280dcc;
        case 0x280dd0u: goto label_280dd0;
        case 0x280dd4u: goto label_280dd4;
        case 0x280dd8u: goto label_280dd8;
        case 0x280ddcu: goto label_280ddc;
        case 0x280de0u: goto label_280de0;
        case 0x280de4u: goto label_280de4;
        case 0x280de8u: goto label_280de8;
        case 0x280decu: goto label_280dec;
        case 0x280df0u: goto label_280df0;
        case 0x280df4u: goto label_280df4;
        case 0x280df8u: goto label_280df8;
        case 0x280dfcu: goto label_280dfc;
        case 0x280e00u: goto label_280e00;
        case 0x280e04u: goto label_280e04;
        case 0x280e08u: goto label_280e08;
        case 0x280e0cu: goto label_280e0c;
        case 0x280e10u: goto label_280e10;
        case 0x280e14u: goto label_280e14;
        case 0x280e18u: goto label_280e18;
        case 0x280e1cu: goto label_280e1c;
        case 0x280e20u: goto label_280e20;
        case 0x280e24u: goto label_280e24;
        case 0x280e28u: goto label_280e28;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e30u: goto label_280e30;
        case 0x280e34u: goto label_280e34;
        case 0x280e38u: goto label_280e38;
        case 0x280e3cu: goto label_280e3c;
        case 0x280e40u: goto label_280e40;
        case 0x280e44u: goto label_280e44;
        case 0x280e48u: goto label_280e48;
        case 0x280e4cu: goto label_280e4c;
        case 0x280e50u: goto label_280e50;
        case 0x280e54u: goto label_280e54;
        case 0x280e58u: goto label_280e58;
        case 0x280e5cu: goto label_280e5c;
        case 0x280e60u: goto label_280e60;
        case 0x280e64u: goto label_280e64;
        case 0x280e68u: goto label_280e68;
        case 0x280e6cu: goto label_280e6c;
        case 0x280e70u: goto label_280e70;
        case 0x280e74u: goto label_280e74;
        case 0x280e78u: goto label_280e78;
        case 0x280e7cu: goto label_280e7c;
        case 0x280e80u: goto label_280e80;
        case 0x280e84u: goto label_280e84;
        case 0x280e88u: goto label_280e88;
        case 0x280e8cu: goto label_280e8c;
        case 0x280e90u: goto label_280e90;
        case 0x280e94u: goto label_280e94;
        case 0x280e98u: goto label_280e98;
        case 0x280e9cu: goto label_280e9c;
        case 0x280ea0u: goto label_280ea0;
        case 0x280ea4u: goto label_280ea4;
        case 0x280ea8u: goto label_280ea8;
        case 0x280eacu: goto label_280eac;
        case 0x280eb0u: goto label_280eb0;
        case 0x280eb4u: goto label_280eb4;
        case 0x280eb8u: goto label_280eb8;
        case 0x280ebcu: goto label_280ebc;
        case 0x280ec0u: goto label_280ec0;
        case 0x280ec4u: goto label_280ec4;
        case 0x280ec8u: goto label_280ec8;
        case 0x280eccu: goto label_280ecc;
        case 0x280ed0u: goto label_280ed0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ed8u: goto label_280ed8;
        case 0x280edcu: goto label_280edc;
        case 0x280ee0u: goto label_280ee0;
        case 0x280ee4u: goto label_280ee4;
        case 0x280ee8u: goto label_280ee8;
        case 0x280eecu: goto label_280eec;
        case 0x280ef0u: goto label_280ef0;
        case 0x280ef4u: goto label_280ef4;
        case 0x280ef8u: goto label_280ef8;
        case 0x280efcu: goto label_280efc;
        case 0x280f00u: goto label_280f00;
        case 0x280f04u: goto label_280f04;
        case 0x280f08u: goto label_280f08;
        case 0x280f0cu: goto label_280f0c;
        case 0x280f10u: goto label_280f10;
        case 0x280f14u: goto label_280f14;
        case 0x280f18u: goto label_280f18;
        case 0x280f1cu: goto label_280f1c;
        case 0x280f20u: goto label_280f20;
        case 0x280f24u: goto label_280f24;
        case 0x280f28u: goto label_280f28;
        case 0x280f2cu: goto label_280f2c;
        case 0x280f30u: goto label_280f30;
        case 0x280f34u: goto label_280f34;
        case 0x280f38u: goto label_280f38;
        case 0x280f3cu: goto label_280f3c;
        case 0x280f40u: goto label_280f40;
        case 0x280f44u: goto label_280f44;
        case 0x280f48u: goto label_280f48;
        case 0x280f4cu: goto label_280f4c;
        case 0x280f50u: goto label_280f50;
        case 0x280f54u: goto label_280f54;
        case 0x280f58u: goto label_280f58;
        case 0x280f5cu: goto label_280f5c;
        case 0x280f60u: goto label_280f60;
        case 0x280f64u: goto label_280f64;
        case 0x280f68u: goto label_280f68;
        case 0x280f6cu: goto label_280f6c;
        case 0x280f70u: goto label_280f70;
        case 0x280f74u: goto label_280f74;
        case 0x280f78u: goto label_280f78;
        case 0x280f7cu: goto label_280f7c;
        case 0x280f80u: goto label_280f80;
        case 0x280f84u: goto label_280f84;
        case 0x280f88u: goto label_280f88;
        case 0x280f8cu: goto label_280f8c;
        case 0x280f90u: goto label_280f90;
        case 0x280f94u: goto label_280f94;
        case 0x280f98u: goto label_280f98;
        case 0x280f9cu: goto label_280f9c;
        case 0x280fa0u: goto label_280fa0;
        case 0x280fa4u: goto label_280fa4;
        case 0x280fa8u: goto label_280fa8;
        case 0x280facu: goto label_280fac;
        case 0x280fb0u: goto label_280fb0;
        case 0x280fb4u: goto label_280fb4;
        case 0x280fb8u: goto label_280fb8;
        case 0x280fbcu: goto label_280fbc;
        case 0x280fc0u: goto label_280fc0;
        case 0x280fc4u: goto label_280fc4;
        case 0x280fc8u: goto label_280fc8;
        case 0x280fccu: goto label_280fcc;
        case 0x280fd0u: goto label_280fd0;
        case 0x280fd4u: goto label_280fd4;
        case 0x280fd8u: goto label_280fd8;
        case 0x280fdcu: goto label_280fdc;
        case 0x280fe0u: goto label_280fe0;
        case 0x280fe4u: goto label_280fe4;
        case 0x280fe8u: goto label_280fe8;
        case 0x280fecu: goto label_280fec;
        case 0x280ff0u: goto label_280ff0;
        case 0x280ff4u: goto label_280ff4;
        case 0x280ff8u: goto label_280ff8;
        case 0x280ffcu: goto label_280ffc;
        case 0x281000u: goto label_281000;
        case 0x281004u: goto label_281004;
        case 0x281008u: goto label_281008;
        case 0x28100cu: goto label_28100c;
        case 0x281010u: goto label_281010;
        case 0x281014u: goto label_281014;
        case 0x281018u: goto label_281018;
        case 0x28101cu: goto label_28101c;
        case 0x281020u: goto label_281020;
        case 0x281024u: goto label_281024;
        case 0x281028u: goto label_281028;
        case 0x28102cu: goto label_28102c;
        default: return;
    }

label_280860:
    // 0x280860: 0x1bace  .word       0x0001BACE                   # INVALID     $zero, $at, -0x4532 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280860 raw=0x0001BACE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280864:
    // 0x280864: 0x37690  .word       0x00037690                   # mfhi        $t6 # 00030680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280864u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_280868:
    // 0x280868: 0x0  nop
    ctx->pc = 0x280868u;
    // NOP
label_28086c:
    // 0x28086c: 0x0  nop
    ctx->pc = 0x28086cu;
    // NOP
label_280870:
    // 0x280870: 0x1bb3d  .word       0x0001BB3D                   # INVALID     $zero, $at, -0x44C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280870 raw=0x0001BB3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280874:
    // 0x280874: 0x36510  .word       0x00036510                   # mfhi        $t4 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280874u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_280878:
    // 0x280878: 0x0  nop
    ctx->pc = 0x280878u;
    // NOP
label_28087c:
    // 0x28087c: 0x0  nop
    ctx->pc = 0x28087cu;
    // NOP
label_280880:
    // 0x280880: 0x1bbaa  .word       0x0001BBAA                   # slt         $s7, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280880u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280884:
    // 0x280884: 0x3c740  sll         $t8, $v1, 29
    ctx->pc = 0x280884u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
label_280888:
    // 0x280888: 0x0  nop
    ctx->pc = 0x280888u;
    // NOP
label_28088c:
    // 0x28088c: 0x0  nop
    ctx->pc = 0x28088cu;
    // NOP
label_280890:
    // 0x280890: 0x1bc23  .word       0x0001BC23                   # negu        $s7, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280894:
    // 0x280894: 0x30700  sll         $zero, $v1, 28
    ctx->pc = 0x280894u;
    
label_280898:
    // 0x280898: 0x0  nop
    ctx->pc = 0x280898u;
    // NOP
label_28089c:
    // 0x28089c: 0x0  nop
    ctx->pc = 0x28089cu;
    // NOP
label_2808a0:
    // 0x2808a0: 0x1bc84  .word       0x0001BC84                   # sllv        $s7, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2808a4:
    // 0x2808a4: 0x37ce0  .word       0x00037CE0                   # add         $t7, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2808a8:
    // 0x2808a8: 0x0  nop
    ctx->pc = 0x2808a8u;
    // NOP
label_2808ac:
    // 0x2808ac: 0x0  nop
    ctx->pc = 0x2808acu;
    // NOP
label_2808b0:
    // 0x2808b0: 0x1bcf4  teq         $zero, $at, 755
    ctx->pc = 0x2808b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2808b4:
    // 0x2808b4: 0x362f0  tge         $zero, $v1, 395
    ctx->pc = 0x2808b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808b8:
    // 0x2808b8: 0x0  nop
    ctx->pc = 0x2808b8u;
    // NOP
label_2808bc:
    // 0x2808bc: 0x0  nop
    ctx->pc = 0x2808bcu;
    // NOP
label_2808c0:
    // 0x2808c0: 0x1bd61  .word       0x0001BD61                   # addu        $s7, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2808c4:
    // 0x2808c4: 0x37da0  .word       0x00037DA0                   # add         $t7, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2808c8:
    // 0x2808c8: 0x0  nop
    ctx->pc = 0x2808c8u;
    // NOP
label_2808cc:
    // 0x2808cc: 0x0  nop
    ctx->pc = 0x2808ccu;
    // NOP
label_2808d0:
    // 0x2808d0: 0x1bdd1  .word       0x0001BDD1                   # mthi        $zero # 0001BDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2808d4:
    // 0x2808d4: 0x36b30  tge         $zero, $v1, 428
    ctx->pc = 0x2808d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808d8:
    // 0x2808d8: 0x0  nop
    ctx->pc = 0x2808d8u;
    // NOP
label_2808dc:
    // 0x2808dc: 0x0  nop
    ctx->pc = 0x2808dcu;
    // NOP
label_2808e0:
    // 0x2808e0: 0x1be3f  dsra32      $s7, $at, 24
    ctx->pc = 0x2808e0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (32 + 24));
label_2808e4:
    // 0x2808e4: 0x34570  tge         $zero, $v1, 277
    ctx->pc = 0x2808e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808e8:
    // 0x2808e8: 0x0  nop
    ctx->pc = 0x2808e8u;
    // NOP
label_2808ec:
    // 0x2808ec: 0x0  nop
    ctx->pc = 0x2808ecu;
    // NOP
label_2808f0:
    // 0x2808f0: 0x1bea8  .word       0x0001BEA8                   # mfsa        $s7 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2808f0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_2808f4:
    // 0x2808f4: 0x31dd0  .word       0x00031DD0                   # mfhi        $v1 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2808f8:
    // 0x2808f8: 0x0  nop
    ctx->pc = 0x2808f8u;
    // NOP
label_2808fc:
    // 0x2808fc: 0x0  nop
    ctx->pc = 0x2808fcu;
    // NOP
label_280900:
    // 0x280900: 0x1bf0c  .word       0x0001BF0C                   # syscall     764 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280900u;
    ctx->pc = 0x280904u;
runtime->handleSyscall(rdram, ctx, 0x6FCu);
label_280904:
    // 0x280904: 0x36980  sll         $t5, $v1, 6
    ctx->pc = 0x280904u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_280908:
    // 0x280908: 0x0  nop
    ctx->pc = 0x280908u;
    // NOP
label_28090c:
    // 0x28090c: 0x0  nop
    ctx->pc = 0x28090cu;
    // NOP
label_280910:
    // 0x280910: 0x1bf7a  dsrl        $s7, $at, 29
    ctx->pc = 0x280910u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) >> 29);
label_280914:
    // 0x280914: 0x34ca0  .word       0x00034CA0                   # add         $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280918:
    // 0x280918: 0x0  nop
    ctx->pc = 0x280918u;
    // NOP
label_28091c:
    // 0x28091c: 0x0  nop
    ctx->pc = 0x28091cu;
    // NOP
label_280920:
    // 0x280920: 0x1bfe4  .word       0x0001BFE4                   # and         $s7, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280920u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280924:
    // 0x280924: 0x356d0  .word       0x000356D0                   # mfhi        $t2 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280924u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280928:
    // 0x280928: 0x0  nop
    ctx->pc = 0x280928u;
    // NOP
label_28092c:
    // 0x28092c: 0x0  nop
    ctx->pc = 0x28092cu;
    // NOP
label_280930:
    // 0x280930: 0x1c04f  .word       0x0001C04F                   # sync # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280934:
    // 0x280934: 0x364f0  tge         $zero, $v1, 403
    ctx->pc = 0x280934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280938:
    // 0x280938: 0x0  nop
    ctx->pc = 0x280938u;
    // NOP
label_28093c:
    // 0x28093c: 0x0  nop
    ctx->pc = 0x28093cu;
    // NOP
label_280940:
    // 0x280940: 0x1c0bc  dsll32      $t8, $at, 2
    ctx->pc = 0x280940u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) << (32 + 2));
label_280944:
    // 0x280944: 0x36cf0  tge         $zero, $v1, 435
    ctx->pc = 0x280944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280948:
    // 0x280948: 0x0  nop
    ctx->pc = 0x280948u;
    // NOP
label_28094c:
    // 0x28094c: 0x0  nop
    ctx->pc = 0x28094cu;
    // NOP
label_280950:
    // 0x280950: 0x1c12a  .word       0x0001C12A                   # slt         $t8, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280950u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280954:
    // 0x280954: 0x320a0  .word       0x000320A0                   # add         $a0, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_280958:
    // 0x280958: 0x0  nop
    ctx->pc = 0x280958u;
    // NOP
label_28095c:
    // 0x28095c: 0x0  nop
    ctx->pc = 0x28095cu;
    // NOP
label_280960:
    // 0x280960: 0x1c18f  .word       0x0001C18F                   # sync # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280960u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280964:
    // 0x280964: 0x331e0  .word       0x000331E0                   # add         $a2, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280968:
    // 0x280968: 0x0  nop
    ctx->pc = 0x280968u;
    // NOP
label_28096c:
    // 0x28096c: 0x0  nop
    ctx->pc = 0x28096cu;
    // NOP
label_280970:
    // 0x280970: 0x1c1f6  tne         $zero, $at, 775
    ctx->pc = 0x280970u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280974:
    // 0x280974: 0x34b60  .word       0x00034B60                   # add         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280978:
    // 0x280978: 0x0  nop
    ctx->pc = 0x280978u;
    // NOP
label_28097c:
    // 0x28097c: 0x0  nop
    ctx->pc = 0x28097cu;
    // NOP
label_280980:
    // 0x280980: 0x1c260  .word       0x0001C260                   # add         $t8, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_280984:
    // 0x280984: 0x37220  .word       0x00037220                   # add         $t6, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_280988:
    // 0x280988: 0x0  nop
    ctx->pc = 0x280988u;
    // NOP
label_28098c:
    // 0x28098c: 0x0  nop
    ctx->pc = 0x28098cu;
    // NOP
label_280990:
    // 0x280990: 0x1c2cf  .word       0x0001C2CF                   # sync # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280990u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280994:
    // 0x280994: 0x2e4c0  sll         $gp, $v0, 19
    ctx->pc = 0x280994u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_280998:
    // 0x280998: 0x0  nop
    ctx->pc = 0x280998u;
    // NOP
label_28099c:
    // 0x28099c: 0x0  nop
    ctx->pc = 0x28099cu;
    // NOP
label_2809a0:
    // 0x2809a0: 0x1c32c  .word       0x0001C32C                   # dadd        $t8, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_2809a4:
    // 0x2809a4: 0x37b60  .word       0x00037B60                   # add         $t7, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2809a8:
    // 0x2809a8: 0x0  nop
    ctx->pc = 0x2809a8u;
    // NOP
label_2809ac:
    // 0x2809ac: 0x0  nop
    ctx->pc = 0x2809acu;
    // NOP
label_2809b0:
    // 0x2809b0: 0x1c39c  .word       0x0001C39C                   # dmult       $zero, $at # 0000C380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2809B0 raw=0x0001C39C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2809b4:
    // 0x2809b4: 0x36250  .word       0x00036250                   # mfhi        $t4 # 00030240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2809b8:
    // 0x2809b8: 0x0  nop
    ctx->pc = 0x2809b8u;
    // NOP
label_2809bc:
    // 0x2809bc: 0x0  nop
    ctx->pc = 0x2809bcu;
    // NOP
label_2809c0:
    // 0x2809c0: 0x1c409  .word       0x0001C409                   # jalr        $t8, $zero # 00010400 <InstrIdType: CPU_SPECIAL>
label_2809c4:
    if (ctx->pc == 0x2809C4u) {
        ctx->pc = 0x2809C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809C0u;
        // 0x2809c4: 0x34780  sll         $t0, $v1, 30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2809C8u;
        goto label_2809c8;
    }
    ctx->pc = 0x2809C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 24, 0x2809C8u);
        ctx->pc = 0x2809C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809C0u;
        // 0x2809c4: 0x34780  sll         $t0, $v1, 30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2809C0u, 0x2809C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2809C8u;
label_2809c8:
    // 0x2809c8: 0x0  nop
    ctx->pc = 0x2809c8u;
    // NOP
label_2809cc:
    // 0x2809cc: 0x0  nop
    ctx->pc = 0x2809ccu;
    // NOP
label_2809d0:
    // 0x2809d0: 0x1c472  tlt         $zero, $at, 785
    ctx->pc = 0x2809d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2809d4:
    // 0x2809d4: 0x339a0  .word       0x000339A0                   # add         $a3, $zero, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2809d8:
    // 0x2809d8: 0x0  nop
    ctx->pc = 0x2809d8u;
    // NOP
label_2809dc:
    // 0x2809dc: 0x0  nop
    ctx->pc = 0x2809dcu;
    // NOP
label_2809e0:
    // 0x2809e0: 0x1c4da  .word       0x0001C4DA                   # div         $t8, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809e0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2809e4:
    // 0x2809e4: 0x30730  tge         $zero, $v1, 28
    ctx->pc = 0x2809e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2809e8:
    // 0x2809e8: 0x0  nop
    ctx->pc = 0x2809e8u;
    // NOP
label_2809ec:
    // 0x2809ec: 0x0  nop
    ctx->pc = 0x2809ecu;
    // NOP
label_2809f0:
    // 0x2809f0: 0x1c53b  dsra        $t8, $at, 20
    ctx->pc = 0x2809f0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> 20);
label_2809f4:
    // 0x2809f4: 0x33700  sll         $a2, $v1, 28
    ctx->pc = 0x2809f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_2809f8:
    // 0x2809f8: 0x0  nop
    ctx->pc = 0x2809f8u;
    // NOP
label_2809fc:
    // 0x2809fc: 0x0  nop
    ctx->pc = 0x2809fcu;
    // NOP
label_280a00:
    // 0x280a00: 0x1c5a2  .word       0x0001C5A2                   # neg         $t8, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_280a04:
    // 0x280a04: 0x366b0  tge         $zero, $v1, 410
    ctx->pc = 0x280a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280a08:
    // 0x280a08: 0x0  nop
    ctx->pc = 0x280a08u;
    // NOP
label_280a0c:
    // 0x280a0c: 0x0  nop
    ctx->pc = 0x280a0cu;
    // NOP
label_280a10:
    // 0x280a10: 0x1c60f  .word       0x0001C60F                   # sync.p # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280a14:
    // 0x280a14: 0x3bbb0  tge         $zero, $v1, 750
    ctx->pc = 0x280a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280a18:
    // 0x280a18: 0x0  nop
    ctx->pc = 0x280a18u;
    // NOP
label_280a1c:
    // 0x280a1c: 0x0  nop
    ctx->pc = 0x280a1cu;
    // NOP
label_280a20:
    // 0x280a20: 0x1c687  .word       0x0001C687                   # srav        $t8, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280a24:
    // 0x280a24: 0x3ae60  .word       0x0003AE60                   # add         $s5, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_280a28:
    // 0x280a28: 0x0  nop
    ctx->pc = 0x280a28u;
    // NOP
label_280a2c:
    // 0x280a2c: 0x0  nop
    ctx->pc = 0x280a2cu;
    // NOP
label_280a30:
    // 0x280a30: 0x1c6fd  .word       0x0001C6FD                   # INVALID     $zero, $at, -0x3903 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280A30 raw=0x0001C6FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280a34:
    // 0x280a34: 0x32fe0  .word       0x00032FE0                   # add         $a1, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_280a38:
    // 0x280a38: 0x0  nop
    ctx->pc = 0x280a38u;
    // NOP
label_280a3c:
    // 0x280a3c: 0x0  nop
    ctx->pc = 0x280a3cu;
    // NOP
label_280a40:
    // 0x280a40: 0x1c763  .word       0x0001C763                   # negu        $t8, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a40u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280a44:
    // 0x280a44: 0x3a6d0  .word       0x0003A6D0                   # mfhi        $s4 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a44u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_280a48:
    // 0x280a48: 0x0  nop
    ctx->pc = 0x280a48u;
    // NOP
label_280a4c:
    // 0x280a4c: 0x0  nop
    ctx->pc = 0x280a4cu;
    // NOP
label_280a50:
    // 0x280a50: 0x1c7d8  .word       0x0001C7D8                   # mult        $t8, $zero, $at # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_280a54:
    // 0x280a54: 0x36d40  sll         $t5, $v1, 21
    ctx->pc = 0x280a54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
label_280a58:
    // 0x280a58: 0x0  nop
    ctx->pc = 0x280a58u;
    // NOP
label_280a5c:
    // 0x280a5c: 0x0  nop
    ctx->pc = 0x280a5cu;
    // NOP
label_280a60:
    // 0x280a60: 0x1c846  .word       0x0001C846                   # srlv        $t9, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a60u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280a64:
    // 0x280a64: 0x33710  .word       0x00033710                   # mfhi        $a2 # 00030700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_280a68:
    // 0x280a68: 0x0  nop
    ctx->pc = 0x280a68u;
    // NOP
label_280a6c:
    // 0x280a6c: 0x0  nop
    ctx->pc = 0x280a6cu;
    // NOP
label_280a70:
    // 0x280a70: 0x1c8ad  .word       0x0001C8AD                   # daddu       $t9, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a70u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_280a74:
    // 0x280a74: 0x3a4a0  .word       0x0003A4A0                   # add         $s4, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_280a78:
    // 0x280a78: 0x0  nop
    ctx->pc = 0x280a78u;
    // NOP
label_280a7c:
    // 0x280a7c: 0x0  nop
    ctx->pc = 0x280a7cu;
    // NOP
label_280a80:
    // 0x280a80: 0x1c922  .word       0x0001C922                   # neg         $t9, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_280a84:
    // 0x280a84: 0x32d90  .word       0x00032D90                   # mfhi        $a1 # 00030580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a84u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280a88:
    // 0x280a88: 0x0  nop
    ctx->pc = 0x280a88u;
    // NOP
label_280a8c:
    // 0x280a8c: 0x0  nop
    ctx->pc = 0x280a8cu;
    // NOP
label_280a90:
    // 0x280a90: 0x1c988  .word       0x0001C988                   # jr          $zero # 0001C980 <InstrIdType: CPU_SPECIAL>
label_280a94:
    if (ctx->pc == 0x280A94u) {
        ctx->pc = 0x280A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A90u;
        // 0x280a94: 0x32a20  .word       0x00032A20                   # add         $a1, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280A98u;
        goto label_280a98;
    }
    ctx->pc = 0x280A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A90u;
        // 0x280a94: 0x32a20  .word       0x00032A20                   # add         $a1, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280A98u;
label_280a98:
    // 0x280a98: 0x0  nop
    ctx->pc = 0x280a98u;
    // NOP
label_280a9c:
    // 0x280a9c: 0x0  nop
    ctx->pc = 0x280a9cu;
    // NOP
label_280aa0:
    // 0x280aa0: 0x1c9ee  .word       0x0001C9EE                   # dsub        $t9, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280aa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_280aa4:
    // 0x280aa4: 0x38240  sll         $s0, $v1, 9
    ctx->pc = 0x280aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_280aa8:
    // 0x280aa8: 0x0  nop
    ctx->pc = 0x280aa8u;
    // NOP
label_280aac:
    // 0x280aac: 0x0  nop
    ctx->pc = 0x280aacu;
    // NOP
label_280ab0:
    // 0x280ab0: 0x1ca5f  .word       0x0001CA5F                   # ddivu       $t9, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280AB0 raw=0x0001CA5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ab4:
    // 0x280ab4: 0x32e40  sll         $a1, $v1, 25
    ctx->pc = 0x280ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 25));
label_280ab8:
    // 0x280ab8: 0x0  nop
    ctx->pc = 0x280ab8u;
    // NOP
label_280abc:
    // 0x280abc: 0x0  nop
    ctx->pc = 0x280abcu;
    // NOP
label_280ac0:
    // 0x280ac0: 0x1cac5  .word       0x0001CAC5                   # INVALID     $zero, $at, -0x353B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280AC0 raw=0x0001CAC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ac4:
    // 0x280ac4: 0x31580  sll         $v0, $v1, 22
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_280ac8:
    // 0x280ac8: 0x0  nop
    ctx->pc = 0x280ac8u;
    // NOP
label_280acc:
    // 0x280acc: 0x0  nop
    ctx->pc = 0x280accu;
    // NOP
label_280ad0:
    // 0x280ad0: 0x1cb28  .word       0x0001CB28                   # mfsa        $t9 # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280ad0u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_280ad4:
    // 0x280ad4: 0x37520  .word       0x00037520                   # add         $t6, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_280ad8:
    // 0x280ad8: 0x0  nop
    ctx->pc = 0x280ad8u;
    // NOP
label_280adc:
    // 0x280adc: 0x0  nop
    ctx->pc = 0x280adcu;
    // NOP
label_280ae0:
    // 0x280ae0: 0x1cb97  .word       0x0001CB97                   # dsrav       $t9, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ae0u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280ae4:
    // 0x280ae4: 0x3a580  sll         $s4, $v1, 22
    ctx->pc = 0x280ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_280ae8:
    // 0x280ae8: 0x0  nop
    ctx->pc = 0x280ae8u;
    // NOP
label_280aec:
    // 0x280aec: 0x0  nop
    ctx->pc = 0x280aecu;
    // NOP
label_280af0:
    // 0x280af0: 0x1cc0c  .word       0x0001CC0C                   # syscall     816 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280af0u;
    ctx->pc = 0x280AF4u;
runtime->handleSyscall(rdram, ctx, 0x730u);
label_280af4:
    // 0x280af4: 0x343c0  sll         $t0, $v1, 15
    ctx->pc = 0x280af4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_280af8:
    // 0x280af8: 0x0  nop
    ctx->pc = 0x280af8u;
    // NOP
label_280afc:
    // 0x280afc: 0x0  nop
    ctx->pc = 0x280afcu;
    // NOP
label_280b00:
    // 0x280b00: 0x1cc75  .word       0x0001CC75                   # INVALID     $zero, $at, -0x338B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x280B00 raw=0x0001CC75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280b04:
    // 0x280b04: 0x38410  .word       0x00038410                   # mfhi        $s0 # 00030400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b04u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_280b08:
    // 0x280b08: 0x0  nop
    ctx->pc = 0x280b08u;
    // NOP
label_280b0c:
    // 0x280b0c: 0x0  nop
    ctx->pc = 0x280b0cu;
    // NOP
label_280b10:
    // 0x280b10: 0x1cce6  .word       0x0001CCE6                   # xor         $t9, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b10u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_280b14:
    // 0x280b14: 0x35e10  .word       0x00035E10                   # mfhi        $t3 # 00030600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_280b18:
    // 0x280b18: 0x0  nop
    ctx->pc = 0x280b18u;
    // NOP
label_280b1c:
    // 0x280b1c: 0x0  nop
    ctx->pc = 0x280b1cu;
    // NOP
label_280b20:
    // 0x280b20: 0x1cd52  .word       0x0001CD52                   # mflo        $t9 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b20u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_280b24:
    // 0x280b24: 0x31eb0  tge         $zero, $v1, 122
    ctx->pc = 0x280b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280b28:
    // 0x280b28: 0x0  nop
    ctx->pc = 0x280b28u;
    // NOP
label_280b2c:
    // 0x280b2c: 0x0  nop
    ctx->pc = 0x280b2cu;
    // NOP
label_280b30:
    // 0x280b30: 0x1cdb6  tne         $zero, $at, 822
    ctx->pc = 0x280b30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280b34:
    // 0x280b34: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x280b34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_280b38:
    // 0x280b38: 0x0  nop
    ctx->pc = 0x280b38u;
    // NOP
label_280b3c:
    // 0x280b3c: 0x0  nop
    ctx->pc = 0x280b3cu;
    // NOP
label_280b40:
    // 0x280b40: 0x1ce22  .word       0x0001CE22                   # neg         $t9, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_280b44:
    // 0x280b44: 0x34480  sll         $t0, $v1, 18
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_280b48:
    // 0x280b48: 0x0  nop
    ctx->pc = 0x280b48u;
    // NOP
label_280b4c:
    // 0x280b4c: 0x0  nop
    ctx->pc = 0x280b4cu;
    // NOP
label_280b50:
    // 0x280b50: 0x1ce8b  .word       0x0001CE8B                   # movn        $t9, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b50u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_280b54:
    // 0x280b54: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x280b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_280b58:
    // 0x280b58: 0x0  nop
    ctx->pc = 0x280b58u;
    // NOP
label_280b5c:
    // 0x280b5c: 0x0  nop
    ctx->pc = 0x280b5cu;
    // NOP
label_280b60:
    // 0x280b60: 0x1cef1  tgeu        $zero, $at, 827
    ctx->pc = 0x280b60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280b64:
    // 0x280b64: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x280b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_280b68:
    // 0x280b68: 0x0  nop
    ctx->pc = 0x280b68u;
    // NOP
label_280b6c:
    // 0x280b6c: 0x0  nop
    ctx->pc = 0x280b6cu;
    // NOP
label_280b70:
    // 0x280b70: 0x1cf57  .word       0x0001CF57                   # dsrav       $t9, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b70u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280b74:
    // 0x280b74: 0x356d0  .word       0x000356D0                   # mfhi        $t2 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280b78:
    // 0x280b78: 0x0  nop
    ctx->pc = 0x280b78u;
    // NOP
label_280b7c:
    // 0x280b7c: 0x0  nop
    ctx->pc = 0x280b7cu;
    // NOP
label_280b80:
    // 0x280b80: 0x1cfc2  srl         $t9, $at, 31
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 1), 31));
label_280b84:
    // 0x280b84: 0x351b0  tge         $zero, $v1, 326
    ctx->pc = 0x280b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280b88:
    // 0x280b88: 0x0  nop
    ctx->pc = 0x280b88u;
    // NOP
label_280b8c:
    // 0x280b8c: 0x0  nop
    ctx->pc = 0x280b8cu;
    // NOP
label_280b90:
    // 0x280b90: 0x1d02d  daddu       $k0, $zero, $at
    ctx->pc = 0x280b90u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_280b94:
    // 0x280b94: 0x342a0  .word       0x000342A0                   # add         $t0, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_280b98:
    // 0x280b98: 0x0  nop
    ctx->pc = 0x280b98u;
    // NOP
label_280b9c:
    // 0x280b9c: 0x0  nop
    ctx->pc = 0x280b9cu;
    // NOP
label_280ba0:
    // 0x280ba0: 0x1d096  .word       0x0001D096                   # dsrlv       $k0, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ba0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280ba4:
    // 0x280ba4: 0x33ed0  .word       0x00033ED0                   # mfhi        $a3 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_280ba8:
    // 0x280ba8: 0x0  nop
    ctx->pc = 0x280ba8u;
    // NOP
label_280bac:
    // 0x280bac: 0x0  nop
    ctx->pc = 0x280bacu;
    // NOP
label_280bb0:
    // 0x280bb0: 0x1d0fe  dsrl32      $k0, $at, 3
    ctx->pc = 0x280bb0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> (32 + 3));
label_280bb4:
    // 0x280bb4: 0x35e80  sll         $t3, $v1, 26
    ctx->pc = 0x280bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_280bb8:
    // 0x280bb8: 0x0  nop
    ctx->pc = 0x280bb8u;
    // NOP
label_280bbc:
    // 0x280bbc: 0x0  nop
    ctx->pc = 0x280bbcu;
    // NOP
label_280bc0:
    // 0x280bc0: 0x1d16a  .word       0x0001D16A                   # slt         $k0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bc0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280bc4:
    // 0x280bc4: 0x3a050  .word       0x0003A050                   # mfhi        $s4 # 00030040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bc4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_280bc8:
    // 0x280bc8: 0x0  nop
    ctx->pc = 0x280bc8u;
    // NOP
label_280bcc:
    // 0x280bcc: 0x0  nop
    ctx->pc = 0x280bccu;
    // NOP
label_280bd0:
    // 0x280bd0: 0x1d1df  .word       0x0001D1DF                   # ddivu       $k0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280BD0 raw=0x0001D1DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280bd4:
    // 0x280bd4: 0x35790  .word       0x00035790                   # mfhi        $t2 # 00030780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280bd8:
    // 0x280bd8: 0x0  nop
    ctx->pc = 0x280bd8u;
    // NOP
label_280bdc:
    // 0x280bdc: 0x0  nop
    ctx->pc = 0x280bdcu;
    // NOP
label_280be0:
    // 0x280be0: 0x1d24a  .word       0x0001D24A                   # movz        $k0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280be0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_280be4:
    // 0x280be4: 0x35ff0  tge         $zero, $v1, 383
    ctx->pc = 0x280be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280be8:
    // 0x280be8: 0x0  nop
    ctx->pc = 0x280be8u;
    // NOP
label_280bec:
    // 0x280bec: 0x0  nop
    ctx->pc = 0x280becu;
    // NOP
label_280bf0:
    // 0x280bf0: 0x1d2b6  tne         $zero, $at, 842
    ctx->pc = 0x280bf0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280bf4:
    // 0x280bf4: 0x30ad0  .word       0x00030AD0                   # mfhi        $at # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bf4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_280bf8:
    // 0x280bf8: 0x0  nop
    ctx->pc = 0x280bf8u;
    // NOP
label_280bfc:
    // 0x280bfc: 0x0  nop
    ctx->pc = 0x280bfcu;
    // NOP
label_280c00:
    // 0x280c00: 0x1d318  .word       0x0001D318                   # mult        $k0, $zero, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_280c04:
    // 0x280c04: 0x30a50  .word       0x00030A50                   # mfhi        $at # 00030240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c04u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_280c08:
    // 0x280c08: 0x0  nop
    ctx->pc = 0x280c08u;
    // NOP
label_280c0c:
    // 0x280c0c: 0x0  nop
    ctx->pc = 0x280c0cu;
    // NOP
label_280c10:
    // 0x280c10: 0x1d37a  dsrl        $k0, $at, 13
    ctx->pc = 0x280c10u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> 13);
label_280c14:
    // 0x280c14: 0x31010  .word       0x00031010                   # mfhi        $v0 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_280c18:
    // 0x280c18: 0x0  nop
    ctx->pc = 0x280c18u;
    // NOP
label_280c1c:
    // 0x280c1c: 0x0  nop
    ctx->pc = 0x280c1cu;
    // NOP
label_280c20:
    // 0x280c20: 0x1d3dd  .word       0x0001D3DD                   # dmultu      $zero, $at # 0000D3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x280C20 raw=0x0001D3DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280c24:
    // 0x280c24: 0x370f0  tge         $zero, $v1, 451
    ctx->pc = 0x280c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280c28:
    // 0x280c28: 0x0  nop
    ctx->pc = 0x280c28u;
    // NOP
label_280c2c:
    // 0x280c2c: 0x0  nop
    ctx->pc = 0x280c2cu;
    // NOP
label_280c30:
    // 0x280c30: 0x1d44c  .word       0x0001D44C                   # syscall     849 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c30u;
    ctx->pc = 0x280C34u;
runtime->handleSyscall(rdram, ctx, 0x751u);
label_280c34:
    // 0x280c34: 0x36ad0  .word       0x00036AD0                   # mfhi        $t5 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_280c38:
    // 0x280c38: 0x0  nop
    ctx->pc = 0x280c38u;
    // NOP
label_280c3c:
    // 0x280c3c: 0x0  nop
    ctx->pc = 0x280c3cu;
    // NOP
label_280c40:
    // 0x280c40: 0x1d4ba  dsrl        $k0, $at, 18
    ctx->pc = 0x280c40u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> 18);
label_280c44:
    // 0x280c44: 0x36b50  .word       0x00036B50                   # mfhi        $t5 # 00030340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_280c48:
    // 0x280c48: 0x0  nop
    ctx->pc = 0x280c48u;
    // NOP
label_280c4c:
    // 0x280c4c: 0x0  nop
    ctx->pc = 0x280c4cu;
    // NOP
label_280c50:
    // 0x280c50: 0x1d528  .word       0x0001D528                   # mfsa        $k0 # 00010500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280c50u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_280c54:
    // 0x280c54: 0x38420  .word       0x00038420                   # add         $s0, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_280c58:
    // 0x280c58: 0x0  nop
    ctx->pc = 0x280c58u;
    // NOP
label_280c5c:
    // 0x280c5c: 0x0  nop
    ctx->pc = 0x280c5cu;
    // NOP
label_280c60:
    // 0x280c60: 0x1d599  .word       0x0001D599                   # multu       $zero, $at # 0000D580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_280c64:
    // 0x280c64: 0x3a260  .word       0x0003A260                   # add         $s4, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_280c68:
    // 0x280c68: 0x0  nop
    ctx->pc = 0x280c68u;
    // NOP
label_280c6c:
    // 0x280c6c: 0x0  nop
    ctx->pc = 0x280c6cu;
    // NOP
label_280c70:
    // 0x280c70: 0x1d60e  .word       0x0001D60E                   # INVALID     $zero, $at, -0x29F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280C70 raw=0x0001D60E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280c74:
    // 0x280c74: 0x35e20  .word       0x00035E20                   # add         $t3, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_280c78:
    // 0x280c78: 0x0  nop
    ctx->pc = 0x280c78u;
    // NOP
label_280c7c:
    // 0x280c7c: 0x0  nop
    ctx->pc = 0x280c7cu;
    // NOP
label_280c80:
    // 0x280c80: 0x1d67a  dsrl        $k0, $at, 25
    ctx->pc = 0x280c80u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> 25);
label_280c84:
    // 0x280c84: 0x37ac0  sll         $t7, $v1, 11
    ctx->pc = 0x280c84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_280c88:
    // 0x280c88: 0x0  nop
    ctx->pc = 0x280c88u;
    // NOP
label_280c8c:
    // 0x280c8c: 0x0  nop
    ctx->pc = 0x280c8cu;
    // NOP
label_280c90:
    // 0x280c90: 0x1d6ea  .word       0x0001D6EA                   # slt         $k0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c90u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280c94:
    // 0x280c94: 0x2ee00  sll         $sp, $v0, 24
    ctx->pc = 0x280c94u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_280c98:
    // 0x280c98: 0x0  nop
    ctx->pc = 0x280c98u;
    // NOP
label_280c9c:
    // 0x280c9c: 0x0  nop
    ctx->pc = 0x280c9cu;
    // NOP
label_280ca0:
    // 0x280ca0: 0x1d748  .word       0x0001D748                   # jr          $zero # 0001D740 <InstrIdType: CPU_SPECIAL>
label_280ca4:
    if (ctx->pc == 0x280CA4u) {
        ctx->pc = 0x280CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA0u;
        // 0x280ca4: 0x34790  .word       0x00034790                   # mfhi        $t0 # 00030780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280CA8u;
        goto label_280ca8;
    }
    ctx->pc = 0x280CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA0u;
        // 0x280ca4: 0x34790  .word       0x00034790                   # mfhi        $t0 # 00030780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280CA8u;
label_280ca8:
    // 0x280ca8: 0x0  nop
    ctx->pc = 0x280ca8u;
    // NOP
label_280cac:
    // 0x280cac: 0x0  nop
    ctx->pc = 0x280cacu;
    // NOP
label_280cb0:
    // 0x280cb0: 0x1d7b1  tgeu        $zero, $at, 862
    ctx->pc = 0x280cb0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280cb4:
    // 0x280cb4: 0x33530  tge         $zero, $v1, 212
    ctx->pc = 0x280cb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280cb8:
    // 0x280cb8: 0x0  nop
    ctx->pc = 0x280cb8u;
    // NOP
label_280cbc:
    // 0x280cbc: 0x0  nop
    ctx->pc = 0x280cbcu;
    // NOP
label_280cc0:
    // 0x280cc0: 0x1d818  mult        $k1, $zero, $at
    ctx->pc = 0x280cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_280cc4:
    // 0x280cc4: 0x380e0  .word       0x000380E0                   # add         $s0, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_280cc8:
    // 0x280cc8: 0x0  nop
    ctx->pc = 0x280cc8u;
    // NOP
label_280ccc:
    // 0x280ccc: 0x0  nop
    ctx->pc = 0x280cccu;
    // NOP
label_280cd0:
    // 0x280cd0: 0x1d889  .word       0x0001D889                   # jalr        $k1, $zero # 00010080 <InstrIdType: CPU_SPECIAL>
label_280cd4:
    if (ctx->pc == 0x280CD4u) {
        ctx->pc = 0x280CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CD0u;
        // 0x280cd4: 0x33dc0  sll         $a3, $v1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280CD8u;
        goto label_280cd8;
    }
    ctx->pc = 0x280CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 27, 0x280CD8u);
        ctx->pc = 0x280CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CD0u;
        // 0x280cd4: 0x33dc0  sll         $a3, $v1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CD0u, 0x280CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280CD8u;
label_280cd8:
    // 0x280cd8: 0x0  nop
    ctx->pc = 0x280cd8u;
    // NOP
label_280cdc:
    // 0x280cdc: 0x0  nop
    ctx->pc = 0x280cdcu;
    // NOP
label_280ce0:
    // 0x280ce0: 0x1d8f1  tgeu        $zero, $at, 867
    ctx->pc = 0x280ce0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280ce4:
    // 0x280ce4: 0x32810  .word       0x00032810                   # mfhi        $a1 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ce4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280ce8:
    // 0x280ce8: 0x0  nop
    ctx->pc = 0x280ce8u;
    // NOP
label_280cec:
    // 0x280cec: 0x0  nop
    ctx->pc = 0x280cecu;
    // NOP
label_280cf0:
    // 0x280cf0: 0x1d957  .word       0x0001D957                   # dsrav       $k1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280cf0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280cf4:
    // 0x280cf4: 0x33e20  .word       0x00033E20                   # add         $a3, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_280cf8:
    // 0x280cf8: 0x0  nop
    ctx->pc = 0x280cf8u;
    // NOP
label_280cfc:
    // 0x280cfc: 0x0  nop
    ctx->pc = 0x280cfcu;
    // NOP
label_280d00:
    // 0x280d00: 0x1d9bf  dsra32      $k1, $at, 6
    ctx->pc = 0x280d00u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (32 + 6));
label_280d04:
    // 0x280d04: 0x38c20  .word       0x00038C20                   # add         $s1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_280d08:
    // 0x280d08: 0x0  nop
    ctx->pc = 0x280d08u;
    // NOP
label_280d0c:
    // 0x280d0c: 0x0  nop
    ctx->pc = 0x280d0cu;
    // NOP
label_280d10:
    // 0x280d10: 0x1da31  tgeu        $zero, $at, 872
    ctx->pc = 0x280d10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280d14:
    // 0x280d14: 0x33020  add         $a2, $zero, $v1
    ctx->pc = 0x280d14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280d18:
    // 0x280d18: 0x0  nop
    ctx->pc = 0x280d18u;
    // NOP
label_280d1c:
    // 0x280d1c: 0x0  nop
    ctx->pc = 0x280d1cu;
    // NOP
label_280d20:
    // 0x280d20: 0x1da98  .word       0x0001DA98                   # mult        $k1, $zero, $at # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_280d24:
    // 0x280d24: 0x32ab0  tge         $zero, $v1, 170
    ctx->pc = 0x280d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280d28:
    // 0x280d28: 0x0  nop
    ctx->pc = 0x280d28u;
    // NOP
label_280d2c:
    // 0x280d2c: 0x0  nop
    ctx->pc = 0x280d2cu;
    // NOP
label_280d30:
    // 0x280d30: 0x1dafe  dsrl32      $k1, $at, 11
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) >> (32 + 11));
label_280d34:
    // 0x280d34: 0x303f0  tge         $zero, $v1, 15
    ctx->pc = 0x280d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280d38:
    // 0x280d38: 0x0  nop
    ctx->pc = 0x280d38u;
    // NOP
label_280d3c:
    // 0x280d3c: 0x0  nop
    ctx->pc = 0x280d3cu;
    // NOP
label_280d40:
    // 0x280d40: 0x1db5f  .word       0x0001DB5F                   # ddivu       $k1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280D40 raw=0x0001DB5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280d44:
    // 0x280d44: 0x363d0  .word       0x000363D0                   # mfhi        $t4 # 000303C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_280d48:
    // 0x280d48: 0x0  nop
    ctx->pc = 0x280d48u;
    // NOP
label_280d4c:
    // 0x280d4c: 0x0  nop
    ctx->pc = 0x280d4cu;
    // NOP
label_280d50:
    // 0x280d50: 0x1dbcc  .word       0x0001DBCC                   # syscall     879 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d50u;
    ctx->pc = 0x280D54u;
runtime->handleSyscall(rdram, ctx, 0x76Fu);
label_280d54:
    // 0x280d54: 0x386f0  tge         $zero, $v1, 539
    ctx->pc = 0x280d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280d58:
    // 0x280d58: 0x0  nop
    ctx->pc = 0x280d58u;
    // NOP
label_280d5c:
    // 0x280d5c: 0x0  nop
    ctx->pc = 0x280d5cu;
    // NOP
label_280d60:
    // 0x280d60: 0x1dc3d  .word       0x0001DC3D                   # INVALID     $zero, $at, -0x23C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280D60 raw=0x0001DC3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280d64:
    // 0x280d64: 0x2e7b0  tge         $zero, $v0, 926
    ctx->pc = 0x280d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_280d68:
    // 0x280d68: 0x0  nop
    ctx->pc = 0x280d68u;
    // NOP
label_280d6c:
    // 0x280d6c: 0x0  nop
    ctx->pc = 0x280d6cu;
    // NOP
label_280d70:
    // 0x280d70: 0x1dc9a  .word       0x0001DC9A                   # div         $k1, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d70u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_280d74:
    // 0x280d74: 0x2b660  .word       0x0002B660                   # add         $s6, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_280d78:
    // 0x280d78: 0x0  nop
    ctx->pc = 0x280d78u;
    // NOP
label_280d7c:
    // 0x280d7c: 0x0  nop
    ctx->pc = 0x280d7cu;
    // NOP
label_280d80:
    // 0x280d80: 0x1dcf1  tgeu        $zero, $at, 883
    ctx->pc = 0x280d80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280d84:
    // 0x280d84: 0x37c00  sll         $t7, $v1, 16
    ctx->pc = 0x280d84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_280d88:
    // 0x280d88: 0x0  nop
    ctx->pc = 0x280d88u;
    // NOP
label_280d8c:
    // 0x280d8c: 0x0  nop
    ctx->pc = 0x280d8cu;
    // NOP
label_280d90:
    // 0x280d90: 0x1dd61  .word       0x0001DD61                   # addu        $k1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280d94:
    // 0x280d94: 0x337e0  .word       0x000337E0                   # add         $a2, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280d98:
    // 0x280d98: 0x0  nop
    ctx->pc = 0x280d98u;
    // NOP
label_280d9c:
    // 0x280d9c: 0x0  nop
    ctx->pc = 0x280d9cu;
    // NOP
label_280da0:
    // 0x280da0: 0x1ddc8  .word       0x0001DDC8                   # jr          $zero # 0001DDC0 <InstrIdType: CPU_SPECIAL>
label_280da4:
    if (ctx->pc == 0x280DA4u) {
        ctx->pc = 0x280DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DA0u;
        // 0x280da4: 0x3bb20  .word       0x0003BB20                   # add         $s7, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280DA8u;
        goto label_280da8;
    }
    ctx->pc = 0x280DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DA0u;
        // 0x280da4: 0x3bb20  .word       0x0003BB20                   # add         $s7, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280DA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280DA8u;
label_280da8:
    // 0x280da8: 0x0  nop
    ctx->pc = 0x280da8u;
    // NOP
label_280dac:
    // 0x280dac: 0x0  nop
    ctx->pc = 0x280dacu;
    // NOP
label_280db0:
    // 0x280db0: 0x1de40  sll         $k1, $at, 25
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_280db4:
    // 0x280db4: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x280db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_280db8:
    // 0x280db8: 0x0  nop
    ctx->pc = 0x280db8u;
    // NOP
label_280dbc:
    // 0x280dbc: 0x0  nop
    ctx->pc = 0x280dbcu;
    // NOP
label_280dc0:
    // 0x280dc0: 0x1dea8  .word       0x0001DEA8                   # mfsa        $k1 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280dc0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_280dc4:
    // 0x280dc4: 0x33760  .word       0x00033760                   # add         $a2, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280dc8:
    // 0x280dc8: 0x0  nop
    ctx->pc = 0x280dc8u;
    // NOP
label_280dcc:
    // 0x280dcc: 0x0  nop
    ctx->pc = 0x280dccu;
    // NOP
label_280dd0:
    // 0x280dd0: 0x1df0f  .word       0x0001DF0F                   # sync.p # 0001D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280dd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280dd4:
    // 0x280dd4: 0x3b960  .word       0x0003B960                   # add         $s7, $zero, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_280dd8:
    // 0x280dd8: 0x0  nop
    ctx->pc = 0x280dd8u;
    // NOP
label_280ddc:
    // 0x280ddc: 0x0  nop
    ctx->pc = 0x280ddcu;
    // NOP
label_280de0:
    // 0x280de0: 0x1df87  .word       0x0001DF87                   # srav        $k1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280de0u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280de4:
    // 0x280de4: 0x34be0  .word       0x00034BE0                   # add         $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280de8:
    // 0x280de8: 0x0  nop
    ctx->pc = 0x280de8u;
    // NOP
label_280dec:
    // 0x280dec: 0x0  nop
    ctx->pc = 0x280decu;
    // NOP
label_280df0:
    // 0x280df0: 0x1dff1  tgeu        $zero, $at, 895
    ctx->pc = 0x280df0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280df4:
    // 0x280df4: 0x36600  sll         $t4, $v1, 24
    ctx->pc = 0x280df4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_280df8:
    // 0x280df8: 0x0  nop
    ctx->pc = 0x280df8u;
    // NOP
label_280dfc:
    // 0x280dfc: 0x0  nop
    ctx->pc = 0x280dfcu;
    // NOP
label_280e00:
    // 0x280e00: 0x1e05e  .word       0x0001E05E                   # ddiv        $gp, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x280E00 raw=0x0001E05E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280e04:
    // 0x280e04: 0x32ad0  .word       0x00032AD0                   # mfhi        $a1 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e04u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280e08:
    // 0x280e08: 0x0  nop
    ctx->pc = 0x280e08u;
    // NOP
label_280e0c:
    // 0x280e0c: 0x0  nop
    ctx->pc = 0x280e0cu;
    // NOP
label_280e10:
    // 0x280e10: 0x1e0c4  .word       0x0001E0C4                   # sllv        $gp, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280e14:
    // 0x280e14: 0x36ee0  .word       0x00036EE0                   # add         $t5, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_280e18:
    // 0x280e18: 0x0  nop
    ctx->pc = 0x280e18u;
    // NOP
label_280e1c:
    // 0x280e1c: 0x0  nop
    ctx->pc = 0x280e1cu;
    // NOP
label_280e20:
    // 0x280e20: 0x1e132  tlt         $zero, $at, 900
    ctx->pc = 0x280e20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280e24:
    // 0x280e24: 0x31ec0  sll         $v1, $v1, 27
    ctx->pc = 0x280e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_280e28:
    // 0x280e28: 0x0  nop
    ctx->pc = 0x280e28u;
    // NOP
label_280e2c:
    // 0x280e2c: 0x0  nop
    ctx->pc = 0x280e2cu;
    // NOP
label_280e30:
    // 0x280e30: 0x1e196  .word       0x0001E196                   # dsrlv       $gp, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e30u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280e34:
    // 0x280e34: 0x318d0  .word       0x000318D0                   # mfhi        $v1 # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_280e38:
    // 0x280e38: 0x0  nop
    ctx->pc = 0x280e38u;
    // NOP
label_280e3c:
    // 0x280e3c: 0x0  nop
    ctx->pc = 0x280e3cu;
    // NOP
label_280e40:
    // 0x280e40: 0x1e1fa  dsrl        $gp, $at, 7
    ctx->pc = 0x280e40u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) >> 7);
label_280e44:
    // 0x280e44: 0x34b20  .word       0x00034B20                   # add         $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280e48:
    // 0x280e48: 0x0  nop
    ctx->pc = 0x280e48u;
    // NOP
label_280e4c:
    // 0x280e4c: 0x0  nop
    ctx->pc = 0x280e4cu;
    // NOP
label_280e50:
    // 0x280e50: 0x1e264  .word       0x0001E264                   # and         $gp, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e50u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280e54:
    // 0x280e54: 0x352f0  tge         $zero, $v1, 331
    ctx->pc = 0x280e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280e58:
    // 0x280e58: 0x0  nop
    ctx->pc = 0x280e58u;
    // NOP
label_280e5c:
    // 0x280e5c: 0x0  nop
    ctx->pc = 0x280e5cu;
    // NOP
label_280e60:
    // 0x280e60: 0x1e2cf  .word       0x0001E2CF                   # sync # 0001E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280e64:
    // 0x280e64: 0x36730  tge         $zero, $v1, 412
    ctx->pc = 0x280e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280e68:
    // 0x280e68: 0x0  nop
    ctx->pc = 0x280e68u;
    // NOP
label_280e6c:
    // 0x280e6c: 0x0  nop
    ctx->pc = 0x280e6cu;
    // NOP
label_280e70:
    // 0x280e70: 0x1e33c  dsll32      $gp, $at, 12
    ctx->pc = 0x280e70u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 12));
label_280e74:
    // 0x280e74: 0x35650  .word       0x00035650                   # mfhi        $t2 # 00030640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280e78:
    // 0x280e78: 0x0  nop
    ctx->pc = 0x280e78u;
    // NOP
label_280e7c:
    // 0x280e7c: 0x0  nop
    ctx->pc = 0x280e7cu;
    // NOP
label_280e80:
    // 0x280e80: 0x1e3a7  .word       0x0001E3A7                   # nor         $gp, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_280e84:
    // 0x280e84: 0x31e30  tge         $zero, $v1, 120
    ctx->pc = 0x280e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280e88:
    // 0x280e88: 0x0  nop
    ctx->pc = 0x280e88u;
    // NOP
label_280e8c:
    // 0x280e8c: 0x0  nop
    ctx->pc = 0x280e8cu;
    // NOP
label_280e90:
    // 0x280e90: 0x1e40b  .word       0x0001E40B                   # movn        $gp, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e90u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_280e94:
    // 0x280e94: 0x38b90  .word       0x00038B90                   # mfhi        $s1 # 00030380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e94u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_280e98:
    // 0x280e98: 0x0  nop
    ctx->pc = 0x280e98u;
    // NOP
label_280e9c:
    // 0x280e9c: 0x0  nop
    ctx->pc = 0x280e9cu;
    // NOP
label_280ea0:
    // 0x280ea0: 0x1e47d  .word       0x0001E47D                   # INVALID     $zero, $at, -0x1B83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280EA0 raw=0x0001E47D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ea4:
    // 0x280ea4: 0x335e0  .word       0x000335E0                   # add         $a2, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280ea8:
    // 0x280ea8: 0x0  nop
    ctx->pc = 0x280ea8u;
    // NOP
label_280eac:
    // 0x280eac: 0x0  nop
    ctx->pc = 0x280eacu;
    // NOP
label_280eb0:
    // 0x280eb0: 0x1e4e4  .word       0x0001E4E4                   # and         $gp, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280eb0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280eb4:
    // 0x280eb4: 0x39260  .word       0x00039260                   # add         $s2, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_280eb8:
    // 0x280eb8: 0x0  nop
    ctx->pc = 0x280eb8u;
    // NOP
label_280ebc:
    // 0x280ebc: 0x0  nop
    ctx->pc = 0x280ebcu;
    // NOP
label_280ec0:
    // 0x280ec0: 0x1e557  .word       0x0001E557                   # dsrav       $gp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ec0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280ec4:
    // 0x280ec4: 0x3a350  .word       0x0003A350                   # mfhi        $s4 # 00030340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ec4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_280ec8:
    // 0x280ec8: 0x0  nop
    ctx->pc = 0x280ec8u;
    // NOP
label_280ecc:
    // 0x280ecc: 0x0  nop
    ctx->pc = 0x280eccu;
    // NOP
label_280ed0:
    // 0x280ed0: 0x1e5cc  .word       0x0001E5CC                   # syscall     919 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ed0u;
    ctx->pc = 0x280ED4u;
runtime->handleSyscall(rdram, ctx, 0x797u);
label_280ed4:
    // 0x280ed4: 0x34620  .word       0x00034620                   # add         $t0, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_280ed8:
    // 0x280ed8: 0x0  nop
    ctx->pc = 0x280ed8u;
    // NOP
label_280edc:
    // 0x280edc: 0x0  nop
    ctx->pc = 0x280edcu;
    // NOP
label_280ee0:
    // 0x280ee0: 0x1e635  .word       0x0001E635                   # INVALID     $zero, $at, -0x19CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x280EE0 raw=0x0001E635"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ee4:
    // 0x280ee4: 0x308a0  .word       0x000308A0                   # add         $at, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_280ee8:
    // 0x280ee8: 0x0  nop
    ctx->pc = 0x280ee8u;
    // NOP
label_280eec:
    // 0x280eec: 0x0  nop
    ctx->pc = 0x280eecu;
    // NOP
label_280ef0:
    // 0x280ef0: 0x1e697  .word       0x0001E697                   # dsrav       $gp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ef0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280ef4:
    // 0x280ef4: 0x36fd0  .word       0x00036FD0                   # mfhi        $t5 # 000307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ef4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_280ef8:
    // 0x280ef8: 0x0  nop
    ctx->pc = 0x280ef8u;
    // NOP
label_280efc:
    // 0x280efc: 0x0  nop
    ctx->pc = 0x280efcu;
    // NOP
label_280f00:
    // 0x280f00: 0x1e705  .word       0x0001E705                   # INVALID     $zero, $at, -0x18FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280F00 raw=0x0001E705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280f04:
    // 0x280f04: 0x2e660  .word       0x0002E660                   # add         $gp, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_280f08:
    // 0x280f08: 0x0  nop
    ctx->pc = 0x280f08u;
    // NOP
label_280f0c:
    // 0x280f0c: 0x0  nop
    ctx->pc = 0x280f0cu;
    // NOP
label_280f10:
    // 0x280f10: 0x1e762  .word       0x0001E762                   # neg         $gp, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_280f14:
    // 0x280f14: 0x395f0  tge         $zero, $v1, 599
    ctx->pc = 0x280f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280f18:
    // 0x280f18: 0x0  nop
    ctx->pc = 0x280f18u;
    // NOP
label_280f1c:
    // 0x280f1c: 0x0  nop
    ctx->pc = 0x280f1cu;
    // NOP
label_280f20:
    // 0x280f20: 0x1e7d5  .word       0x0001E7D5                   # INVALID     $zero, $at, -0x182B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x280F20 raw=0x0001E7D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280f24:
    // 0x280f24: 0x316a0  .word       0x000316A0                   # add         $v0, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_280f28:
    // 0x280f28: 0x0  nop
    ctx->pc = 0x280f28u;
    // NOP
label_280f2c:
    // 0x280f2c: 0x0  nop
    ctx->pc = 0x280f2cu;
    // NOP
label_280f30:
    // 0x280f30: 0x1e838  dsll        $sp, $at, 0
    ctx->pc = 0x280f30u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 1) << 0);
label_280f34:
    // 0x280f34: 0x3c3a0  .word       0x0003C3A0                   # add         $t8, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_280f38:
    // 0x280f38: 0x0  nop
    ctx->pc = 0x280f38u;
    // NOP
label_280f3c:
    // 0x280f3c: 0x0  nop
    ctx->pc = 0x280f3cu;
    // NOP
label_280f40:
    // 0x280f40: 0x47a  dsrl        $zero, $zero, 17
    ctx->pc = 0x280f40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 17);
label_280f44:
    // 0x280f44: 0x47b  dsra        $zero, $zero, 17
    ctx->pc = 0x280f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 17);
label_280f48:
    // 0x280f48: 0x47c  dsll32      $zero, $zero, 17
    ctx->pc = 0x280f48u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 17));
label_280f4c:
    // 0x280f4c: 0x47d  .word       0x0000047D                   # INVALID     $zero, $zero, 0x47D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280F4C raw=0x0000047D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280f50:
    // 0x280f50: 0x47e  dsrl32      $zero, $zero, 17
    ctx->pc = 0x280f50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 17));
label_280f54:
    // 0x280f54: 0x47f  dsra32      $zero, $zero, 17
    ctx->pc = 0x280f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 17));
label_280f58:
    // 0x280f58: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x280f58u;
    
label_280f5c:
    // 0x280f5c: 0x481  .word       0x00000481                   # INVALID     $zero, $zero, 0x481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x280F5C raw=0x00000481"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280f60:
    // 0x280f60: 0x493  .word       0x00000493                   # mtlo        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f60u;
    ctx->lo = GPR_U64(ctx, 0);
label_280f64:
    // 0x280f64: 0x483  sra         $zero, $zero, 18
    ctx->pc = 0x280f64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 18));
label_280f68:
    // 0x280f68: 0x484  .word       0x00000484                   # sllv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280f6c:
    // 0x280f6c: 0x485  .word       0x00000485                   # INVALID     $zero, $zero, 0x485 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280F6C raw=0x00000485"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280f70:
    // 0x280f70: 0x486  .word       0x00000486                   # srlv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f70u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280f74:
    // 0x280f74: 0x487  .word       0x00000487                   # srav        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280f78:
    // 0x280f78: 0x488  .word       0x00000488                   # jr          $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_280f7c:
    if (ctx->pc == 0x280F7Cu) {
        ctx->pc = 0x280F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F78u;
        // 0x280f7c: 0x489  .word       0x00000489                   # jalr        $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x280F80u;
        goto label_280f80;
    }
    ctx->pc = 0x280F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F78u;
        // 0x280f7c: 0x489  .word       0x00000489                   # jalr        $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280F80u;
label_280f80:
    // 0x280f80: 0x48a  .word       0x0000048A                   # movz        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_280f84:
    // 0x280f84: 0x48b  .word       0x0000048B                   # movn        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_280f88:
    // 0x280f88: 0x48c  syscall     18
    ctx->pc = 0x280f88u;
    ctx->pc = 0x280F8Cu;
runtime->handleSyscall(rdram, ctx, 0x12u);
label_280f8c:
    // 0x280f8c: 0x48d  break       0, 18
    ctx->pc = 0x280f8cu;
    runtime->handleBreak(rdram, ctx);
label_280f90:
    // 0x280f90: 0x48e  .word       0x0000048E                   # INVALID     $zero, $zero, 0x48E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280F90 raw=0x0000048E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280f94:
    // 0x280f94: 0x48f  sync.p
    ctx->pc = 0x280f94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280f98:
    // 0x280f98: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280f98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_280f9c:
    // 0x280f9c: 0x0  nop
    ctx->pc = 0x280f9cu;
    // NOP
label_280fa0:
    // 0x280fa0: 0x4fb  dsra        $zero, $zero, 19
    ctx->pc = 0x280fa0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 19);
label_280fa4:
    // 0x280fa4: 0x4fc  dsll32      $zero, $zero, 19
    ctx->pc = 0x280fa4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 19));
label_280fa8:
    // 0x280fa8: 0x4fd  .word       0x000004FD                   # INVALID     $zero, $zero, 0x4FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fa8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280FA8 raw=0x000004FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280fac:
    // 0x280fac: 0x4fe  dsrl32      $zero, $zero, 19
    ctx->pc = 0x280facu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 19));
label_280fb0:
    // 0x280fb0: 0x4ff  dsra32      $zero, $zero, 19
    ctx->pc = 0x280fb0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 19));
label_280fb4:
    // 0x280fb4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x280fb4u;
    
label_280fb8:
    // 0x280fb8: 0x501  .word       0x00000501                   # INVALID     $zero, $zero, 0x501 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x280FB8 raw=0x00000501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280fbc:
    // 0x280fbc: 0x502  srl         $zero, $zero, 20
    ctx->pc = 0x280fbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 20));
label_280fc0:
    // 0x280fc0: 0x514  .word       0x00000514                   # dsllv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_280fc4:
    // 0x280fc4: 0x504  .word       0x00000504                   # sllv        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280fc8:
    // 0x280fc8: 0x505  .word       0x00000505                   # INVALID     $zero, $zero, 0x505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280FC8 raw=0x00000505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280fcc:
    // 0x280fcc: 0x506  .word       0x00000506                   # srlv        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fccu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280fd0:
    // 0x280fd0: 0x507  .word       0x00000507                   # srav        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280fd4:
    // 0x280fd4: 0x508  .word       0x00000508                   # jr          $zero # 00000500 <InstrIdType: CPU_SPECIAL>
label_280fd8:
    if (ctx->pc == 0x280FD8u) {
        ctx->pc = 0x280FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD4u;
        // 0x280fd8: 0x509  .word       0x00000509                   # jalr        $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x280FDCu;
        goto label_280fdc;
    }
    ctx->pc = 0x280FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD4u;
        // 0x280fd8: 0x509  .word       0x00000509                   # jalr        $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280FDCu;
label_280fdc:
    // 0x280fdc: 0x50a  .word       0x0000050A                   # movz        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fdcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_280fe0:
    // 0x280fe0: 0x50b  .word       0x0000050B                   # movn        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fe0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_280fe4:
    // 0x280fe4: 0x50c  syscall     20
    ctx->pc = 0x280fe4u;
    ctx->pc = 0x280FE8u;
runtime->handleSyscall(rdram, ctx, 0x14u);
label_280fe8:
    // 0x280fe8: 0x50d  break       0, 20
    ctx->pc = 0x280fe8u;
    runtime->handleBreak(rdram, ctx);
label_280fec:
    // 0x280fec: 0x50e  .word       0x0000050E                   # INVALID     $zero, $zero, 0x50E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280FEC raw=0x0000050E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ff0:
    // 0x280ff0: 0x50f  sync.p
    ctx->pc = 0x280ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280ff4:
    // 0x280ff4: 0x510  .word       0x00000510                   # mfhi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ff4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_280ff8:
    // 0x280ff8: 0x511  .word       0x00000511                   # mthi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ff8u;
    ctx->hi = GPR_U64(ctx, 0);
label_280ffc:
    // 0x280ffc: 0x0  nop
    ctx->pc = 0x280ffcu;
    // NOP
label_281000:
    // 0x281000: 0x47a  dsrl        $zero, $zero, 17
    ctx->pc = 0x281000u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 17);
label_281004:
    // 0x281004: 0x47b  dsra        $zero, $zero, 17
    ctx->pc = 0x281004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 17);
label_281008:
    // 0x281008: 0x47c  dsll32      $zero, $zero, 17
    ctx->pc = 0x281008u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 17));
label_28100c:
    // 0x28100c: 0x47d  .word       0x0000047D                   # INVALID     $zero, $zero, 0x47D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28100cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28100C raw=0x0000047D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281010:
    // 0x281010: 0x47e  dsrl32      $zero, $zero, 17
    ctx->pc = 0x281010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 17));
label_281014:
    // 0x281014: 0x491  .word       0x00000491                   # mthi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281014u;
    ctx->hi = GPR_U64(ctx, 0);
label_281018:
    // 0x281018: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x281018u;
    
label_28101c:
    // 0x28101c: 0x492  .word       0x00000492                   # mflo        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28101cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281020:
    // 0x281020: 0x493  .word       0x00000493                   # mtlo        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281020u;
    ctx->lo = GPR_U64(ctx, 0);
label_281024:
    // 0x281024: 0x483  sra         $zero, $zero, 18
    ctx->pc = 0x281024u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 18));
label_281028:
    // 0x281028: 0x484  .word       0x00000484                   # sllv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281028u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28102c:
    // 0x28102c: 0x494  .word       0x00000494                   # dsllv       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28102cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
    ctx->pc = 0x281030u;
    return;
}
