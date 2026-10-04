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


void FUN_0014eba0_part17(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1568a0u: goto label_1568a0;
        case 0x1568a4u: goto label_1568a4;
        case 0x1568a8u: goto label_1568a8;
        case 0x1568acu: goto label_1568ac;
        case 0x1568b0u: goto label_1568b0;
        case 0x1568b4u: goto label_1568b4;
        case 0x1568b8u: goto label_1568b8;
        case 0x1568bcu: goto label_1568bc;
        case 0x1568c0u: goto label_1568c0;
        case 0x1568c4u: goto label_1568c4;
        case 0x1568c8u: goto label_1568c8;
        case 0x1568ccu: goto label_1568cc;
        case 0x1568d0u: goto label_1568d0;
        case 0x1568d4u: goto label_1568d4;
        case 0x1568d8u: goto label_1568d8;
        case 0x1568dcu: goto label_1568dc;
        case 0x1568e0u: goto label_1568e0;
        case 0x1568e4u: goto label_1568e4;
        case 0x1568e8u: goto label_1568e8;
        case 0x1568ecu: goto label_1568ec;
        case 0x1568f0u: goto label_1568f0;
        case 0x1568f4u: goto label_1568f4;
        case 0x1568f8u: goto label_1568f8;
        case 0x1568fcu: goto label_1568fc;
        case 0x156900u: goto label_156900;
        case 0x156904u: goto label_156904;
        case 0x156908u: goto label_156908;
        case 0x15690cu: goto label_15690c;
        case 0x156910u: goto label_156910;
        case 0x156914u: goto label_156914;
        case 0x156918u: goto label_156918;
        case 0x15691cu: goto label_15691c;
        case 0x156920u: goto label_156920;
        case 0x156924u: goto label_156924;
        case 0x156928u: goto label_156928;
        case 0x15692cu: goto label_15692c;
        case 0x156930u: goto label_156930;
        case 0x156934u: goto label_156934;
        case 0x156938u: goto label_156938;
        case 0x15693cu: goto label_15693c;
        case 0x156940u: goto label_156940;
        case 0x156944u: goto label_156944;
        case 0x156948u: goto label_156948;
        case 0x15694cu: goto label_15694c;
        case 0x156950u: goto label_156950;
        case 0x156954u: goto label_156954;
        case 0x156958u: goto label_156958;
        case 0x15695cu: goto label_15695c;
        case 0x156960u: goto label_156960;
        case 0x156964u: goto label_156964;
        case 0x156968u: goto label_156968;
        case 0x15696cu: goto label_15696c;
        case 0x156970u: goto label_156970;
        case 0x156974u: goto label_156974;
        case 0x156978u: goto label_156978;
        case 0x15697cu: goto label_15697c;
        case 0x156980u: goto label_156980;
        case 0x156984u: goto label_156984;
        case 0x156988u: goto label_156988;
        case 0x15698cu: goto label_15698c;
        case 0x156990u: goto label_156990;
        case 0x156994u: goto label_156994;
        case 0x156998u: goto label_156998;
        case 0x15699cu: goto label_15699c;
        case 0x1569a0u: goto label_1569a0;
        case 0x1569a4u: goto label_1569a4;
        case 0x1569a8u: goto label_1569a8;
        case 0x1569acu: goto label_1569ac;
        case 0x1569b0u: goto label_1569b0;
        case 0x1569b4u: goto label_1569b4;
        case 0x1569b8u: goto label_1569b8;
        case 0x1569bcu: goto label_1569bc;
        case 0x1569c0u: goto label_1569c0;
        case 0x1569c4u: goto label_1569c4;
        case 0x1569c8u: goto label_1569c8;
        case 0x1569ccu: goto label_1569cc;
        case 0x1569d0u: goto label_1569d0;
        case 0x1569d4u: goto label_1569d4;
        case 0x1569d8u: goto label_1569d8;
        case 0x1569dcu: goto label_1569dc;
        case 0x1569e0u: goto label_1569e0;
        case 0x1569e4u: goto label_1569e4;
        case 0x1569e8u: goto label_1569e8;
        case 0x1569ecu: goto label_1569ec;
        case 0x1569f0u: goto label_1569f0;
        case 0x1569f4u: goto label_1569f4;
        case 0x1569f8u: goto label_1569f8;
        case 0x1569fcu: goto label_1569fc;
        case 0x156a00u: goto label_156a00;
        case 0x156a04u: goto label_156a04;
        case 0x156a08u: goto label_156a08;
        case 0x156a0cu: goto label_156a0c;
        case 0x156a10u: goto label_156a10;
        case 0x156a14u: goto label_156a14;
        case 0x156a18u: goto label_156a18;
        case 0x156a1cu: goto label_156a1c;
        case 0x156a20u: goto label_156a20;
        case 0x156a24u: goto label_156a24;
        case 0x156a28u: goto label_156a28;
        case 0x156a2cu: goto label_156a2c;
        case 0x156a30u: goto label_156a30;
        case 0x156a34u: goto label_156a34;
        case 0x156a38u: goto label_156a38;
        case 0x156a3cu: goto label_156a3c;
        case 0x156a40u: goto label_156a40;
        case 0x156a44u: goto label_156a44;
        case 0x156a48u: goto label_156a48;
        case 0x156a4cu: goto label_156a4c;
        case 0x156a50u: goto label_156a50;
        case 0x156a54u: goto label_156a54;
        case 0x156a58u: goto label_156a58;
        case 0x156a5cu: goto label_156a5c;
        case 0x156a60u: goto label_156a60;
        case 0x156a64u: goto label_156a64;
        case 0x156a68u: goto label_156a68;
        case 0x156a6cu: goto label_156a6c;
        case 0x156a70u: goto label_156a70;
        case 0x156a74u: goto label_156a74;
        case 0x156a78u: goto label_156a78;
        case 0x156a7cu: goto label_156a7c;
        case 0x156a80u: goto label_156a80;
        case 0x156a84u: goto label_156a84;
        case 0x156a88u: goto label_156a88;
        case 0x156a8cu: goto label_156a8c;
        case 0x156a90u: goto label_156a90;
        case 0x156a94u: goto label_156a94;
        case 0x156a98u: goto label_156a98;
        case 0x156a9cu: goto label_156a9c;
        case 0x156aa0u: goto label_156aa0;
        case 0x156aa4u: goto label_156aa4;
        case 0x156aa8u: goto label_156aa8;
        case 0x156aacu: goto label_156aac;
        case 0x156ab0u: goto label_156ab0;
        case 0x156ab4u: goto label_156ab4;
        case 0x156ab8u: goto label_156ab8;
        case 0x156abcu: goto label_156abc;
        case 0x156ac0u: goto label_156ac0;
        case 0x156ac4u: goto label_156ac4;
        case 0x156ac8u: goto label_156ac8;
        case 0x156accu: goto label_156acc;
        case 0x156ad0u: goto label_156ad0;
        case 0x156ad4u: goto label_156ad4;
        case 0x156ad8u: goto label_156ad8;
        case 0x156adcu: goto label_156adc;
        case 0x156ae0u: goto label_156ae0;
        case 0x156ae4u: goto label_156ae4;
        case 0x156ae8u: goto label_156ae8;
        case 0x156aecu: goto label_156aec;
        case 0x156af0u: goto label_156af0;
        case 0x156af4u: goto label_156af4;
        case 0x156af8u: goto label_156af8;
        case 0x156afcu: goto label_156afc;
        case 0x156b00u: goto label_156b00;
        case 0x156b04u: goto label_156b04;
        case 0x156b08u: goto label_156b08;
        case 0x156b0cu: goto label_156b0c;
        case 0x156b10u: goto label_156b10;
        case 0x156b14u: goto label_156b14;
        case 0x156b18u: goto label_156b18;
        case 0x156b1cu: goto label_156b1c;
        case 0x156b20u: goto label_156b20;
        case 0x156b24u: goto label_156b24;
        case 0x156b28u: goto label_156b28;
        case 0x156b2cu: goto label_156b2c;
        case 0x156b30u: goto label_156b30;
        case 0x156b34u: goto label_156b34;
        case 0x156b38u: goto label_156b38;
        case 0x156b3cu: goto label_156b3c;
        case 0x156b40u: goto label_156b40;
        case 0x156b44u: goto label_156b44;
        case 0x156b48u: goto label_156b48;
        case 0x156b4cu: goto label_156b4c;
        case 0x156b50u: goto label_156b50;
        case 0x156b54u: goto label_156b54;
        case 0x156b58u: goto label_156b58;
        case 0x156b5cu: goto label_156b5c;
        case 0x156b60u: goto label_156b60;
        case 0x156b64u: goto label_156b64;
        case 0x156b68u: goto label_156b68;
        case 0x156b6cu: goto label_156b6c;
        case 0x156b70u: goto label_156b70;
        case 0x156b74u: goto label_156b74;
        case 0x156b78u: goto label_156b78;
        case 0x156b7cu: goto label_156b7c;
        case 0x156b80u: goto label_156b80;
        case 0x156b84u: goto label_156b84;
        case 0x156b88u: goto label_156b88;
        case 0x156b8cu: goto label_156b8c;
        case 0x156b90u: goto label_156b90;
        case 0x156b94u: goto label_156b94;
        case 0x156b98u: goto label_156b98;
        case 0x156b9cu: goto label_156b9c;
        case 0x156ba0u: goto label_156ba0;
        case 0x156ba4u: goto label_156ba4;
        case 0x156ba8u: goto label_156ba8;
        case 0x156bacu: goto label_156bac;
        case 0x156bb0u: goto label_156bb0;
        case 0x156bb4u: goto label_156bb4;
        case 0x156bb8u: goto label_156bb8;
        case 0x156bbcu: goto label_156bbc;
        case 0x156bc0u: goto label_156bc0;
        case 0x156bc4u: goto label_156bc4;
        case 0x156bc8u: goto label_156bc8;
        case 0x156bccu: goto label_156bcc;
        case 0x156bd0u: goto label_156bd0;
        case 0x156bd4u: goto label_156bd4;
        case 0x156bd8u: goto label_156bd8;
        case 0x156bdcu: goto label_156bdc;
        case 0x156be0u: goto label_156be0;
        case 0x156be4u: goto label_156be4;
        case 0x156be8u: goto label_156be8;
        case 0x156becu: goto label_156bec;
        case 0x156bf0u: goto label_156bf0;
        case 0x156bf4u: goto label_156bf4;
        case 0x156bf8u: goto label_156bf8;
        case 0x156bfcu: goto label_156bfc;
        case 0x156c00u: goto label_156c00;
        case 0x156c04u: goto label_156c04;
        case 0x156c08u: goto label_156c08;
        case 0x156c0cu: goto label_156c0c;
        case 0x156c10u: goto label_156c10;
        case 0x156c14u: goto label_156c14;
        case 0x156c18u: goto label_156c18;
        case 0x156c1cu: goto label_156c1c;
        case 0x156c20u: goto label_156c20;
        case 0x156c24u: goto label_156c24;
        case 0x156c28u: goto label_156c28;
        case 0x156c2cu: goto label_156c2c;
        case 0x156c30u: goto label_156c30;
        case 0x156c34u: goto label_156c34;
        case 0x156c38u: goto label_156c38;
        case 0x156c3cu: goto label_156c3c;
        case 0x156c40u: goto label_156c40;
        case 0x156c44u: goto label_156c44;
        case 0x156c48u: goto label_156c48;
        case 0x156c4cu: goto label_156c4c;
        case 0x156c50u: goto label_156c50;
        case 0x156c54u: goto label_156c54;
        case 0x156c58u: goto label_156c58;
        case 0x156c5cu: goto label_156c5c;
        case 0x156c60u: goto label_156c60;
        case 0x156c64u: goto label_156c64;
        case 0x156c68u: goto label_156c68;
        case 0x156c6cu: goto label_156c6c;
        case 0x156c70u: goto label_156c70;
        case 0x156c74u: goto label_156c74;
        case 0x156c78u: goto label_156c78;
        case 0x156c7cu: goto label_156c7c;
        case 0x156c80u: goto label_156c80;
        case 0x156c84u: goto label_156c84;
        case 0x156c88u: goto label_156c88;
        case 0x156c8cu: goto label_156c8c;
        case 0x156c90u: goto label_156c90;
        case 0x156c94u: goto label_156c94;
        case 0x156c98u: goto label_156c98;
        case 0x156c9cu: goto label_156c9c;
        case 0x156ca0u: goto label_156ca0;
        case 0x156ca4u: goto label_156ca4;
        case 0x156ca8u: goto label_156ca8;
        case 0x156cacu: goto label_156cac;
        case 0x156cb0u: goto label_156cb0;
        case 0x156cb4u: goto label_156cb4;
        case 0x156cb8u: goto label_156cb8;
        case 0x156cbcu: goto label_156cbc;
        case 0x156cc0u: goto label_156cc0;
        case 0x156cc4u: goto label_156cc4;
        case 0x156cc8u: goto label_156cc8;
        case 0x156cccu: goto label_156ccc;
        case 0x156cd0u: goto label_156cd0;
        case 0x156cd4u: goto label_156cd4;
        case 0x156cd8u: goto label_156cd8;
        case 0x156cdcu: goto label_156cdc;
        case 0x156ce0u: goto label_156ce0;
        case 0x156ce4u: goto label_156ce4;
        case 0x156ce8u: goto label_156ce8;
        case 0x156cecu: goto label_156cec;
        case 0x156cf0u: goto label_156cf0;
        case 0x156cf4u: goto label_156cf4;
        case 0x156cf8u: goto label_156cf8;
        case 0x156cfcu: goto label_156cfc;
        case 0x156d00u: goto label_156d00;
        case 0x156d04u: goto label_156d04;
        case 0x156d08u: goto label_156d08;
        case 0x156d0cu: goto label_156d0c;
        case 0x156d10u: goto label_156d10;
        case 0x156d14u: goto label_156d14;
        case 0x156d18u: goto label_156d18;
        case 0x156d1cu: goto label_156d1c;
        case 0x156d20u: goto label_156d20;
        case 0x156d24u: goto label_156d24;
        case 0x156d28u: goto label_156d28;
        case 0x156d2cu: goto label_156d2c;
        case 0x156d30u: goto label_156d30;
        case 0x156d34u: goto label_156d34;
        case 0x156d38u: goto label_156d38;
        case 0x156d3cu: goto label_156d3c;
        case 0x156d40u: goto label_156d40;
        case 0x156d44u: goto label_156d44;
        case 0x156d48u: goto label_156d48;
        case 0x156d4cu: goto label_156d4c;
        case 0x156d50u: goto label_156d50;
        case 0x156d54u: goto label_156d54;
        case 0x156d58u: goto label_156d58;
        case 0x156d5cu: goto label_156d5c;
        case 0x156d60u: goto label_156d60;
        case 0x156d64u: goto label_156d64;
        case 0x156d68u: goto label_156d68;
        case 0x156d6cu: goto label_156d6c;
        case 0x156d70u: goto label_156d70;
        case 0x156d74u: goto label_156d74;
        case 0x156d78u: goto label_156d78;
        case 0x156d7cu: goto label_156d7c;
        case 0x156d80u: goto label_156d80;
        case 0x156d84u: goto label_156d84;
        case 0x156d88u: goto label_156d88;
        case 0x156d8cu: goto label_156d8c;
        case 0x156d90u: goto label_156d90;
        case 0x156d94u: goto label_156d94;
        case 0x156d98u: goto label_156d98;
        case 0x156d9cu: goto label_156d9c;
        case 0x156da0u: goto label_156da0;
        case 0x156da4u: goto label_156da4;
        case 0x156da8u: goto label_156da8;
        case 0x156dacu: goto label_156dac;
        case 0x156db0u: goto label_156db0;
        case 0x156db4u: goto label_156db4;
        case 0x156db8u: goto label_156db8;
        case 0x156dbcu: goto label_156dbc;
        case 0x156dc0u: goto label_156dc0;
        case 0x156dc4u: goto label_156dc4;
        case 0x156dc8u: goto label_156dc8;
        case 0x156dccu: goto label_156dcc;
        case 0x156dd0u: goto label_156dd0;
        case 0x156dd4u: goto label_156dd4;
        case 0x156dd8u: goto label_156dd8;
        case 0x156ddcu: goto label_156ddc;
        case 0x156de0u: goto label_156de0;
        case 0x156de4u: goto label_156de4;
        case 0x156de8u: goto label_156de8;
        case 0x156decu: goto label_156dec;
        case 0x156df0u: goto label_156df0;
        case 0x156df4u: goto label_156df4;
        case 0x156df8u: goto label_156df8;
        case 0x156dfcu: goto label_156dfc;
        case 0x156e00u: goto label_156e00;
        case 0x156e04u: goto label_156e04;
        case 0x156e08u: goto label_156e08;
        case 0x156e0cu: goto label_156e0c;
        case 0x156e10u: goto label_156e10;
        case 0x156e14u: goto label_156e14;
        case 0x156e18u: goto label_156e18;
        case 0x156e1cu: goto label_156e1c;
        case 0x156e20u: goto label_156e20;
        case 0x156e24u: goto label_156e24;
        case 0x156e28u: goto label_156e28;
        case 0x156e2cu: goto label_156e2c;
        case 0x156e30u: goto label_156e30;
        case 0x156e34u: goto label_156e34;
        case 0x156e38u: goto label_156e38;
        case 0x156e3cu: goto label_156e3c;
        case 0x156e40u: goto label_156e40;
        case 0x156e44u: goto label_156e44;
        case 0x156e48u: goto label_156e48;
        case 0x156e4cu: goto label_156e4c;
        case 0x156e50u: goto label_156e50;
        case 0x156e54u: goto label_156e54;
        case 0x156e58u: goto label_156e58;
        case 0x156e5cu: goto label_156e5c;
        case 0x156e60u: goto label_156e60;
        case 0x156e64u: goto label_156e64;
        case 0x156e68u: goto label_156e68;
        case 0x156e6cu: goto label_156e6c;
        case 0x156e70u: goto label_156e70;
        case 0x156e74u: goto label_156e74;
        case 0x156e78u: goto label_156e78;
        case 0x156e7cu: goto label_156e7c;
        case 0x156e80u: goto label_156e80;
        case 0x156e84u: goto label_156e84;
        case 0x156e88u: goto label_156e88;
        case 0x156e8cu: goto label_156e8c;
        case 0x156e90u: goto label_156e90;
        case 0x156e94u: goto label_156e94;
        case 0x156e98u: goto label_156e98;
        case 0x156e9cu: goto label_156e9c;
        case 0x156ea0u: goto label_156ea0;
        case 0x156ea4u: goto label_156ea4;
        case 0x156ea8u: goto label_156ea8;
        case 0x156eacu: goto label_156eac;
        case 0x156eb0u: goto label_156eb0;
        case 0x156eb4u: goto label_156eb4;
        case 0x156eb8u: goto label_156eb8;
        case 0x156ebcu: goto label_156ebc;
        case 0x156ec0u: goto label_156ec0;
        case 0x156ec4u: goto label_156ec4;
        case 0x156ec8u: goto label_156ec8;
        case 0x156eccu: goto label_156ecc;
        case 0x156ed0u: goto label_156ed0;
        case 0x156ed4u: goto label_156ed4;
        case 0x156ed8u: goto label_156ed8;
        case 0x156edcu: goto label_156edc;
        case 0x156ee0u: goto label_156ee0;
        case 0x156ee4u: goto label_156ee4;
        case 0x156ee8u: goto label_156ee8;
        case 0x156eecu: goto label_156eec;
        case 0x156ef0u: goto label_156ef0;
        case 0x156ef4u: goto label_156ef4;
        case 0x156ef8u: goto label_156ef8;
        case 0x156efcu: goto label_156efc;
        case 0x156f00u: goto label_156f00;
        case 0x156f04u: goto label_156f04;
        case 0x156f08u: goto label_156f08;
        case 0x156f0cu: goto label_156f0c;
        case 0x156f10u: goto label_156f10;
        case 0x156f14u: goto label_156f14;
        case 0x156f18u: goto label_156f18;
        case 0x156f1cu: goto label_156f1c;
        case 0x156f20u: goto label_156f20;
        case 0x156f24u: goto label_156f24;
        case 0x156f28u: goto label_156f28;
        case 0x156f2cu: goto label_156f2c;
        case 0x156f30u: goto label_156f30;
        case 0x156f34u: goto label_156f34;
        case 0x156f38u: goto label_156f38;
        case 0x156f3cu: goto label_156f3c;
        case 0x156f40u: goto label_156f40;
        case 0x156f44u: goto label_156f44;
        case 0x156f48u: goto label_156f48;
        case 0x156f4cu: goto label_156f4c;
        case 0x156f50u: goto label_156f50;
        case 0x156f54u: goto label_156f54;
        case 0x156f58u: goto label_156f58;
        case 0x156f5cu: goto label_156f5c;
        case 0x156f60u: goto label_156f60;
        case 0x156f64u: goto label_156f64;
        case 0x156f68u: goto label_156f68;
        case 0x156f6cu: goto label_156f6c;
        case 0x156f70u: goto label_156f70;
        case 0x156f74u: goto label_156f74;
        case 0x156f78u: goto label_156f78;
        case 0x156f7cu: goto label_156f7c;
        case 0x156f80u: goto label_156f80;
        case 0x156f84u: goto label_156f84;
        case 0x156f88u: goto label_156f88;
        case 0x156f8cu: goto label_156f8c;
        case 0x156f90u: goto label_156f90;
        case 0x156f94u: goto label_156f94;
        case 0x156f98u: goto label_156f98;
        case 0x156f9cu: goto label_156f9c;
        case 0x156fa0u: goto label_156fa0;
        case 0x156fa4u: goto label_156fa4;
        case 0x156fa8u: goto label_156fa8;
        case 0x156facu: goto label_156fac;
        case 0x156fb0u: goto label_156fb0;
        case 0x156fb4u: goto label_156fb4;
        case 0x156fb8u: goto label_156fb8;
        case 0x156fbcu: goto label_156fbc;
        case 0x156fc0u: goto label_156fc0;
        case 0x156fc4u: goto label_156fc4;
        case 0x156fc8u: goto label_156fc8;
        case 0x156fccu: goto label_156fcc;
        case 0x156fd0u: goto label_156fd0;
        case 0x156fd4u: goto label_156fd4;
        case 0x156fd8u: goto label_156fd8;
        case 0x156fdcu: goto label_156fdc;
        case 0x156fe0u: goto label_156fe0;
        case 0x156fe4u: goto label_156fe4;
        case 0x156fe8u: goto label_156fe8;
        case 0x156fecu: goto label_156fec;
        case 0x156ff0u: goto label_156ff0;
        case 0x156ff4u: goto label_156ff4;
        case 0x156ff8u: goto label_156ff8;
        case 0x156ffcu: goto label_156ffc;
        case 0x157000u: goto label_157000;
        case 0x157004u: goto label_157004;
        case 0x157008u: goto label_157008;
        case 0x15700cu: goto label_15700c;
        case 0x157010u: goto label_157010;
        case 0x157014u: goto label_157014;
        case 0x157018u: goto label_157018;
        case 0x15701cu: goto label_15701c;
        case 0x157020u: goto label_157020;
        case 0x157024u: goto label_157024;
        case 0x157028u: goto label_157028;
        case 0x15702cu: goto label_15702c;
        case 0x157030u: goto label_157030;
        case 0x157034u: goto label_157034;
        case 0x157038u: goto label_157038;
        case 0x15703cu: goto label_15703c;
        case 0x157040u: goto label_157040;
        case 0x157044u: goto label_157044;
        case 0x157048u: goto label_157048;
        case 0x15704cu: goto label_15704c;
        case 0x157050u: goto label_157050;
        case 0x157054u: goto label_157054;
        case 0x157058u: goto label_157058;
        case 0x15705cu: goto label_15705c;
        case 0x157060u: goto label_157060;
        case 0x157064u: goto label_157064;
        case 0x157068u: goto label_157068;
        case 0x15706cu: goto label_15706c;
        default: return;
    }

