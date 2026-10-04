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


void FUN_0019b850_part384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x256880u: goto label_256880;
        case 0x256884u: goto label_256884;
        case 0x256888u: goto label_256888;
        case 0x25688cu: goto label_25688c;
        case 0x256890u: goto label_256890;
        case 0x256894u: goto label_256894;
        case 0x256898u: goto label_256898;
        case 0x25689cu: goto label_25689c;
        case 0x2568a0u: goto label_2568a0;
        case 0x2568a4u: goto label_2568a4;
        case 0x2568a8u: goto label_2568a8;
        case 0x2568acu: goto label_2568ac;
        case 0x2568b0u: goto label_2568b0;
        case 0x2568b4u: goto label_2568b4;
        case 0x2568b8u: goto label_2568b8;
        case 0x2568bcu: goto label_2568bc;
        case 0x2568c0u: goto label_2568c0;
        case 0x2568c4u: goto label_2568c4;
        case 0x2568c8u: goto label_2568c8;
        case 0x2568ccu: goto label_2568cc;
        case 0x2568d0u: goto label_2568d0;
        case 0x2568d4u: goto label_2568d4;
        case 0x2568d8u: goto label_2568d8;
        case 0x2568dcu: goto label_2568dc;
        case 0x2568e0u: goto label_2568e0;
        case 0x2568e4u: goto label_2568e4;
        case 0x2568e8u: goto label_2568e8;
        case 0x2568ecu: goto label_2568ec;
        case 0x2568f0u: goto label_2568f0;
        case 0x2568f4u: goto label_2568f4;
        case 0x2568f8u: goto label_2568f8;
        case 0x2568fcu: goto label_2568fc;
        case 0x256900u: goto label_256900;
        case 0x256904u: goto label_256904;
        case 0x256908u: goto label_256908;
        case 0x25690cu: goto label_25690c;
        case 0x256910u: goto label_256910;
        case 0x256914u: goto label_256914;
        case 0x256918u: goto label_256918;
        case 0x25691cu: goto label_25691c;
        case 0x256920u: goto label_256920;
        case 0x256924u: goto label_256924;
        case 0x256928u: goto label_256928;
        case 0x25692cu: goto label_25692c;
        case 0x256930u: goto label_256930;
        case 0x256934u: goto label_256934;
        case 0x256938u: goto label_256938;
        case 0x25693cu: goto label_25693c;
        case 0x256940u: goto label_256940;
        case 0x256944u: goto label_256944;
        case 0x256948u: goto label_256948;
        case 0x25694cu: goto label_25694c;
        case 0x256950u: goto label_256950;
        case 0x256954u: goto label_256954;
        case 0x256958u: goto label_256958;
        case 0x25695cu: goto label_25695c;
        case 0x256960u: goto label_256960;
        case 0x256964u: goto label_256964;
        case 0x256968u: goto label_256968;
        case 0x25696cu: goto label_25696c;
        case 0x256970u: goto label_256970;
        case 0x256974u: goto label_256974;
        case 0x256978u: goto label_256978;
        case 0x25697cu: goto label_25697c;
        case 0x256980u: goto label_256980;
        case 0x256984u: goto label_256984;
        case 0x256988u: goto label_256988;
        case 0x25698cu: goto label_25698c;
        case 0x256990u: goto label_256990;
        case 0x256994u: goto label_256994;
        case 0x256998u: goto label_256998;
        case 0x25699cu: goto label_25699c;
        case 0x2569a0u: goto label_2569a0;
        case 0x2569a4u: goto label_2569a4;
        case 0x2569a8u: goto label_2569a8;
        case 0x2569acu: goto label_2569ac;
        case 0x2569b0u: goto label_2569b0;
        case 0x2569b4u: goto label_2569b4;
        case 0x2569b8u: goto label_2569b8;
        case 0x2569bcu: goto label_2569bc;
        case 0x2569c0u: goto label_2569c0;
        case 0x2569c4u: goto label_2569c4;
        case 0x2569c8u: goto label_2569c8;
        case 0x2569ccu: goto label_2569cc;
        case 0x2569d0u: goto label_2569d0;
        case 0x2569d4u: goto label_2569d4;
        case 0x2569d8u: goto label_2569d8;
        case 0x2569dcu: goto label_2569dc;
        case 0x2569e0u: goto label_2569e0;
        case 0x2569e4u: goto label_2569e4;
        case 0x2569e8u: goto label_2569e8;
        case 0x2569ecu: goto label_2569ec;
        case 0x2569f0u: goto label_2569f0;
        case 0x2569f4u: goto label_2569f4;
        case 0x2569f8u: goto label_2569f8;
        case 0x2569fcu: goto label_2569fc;
        case 0x256a00u: goto label_256a00;
        case 0x256a04u: goto label_256a04;
        case 0x256a08u: goto label_256a08;
        case 0x256a0cu: goto label_256a0c;
        case 0x256a10u: goto label_256a10;
        case 0x256a14u: goto label_256a14;
        case 0x256a18u: goto label_256a18;
        case 0x256a1cu: goto label_256a1c;
        case 0x256a20u: goto label_256a20;
        case 0x256a24u: goto label_256a24;
        case 0x256a28u: goto label_256a28;
        case 0x256a2cu: goto label_256a2c;
        case 0x256a30u: goto label_256a30;
        case 0x256a34u: goto label_256a34;
        case 0x256a38u: goto label_256a38;
        case 0x256a3cu: goto label_256a3c;
        case 0x256a40u: goto label_256a40;
        case 0x256a44u: goto label_256a44;
        case 0x256a48u: goto label_256a48;
        case 0x256a4cu: goto label_256a4c;
        case 0x256a50u: goto label_256a50;
        case 0x256a54u: goto label_256a54;
        case 0x256a58u: goto label_256a58;
        case 0x256a5cu: goto label_256a5c;
        case 0x256a60u: goto label_256a60;
        case 0x256a64u: goto label_256a64;
        case 0x256a68u: goto label_256a68;
        case 0x256a6cu: goto label_256a6c;
        case 0x256a70u: goto label_256a70;
        case 0x256a74u: goto label_256a74;
        case 0x256a78u: goto label_256a78;
        case 0x256a7cu: goto label_256a7c;
        case 0x256a80u: goto label_256a80;
        case 0x256a84u: goto label_256a84;
        case 0x256a88u: goto label_256a88;
        case 0x256a8cu: goto label_256a8c;
        case 0x256a90u: goto label_256a90;
        case 0x256a94u: goto label_256a94;
        case 0x256a98u: goto label_256a98;
        case 0x256a9cu: goto label_256a9c;
        case 0x256aa0u: goto label_256aa0;
        case 0x256aa4u: goto label_256aa4;
        case 0x256aa8u: goto label_256aa8;
        case 0x256aacu: goto label_256aac;
        case 0x256ab0u: goto label_256ab0;
        case 0x256ab4u: goto label_256ab4;
        case 0x256ab8u: goto label_256ab8;
        case 0x256abcu: goto label_256abc;
        case 0x256ac0u: goto label_256ac0;
        case 0x256ac4u: goto label_256ac4;
        case 0x256ac8u: goto label_256ac8;
        case 0x256accu: goto label_256acc;
        case 0x256ad0u: goto label_256ad0;
        case 0x256ad4u: goto label_256ad4;
        case 0x256ad8u: goto label_256ad8;
        case 0x256adcu: goto label_256adc;
        case 0x256ae0u: goto label_256ae0;
        case 0x256ae4u: goto label_256ae4;
        case 0x256ae8u: goto label_256ae8;
        case 0x256aecu: goto label_256aec;
        case 0x256af0u: goto label_256af0;
        case 0x256af4u: goto label_256af4;
        case 0x256af8u: goto label_256af8;
        case 0x256afcu: goto label_256afc;
        case 0x256b00u: goto label_256b00;
        case 0x256b04u: goto label_256b04;
        case 0x256b08u: goto label_256b08;
        case 0x256b0cu: goto label_256b0c;
        case 0x256b10u: goto label_256b10;
        case 0x256b14u: goto label_256b14;
        case 0x256b18u: goto label_256b18;
        case 0x256b1cu: goto label_256b1c;
        case 0x256b20u: goto label_256b20;
        case 0x256b24u: goto label_256b24;
        case 0x256b28u: goto label_256b28;
        case 0x256b2cu: goto label_256b2c;
        case 0x256b30u: goto label_256b30;
        case 0x256b34u: goto label_256b34;
        case 0x256b38u: goto label_256b38;
        case 0x256b3cu: goto label_256b3c;
        case 0x256b40u: goto label_256b40;
        case 0x256b44u: goto label_256b44;
        case 0x256b48u: goto label_256b48;
        case 0x256b4cu: goto label_256b4c;
        case 0x256b50u: goto label_256b50;
        case 0x256b54u: goto label_256b54;
        case 0x256b58u: goto label_256b58;
        case 0x256b5cu: goto label_256b5c;
        case 0x256b60u: goto label_256b60;
        case 0x256b64u: goto label_256b64;
        case 0x256b68u: goto label_256b68;
        case 0x256b6cu: goto label_256b6c;
        case 0x256b70u: goto label_256b70;
        case 0x256b74u: goto label_256b74;
        case 0x256b78u: goto label_256b78;
        case 0x256b7cu: goto label_256b7c;
        case 0x256b80u: goto label_256b80;
        case 0x256b84u: goto label_256b84;
        case 0x256b88u: goto label_256b88;
        case 0x256b8cu: goto label_256b8c;
        case 0x256b90u: goto label_256b90;
        case 0x256b94u: goto label_256b94;
        case 0x256b98u: goto label_256b98;
        case 0x256b9cu: goto label_256b9c;
        case 0x256ba0u: goto label_256ba0;
        case 0x256ba4u: goto label_256ba4;
        case 0x256ba8u: goto label_256ba8;
        case 0x256bacu: goto label_256bac;
        case 0x256bb0u: goto label_256bb0;
        case 0x256bb4u: goto label_256bb4;
        case 0x256bb8u: goto label_256bb8;
        case 0x256bbcu: goto label_256bbc;
        case 0x256bc0u: goto label_256bc0;
        case 0x256bc4u: goto label_256bc4;
        case 0x256bc8u: goto label_256bc8;
        case 0x256bccu: goto label_256bcc;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bd4u: goto label_256bd4;
        case 0x256bd8u: goto label_256bd8;
        case 0x256bdcu: goto label_256bdc;
        case 0x256be0u: goto label_256be0;
        case 0x256be4u: goto label_256be4;
        case 0x256be8u: goto label_256be8;
        case 0x256becu: goto label_256bec;
        case 0x256bf0u: goto label_256bf0;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bf8u: goto label_256bf8;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c00u: goto label_256c00;
        case 0x256c04u: goto label_256c04;
        case 0x256c08u: goto label_256c08;
        case 0x256c0cu: goto label_256c0c;
        case 0x256c10u: goto label_256c10;
        case 0x256c14u: goto label_256c14;
        case 0x256c18u: goto label_256c18;
        case 0x256c1cu: goto label_256c1c;
        case 0x256c20u: goto label_256c20;
        case 0x256c24u: goto label_256c24;
        case 0x256c28u: goto label_256c28;
        case 0x256c2cu: goto label_256c2c;
        case 0x256c30u: goto label_256c30;
        case 0x256c34u: goto label_256c34;
        case 0x256c38u: goto label_256c38;
        case 0x256c3cu: goto label_256c3c;
        case 0x256c40u: goto label_256c40;
        case 0x256c44u: goto label_256c44;
        case 0x256c48u: goto label_256c48;
        case 0x256c4cu: goto label_256c4c;
        case 0x256c50u: goto label_256c50;
        case 0x256c54u: goto label_256c54;
        case 0x256c58u: goto label_256c58;
        case 0x256c5cu: goto label_256c5c;
        case 0x256c60u: goto label_256c60;
        case 0x256c64u: goto label_256c64;
        case 0x256c68u: goto label_256c68;
        case 0x256c6cu: goto label_256c6c;
        case 0x256c70u: goto label_256c70;
        case 0x256c74u: goto label_256c74;
        case 0x256c78u: goto label_256c78;
        case 0x256c7cu: goto label_256c7c;
        case 0x256c80u: goto label_256c80;
        case 0x256c84u: goto label_256c84;
        case 0x256c88u: goto label_256c88;
        case 0x256c8cu: goto label_256c8c;
        case 0x256c90u: goto label_256c90;
        case 0x256c94u: goto label_256c94;
        case 0x256c98u: goto label_256c98;
        case 0x256c9cu: goto label_256c9c;
        case 0x256ca0u: goto label_256ca0;
        case 0x256ca4u: goto label_256ca4;
        case 0x256ca8u: goto label_256ca8;
        case 0x256cacu: goto label_256cac;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cbcu: goto label_256cbc;
        case 0x256cc0u: goto label_256cc0;
        case 0x256cc4u: goto label_256cc4;
        case 0x256cc8u: goto label_256cc8;
        case 0x256cccu: goto label_256ccc;
        case 0x256cd0u: goto label_256cd0;
        case 0x256cd4u: goto label_256cd4;
        case 0x256cd8u: goto label_256cd8;
        case 0x256cdcu: goto label_256cdc;
        case 0x256ce0u: goto label_256ce0;
        case 0x256ce4u: goto label_256ce4;
        case 0x256ce8u: goto label_256ce8;
        case 0x256cecu: goto label_256cec;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256cfcu: goto label_256cfc;
        case 0x256d00u: goto label_256d00;
        case 0x256d04u: goto label_256d04;
        case 0x256d08u: goto label_256d08;
        case 0x256d0cu: goto label_256d0c;
        case 0x256d10u: goto label_256d10;
        case 0x256d14u: goto label_256d14;
        case 0x256d18u: goto label_256d18;
        case 0x256d1cu: goto label_256d1c;
        case 0x256d20u: goto label_256d20;
        case 0x256d24u: goto label_256d24;
        case 0x256d28u: goto label_256d28;
        case 0x256d2cu: goto label_256d2c;
        case 0x256d30u: goto label_256d30;
        case 0x256d34u: goto label_256d34;
        case 0x256d38u: goto label_256d38;
        case 0x256d3cu: goto label_256d3c;
        case 0x256d40u: goto label_256d40;
        case 0x256d44u: goto label_256d44;
        case 0x256d48u: goto label_256d48;
        case 0x256d4cu: goto label_256d4c;
        case 0x256d50u: goto label_256d50;
        case 0x256d54u: goto label_256d54;
        case 0x256d58u: goto label_256d58;
        case 0x256d5cu: goto label_256d5c;
        case 0x256d60u: goto label_256d60;
        case 0x256d64u: goto label_256d64;
        case 0x256d68u: goto label_256d68;
        case 0x256d6cu: goto label_256d6c;
        case 0x256d70u: goto label_256d70;
        case 0x256d74u: goto label_256d74;
        case 0x256d78u: goto label_256d78;
        case 0x256d7cu: goto label_256d7c;
        case 0x256d80u: goto label_256d80;
        case 0x256d84u: goto label_256d84;
        case 0x256d88u: goto label_256d88;
        case 0x256d8cu: goto label_256d8c;
        case 0x256d90u: goto label_256d90;
        case 0x256d94u: goto label_256d94;
        case 0x256d98u: goto label_256d98;
        case 0x256d9cu: goto label_256d9c;
        case 0x256da0u: goto label_256da0;
        case 0x256da4u: goto label_256da4;
        case 0x256da8u: goto label_256da8;
        case 0x256dacu: goto label_256dac;
        case 0x256db0u: goto label_256db0;
        case 0x256db4u: goto label_256db4;
        case 0x256db8u: goto label_256db8;
        case 0x256dbcu: goto label_256dbc;
        case 0x256dc0u: goto label_256dc0;
        case 0x256dc4u: goto label_256dc4;
        case 0x256dc8u: goto label_256dc8;
        case 0x256dccu: goto label_256dcc;
        case 0x256dd0u: goto label_256dd0;
        case 0x256dd4u: goto label_256dd4;
        case 0x256dd8u: goto label_256dd8;
        case 0x256ddcu: goto label_256ddc;
        case 0x256de0u: goto label_256de0;
        case 0x256de4u: goto label_256de4;
        case 0x256de8u: goto label_256de8;
        case 0x256decu: goto label_256dec;
        case 0x256df0u: goto label_256df0;
        case 0x256df4u: goto label_256df4;
        case 0x256df8u: goto label_256df8;
        case 0x256dfcu: goto label_256dfc;
        case 0x256e00u: goto label_256e00;
        case 0x256e04u: goto label_256e04;
        case 0x256e08u: goto label_256e08;
        case 0x256e0cu: goto label_256e0c;
        case 0x256e10u: goto label_256e10;
        case 0x256e14u: goto label_256e14;
        case 0x256e18u: goto label_256e18;
        case 0x256e1cu: goto label_256e1c;
        case 0x256e20u: goto label_256e20;
        case 0x256e24u: goto label_256e24;
        case 0x256e28u: goto label_256e28;
        case 0x256e2cu: goto label_256e2c;
        case 0x256e30u: goto label_256e30;
        case 0x256e34u: goto label_256e34;
        case 0x256e38u: goto label_256e38;
        case 0x256e3cu: goto label_256e3c;
        case 0x256e40u: goto label_256e40;
        case 0x256e44u: goto label_256e44;
        case 0x256e48u: goto label_256e48;
        case 0x256e4cu: goto label_256e4c;
        case 0x256e50u: goto label_256e50;
        case 0x256e54u: goto label_256e54;
        case 0x256e58u: goto label_256e58;
        case 0x256e5cu: goto label_256e5c;
        case 0x256e60u: goto label_256e60;
        case 0x256e64u: goto label_256e64;
        case 0x256e68u: goto label_256e68;
        case 0x256e6cu: goto label_256e6c;
        case 0x256e70u: goto label_256e70;
        case 0x256e74u: goto label_256e74;
        case 0x256e78u: goto label_256e78;
        case 0x256e7cu: goto label_256e7c;
        case 0x256e80u: goto label_256e80;
        case 0x256e84u: goto label_256e84;
        case 0x256e88u: goto label_256e88;
        case 0x256e8cu: goto label_256e8c;
        case 0x256e90u: goto label_256e90;
        case 0x256e94u: goto label_256e94;
        case 0x256e98u: goto label_256e98;
        case 0x256e9cu: goto label_256e9c;
        case 0x256ea0u: goto label_256ea0;
        case 0x256ea4u: goto label_256ea4;
        case 0x256ea8u: goto label_256ea8;
        case 0x256eacu: goto label_256eac;
        case 0x256eb0u: goto label_256eb0;
        case 0x256eb4u: goto label_256eb4;
        case 0x256eb8u: goto label_256eb8;
        case 0x256ebcu: goto label_256ebc;
        case 0x256ec0u: goto label_256ec0;
        case 0x256ec4u: goto label_256ec4;
        case 0x256ec8u: goto label_256ec8;
        case 0x256eccu: goto label_256ecc;
        case 0x256ed0u: goto label_256ed0;
        case 0x256ed4u: goto label_256ed4;
        case 0x256ed8u: goto label_256ed8;
        case 0x256edcu: goto label_256edc;
        case 0x256ee0u: goto label_256ee0;
        case 0x256ee4u: goto label_256ee4;
        case 0x256ee8u: goto label_256ee8;
        case 0x256eecu: goto label_256eec;
        case 0x256ef0u: goto label_256ef0;
        case 0x256ef4u: goto label_256ef4;
        case 0x256ef8u: goto label_256ef8;
        case 0x256efcu: goto label_256efc;
        case 0x256f00u: goto label_256f00;
        case 0x256f04u: goto label_256f04;
        case 0x256f08u: goto label_256f08;
        case 0x256f0cu: goto label_256f0c;
        case 0x256f10u: goto label_256f10;
        case 0x256f14u: goto label_256f14;
        case 0x256f18u: goto label_256f18;
        case 0x256f1cu: goto label_256f1c;
        case 0x256f20u: goto label_256f20;
        case 0x256f24u: goto label_256f24;
        case 0x256f28u: goto label_256f28;
        case 0x256f2cu: goto label_256f2c;
        case 0x256f30u: goto label_256f30;
        case 0x256f34u: goto label_256f34;
        case 0x256f38u: goto label_256f38;
        case 0x256f3cu: goto label_256f3c;
        case 0x256f40u: goto label_256f40;
        case 0x256f44u: goto label_256f44;
        case 0x256f48u: goto label_256f48;
        case 0x256f4cu: goto label_256f4c;
        case 0x256f50u: goto label_256f50;
        case 0x256f54u: goto label_256f54;
        case 0x256f58u: goto label_256f58;
        case 0x256f5cu: goto label_256f5c;
        case 0x256f60u: goto label_256f60;
        case 0x256f64u: goto label_256f64;
        case 0x256f68u: goto label_256f68;
        case 0x256f6cu: goto label_256f6c;
        case 0x256f70u: goto label_256f70;
        case 0x256f74u: goto label_256f74;
        case 0x256f78u: goto label_256f78;
        case 0x256f7cu: goto label_256f7c;
        case 0x256f80u: goto label_256f80;
        case 0x256f84u: goto label_256f84;
        case 0x256f88u: goto label_256f88;
        case 0x256f8cu: goto label_256f8c;
        case 0x256f90u: goto label_256f90;
        case 0x256f94u: goto label_256f94;
        case 0x256f98u: goto label_256f98;
        case 0x256f9cu: goto label_256f9c;
        case 0x256fa0u: goto label_256fa0;
        case 0x256fa4u: goto label_256fa4;
        case 0x256fa8u: goto label_256fa8;
        case 0x256facu: goto label_256fac;
        case 0x256fb0u: goto label_256fb0;
        case 0x256fb4u: goto label_256fb4;
        case 0x256fb8u: goto label_256fb8;
        case 0x256fbcu: goto label_256fbc;
        case 0x256fc0u: goto label_256fc0;
        case 0x256fc4u: goto label_256fc4;
        case 0x256fc8u: goto label_256fc8;
        case 0x256fccu: goto label_256fcc;
        case 0x256fd0u: goto label_256fd0;
        case 0x256fd4u: goto label_256fd4;
        case 0x256fd8u: goto label_256fd8;
        case 0x256fdcu: goto label_256fdc;
        case 0x256fe0u: goto label_256fe0;
        case 0x256fe4u: goto label_256fe4;
        case 0x256fe8u: goto label_256fe8;
        case 0x256fecu: goto label_256fec;
        case 0x256ff0u: goto label_256ff0;
        case 0x256ff4u: goto label_256ff4;
        case 0x256ff8u: goto label_256ff8;
        case 0x256ffcu: goto label_256ffc;
        case 0x257000u: goto label_257000;
        case 0x257004u: goto label_257004;
        case 0x257008u: goto label_257008;
        case 0x25700cu: goto label_25700c;
        case 0x257010u: goto label_257010;
        case 0x257014u: goto label_257014;
        case 0x257018u: goto label_257018;
        case 0x25701cu: goto label_25701c;
        case 0x257020u: goto label_257020;
        case 0x257024u: goto label_257024;
        case 0x257028u: goto label_257028;
        case 0x25702cu: goto label_25702c;
        case 0x257030u: goto label_257030;
        case 0x257034u: goto label_257034;
        case 0x257038u: goto label_257038;
        case 0x25703cu: goto label_25703c;
        case 0x257040u: goto label_257040;
        case 0x257044u: goto label_257044;
        case 0x257048u: goto label_257048;
        case 0x25704cu: goto label_25704c;
        default: return;
    }

