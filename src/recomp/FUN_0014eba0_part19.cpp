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


void FUN_0014eba0_part19(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x157840u: goto label_157840;
        case 0x157844u: goto label_157844;
        case 0x157848u: goto label_157848;
        case 0x15784cu: goto label_15784c;
        case 0x157850u: goto label_157850;
        case 0x157854u: goto label_157854;
        case 0x157858u: goto label_157858;
        case 0x15785cu: goto label_15785c;
        case 0x157860u: goto label_157860;
        case 0x157864u: goto label_157864;
        case 0x157868u: goto label_157868;
        case 0x15786cu: goto label_15786c;
        case 0x157870u: goto label_157870;
        case 0x157874u: goto label_157874;
        case 0x157878u: goto label_157878;
        case 0x15787cu: goto label_15787c;
        case 0x157880u: goto label_157880;
        case 0x157884u: goto label_157884;
        case 0x157888u: goto label_157888;
        case 0x15788cu: goto label_15788c;
        case 0x157890u: goto label_157890;
        case 0x157894u: goto label_157894;
        case 0x157898u: goto label_157898;
        case 0x15789cu: goto label_15789c;
        case 0x1578a0u: goto label_1578a0;
        case 0x1578a4u: goto label_1578a4;
        case 0x1578a8u: goto label_1578a8;
        case 0x1578acu: goto label_1578ac;
        case 0x1578b0u: goto label_1578b0;
        case 0x1578b4u: goto label_1578b4;
        case 0x1578b8u: goto label_1578b8;
        case 0x1578bcu: goto label_1578bc;
        case 0x1578c0u: goto label_1578c0;
        case 0x1578c4u: goto label_1578c4;
        case 0x1578c8u: goto label_1578c8;
        case 0x1578ccu: goto label_1578cc;
        case 0x1578d0u: goto label_1578d0;
        case 0x1578d4u: goto label_1578d4;
        case 0x1578d8u: goto label_1578d8;
        case 0x1578dcu: goto label_1578dc;
        case 0x1578e0u: goto label_1578e0;
        case 0x1578e4u: goto label_1578e4;
        case 0x1578e8u: goto label_1578e8;
        case 0x1578ecu: goto label_1578ec;
        case 0x1578f0u: goto label_1578f0;
        case 0x1578f4u: goto label_1578f4;
        case 0x1578f8u: goto label_1578f8;
        case 0x1578fcu: goto label_1578fc;
        case 0x157900u: goto label_157900;
        case 0x157904u: goto label_157904;
        case 0x157908u: goto label_157908;
        case 0x15790cu: goto label_15790c;
        case 0x157910u: goto label_157910;
        case 0x157914u: goto label_157914;
        case 0x157918u: goto label_157918;
        case 0x15791cu: goto label_15791c;
        case 0x157920u: goto label_157920;
        case 0x157924u: goto label_157924;
        case 0x157928u: goto label_157928;
        case 0x15792cu: goto label_15792c;
        case 0x157930u: goto label_157930;
        case 0x157934u: goto label_157934;
        case 0x157938u: goto label_157938;
        case 0x15793cu: goto label_15793c;
        case 0x157940u: goto label_157940;
        case 0x157944u: goto label_157944;
        case 0x157948u: goto label_157948;
        case 0x15794cu: goto label_15794c;
        case 0x157950u: goto label_157950;
        case 0x157954u: goto label_157954;
        case 0x157958u: goto label_157958;
        case 0x15795cu: goto label_15795c;
        case 0x157960u: goto label_157960;
        case 0x157964u: goto label_157964;
        case 0x157968u: goto label_157968;
        case 0x15796cu: goto label_15796c;
        case 0x157970u: goto label_157970;
        case 0x157974u: goto label_157974;
        case 0x157978u: goto label_157978;
        case 0x15797cu: goto label_15797c;
        case 0x157980u: goto label_157980;
        case 0x157984u: goto label_157984;
        case 0x157988u: goto label_157988;
        case 0x15798cu: goto label_15798c;
        case 0x157990u: goto label_157990;
        case 0x157994u: goto label_157994;
        case 0x157998u: goto label_157998;
        case 0x15799cu: goto label_15799c;
        case 0x1579a0u: goto label_1579a0;
        case 0x1579a4u: goto label_1579a4;
        case 0x1579a8u: goto label_1579a8;
        case 0x1579acu: goto label_1579ac;
        case 0x1579b0u: goto label_1579b0;
        case 0x1579b4u: goto label_1579b4;
        case 0x1579b8u: goto label_1579b8;
        case 0x1579bcu: goto label_1579bc;
        case 0x1579c0u: goto label_1579c0;
        case 0x1579c4u: goto label_1579c4;
        case 0x1579c8u: goto label_1579c8;
        case 0x1579ccu: goto label_1579cc;
        case 0x1579d0u: goto label_1579d0;
        case 0x1579d4u: goto label_1579d4;
        case 0x1579d8u: goto label_1579d8;
        case 0x1579dcu: goto label_1579dc;
        case 0x1579e0u: goto label_1579e0;
        case 0x1579e4u: goto label_1579e4;
        case 0x1579e8u: goto label_1579e8;
        case 0x1579ecu: goto label_1579ec;
        case 0x1579f0u: goto label_1579f0;
        case 0x1579f4u: goto label_1579f4;
        case 0x1579f8u: goto label_1579f8;
        case 0x1579fcu: goto label_1579fc;
        case 0x157a00u: goto label_157a00;
        case 0x157a04u: goto label_157a04;
        case 0x157a08u: goto label_157a08;
        case 0x157a0cu: goto label_157a0c;
        case 0x157a10u: goto label_157a10;
        case 0x157a14u: goto label_157a14;
        case 0x157a18u: goto label_157a18;
        case 0x157a1cu: goto label_157a1c;
        case 0x157a20u: goto label_157a20;
        case 0x157a24u: goto label_157a24;
        case 0x157a28u: goto label_157a28;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a30u: goto label_157a30;
        case 0x157a34u: goto label_157a34;
        case 0x157a38u: goto label_157a38;
        case 0x157a3cu: goto label_157a3c;
        case 0x157a40u: goto label_157a40;
        case 0x157a44u: goto label_157a44;
        case 0x157a48u: goto label_157a48;
        case 0x157a4cu: goto label_157a4c;
        case 0x157a50u: goto label_157a50;
        case 0x157a54u: goto label_157a54;
        case 0x157a58u: goto label_157a58;
        case 0x157a5cu: goto label_157a5c;
        case 0x157a60u: goto label_157a60;
        case 0x157a64u: goto label_157a64;
        case 0x157a68u: goto label_157a68;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a70u: goto label_157a70;
        case 0x157a74u: goto label_157a74;
        case 0x157a78u: goto label_157a78;
        case 0x157a7cu: goto label_157a7c;
        case 0x157a80u: goto label_157a80;
        case 0x157a84u: goto label_157a84;
        case 0x157a88u: goto label_157a88;
        case 0x157a8cu: goto label_157a8c;
        case 0x157a90u: goto label_157a90;
        case 0x157a94u: goto label_157a94;
        case 0x157a98u: goto label_157a98;
        case 0x157a9cu: goto label_157a9c;
        case 0x157aa0u: goto label_157aa0;
        case 0x157aa4u: goto label_157aa4;
        case 0x157aa8u: goto label_157aa8;
        case 0x157aacu: goto label_157aac;
        case 0x157ab0u: goto label_157ab0;
        case 0x157ab4u: goto label_157ab4;
        case 0x157ab8u: goto label_157ab8;
        case 0x157abcu: goto label_157abc;
        case 0x157ac0u: goto label_157ac0;
        case 0x157ac4u: goto label_157ac4;
        case 0x157ac8u: goto label_157ac8;
        case 0x157accu: goto label_157acc;
        case 0x157ad0u: goto label_157ad0;
        case 0x157ad4u: goto label_157ad4;
        case 0x157ad8u: goto label_157ad8;
        case 0x157adcu: goto label_157adc;
        case 0x157ae0u: goto label_157ae0;
        case 0x157ae4u: goto label_157ae4;
        case 0x157ae8u: goto label_157ae8;
        case 0x157aecu: goto label_157aec;
        case 0x157af0u: goto label_157af0;
        case 0x157af4u: goto label_157af4;
        case 0x157af8u: goto label_157af8;
        case 0x157afcu: goto label_157afc;
        case 0x157b00u: goto label_157b00;
        case 0x157b04u: goto label_157b04;
        case 0x157b08u: goto label_157b08;
        case 0x157b0cu: goto label_157b0c;
        case 0x157b10u: goto label_157b10;
        case 0x157b14u: goto label_157b14;
        case 0x157b18u: goto label_157b18;
        case 0x157b1cu: goto label_157b1c;
        case 0x157b20u: goto label_157b20;
        case 0x157b24u: goto label_157b24;
        case 0x157b28u: goto label_157b28;
        case 0x157b2cu: goto label_157b2c;
        case 0x157b30u: goto label_157b30;
        case 0x157b34u: goto label_157b34;
        case 0x157b38u: goto label_157b38;
        case 0x157b3cu: goto label_157b3c;
        case 0x157b40u: goto label_157b40;
        case 0x157b44u: goto label_157b44;
        case 0x157b48u: goto label_157b48;
        case 0x157b4cu: goto label_157b4c;
        case 0x157b50u: goto label_157b50;
        case 0x157b54u: goto label_157b54;
        case 0x157b58u: goto label_157b58;
        case 0x157b5cu: goto label_157b5c;
        case 0x157b60u: goto label_157b60;
        case 0x157b64u: goto label_157b64;
        case 0x157b68u: goto label_157b68;
        case 0x157b6cu: goto label_157b6c;
        case 0x157b70u: goto label_157b70;
        case 0x157b74u: goto label_157b74;
        case 0x157b78u: goto label_157b78;
        case 0x157b7cu: goto label_157b7c;
        case 0x157b80u: goto label_157b80;
        case 0x157b84u: goto label_157b84;
        case 0x157b88u: goto label_157b88;
        case 0x157b8cu: goto label_157b8c;
        case 0x157b90u: goto label_157b90;
        case 0x157b94u: goto label_157b94;
        case 0x157b98u: goto label_157b98;
        case 0x157b9cu: goto label_157b9c;
        case 0x157ba0u: goto label_157ba0;
        case 0x157ba4u: goto label_157ba4;
        case 0x157ba8u: goto label_157ba8;
        case 0x157bacu: goto label_157bac;
        case 0x157bb0u: goto label_157bb0;
        case 0x157bb4u: goto label_157bb4;
        case 0x157bb8u: goto label_157bb8;
        case 0x157bbcu: goto label_157bbc;
        case 0x157bc0u: goto label_157bc0;
        case 0x157bc4u: goto label_157bc4;
        case 0x157bc8u: goto label_157bc8;
        case 0x157bccu: goto label_157bcc;
        case 0x157bd0u: goto label_157bd0;
        case 0x157bd4u: goto label_157bd4;
        case 0x157bd8u: goto label_157bd8;
        case 0x157bdcu: goto label_157bdc;
        case 0x157be0u: goto label_157be0;
        case 0x157be4u: goto label_157be4;
        case 0x157be8u: goto label_157be8;
        case 0x157becu: goto label_157bec;
        case 0x157bf0u: goto label_157bf0;
        case 0x157bf4u: goto label_157bf4;
        case 0x157bf8u: goto label_157bf8;
        case 0x157bfcu: goto label_157bfc;
        case 0x157c00u: goto label_157c00;
        case 0x157c04u: goto label_157c04;
        case 0x157c08u: goto label_157c08;
        case 0x157c0cu: goto label_157c0c;
        case 0x157c10u: goto label_157c10;
        case 0x157c14u: goto label_157c14;
        case 0x157c18u: goto label_157c18;
        case 0x157c1cu: goto label_157c1c;
        case 0x157c20u: goto label_157c20;
        case 0x157c24u: goto label_157c24;
        case 0x157c28u: goto label_157c28;
        case 0x157c2cu: goto label_157c2c;
        case 0x157c30u: goto label_157c30;
        case 0x157c34u: goto label_157c34;
        case 0x157c38u: goto label_157c38;
        case 0x157c3cu: goto label_157c3c;
        case 0x157c40u: goto label_157c40;
        case 0x157c44u: goto label_157c44;
        case 0x157c48u: goto label_157c48;
        case 0x157c4cu: goto label_157c4c;
        case 0x157c50u: goto label_157c50;
        case 0x157c54u: goto label_157c54;
        case 0x157c58u: goto label_157c58;
        case 0x157c5cu: goto label_157c5c;
        case 0x157c60u: goto label_157c60;
        case 0x157c64u: goto label_157c64;
        case 0x157c68u: goto label_157c68;
        case 0x157c6cu: goto label_157c6c;
        case 0x157c70u: goto label_157c70;
        case 0x157c74u: goto label_157c74;
        case 0x157c78u: goto label_157c78;
        case 0x157c7cu: goto label_157c7c;
        case 0x157c80u: goto label_157c80;
        case 0x157c84u: goto label_157c84;
        case 0x157c88u: goto label_157c88;
        case 0x157c8cu: goto label_157c8c;
        case 0x157c90u: goto label_157c90;
        case 0x157c94u: goto label_157c94;
        case 0x157c98u: goto label_157c98;
        case 0x157c9cu: goto label_157c9c;
        case 0x157ca0u: goto label_157ca0;
        case 0x157ca4u: goto label_157ca4;
        case 0x157ca8u: goto label_157ca8;
        case 0x157cacu: goto label_157cac;
        case 0x157cb0u: goto label_157cb0;
        case 0x157cb4u: goto label_157cb4;
        case 0x157cb8u: goto label_157cb8;
        case 0x157cbcu: goto label_157cbc;
        case 0x157cc0u: goto label_157cc0;
        case 0x157cc4u: goto label_157cc4;
        case 0x157cc8u: goto label_157cc8;
        case 0x157cccu: goto label_157ccc;
        case 0x157cd0u: goto label_157cd0;
        case 0x157cd4u: goto label_157cd4;
        case 0x157cd8u: goto label_157cd8;
        case 0x157cdcu: goto label_157cdc;
        case 0x157ce0u: goto label_157ce0;
        case 0x157ce4u: goto label_157ce4;
        case 0x157ce8u: goto label_157ce8;
        case 0x157cecu: goto label_157cec;
        case 0x157cf0u: goto label_157cf0;
        case 0x157cf4u: goto label_157cf4;
        case 0x157cf8u: goto label_157cf8;
        case 0x157cfcu: goto label_157cfc;
        case 0x157d00u: goto label_157d00;
        case 0x157d04u: goto label_157d04;
        case 0x157d08u: goto label_157d08;
        case 0x157d0cu: goto label_157d0c;
        case 0x157d10u: goto label_157d10;
        case 0x157d14u: goto label_157d14;
        case 0x157d18u: goto label_157d18;
        case 0x157d1cu: goto label_157d1c;
        case 0x157d20u: goto label_157d20;
        case 0x157d24u: goto label_157d24;
        case 0x157d28u: goto label_157d28;
        case 0x157d2cu: goto label_157d2c;
        case 0x157d30u: goto label_157d30;
        case 0x157d34u: goto label_157d34;
        case 0x157d38u: goto label_157d38;
        case 0x157d3cu: goto label_157d3c;
        case 0x157d40u: goto label_157d40;
        case 0x157d44u: goto label_157d44;
        case 0x157d48u: goto label_157d48;
        case 0x157d4cu: goto label_157d4c;
        case 0x157d50u: goto label_157d50;
        case 0x157d54u: goto label_157d54;
        case 0x157d58u: goto label_157d58;
        case 0x157d5cu: goto label_157d5c;
        case 0x157d60u: goto label_157d60;
        case 0x157d64u: goto label_157d64;
        case 0x157d68u: goto label_157d68;
        case 0x157d6cu: goto label_157d6c;
        case 0x157d70u: goto label_157d70;
        case 0x157d74u: goto label_157d74;
        case 0x157d78u: goto label_157d78;
        case 0x157d7cu: goto label_157d7c;
        case 0x157d80u: goto label_157d80;
        case 0x157d84u: goto label_157d84;
        case 0x157d88u: goto label_157d88;
        case 0x157d8cu: goto label_157d8c;
        case 0x157d90u: goto label_157d90;
        case 0x157d94u: goto label_157d94;
        case 0x157d98u: goto label_157d98;
        case 0x157d9cu: goto label_157d9c;
        case 0x157da0u: goto label_157da0;
        case 0x157da4u: goto label_157da4;
        case 0x157da8u: goto label_157da8;
        case 0x157dacu: goto label_157dac;
        case 0x157db0u: goto label_157db0;
        case 0x157db4u: goto label_157db4;
        case 0x157db8u: goto label_157db8;
        case 0x157dbcu: goto label_157dbc;
        case 0x157dc0u: goto label_157dc0;
        case 0x157dc4u: goto label_157dc4;
        case 0x157dc8u: goto label_157dc8;
        case 0x157dccu: goto label_157dcc;
        case 0x157dd0u: goto label_157dd0;
        case 0x157dd4u: goto label_157dd4;
        case 0x157dd8u: goto label_157dd8;
        case 0x157ddcu: goto label_157ddc;
        case 0x157de0u: goto label_157de0;
        case 0x157de4u: goto label_157de4;
        case 0x157de8u: goto label_157de8;
        case 0x157decu: goto label_157dec;
        case 0x157df0u: goto label_157df0;
        case 0x157df4u: goto label_157df4;
        case 0x157df8u: goto label_157df8;
        case 0x157dfcu: goto label_157dfc;
        case 0x157e00u: goto label_157e00;
        case 0x157e04u: goto label_157e04;
        case 0x157e08u: goto label_157e08;
        case 0x157e0cu: goto label_157e0c;
        case 0x157e10u: goto label_157e10;
        case 0x157e14u: goto label_157e14;
        case 0x157e18u: goto label_157e18;
        case 0x157e1cu: goto label_157e1c;
        case 0x157e20u: goto label_157e20;
        case 0x157e24u: goto label_157e24;
        case 0x157e28u: goto label_157e28;
        case 0x157e2cu: goto label_157e2c;
        case 0x157e30u: goto label_157e30;
        case 0x157e34u: goto label_157e34;
        case 0x157e38u: goto label_157e38;
        case 0x157e3cu: goto label_157e3c;
        case 0x157e40u: goto label_157e40;
        case 0x157e44u: goto label_157e44;
        case 0x157e48u: goto label_157e48;
        case 0x157e4cu: goto label_157e4c;
        case 0x157e50u: goto label_157e50;
        case 0x157e54u: goto label_157e54;
        case 0x157e58u: goto label_157e58;
        case 0x157e5cu: goto label_157e5c;
        case 0x157e60u: goto label_157e60;
        case 0x157e64u: goto label_157e64;
        case 0x157e68u: goto label_157e68;
        case 0x157e6cu: goto label_157e6c;
        case 0x157e70u: goto label_157e70;
        case 0x157e74u: goto label_157e74;
        case 0x157e78u: goto label_157e78;
        case 0x157e7cu: goto label_157e7c;
        case 0x157e80u: goto label_157e80;
        case 0x157e84u: goto label_157e84;
        case 0x157e88u: goto label_157e88;
        case 0x157e8cu: goto label_157e8c;
        case 0x157e90u: goto label_157e90;
        case 0x157e94u: goto label_157e94;
        case 0x157e98u: goto label_157e98;
        case 0x157e9cu: goto label_157e9c;
        case 0x157ea0u: goto label_157ea0;
        case 0x157ea4u: goto label_157ea4;
        case 0x157ea8u: goto label_157ea8;
        case 0x157eacu: goto label_157eac;
        case 0x157eb0u: goto label_157eb0;
        case 0x157eb4u: goto label_157eb4;
        case 0x157eb8u: goto label_157eb8;
        case 0x157ebcu: goto label_157ebc;
        case 0x157ec0u: goto label_157ec0;
        case 0x157ec4u: goto label_157ec4;
        case 0x157ec8u: goto label_157ec8;
        case 0x157eccu: goto label_157ecc;
        case 0x157ed0u: goto label_157ed0;
        case 0x157ed4u: goto label_157ed4;
        case 0x157ed8u: goto label_157ed8;
        case 0x157edcu: goto label_157edc;
        case 0x157ee0u: goto label_157ee0;
        case 0x157ee4u: goto label_157ee4;
        case 0x157ee8u: goto label_157ee8;
        case 0x157eecu: goto label_157eec;
        case 0x157ef0u: goto label_157ef0;
        case 0x157ef4u: goto label_157ef4;
        case 0x157ef8u: goto label_157ef8;
        case 0x157efcu: goto label_157efc;
        case 0x157f00u: goto label_157f00;
        case 0x157f04u: goto label_157f04;
        case 0x157f08u: goto label_157f08;
        case 0x157f0cu: goto label_157f0c;
        case 0x157f10u: goto label_157f10;
        case 0x157f14u: goto label_157f14;
        case 0x157f18u: goto label_157f18;
        case 0x157f1cu: goto label_157f1c;
        case 0x157f20u: goto label_157f20;
        case 0x157f24u: goto label_157f24;
        case 0x157f28u: goto label_157f28;
        case 0x157f2cu: goto label_157f2c;
        case 0x157f30u: goto label_157f30;
        case 0x157f34u: goto label_157f34;
        case 0x157f38u: goto label_157f38;
        case 0x157f3cu: goto label_157f3c;
        case 0x157f40u: goto label_157f40;
        case 0x157f44u: goto label_157f44;
        case 0x157f48u: goto label_157f48;
        case 0x157f4cu: goto label_157f4c;
        case 0x157f50u: goto label_157f50;
        case 0x157f54u: goto label_157f54;
        case 0x157f58u: goto label_157f58;
        case 0x157f5cu: goto label_157f5c;
        case 0x157f60u: goto label_157f60;
        case 0x157f64u: goto label_157f64;
        case 0x157f68u: goto label_157f68;
        case 0x157f6cu: goto label_157f6c;
        case 0x157f70u: goto label_157f70;
        case 0x157f74u: goto label_157f74;
        case 0x157f78u: goto label_157f78;
        case 0x157f7cu: goto label_157f7c;
        case 0x157f80u: goto label_157f80;
        case 0x157f84u: goto label_157f84;
        case 0x157f88u: goto label_157f88;
        case 0x157f8cu: goto label_157f8c;
        case 0x157f90u: goto label_157f90;
        case 0x157f94u: goto label_157f94;
        case 0x157f98u: goto label_157f98;
        case 0x157f9cu: goto label_157f9c;
        case 0x157fa0u: goto label_157fa0;
        case 0x157fa4u: goto label_157fa4;
        case 0x157fa8u: goto label_157fa8;
        case 0x157facu: goto label_157fac;
        case 0x157fb0u: goto label_157fb0;
        case 0x157fb4u: goto label_157fb4;
        case 0x157fb8u: goto label_157fb8;
        case 0x157fbcu: goto label_157fbc;
        case 0x157fc0u: goto label_157fc0;
        case 0x157fc4u: goto label_157fc4;
        case 0x157fc8u: goto label_157fc8;
        case 0x157fccu: goto label_157fcc;
        case 0x157fd0u: goto label_157fd0;
        case 0x157fd4u: goto label_157fd4;
        case 0x157fd8u: goto label_157fd8;
        case 0x157fdcu: goto label_157fdc;
        case 0x157fe0u: goto label_157fe0;
        case 0x157fe4u: goto label_157fe4;
        case 0x157fe8u: goto label_157fe8;
        case 0x157fecu: goto label_157fec;
        case 0x157ff0u: goto label_157ff0;
        case 0x157ff4u: goto label_157ff4;
        case 0x157ff8u: goto label_157ff8;
        case 0x157ffcu: goto label_157ffc;
        case 0x158000u: goto label_158000;
        case 0x158004u: goto label_158004;
        case 0x158008u: goto label_158008;
        case 0x15800cu: goto label_15800c;
        default: return;
    }