label_1568a0:
    // 0x1568a0: 0x0  nop
    ctx->pc = 0x1568a0u;
    // NOP
label_1568a4:
    // 0x1568a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1568a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1568a8:
    // 0x1568a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1568a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1568ac:
    // 0x1568ac: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x1568acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_1568b0:
    // 0x1568b0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1568b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1568b4:
    // 0x1568b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1568b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1568b8:
    // 0x1568b8: 0x0  nop
    ctx->pc = 0x1568b8u;
    // NOP
label_1568bc:
    // 0x1568bc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1568bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1568c0:
    // 0x1568c0: 0x0  nop
    ctx->pc = 0x1568c0u;
    // NOP
label_1568c4:
    // 0x1568c4: 0x0  nop
    ctx->pc = 0x1568c4u;
    // NOP
label_1568c8:
    // 0x1568c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1568cc:
    if (ctx->pc == 0x1568CCu) {
        ctx->pc = 0x1568D0u;
        goto label_1568d0;
    }
    ctx->pc = 0x1568C8u;
    {
        const bool branch_taken_0x1568c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1568c8) {
            ctx->pc = 0x1568DCu;
            goto label_1568dc;
        }
    }
    ctx->pc = 0x1568D0u;
label_1568d0:
    // 0x1568d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1568d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1568d4:
    // 0x1568d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1568d8:
    if (ctx->pc == 0x1568D8u) {
        ctx->pc = 0x1568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568D4u;
        // 0x1568d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568DCu;
        goto label_1568dc;
    }
    ctx->pc = 0x1568D4u;
    {
        const bool branch_taken_0x1568d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568D4u;
        // 0x1568d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568d4) {
            ctx->pc = 0x1568F8u;
            goto label_1568f8;
        }
    }
    ctx->pc = 0x1568DCu;