label_256880:
    // 0x256880: 0x1cd  break       0, 7
    ctx->pc = 0x256880u;
    runtime->handleBreak(rdram, ctx);
label_256884:
    // 0x256884: 0xc320  .word       0x0000C320                   # add         $t8, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_256888:
    // 0x256888: 0x0  nop
    ctx->pc = 0x256888u;
    // NOP
label_25688c:
    // 0x25688c: 0x0  nop
    ctx->pc = 0x25688cu;
    // NOP
label_256890:
    // 0x256890: 0x1e6  .word       0x000001E6                   # xor         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256890u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256894:
    // 0x256894: 0x7a00  sll         $t7, $zero, 8
    ctx->pc = 0x256894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256898:
    // 0x256898: 0x0  nop
    ctx->pc = 0x256898u;
    // NOP
label_25689c:
    // 0x25689c: 0x0  nop
    ctx->pc = 0x25689cu;
    // NOP
label_2568a0:
    // 0x2568a0: 0x1f6  tne         $zero, $zero, 7
    ctx->pc = 0x2568a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2568a4:
    // 0x2568a4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2568a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2568a8:
    // 0x2568a8: 0x0  nop
    ctx->pc = 0x2568a8u;
    // NOP
label_2568ac:
    // 0x2568ac: 0x0  nop
    ctx->pc = 0x2568acu;
    // NOP