label_157840:
    // 0x157840: 0x3e00008  jr          $ra
label_157844:
    if (ctx->pc == 0x157844u) {
        ctx->pc = 0x157848u;
        goto label_157848;
    }
    ctx->pc = 0x157840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157848u;
label_157848:
    // 0x157848: 0x0  nop
    ctx->pc = 0x157848u;
    // NOP
label_15784c:
    // 0x15784c: 0x0  nop
    ctx->pc = 0x15784cu;
    // NOP
label_157850:
    // 0x157850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_157854:
    // 0x157854: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157858:
    // 0x157858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15785c:
    // 0x15785c: 0x8c22c9b4  lw          $v0, -0x364C($at)
    ctx->pc = 0x15785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953396)));
label_157860:
    // 0x157860: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_157864:
    if (ctx->pc == 0x157864u) {
        ctx->pc = 0x157864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157860u;
        // 0x157864: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157868u;
        goto label_157868;
    }
    ctx->pc = 0x157860u;
    {
        const bool branch_taken_0x157860 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157860u;
        // 0x157864: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157860) {
            ctx->pc = 0x157874u;
            goto label_157874;
        }
    }
    ctx->pc = 0x157868u;
label_157868:
    // 0x157868: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_15786c:
    if (ctx->pc == 0x15786Cu) {
        ctx->pc = 0x157870u;
        goto label_157870;
    }
    ctx->pc = 0x157868u;
    {
        const bool branch_taken_0x157868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157868) {
            ctx->pc = 0x157874u;
            goto label_157874;
        }
    }
    ctx->pc = 0x157870u;