label_1568dc:
    // 0x1568dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1568e0:
    // 0x1568e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1568e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1568e4:
    // 0x1568e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1568e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1568e8:
    // 0x1568e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1568e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1568ec:
    // 0x1568ec: 0x0  nop
    ctx->pc = 0x1568ecu;
    // NOP
label_1568f0:
    // 0x1568f0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1568f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_1568f4:
    // 0x1568f4: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x1568f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_1568f8:
    // 0x1568f8: 0xc06d530  jal         func_1B54C0
label_1568fc:
    if (ctx->pc == 0x1568FCu) {
        ctx->pc = 0x156900u;
        goto label_156900;
    }
    ctx->pc = 0x1568F8u;
    SET_GPR_U32(ctx, 31, 0x156900u);
    ctx->pc = 0x1B54C0u;
    { ctx->pc = 0x1b54c0; return; }
    ctx->pc = 0x156900u;
label_156900:
    // 0x156900: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x156900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156904:
    // 0x156904: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_156908:
    // 0x156908: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x156908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_15690c:
    // 0x15690c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_156910:
    // 0x156910: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_156914:
    if (ctx->pc == 0x156914u) {
        ctx->pc = 0x156914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156910u;
        // 0x156914: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156918u;
        goto label_156918;
    }
    ctx->pc = 0x156910u;
    {
        const bool branch_taken_0x156910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156910u;
        // 0x156914: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156910) {
            ctx->pc = 0x15687Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15687c; return; }
        }
    }
    ctx->pc = 0x156918u;
label_156918:
    // 0x156918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15691c:
    // 0x15691c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x15691cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_156920:
    // 0x156920: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_156924:
    if (ctx->pc == 0x156924u) {
        ctx->pc = 0x156924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156920u;
        // 0x156924: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156928u;
        goto label_156928;
    }
    ctx->pc = 0x156920u;
    {
        const bool branch_taken_0x156920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156920u;
        // 0x156924: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156920) {
            ctx->pc = 0x15682Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15682c; return; }
        }
    }
    ctx->pc = 0x156928u;
label_156928:
    // 0x156928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x156928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15692c:
    // 0x15692c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x15692cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_156930:
    // 0x156930: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_156934:
    if (ctx->pc == 0x156934u) {
        ctx->pc = 0x156934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156930u;
        // 0x156934: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156938u;
        goto label_156938;
    }
    ctx->pc = 0x156930u;
    {
        const bool branch_taken_0x156930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156930u;
        // 0x156934: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156930) {
            ctx->pc = 0x156824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x156824; return; }
        }
    }
    ctx->pc = 0x156938u;
label_156938:
    // 0x156938: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x156938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15693c:
    // 0x15693c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15693cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156940:
    // 0x156940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156944:
    // 0x156944: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156948:
    // 0x156948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15694c:
    // 0x15694c: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x15694cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_156950:
    // 0x156950: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_156954:
    if (ctx->pc == 0x156954u) {
        ctx->pc = 0x156954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156950u;
        // 0x156954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156958u;
        goto label_156958;
    }
    ctx->pc = 0x156950u;
    {
        const bool branch_taken_0x156950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156950u;
        // 0x156954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156950) {
            ctx->pc = 0x156AA0u;
            goto label_156aa0;
        }
    }
    ctx->pc = 0x156958u;
label_156958:
    // 0x156958: 0x2e810009  sltiu       $at, $s4, 0x9
    ctx->pc = 0x156958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_15695c:
    // 0x15695c: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