label_2568b0:
    // 0x2568b0: 0x205  .word       0x00000205                   # INVALID     $zero, $zero, 0x205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2568B0 raw=0x00000205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2568b4:
    // 0x2568b4: 0x7080  sll         $t6, $zero, 2
    ctx->pc = 0x2568b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2568b8:
    // 0x2568b8: 0x0  nop
    ctx->pc = 0x2568b8u;
    // NOP
label_2568bc:
    // 0x2568bc: 0x0  nop
    ctx->pc = 0x2568bcu;
    // NOP
label_2568c0:
    // 0x2568c0: 0x214  .word       0x00000214                   # dsllv       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2568c4:
    // 0x2568c4: 0x9040  sll         $s2, $zero, 1
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2568c8:
    // 0x2568c8: 0x0  nop
    ctx->pc = 0x2568c8u;
    // NOP
label_2568cc:
    // 0x2568cc: 0x0  nop
    ctx->pc = 0x2568ccu;
    // NOP
label_2568d0:
    // 0x2568d0: 0x227  .word       0x00000227                   # not         $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568d0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2568d4:
    // 0x2568d4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2568d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2568d8:
    // 0x2568d8: 0x0  nop
    ctx->pc = 0x2568d8u;
    // NOP
label_2568dc:
    // 0x2568dc: 0x0  nop
    ctx->pc = 0x2568dcu;
    // NOP
label_2568e0:
    // 0x2568e0: 0x238  dsll        $zero, $zero, 8
    ctx->pc = 0x2568e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_2568e4:
    // 0x2568e4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2568e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2568e8:
    // 0x2568e8: 0x0  nop
    ctx->pc = 0x2568e8u;
    // NOP
label_2568ec:
    // 0x2568ec: 0x0  nop
    ctx->pc = 0x2568ecu;
    // NOP
label_2568f0:
    // 0x2568f0: 0x24a  .word       0x0000024A                   # movz        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2568f4:
    // 0x2568f4: 0x13970  tge         $zero, $at, 229
    ctx->pc = 0x2568f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2568f8:
    // 0x2568f8: 0x0  nop
    ctx->pc = 0x2568f8u;
    // NOP
label_2568fc:
    // 0x2568fc: 0x0  nop
    ctx->pc = 0x2568fcu;
    // NOP
label_256900:
    // 0x256900: 0x272  tlt         $zero, $zero, 9
    ctx->pc = 0x256900u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256904:
    // 0x256904: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_256908:
    // 0x256908: 0x0  nop
    ctx->pc = 0x256908u;
    // NOP
label_25690c:
    // 0x25690c: 0x0  nop
    ctx->pc = 0x25690cu;
    // NOP
label_256910:
    // 0x256910: 0x27c  dsll32      $zero, $zero, 9
    ctx->pc = 0x256910u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 9));
label_256914:
    // 0x256914: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x256914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256918:
    // 0x256918: 0x0  nop
    ctx->pc = 0x256918u;
    // NOP
label_25691c:
    // 0x25691c: 0x0  nop
    ctx->pc = 0x25691cu;
    // NOP
label_256920:
    // 0x256920: 0x28a  .word       0x0000028A                   # movz        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256920u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256924:
    // 0x256924: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256924u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_256928:
    // 0x256928: 0x0  nop
    ctx->pc = 0x256928u;
    // NOP
label_25692c:
    // 0x25692c: 0x0  nop
    ctx->pc = 0x25692cu;
    // NOP
label_256930:
    // 0x256930: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256930u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_256934:
    // 0x256934: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_256938:
    // 0x256938: 0x0  nop
    ctx->pc = 0x256938u;
    // NOP
label_25693c:
    // 0x25693c: 0x0  nop
    ctx->pc = 0x25693cu;
    // NOP
label_256940:
    // 0x256940: 0x2aa  .word       0x000002AA                   # slt         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256940u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256944:
    // 0x256944: 0x5280  sll         $t2, $zero, 10
    ctx->pc = 0x256944u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_256948:
    // 0x256948: 0x0  nop
    ctx->pc = 0x256948u;
    // NOP
label_25694c:
    // 0x25694c: 0x0  nop
    ctx->pc = 0x25694cu;
    // NOP