label_157870:
    // 0x157870: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x157870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_157874:
    // 0x157874: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_157878:
    if (ctx->pc == 0x157878u) {
        ctx->pc = 0x157878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157874u;
        // 0x157878: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15787Cu;
        goto label_15787c;
    }
    ctx->pc = 0x157874u;
    {
        const bool branch_taken_0x157874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157874u;
        // 0x157878: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157874) {
            ctx->pc = 0x157894u;
            goto label_157894;
        }
    }
    ctx->pc = 0x15787Cu;
label_15787c:
    // 0x15787c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_157880:
    // 0x157880: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x157880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_157884:
    // 0x157884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_157888:
    if (ctx->pc == 0x157888u) {
        ctx->pc = 0x157888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157884u;
        // 0x157888: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15788Cu;
        goto label_15788c;
    }
    ctx->pc = 0x157884u;
    {
        const bool branch_taken_0x157884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157884u;
        // 0x157888: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157884) {
            ctx->pc = 0x157898u;
            goto label_157898;
        }
    }
    ctx->pc = 0x15788Cu;
label_15788c:
    // 0x15788c: 0x1000000c  b           . + 4 + (0xC << 2)
label_157890:
    if (ctx->pc == 0x157890u) {
        ctx->pc = 0x157890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15788Cu;
        // 0x157890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157894u;
        goto label_157894;
    }
    ctx->pc = 0x15788Cu;
    {
        const bool branch_taken_0x15788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15788Cu;
        // 0x157890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15788c) {
            ctx->pc = 0x1578C0u;
            goto label_1578c0;
        }
    }
    ctx->pc = 0x157894u;
label_157894:
    // 0x157894: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_157898:
    // 0x157898: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15789c:
    // 0x15789c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x15789cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1578a0:
    // 0x1578a0: 0x513b8  dsll        $v0, $a1, 14
    ctx->pc = 0x1578a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 14);
label_1578a4:
    // 0x1578a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1578a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1578a8:
    // 0x1578a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1578a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1578ac:
    // 0x1578ac: 0x45202f  dsubu       $a0, $v0, $a1
    ctx->pc = 0x1578acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_1578b0:
    // 0x1578b0: 0xc06d554  jal         func_1B5550
label_1578b4:
    if (ctx->pc == 0x1578B4u) {
        ctx->pc = 0x1578B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578B0u;
        // 0x1578b4: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578B8u;
        goto label_1578b8;
    }
    ctx->pc = 0x1578B0u;
    SET_GPR_U32(ctx, 31, 0x1578B8u);
    ctx->pc = 0x1578B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578B0u;
    // 0x1578b4: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x1578B8u;
label_1578b8:
    // 0x1578b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1578b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1578bc:
    // 0x1578bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1578bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1578c0:
    // 0x1578c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1578c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1578c4:
    // 0x1578c4: 0x3e00008  jr          $ra
label_1578c8:
    if (ctx->pc == 0x1578C8u) {
        ctx->pc = 0x1578C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578C4u;
        // 0x1578c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578CCu;
        goto label_1578cc;
    }
    ctx->pc = 0x1578C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1578C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578C4u;
        // 0x1578c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1578C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1578CCu;
label_1578cc:
    // 0x1578cc: 0x0  nop
    ctx->pc = 0x1578ccu;
    // NOP
label_1578d0:
    // 0x1578d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1578d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1578d4:
    // 0x1578d4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1578d8:
    // 0x1578d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1578d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1578dc:
    // 0x1578dc: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x1578dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953392)));
label_1578e0:
    // 0x1578e0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1578e4:
    if (ctx->pc == 0x1578E4u) {
        ctx->pc = 0x1578E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E0u;
        // 0x1578e4: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578E8u;
        goto label_1578e8;
    }
    ctx->pc = 0x1578E0u;
    {
        const bool branch_taken_0x1578e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1578E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E0u;
        // 0x1578e4: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e0) {
            ctx->pc = 0x1578F4u;
            goto label_1578f4;
        }
    }
    ctx->pc = 0x1578E8u;
label_1578e8:
    // 0x1578e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1578ec:
    if (ctx->pc == 0x1578ECu) {
        ctx->pc = 0x1578ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E8u;
        // 0x1578ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578F0u;
        goto label_1578f0;
    }
    ctx->pc = 0x1578E8u;
    {
        const bool branch_taken_0x1578e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E8u;
        // 0x1578ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e8) {
            ctx->pc = 0x1578F8u;
            goto label_1578f8;
        }
    }
    ctx->pc = 0x1578F0u;
label_1578f0:
    // 0x1578f0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1578f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1578f4:
    // 0x1578f4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1578f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1578f8:
    // 0x1578f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1578fc:
    if (ctx->pc == 0x1578FCu) {
        ctx->pc = 0x1578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F8u;
        // 0x1578fc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157900u;
        goto label_157900;
    }
    ctx->pc = 0x1578F8u;
    {
        const bool branch_taken_0x1578f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F8u;
        // 0x1578fc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f8) {
            ctx->pc = 0x157910u;
            goto label_157910;
        }
    }
    ctx->pc = 0x157900u;
label_157900:
    // 0x157900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_157904:
    if (ctx->pc == 0x157904u) {
        ctx->pc = 0x157904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157900u;
        // 0x157904: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157908u;
        goto label_157908;
    }
    ctx->pc = 0x157900u;
    {
        const bool branch_taken_0x157900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157900u;
        // 0x157904: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157900) {
            ctx->pc = 0x157914u;
            goto label_157914;
        }
    }
    ctx->pc = 0x157908u;
label_157908:
    // 0x157908: 0x10000011  b           . + 4 + (0x11 << 2)
label_15790c:
    if (ctx->pc == 0x15790Cu) {
        ctx->pc = 0x15790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157908u;
        // 0x15790c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157910u;
        goto label_157910;
    }
    ctx->pc = 0x157908u;
    {
        const bool branch_taken_0x157908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157908u;
        // 0x15790c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157908) {
            ctx->pc = 0x157950u;
            goto label_157950;
        }
    }
    ctx->pc = 0x157910u;
label_157910:
    // 0x157910: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x157910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_157914:
    // 0x157914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_157918:
    // 0x157918: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157918u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_15791c:
    // 0x15791c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15791cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_157920:
    // 0x157920: 0x82282d  daddu       $a1, $a0, $v0
    ctx->pc = 0x157920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_157924:
    // 0x157924: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x157924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
label_157928:
    // 0x157928: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_15792c:
    // 0x15792c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x15792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_157930:
    // 0x157930: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x157930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_157934:
    // 0x157934: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x157934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
label_157938:
    // 0x157938: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x157938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_15793c:
    // 0x15793c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x15793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_157940:
    // 0x157940: 0xc06d554  jal         func_1B5550
label_157944:
    if (ctx->pc == 0x157944u) {
        ctx->pc = 0x157944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157940u;
        // 0x157944: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157948u;
        goto label_157948;
    }
    ctx->pc = 0x157940u;
    SET_GPR_U32(ctx, 31, 0x157948u);
    ctx->pc = 0x157944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157940u;
    // 0x157944: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x157948u;
label_157948:
    // 0x157948: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_15794c:
    // 0x15794c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15794cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_157950:
    // 0x157950: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x157950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_157954:
    // 0x157954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157958:
    // 0x157958: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_15795c:
    // 0x15795c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_157960:
    // 0x157960: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x157960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_157964:
    // 0x157964: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x157964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_157968:
    // 0x157968: 0x0  nop
    ctx->pc = 0x157968u;
    // NOP
label_15796c:
    // 0x15796c: 0x0  nop
    ctx->pc = 0x15796cu;
    // NOP
label_157970:
    // 0x157970: 0x1010  mfhi        $v0
    ctx->pc = 0x157970u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_157974:
    // 0x157974: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x157974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_157978:
    // 0x157978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15797c:
    // 0x15797c: 0x3e00008  jr          $ra
label_157980:
    if (ctx->pc == 0x157980u) {
        ctx->pc = 0x157980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15797Cu;
        // 0x157980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157984u;
        goto label_157984;
    }
    ctx->pc = 0x15797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15797Cu;
        // 0x157980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157984u;
label_157984:
    // 0x157984: 0x0  nop
    ctx->pc = 0x157984u;
    // NOP
label_157988:
    // 0x157988: 0x0  nop
    ctx->pc = 0x157988u;
    // NOP
label_15798c:
    // 0x15798c: 0x0  nop
    ctx->pc = 0x15798cu;
    // NOP