label_156960:
    if (ctx->pc == 0x156960u) {
        ctx->pc = 0x156960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15695Cu;
        // 0x156960: 0x2686fff8  addiu       $a2, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156964u;
        goto label_156964;
    }
    ctx->pc = 0x15695Cu;
    {
        const bool branch_taken_0x15695c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x156960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15695Cu;
        // 0x156960: 0x2686fff8  addiu       $a2, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15695c) {
            ctx->pc = 0x156A44u;
            goto label_156a44;
        }
    }
    ctx->pc = 0x156964u;
label_156964:
    // 0x156964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156968:
    // 0x156968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15696c:
    // 0x15696c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15696cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_156970:
    // 0x156970: 0x24a512c0  addiu       $a1, $a1, 0x12C0
    ctx->pc = 0x156970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
label_156974:
    // 0x156974: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x156974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_156978:
    // 0x156978: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x156978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15697c:
    // 0x15697c: 0x0  nop
    ctx->pc = 0x15697cu;
    // NOP
label_156980:
    // 0x156980: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x156980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_156984:
    // 0x156984: 0xc5280010  lwc1        $f8, 0x10($t1)
    ctx->pc = 0x156984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_156988:
    // 0x156988: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_15698c:
    // 0x15698c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_156990:
    // 0x156990: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_156994:
    // 0x156994: 0x685021  addu        $t2, $v1, $t0
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_156998:
    // 0x156998: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x156998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_15699c:
    // 0x15699c: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x15699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1569a0:
    // 0x1569a0: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x1569a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1569a4:
    // 0x1569a4: 0xc5470014  lwc1        $f7, 0x14($t2)
    ctx->pc = 0x1569a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1569a8:
    // 0x1569a8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1569ac:
    // 0x1569ac: 0xc52a0020  lwc1        $f10, 0x20($t1)
    ctx->pc = 0x1569acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1569b0:
    // 0x1569b0: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x1569b0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_1569b4:
    // 0x1569b4: 0x46083a02  mul.s       $f8, $f7, $f8
    ctx->pc = 0x1569b4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
label_1569b8:
    // 0x1569b8: 0xc5460028  lwc1        $f6, 0x28($t2)
    ctx->pc = 0x1569b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1569bc:
    // 0x1569bc: 0x460a51c2  mul.s       $f7, $f10, $f10
    ctx->pc = 0x1569bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_1569c0:
    // 0x1569c0: 0xc52b0030  lwc1        $f11, 0x30($t1)
    ctx->pc = 0x1569c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1569c4:
    // 0x1569c4: 0x460731c2  mul.s       $f7, $f6, $f7
    ctx->pc = 0x1569c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_1569c8:
    // 0x1569c8: 0xc545003c  lwc1        $f5, 0x3C($t2)
    ctx->pc = 0x1569c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1569cc:
    // 0x1569cc: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x1569ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
label_1569d0:
    // 0x1569d0: 0xc52c0040  lwc1        $f12, 0x40($t1)
    ctx->pc = 0x1569d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1569d4:
    // 0x1569d4: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x1569d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_1569d8:
    // 0x1569d8: 0xc5440050  lwc1        $f4, 0x50($t2)
    ctx->pc = 0x1569d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1569dc:
    // 0x1569dc: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x1569dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1569e0:
    // 0x1569e0: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x1569e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1569e4:
    // 0x1569e4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1569e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1569e8:
    // 0x1569e8: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x1569e8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1569ec:
    // 0x1569ec: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1569ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_1569f0:
    // 0x1569f0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1569f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1569f4:
    // 0x1569f4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1569f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1569f8:
    // 0x1569f8: 0xc52d0050  lwc1        $f13, 0x50($t1)
    ctx->pc = 0x1569f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1569fc:
    // 0x1569fc: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x1569fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_156a00:
    // 0x156a00: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x156a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_156a04:
    // 0x156a04: 0xc5430064  lwc1        $f3, 0x64($t2)
    ctx->pc = 0x156a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_156a08:
    // 0x156a08: 0x460d6902  mul.s       $f4, $f13, $f13
    ctx->pc = 0x156a08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_156a0c:
    // 0x156a0c: 0xc52e0060  lwc1        $f14, 0x60($t1)
    ctx->pc = 0x156a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_156a10:
    // 0x156a10: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x156a10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_156a14:
    // 0x156a14: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x156a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_156a18:
    // 0x156a18: 0xc5420078  lwc1        $f2, 0x78($t2)
    ctx->pc = 0x156a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_156a1c:
    // 0x156a1c: 0x460e70c2  mul.s       $f3, $f14, $f14
    ctx->pc = 0x156a1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_156a20:
    // 0x156a20: 0xc52f0070  lwc1        $f15, 0x70($t1)
    ctx->pc = 0x156a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_156a24:
    // 0x156a24: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x156a24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_156a28:
    // 0x156a28: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x156a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_156a2c:
    // 0x156a2c: 0xc541008c  lwc1        $f1, 0x8C($t2)
    ctx->pc = 0x156a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156a30:
    // 0x156a30: 0x460f7882  mul.s       $f2, $f15, $f15
    ctx->pc = 0x156a30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
label_156a34:
    // 0x156a34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x156a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_156a38:
    // 0x156a38: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_156a3c:
    // 0x156a3c: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_156a40:
    if (ctx->pc == 0x156A40u) {
        ctx->pc = 0x156A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A3Cu;
        // 0x156a40: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A44u;
        goto label_156a44;
    }
    ctx->pc = 0x156A3Cu;
    {
        const bool branch_taken_0x156a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A3Cu;
        // 0x156a40: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a3c) {
            ctx->pc = 0x15697Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15697c;
        }
    }
    ctx->pc = 0x156A44u;
label_156a44:
    // 0x156a44: 0x0  nop
    ctx->pc = 0x156a44u;
    // NOP
label_156a48:
    // 0x156a48: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x156a48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_156a4c:
    // 0x156a4c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_156a50:
    if (ctx->pc == 0x156A50u) {
        ctx->pc = 0x156A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A4Cu;
        // 0x156a50: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A54u;
        goto label_156a54;
    }
    ctx->pc = 0x156A4Cu;
    {
        const bool branch_taken_0x156a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A4Cu;
        // 0x156a50: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a4c) {
            ctx->pc = 0x156AA0u;
            goto label_156aa0;
        }
    }
    ctx->pc = 0x156A54u;
label_156a54:
    // 0x156a54: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_156a58:
    // 0x156a58: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x156a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_156a5c:
    // 0x156a5c: 0x24a512c0  addiu       $a1, $a1, 0x12C0
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
label_156a60:
    // 0x156a60: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_156a64:
    // 0x156a64: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x156a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_156a68:
    // 0x156a68: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x156a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_156a6c:
    // 0x156a6c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x156a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_156a70:
    // 0x156a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_156a74:
    // 0x156a74: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x156a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_156a78:
    // 0x156a78: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_156a7c:
    // 0x156a7c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x156a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_156a80:
    // 0x156a80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x156a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_156a84:
    // 0x156a84: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x156a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156a88:
    // 0x156a88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x156a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_156a8c:
    // 0x156a8c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x156a8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_156a90:
    // 0x156a90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x156a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_156a94:
    // 0x156a94: 0x54182b  sltu        $v1, $v0, $s4
    ctx->pc = 0x156a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_156a98:
    // 0x156a98: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_156a9c:
    if (ctx->pc == 0x156A9Cu) {
        ctx->pc = 0x156A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A98u;
        // 0x156a9c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AA0u;
        goto label_156aa0;
    }
    ctx->pc = 0x156A98u;
    {
        const bool branch_taken_0x156a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A98u;
        // 0x156a9c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a98) {
            ctx->pc = 0x156A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156a68;
        }
    }
    ctx->pc = 0x156AA0u;
label_156aa0:
    // 0x156aa0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x156aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_156aa4:
    // 0x156aa4: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x156aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_156aa8:
    // 0x156aa8: 0x26880001  addiu       $t0, $s4, 0x1
    ctx->pc = 0x156aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_156aac:
    // 0x156aac: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x156aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_156ab0:
    // 0x156ab0: 0x2d010004  sltiu       $at, $t0, 0x4
    ctx->pc = 0x156ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_156ab4:
    // 0x156ab4: 0xf13021  addu        $a2, $a3, $s1
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_156ab8:
    // 0x156ab8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x156ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156abc:
    // 0x156abc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x156abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_156ac0:
    // 0x156ac0: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_156ac4:
    if (ctx->pc == 0x156AC4u) {
        ctx->pc = 0x156AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AC0u;
        // 0x156ac4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AC8u;
        goto label_156ac8;
    }
    ctx->pc = 0x156AC0u;
    {
        const bool branch_taken_0x156ac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AC0u;
        // 0x156ac4: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ac0) {
            ctx->pc = 0x156C80u;
            goto label_156c80;
        }
    }
    ctx->pc = 0x156AC8u;
label_156ac8:
    // 0x156ac8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_156acc:
    // 0x156acc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_156ad0:
    // 0x156ad0: 0x2684fff8  addiu       $a0, $s4, -0x8
    ctx->pc = 0x156ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
label_156ad4:
    // 0x156ad4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_156ad8:
    // 0x156ad8: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x156ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_156adc:
    // 0x156adc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x156adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156ae0:
    // 0x156ae0: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
label_156ae4:
    if (ctx->pc == 0x156AE4u) {
        ctx->pc = 0x156AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AE0u;
        // 0x156ae4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AE8u;
        goto label_156ae8;
    }
    ctx->pc = 0x156AE0u;
    {
        const bool branch_taken_0x156ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AE0u;
        // 0x156ae4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ae0) {
            ctx->pc = 0x156C40u;
            goto label_156c40;
        }
    }
    ctx->pc = 0x156AE8u;
label_156ae8:
    // 0x156ae8: 0x2e810009  sltiu       $at, $s4, 0x9
    ctx->pc = 0x156ae8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_156aec:
    // 0x156aec: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