label_256950:
    // 0x256950: 0x2b5  .word       0x000002B5                   # INVALID     $zero, $zero, 0x2B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x256950 raw=0x000002B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256954:
    // 0x256954: 0x5280  sll         $t2, $zero, 10
    ctx->pc = 0x256954u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_256958:
    // 0x256958: 0x0  nop
    ctx->pc = 0x256958u;
    // NOP
label_25695c:
    // 0x25695c: 0x0  nop
    ctx->pc = 0x25695cu;
    // NOP
label_256960:
    // 0x256960: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x256960u;
    
label_256964:
    // 0x256964: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256968:
    // 0x256968: 0x0  nop
    ctx->pc = 0x256968u;
    // NOP
label_25696c:
    // 0x25696c: 0x0  nop
    ctx->pc = 0x25696cu;
    // NOP
label_256970:
    // 0x256970: 0x2d1  .word       0x000002D1                   # mthi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256970u;
    ctx->hi = GPR_U64(ctx, 0);
label_256974:
    // 0x256974: 0x9e90  .word       0x00009E90                   # mfhi        $s3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256974u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_256978:
    // 0x256978: 0x0  nop
    ctx->pc = 0x256978u;
    // NOP
label_25697c:
    // 0x25697c: 0x0  nop
    ctx->pc = 0x25697cu;
    // NOP
label_256980:
    // 0x256980: 0x2e5  .word       0x000002E5                   # move        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256980u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256984:
    // 0x256984: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x256984u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_256988:
    // 0x256988: 0x0  nop
    ctx->pc = 0x256988u;
    // NOP
label_25698c:
    // 0x25698c: 0x0  nop
    ctx->pc = 0x25698cu;
    // NOP
label_256990:
    // 0x256990: 0x2f4  teq         $zero, $zero, 11
    ctx->pc = 0x256990u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256994:
    // 0x256994: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x256994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256998:
    // 0x256998: 0x0  nop
    ctx->pc = 0x256998u;
    // NOP
label_25699c:
    // 0x25699c: 0x0  nop
    ctx->pc = 0x25699cu;
    // NOP
label_2569a0:
    // 0x2569a0: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569a0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2569a4:
    // 0x2569a4: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2569a8:
    // 0x2569a8: 0x0  nop
    ctx->pc = 0x2569a8u;
    // NOP
label_2569ac:
    // 0x2569ac: 0x0  nop
    ctx->pc = 0x2569acu;
    // NOP
label_2569b0:
    // 0x2569b0: 0x315  .word       0x00000315                   # INVALID     $zero, $zero, 0x315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2569B0 raw=0x00000315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2569b4:
    // 0x2569b4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2569b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2569b8:
    // 0x2569b8: 0x0  nop
    ctx->pc = 0x2569b8u;
    // NOP
label_2569bc:
    // 0x2569bc: 0x0  nop
    ctx->pc = 0x2569bcu;
    // NOP
label_2569c0:
    // 0x2569c0: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569c0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2569c4:
    // 0x2569c4: 0xa040  sll         $s4, $zero, 1
    ctx->pc = 0x2569c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2569c8:
    // 0x2569c8: 0x0  nop
    ctx->pc = 0x2569c8u;
    // NOP
label_2569cc:
    // 0x2569cc: 0x0  nop
    ctx->pc = 0x2569ccu;
    // NOP
label_2569d0:
    // 0x2569d0: 0x33c  dsll32      $zero, $zero, 12
    ctx->pc = 0x2569d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 12));
label_2569d4:
    // 0x2569d4: 0xfe40  sll         $ra, $zero, 25
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2569d8:
    // 0x2569d8: 0x0  nop
    ctx->pc = 0x2569d8u;
    // NOP
label_2569dc:
    // 0x2569dc: 0x0  nop
    ctx->pc = 0x2569dcu;
    // NOP
label_2569e0:
    // 0x2569e0: 0x35c  .word       0x0000035C                   # dmult       $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2569E0 raw=0x0000035C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2569e4:
    // 0x2569e4: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2569e8:
    // 0x2569e8: 0x0  nop
    ctx->pc = 0x2569e8u;
    // NOP
label_2569ec:
    // 0x2569ec: 0x0  nop
    ctx->pc = 0x2569ecu;
    // NOP
label_2569f0:
    // 0x2569f0: 0x367  .word       0x00000367                   # not         $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569f0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2569f4:
    // 0x2569f4: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2569f8:
    // 0x2569f8: 0x0  nop
    ctx->pc = 0x2569f8u;
    // NOP
label_2569fc:
    // 0x2569fc: 0x0  nop
    ctx->pc = 0x2569fcu;
    // NOP
label_256a00:
    // 0x256a00: 0x377  .word       0x00000377                   # INVALID     $zero, $zero, 0x377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x256A00 raw=0x00000377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256a04:
    // 0x256a04: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256a08:
    // 0x256a08: 0x0  nop
    ctx->pc = 0x256a08u;
    // NOP
label_256a0c:
    // 0x256a0c: 0x0  nop
    ctx->pc = 0x256a0cu;
    // NOP
label_256a10:
    // 0x256a10: 0x383  sra         $zero, $zero, 14
    ctx->pc = 0x256a10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 14));
label_256a14:
    // 0x256a14: 0x55b0  tge         $zero, $zero, 342
    ctx->pc = 0x256a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a18:
    // 0x256a18: 0x0  nop
    ctx->pc = 0x256a18u;
    // NOP
label_256a1c:
    // 0x256a1c: 0x0  nop
    ctx->pc = 0x256a1cu;
    // NOP
label_256a20:
    // 0x256a20: 0x38e  .word       0x0000038E                   # INVALID     $zero, $zero, 0x38E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256A20 raw=0x0000038E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256a24:
    // 0x256a24: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x256a24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_256a28:
    // 0x256a28: 0x0  nop
    ctx->pc = 0x256a28u;
    // NOP
label_256a2c:
    // 0x256a2c: 0x0  nop
    ctx->pc = 0x256a2cu;
    // NOP
label_256a30:
    // 0x256a30: 0x39b  .word       0x0000039B                   # divu        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a30u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_256a34:
    // 0x256a34: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x256a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a38:
    // 0x256a38: 0x0  nop
    ctx->pc = 0x256a38u;
    // NOP
label_256a3c:
    // 0x256a3c: 0x0  nop
    ctx->pc = 0x256a3cu;
    // NOP
label_256a40:
    // 0x256a40: 0x3a5  .word       0x000003A5                   # move        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256a44:
    // 0x256a44: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x256a44u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_256a48:
    // 0x256a48: 0x0  nop
    ctx->pc = 0x256a48u;
    // NOP
label_256a4c:
    // 0x256a4c: 0x0  nop
    ctx->pc = 0x256a4cu;
    // NOP
label_256a50:
    // 0x256a50: 0x3ba  dsrl        $zero, $zero, 14
    ctx->pc = 0x256a50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 14);
label_256a54:
    // 0x256a54: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a54u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_256a58:
    // 0x256a58: 0x0  nop
    ctx->pc = 0x256a58u;
    // NOP
label_256a5c:
    // 0x256a5c: 0x0  nop
    ctx->pc = 0x256a5cu;
    // NOP
label_256a60:
    // 0x256a60: 0x3c5  .word       0x000003C5                   # INVALID     $zero, $zero, 0x3C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x256A60 raw=0x000003C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256a64:
    // 0x256a64: 0x6970  tge         $zero, $zero, 421
    ctx->pc = 0x256a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a68:
    // 0x256a68: 0x0  nop
    ctx->pc = 0x256a68u;
    // NOP
label_256a6c:
    // 0x256a6c: 0x0  nop
    ctx->pc = 0x256a6cu;
    // NOP
label_256a70:
    // 0x256a70: 0x3d3  .word       0x000003D3                   # mtlo        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a70u;
    ctx->lo = GPR_U64(ctx, 0);
label_256a74:
    // 0x256a74: 0x37b0  tge         $zero, $zero, 222
    ctx->pc = 0x256a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a78:
    // 0x256a78: 0x0  nop
    ctx->pc = 0x256a78u;
    // NOP
label_256a7c:
    // 0x256a7c: 0x0  nop
    ctx->pc = 0x256a7cu;
    // NOP
label_256a80:
    // 0x256a80: 0x3da  .word       0x000003DA                   # div         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a80u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256a84:
    // 0x256a84: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_256a88:
    // 0x256a88: 0x0  nop
    ctx->pc = 0x256a88u;
    // NOP
label_256a8c:
    // 0x256a8c: 0x0  nop
    ctx->pc = 0x256a8cu;
    // NOP
label_256a90:
    // 0x256a90: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_256a94:
    // 0x256a94: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_256a98:
    // 0x256a98: 0x0  nop
    ctx->pc = 0x256a98u;
    // NOP
label_256a9c:
    // 0x256a9c: 0x0  nop
    ctx->pc = 0x256a9cu;
    // NOP
label_256aa0:
    // 0x256aa0: 0x3ed  .word       0x000003ED                   # daddu       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256aa0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256aa4:
    // 0x256aa4: 0xa0d0  .word       0x0000A0D0                   # mfhi        $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256aa4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_256aa8:
    // 0x256aa8: 0x0  nop
    ctx->pc = 0x256aa8u;
    // NOP
label_256aac:
    // 0x256aac: 0x0  nop
    ctx->pc = 0x256aacu;
    // NOP
label_256ab0:
    // 0x256ab0: 0x402  srl         $zero, $zero, 16
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_256ab4:
    // 0x256ab4: 0x10320  .word       0x00010320                   # add         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256ab8:
    // 0x256ab8: 0x0  nop
    ctx->pc = 0x256ab8u;
    // NOP
label_256abc:
    // 0x256abc: 0x0  nop
    ctx->pc = 0x256abcu;
    // NOP