label_157990:
    // 0x157990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_157994:
    // 0x157994: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157998:
    // 0x157998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15799c:
    // 0x15799c: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x15799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953392)));
label_1579a0:
    // 0x1579a0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1579a4:
    if (ctx->pc == 0x1579A4u) {
        ctx->pc = 0x1579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579A0u;
        // 0x1579a4: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579A8u;
        goto label_1579a8;
    }
    ctx->pc = 0x1579A0u;
    {
        const bool branch_taken_0x1579a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579A0u;
        // 0x1579a4: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579a0) {
            ctx->pc = 0x1579B4u;
            goto label_1579b4;
        }
    }
    ctx->pc = 0x1579A8u;
label_1579a8:
    // 0x1579a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1579ac:
    if (ctx->pc == 0x1579ACu) {
        ctx->pc = 0x1579B0u;
        goto label_1579b0;
    }
    ctx->pc = 0x1579A8u;
    {
        const bool branch_taken_0x1579a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579a8) {
            ctx->pc = 0x1579B4u;
            goto label_1579b4;
        }
    }
    ctx->pc = 0x1579B0u;
label_1579b0:
    // 0x1579b0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1579b4:
    // 0x1579b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1579b8:
    if (ctx->pc == 0x1579B8u) {
        ctx->pc = 0x1579B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B4u;
        // 0x1579b8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579BCu;
        goto label_1579bc;
    }
    ctx->pc = 0x1579B4u;
    {
        const bool branch_taken_0x1579b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B4u;
        // 0x1579b8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579b4) {
            ctx->pc = 0x1579D4u;
            goto label_1579d4;
        }
    }
    ctx->pc = 0x1579BCu;
label_1579bc:
    // 0x1579bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1579c0:
    // 0x1579c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1579c4:
    // 0x1579c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1579c8:
    if (ctx->pc == 0x1579C8u) {
        ctx->pc = 0x1579C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579C4u;
        // 0x1579c8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579CCu;
        goto label_1579cc;
    }
    ctx->pc = 0x1579C4u;
    {
        const bool branch_taken_0x1579c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579C4u;
        // 0x1579c8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579c4) {
            ctx->pc = 0x1579D8u;
            goto label_1579d8;
        }
    }
    ctx->pc = 0x1579CCu;
label_1579cc:
    // 0x1579cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1579d0:
    if (ctx->pc == 0x1579D0u) {
        ctx->pc = 0x1579D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579CCu;
        // 0x1579d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579D4u;
        goto label_1579d4;
    }
    ctx->pc = 0x1579CCu;
    {
        const bool branch_taken_0x1579cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1579D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579CCu;
        // 0x1579d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579cc) {
            ctx->pc = 0x157A18u;
            goto label_157a18;
        }
    }
    ctx->pc = 0x1579D4u;
label_1579d4:
    // 0x1579d4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1579d8:
    // 0x1579d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1579d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1579dc:
    // 0x1579dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1579dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1579e0:
    // 0x1579e0: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x1579e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
label_1579e4:
    // 0x1579e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1579e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1579e8:
    // 0x1579e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1579e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1579ec:
    // 0x1579ec: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1579ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1579f0:
    // 0x1579f0: 0x83282d  daddu       $a1, $a0, $v1
    ctx->pc = 0x1579f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_1579f4:
    // 0x1579f4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1579f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_1579f8:
    // 0x1579f8: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x1579f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1579fc:
    // 0x1579fc: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x1579fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
label_157a00:
    // 0x157a00: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x157a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_157a04:
    // 0x157a04: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x157a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_157a08:
    // 0x157a08: 0xc06d554  jal         func_1B5550
label_157a0c:
    if (ctx->pc == 0x157A0Cu) {
        ctx->pc = 0x157A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A08u;
        // 0x157a0c: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A10u;
        goto label_157a10;
    }
    ctx->pc = 0x157A08u;
    SET_GPR_U32(ctx, 31, 0x157A10u);
    ctx->pc = 0x157A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A08u;
    // 0x157a0c: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x157A10u;
label_157a10:
    // 0x157a10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_157a14:
    // 0x157a14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157a14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_157a18:
    // 0x157a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157a1c:
    // 0x157a1c: 0x3e00008  jr          $ra
label_157a20:
    if (ctx->pc == 0x157A20u) {
        ctx->pc = 0x157A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A1Cu;
        // 0x157a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A24u;
        goto label_157a24;
    }
    ctx->pc = 0x157A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A1Cu;
        // 0x157a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157A24u;
label_157a24:
    // 0x157a24: 0x0  nop
    ctx->pc = 0x157a24u;
    // NOP
label_157a28:
    // 0x157a28: 0x0  nop
    ctx->pc = 0x157a28u;
    // NOP
label_157a2c:
    // 0x157a2c: 0x0  nop
    ctx->pc = 0x157a2cu;
    // NOP
label_157a30:
    // 0x157a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_157a34:
    // 0x157a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x157a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_157a38:
    // 0x157a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_157a3c:
    // 0x157a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_157a40:
    // 0x157a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_157a44:
    // 0x157a44: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_157a48:
    if (ctx->pc == 0x157A48u) {
        ctx->pc = 0x157A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A44u;
        // 0x157a48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A4Cu;
        goto label_157a4c;
    }
    ctx->pc = 0x157A44u;
    {
        const bool branch_taken_0x157a44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A44u;
        // 0x157a48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a44) {
            ctx->pc = 0x157A5Cu;
            goto label_157a5c;
        }
    }
    ctx->pc = 0x157A4Cu;
label_157a4c:
    // 0x157a4c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_157a50:
    if (ctx->pc == 0x157A50u) {
        ctx->pc = 0x157A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A4Cu;
        // 0x157a50: 0x5903c  dsll32      $s2, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A54u;
        goto label_157a54;
    }
    ctx->pc = 0x157A4Cu;
    {
        const bool branch_taken_0x157a4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A4Cu;
        // 0x157a50: 0x5903c  dsll32      $s2, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a4c) {
            ctx->pc = 0x157A60u;
            goto label_157a60;
        }
    }
    ctx->pc = 0x157A54u;
label_157a54:
    // 0x157a54: 0x10000013  b           . + 4 + (0x13 << 2)
label_157a58:
    if (ctx->pc == 0x157A58u) {
        ctx->pc = 0x157A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A54u;
        // 0x157a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A5Cu;
        goto label_157a5c;
    }
    ctx->pc = 0x157A54u;
    {
        const bool branch_taken_0x157a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A54u;
        // 0x157a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a54) {
            ctx->pc = 0x157AA4u;
            goto label_157aa4;
        }
    }
    ctx->pc = 0x157A5Cu;
label_157a5c:
    // 0x157a5c: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x157a5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
label_157a60:
    // 0x157a60: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x157a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_157a64:
    // 0x157a64: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x157a64u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_157a68:
    // 0x157a68: 0x7883c  dsll32      $s1, $a3, 0
    ctx->pc = 0x157a68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) << (32 + 0));
label_157a6c:
    // 0x157a6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157a6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_157a70:
    // 0x157a70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157a74:
    // 0x157a74: 0xc06d536  jal         func_1B54D8
label_157a78:
    if (ctx->pc == 0x157A78u) {
        ctx->pc = 0x157A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A74u;
        // 0x157a78: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A7Cu;
        goto label_157a7c;
    }
    ctx->pc = 0x157A74u;
    SET_GPR_U32(ctx, 31, 0x157A7Cu);
    ctx->pc = 0x157A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A74u;
    // 0x157a78: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x157A7Cu;
label_157a7c:
    // 0x157a7c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x157a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_157a80:
    // 0x157a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157a84:
    // 0x157a84: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157a84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_157a88:
    // 0x157a88: 0xc06d536  jal         func_1B54D8
label_157a8c:
    if (ctx->pc == 0x157A8Cu) {
        ctx->pc = 0x157A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A88u;
        // 0x157a8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A90u;
        goto label_157a90;
    }
    ctx->pc = 0x157A88u;
    SET_GPR_U32(ctx, 31, 0x157A90u);
    ctx->pc = 0x157A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A88u;
    // 0x157a8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x157A90u;
label_157a90:
    // 0x157a90: 0x251282d  daddu       $a1, $s2, $s1
    ctx->pc = 0x157a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 17));
label_157a94:
    // 0x157a94: 0xc06d554  jal         func_1B5550
label_157a98:
    if (ctx->pc == 0x157A98u) {
        ctx->pc = 0x157A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A94u;
        // 0x157a98: 0x202202d  daddu       $a0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A9Cu;
        goto label_157a9c;
    }
    ctx->pc = 0x157A94u;
    SET_GPR_U32(ctx, 31, 0x157A9Cu);
    ctx->pc = 0x157A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A94u;
    // 0x157a98: 0x202202d  daddu       $a0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x157A9Cu;
label_157a9c:
    // 0x157a9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_157aa0:
    // 0x157aa0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_157aa4:
    // 0x157aa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x157aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_157aa8:
    // 0x157aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_157aac:
    // 0x157aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157ab0:
    // 0x157ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_157ab4:
    // 0x157ab4: 0x3e00008  jr          $ra
label_157ab8:
    if (ctx->pc == 0x157AB8u) {
        ctx->pc = 0x157AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AB4u;
        // 0x157ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157ABCu;
        goto label_157abc;
    }
    ctx->pc = 0x157AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AB4u;
        // 0x157ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157ABCu;
label_157abc:
    // 0x157abc: 0x0  nop
    ctx->pc = 0x157abcu;
    // NOP
label_157ac0:
    // 0x157ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x157ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_157ac4:
    // 0x157ac4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_157ac8:
    // 0x157ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_157acc:
    // 0x157acc: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x157accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157ad0:
    // 0x157ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_157ad4:
    // 0x157ad4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157ad8:
    // 0x157ad8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_157adc:
    // 0x157adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157ae0:
    // 0x157ae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157ae4:
    // 0x157ae4: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x157ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 3));
label_157ae8:
    // 0x157ae8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x157ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_157aec:
    // 0x157aec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157af0:
    // 0x157af0: 0x38820013  xori        $v0, $a0, 0x13
    ctx->pc = 0x157af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)19);
label_157af4:
    // 0x157af4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x157af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_157af8:
    // 0x157af8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x157af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_157afc:
    // 0x157afc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x157afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_157b00:
    // 0x157b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_157b04:
    // 0x157b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157b08:
    // 0x157b08: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
label_157b0c:
    // 0x157b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157b10:
    // 0x157b10: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_157b14:
    // 0x157b14: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x157b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_157b18:
    // 0x157b18: 0xa4224af4  sh          $v0, 0x4AF4($at)
    ctx->pc = 0x157b18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 2));
label_157b1c:
    // 0x157b1c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x157b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_157b20:
    // 0x157b20: 0xc07b1ac  jal         func_1EC6B0
label_157b24:
    if (ctx->pc == 0x157B24u) {
        ctx->pc = 0x157B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B20u;
        // 0x157b24: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B28u;
        goto label_157b28;
    }
    ctx->pc = 0x157B20u;
    SET_GPR_U32(ctx, 31, 0x157B28u);
    ctx->pc = 0x157B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B20u;
    // 0x157b24: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x157B28u;
label_157b28:
    // 0x157b28: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_157b2c:
    // 0x157b2c: 0xc05af64  jal         func_16BD90