label_156af0:
    if (ctx->pc == 0x156AF0u) {
        ctx->pc = 0x156AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AECu;
        // 0x156af0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AF4u;
        goto label_156af4;
    }
    ctx->pc = 0x156AECu;
    {
        const bool branch_taken_0x156aec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x156AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AECu;
        // 0x156af0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156aec) {
            ctx->pc = 0x156BE8u;
            goto label_156be8;
        }
    }
    ctx->pc = 0x156AF4u;
label_156af4:
    // 0x156af4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x156af4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156af8:
    // 0x156af8: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x156af8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_156afc:
    // 0x156afc: 0x254b0000  addiu       $t3, $t2, 0x0
    ctx->pc = 0x156afcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 0));
label_156b00:
    // 0x156b00: 0x6c5021  addu        $t2, $v1, $t4
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_156b04:
    // 0x156b04: 0x254a0000  addiu       $t2, $t2, 0x0
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 0));
label_156b08:
    // 0x156b08: 0x16c7821  addu        $t7, $t3, $t4
    ctx->pc = 0x156b08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_156b0c:
    // 0x156b0c: 0x14d7021  addu        $t6, $t2, $t5
    ctx->pc = 0x156b0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_156b10:
    // 0x156b10: 0x4c8021  addu        $s0, $v0, $t4
    ctx->pc = 0x156b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_156b14:
    // 0x156b14: 0xc5e60000  lwc1        $f6, 0x0($t7)
    ctx->pc = 0x156b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_156b18:
    // 0x156b18: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_156b1c:
    // 0x156b1c: 0xc5c50000  lwc1        $f5, 0x0($t6)
    ctx->pc = 0x156b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_156b20:
    // 0x156b20: 0x124502b  sltu        $t2, $t1, $a0
    ctx->pc = 0x156b20u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_156b24:
    // 0x156b24: 0xc5e40010  lwc1        $f4, 0x10($t7)
    ctx->pc = 0x156b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_156b28:
    // 0x156b28: 0x258c0080  addiu       $t4, $t4, 0x80
    ctx->pc = 0x156b28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 128));
label_156b2c:
    // 0x156b2c: 0xc5c30014  lwc1        $f3, 0x14($t6)
    ctx->pc = 0x156b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_156b30:
    // 0x156b30: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
label_156b34:
    // 0x156b34: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x156b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156b38:
    // 0x156b38: 0xc5f40020  lwc1        $f20, 0x20($t7)
    ctx->pc = 0x156b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156b3c:
    // 0x156b3c: 0xc5d30028  lwc1        $f19, 0x28($t6)
    ctx->pc = 0x156b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_156b40:
    // 0x156b40: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x156b40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_156b44:
    // 0x156b44: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x156b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_156b48:
    // 0x156b48: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x156b48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_156b4c:
    // 0x156b4c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x156b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156b50:
    // 0x156b50: 0xc5f10030  lwc1        $f17, 0x30($t7)
    ctx->pc = 0x156b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_156b54:
    // 0x156b54: 0xc5d0003c  lwc1        $f16, 0x3C($t6)
    ctx->pc = 0x156b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_156b58:
    // 0x156b58: 0xc6120020  lwc1        $f18, 0x20($s0)
    ctx->pc = 0x156b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_156b5c:
    // 0x156b5c: 0x4613a4c2  mul.s       $f19, $f20, $f19
    ctx->pc = 0x156b5cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
label_156b60:
    // 0x156b60: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x156b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_156b64:
    // 0x156b64: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x156b64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_156b68:
    // 0x156b68: 0xc5ee0040  lwc1        $f14, 0x40($t7)
    ctx->pc = 0x156b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_156b6c:
    // 0x156b6c: 0xc5cd0050  lwc1        $f13, 0x50($t6)
    ctx->pc = 0x156b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_156b70:
    // 0x156b70: 0xc60f0030  lwc1        $f15, 0x30($s0)
    ctx->pc = 0x156b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_156b74:
    // 0x156b74: 0x46108c02  mul.s       $f16, $f17, $f16
    ctx->pc = 0x156b74u;
    ctx->f[16] = FPU_MUL_S(ctx->f[17], ctx->f[16]);
label_156b78:
    // 0x156b78: 0x46139482  mul.s       $f18, $f18, $f19
    ctx->pc = 0x156b78u;
    ctx->f[18] = FPU_MUL_S(ctx->f[18], ctx->f[19]);
label_156b7c:
    // 0x156b7c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x156b7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_156b80:
    // 0x156b80: 0xc5eb0050  lwc1        $f11, 0x50($t7)
    ctx->pc = 0x156b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_156b84:
    // 0x156b84: 0xc5ca0064  lwc1        $f10, 0x64($t6)
    ctx->pc = 0x156b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_156b88:
    // 0x156b88: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x156b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_156b8c:
    // 0x156b8c: 0x460d7342  mul.s       $f13, $f14, $f13
    ctx->pc = 0x156b8cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
label_156b90:
    // 0x156b90: 0x46107bc2  mul.s       $f15, $f15, $f16
    ctx->pc = 0x156b90u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
label_156b94:
    // 0x156b94: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x156b94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
label_156b98:
    // 0x156b98: 0xc5e80060  lwc1        $f8, 0x60($t7)
    ctx->pc = 0x156b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_156b9c:
    // 0x156b9c: 0xc5c70078  lwc1        $f7, 0x78($t6)
    ctx->pc = 0x156b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_156ba0:
    // 0x156ba0: 0xc6090050  lwc1        $f9, 0x50($s0)
    ctx->pc = 0x156ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_156ba4:
    // 0x156ba4: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x156ba4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
label_156ba8:
    // 0x156ba8: 0x460d6302  mul.s       $f12, $f12, $f13
    ctx->pc = 0x156ba8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_156bac:
    // 0x156bac: 0x460f1080  add.s       $f2, $f2, $f15
    ctx->pc = 0x156bacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
label_156bb0:
    // 0x156bb0: 0xc5e50070  lwc1        $f5, 0x70($t7)
    ctx->pc = 0x156bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_156bb4:
    // 0x156bb4: 0xc5c4008c  lwc1        $f4, 0x8C($t6)
    ctx->pc = 0x156bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_156bb8:
    // 0x156bb8: 0xc6060060  lwc1        $f6, 0x60($s0)
    ctx->pc = 0x156bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_156bbc:
    // 0x156bbc: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x156bbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_156bc0:
    // 0x156bc0: 0x460a4a42  mul.s       $f9, $f9, $f10
    ctx->pc = 0x156bc0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
label_156bc4:
    // 0x156bc4: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x156bc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_156bc8:
    // 0x156bc8: 0xc6030070  lwc1        $f3, 0x70($s0)
    ctx->pc = 0x156bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_156bcc:
    // 0x156bcc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x156bccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_156bd0:
    // 0x156bd0: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x156bd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_156bd4:
    // 0x156bd4: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x156bd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
label_156bd8:
    // 0x156bd8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x156bd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_156bdc:
    // 0x156bdc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x156bdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_156be0:
    // 0x156be0: 0x1540ffc7  bnez        $t2, . + 4 + (-0x39 << 2)
label_156be4:
    if (ctx->pc == 0x156BE4u) {
        ctx->pc = 0x156BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BE0u;
        // 0x156be4: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156BE8u;
        goto label_156be8;
    }
    ctx->pc = 0x156BE0u;
    {
        const bool branch_taken_0x156be0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x156BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BE0u;
        // 0x156be4: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156be0) {
            ctx->pc = 0x156B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156b00;
        }
    }
    ctx->pc = 0x156BE8u;
label_156be8:
    // 0x156be8: 0x134082b  sltu        $at, $t1, $s4
    ctx->pc = 0x156be8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_156bec:
    // 0x156bec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_156bf0:
    if (ctx->pc == 0x156BF0u) {
        ctx->pc = 0x156BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BECu;
        // 0x156bf0: 0x96900  sll         $t5, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156BF4u;
        goto label_156bf4;
    }
    ctx->pc = 0x156BECu;
    {
        const bool branch_taken_0x156bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BECu;
        // 0x156bf0: 0x96900  sll         $t5, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156bec) {
            ctx->pc = 0x156C40u;
            goto label_156c40;
        }
    }
    ctx->pc = 0x156BF4u;
label_156bf4:
    // 0x156bf4: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x156bf4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_156bf8:
    // 0x156bf8: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x156bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_156bfc:
    // 0x156bfc: 0x254c0000  addiu       $t4, $t2, 0x0
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 0));
label_156c00:
    // 0x156c00: 0x18d5021  addu        $t2, $t4, $t5
    ctx->pc = 0x156c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_156c04:
    // 0x156c04: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x156c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_156c08:
    // 0x156c08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_156c0c:
    // 0x156c0c: 0x6d5021  addu        $t2, $v1, $t5
    ctx->pc = 0x156c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_156c10:
    // 0x156c10: 0x254b0000  addiu       $t3, $t2, 0x0
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 0));
label_156c14:
    // 0x156c14: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x156c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
label_156c18:
    // 0x156c18: 0x4d5021  addu        $t2, $v0, $t5
    ctx->pc = 0x156c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_156c1c:
    // 0x156c1c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x156c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156c20:
    // 0x156c20: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
label_156c24:
    // 0x156c24: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x156c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156c28:
    // 0x156c28: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_156c2c:
    // 0x156c2c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x156c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_156c30:
    // 0x156c30: 0x134502b  sltu        $t2, $t1, $s4
    ctx->pc = 0x156c30u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_156c34:
    // 0x156c34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x156c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_156c38:
    // 0x156c38: 0x1540fff1  bnez        $t2, . + 4 + (-0xF << 2)
label_156c3c:
    if (ctx->pc == 0x156C3Cu) {
        ctx->pc = 0x156C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C38u;
        // 0x156c3c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C40u;
        goto label_156c40;
    }
    ctx->pc = 0x156C38u;
    {
        const bool branch_taken_0x156c38 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x156C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C38u;
        // 0x156c3c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c38) {
            ctx->pc = 0x156C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156c00;
        }
    }
    ctx->pc = 0x156C40u;