label_256ac0:
    // 0x256ac0: 0x423  .word       0x00000423                   # negu        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ac0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256ac4:
    // 0x256ac4: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x256ac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ac8:
    // 0x256ac8: 0x0  nop
    ctx->pc = 0x256ac8u;
    // NOP
label_256acc:
    // 0x256acc: 0x0  nop
    ctx->pc = 0x256accu;
    // NOP
label_256ad0:
    // 0x256ad0: 0x437  .word       0x00000437                   # INVALID     $zero, $zero, 0x437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x256AD0 raw=0x00000437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256ad4:
    // 0x256ad4: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x256ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256ad8:
    // 0x256ad8: 0x0  nop
    ctx->pc = 0x256ad8u;
    // NOP
label_256adc:
    // 0x256adc: 0x0  nop
    ctx->pc = 0x256adcu;
    // NOP
label_256ae0:
    // 0x256ae0: 0x447  .word       0x00000447                   # srav        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ae0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256ae4:
    // 0x256ae4: 0x6910  .word       0x00006910                   # mfhi        $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ae4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256ae8:
    // 0x256ae8: 0x0  nop
    ctx->pc = 0x256ae8u;
    // NOP
label_256aec:
    // 0x256aec: 0x0  nop
    ctx->pc = 0x256aecu;
    // NOP
label_256af0:
    // 0x256af0: 0x455  .word       0x00000455                   # INVALID     $zero, $zero, 0x455 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x256AF0 raw=0x00000455"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256af4:
    // 0x256af4: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256af8:
    // 0x256af8: 0x0  nop
    ctx->pc = 0x256af8u;
    // NOP
label_256afc:
    // 0x256afc: 0x0  nop
    ctx->pc = 0x256afcu;
    // NOP
label_256b00:
    // 0x256b00: 0x462  .word       0x00000462                   # neg         $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_256b04:
    // 0x256b04: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b04u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_256b08:
    // 0x256b08: 0x0  nop
    ctx->pc = 0x256b08u;
    // NOP
label_256b0c:
    // 0x256b0c: 0x0  nop
    ctx->pc = 0x256b0cu;
    // NOP
label_256b10:
    // 0x256b10: 0x46b  .word       0x0000046B                   # sltu        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b10u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_256b14:
    // 0x256b14: 0x7910  .word       0x00007910                   # mfhi        $t7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b14u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256b18:
    // 0x256b18: 0x0  nop
    ctx->pc = 0x256b18u;
    // NOP
label_256b1c:
    // 0x256b1c: 0x0  nop
    ctx->pc = 0x256b1cu;
    // NOP
label_256b20:
    // 0x256b20: 0x47b  dsra        $zero, $zero, 17
    ctx->pc = 0x256b20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 17);
label_256b24:
    // 0x256b24: 0xf1b0  tge         $zero, $zero, 966
    ctx->pc = 0x256b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b28:
    // 0x256b28: 0x0  nop
    ctx->pc = 0x256b28u;
    // NOP
label_256b2c:
    // 0x256b2c: 0x0  nop
    ctx->pc = 0x256b2cu;
    // NOP
label_256b30:
    // 0x256b30: 0x49a  .word       0x0000049A                   # div         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b30u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256b34:
    // 0x256b34: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256b38:
    // 0x256b38: 0x0  nop
    ctx->pc = 0x256b38u;
    // NOP
label_256b3c:
    // 0x256b3c: 0x0  nop
    ctx->pc = 0x256b3cu;
    // NOP
label_256b40:
    // 0x256b40: 0x4aa  .word       0x000004AA                   # slt         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b40u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256b44:
    // 0x256b44: 0x72f0  tge         $zero, $zero, 459
    ctx->pc = 0x256b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b48:
    // 0x256b48: 0x0  nop
    ctx->pc = 0x256b48u;
    // NOP
label_256b4c:
    // 0x256b4c: 0x0  nop
    ctx->pc = 0x256b4cu;
    // NOP
label_256b50:
    // 0x256b50: 0x4b9  .word       0x000004B9                   # INVALID     $zero, $zero, 0x4B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256B50 raw=0x000004B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256b54:
    // 0x256b54: 0x7ee0  .word       0x00007EE0                   # add         $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256b58:
    // 0x256b58: 0x0  nop
    ctx->pc = 0x256b58u;
    // NOP
label_256b5c:
    // 0x256b5c: 0x0  nop
    ctx->pc = 0x256b5cu;
    // NOP
label_256b60:
    // 0x256b60: 0x4c9  .word       0x000004C9                   # jalr        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_256b64:
    if (ctx->pc == 0x256B64u) {
        ctx->pc = 0x256B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B60u;
        // 0x256b64: 0xb210  .word       0x0000B210                   # mfhi        $s6 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B68u;
        goto label_256b68;
    }
    ctx->pc = 0x256B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x256B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B60u;
        // 0x256b64: 0xb210  .word       0x0000B210                   # mfhi        $s6 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256B60u, 0x256B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256B68u;
label_256b68:
    // 0x256b68: 0x0  nop
    ctx->pc = 0x256b68u;
    // NOP
label_256b6c:
    // 0x256b6c: 0x0  nop
    ctx->pc = 0x256b6cu;
    // NOP
label_256b70:
    // 0x256b70: 0x4e0  .word       0x000004E0                   # add         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256b74:
    // 0x256b74: 0x4cf0  tge         $zero, $zero, 307
    ctx->pc = 0x256b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b78:
    // 0x256b78: 0x0  nop
    ctx->pc = 0x256b78u;
    // NOP
label_256b7c:
    // 0x256b7c: 0x0  nop
    ctx->pc = 0x256b7cu;
    // NOP
label_256b80:
    // 0x256b80: 0x4ea  .word       0x000004EA                   # slt         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b80u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256b84:
    // 0x256b84: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x256b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b88:
    // 0x256b88: 0x0  nop
    ctx->pc = 0x256b88u;
    // NOP
label_256b8c:
    // 0x256b8c: 0x0  nop
    ctx->pc = 0x256b8cu;
    // NOP
label_256b90:
    // 0x256b90: 0x4f5  .word       0x000004F5                   # INVALID     $zero, $zero, 0x4F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x256B90 raw=0x000004F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256b94:
    // 0x256b94: 0xf540  sll         $fp, $zero, 21
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_256b98:
    // 0x256b98: 0x0  nop
    ctx->pc = 0x256b98u;
    // NOP
label_256b9c:
    // 0x256b9c: 0x0  nop
    ctx->pc = 0x256b9cu;
    // NOP
label_256ba0:
    // 0x256ba0: 0x514  .word       0x00000514                   # dsllv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ba0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_256ba4:
    // 0x256ba4: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_256ba8:
    // 0x256ba8: 0x0  nop
    ctx->pc = 0x256ba8u;
    // NOP
label_256bac:
    // 0x256bac: 0x0  nop
    ctx->pc = 0x256bacu;
    // NOP
label_256bb0:
    // 0x256bb0: 0x52a  .word       0x0000052A                   # slt         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bb0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256bb4:
    // 0x256bb4: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_256bb8:
    // 0x256bb8: 0x0  nop
    ctx->pc = 0x256bb8u;
    // NOP
label_256bbc:
    // 0x256bbc: 0x0  nop
    ctx->pc = 0x256bbcu;
    // NOP
label_256bc0:
    // 0x256bc0: 0x53f  dsra32      $zero, $zero, 20
    ctx->pc = 0x256bc0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 20));
label_256bc4:
    // 0x256bc4: 0x93f0  tge         $zero, $zero, 591
    ctx->pc = 0x256bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256bc8:
    // 0x256bc8: 0x0  nop
    ctx->pc = 0x256bc8u;
    // NOP
label_256bcc:
    // 0x256bcc: 0x0  nop
    ctx->pc = 0x256bccu;
    // NOP
label_256bd0:
    // 0x256bd0: 0x552  .word       0x00000552                   # mflo        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bd0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_256bd4:
    // 0x256bd4: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bd4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256bd8:
    // 0x256bd8: 0x0  nop
    ctx->pc = 0x256bd8u;
    // NOP
label_256bdc:
    // 0x256bdc: 0x0  nop
    ctx->pc = 0x256bdcu;
    // NOP
label_256be0:
    // 0x256be0: 0x55e  .word       0x0000055E                   # ddiv        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256be0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x256BE0 raw=0x0000055E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256be4:
    // 0x256be4: 0xa6b0  tge         $zero, $zero, 666
    ctx->pc = 0x256be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256be8:
    // 0x256be8: 0x0  nop
    ctx->pc = 0x256be8u;
    // NOP
label_256bec:
    // 0x256bec: 0x0  nop
    ctx->pc = 0x256becu;
    // NOP
label_256bf0:
    // 0x256bf0: 0x573  tltu        $zero, $zero, 21
    ctx->pc = 0x256bf0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256bf4:
    // 0x256bf4: 0xd4b0  tge         $zero, $zero, 850
    ctx->pc = 0x256bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256bf8:
    // 0x256bf8: 0x0  nop
    ctx->pc = 0x256bf8u;
    // NOP
label_256bfc:
    // 0x256bfc: 0x0  nop
    ctx->pc = 0x256bfcu;
    // NOP
label_256c00:
    // 0x256c00: 0x58e  .word       0x0000058E                   # INVALID     $zero, $zero, 0x58E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256C00 raw=0x0000058E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256c04:
    // 0x256c04: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x256c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c08:
    // 0x256c08: 0x0  nop
    ctx->pc = 0x256c08u;
    // NOP
label_256c0c:
    // 0x256c0c: 0x0  nop
    ctx->pc = 0x256c0cu;
    // NOP