label_157b30:
    if (ctx->pc == 0x157B30u) {
        ctx->pc = 0x157B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B2Cu;
        // 0x157b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B34u;
        goto label_157b34;
    }
    ctx->pc = 0x157B2Cu;
    SET_GPR_U32(ctx, 31, 0x157B34u);
    ctx->pc = 0x157B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B2Cu;
    // 0x157b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x157B34u;
label_157b34:
    // 0x157b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157b38:
    // 0x157b38: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_157b3c:
    // 0x157b3c: 0xc0867b0  jal         func_219EC0
label_157b40:
    if (ctx->pc == 0x157B40u) {
        ctx->pc = 0x157B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B3Cu;
        // 0x157b40: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B44u;
        goto label_157b44;
    }
    ctx->pc = 0x157B3Cu;
    SET_GPR_U32(ctx, 31, 0x157B44u);
    ctx->pc = 0x157B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B3Cu;
    // 0x157b40: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EC0u;
    { ctx->pc = 0x219ec0; return; }
    ctx->pc = 0x157B44u;
label_157b44:
    // 0x157b44: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_157b48:
    if (ctx->pc == 0x157B48u) {
        ctx->pc = 0x157B4Cu;
        goto label_157b4c;
    }
    ctx->pc = 0x157B44u;
    {
        const bool branch_taken_0x157b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b44) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157B4Cu;
label_157b4c:
    // 0x157b4c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_157b50:
    // 0x157b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157b54:
    // 0x157b54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x157b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_157b58:
    // 0x157b58: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_157b5c:
    // 0x157b5c: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_157b60:
    // 0x157b60: 0x27a9003c  addiu       $t1, $sp, 0x3C
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_157b64:
    // 0x157b64: 0xc079258  jal         func_1E4960
label_157b68:
    if (ctx->pc == 0x157B68u) {
        ctx->pc = 0x157B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B64u;
        // 0x157b68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B6Cu;
        goto label_157b6c;
    }
    ctx->pc = 0x157B64u;
    SET_GPR_U32(ctx, 31, 0x157B6Cu);
    ctx->pc = 0x157B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B64u;
    // 0x157b68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    { ctx->pc = 0x1e4960; return; }
    ctx->pc = 0x157B6Cu;
label_157b6c:
    // 0x157b6c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_157b70:
    if (ctx->pc == 0x157B70u) {
        ctx->pc = 0x157B74u;
        goto label_157b74;
    }
    ctx->pc = 0x157B6Cu;
    {
        const bool branch_taken_0x157b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b6c) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157B74u;
label_157b74:
    // 0x157b74: 0xc05af50  jal         func_16BD40
label_157b78:
    if (ctx->pc == 0x157B78u) {
        ctx->pc = 0x157B7Cu;
        goto label_157b7c;
    }
    ctx->pc = 0x157B74u;
    SET_GPR_U32(ctx, 31, 0x157B7Cu);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x157B7Cu;
label_157b7c:
    // 0x157b7c: 0xc05b1e0  jal         func_16C780
label_157b80:
    if (ctx->pc == 0x157B80u) {
        ctx->pc = 0x157B84u;
        goto label_157b84;
    }
    ctx->pc = 0x157B7Cu;
    SET_GPR_U32(ctx, 31, 0x157B84u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x157B84u;
label_157b84:
    // 0x157b84: 0xc05b578  jal         func_16D5E0
label_157b88:
    if (ctx->pc == 0x157B88u) {
        ctx->pc = 0x157B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B84u;
        // 0x157b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B8Cu;
        goto label_157b8c;
    }
    ctx->pc = 0x157B84u;
    SET_GPR_U32(ctx, 31, 0x157B8Cu);
    ctx->pc = 0x157B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B84u;
    // 0x157b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x157B8Cu;
label_157b8c:
    // 0x157b8c: 0xc051360  jal         func_144D80
label_157b90:
    if (ctx->pc == 0x157B90u) {
        ctx->pc = 0x157B94u;
        goto label_157b94;
    }
    ctx->pc = 0x157B8Cu;
    SET_GPR_U32(ctx, 31, 0x157B94u);
    ctx->pc = 0x144D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D80u, 0x157B8Cu, 0x157B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B94u;
label_157b94:
    // 0x157b94: 0x0  nop
    ctx->pc = 0x157b94u;
    // NOP
label_157b98:
    // 0x157b98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x157b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_157b9c:
    // 0x157b9c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x157b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_157ba0:
    // 0x157ba0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x157ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_157ba4:
    // 0x157ba4: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_157ba8:
    // 0x157ba8: 0xc056690  jal         func_159A40
label_157bac:
    if (ctx->pc == 0x157BACu) {
        ctx->pc = 0x157BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BA8u;
        // 0x157bac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BB0u;
        goto label_157bb0;
    }
    ctx->pc = 0x157BA8u;
    SET_GPR_U32(ctx, 31, 0x157BB0u);
    ctx->pc = 0x157BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BA8u;
    // 0x157bac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    { ctx->pc = 0x159a40; return; }
    ctx->pc = 0x157BB0u;
label_157bb0:
    // 0x157bb0: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_157bb4:
    // 0x157bb4: 0xc0568c0  jal         func_15A300
label_157bb8:
    if (ctx->pc == 0x157BB8u) {
        ctx->pc = 0x157BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BB4u;
        // 0x157bb8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BBCu;
        goto label_157bbc;
    }
    ctx->pc = 0x157BB4u;
    SET_GPR_U32(ctx, 31, 0x157BBCu);
    ctx->pc = 0x157BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BB4u;
    // 0x157bb8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    { ctx->pc = 0x15a300; return; }
    ctx->pc = 0x157BBCu;
label_157bbc:
    // 0x157bbc: 0xc051238  jal         func_1448E0
label_157bc0:
    if (ctx->pc == 0x157BC0u) {
        ctx->pc = 0x157BC4u;
        goto label_157bc4;
    }
    ctx->pc = 0x157BBCu;
    SET_GPR_U32(ctx, 31, 0x157BC4u);
    ctx->pc = 0x1448E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1448E0u, 0x157BBCu, 0x157BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BC4u;
label_157bc4:
    // 0x157bc4: 0xc0867a0  jal         func_219E80
label_157bc8:
    if (ctx->pc == 0x157BC8u) {
        ctx->pc = 0x157BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BC4u;
        // 0x157bc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BCCu;
        goto label_157bcc;
    }
    ctx->pc = 0x157BC4u;
    SET_GPR_U32(ctx, 31, 0x157BCCu);
    ctx->pc = 0x157BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BC4u;
    // 0x157bc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    { ctx->pc = 0x219e80; return; }
    ctx->pc = 0x157BCCu;
label_157bcc:
    // 0x157bcc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_157bd0:
    // 0x157bd0: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
label_157bd4:
    if (ctx->pc == 0x157BD4u) {
        ctx->pc = 0x157BD8u;
        goto label_157bd8;
    }
    ctx->pc = 0x157BD0u;
    {
        const bool branch_taken_0x157bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x157bd0) {
            ctx->pc = 0x157C94u;
            goto label_157c94;
        }
    }
    ctx->pc = 0x157BD8u;
label_157bd8:
    // 0x157bd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_157bdc:
    // 0x157bdc: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_157be0:
    if (ctx->pc == 0x157BE0u) {
        ctx->pc = 0x157BE4u;
        goto label_157be4;
    }
    ctx->pc = 0x157BDCu;
    {
        const bool branch_taken_0x157bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157bdc) {
            ctx->pc = 0x157C10u;
            goto label_157c10;
        }
    }
    ctx->pc = 0x157BE4u;
label_157be4:
    // 0x157be4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x157be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_157be8:
    // 0x157be8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_157bec:
    // 0x157bec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_157bf0:
    if (ctx->pc == 0x157BF0u) {
        ctx->pc = 0x157BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BECu;
        // 0x157bf0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BF4u;
        goto label_157bf4;
    }
    ctx->pc = 0x157BECu;
    {
        const bool branch_taken_0x157bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BECu;
        // 0x157bf0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bec) {
            ctx->pc = 0x157BFCu;
            goto label_157bfc;
        }
    }
    ctx->pc = 0x157BF4u;
label_157bf4:
    // 0x157bf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_157bf8:
    if (ctx->pc == 0x157BF8u) {
        ctx->pc = 0x157BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF4u;
        // 0x157bf8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BFCu;
        goto label_157bfc;
    }
    ctx->pc = 0x157BF4u;
    {
        const bool branch_taken_0x157bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF4u;
        // 0x157bf8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf4) {
            ctx->pc = 0x157C08u;
            goto label_157c08;
        }
    }
    ctx->pc = 0x157BFCu;
label_157bfc:
    // 0x157bfc: 0x0  nop
    ctx->pc = 0x157bfcu;
    // NOP
label_157c00:
    // 0x157c00: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_157c04:
    // 0x157c04: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_157c08:
    // 0x157c08: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_157c0c:
    if (ctx->pc == 0x157C0Cu) {
        ctx->pc = 0x157C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C08u;
        // 0x157c0c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C10u;
        goto label_157c10;
    }
    ctx->pc = 0x157C08u;
    {
        const bool branch_taken_0x157c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C08u;
        // 0x157c0c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c08) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157C10u;
label_157c10:
    // 0x157c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157c14:
    // 0x157c14: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_157c18:
    if (ctx->pc == 0x157C18u) {
        ctx->pc = 0x157C1Cu;
        goto label_157c1c;
    }
    ctx->pc = 0x157C14u;
    {
        const bool branch_taken_0x157c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157c14) {
            ctx->pc = 0x157C24u;
            goto label_157c24;
        }
    }
    ctx->pc = 0x157C1Cu;
label_157c1c:
    // 0x157c1c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
label_157c20:
    if (ctx->pc == 0x157C20u) {
        ctx->pc = 0x157C24u;
        goto label_157c24;
    }
    ctx->pc = 0x157C1Cu;
    {
        const bool branch_taken_0x157c1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x157c1c) {
            ctx->pc = 0x157C40u;
            goto label_157c40;
        }
    }
    ctx->pc = 0x157C24u;
label_157c24:
    // 0x157c24: 0x0  nop
    ctx->pc = 0x157c24u;
    // NOP
label_157c28:
    // 0x157c28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_157c2c:
    // 0x157c2c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_157c30:
    // 0x157c30: 0xc051360  jal         func_144D80
label_157c34:
    if (ctx->pc == 0x157C34u) {
        ctx->pc = 0x157C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C30u;
        // 0x157c34: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C38u;
        goto label_157c38;
    }
    ctx->pc = 0x157C30u;
    SET_GPR_U32(ctx, 31, 0x157C38u);
    ctx->pc = 0x157C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C30u;
    // 0x157c34: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D80u, 0x157C30u, 0x157C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C38u;
label_157c38:
    // 0x157c38: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
label_157c3c:
    if (ctx->pc == 0x157C3Cu) {
        ctx->pc = 0x157C40u;
        goto label_157c40;
    }
    ctx->pc = 0x157C38u;
    {
        const bool branch_taken_0x157c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c38) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157C40u;
label_157c40:
    // 0x157c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157c44:
    // 0x157c44: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_157c48:
    if (ctx->pc == 0x157C48u) {
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C4Cu;
        goto label_157c4c;
    }
    ctx->pc = 0x157C44u;
    {
        const bool branch_taken_0x157c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c44) {
            ctx->pc = 0x157C54u;
            goto label_157c54;
        }
    }
    ctx->pc = 0x157C4Cu;