label_156c40:
    // 0x156c40: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_156c44:
    // 0x156c44: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_156c48:
    // 0x156c48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_156c4c:
    // 0x156c4c: 0x25290000  addiu       $t1, $t1, 0x0
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
label_156c50:
    // 0x156c50: 0xe55021  addu        $t2, $a3, $a1
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_156c54:
    // 0x156c54: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x156c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_156c58:
    // 0x156c58: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x156c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156c5c:
    // 0x156c5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x156c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_156c60:
    // 0x156c60: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x156c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156c64:
    // 0x156c64: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x156c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_156c68:
    // 0x156c68: 0x2d090004  sltiu       $t1, $t0, 0x4
    ctx->pc = 0x156c68u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_156c6c:
    // 0x156c6c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x156c6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_156c70:
    // 0x156c70: 0x0  nop
    ctx->pc = 0x156c70u;
    // NOP
label_156c74:
    // 0x156c74: 0x0  nop
    ctx->pc = 0x156c74u;
    // NOP
label_156c78:
    // 0x156c78: 0x1520ff97  bnez        $t1, . + 4 + (-0x69 << 2)
label_156c7c:
    if (ctx->pc == 0x156C7Cu) {
        ctx->pc = 0x156C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C78u;
        // 0x156c7c: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C80u;
        goto label_156c80;
    }
    ctx->pc = 0x156C78u;
    {
        const bool branch_taken_0x156c78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x156C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C78u;
        // 0x156c7c: 0xe5400000  swc1        $f0, 0x0($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c78) {
            ctx->pc = 0x156AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156ad8;
        }
    }
    ctx->pc = 0x156C80u;
label_156c80:
    // 0x156c80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x156c80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156c84:
    // 0x156c84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x156c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156c88:
    // 0x156c88: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
label_156c8c:
    if (ctx->pc == 0x156C8Cu) {
        ctx->pc = 0x156C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C88u;
        // 0x156c8c: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C90u;
        goto label_156c90;
    }
    ctx->pc = 0x156C88u;
    {
        const bool branch_taken_0x156c88 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x156C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C88u;
        // 0x156c8c: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c88) {
            ctx->pc = 0x156C9Cu;
            goto label_156c9c;
        }
    }
    ctx->pc = 0x156C90u;
label_156c90:
    // 0x156c90: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x156c90u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156c94:
    // 0x156c94: 0x10000007  b           . + 4 + (0x7 << 2)
label_156c98:
    if (ctx->pc == 0x156C98u) {
        ctx->pc = 0x156C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C94u;
        // 0x156c98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C9Cu;
        goto label_156c9c;
    }
    ctx->pc = 0x156C94u;
    {
        const bool branch_taken_0x156c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C94u;
        // 0x156c98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c94) {
            ctx->pc = 0x156CB4u;
            goto label_156cb4;
        }
    }
    ctx->pc = 0x156C9Cu;
label_156c9c:
    // 0x156c9c: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x156c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_156ca0:
    // 0x156ca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_156ca4:
    // 0x156ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156ca8:
    // 0x156ca8: 0x0  nop
    ctx->pc = 0x156ca8u;
    // NOP
label_156cac:
    // 0x156cac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x156cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_156cb0:
    // 0x156cb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x156cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_156cb4:
    // 0x156cb4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x156cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_156cb8:
    // 0x156cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156cbc:
    // 0x156cbc: 0x0  nop
    ctx->pc = 0x156cbcu;
    // NOP
label_156cc0:
    // 0x156cc0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x156cc0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_156cc4:
    // 0x156cc4: 0x0  nop
    ctx->pc = 0x156cc4u;
    // NOP
label_156cc8:
    // 0x156cc8: 0x0  nop
    ctx->pc = 0x156cc8u;
    // NOP
label_156ccc:
    // 0x156ccc: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_156cd0:
    if (ctx->pc == 0x156CD0u) {
        ctx->pc = 0x156CD4u;
        goto label_156cd4;
    }
    ctx->pc = 0x156CCCu;
    {
        const bool branch_taken_0x156ccc = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x156ccc) {
            ctx->pc = 0x156CE0u;
            goto label_156ce0;
        }
    }
    ctx->pc = 0x156CD4u;
label_156cd4:
    // 0x156cd4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x156cd4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156cd8:
    // 0x156cd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_156cdc:
    if (ctx->pc == 0x156CDCu) {
        ctx->pc = 0x156CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CD8u;
        // 0x156cdc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CE0u;
        goto label_156ce0;
    }
    ctx->pc = 0x156CD8u;
    {
        const bool branch_taken_0x156cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CD8u;
        // 0x156cdc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cd8) {
            ctx->pc = 0x156CFCu;
            goto label_156cfc;
        }
    }
    ctx->pc = 0x156CE0u;
label_156ce0:
    // 0x156ce0: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x156ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_156ce4:
    // 0x156ce4: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x156ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_156ce8:
    // 0x156ce8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_156cec:
    // 0x156cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156cf0:
    // 0x156cf0: 0x0  nop
    ctx->pc = 0x156cf0u;
    // NOP
label_156cf4:
    // 0x156cf4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x156cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_156cf8:
    // 0x156cf8: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x156cf8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_156cfc:
    // 0x156cfc: 0xc06d530  jal         func_1B54C0
label_156d00:
    if (ctx->pc == 0x156D00u) {
        ctx->pc = 0x156D04u;
        goto label_156d04;
    }
    ctx->pc = 0x156CFCu;
    SET_GPR_U32(ctx, 31, 0x156D04u);
    ctx->pc = 0x1B54C0u;
    { ctx->pc = 0x1b54c0; return; }
    ctx->pc = 0x156D04u;
label_156d04:
    // 0x156d04: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x156d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_156d08:
    // 0x156d08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_156d0c:
    // 0x156d0c: 0x24631240  addiu       $v1, $v1, 0x1240
    ctx->pc = 0x156d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_156d10:
    // 0x156d10: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x156d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_156d14:
    // 0x156d14: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x156d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_156d18:
    // 0x156d18: 0x2ea30008  sltiu       $v1, $s5, 0x8
    ctx->pc = 0x156d18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_156d1c:
    // 0x156d1c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x156d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_156d20:
    // 0x156d20: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x156d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_156d24:
    // 0x156d24: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_156d28:
    if (ctx->pc == 0x156D28u) {
        ctx->pc = 0x156D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D24u;
        // 0x156d28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D2Cu;
        goto label_156d2c;
    }
    ctx->pc = 0x156D24u;
    {
        const bool branch_taken_0x156d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D24u;
        // 0x156d28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d24) {
            ctx->pc = 0x156C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156c88;
        }
    }
    ctx->pc = 0x156D2Cu;
label_156d2c:
    // 0x156d2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x156d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_156d30:
    // 0x156d30: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_156d34:
    // 0x156d34: 0x2e830004  sltiu       $v1, $s4, 0x4
    ctx->pc = 0x156d34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_156d38:
    // 0x156d38: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x156d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_156d3c:
    // 0x156d3c: 0x1460ff02  bnez        $v1, . + 4 + (-0xFE << 2)
label_156d40:
    if (ctx->pc == 0x156D40u) {
        ctx->pc = 0x156D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D3Cu;
        // 0x156d40: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D44u;
        goto label_156d44;
    }
    ctx->pc = 0x156D3Cu;
    {
        const bool branch_taken_0x156d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D3Cu;
        // 0x156d40: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d3c) {
            ctx->pc = 0x156948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156948;
        }
    }
    ctx->pc = 0x156D44u;
label_156d44:
    // 0x156d44: 0x26d00120  addiu       $s0, $s6, 0x120
    ctx->pc = 0x156d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
label_156d48:
    // 0x156d48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156d4c:
    // 0x156d4c: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x156d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
label_156d50:
    // 0x156d50: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_156d54:
    // 0x156d54: 0x34ae006b  ori         $t6, $a1, 0x6B
    ctx->pc = 0x156d54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)107);
label_156d58:
    // 0x156d58: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_156d5c:
    // 0x156d5c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_156d60:
    // 0x156d60: 0x3c0f1100  lui         $t7, 0x1100
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4352 << 16));
label_156d64:
    // 0x156d64: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x156d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_156d68:
    // 0x156d68: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x156d68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_156d6c:
    // 0x156d6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x156d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_156d70:
    // 0x156d70: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x156d70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_156d74:
    // 0x156d74: 0xa66825  or          $t5, $a1, $a2
    ctx->pc = 0x156d74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_156d78:
    // 0x156d78: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_156d7c:
    // 0x156d7c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_156d80:
    // 0x156d80: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x156d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_156d84:
    // 0x156d84: 0x34a81ff9  ori         $t0, $a1, 0x1FF9
    ctx->pc = 0x156d84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8185);
label_156d88:
    // 0x156d88: 0x3c053126  lui         $a1, 0x3126
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12582 << 16));
label_156d8c:
    // 0x156d8c: 0x34a64000  ori         $a2, $a1, 0x4000
    ctx->pc = 0x156d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_156d90:
    // 0x156d90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x156d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_156d94:
    // 0x156d94: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x156d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
label_156d98:
    // 0x156d98: 0x34058022  ori         $a1, $zero, 0x8022
    ctx->pc = 0x156d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
label_156d9c:
    // 0x156d9c: 0x24060512  addiu       $a2, $zero, 0x512
    ctx->pc = 0x156d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
label_156da0:
    // 0x156da0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x156da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_156da4:
    // 0x156da4: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x156da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_156da8:
    // 0x156da8: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x156da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
label_156dac:
    // 0x156dac: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x156dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_156db0:
    // 0x156db0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x156db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_156db4:
    // 0x156db4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156db8:
    // 0x156db8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x156db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_156dbc:
    // 0x156dbc: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x156dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
label_156dc0:
    // 0x156dc0: 0xfe0d0010  sd          $t5, 0x10($s0)
    ctx->pc = 0x156dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 13));