label_256c10:
    // 0x256c10: 0x5a5  .word       0x000005A5                   # move        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256c14:
    // 0x256c14: 0x9bd0  .word       0x00009BD0                   # mfhi        $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c14u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_256c18:
    // 0x256c18: 0x0  nop
    ctx->pc = 0x256c18u;
    // NOP
label_256c1c:
    // 0x256c1c: 0x0  nop
    ctx->pc = 0x256c1cu;
    // NOP
label_256c20:
    // 0x256c20: 0x5b9  .word       0x000005B9                   # INVALID     $zero, $zero, 0x5B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256C20 raw=0x000005B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256c24:
    // 0x256c24: 0x4210  .word       0x00004210                   # mfhi        $t0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_256c28:
    // 0x256c28: 0x0  nop
    ctx->pc = 0x256c28u;
    // NOP
label_256c2c:
    // 0x256c2c: 0x0  nop
    ctx->pc = 0x256c2cu;
    // NOP
label_256c30:
    // 0x256c30: 0x5c2  srl         $zero, $zero, 23
    ctx->pc = 0x256c30u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_256c34:
    // 0x256c34: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_256c38:
    // 0x256c38: 0x0  nop
    ctx->pc = 0x256c38u;
    // NOP
label_256c3c:
    // 0x256c3c: 0x0  nop
    ctx->pc = 0x256c3cu;
    // NOP
label_256c40:
    // 0x256c40: 0x5d6  .word       0x000005D6                   # dsrlv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_256c44:
    // 0x256c44: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_256c48:
    // 0x256c48: 0x0  nop
    ctx->pc = 0x256c48u;
    // NOP
label_256c4c:
    // 0x256c4c: 0x0  nop
    ctx->pc = 0x256c4cu;
    // NOP
label_256c50:
    // 0x256c50: 0x5e8  .word       0x000005E8                   # mfsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256c50u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_256c54:
    // 0x256c54: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_256c58:
    // 0x256c58: 0x0  nop
    ctx->pc = 0x256c58u;
    // NOP
label_256c5c:
    // 0x256c5c: 0x0  nop
    ctx->pc = 0x256c5cu;
    // NOP
label_256c60:
    // 0x256c60: 0x5f2  tlt         $zero, $zero, 23
    ctx->pc = 0x256c60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c64:
    // 0x256c64: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x256c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c68:
    // 0x256c68: 0x0  nop
    ctx->pc = 0x256c68u;
    // NOP
label_256c6c:
    // 0x256c6c: 0x0  nop
    ctx->pc = 0x256c6cu;
    // NOP
label_256c70:
    // 0x256c70: 0x5fe  dsrl32      $zero, $zero, 23
    ctx->pc = 0x256c70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 23));
label_256c74:
    // 0x256c74: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256c78:
    // 0x256c78: 0x0  nop
    ctx->pc = 0x256c78u;
    // NOP
label_256c7c:
    // 0x256c7c: 0x0  nop
    ctx->pc = 0x256c7cu;
    // NOP
label_256c80:
    // 0x256c80: 0x60d  break       0, 24
    ctx->pc = 0x256c80u;
    runtime->handleBreak(rdram, ctx);
label_256c84:
    // 0x256c84: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x256c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c88:
    // 0x256c88: 0x0  nop
    ctx->pc = 0x256c88u;
    // NOP
label_256c8c:
    // 0x256c8c: 0x0  nop
    ctx->pc = 0x256c8cu;
    // NOP
label_256c90:
    // 0x256c90: 0x61c  .word       0x0000061C                   # dmult       $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256C90 raw=0x0000061C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256c94:
    // 0x256c94: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_256c98:
    // 0x256c98: 0x0  nop
    ctx->pc = 0x256c98u;
    // NOP
label_256c9c:
    // 0x256c9c: 0x0  nop
    ctx->pc = 0x256c9cu;
    // NOP
label_256ca0:
    // 0x256ca0: 0x62f  .word       0x0000062F                   # dsubu       $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ca0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_256ca4:
    // 0x256ca4: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x256ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ca8:
    // 0x256ca8: 0x0  nop
    ctx->pc = 0x256ca8u;
    // NOP
label_256cac:
    // 0x256cac: 0x0  nop
    ctx->pc = 0x256cacu;
    // NOP
label_256cb0:
    // 0x256cb0: 0x63e  dsrl32      $zero, $zero, 24
    ctx->pc = 0x256cb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 24));
label_256cb4:
    // 0x256cb4: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256cb8:
    // 0x256cb8: 0x0  nop
    ctx->pc = 0x256cb8u;
    // NOP
label_256cbc:
    // 0x256cbc: 0x0  nop
    ctx->pc = 0x256cbcu;
    // NOP
label_256cc0:
    // 0x256cc0: 0x64d  break       0, 25
    ctx->pc = 0x256cc0u;
    runtime->handleBreak(rdram, ctx);
label_256cc4:
    // 0x256cc4: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256cc8:
    // 0x256cc8: 0x0  nop
    ctx->pc = 0x256cc8u;
    // NOP
label_256ccc:
    // 0x256ccc: 0x0  nop
    ctx->pc = 0x256cccu;
    // NOP
label_256cd0:
    // 0x256cd0: 0x65a  .word       0x0000065A                   # div         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cd0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256cd4:
    // 0x256cd4: 0x59b0  tge         $zero, $zero, 358
    ctx->pc = 0x256cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256cd8:
    // 0x256cd8: 0x0  nop
    ctx->pc = 0x256cd8u;
    // NOP
label_256cdc:
    // 0x256cdc: 0x0  nop
    ctx->pc = 0x256cdcu;
    // NOP
label_256ce0:
    // 0x256ce0: 0x666  .word       0x00000666                   # xor         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ce0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256ce4:
    // 0x256ce4: 0x14d70  tge         $zero, $at, 309
    ctx->pc = 0x256ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256ce8:
    // 0x256ce8: 0x0  nop
    ctx->pc = 0x256ce8u;
    // NOP
label_256cec:
    // 0x256cec: 0x0  nop
    ctx->pc = 0x256cecu;
    // NOP
label_256cf0:
    // 0x256cf0: 0x690  .word       0x00000690                   # mfhi        $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cf0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_256cf4:
    // 0x256cf4: 0x84a0  .word       0x000084A0                   # add         $s0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256cf8:
    // 0x256cf8: 0x0  nop
    ctx->pc = 0x256cf8u;
    // NOP
label_256cfc:
    // 0x256cfc: 0x0  nop
    ctx->pc = 0x256cfcu;
    // NOP
label_256d00:
    // 0x256d00: 0x6a1  .word       0x000006A1                   # addu        $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d00u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256d04:
    // 0x256d04: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256d08:
    // 0x256d08: 0x0  nop
    ctx->pc = 0x256d08u;
    // NOP
label_256d0c:
    // 0x256d0c: 0x0  nop
    ctx->pc = 0x256d0cu;
    // NOP
label_256d10:
    // 0x256d10: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x256d10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d14:
    // 0x256d14: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x256d14u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_256d18:
    // 0x256d18: 0x0  nop
    ctx->pc = 0x256d18u;
    // NOP
label_256d1c:
    // 0x256d1c: 0x0  nop
    ctx->pc = 0x256d1cu;
    // NOP
label_256d20:
    // 0x256d20: 0x6bf  dsra32      $zero, $zero, 26
    ctx->pc = 0x256d20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 26));
label_256d24:
    // 0x256d24: 0x7010  mfhi        $t6
    ctx->pc = 0x256d24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_256d28:
    // 0x256d28: 0x0  nop
    ctx->pc = 0x256d28u;
    // NOP
label_256d2c:
    // 0x256d2c: 0x0  nop
    ctx->pc = 0x256d2cu;
    // NOP
label_256d30:
    // 0x256d30: 0x6ce  .word       0x000006CE                   # INVALID     $zero, $zero, 0x6CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256D30 raw=0x000006CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256d34:
    // 0x256d34: 0x6e10  .word       0x00006E10                   # mfhi        $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256d38:
    // 0x256d38: 0x0  nop
    ctx->pc = 0x256d38u;
    // NOP
label_256d3c:
    // 0x256d3c: 0x0  nop
    ctx->pc = 0x256d3cu;
    // NOP
label_256d40:
    // 0x256d40: 0x6dc  .word       0x000006DC                   # dmult       $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256D40 raw=0x000006DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256d44:
    // 0x256d44: 0x6370  tge         $zero, $zero, 397
    ctx->pc = 0x256d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d48:
    // 0x256d48: 0x0  nop
    ctx->pc = 0x256d48u;
    // NOP
label_256d4c:
    // 0x256d4c: 0x0  nop
    ctx->pc = 0x256d4cu;
    // NOP
label_256d50:
    // 0x256d50: 0x6e9  .word       0x000006E9                   # mtsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256d50u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_256d54:
    // 0x256d54: 0x10070  tge         $zero, $at, 1
    ctx->pc = 0x256d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256d58:
    // 0x256d58: 0x0  nop
    ctx->pc = 0x256d58u;
    // NOP
label_256d5c:
    // 0x256d5c: 0x0  nop
    ctx->pc = 0x256d5cu;
    // NOP
label_256d60:
    // 0x256d60: 0x70a  .word       0x0000070A                   # movz        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d60u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256d64:
    // 0x256d64: 0x7900  sll         $t7, $zero, 4
    ctx->pc = 0x256d64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_256d68:
    // 0x256d68: 0x0  nop
    ctx->pc = 0x256d68u;
    // NOP
label_256d6c:
    // 0x256d6c: 0x0  nop
    ctx->pc = 0x256d6cu;
    // NOP
label_256d70:
    // 0x256d70: 0x71a  .word       0x0000071A                   # div         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256d74:
    // 0x256d74: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x256d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d78:
    // 0x256d78: 0x0  nop
    ctx->pc = 0x256d78u;
    // NOP