label_157c4c:
    // 0x157c4c: 0x16020029  bne         $s0, $v0, . + 4 + (0x29 << 2)
label_157c50:
    if (ctx->pc == 0x157C50u) {
        ctx->pc = 0x157C54u;
        goto label_157c54;
    }
    ctx->pc = 0x157C4Cu;
    {
        const bool branch_taken_0x157c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157c4c) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157C54u;
label_157c54:
    // 0x157c54: 0x0  nop
    ctx->pc = 0x157c54u;
    // NOP
label_157c58:
    // 0x157c58: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157c5c:
    // 0x157c5c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x157c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_157c60:
    // 0x157c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157c64:
    // 0x157c64: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x157c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_157c68:
    // 0x157c68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157c6c:
    // 0x157c6c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x157c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_157c70:
    // 0x157c70: 0xc07b1ac  jal         func_1EC6B0
label_157c74:
    if (ctx->pc == 0x157C74u) {
        ctx->pc = 0x157C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C70u;
        // 0x157c74: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C78u;
        goto label_157c78;
    }
    ctx->pc = 0x157C70u;
    SET_GPR_U32(ctx, 31, 0x157C78u);
    ctx->pc = 0x157C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C70u;
    // 0x157c74: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x157C78u;
label_157c78:
    // 0x157c78: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_157c7c:
    // 0x157c7c: 0xc05af64  jal         func_16BD90
label_157c80:
    if (ctx->pc == 0x157C80u) {
        ctx->pc = 0x157C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C7Cu;
        // 0x157c80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C84u;
        goto label_157c84;
    }
    ctx->pc = 0x157C7Cu;
    SET_GPR_U32(ctx, 31, 0x157C84u);
    ctx->pc = 0x157C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C7Cu;
    // 0x157c80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x157C84u;
label_157c84:
    // 0x157c84: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_157c88:
    // 0x157c88: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x157c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_157c8c:
    // 0x157c8c: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
label_157c90:
    if (ctx->pc == 0x157C90u) {
        ctx->pc = 0x157C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C8Cu;
        // 0x157c90: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C94u;
        goto label_157c94;
    }
    ctx->pc = 0x157C8Cu;
    {
        const bool branch_taken_0x157c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C8Cu;
        // 0x157c90: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c8c) {
            ctx->pc = 0x157B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b4c;
        }
    }
    ctx->pc = 0x157C94u;
label_157c94:
    // 0x157c94: 0x0  nop
    ctx->pc = 0x157c94u;
    // NOP
label_157c98:
    // 0x157c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157c9c:
    // 0x157c9c: 0x1202ffbd  beq         $s0, $v0, . + 4 + (-0x43 << 2)
label_157ca0:
    if (ctx->pc == 0x157CA0u) {
        ctx->pc = 0x157CA4u;
        goto label_157ca4;
    }
    ctx->pc = 0x157C9Cu;
    {
        const bool branch_taken_0x157c9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157c9c) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157CA4u;
label_157ca4:
    // 0x157ca4: 0x1203ffbb  beq         $s0, $v1, . + 4 + (-0x45 << 2)
label_157ca8:
    if (ctx->pc == 0x157CA8u) {
        ctx->pc = 0x157CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CA4u;
        // 0x157ca8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CACu;
        goto label_157cac;
    }
    ctx->pc = 0x157CA4u;
    {
        const bool branch_taken_0x157ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x157CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CA4u;
        // 0x157ca8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ca4) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157CACu;
label_157cac:
    // 0x157cac: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_157cb0:
    if (ctx->pc == 0x157CB0u) {
        ctx->pc = 0x157CB4u;
        goto label_157cb4;
    }
    ctx->pc = 0x157CACu;
    {
        const bool branch_taken_0x157cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157cac) {
            ctx->pc = 0x157CC0u;
            goto label_157cc0;
        }
    }
    ctx->pc = 0x157CB4u;
label_157cb4:
    // 0x157cb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x157cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_157cb8:
    // 0x157cb8: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_157cbc:
    if (ctx->pc == 0x157CBCu) {
        ctx->pc = 0x157CC0u;
        goto label_157cc0;
    }
    ctx->pc = 0x157CB8u;
    {
        const bool branch_taken_0x157cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157cb8) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157CC0u;
label_157cc0:
    // 0x157cc0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157cc4:
    // 0x157cc4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x157cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_157cc8:
    // 0x157cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157ccc:
    // 0x157ccc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x157cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_157cd0:
    // 0x157cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157cd4:
    // 0x157cd4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x157cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_157cd8:
    // 0x157cd8: 0xc07b1ac  jal         func_1EC6B0
label_157cdc:
    if (ctx->pc == 0x157CDCu) {
        ctx->pc = 0x157CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CD8u;
        // 0x157cdc: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CE0u;
        goto label_157ce0;
    }
    ctx->pc = 0x157CD8u;
    SET_GPR_U32(ctx, 31, 0x157CE0u);
    ctx->pc = 0x157CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CD8u;
    // 0x157cdc: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x157CE0u;
label_157ce0:
    // 0x157ce0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_157ce4:
    // 0x157ce4: 0xc05af64  jal         func_16BD90
label_157ce8:
    if (ctx->pc == 0x157CE8u) {
        ctx->pc = 0x157CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CE4u;
        // 0x157ce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CECu;
        goto label_157cec;
    }
    ctx->pc = 0x157CE4u;
    SET_GPR_U32(ctx, 31, 0x157CECu);
    ctx->pc = 0x157CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CE4u;
    // 0x157ce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x157CECu;
label_157cec:
    // 0x157cec: 0x1000ff98  b           . + 4 + (-0x68 << 2)
label_157cf0:
    if (ctx->pc == 0x157CF0u) {
        ctx->pc = 0x157CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CECu;
        // 0x157cf0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CF4u;
        goto label_157cf4;
    }
    ctx->pc = 0x157CECu;
    {
        const bool branch_taken_0x157cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CECu;
        // 0x157cf0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cec) {
            ctx->pc = 0x157B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b50;
        }
    }
    ctx->pc = 0x157CF4u;
label_157cf4:
    // 0x157cf4: 0x0  nop
    ctx->pc = 0x157cf4u;
    // NOP
label_157cf8:
    // 0x157cf8: 0xc05af50  jal         func_16BD40
label_157cfc:
    if (ctx->pc == 0x157CFCu) {
        ctx->pc = 0x157D00u;
        goto label_157d00;
    }
    ctx->pc = 0x157CF8u;
    SET_GPR_U32(ctx, 31, 0x157D00u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x157D00u;
label_157d00:
    // 0x157d00: 0xc05b1e0  jal         func_16C780
label_157d04:
    if (ctx->pc == 0x157D04u) {
        ctx->pc = 0x157D08u;
        goto label_157d08;
    }
    ctx->pc = 0x157D00u;
    SET_GPR_U32(ctx, 31, 0x157D08u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x157D08u;
label_157d08:
    // 0x157d08: 0xc05b578  jal         func_16D5E0
label_157d0c:
    if (ctx->pc == 0x157D0Cu) {
        ctx->pc = 0x157D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D08u;
        // 0x157d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D10u;
        goto label_157d10;
    }
    ctx->pc = 0x157D08u;
    SET_GPR_U32(ctx, 31, 0x157D10u);
    ctx->pc = 0x157D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D08u;
    // 0x157d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x157D10u;
label_157d10:
    // 0x157d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_157d14:
    // 0x157d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_157d18:
    // 0x157d18: 0x3e00008  jr          $ra
label_157d1c:
    if (ctx->pc == 0x157D1Cu) {
        ctx->pc = 0x157D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D18u;
        // 0x157d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D20u;
        goto label_157d20;
    }
    ctx->pc = 0x157D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D18u;
        // 0x157d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157D20u;
label_157d20:
    // 0x157d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_157d24:
    // 0x157d24: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_157d28:
    // 0x157d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_157d2c:
    // 0x157d2c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157d30:
    // 0x157d30: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x157d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_157d34:
    // 0x157d34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157d38:
    // 0x157d38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157d3c:
    // 0x157d3c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x157d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_157d40:
    // 0x157d40: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x157d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_157d44:
    // 0x157d44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157d48:
    // 0x157d48: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x157d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_157d4c:
    // 0x157d4c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x157d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_157d50:
    // 0x157d50: 0xa4224af4  sh          $v0, 0x4AF4($at)
    ctx->pc = 0x157d50u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 2));
label_157d54:
    // 0x157d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157d58:
    // 0x157d58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157d5c:
    // 0x157d5c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x157d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_157d60:
    // 0x157d60: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x157d60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 3));
label_157d64:
    // 0x157d64: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x157d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_157d68:
    // 0x157d68: 0xaf80863c  sw          $zero, -0x79C4($gp)
    ctx->pc = 0x157d68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 0));
label_157d6c:
    // 0x157d6c: 0xc07b1ac  jal         func_1EC6B0
label_157d70:
    if (ctx->pc == 0x157D70u) {
        ctx->pc = 0x157D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D6Cu;
        // 0x157d70: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D74u;
        goto label_157d74;
    }
    ctx->pc = 0x157D6Cu;
    SET_GPR_U32(ctx, 31, 0x157D74u);
    ctx->pc = 0x157D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D6Cu;
    // 0x157d70: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x157D74u;
label_157d74:
    // 0x157d74: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_157d78:
    // 0x157d78: 0xc05af64  jal         func_16BD90
label_157d7c:
    if (ctx->pc == 0x157D7Cu) {
        ctx->pc = 0x157D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D78u;
        // 0x157d7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D80u;
        goto label_157d80;
    }
    ctx->pc = 0x157D78u;
    SET_GPR_U32(ctx, 31, 0x157D80u);
    ctx->pc = 0x157D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D78u;
    // 0x157d7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x157D80u;
label_157d80:
    // 0x157d80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_157d84:
    // 0x157d84: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_157d88:
    // 0x157d88: 0xc078388  jal         func_1E0E20
label_157d8c:
    if (ctx->pc == 0x157D8Cu) {
        ctx->pc = 0x157D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D88u;
        // 0x157d8c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D90u;
        goto label_157d90;
    }
    ctx->pc = 0x157D88u;
    SET_GPR_U32(ctx, 31, 0x157D90u);
    ctx->pc = 0x157D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D88u;
    // 0x157d8c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E20u;
    { ctx->pc = 0x1e0e20; return; }
    ctx->pc = 0x157D90u;