label_156dc4:
    // 0x156dc4: 0xfe0c0018  sd          $t4, 0x18($s0)
    ctx->pc = 0x156dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 12));
label_156dc8:
    // 0x156dc8: 0xdf8588c8  ld          $a1, -0x7738($gp)
    ctx->pc = 0x156dc8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
label_156dcc:
    // 0x156dcc: 0xfe050020  sd          $a1, 0x20($s0)
    ctx->pc = 0x156dccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
label_156dd0:
    // 0x156dd0: 0xfe0b0028  sd          $t3, 0x28($s0)
    ctx->pc = 0x156dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 11));
label_156dd4:
    // 0x156dd4: 0xfe0a0030  sd          $t2, 0x30($s0)
    ctx->pc = 0x156dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 10));
label_156dd8:
    // 0x156dd8: 0xfe090038  sd          $t1, 0x38($s0)
    ctx->pc = 0x156dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 9));
label_156ddc:
    // 0x156ddc: 0xfe080040  sd          $t0, 0x40($s0)
    ctx->pc = 0x156ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 8));
label_156de0:
    // 0x156de0: 0xfe0a0048  sd          $t2, 0x48($s0)
    ctx->pc = 0x156de0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 10));
label_156de4:
    // 0x156de4: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x156de4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
label_156de8:
    // 0x156de8: 0xfe060058  sd          $a2, 0x58($s0)
    ctx->pc = 0x156de8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 6));
label_156dec:
    // 0x156dec: 0x0  nop
    ctx->pc = 0x156decu;
    // NOP
label_156df0:
    // 0x156df0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x156df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156df4:
    // 0x156df4: 0x72a823  subu        $s5, $v1, $s2
    ctx->pc = 0x156df4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_156df8:
    // 0x156df8: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x156df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_156dfc:
    // 0x156dfc: 0x15a940  sll         $s5, $s5, 5
    ctx->pc = 0x156dfcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
label_156e00:
    // 0x156e00: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x156e00u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156e04:
    // 0x156e04: 0x15b102  srl         $s6, $s5, 4
    ctx->pc = 0x156e04u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 4));
label_156e08:
    // 0x156e08: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
label_156e0c:
    if (ctx->pc == 0x156E0Cu) {
        ctx->pc = 0x156E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E08u;
        // 0x156e0c: 0x12a842  srl         $s5, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E10u;
        goto label_156e10;
    }
    ctx->pc = 0x156E08u;
    {
        const bool branch_taken_0x156e08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x156E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E08u;
        // 0x156e0c: 0x12a842  srl         $s5, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e08) {
            ctx->pc = 0x156E18u;
            goto label_156e18;
        }
    }
    ctx->pc = 0x156E10u;
label_156e10:
    // 0x156e10: 0x10000006  b           . + 4 + (0x6 << 2)
label_156e14:
    if (ctx->pc == 0x156E14u) {
        ctx->pc = 0x156E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E10u;
        // 0x156e14: 0x46801020  cvt.s.w     $f0, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E18u;
        goto label_156e18;
    }
    ctx->pc = 0x156E10u;
    {
        const bool branch_taken_0x156e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E10u;
        // 0x156e14: 0x46801020  cvt.s.w     $f0, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e10) {
            ctx->pc = 0x156E2Cu;
            goto label_156e2c;
        }
    }
    ctx->pc = 0x156E18u;
label_156e18:
    // 0x156e18: 0x2a5a825  or          $s5, $s5, $a1
    ctx->pc = 0x156e18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
label_156e1c:
    // 0x156e1c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x156e1cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156e20:
    // 0x156e20: 0x0  nop
    ctx->pc = 0x156e20u;
    // NOP
label_156e24:
    // 0x156e24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_156e28:
    // 0x156e28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x156e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_156e2c:
    // 0x156e2c: 0x0  nop
    ctx->pc = 0x156e2cu;
    // NOP
label_156e30:
    // 0x156e30: 0x0  nop
    ctx->pc = 0x156e30u;
    // NOP
label_156e34:
    // 0x156e34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x156e34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_156e38:
    // 0x156e38: 0x0  nop
    ctx->pc = 0x156e38u;
    // NOP
label_156e3c:
    // 0x156e3c: 0x0  nop
    ctx->pc = 0x156e3cu;
    // NOP
label_156e40:
    // 0x156e40: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_156e44:
    if (ctx->pc == 0x156E44u) {
        ctx->pc = 0x156E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E40u;
        // 0x156e44: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E48u;
        goto label_156e48;
    }
    ctx->pc = 0x156E40u;
    {
        const bool branch_taken_0x156e40 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x156E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E40u;
        // 0x156e44: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e40) {
            ctx->pc = 0x156E54u;
            goto label_156e54;
        }
    }
    ctx->pc = 0x156E48u;
label_156e48:
    // 0x156e48: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x156e48u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156e4c:
    // 0x156e4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_156e50:
    if (ctx->pc == 0x156E50u) {
        ctx->pc = 0x156E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E4Cu;
        // 0x156e50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E54u;
        goto label_156e54;
    }
    ctx->pc = 0x156E4Cu;
    {
        const bool branch_taken_0x156e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E4Cu;
        // 0x156e50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e4c) {
            ctx->pc = 0x156E70u;
            goto label_156e70;
        }
    }
    ctx->pc = 0x156E54u;
label_156e54:
    // 0x156e54: 0x14c042  srl         $t8, $s4, 1
    ctx->pc = 0x156e54u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_156e58:
    // 0x156e58: 0x32950001  andi        $s5, $s4, 0x1
    ctx->pc = 0x156e58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_156e5c:
    // 0x156e5c: 0x315c025  or          $t8, $t8, $s5
    ctx->pc = 0x156e5cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 21));
label_156e60:
    // 0x156e60: 0x44980000  mtc1        $t8, $f0
    ctx->pc = 0x156e60u;
    { uint32_t bits = GPR_U32(ctx, 24); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156e64:
    // 0x156e64: 0x0  nop
    ctx->pc = 0x156e64u;
    // NOP
label_156e68:
    // 0x156e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_156e6c:
    // 0x156e6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x156e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_156e70:
    // 0x156e70: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x156e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_156e74:
    // 0x156e74: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x156e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_156e78:
    // 0x156e78: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x156e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_156e7c:
    // 0x156e7c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x156e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_156e80:
    // 0x156e80: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x156e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_156e84:
    // 0x156e84: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x156e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_156e88:
    // 0x156e88: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_156e8c:
    if (ctx->pc == 0x156E8Cu) {
        ctx->pc = 0x156E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E88u;
        // 0x156e8c: 0xae36001c  sw          $s6, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E90u;
        goto label_156e90;
    }
    ctx->pc = 0x156E88u;
    {
        const bool branch_taken_0x156e88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x156E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E88u;
        // 0x156e8c: 0xae36001c  sw          $s6, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e88) {
            ctx->pc = 0x156E9Cu;
            goto label_156e9c;
        }
    }
    ctx->pc = 0x156E90u;
label_156e90:
    // 0x156e90: 0x8e35001c  lw          $s5, 0x1C($s1)
    ctx->pc = 0x156e90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_156e94:
    // 0x156e94: 0x15a882  srl         $s5, $s5, 2
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
label_156e98:
    // 0x156e98: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x156e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
label_156e9c:
    // 0x156e9c: 0x0  nop
    ctx->pc = 0x156e9cu;
    // NOP
label_156ea0:
    // 0x156ea0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x156ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_156ea4:
    // 0x156ea4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x156ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_156ea8:
    // 0x156ea8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x156ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_156eac:
    // 0x156eac: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x156eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_156eb0:
    // 0x156eb0: 0x2e950002  sltiu       $s5, $s4, 0x2
    ctx->pc = 0x156eb0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_156eb4:
    // 0x156eb4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x156eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_156eb8:
    // 0x156eb8: 0x16a0ffd3  bnez        $s5, . + 4 + (-0x2D << 2)
label_156ebc:
    if (ctx->pc == 0x156EBCu) {
        ctx->pc = 0x156EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB8u;
        // 0x156ebc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EC0u;
        goto label_156ec0;
    }
    ctx->pc = 0x156EB8u;
    {
        const bool branch_taken_0x156eb8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x156EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB8u;
        // 0x156ebc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156eb8) {
            ctx->pc = 0x156E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156e08;
        }
    }
    ctx->pc = 0x156EC0u;
label_156ec0:
    // 0x156ec0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_156ec4:
    // 0x156ec4: 0x2e450011  sltiu       $a1, $s2, 0x11
    ctx->pc = 0x156ec4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_156ec8:
    // 0x156ec8: 0x14a0ffc8  bnez        $a1, . + 4 + (-0x38 << 2)
label_156ecc:
    if (ctx->pc == 0x156ECCu) {
        ctx->pc = 0x156ED0u;
        goto label_156ed0;
    }
    ctx->pc = 0x156EC8u;
    {
        const bool branch_taken_0x156ec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x156ec8) {
            ctx->pc = 0x156DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156dec;
        }
    }
    ctx->pc = 0x156ED0u;
label_156ed0:
    // 0x156ed0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x156ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_156ed4:
    // 0x156ed4: 0x2e650002  sltiu       $a1, $s3, 0x2
    ctx->pc = 0x156ed4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_156ed8:
    // 0x156ed8: 0x14a0ffb3  bnez        $a1, . + 4 + (-0x4D << 2)
label_156edc:
    if (ctx->pc == 0x156EDCu) {
        ctx->pc = 0x156EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ED8u;
        // 0x156edc: 0x261006c0  addiu       $s0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EE0u;
        goto label_156ee0;
    }
    ctx->pc = 0x156ED8u;
    {
        const bool branch_taken_0x156ed8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x156EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ED8u;
        // 0x156edc: 0x261006c0  addiu       $s0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ed8) {
            ctx->pc = 0x156DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156da8;
        }
    }
    ctx->pc = 0x156EE0u;