label_256d7c:
    // 0x256d7c: 0x0  nop
    ctx->pc = 0x256d7cu;
    // NOP
label_256d80:
    // 0x256d80: 0x72b  .word       0x0000072B                   # sltu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d80u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_256d84:
    // 0x256d84: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256d88:
    // 0x256d88: 0x0  nop
    ctx->pc = 0x256d88u;
    // NOP
label_256d8c:
    // 0x256d8c: 0x0  nop
    ctx->pc = 0x256d8cu;
    // NOP
label_256d90:
    // 0x256d90: 0x73c  dsll32      $zero, $zero, 28
    ctx->pc = 0x256d90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 28));
label_256d94:
    // 0x256d94: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256d98:
    // 0x256d98: 0x0  nop
    ctx->pc = 0x256d98u;
    // NOP
label_256d9c:
    // 0x256d9c: 0x0  nop
    ctx->pc = 0x256d9cu;
    // NOP
label_256da0:
    // 0x256da0: 0x74c  syscall     29
    ctx->pc = 0x256da0u;
    ctx->pc = 0x256DA4u;
runtime->handleSyscall(rdram, ctx, 0x1Du);
label_256da4:
    // 0x256da4: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256da8:
    // 0x256da8: 0x0  nop
    ctx->pc = 0x256da8u;
    // NOP
label_256dac:
    // 0x256dac: 0x0  nop
    ctx->pc = 0x256dacu;
    // NOP
label_256db0:
    // 0x256db0: 0x75c  .word       0x0000075C                   # dmult       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256DB0 raw=0x0000075C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256db4:
    // 0x256db4: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x256db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_256db8:
    // 0x256db8: 0x0  nop
    ctx->pc = 0x256db8u;
    // NOP
label_256dbc:
    // 0x256dbc: 0x0  nop
    ctx->pc = 0x256dbcu;
    // NOP
label_256dc0:
    // 0x256dc0: 0x76d  .word       0x0000076D                   # daddu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dc0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256dc4:
    // 0x256dc4: 0xebb0  tge         $zero, $zero, 942
    ctx->pc = 0x256dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256dc8:
    // 0x256dc8: 0x0  nop
    ctx->pc = 0x256dc8u;
    // NOP
label_256dcc:
    // 0x256dcc: 0x0  nop
    ctx->pc = 0x256dccu;
    // NOP
label_256dd0:
    // 0x256dd0: 0x78b  .word       0x0000078B                   # movn        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dd0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256dd4:
    // 0x256dd4: 0xa460  .word       0x0000A460                   # add         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_256dd8:
    // 0x256dd8: 0x0  nop
    ctx->pc = 0x256dd8u;
    // NOP
label_256ddc:
    // 0x256ddc: 0x0  nop
    ctx->pc = 0x256ddcu;
    // NOP
label_256de0:
    // 0x256de0: 0x7a0  .word       0x000007A0                   # add         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256de0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256de4:
    // 0x256de4: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x256de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256de8:
    // 0x256de8: 0x0  nop
    ctx->pc = 0x256de8u;
    // NOP
label_256dec:
    // 0x256dec: 0x0  nop
    ctx->pc = 0x256decu;
    // NOP
label_256df0:
    // 0x256df0: 0x7b3  tltu        $zero, $zero, 30
    ctx->pc = 0x256df0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256df4:
    // 0x256df4: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x256df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256df8:
    // 0x256df8: 0x0  nop
    ctx->pc = 0x256df8u;
    // NOP
label_256dfc:
    // 0x256dfc: 0x0  nop
    ctx->pc = 0x256dfcu;
    // NOP
label_256e00:
    // 0x256e00: 0x7c1  .word       0x000007C1                   # INVALID     $zero, $zero, 0x7C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256E00 raw=0x000007C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256e04:
    // 0x256e04: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256e08:
    // 0x256e08: 0x0  nop
    ctx->pc = 0x256e08u;
    // NOP
label_256e0c:
    // 0x256e0c: 0x0  nop
    ctx->pc = 0x256e0cu;
    // NOP
label_256e10:
    // 0x256e10: 0x7cd  break       0, 31
    ctx->pc = 0x256e10u;
    runtime->handleBreak(rdram, ctx);
label_256e14:
    // 0x256e14: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256e18:
    // 0x256e18: 0x0  nop
    ctx->pc = 0x256e18u;
    // NOP
label_256e1c:
    // 0x256e1c: 0x0  nop
    ctx->pc = 0x256e1cu;
    // NOP
label_256e20:
    // 0x256e20: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256e24:
    // 0x256e24: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x256e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_256e28:
    // 0x256e28: 0x0  nop
    ctx->pc = 0x256e28u;
    // NOP
label_256e2c:
    // 0x256e2c: 0x0  nop
    ctx->pc = 0x256e2cu;
    // NOP
label_256e30:
    // 0x256e30: 0x7e8  .word       0x000007E8                   # mfsa        $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256e30u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_256e34:
    // 0x256e34: 0x15810  .word       0x00015810                   # mfhi        $t3 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e34u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256e38:
    // 0x256e38: 0x0  nop
    ctx->pc = 0x256e38u;
    // NOP
label_256e3c:
    // 0x256e3c: 0x0  nop
    ctx->pc = 0x256e3cu;
    // NOP
label_256e40:
    // 0x256e40: 0x814  dsllv       $at, $zero, $zero
    ctx->pc = 0x256e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_256e44:
    // 0x256e44: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x256e44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256e48:
    // 0x256e48: 0x0  nop
    ctx->pc = 0x256e48u;
    // NOP
label_256e4c:
    // 0x256e4c: 0x0  nop
    ctx->pc = 0x256e4cu;
    // NOP
label_256e50:
    // 0x256e50: 0x826  xor         $at, $zero, $zero
    ctx->pc = 0x256e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256e54:
    // 0x256e54: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x256e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e58:
    // 0x256e58: 0x0  nop
    ctx->pc = 0x256e58u;
    // NOP
label_256e5c:
    // 0x256e5c: 0x0  nop
    ctx->pc = 0x256e5cu;
    // NOP
label_256e60:
    // 0x256e60: 0x833  tltu        $zero, $zero, 32
    ctx->pc = 0x256e60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e64:
    // 0x256e64: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x256e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e68:
    // 0x256e68: 0x0  nop
    ctx->pc = 0x256e68u;
    // NOP
label_256e6c:
    // 0x256e6c: 0x0  nop
    ctx->pc = 0x256e6cu;
    // NOP
label_256e70:
    // 0x256e70: 0x846  .word       0x00000846                   # srlv        $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e70u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256e74:
    // 0x256e74: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x256e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e78:
    // 0x256e78: 0x0  nop
    ctx->pc = 0x256e78u;
    // NOP
label_256e7c:
    // 0x256e7c: 0x0  nop
    ctx->pc = 0x256e7cu;
    // NOP
label_256e80:
    // 0x256e80: 0x859  .word       0x00000859                   # multu       $zero, $zero # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e80u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_256e84:
    // 0x256e84: 0x91a0  .word       0x000091A0                   # add         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256e88:
    // 0x256e88: 0x0  nop
    ctx->pc = 0x256e88u;
    // NOP
label_256e8c:
    // 0x256e8c: 0x0  nop
    ctx->pc = 0x256e8cu;
    // NOP
label_256e90:
    // 0x256e90: 0x86c  .word       0x0000086C                   # dadd        $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_256e94:
    // 0x256e94: 0xaa00  sll         $s5, $zero, 8
    ctx->pc = 0x256e94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256e98:
    // 0x256e98: 0x0  nop
    ctx->pc = 0x256e98u;
    // NOP
label_256e9c:
    // 0x256e9c: 0x0  nop
    ctx->pc = 0x256e9cu;
    // NOP
label_256ea0:
    // 0x256ea0: 0x882  srl         $at, $zero, 2
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_256ea4:
    // 0x256ea4: 0x17ea0  .word       0x00017EA0                   # add         $t7, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256ea8:
    // 0x256ea8: 0x0  nop
    ctx->pc = 0x256ea8u;
    // NOP
label_256eac:
    // 0x256eac: 0x0  nop
    ctx->pc = 0x256eacu;
    // NOP
label_256eb0:
    // 0x256eb0: 0x8b2  tlt         $zero, $zero, 34
    ctx->pc = 0x256eb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256eb4:
    // 0x256eb4: 0x83c0  sll         $s0, $zero, 15
    ctx->pc = 0x256eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_256eb8:
    // 0x256eb8: 0x0  nop
    ctx->pc = 0x256eb8u;
    // NOP
label_256ebc:
    // 0x256ebc: 0x0  nop
    ctx->pc = 0x256ebcu;
    // NOP
label_256ec0:
    // 0x256ec0: 0x8c3  sra         $at, $zero, 3
    ctx->pc = 0x256ec0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 3));
label_256ec4:
    // 0x256ec4: 0xf050  .word       0x0000F050                   # mfhi        $fp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ec4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_256ec8:
    // 0x256ec8: 0x0  nop
    ctx->pc = 0x256ec8u;
    // NOP
label_256ecc:
    // 0x256ecc: 0x0  nop
    ctx->pc = 0x256eccu;
    // NOP
label_256ed0:
    // 0x256ed0: 0x8e2  .word       0x000008E2                   # neg         $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ed0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_256ed4:
    // 0x256ed4: 0xcf20  .word       0x0000CF20                   # add         $t9, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_256ed8:
    // 0x256ed8: 0x0  nop
    ctx->pc = 0x256ed8u;
    // NOP
label_256edc:
    // 0x256edc: 0x0  nop
    ctx->pc = 0x256edcu;
    // NOP
label_256ee0:
    // 0x256ee0: 0x8fc  dsll32      $at, $zero, 3
    ctx->pc = 0x256ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 3));