label_157d90:
    // 0x157d90: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_157d94:
    if (ctx->pc == 0x157D94u) {
        ctx->pc = 0x157D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D90u;
        // 0x157d94: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D98u;
        goto label_157d98;
    }
    ctx->pc = 0x157D90u;
    {
        const bool branch_taken_0x157d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D90u;
        // 0x157d94: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d90) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157D98u;
label_157d98:
    // 0x157d98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157d9c:
    // 0x157d9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x157d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_157da0:
    // 0x157da0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x157da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_157da4:
    // 0x157da4: 0x27a80028  addiu       $t0, $sp, 0x28
    ctx->pc = 0x157da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_157da8:
    // 0x157da8: 0x27a9002c  addiu       $t1, $sp, 0x2C
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_157dac:
    // 0x157dac: 0xc079258  jal         func_1E4960
label_157db0:
    if (ctx->pc == 0x157DB0u) {
        ctx->pc = 0x157DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DACu;
        // 0x157db0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157DB4u;
        goto label_157db4;
    }
    ctx->pc = 0x157DACu;
    SET_GPR_U32(ctx, 31, 0x157DB4u);
    ctx->pc = 0x157DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DACu;
    // 0x157db0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    { ctx->pc = 0x1e4960; return; }
    ctx->pc = 0x157DB4u;
label_157db4:
    // 0x157db4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_157db8:
    if (ctx->pc == 0x157DB8u) {
        ctx->pc = 0x157DBCu;
        goto label_157dbc;
    }
    ctx->pc = 0x157DB4u;
    {
        const bool branch_taken_0x157db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157db4) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DBCu;
label_157dbc:
    // 0x157dbc: 0xc05af50  jal         func_16BD40
label_157dc0:
    if (ctx->pc == 0x157DC0u) {
        ctx->pc = 0x157DC4u;
        goto label_157dc4;
    }
    ctx->pc = 0x157DBCu;
    SET_GPR_U32(ctx, 31, 0x157DC4u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x157DC4u;
label_157dc4:
    // 0x157dc4: 0xc05b1e0  jal         func_16C780
label_157dc8:
    if (ctx->pc == 0x157DC8u) {
        ctx->pc = 0x157DCCu;
        goto label_157dcc;
    }
    ctx->pc = 0x157DC4u;
    SET_GPR_U32(ctx, 31, 0x157DCCu);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x157DCCu;
label_157dcc:
    // 0x157dcc: 0xc05b578  jal         func_16D5E0
label_157dd0:
    if (ctx->pc == 0x157DD0u) {
        ctx->pc = 0x157DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DCCu;
        // 0x157dd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157DD4u;
        goto label_157dd4;
    }
    ctx->pc = 0x157DCCu;
    SET_GPR_U32(ctx, 31, 0x157DD4u);
    ctx->pc = 0x157DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DCCu;
    // 0x157dd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x157DD4u;
label_157dd4:
    // 0x157dd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_157dd8:
    // 0x157dd8: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_157ddc:
    // 0x157ddc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x157ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_157de0:
    // 0x157de0: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x157de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_157de4:
    // 0x157de4: 0xc056690  jal         func_159A40
label_157de8:
    if (ctx->pc == 0x157DE8u) {
        ctx->pc = 0x157DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DE4u;
        // 0x157de8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157DECu;
        goto label_157dec;
    }
    ctx->pc = 0x157DE4u;
    SET_GPR_U32(ctx, 31, 0x157DECu);
    ctx->pc = 0x157DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DE4u;
    // 0x157de8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    { ctx->pc = 0x159a40; return; }
    ctx->pc = 0x157DECu;
label_157dec:
    // 0x157dec: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_157df0:
    // 0x157df0: 0xc0568c0  jal         func_15A300
label_157df4:
    if (ctx->pc == 0x157DF4u) {
        ctx->pc = 0x157DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DF0u;
        // 0x157df4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157DF8u;
        goto label_157df8;
    }
    ctx->pc = 0x157DF0u;
    SET_GPR_U32(ctx, 31, 0x157DF8u);
    ctx->pc = 0x157DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DF0u;
    // 0x157df4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    { ctx->pc = 0x15a300; return; }
    ctx->pc = 0x157DF8u;
label_157df8:
    // 0x157df8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_157dfc:
    // 0x157dfc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x157dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_157e00:
    // 0x157e00: 0xc051368  jal         func_144DA0
label_157e04:
    if (ctx->pc == 0x157E04u) {
        ctx->pc = 0x157E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E00u;
        // 0x157e04: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E08u;
        goto label_157e08;
    }
    ctx->pc = 0x157E00u;
    SET_GPR_U32(ctx, 31, 0x157E08u);
    ctx->pc = 0x157E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E00u;
    // 0x157e04: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144DA0u, 0x157E00u, 0x157E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E08u;
label_157e08:
    // 0x157e08: 0xc05af50  jal         func_16BD40
label_157e0c:
    if (ctx->pc == 0x157E0Cu) {
        ctx->pc = 0x157E10u;
        goto label_157e10;
    }
    ctx->pc = 0x157E08u;
    SET_GPR_U32(ctx, 31, 0x157E10u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x157E10u;
label_157e10:
    // 0x157e10: 0xc05b1e0  jal         func_16C780
label_157e14:
    if (ctx->pc == 0x157E14u) {
        ctx->pc = 0x157E18u;
        goto label_157e18;
    }
    ctx->pc = 0x157E10u;
    SET_GPR_U32(ctx, 31, 0x157E18u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x157E18u;
label_157e18:
    // 0x157e18: 0xc05b578  jal         func_16D5E0
label_157e1c:
    if (ctx->pc == 0x157E1Cu) {
        ctx->pc = 0x157E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E18u;
        // 0x157e1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E20u;
        goto label_157e20;
    }
    ctx->pc = 0x157E18u;
    SET_GPR_U32(ctx, 31, 0x157E20u);
    ctx->pc = 0x157E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E18u;
    // 0x157e1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x157E20u;
label_157e20:
    // 0x157e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157e24:
    // 0x157e24: 0x3e00008  jr          $ra
label_157e28:
    if (ctx->pc == 0x157E28u) {
        ctx->pc = 0x157E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E24u;
        // 0x157e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E2Cu;
        goto label_157e2c;
    }
    ctx->pc = 0x157E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E24u;
        // 0x157e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E2Cu;
label_157e2c:
    // 0x157e2c: 0x0  nop
    ctx->pc = 0x157e2cu;
    // NOP
label_157e30:
    // 0x157e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_157e34:
    // 0x157e34: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_157e38:
    // 0x157e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_157e3c:
    // 0x157e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_157e40:
    // 0x157e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_157e44:
    // 0x157e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157e48:
    // 0x157e48: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x157e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_157e4c:
    // 0x157e4c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x157e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157e50:
    // 0x157e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157e54:
    // 0x157e54: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x157e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_157e58:
    // 0x157e58: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x157e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_157e5c:
    // 0x157e5c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157e60:
    // 0x157e60: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x157e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_157e64:
    // 0x157e64: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x157e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_157e68:
    // 0x157e68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_157e6c:
    // 0x157e6c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_157e70:
    if (ctx->pc == 0x157E70u) {
        ctx->pc = 0x157E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E6Cu;
        // 0x157e70: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E74u;
        goto label_157e74;
    }
    ctx->pc = 0x157E6Cu;
    {
        const bool branch_taken_0x157e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E6Cu;
        // 0x157e70: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e6c) {
            ctx->pc = 0x157E7Cu;
            goto label_157e7c;
        }
    }
    ctx->pc = 0x157E74u;
label_157e74:
    // 0x157e74: 0x10000005  b           . + 4 + (0x5 << 2)
label_157e78:
    if (ctx->pc == 0x157E78u) {
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E74u;
        // 0x157e78: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E7Cu;
        goto label_157e7c;
    }
    ctx->pc = 0x157E74u;
    {
        const bool branch_taken_0x157e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E74u;
        // 0x157e78: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e74) {
            ctx->pc = 0x157E8Cu;
            goto label_157e8c;
        }
    }
    ctx->pc = 0x157E7Cu;
label_157e7c:
    // 0x157e7c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_157e80:
    // 0x157e80: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_157e84:
    if (ctx->pc == 0x157E84u) {
        ctx->pc = 0x157E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E80u;
        // 0x157e84: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157E88u;
        goto label_157e88;
    }
    ctx->pc = 0x157E80u;
    {
        const bool branch_taken_0x157e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E80u;
        // 0x157e84: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e80) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E88u;
label_157e88:
    // 0x157e88: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_157e8c:
    // 0x157e8c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157e90:
    // 0x157e90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157e94:
    // 0x157e94: 0xa0224af6  sb          $v0, 0x4AF6($at)
    ctx->pc = 0x157e94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 2));
label_157e98:
    // 0x157e98: 0x3a23000f  xori        $v1, $s1, 0xF
    ctx->pc = 0x157e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)15);
label_157e9c:
    // 0x157e9c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x157e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_157ea0:
    // 0x157ea0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157ea4:
    // 0x157ea4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_157ea8:
    // 0x157ea8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_157eac:
    // 0x157eac: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
label_157eb0:
    // 0x157eb0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_157eb4:
    // 0x157eb4: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_157eb8:
    if (ctx->pc == 0x157EB8u) {
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB4u;
        // 0x157eb8: 0xa4234af4  sh          $v1, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EBCu;
        goto label_157ebc;
    }
    ctx->pc = 0x157EB4u;
    {
        const bool branch_taken_0x157eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB4u;
        // 0x157eb8: 0xa4234af4  sh          $v1, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb4) {
            ctx->pc = 0x157EC8u;
            goto label_157ec8;
        }
    }
    ctx->pc = 0x157EBCu;
label_157ebc:
    // 0x157ebc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_157ec0:
    // 0x157ec0: 0x16220047  bne         $s1, $v0, . + 4 + (0x47 << 2)
label_157ec4:
    if (ctx->pc == 0x157EC4u) {
        ctx->pc = 0x157EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EC0u;
        // 0x157ec4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EC8u;
        goto label_157ec8;
    }
    ctx->pc = 0x157EC0u;
    {
        const bool branch_taken_0x157ec0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EC0u;
        // 0x157ec4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ec0) {
            ctx->pc = 0x157FE0u;
            goto label_157fe0;
        }
    }
    ctx->pc = 0x157EC8u;
label_157ec8:
    // 0x157ec8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_157ecc:
    // 0x157ecc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_157ed0:
    if (ctx->pc == 0x157ED0u) {
        ctx->pc = 0x157ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ECCu;
        // 0x157ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157ED4u;
        goto label_157ed4;
    }
    ctx->pc = 0x157ECCu;
    {
        const bool branch_taken_0x157ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ECCu;
        // 0x157ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ecc) {
            ctx->pc = 0x157EE0u;
            goto label_157ee0;
        }
    }
    ctx->pc = 0x157ED4u;
label_157ed4:
    // 0x157ed4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_157ed8:
    // 0x157ed8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_157edc:
    if (ctx->pc == 0x157EDCu) {
        ctx->pc = 0x157EE0u;
        goto label_157ee0;
    }
    ctx->pc = 0x157ED8u;
    {
        const bool branch_taken_0x157ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157ed8) {
            ctx->pc = 0x157EF0u;
            goto label_157ef0;
        }
    }
    ctx->pc = 0x157EE0u;
label_157ee0:
    // 0x157ee0: 0xc07b1ac  jal         func_1EC6B0
label_157ee4:
    if (ctx->pc == 0x157EE4u) {
        ctx->pc = 0x157EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE0u;
        // 0x157ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EE8u;
        goto label_157ee8;
    }
    ctx->pc = 0x157EE0u;
    SET_GPR_U32(ctx, 31, 0x157EE8u);
    ctx->pc = 0x157EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EE0u;
    // 0x157ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x157EE8u;
label_157ee8:
    // 0x157ee8: 0x10000005  b           . + 4 + (0x5 << 2)
label_157eec:
    if (ctx->pc == 0x157EECu) {
        ctx->pc = 0x157EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE8u;
        // 0x157eec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EF0u;
        goto label_157ef0;
    }
    ctx->pc = 0x157EE8u;
    {
        const bool branch_taken_0x157ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE8u;
        // 0x157eec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ee8) {
            ctx->pc = 0x157F00u;
            goto label_157f00;
        }
    }
    ctx->pc = 0x157EF0u;