label_156ee0:
    // 0x156ee0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x156ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_156ee4:
    // 0x156ee4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x156ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156ee8:
    // 0x156ee8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x156ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_156eec:
    // 0x156eec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x156eecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_156ef0:
    // 0x156ef0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x156ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_156ef4:
    // 0x156ef4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x156ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156ef8:
    // 0x156ef8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x156ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156efc:
    // 0x156efc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156f00:
    // 0x156f00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156f04:
    // 0x156f04: 0x3e00008  jr          $ra
label_156f08:
    if (ctx->pc == 0x156F08u) {
        ctx->pc = 0x156F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F04u;
        // 0x156f08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F0Cu;
        goto label_156f0c;
    }
    ctx->pc = 0x156F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F04u;
        // 0x156f08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156F0Cu;
label_156f0c:
    // 0x156f0c: 0x0  nop
    ctx->pc = 0x156f0cu;
    // NOP
label_156f10:
    // 0x156f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f14:
    // 0x156f14: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x156f14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f18:
    // 0x156f18: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x156f18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f1c:
    // 0x156f1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f20:
    // 0x156f20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x156f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f24:
    // 0x156f24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x156f24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f28:
    // 0x156f28: 0x8c3821  addu        $a3, $a0, $t4
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_156f2c:
    // 0x156f2c: 0x8d3021  addu        $a2, $a0, $t5
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_156f30:
    // 0x156f30: 0xea7021  addu        $t6, $a3, $t2
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_156f34:
    // 0x156f34: 0x1c01821  addu        $v1, $t6, $zero
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 0)));
label_156f38:
    // 0x156f38: 0xcb7821  addu        $t7, $a2, $t3
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_156f3c:
    // 0x156f3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_156f40:
    // 0x156f40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x156f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_156f44:
    // 0x156f44: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x156f44u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
label_156f48:
    // 0x156f48: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x156f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_156f4c:
    // 0x156f4c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x156f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
label_156f50:
    // 0x156f50: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_156f54:
    // 0x156f54: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x156f54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
label_156f58:
    // 0x156f58: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_156f5c:
    // 0x156f5c: 0xadc00010  sw          $zero, 0x10($t6)
    ctx->pc = 0x156f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 0));
label_156f60:
    // 0x156f60: 0xadc00014  sw          $zero, 0x14($t6)
    ctx->pc = 0x156f60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 0));
label_156f64:
    // 0x156f64: 0xadc00018  sw          $zero, 0x18($t6)
    ctx->pc = 0x156f64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 0));
label_156f68:
    // 0x156f68: 0xadc0001c  sw          $zero, 0x1C($t6)
    ctx->pc = 0x156f68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 0));
label_156f6c:
    // 0x156f6c: 0xade000c0  sw          $zero, 0xC0($t7)
    ctx->pc = 0x156f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 192), GPR_U32(ctx, 0));
label_156f70:
    // 0x156f70: 0xade000c4  sw          $zero, 0xC4($t7)
    ctx->pc = 0x156f70u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 196), GPR_U32(ctx, 0));
label_156f74:
    // 0x156f74: 0xade000c8  sw          $zero, 0xC8($t7)
    ctx->pc = 0x156f74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 200), GPR_U32(ctx, 0));
label_156f78:
    // 0x156f78: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_156f7c:
    if (ctx->pc == 0x156F7Cu) {
        ctx->pc = 0x156F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F78u;
        // 0x156f7c: 0xade000cc  sw          $zero, 0xCC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F80u;
        goto label_156f80;
    }
    ctx->pc = 0x156F78u;
    {
        const bool branch_taken_0x156f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F78u;
        // 0x156f7c: 0xade000cc  sw          $zero, 0xCC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f78) {
            ctx->pc = 0x156F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f30;
        }
    }
    ctx->pc = 0x156F80u;
label_156f80:
    // 0x156f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_156f84:
    // 0x156f84: 0x258c0060  addiu       $t4, $t4, 0x60
    ctx->pc = 0x156f84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
label_156f88:
    // 0x156f88: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x156f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_156f8c:
    // 0x156f8c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_156f90:
    if (ctx->pc == 0x156F90u) {
        ctx->pc = 0x156F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F8Cu;
        // 0x156f90: 0x25ad0030  addiu       $t5, $t5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F94u;
        goto label_156f94;
    }
    ctx->pc = 0x156F8Cu;
    {
        const bool branch_taken_0x156f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F8Cu;
        // 0x156f90: 0x25ad0030  addiu       $t5, $t5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f8c) {
            ctx->pc = 0x156F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f1c;
        }
    }
    ctx->pc = 0x156F94u;
label_156f94:
    // 0x156f94: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x156f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_156f98:
    // 0x156f98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_156f9c:
    // 0x156f9c: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_156fa0:
    // 0x156fa0: 0x24c63050  addiu       $a2, $a2, 0x3050
    ctx->pc = 0x156fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12368));
label_156fa4:
    // 0x156fa4: 0xcb3821  addu        $a3, $a2, $t3
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_156fa8:
    // 0x156fa8: 0xac800ea0  sw          $zero, 0xEA0($a0)
    ctx->pc = 0x156fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3744), GPR_U32(ctx, 0));
label_156fac:
    // 0x156fac: 0x90ea0000  lbu         $t2, 0x0($a3)
    ctx->pc = 0x156facu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_156fb0:
    // 0x156fb0: 0x24633051  addiu       $v1, $v1, 0x3051
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12369));
label_156fb4:
    // 0x156fb4: 0x6b4821  addu        $t1, $v1, $t3
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_156fb8:
    // 0x156fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156fbc:
    // 0x156fbc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_156fc0:
    // 0x156fc0: 0x24633052  addiu       $v1, $v1, 0x3052
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12370));
label_156fc4:
    // 0x156fc4: 0x6b4021  addu        $t0, $v1, $t3
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_156fc8:
    // 0x156fc8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_156fcc:
    // 0x156fcc: 0xa08a0ea4  sb          $t2, 0xEA4($a0)
    ctx->pc = 0x156fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3748), (uint8_t)GPR_U32(ctx, 10));
label_156fd0:
    // 0x156fd0: 0x24633053  addiu       $v1, $v1, 0x3053
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12371));
label_156fd4:
    // 0x156fd4: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x156fd4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_156fd8:
    // 0x156fd8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_156fdc:
    // 0x156fdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x156fdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156fe0:
    // 0x156fe0: 0xa0890ea5  sb          $t1, 0xEA5($a0)
    ctx->pc = 0x156fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3749), (uint8_t)GPR_U32(ctx, 9));
label_156fe4:
    // 0x156fe4: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x156fe4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_156fe8:
    // 0x156fe8: 0xa0880ea6  sb          $t0, 0xEA6($a0)
    ctx->pc = 0x156fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3750), (uint8_t)GPR_U32(ctx, 8));
label_156fec:
    // 0x156fec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x156fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_156ff0:
    // 0x156ff0: 0xa0830ea7  sb          $v1, 0xEA7($a0)
    ctx->pc = 0x156ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3751), (uint8_t)GPR_U32(ctx, 3));
label_156ff4:
    // 0x156ff4: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x156ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_156ff8:
    // 0x156ff8: 0xdf8988c8  ld          $t1, -0x7738($gp)
    ctx->pc = 0x156ff8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
label_156ffc:
    // 0x156ffc: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x156ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_157000:
    // 0x157000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x157000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157004:
    // 0x157004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157008:
    // 0x157008: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x157008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_15700c:
    // 0x15700c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_157010:
    // 0x157010: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x157010u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_157014:
    // 0x157014: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_157018:
    // 0x157018: 0xad090144  sw          $t1, 0x144($t0)
    ctx->pc = 0x157018u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 324), GPR_U32(ctx, 9));
label_15701c:
    // 0x15701c: 0x0  nop
    ctx->pc = 0x15701cu;
    // NOP
label_157020:
    // 0x157020: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157020u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_157024:
    // 0x157024: 0x1054821  addu        $t1, $t0, $a1
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_157028:
    // 0x157028: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_15702c:
    // 0x15702c: 0x294c001a  slti        $t4, $t2, 0x1A
    ctx->pc = 0x15702cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
label_157030:
    // 0x157030: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_157034:
    // 0x157034: 0xad2d0190  sw          $t5, 0x190($t1)
    ctx->pc = 0x157034u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 400), GPR_U32(ctx, 13));
label_157038:
    // 0x157038: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157038u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_15703c:
    // 0x15703c: 0xad2d0194  sw          $t5, 0x194($t1)
    ctx->pc = 0x15703cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 404), GPR_U32(ctx, 13));
label_157040:
    // 0x157040: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157040u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_157044:
    // 0x157044: 0xad2d0198  sw          $t5, 0x198($t1)
    ctx->pc = 0x157044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 408), GPR_U32(ctx, 13));
label_157048:
    // 0x157048: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157048u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_15704c:
    // 0x15704c: 0xad2d01c0  sw          $t5, 0x1C0($t1)
    ctx->pc = 0x15704cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 448), GPR_U32(ctx, 13));
label_157050:
    // 0x157050: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157050u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_157054:
    // 0x157054: 0xad2d01c4  sw          $t5, 0x1C4($t1)
    ctx->pc = 0x157054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 452), GPR_U32(ctx, 13));
label_157058:
    // 0x157058: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157058u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_15705c:
    // 0x15705c: 0xad2d01c8  sw          $t5, 0x1C8($t1)
    ctx->pc = 0x15705cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 456), GPR_U32(ctx, 13));
label_157060:
    // 0x157060: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157060u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_157064:
    // 0x157064: 0xad2d01f0  sw          $t5, 0x1F0($t1)
    ctx->pc = 0x157064u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 496), GPR_U32(ctx, 13));
label_157068:
    // 0x157068: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157068u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_15706c:
    // 0x15706c: 0xad2d01f4  sw          $t5, 0x1F4($t1)
    ctx->pc = 0x15706cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 500), GPR_U32(ctx, 13));
    ctx->pc = 0x157070u;
    return;
}