label_256ee4:
    // 0x256ee4: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x256ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ee8:
    // 0x256ee8: 0x0  nop
    ctx->pc = 0x256ee8u;
    // NOP
label_256eec:
    // 0x256eec: 0x0  nop
    ctx->pc = 0x256eecu;
    // NOP
label_256ef0:
    // 0x256ef0: 0x912  .word       0x00000912                   # mflo        $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ef0u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_256ef4:
    // 0x256ef4: 0x7a60  .word       0x00007A60                   # add         $t7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256ef8:
    // 0x256ef8: 0x0  nop
    ctx->pc = 0x256ef8u;
    // NOP
label_256efc:
    // 0x256efc: 0x0  nop
    ctx->pc = 0x256efcu;
    // NOP
label_256f00:
    // 0x256f00: 0x922  .word       0x00000922                   # neg         $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_256f04:
    // 0x256f04: 0x6600  sll         $t4, $zero, 24
    ctx->pc = 0x256f04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_256f08:
    // 0x256f08: 0x0  nop
    ctx->pc = 0x256f08u;
    // NOP
label_256f0c:
    // 0x256f0c: 0x0  nop
    ctx->pc = 0x256f0cu;
    // NOP
label_256f10:
    // 0x256f10: 0x92f  .word       0x0000092F                   # dsubu       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_256f14:
    // 0x256f14: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x256f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f18:
    // 0x256f18: 0x0  nop
    ctx->pc = 0x256f18u;
    // NOP
label_256f1c:
    // 0x256f1c: 0x0  nop
    ctx->pc = 0x256f1cu;
    // NOP
label_256f20:
    // 0x256f20: 0x94b  .word       0x0000094B                   # movn        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_256f24:
    // 0x256f24: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x256f24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256f28:
    // 0x256f28: 0x0  nop
    ctx->pc = 0x256f28u;
    // NOP
label_256f2c:
    // 0x256f2c: 0x0  nop
    ctx->pc = 0x256f2cu;
    // NOP
label_256f30:
    // 0x256f30: 0x962  .word       0x00000962                   # neg         $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_256f34:
    // 0x256f34: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x256f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f38:
    // 0x256f38: 0x0  nop
    ctx->pc = 0x256f38u;
    // NOP
label_256f3c:
    // 0x256f3c: 0x0  nop
    ctx->pc = 0x256f3cu;
    // NOP
label_256f40:
    // 0x256f40: 0x976  tne         $zero, $zero, 37
    ctx->pc = 0x256f40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f44:
    // 0x256f44: 0x9430  tge         $zero, $zero, 592
    ctx->pc = 0x256f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f48:
    // 0x256f48: 0x0  nop
    ctx->pc = 0x256f48u;
    // NOP
label_256f4c:
    // 0x256f4c: 0x0  nop
    ctx->pc = 0x256f4cu;
    // NOP
label_256f50:
    // 0x256f50: 0x989  .word       0x00000989                   # jalr        $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_256f54:
    if (ctx->pc == 0x256F54u) {
        ctx->pc = 0x256F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F50u;
        // 0x256f54: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x256F58u;
        goto label_256f58;
    }
    ctx->pc = 0x256F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x256F58u);
        ctx->pc = 0x256F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F50u;
        // 0x256f54: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F50u, 0x256F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256F58u;
label_256f58:
    // 0x256f58: 0x0  nop
    ctx->pc = 0x256f58u;
    // NOP
label_256f5c:
    // 0x256f5c: 0x0  nop
    ctx->pc = 0x256f5cu;
    // NOP
label_256f60:
    // 0x256f60: 0x999  .word       0x00000999                   # multu       $zero, $zero # 00000980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_256f64:
    // 0x256f64: 0x9ef0  tge         $zero, $zero, 635
    ctx->pc = 0x256f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f68:
    // 0x256f68: 0x0  nop
    ctx->pc = 0x256f68u;
    // NOP
label_256f6c:
    // 0x256f6c: 0x0  nop
    ctx->pc = 0x256f6cu;
    // NOP
label_256f70:
    // 0x256f70: 0x9ad  .word       0x000009AD                   # daddu       $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f70u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256f74:
    // 0x256f74: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f74u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_256f78:
    // 0x256f78: 0x0  nop
    ctx->pc = 0x256f78u;
    // NOP
label_256f7c:
    // 0x256f7c: 0x0  nop
    ctx->pc = 0x256f7cu;
    // NOP
label_256f80:
    // 0x256f80: 0x9c3  sra         $at, $zero, 7
    ctx->pc = 0x256f80u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 7));
label_256f84:
    // 0x256f84: 0xfa80  sll         $ra, $zero, 10
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_256f88:
    // 0x256f88: 0x0  nop
    ctx->pc = 0x256f88u;
    // NOP
label_256f8c:
    // 0x256f8c: 0x0  nop
    ctx->pc = 0x256f8cu;
    // NOP
label_256f90:
    // 0x256f90: 0x9e3  .word       0x000009E3                   # negu        $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f90u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256f94:
    // 0x256f94: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_256f98:
    // 0x256f98: 0x0  nop
    ctx->pc = 0x256f98u;
    // NOP
label_256f9c:
    // 0x256f9c: 0x0  nop
    ctx->pc = 0x256f9cu;
    // NOP
label_256fa0:
    // 0x256fa0: 0x9ee  .word       0x000009EE                   # dsub        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_256fa4:
    // 0x256fa4: 0x9a20  .word       0x00009A20                   # add         $s3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_256fa8:
    // 0x256fa8: 0x0  nop
    ctx->pc = 0x256fa8u;
    // NOP
label_256fac:
    // 0x256fac: 0x0  nop
    ctx->pc = 0x256facu;
    // NOP
label_256fb0:
    // 0x256fb0: 0xa02  srl         $at, $zero, 8
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_256fb4:
    // 0x256fb4: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x256fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_256fb8:
    // 0x256fb8: 0x0  nop
    ctx->pc = 0x256fb8u;
    // NOP
label_256fbc:
    // 0x256fbc: 0x0  nop
    ctx->pc = 0x256fbcu;
    // NOP
label_256fc0:
    // 0x256fc0: 0xa15  .word       0x00000A15                   # INVALID     $zero, $zero, 0xA15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x256FC0 raw=0x00000A15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256fc4:
    // 0x256fc4: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256fc8:
    // 0x256fc8: 0x0  nop
    ctx->pc = 0x256fc8u;
    // NOP
label_256fcc:
    // 0x256fcc: 0x0  nop
    ctx->pc = 0x256fccu;
    // NOP
label_256fd0:
    // 0x256fd0: 0xa25  .word       0x00000A25                   # move        $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256fd4:
    // 0x256fd4: 0x6290  .word       0x00006290                   # mfhi        $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_256fd8:
    // 0x256fd8: 0x0  nop
    ctx->pc = 0x256fd8u;
    // NOP
label_256fdc:
    // 0x256fdc: 0x0  nop
    ctx->pc = 0x256fdcu;
    // NOP
label_256fe0:
    // 0x256fe0: 0xa32  tlt         $zero, $zero, 40
    ctx->pc = 0x256fe0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256fe4:
    // 0x256fe4: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x256fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256fe8:
    // 0x256fe8: 0x0  nop
    ctx->pc = 0x256fe8u;
    // NOP
label_256fec:
    // 0x256fec: 0x0  nop
    ctx->pc = 0x256fecu;
    // NOP
label_256ff0:
    // 0x256ff0: 0xa42  srl         $at, $zero, 9
    ctx->pc = 0x256ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_256ff4:
    // 0x256ff4: 0x13bb0  tge         $zero, $at, 238
    ctx->pc = 0x256ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256ff8:
    // 0x256ff8: 0x0  nop
    ctx->pc = 0x256ff8u;
    // NOP
label_256ffc:
    // 0x256ffc: 0x0  nop
    ctx->pc = 0x256ffcu;
    // NOP
label_257000:
    // 0x257000: 0xa6a  .word       0x00000A6A                   # slt         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_257004:
    // 0x257004: 0x4770  tge         $zero, $zero, 285
    ctx->pc = 0x257004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257008:
    // 0x257008: 0x0  nop
    ctx->pc = 0x257008u;
    // NOP
label_25700c:
    // 0x25700c: 0x0  nop
    ctx->pc = 0x25700cu;
    // NOP
label_257010:
    // 0x257010: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x257010u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257014:
    // 0x257014: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_257018:
    // 0x257018: 0x0  nop
    ctx->pc = 0x257018u;
    // NOP
label_25701c:
    // 0x25701c: 0x0  nop
    ctx->pc = 0x25701cu;
    // NOP
label_257020:
    // 0x257020: 0xa80  sll         $at, $zero, 10
    ctx->pc = 0x257020u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_257024:
    // 0x257024: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x257024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257028:
    // 0x257028: 0x0  nop
    ctx->pc = 0x257028u;
    // NOP
label_25702c:
    // 0x25702c: 0x0  nop
    ctx->pc = 0x25702cu;
    // NOP
label_257030:
    // 0x257030: 0xa8a  .word       0x00000A8A                   # movz        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257030u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_257034:
    // 0x257034: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x257034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_257038:
    // 0x257038: 0x0  nop
    ctx->pc = 0x257038u;
    // NOP
label_25703c:
    // 0x25703c: 0x0  nop
    ctx->pc = 0x25703cu;
    // NOP
label_257040:
    // 0x257040: 0xa94  .word       0x00000A94                   # dsllv       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257044:
    // 0x257044: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x257044u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_257048:
    // 0x257048: 0x0  nop
    ctx->pc = 0x257048u;
    // NOP
label_25704c:
    // 0x25704c: 0x0  nop
    ctx->pc = 0x25704cu;
    // NOP
    ctx->pc = 0x257050u;
    return;
}