label_157ef0:
    // 0x157ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157ef4:
    // 0x157ef4: 0xc07b1ac  jal         func_1EC6B0
label_157ef8:
    if (ctx->pc == 0x157EF8u) {
        ctx->pc = 0x157EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EF4u;
        // 0x157ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EFCu;
        goto label_157efc;
    }
    ctx->pc = 0x157EF4u;
    SET_GPR_U32(ctx, 31, 0x157EFCu);
    ctx->pc = 0x157EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EF4u;
    // 0x157ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x157EFCu;
label_157efc:
    // 0x157efc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_157f00:
    // 0x157f00: 0xc05af64  jal         func_16BD90
label_157f04:
    if (ctx->pc == 0x157F04u) {
        ctx->pc = 0x157F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F00u;
        // 0x157f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F08u;
        goto label_157f08;
    }
    ctx->pc = 0x157F00u;
    SET_GPR_U32(ctx, 31, 0x157F08u);
    ctx->pc = 0x157F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F00u;
    // 0x157f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x157F08u;
label_157f08:
    // 0x157f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157f0c:
    // 0x157f0c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_157f10:
    // 0x157f10: 0xc078388  jal         func_1E0E20
label_157f14:
    if (ctx->pc == 0x157F14u) {
        ctx->pc = 0x157F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F10u;
        // 0x157f14: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F18u;
        goto label_157f18;
    }
    ctx->pc = 0x157F10u;
    SET_GPR_U32(ctx, 31, 0x157F18u);
    ctx->pc = 0x157F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F10u;
    // 0x157f14: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E20u;
    { ctx->pc = 0x1e0e20; return; }
    ctx->pc = 0x157F18u;
label_157f18:
    // 0x157f18: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_157f1c:
    if (ctx->pc == 0x157F1Cu) {
        ctx->pc = 0x157F20u;
        goto label_157f20;
    }
    ctx->pc = 0x157F18u;
    {
        const bool branch_taken_0x157f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f18) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157F20u;
label_157f20:
    // 0x157f20: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_157f24:
    // 0x157f24: 0xc056fe0  jal         func_15BF80
label_157f28:
    if (ctx->pc == 0x157F28u) {
        ctx->pc = 0x157F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F24u;
        // 0x157f28: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F2Cu;
        goto label_157f2c;
    }
    ctx->pc = 0x157F24u;
    SET_GPR_U32(ctx, 31, 0x157F2Cu);
    ctx->pc = 0x157F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F24u;
    // 0x157f28: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF80u;
    { ctx->pc = 0x15bf80; return; }
    ctx->pc = 0x157F2Cu;
label_157f2c:
    // 0x157f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157f30:
    // 0x157f30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157f34:
    // 0x157f34: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x157f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_157f38:
    // 0x157f38: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_157f3c:
    // 0x157f3c: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x157f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_157f40:
    // 0x157f40: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_157f44:
    // 0x157f44: 0xc079258  jal         func_1E4960
label_157f48:
    if (ctx->pc == 0x157F48u) {
        ctx->pc = 0x157F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F44u;
        // 0x157f48: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F4Cu;
        goto label_157f4c;
    }
    ctx->pc = 0x157F44u;
    SET_GPR_U32(ctx, 31, 0x157F4Cu);
    ctx->pc = 0x157F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F44u;
    // 0x157f48: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    { ctx->pc = 0x1e4960; return; }
    ctx->pc = 0x157F4Cu;
label_157f4c:
    // 0x157f4c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_157f50:
    if (ctx->pc == 0x157F50u) {
        ctx->pc = 0x157F54u;
        goto label_157f54;
    }
    ctx->pc = 0x157F4Cu;
    {
        const bool branch_taken_0x157f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f4c) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157F54u;
label_157f54:
    // 0x157f54: 0xc05af50  jal         func_16BD40
label_157f58:
    if (ctx->pc == 0x157F58u) {
        ctx->pc = 0x157F5Cu;
        goto label_157f5c;
    }
    ctx->pc = 0x157F54u;
    SET_GPR_U32(ctx, 31, 0x157F5Cu);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x157F5Cu;
label_157f5c:
    // 0x157f5c: 0xc05b1e0  jal         func_16C780
label_157f60:
    if (ctx->pc == 0x157F60u) {
        ctx->pc = 0x157F64u;
        goto label_157f64;
    }
    ctx->pc = 0x157F5Cu;
    SET_GPR_U32(ctx, 31, 0x157F64u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x157F64u;
label_157f64:
    // 0x157f64: 0xc05b578  jal         func_16D5E0
label_157f68:
    if (ctx->pc == 0x157F68u) {
        ctx->pc = 0x157F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F64u;
        // 0x157f68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F6Cu;
        goto label_157f6c;
    }
    ctx->pc = 0x157F64u;
    SET_GPR_U32(ctx, 31, 0x157F6Cu);
    ctx->pc = 0x157F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F64u;
    // 0x157f68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x157F6Cu;
label_157f6c:
    // 0x157f6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_157f70:
    // 0x157f70: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_157f74:
    if (ctx->pc == 0x157F74u) {
        ctx->pc = 0x157F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F70u;
        // 0x157f74: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F78u;
        goto label_157f78;
    }
    ctx->pc = 0x157F70u;
    {
        const bool branch_taken_0x157f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F70u;
        // 0x157f74: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f70) {
            ctx->pc = 0x157F80u;
            goto label_157f80;
        }
    }
    ctx->pc = 0x157F78u;
label_157f78:
    // 0x157f78: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_157f7c:
    if (ctx->pc == 0x157F7Cu) {
        ctx->pc = 0x157F80u;
        goto label_157f80;
    }
    ctx->pc = 0x157F78u;
    {
        const bool branch_taken_0x157f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157f78) {
            ctx->pc = 0x157FACu;
            goto label_157fac;
        }
    }
    ctx->pc = 0x157F80u;
label_157f80:
    // 0x157f80: 0x83a20044  lb          $v0, 0x44($sp)
    ctx->pc = 0x157f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
label_157f84:
    // 0x157f84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_157f88:
    // 0x157f88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_157f8c:
    // 0x157f8c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157f90:
    // 0x157f90: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_157f94:
    // 0x157f94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157f98:
    // 0x157f98: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x157f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_157f9c:
    // 0x157f9c: 0xc056690  jal         func_159A40
label_157fa0:
    if (ctx->pc == 0x157FA0u) {
        ctx->pc = 0x157FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F9Cu;
        // 0x157fa0: 0xa0224af6  sb          $v0, 0x4AF6($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FA4u;
        goto label_157fa4;
    }
    ctx->pc = 0x157F9Cu;
    SET_GPR_U32(ctx, 31, 0x157FA4u);
    ctx->pc = 0x157FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F9Cu;
    // 0x157fa0: 0xa0224af6  sb          $v0, 0x4AF6($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    { ctx->pc = 0x159a40; return; }
    ctx->pc = 0x157FA4u;
label_157fa4:
    // 0x157fa4: 0x10000008  b           . + 4 + (0x8 << 2)
label_157fa8:
    if (ctx->pc == 0x157FA8u) {
        ctx->pc = 0x157FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FA4u;
        // 0x157fa8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FACu;
        goto label_157fac;
    }
    ctx->pc = 0x157FA4u;
    {
        const bool branch_taken_0x157fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FA4u;
        // 0x157fa8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fa4) {
            ctx->pc = 0x157FC8u;
            goto label_157fc8;
        }
    }
    ctx->pc = 0x157FACu;
label_157fac:
    // 0x157fac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_157fb0:
    // 0x157fb0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_157fb4:
    // 0x157fb4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_157fb8:
    // 0x157fb8: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_157fbc:
    // 0x157fbc: 0xc056690  jal         func_159A40
label_157fc0:
    if (ctx->pc == 0x157FC0u) {
        ctx->pc = 0x157FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FBCu;
        // 0x157fc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FC4u;
        goto label_157fc4;
    }
    ctx->pc = 0x157FBCu;
    SET_GPR_U32(ctx, 31, 0x157FC4u);
    ctx->pc = 0x157FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FBCu;
    // 0x157fc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    { ctx->pc = 0x159a40; return; }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_157fc8:
    // 0x157fc8: 0xc0568c0  jal         func_15A300
label_157fcc:
    if (ctx->pc == 0x157FCCu) {
        ctx->pc = 0x157FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FC8u;
        // 0x157fcc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FD0u;
        goto label_157fd0;
    }
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FC8u;
    // 0x157fcc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    { ctx->pc = 0x15a300; return; }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0xc05139c  jal         func_144E70
label_157fd4:
    if (ctx->pc == 0x157FD4u) {
        ctx->pc = 0x157FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FD0u;
        // 0x157fd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FD8u;
        goto label_157fd8;
    }
    ctx->pc = 0x157FD0u;
    SET_GPR_U32(ctx, 31, 0x157FD8u);
    ctx->pc = 0x157FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FD0u;
    // 0x157fd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E70u, 0x157FD0u, 0x157FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD8u;
label_157fd8:
    // 0x157fd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_157fdc:
    if (ctx->pc == 0x157FDCu) {
        ctx->pc = 0x157FE0u;
        goto label_157fe0;
    }
    ctx->pc = 0x157FD8u;
    {
        const bool branch_taken_0x157fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fd8) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157FE0u;
label_157fe0:
    // 0x157fe0: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_157fe4:
    if (ctx->pc == 0x157FE4u) {
        ctx->pc = 0x157FE8u;
        goto label_157fe8;
    }
    ctx->pc = 0x157FE0u;
    {
        const bool branch_taken_0x157fe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x157fe0) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157FE8u;
label_157fe8:
    // 0x157fe8: 0xc084900  jal         func_212400
label_157fec:
    if (ctx->pc == 0x157FECu) {
        ctx->pc = 0x157FF0u;
        goto label_157ff0;
    }
    ctx->pc = 0x157FE8u;
    SET_GPR_U32(ctx, 31, 0x157FF0u);
    ctx->pc = 0x212400u;
    { ctx->pc = 0x212400; return; }
    ctx->pc = 0x157FF0u;
label_157ff0:
    // 0x157ff0: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
label_157ff4:
    // 0x157ff4: 0xc05139c  jal         func_144E70
label_157ff8:
    if (ctx->pc == 0x157FF8u) {
        ctx->pc = 0x157FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FF4u;
        // 0x157ff8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FFCu;
        goto label_157ffc;
    }
    ctx->pc = 0x157FF4u;
    SET_GPR_U32(ctx, 31, 0x157FFCu);
    ctx->pc = 0x157FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FF4u;
    // 0x157ff8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E70u, 0x157FF4u, 0x157FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FFCu;
label_157ffc:
    // 0x157ffc: 0xc05af50  jal         func_16BD40
label_158000:
    if (ctx->pc == 0x158000u) {
        ctx->pc = 0x158004u;
        goto label_158004;
    }
    ctx->pc = 0x157FFCu;
    SET_GPR_U32(ctx, 31, 0x158004u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x158004u;
label_158004:
    // 0x158004: 0xc05b1e0  jal         func_16C780
label_158008:
    if (ctx->pc == 0x158008u) {
        ctx->pc = 0x15800Cu;
        goto label_15800c;
    }
    ctx->pc = 0x158004u;
    SET_GPR_U32(ctx, 31, 0x15800Cu);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x15800Cu;
label_15800c:
    // 0x15800c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x158010u;
    return;
}
