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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part341(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x241848u: goto label_241848;
        case 0x24184cu: goto label_24184c;
        case 0x241850u: goto label_241850;
        case 0x241854u: goto label_241854;
        case 0x241858u: goto label_241858;
        case 0x24185cu: goto label_24185c;
        case 0x241860u: goto label_241860;
        case 0x241864u: goto label_241864;
        case 0x241868u: goto label_241868;
        case 0x24186cu: goto label_24186c;
        case 0x241870u: goto label_241870;
        case 0x241874u: goto label_241874;
        case 0x241878u: goto label_241878;
        case 0x24187cu: goto label_24187c;
        case 0x241880u: goto label_241880;
        case 0x241884u: goto label_241884;
        case 0x241888u: goto label_241888;
        case 0x24188cu: goto label_24188c;
        case 0x241890u: goto label_241890;
        case 0x241894u: goto label_241894;
        case 0x241898u: goto label_241898;
        case 0x24189cu: goto label_24189c;
        case 0x2418a0u: goto label_2418a0;
        case 0x2418a4u: goto label_2418a4;
        case 0x2418a8u: goto label_2418a8;
        case 0x2418acu: goto label_2418ac;
        case 0x2418b0u: goto label_2418b0;
        case 0x2418b4u: goto label_2418b4;
        case 0x2418b8u: goto label_2418b8;
        case 0x2418bcu: goto label_2418bc;
        case 0x2418c0u: goto label_2418c0;
        case 0x2418c4u: goto label_2418c4;
        case 0x2418c8u: goto label_2418c8;
        case 0x2418ccu: goto label_2418cc;
        case 0x2418d0u: goto label_2418d0;
        case 0x2418d4u: goto label_2418d4;
        case 0x2418d8u: goto label_2418d8;
        case 0x2418dcu: goto label_2418dc;
        case 0x2418e0u: goto label_2418e0;
        case 0x2418e4u: goto label_2418e4;
        case 0x2418e8u: goto label_2418e8;
        case 0x2418ecu: goto label_2418ec;
        case 0x2418f0u: goto label_2418f0;
        case 0x2418f4u: goto label_2418f4;
        case 0x2418f8u: goto label_2418f8;
        case 0x2418fcu: goto label_2418fc;
        case 0x241900u: goto label_241900;
        case 0x241904u: goto label_241904;
        case 0x241908u: goto label_241908;
        case 0x24190cu: goto label_24190c;
        case 0x241910u: goto label_241910;
        case 0x241914u: goto label_241914;
        case 0x241918u: goto label_241918;
        case 0x24191cu: goto label_24191c;
        case 0x241920u: goto label_241920;
        case 0x241924u: goto label_241924;
        case 0x241928u: goto label_241928;
        case 0x24192cu: goto label_24192c;
        case 0x241930u: goto label_241930;
        case 0x241934u: goto label_241934;
        case 0x241938u: goto label_241938;
        case 0x24193cu: goto label_24193c;
        case 0x241940u: goto label_241940;
        case 0x241944u: goto label_241944;
        case 0x241948u: goto label_241948;
        case 0x24194cu: goto label_24194c;
        case 0x241950u: goto label_241950;
        case 0x241954u: goto label_241954;
        case 0x241958u: goto label_241958;
        case 0x24195cu: goto label_24195c;
        case 0x241960u: goto label_241960;
        case 0x241964u: goto label_241964;
        case 0x241968u: goto label_241968;
        case 0x24196cu: goto label_24196c;
        case 0x241970u: goto label_241970;
        case 0x241974u: goto label_241974;
        case 0x241978u: goto label_241978;
        case 0x24197cu: goto label_24197c;
        case 0x241980u: goto label_241980;
        case 0x241984u: goto label_241984;
        case 0x241988u: goto label_241988;
        case 0x24198cu: goto label_24198c;
        case 0x241990u: goto label_241990;
        case 0x241994u: goto label_241994;
        case 0x241998u: goto label_241998;
        case 0x24199cu: goto label_24199c;
        case 0x2419a0u: goto label_2419a0;
        case 0x2419a4u: goto label_2419a4;
        case 0x2419a8u: goto label_2419a8;
        case 0x2419acu: goto label_2419ac;
        case 0x2419b0u: goto label_2419b0;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419b8u: goto label_2419b8;
        case 0x2419bcu: goto label_2419bc;
        case 0x2419c0u: goto label_2419c0;
        case 0x2419c4u: goto label_2419c4;
        case 0x2419c8u: goto label_2419c8;
        case 0x2419ccu: goto label_2419cc;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419d4u: goto label_2419d4;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419dcu: goto label_2419dc;
        case 0x2419e0u: goto label_2419e0;
        case 0x2419e4u: goto label_2419e4;
        case 0x2419e8u: goto label_2419e8;
        case 0x2419ecu: goto label_2419ec;
        case 0x2419f0u: goto label_2419f0;
        case 0x2419f4u: goto label_2419f4;
        case 0x2419f8u: goto label_2419f8;
        case 0x2419fcu: goto label_2419fc;
        case 0x241a00u: goto label_241a00;
        case 0x241a04u: goto label_241a04;
        case 0x241a08u: goto label_241a08;
        case 0x241a0cu: goto label_241a0c;
        case 0x241a10u: goto label_241a10;
        case 0x241a14u: goto label_241a14;
        case 0x241a18u: goto label_241a18;
        case 0x241a1cu: goto label_241a1c;
        case 0x241a20u: goto label_241a20;
        case 0x241a24u: goto label_241a24;
        case 0x241a28u: goto label_241a28;
        case 0x241a2cu: goto label_241a2c;
        case 0x241a30u: goto label_241a30;
        case 0x241a34u: goto label_241a34;
        case 0x241a38u: goto label_241a38;
        case 0x241a3cu: goto label_241a3c;
        case 0x241a40u: goto label_241a40;
        case 0x241a44u: goto label_241a44;
        case 0x241a48u: goto label_241a48;
        case 0x241a4cu: goto label_241a4c;
        case 0x241a50u: goto label_241a50;
        case 0x241a54u: goto label_241a54;
        case 0x241a58u: goto label_241a58;
        case 0x241a5cu: goto label_241a5c;
        case 0x241a60u: goto label_241a60;
        case 0x241a64u: goto label_241a64;
        case 0x241a68u: goto label_241a68;
        case 0x241a6cu: goto label_241a6c;
        case 0x241a70u: goto label_241a70;
        case 0x241a74u: goto label_241a74;
        case 0x241a78u: goto label_241a78;
        case 0x241a7cu: goto label_241a7c;
        case 0x241a80u: goto label_241a80;
        case 0x241a84u: goto label_241a84;
        case 0x241a88u: goto label_241a88;
        case 0x241a8cu: goto label_241a8c;
        case 0x241a90u: goto label_241a90;
        case 0x241a94u: goto label_241a94;
        case 0x241a98u: goto label_241a98;
        case 0x241a9cu: goto label_241a9c;
        case 0x241aa0u: goto label_241aa0;
        case 0x241aa4u: goto label_241aa4;
        case 0x241aa8u: goto label_241aa8;
        case 0x241aacu: goto label_241aac;
        case 0x241ab0u: goto label_241ab0;
        case 0x241ab4u: goto label_241ab4;
        case 0x241ab8u: goto label_241ab8;
        case 0x241abcu: goto label_241abc;
        case 0x241ac0u: goto label_241ac0;
        case 0x241ac4u: goto label_241ac4;
        case 0x241ac8u: goto label_241ac8;
        case 0x241accu: goto label_241acc;
        case 0x241ad0u: goto label_241ad0;
        case 0x241ad4u: goto label_241ad4;
        case 0x241ad8u: goto label_241ad8;
        case 0x241adcu: goto label_241adc;
        case 0x241ae0u: goto label_241ae0;
        case 0x241ae4u: goto label_241ae4;
        case 0x241ae8u: goto label_241ae8;
        case 0x241aecu: goto label_241aec;
        case 0x241af0u: goto label_241af0;
        case 0x241af4u: goto label_241af4;
        case 0x241af8u: goto label_241af8;
        case 0x241afcu: goto label_241afc;
        case 0x241b00u: goto label_241b00;
        case 0x241b04u: goto label_241b04;
        case 0x241b08u: goto label_241b08;
        case 0x241b0cu: goto label_241b0c;
        case 0x241b10u: goto label_241b10;
        case 0x241b14u: goto label_241b14;
        case 0x241b18u: goto label_241b18;
        case 0x241b1cu: goto label_241b1c;
        case 0x241b20u: goto label_241b20;
        case 0x241b24u: goto label_241b24;
        case 0x241b28u: goto label_241b28;
        case 0x241b2cu: goto label_241b2c;
        case 0x241b30u: goto label_241b30;
        case 0x241b34u: goto label_241b34;
        case 0x241b38u: goto label_241b38;
        case 0x241b3cu: goto label_241b3c;
        case 0x241b40u: goto label_241b40;
        case 0x241b44u: goto label_241b44;
        case 0x241b48u: goto label_241b48;
        case 0x241b4cu: goto label_241b4c;
        case 0x241b50u: goto label_241b50;
        case 0x241b54u: goto label_241b54;
        case 0x241b58u: goto label_241b58;
        case 0x241b5cu: goto label_241b5c;
        case 0x241b60u: goto label_241b60;
        case 0x241b64u: goto label_241b64;
        case 0x241b68u: goto label_241b68;
        case 0x241b6cu: goto label_241b6c;
        case 0x241b70u: goto label_241b70;
        case 0x241b74u: goto label_241b74;
        case 0x241b78u: goto label_241b78;
        case 0x241b7cu: goto label_241b7c;
        case 0x241b80u: goto label_241b80;
        case 0x241b84u: goto label_241b84;
        case 0x241b88u: goto label_241b88;
        case 0x241b8cu: goto label_241b8c;
        case 0x241b90u: goto label_241b90;
        case 0x241b94u: goto label_241b94;
        case 0x241b98u: goto label_241b98;
        case 0x241b9cu: goto label_241b9c;
        case 0x241ba0u: goto label_241ba0;
        case 0x241ba4u: goto label_241ba4;
        case 0x241ba8u: goto label_241ba8;
        case 0x241bacu: goto label_241bac;
        case 0x241bb0u: goto label_241bb0;
        case 0x241bb4u: goto label_241bb4;
        case 0x241bb8u: goto label_241bb8;
        case 0x241bbcu: goto label_241bbc;
        case 0x241bc0u: goto label_241bc0;
        case 0x241bc4u: goto label_241bc4;
        case 0x241bc8u: goto label_241bc8;
        case 0x241bccu: goto label_241bcc;
        case 0x241bd0u: goto label_241bd0;
        case 0x241bd4u: goto label_241bd4;
        case 0x241bd8u: goto label_241bd8;
        case 0x241bdcu: goto label_241bdc;
        case 0x241be0u: goto label_241be0;
        case 0x241be4u: goto label_241be4;
        case 0x241be8u: goto label_241be8;
        case 0x241becu: goto label_241bec;
        case 0x241bf0u: goto label_241bf0;
        case 0x241bf4u: goto label_241bf4;
        case 0x241bf8u: goto label_241bf8;
        case 0x241bfcu: goto label_241bfc;
        case 0x241c00u: goto label_241c00;
        case 0x241c04u: goto label_241c04;
        case 0x241c08u: goto label_241c08;
        case 0x241c0cu: goto label_241c0c;
        case 0x241c10u: goto label_241c10;
        case 0x241c14u: goto label_241c14;
        case 0x241c18u: goto label_241c18;
        case 0x241c1cu: goto label_241c1c;
        case 0x241c20u: goto label_241c20;
        case 0x241c24u: goto label_241c24;
        case 0x241c28u: goto label_241c28;
        case 0x241c2cu: goto label_241c2c;
        case 0x241c30u: goto label_241c30;
        case 0x241c34u: goto label_241c34;
        case 0x241c38u: goto label_241c38;
        case 0x241c3cu: goto label_241c3c;
        case 0x241c40u: goto label_241c40;
        case 0x241c44u: goto label_241c44;
        case 0x241c48u: goto label_241c48;
        case 0x241c4cu: goto label_241c4c;
        case 0x241c50u: goto label_241c50;
        case 0x241c54u: goto label_241c54;
        case 0x241c58u: goto label_241c58;
        case 0x241c5cu: goto label_241c5c;
        case 0x241c60u: goto label_241c60;
        case 0x241c64u: goto label_241c64;
        case 0x241c68u: goto label_241c68;
        case 0x241c6cu: goto label_241c6c;
        case 0x241c70u: goto label_241c70;
        case 0x241c74u: goto label_241c74;
        case 0x241c78u: goto label_241c78;
        case 0x241c7cu: goto label_241c7c;
        case 0x241c80u: goto label_241c80;
        case 0x241c84u: goto label_241c84;
        case 0x241c88u: goto label_241c88;
        case 0x241c8cu: goto label_241c8c;
        case 0x241c90u: goto label_241c90;
        case 0x241c94u: goto label_241c94;
        case 0x241c98u: goto label_241c98;
        case 0x241c9cu: goto label_241c9c;
        case 0x241ca0u: goto label_241ca0;
        case 0x241ca4u: goto label_241ca4;
        case 0x241ca8u: goto label_241ca8;
        case 0x241cacu: goto label_241cac;
        case 0x241cb0u: goto label_241cb0;
        case 0x241cb4u: goto label_241cb4;
        case 0x241cb8u: goto label_241cb8;
        case 0x241cbcu: goto label_241cbc;
        case 0x241cc0u: goto label_241cc0;
        case 0x241cc4u: goto label_241cc4;
        case 0x241cc8u: goto label_241cc8;
        case 0x241cccu: goto label_241ccc;
        case 0x241cd0u: goto label_241cd0;
        case 0x241cd4u: goto label_241cd4;
        case 0x241cd8u: goto label_241cd8;
        case 0x241cdcu: goto label_241cdc;
        case 0x241ce0u: goto label_241ce0;
        case 0x241ce4u: goto label_241ce4;
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        case 0x241d70u: goto label_241d70;
        case 0x241d74u: goto label_241d74;
        case 0x241d78u: goto label_241d78;
        case 0x241d7cu: goto label_241d7c;
        case 0x241d80u: goto label_241d80;
        case 0x241d84u: goto label_241d84;
        case 0x241d88u: goto label_241d88;
        case 0x241d8cu: goto label_241d8c;
        case 0x241d90u: goto label_241d90;
        case 0x241d94u: goto label_241d94;
        case 0x241d98u: goto label_241d98;
        case 0x241d9cu: goto label_241d9c;
        case 0x241da0u: goto label_241da0;
        case 0x241da4u: goto label_241da4;
        case 0x241da8u: goto label_241da8;
        case 0x241dacu: goto label_241dac;
        case 0x241db0u: goto label_241db0;
        case 0x241db4u: goto label_241db4;
        case 0x241db8u: goto label_241db8;
        case 0x241dbcu: goto label_241dbc;
        case 0x241dc0u: goto label_241dc0;
        case 0x241dc4u: goto label_241dc4;
        case 0x241dc8u: goto label_241dc8;
        case 0x241dccu: goto label_241dcc;
        case 0x241dd0u: goto label_241dd0;
        case 0x241dd4u: goto label_241dd4;
        case 0x241dd8u: goto label_241dd8;
        case 0x241ddcu: goto label_241ddc;
        case 0x241de0u: goto label_241de0;
        case 0x241de4u: goto label_241de4;
        case 0x241de8u: goto label_241de8;
        case 0x241decu: goto label_241dec;
        case 0x241df0u: goto label_241df0;
        case 0x241df4u: goto label_241df4;
        case 0x241df8u: goto label_241df8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e00u: goto label_241e00;
        case 0x241e04u: goto label_241e04;
        case 0x241e08u: goto label_241e08;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e10u: goto label_241e10;
        case 0x241e14u: goto label_241e14;
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        case 0x241f0cu: goto label_241f0c;
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        default: return;
    }

label_241848:
    // 0x241848: 0x0  nop
    ctx->pc = 0x241848u;
    // NOP
label_24184c:
    // 0x24184c: 0x0  nop
    ctx->pc = 0x24184cu;
    // NOP
label_241850:
    // 0x241850: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x241850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241854:
    // 0x241854: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_241858:
    if (ctx->pc == 0x241858u) {
        ctx->pc = 0x241858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241854u;
        // 0x241858: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24185Cu;
        goto label_24185c;
    }
    ctx->pc = 0x241854u;
    {
        const bool branch_taken_0x241854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241854u;
        // 0x241858: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241854) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x24185Cu;
label_24185c:
    // 0x24185c: 0x34632384  ori         $v1, $v1, 0x2384
    ctx->pc = 0x24185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9092);
label_241860:
    // 0x241860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x241860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_241864:
    // 0x241864: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x241864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_241868:
    // 0x241868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_24186c:
    if (ctx->pc == 0x24186Cu) {
        ctx->pc = 0x24186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241868u;
        // 0x24186c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241870u;
        goto label_241870;
    }
    ctx->pc = 0x241868u;
    {
        const bool branch_taken_0x241868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241868u;
        // 0x24186c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241868) {
            ctx->pc = 0x241898u;
            goto label_241898;
        }
    }
    ctx->pc = 0x241870u;
label_241870:
    // 0x241870: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x241870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_241874:
    // 0x241874: 0x34212388  ori         $at, $at, 0x2388
    ctx->pc = 0x241874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9096);
label_241878:
    // 0x241878: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x241878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_24187c:
    // 0x24187c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x24187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_241880:
    // 0x241880: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x241880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_241884:
    // 0x241884: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x241884u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_241888:
    // 0x241888: 0x0  nop
    ctx->pc = 0x241888u;
    // NOP
label_24188c:
    // 0x24188c: 0x0  nop
    ctx->pc = 0x24188cu;
    // NOP
label_241890:
    // 0x241890: 0x1810  mfhi        $v1
    ctx->pc = 0x241890u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_241894:
    // 0x241894: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x241894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_241898:
    // 0x241898: 0x8f8592f8  lw          $a1, -0x6D08($gp)
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24189c:
    // 0x24189c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2418a0:
    // 0x2418a0: 0x34642380  ori         $a0, $v1, 0x2380
    ctx->pc = 0x2418a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9088);
label_2418a4:
    // 0x2418a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2418a8:
    // 0x2418a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2418ac:
    // 0x2418ac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2418acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2418b0:
    // 0x2418b0: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_2418b4:
    if (ctx->pc == 0x2418B4u) {
        ctx->pc = 0x2418B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B0u;
        // 0x2418b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2418B8u;
        goto label_2418b8;
    }
    ctx->pc = 0x2418B0u;
    {
        const bool branch_taken_0x2418b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2418B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B0u;
        // 0x2418b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418b0) {
            ctx->pc = 0x241940u;
            goto label_241940;
        }
    }
    ctx->pc = 0x2418B8u;
label_2418b8:
    // 0x2418b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2418bc:
    // 0x2418bc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2418c0:
    // 0x2418c0: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_2418c4:
    // 0x2418c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2418c8:
    // 0x2418c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2418cc:
    // 0x2418cc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2418d0:
    // 0x2418d0: 0xac232384  sw          $v1, 0x2384($at)
    ctx->pc = 0x2418d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
label_2418d4:
    // 0x2418d4: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x2418d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_2418d8:
    // 0x2418d8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2418dc:
    if (ctx->pc == 0x2418DCu) {
        ctx->pc = 0x2418E0u;
        goto label_2418e0;
    }
    ctx->pc = 0x2418D8u;
    {
        const bool branch_taken_0x2418d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418d8) {
            ctx->pc = 0x241904u;
            goto label_241904;
        }
    }
    ctx->pc = 0x2418E0u;
label_2418e0:
    // 0x2418e0: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2418e4:
    // 0x2418e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2418e8:
    // 0x2418e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2418ec:
    // 0x2418ec: 0x8c252384  lw          $a1, 0x2384($at)
    ctx->pc = 0x2418ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_2418f0:
    // 0x2418f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2418f4:
    // 0x2418f4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2418f8:
    // 0x2418f8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2418f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2418fc:
    // 0x2418fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_241900:
    if (ctx->pc == 0x241900u) {
        ctx->pc = 0x241900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418FCu;
        // 0x241900: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241904u;
        goto label_241904;
    }
    ctx->pc = 0x2418FCu;
    {
        const bool branch_taken_0x2418fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418FCu;
        // 0x241900: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418fc) {
            ctx->pc = 0x241908u;
            goto label_241908;
        }
    }
    ctx->pc = 0x241904u;
label_241904:
    // 0x241904: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_241908:
    // 0x241908: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24190c:
    // 0x24190c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241910:
    // 0x241910: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241914:
    // 0x241914: 0xac252384  sw          $a1, 0x2384($at)
    ctx->pc = 0x241914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 5));
label_241918:
    // 0x241918: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x241918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24191c:
    // 0x24191c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241920:
    // 0x241920: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_241924:
    // 0x241924: 0x8c232384  lw          $v1, 0x2384($at)
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_241928:
    // 0x241928: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x241928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_24192c:
    // 0x24192c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_241930:
    if (ctx->pc == 0x241930u) {
        ctx->pc = 0x241930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24192Cu;
        // 0x241930: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241934u;
        goto label_241934;
    }
    ctx->pc = 0x24192Cu;
    {
        const bool branch_taken_0x24192c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24192Cu;
        // 0x241930: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24192c) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x241934u;
label_241934:
    // 0x241934: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_241938:
    // 0x241938: 0x10000022  b           . + 4 + (0x22 << 2)
label_24193c:
    if (ctx->pc == 0x24193Cu) {
        ctx->pc = 0x24193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241938u;
        // 0x24193c: 0xac202380  sw          $zero, 0x2380($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241940u;
        goto label_241940;
    }
    ctx->pc = 0x241938u;
    {
        const bool branch_taken_0x241938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241938u;
        // 0x24193c: 0xac202380  sw          $zero, 0x2380($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241938) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x241940u;
label_241940:
    // 0x241940: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_241944:
    if (ctx->pc == 0x241944u) {
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241948u;
        goto label_241948;
    }
    ctx->pc = 0x241940u;
    {
        const bool branch_taken_0x241940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241940) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x241948u;
label_241948:
    // 0x241948: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_24194c:
    // 0x24194c: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x24194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_241950:
    // 0x241950: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241954:
    // 0x241954: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x241954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_241958:
    // 0x241958: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_24195c:
    // 0x24195c: 0xac232384  sw          $v1, 0x2384($at)
    ctx->pc = 0x24195cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
label_241960:
    // 0x241960: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x241960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_241964:
    // 0x241964: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_241968:
    if (ctx->pc == 0x241968u) {
        ctx->pc = 0x24196Cu;
        goto label_24196c;
    }
    ctx->pc = 0x241964u;
    {
        const bool branch_taken_0x241964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241964) {
            ctx->pc = 0x241990u;
            goto label_241990;
        }
    }
    ctx->pc = 0x24196Cu;
label_24196c:
    // 0x24196c: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241970:
    // 0x241970: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241974:
    // 0x241974: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_241978:
    // 0x241978: 0x8c252384  lw          $a1, 0x2384($at)
    ctx->pc = 0x241978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_24197c:
    // 0x24197c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241980:
    // 0x241980: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_241984:
    // 0x241984: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_241988:
    // 0x241988: 0x10000002  b           . + 4 + (0x2 << 2)
label_24198c:
    if (ctx->pc == 0x24198Cu) {
        ctx->pc = 0x24198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241988u;
        // 0x24198c: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241990u;
        goto label_241990;
    }
    ctx->pc = 0x241988u;
    {
        const bool branch_taken_0x241988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241988u;
        // 0x24198c: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241988) {
            ctx->pc = 0x241994u;
            goto label_241994;
        }
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241994:
    // 0x241994: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241998:
    // 0x241998: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24199c:
    // 0x24199c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24199cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2419a0:
    // 0x2419a0: 0xac252384  sw          $a1, 0x2384($at)
    ctx->pc = 0x2419a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 5));
label_2419a4:
    // 0x2419a4: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2419a8:
    // 0x2419a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2419ac:
    // 0x2419ac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2419acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2419b0:
    // 0x2419b0: 0x8c232384  lw          $v1, 0x2384($at)
    ctx->pc = 0x2419b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_2419b4:
    // 0x2419b4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_2419b8:
    if (ctx->pc == 0x2419B8u) {
        ctx->pc = 0x2419B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B4u;
        // 0x2419b8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419BCu;
        goto label_2419bc;
    }
    ctx->pc = 0x2419B4u;
    {
        const bool branch_taken_0x2419b4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2419B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B4u;
        // 0x2419b8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b4) {
            ctx->pc = 0x2419C4u;
            goto label_2419c4;
        }
    }
    ctx->pc = 0x2419BCu;
label_2419bc:
    // 0x2419bc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2419bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2419c0:
    // 0x2419c0: 0xac202380  sw          $zero, 0x2380($at)
    ctx->pc = 0x2419c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
label_2419c4:
    // 0x2419c4: 0x3e00008  jr          $ra
label_2419c8:
    if (ctx->pc == 0x2419C8u) {
        ctx->pc = 0x2419CCu;
        goto label_2419cc;
    }
    ctx->pc = 0x2419C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419CCu;
label_2419cc:
    // 0x2419cc: 0x0  nop
    ctx->pc = 0x2419ccu;
    // NOP
label_2419d0:
    // 0x2419d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2419d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2419d4:
    // 0x2419d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2419d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2419d8:
    // 0x2419d8: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2419d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2419dc:
    // 0x2419dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2419e0:
    if (ctx->pc == 0x2419E0u) {
        ctx->pc = 0x2419E4u;
        goto label_2419e4;
    }
    ctx->pc = 0x2419DCu;
    {
        const bool branch_taken_0x2419dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419dc) {
            ctx->pc = 0x2419F0u;
            goto label_2419f0;
        }
    }
    ctx->pc = 0x2419E4u;
label_2419e4:
    // 0x2419e4: 0xc070038  jal         func_1C00E0
label_2419e8:
    if (ctx->pc == 0x2419E8u) {
        ctx->pc = 0x2419ECu;
        goto label_2419ec;
    }
    ctx->pc = 0x2419E4u;
    SET_GPR_U32(ctx, 31, 0x2419ECu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x2419ECu;
label_2419ec:
    // 0x2419ec: 0xaf8092f8  sw          $zero, -0x6D08($gp)
    ctx->pc = 0x2419ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939384), GPR_U32(ctx, 0));
label_2419f0:
    // 0x2419f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2419f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2419f4:
    // 0x2419f4: 0x3e00008  jr          $ra
label_2419f8:
    if (ctx->pc == 0x2419F8u) {
        ctx->pc = 0x2419F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419F4u;
        // 0x2419f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2419FCu;
        goto label_2419fc;
    }
    ctx->pc = 0x2419F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2419F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419F4u;
        // 0x2419f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419FCu;
label_2419fc:
    // 0x2419fc: 0x0  nop
    ctx->pc = 0x2419fcu;
    // NOP
label_241a00:
    // 0x241a00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x241a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_241a04:
    // 0x241a04: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x241a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_241a08:
    // 0x241a08: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x241a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_241a0c:
    // 0x241a0c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x241a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_241a10:
    // 0x241a10: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x241a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_241a14:
    // 0x241a14: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x241a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_241a18:
    // 0x241a18: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x241a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_241a1c:
    // 0x241a1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x241a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_241a20:
    // 0x241a20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x241a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_241a24:
    // 0x241a24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x241a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_241a28:
    // 0x241a28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x241a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_241a2c:
    // 0x241a2c: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241a30:
    // 0x241a30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_241a34:
    if (ctx->pc == 0x241A34u) {
        ctx->pc = 0x241A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A30u;
        // 0x241a34: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A38u;
        goto label_241a38;
    }
    ctx->pc = 0x241A30u;
    {
        const bool branch_taken_0x241a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A30u;
        // 0x241a34: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a30) {
            ctx->pc = 0x241A48u;
            goto label_241a48;
        }
    }
    ctx->pc = 0x241A38u;
label_241a38:
    // 0x241a38: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x241a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241a3c:
    // 0x241a3c: 0xc070080  jal         func_1C0200
label_241a40:
    if (ctx->pc == 0x241A40u) {
        ctx->pc = 0x241A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A3Cu;
        // 0x241a40: 0x344523b0  ori         $a1, $v0, 0x23B0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9136);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241A44u;
        goto label_241a44;
    }
    ctx->pc = 0x241A3Cu;
    SET_GPR_U32(ctx, 31, 0x241A44u);
    ctx->pc = 0x241A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A3Cu;
    // 0x241a40: 0x344523b0  ori         $a1, $v0, 0x23B0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9136);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x241A44u;
label_241a44:
    // 0x241a44: 0xaf8292f8  sw          $v0, -0x6D08($gp)
    ctx->pc = 0x241a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939384), GPR_U32(ctx, 2));
label_241a48:
    // 0x241a48: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241a4c:
    // 0x241a4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241a50:
    // 0x241a50: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x241a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_241a54:
    // 0x241a54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241a58:
    // 0x241a58: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x241a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_241a5c:
    // 0x241a5c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_241a60:
    // 0x241a60: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x241a60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241a64:
    // 0x241a64: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x241a64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241a68:
    // 0x241a68: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x241a68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241a6c:
    // 0x241a6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x241a6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241a70:
    // 0x241a70: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241a70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241a74:
    // 0x241a74: 0xac202380  sw          $zero, 0x2380($at)
    ctx->pc = 0x241a74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
label_241a78:
    // 0x241a78: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241a7c:
    // 0x241a7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241a80:
    // 0x241a80: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241a84:
    // 0x241a84: 0xac202384  sw          $zero, 0x2384($at)
    ctx->pc = 0x241a84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 0));
label_241a88:
    // 0x241a88: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241a8c:
    // 0x241a8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241a90:
    // 0x241a90: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241a94:
    // 0x241a94: 0xac202388  sw          $zero, 0x2388($at)
    ctx->pc = 0x241a94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9096), GPR_U32(ctx, 0));
label_241a98:
    // 0x241a98: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241a9c:
    // 0x241a9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241aa0:
    // 0x241aa0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241aa4:
    // 0x241aa4: 0xac202394  sw          $zero, 0x2394($at)
    ctx->pc = 0x241aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 0));
label_241aa8:
    // 0x241aa8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241aac:
    // 0x241aac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241ab0:
    // 0x241ab0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241ab4:
    // 0x241ab4: 0xac202398  sw          $zero, 0x2398($at)
    ctx->pc = 0x241ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 0));
label_241ab8:
    // 0x241ab8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241abc:
    // 0x241abc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241ac0:
    // 0x241ac0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241ac4:
    // 0x241ac4: 0xac242390  sw          $a0, 0x2390($at)
    ctx->pc = 0x241ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 4));
label_241ac8:
    // 0x241ac8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241acc:
    // 0x241acc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241ad0:
    // 0x241ad0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241ad4:
    // 0x241ad4: 0xac23238c  sw          $v1, 0x238C($at)
    ctx->pc = 0x241ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 3));
label_241ad8:
    // 0x241ad8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241adc:
    // 0x241adc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241ae0:
    // 0x241ae0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241ae4:
    // 0x241ae4: 0xac2023a8  sw          $zero, 0x23A8($at)
    ctx->pc = 0x241ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9128), GPR_U32(ctx, 0));
label_241ae8:
    // 0x241ae8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241aec:
    // 0x241aec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x241aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241af0:
    // 0x241af0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_241af4:
    // 0x241af4: 0xc05e234  jal         func_1788D0
label_241af8:
    if (ctx->pc == 0x241AF8u) {
        ctx->pc = 0x241AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AF4u;
        // 0x241af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241AFCu;
        goto label_241afc;
    }
    ctx->pc = 0x241AF4u;
    SET_GPR_U32(ctx, 31, 0x241AFCu);
    ctx->pc = 0x241AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241AF4u;
    // 0x241af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241AF4u, 0x241AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AFCu;
label_241afc:
    // 0x241afc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x241afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_241b00:
    // 0x241b00: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x241b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_241b04:
    // 0x241b04: 0xc07091c  jal         func_1C2470
label_241b08:
    if (ctx->pc == 0x241B08u) {
        ctx->pc = 0x241B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B04u;
        // 0x241b08: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B0Cu;
        goto label_241b0c;
    }
    ctx->pc = 0x241B04u;
    SET_GPR_U32(ctx, 31, 0x241B0Cu);
    ctx->pc = 0x241B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B04u;
    // 0x241b08: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x241B0Cu;
label_241b0c:
    // 0x241b0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241b10:
    // 0x241b10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241b14:
    // 0x241b14: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_241b18:
    // 0x241b18: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x241b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_241b1c:
    // 0x241b1c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241b20:
    // 0x241b20: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241b20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241b24:
    // 0x241b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241b28:
    // 0x241b28: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x241b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_241b2c:
    // 0x241b2c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x241b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_241b30:
    // 0x241b30: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241b34:
    // 0x241b34: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241b38:
    // 0x241b38: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241b3c:
    // 0x241b3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241b40:
    // 0x241b40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241b40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241b44:
    // 0x241b44: 0xc05de30  jal         func_1778C0
label_241b48:
    if (ctx->pc == 0x241B48u) {
        ctx->pc = 0x241B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B44u;
        // 0x241b48: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B4Cu;
        goto label_241b4c;
    }
    ctx->pc = 0x241B44u;
    SET_GPR_U32(ctx, 31, 0x241B4Cu);
    ctx->pc = 0x241B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B44u;
    // 0x241b48: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241B44u, 0x241B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B4Cu;
label_241b4c:
    // 0x241b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241b50:
    // 0x241b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x241b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241b54:
    // 0x241b54: 0x0  nop
    ctx->pc = 0x241b54u;
    // NOP
label_241b58:
    // 0x241b58: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241b5c:
    // 0x241b5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x241b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241b60:
    // 0x241b60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_241b64:
    // 0x241b64: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x241b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_241b68:
    // 0x241b68: 0x245202c0  addiu       $s2, $v0, 0x2C0
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
label_241b6c:
    // 0x241b6c: 0xc05e234  jal         func_1788D0
label_241b70:
    if (ctx->pc == 0x241B70u) {
        ctx->pc = 0x241B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B6Cu;
        // 0x241b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B74u;
        goto label_241b74;
    }
    ctx->pc = 0x241B6Cu;
    SET_GPR_U32(ctx, 31, 0x241B74u);
    ctx->pc = 0x241B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B6Cu;
    // 0x241b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241B6Cu, 0x241B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B74u;
label_241b74:
    // 0x241b74: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x241b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_241b78:
    // 0x241b78: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x241b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_241b7c:
    // 0x241b7c: 0xc07091c  jal         func_1C2470
label_241b80:
    if (ctx->pc == 0x241B80u) {
        ctx->pc = 0x241B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B7Cu;
        // 0x241b80: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241B84u;
        goto label_241b84;
    }
    ctx->pc = 0x241B7Cu;
    SET_GPR_U32(ctx, 31, 0x241B84u);
    ctx->pc = 0x241B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B7Cu;
    // 0x241b80: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x241B84u;
label_241b84:
    // 0x241b84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241b88:
    // 0x241b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241b8c:
    // 0x241b8c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x241b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_241b90:
    // 0x241b90: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_241b94:
    // 0x241b94: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241b98:
    // 0x241b98: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241b9c:
    // 0x241b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ba0:
    // 0x241ba0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x241ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_241ba4:
    // 0x241ba4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x241ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_241ba8:
    // 0x241ba8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241bac:
    // 0x241bac: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241bb0:
    // 0x241bb0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241bb4:
    // 0x241bb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241bb8:
    // 0x241bb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241bb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241bbc:
    // 0x241bbc: 0xc05de30  jal         func_1778C0
label_241bc0:
    if (ctx->pc == 0x241BC0u) {
        ctx->pc = 0x241BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BBCu;
        // 0x241bc0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241BC4u;
        goto label_241bc4;
    }
    ctx->pc = 0x241BBCu;
    SET_GPR_U32(ctx, 31, 0x241BC4u);
    ctx->pc = 0x241BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BBCu;
    // 0x241bc0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241BBCu, 0x241BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BC4u;
label_241bc4:
    // 0x241bc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_241bc8:
    // 0x241bc8: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x241bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_241bcc:
    // 0x241bcc: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_241bd0:
    if (ctx->pc == 0x241BD0u) {
        ctx->pc = 0x241BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BCCu;
        // 0x241bd0: 0x26310160  addiu       $s1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241BD4u;
        goto label_241bd4;
    }
    ctx->pc = 0x241BCCu;
    {
        const bool branch_taken_0x241bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BCCu;
        // 0x241bd0: 0x26310160  addiu       $s1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241bcc) {
            ctx->pc = 0x241B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241b54;
        }
    }
    ctx->pc = 0x241BD4u;
label_241bd4:
    // 0x241bd4: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241bd8:
    // 0x241bd8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x241bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241bdc:
    // 0x241bdc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x241bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_241be0:
    // 0x241be0: 0x24500160  addiu       $s0, $v0, 0x160
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
label_241be4:
    // 0x241be4: 0xc05e234  jal         func_1788D0
label_241be8:
    if (ctx->pc == 0x241BE8u) {
        ctx->pc = 0x241BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BE4u;
        // 0x241be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241BECu;
        goto label_241bec;
    }
    ctx->pc = 0x241BE4u;
    SET_GPR_U32(ctx, 31, 0x241BECu);
    ctx->pc = 0x241BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BE4u;
    // 0x241be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241BE4u, 0x241BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BECu;
label_241bec:
    // 0x241bec: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x241becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_241bf0:
    // 0x241bf0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x241bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241bf4:
    // 0x241bf4: 0xc07091c  jal         func_1C2470
label_241bf8:
    if (ctx->pc == 0x241BF8u) {
        ctx->pc = 0x241BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BF4u;
        // 0x241bf8: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241BFCu;
        goto label_241bfc;
    }
    ctx->pc = 0x241BF4u;
    SET_GPR_U32(ctx, 31, 0x241BFCu);
    ctx->pc = 0x241BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BF4u;
    // 0x241bf8: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x241BFCu;
label_241bfc:
    // 0x241bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241c00:
    // 0x241c00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241c04:
    // 0x241c04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241c08:
    // 0x241c08: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_241c0c:
    // 0x241c0c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241c10:
    // 0x241c10: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241c14:
    // 0x241c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241c18:
    // 0x241c18: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x241c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_241c1c:
    // 0x241c1c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x241c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_241c20:
    // 0x241c20: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241c24:
    // 0x241c24: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241c28:
    // 0x241c28: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241c28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241c2c:
    // 0x241c2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241c2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241c30:
    // 0x241c30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241c30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241c34:
    // 0x241c34: 0xc05de30  jal         func_1778C0
label_241c38:
    if (ctx->pc == 0x241C38u) {
        ctx->pc = 0x241C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C34u;
        // 0x241c38: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C3Cu;
        goto label_241c3c;
    }
    ctx->pc = 0x241C34u;
    SET_GPR_U32(ctx, 31, 0x241C3Cu);
    ctx->pc = 0x241C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C34u;
    // 0x241c38: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241C34u, 0x241C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C3Cu;
label_241c3c:
    // 0x241c3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241c40:
    // 0x241c40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241c44:
    // 0x241c44: 0x0  nop
    ctx->pc = 0x241c44u;
    // NOP
label_241c48:
    // 0x241c48: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241c4c:
    // 0x241c4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241c50:
    // 0x241c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_241c54:
    // 0x241c54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_241c58:
    // 0x241c58: 0x24511080  addiu       $s1, $v0, 0x1080
    ctx->pc = 0x241c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
label_241c5c:
    // 0x241c5c: 0xc05e234  jal         func_1788D0
label_241c60:
    if (ctx->pc == 0x241C60u) {
        ctx->pc = 0x241C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C5Cu;
        // 0x241c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C64u;
        goto label_241c64;
    }
    ctx->pc = 0x241C5Cu;
    SET_GPR_U32(ctx, 31, 0x241C64u);
    ctx->pc = 0x241C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C5Cu;
    // 0x241c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241C5Cu, 0x241C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C64u;
label_241c64:
    // 0x241c64: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_241c68:
    // 0x241c68: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x241c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241c6c:
    // 0x241c6c: 0xc07091c  jal         func_1C2470
label_241c70:
    if (ctx->pc == 0x241C70u) {
        ctx->pc = 0x241C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C6Cu;
        // 0x241c70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C74u;
        goto label_241c74;
    }
    ctx->pc = 0x241C6Cu;
    SET_GPR_U32(ctx, 31, 0x241C74u);
    ctx->pc = 0x241C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C6Cu;
    // 0x241c70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x241C74u;
label_241c74:
    // 0x241c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241c78:
    // 0x241c78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241c7c:
    // 0x241c7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x241c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241c80:
    // 0x241c80: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_241c84:
    // 0x241c84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241c88:
    // 0x241c88: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241c8c:
    // 0x241c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241c90:
    // 0x241c90: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x241c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_241c94:
    // 0x241c94: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x241c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_241c98:
    // 0x241c98: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241c9c:
    // 0x241c9c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241ca0:
    // 0x241ca0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241ca4:
    // 0x241ca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241ca8:
    // 0x241ca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241cac:
    // 0x241cac: 0xc05de30  jal         func_1778C0
label_241cb0:
    if (ctx->pc == 0x241CB0u) {
        ctx->pc = 0x241CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CACu;
        // 0x241cb0: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241CB4u;
        goto label_241cb4;
    }
    ctx->pc = 0x241CACu;
    SET_GPR_U32(ctx, 31, 0x241CB4u);
    ctx->pc = 0x241CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CACu;
    // 0x241cb0: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241CACu, 0x241CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CB4u;
label_241cb4:
    // 0x241cb4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x241cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_241cb8:
    // 0x241cb8: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x241cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
label_241cbc:
    // 0x241cbc: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_241cc0:
    if (ctx->pc == 0x241CC0u) {
        ctx->pc = 0x241CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CBCu;
        // 0x241cc0: 0x26100160  addiu       $s0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241CC4u;
        goto label_241cc4;
    }
    ctx->pc = 0x241CBCu;
    {
        const bool branch_taken_0x241cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CBCu;
        // 0x241cc0: 0x26100160  addiu       $s0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cbc) {
            ctx->pc = 0x241C44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241c44;
        }
    }
    ctx->pc = 0x241CC4u;
label_241cc4:
    // 0x241cc4: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241cc8:
    // 0x241cc8: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_241ccc:
    // 0x241ccc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_241cd0:
    // 0x241cd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241cd4:
    // 0x241cd4: 0x24502a80  addiu       $s0, $v0, 0x2A80
    ctx->pc = 0x241cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
label_241cd8:
    // 0x241cd8: 0xc05e234  jal         func_1788D0
label_241cdc:
    if (ctx->pc == 0x241CDCu) {
        ctx->pc = 0x241CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CD8u;
        // 0x241cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241CE0u;
        goto label_241ce0;
    }
    ctx->pc = 0x241CD8u;
    SET_GPR_U32(ctx, 31, 0x241CE0u);
    ctx->pc = 0x241CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CD8u;
    // 0x241cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241CD8u, 0x241CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CE0u;
label_241ce0:
    // 0x241ce0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x241ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_241ce4:
    // 0x241ce4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x241ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241ce8:
    // 0x241ce8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x241ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241cec:
    // 0x241cec: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x241cecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241cf0:
    // 0x241cf0: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x241cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_241cf4:
    // 0x241cf4: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x241cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_241cf8:
    // 0x241cf8: 0xc07c084  jal         func_1F0210
label_241cfc:
    if (ctx->pc == 0x241CFCu) {
        ctx->pc = 0x241CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CF8u;
        // 0x241cfc: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D00u;
        goto label_241d00;
    }
    ctx->pc = 0x241CF8u;
    SET_GPR_U32(ctx, 31, 0x241D00u);
    ctx->pc = 0x241CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CF8u;
    // 0x241cfc: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x241D00u;
label_241d00:
    // 0x241d00: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241d04:
    // 0x241d04: 0x24050489  addiu       $a1, $zero, 0x489
    ctx->pc = 0x241d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1161));
label_241d08:
    // 0x241d08: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x241d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_241d0c:
    // 0x241d0c: 0x24503020  addiu       $s0, $v0, 0x3020
    ctx->pc = 0x241d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_241d10:
    // 0x241d10: 0xc05e234  jal         func_1788D0
label_241d14:
    if (ctx->pc == 0x241D14u) {
        ctx->pc = 0x241D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D10u;
        // 0x241d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D18u;
        goto label_241d18;
    }
    ctx->pc = 0x241D10u;
    SET_GPR_U32(ctx, 31, 0x241D18u);
    ctx->pc = 0x241D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D10u;
    // 0x241d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241D10u, 0x241D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D18u;
label_241d18:
    // 0x241d18: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_241d1c:
    // 0x241d1c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_241d20:
    // 0x241d20: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x241d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_241d24:
    // 0x241d24: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_241d28:
    // 0x241d28: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x241d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_241d2c:
    // 0x241d2c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_241d30:
    // 0x241d30: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x241d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_241d34:
    // 0x241d34: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x241d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241d38:
    // 0x241d38: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241d3c:
    // 0x241d3c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x241d3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241d40:
    // 0x241d40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x241d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d44:
    // 0x241d44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d48:
    // 0x241d48: 0xc07c110  jal         func_1F0440
label_241d4c:
    if (ctx->pc == 0x241D4Cu) {
        ctx->pc = 0x241D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D48u;
        // 0x241d4c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D50u;
        goto label_241d50;
    }
    ctx->pc = 0x241D48u;
    SET_GPR_U32(ctx, 31, 0x241D50u);
    ctx->pc = 0x241D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D48u;
    // 0x241d4c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x241D50u;
label_241d50:
    // 0x241d50: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_241d54:
    // 0x241d54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241d58:
    // 0x241d58: 0xc07091c  jal         func_1C2470
label_241d5c:
    if (ctx->pc == 0x241D5Cu) {
        ctx->pc = 0x241D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D58u;
        // 0x241d5c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D60u;
        goto label_241d60;
    }
    ctx->pc = 0x241D58u;
    SET_GPR_U32(ctx, 31, 0x241D60u);
    ctx->pc = 0x241D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D58u;
    // 0x241d5c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x241D60u;
label_241d60:
    // 0x241d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241d64:
    // 0x241d64: 0x26040380  addiu       $a0, $s0, 0x380
    ctx->pc = 0x241d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
label_241d68:
    // 0x241d68: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x241d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241d6c:
    // 0x241d6c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241d70:
    // 0x241d70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241d74:
    // 0x241d74: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241d78:
    // 0x241d78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241d7c:
    // 0x241d7c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241d80:
    // 0x241d80: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x241d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_241d84:
    // 0x241d84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d88:
    // 0x241d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241d8c:
    // 0x241d8c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x241d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_241d90:
    // 0x241d90: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241d94:
    // 0x241d94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d98:
    // 0x241d98: 0xc05de30  jal         func_1778C0
label_241d9c:
    if (ctx->pc == 0x241D9Cu) {
        ctx->pc = 0x241D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D98u;
        // 0x241d9c: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DA0u;
        goto label_241da0;
    }
    ctx->pc = 0x241D98u;
    SET_GPR_U32(ctx, 31, 0x241DA0u);
    ctx->pc = 0x241D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D98u;
    // 0x241d9c: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241D98u, 0x241DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DA0u;
label_241da0:
    // 0x241da0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_241da4:
    // 0x241da4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241da8:
    // 0x241da8: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x241da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_241dac:
    // 0x241dac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x241dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241db0:
    // 0x241db0: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x241db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241db4:
    // 0x241db4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x241db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241db8:
    // 0x241db8: 0xc054e5c  jal         func_153970
label_241dbc:
    if (ctx->pc == 0x241DBCu) {
        ctx->pc = 0x241DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DB8u;
        // 0x241dbc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DC0u;
        goto label_241dc0;
    }
    ctx->pc = 0x241DB8u;
    SET_GPR_U32(ctx, 31, 0x241DC0u);
    ctx->pc = 0x241DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DB8u;
    // 0x241dbc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x241DB8u, 0x241DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DC0u;
label_241dc0:
    // 0x241dc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241dc4:
    // 0x241dc4: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_241dc8:
    // 0x241dc8: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_241dcc:
    // 0x241dcc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x241dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_241dd0:
    // 0x241dd0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x241dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241dd4:
    // 0x241dd4: 0xc054e74  jal         func_1539D0
label_241dd8:
    if (ctx->pc == 0x241DD8u) {
        ctx->pc = 0x241DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DD4u;
        // 0x241dd8: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DDCu;
        goto label_241ddc;
    }
    ctx->pc = 0x241DD4u;
    SET_GPR_U32(ctx, 31, 0x241DDCu);
    ctx->pc = 0x241DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DD4u;
    // 0x241dd8: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x241DD4u, 0x241DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DDCu;
label_241ddc:
    // 0x241ddc: 0xc07082c  jal         func_1C20B0
label_241de0:
    if (ctx->pc == 0x241DE0u) {
        ctx->pc = 0x241DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DDCu;
        // 0x241de0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DE4u;
        goto label_241de4;
    }
    ctx->pc = 0x241DDCu;
    SET_GPR_U32(ctx, 31, 0x241DE4u);
    ctx->pc = 0x241DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DDCu;
    // 0x241de0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x241DE4u;
label_241de4:
    // 0x241de4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241de8:
    // 0x241de8: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_241dec:
    // 0x241dec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241df0:
    // 0x241df0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241df4:
    // 0x241df4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241df8:
    // 0x241df8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241dfc:
    // 0x241dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241e00:
    // 0x241e00: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241e04:
    // 0x241e04: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x241e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_241e08:
    // 0x241e08: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_241e0c:
    // 0x241e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241e10:
    // 0x241e10: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x241e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_241e14:
    // 0x241e14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241e18:
    // 0x241e18: 0x240a0198  addiu       $t2, $zero, 0x198
    ctx->pc = 0x241e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_241e1c:
    // 0x241e1c: 0xc05de30  jal         func_1778C0
label_241e20:
    if (ctx->pc == 0x241E20u) {
        ctx->pc = 0x241E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E1Cu;
        // 0x241e20: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E24u;
        goto label_241e24;
    }
    ctx->pc = 0x241E1Cu;
    SET_GPR_U32(ctx, 31, 0x241E24u);
    ctx->pc = 0x241E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E1Cu;
    // 0x241e20: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241E1Cu, 0x241E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E24u;
label_241e24:
    // 0x241e24: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_241e28:
    // 0x241e28: 0x26041360  addiu       $a0, $s0, 0x1360
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4960));
label_241e2c:
    // 0x241e2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x241e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241e30:
    // 0x241e30: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241e34:
    // 0x241e34: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241e38:
    // 0x241e38: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241e38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241e3c:
    // 0x241e3c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x241e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241e40:
    // 0x241e40: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x241e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_241e44:
    // 0x241e44: 0xc0708ac  jal         func_1C22B0
label_241e48:
    if (ctx->pc == 0x241E48u) {
        ctx->pc = 0x241E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E44u;
        // 0x241e48: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E4Cu;
        goto label_241e4c;
    }
    ctx->pc = 0x241E44u;
    SET_GPR_U32(ctx, 31, 0x241E4Cu);
    ctx->pc = 0x241E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E44u;
    // 0x241e48: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x241E4Cu;
label_241e4c:
    // 0x241e4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x241e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241e50:
    // 0x241e50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x241e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241e54:
    // 0x241e54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241e58:
    // 0x241e58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x241e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241e5c:
    // 0x241e5c: 0x0  nop
    ctx->pc = 0x241e5cu;
    // NOP
label_241e60:
    // 0x241e60: 0xc070834  jal         func_1C20D0
label_241e64:
    if (ctx->pc == 0x241E64u) {
        ctx->pc = 0x241E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E60u;
        // 0x241e64: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E68u;
        goto label_241e68;
    }
    ctx->pc = 0x241E60u;
    SET_GPR_U32(ctx, 31, 0x241E68u);
    ctx->pc = 0x241E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E60u;
    // 0x241e64: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x241E68u;
label_241e68:
    // 0x241e68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241e6c:
    // 0x241e6c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241e70:
    // 0x241e70: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x241e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_241e74:
    // 0x241e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241e78:
    // 0x241e78: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x241e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_241e7c:
    // 0x241e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241e80:
    // 0x241e80: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x241e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_241e84:
    // 0x241e84: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x241e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_241e88:
    // 0x241e88: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x241e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_241e8c:
    // 0x241e8c: 0x24441540  addiu       $a0, $v0, 0x1540
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5440));
label_241e90:
    // 0x241e90: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241e94:
    // 0x241e94: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241e98:
    // 0x241e98: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241e98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241e9c:
    // 0x241e9c: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x241e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_241ea0:
    // 0x241ea0: 0xc05de30  jal         func_1778C0
label_241ea4:
    if (ctx->pc == 0x241EA4u) {
        ctx->pc = 0x241EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EA0u;
        // 0x241ea4: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EA8u;
        goto label_241ea8;
    }
    ctx->pc = 0x241EA0u;
    SET_GPR_U32(ctx, 31, 0x241EA8u);
    ctx->pc = 0x241EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EA0u;
    // 0x241ea4: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241EA0u, 0x241EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EA8u;
label_241ea8:
    // 0x241ea8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x241ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_241eac:
    // 0x241eac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x241eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241eb0:
    // 0x241eb0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x241eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_241eb4:
    // 0x241eb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x241eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241eb8:
    // 0x241eb8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241ebc:
    // 0x241ebc: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x241ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241ec0:
    // 0x241ec0: 0xc054e5c  jal         func_153970
label_241ec4:
    if (ctx->pc == 0x241EC4u) {
        ctx->pc = 0x241EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EC0u;
        // 0x241ec4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EC8u;
        goto label_241ec8;
    }
    ctx->pc = 0x241EC0u;
    SET_GPR_U32(ctx, 31, 0x241EC8u);
    ctx->pc = 0x241EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EC0u;
    // 0x241ec4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x241EC0u, 0x241EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EC8u;
label_241ec8:
    // 0x241ec8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_241ecc:
    // 0x241ecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ed0:
    // 0x241ed0: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x241ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_241ed4:
    // 0x241ed4: 0x24441720  addiu       $a0, $v0, 0x1720
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
label_241ed8:
    // 0x241ed8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x241ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_241edc:
    // 0x241edc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x241edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241ee0:
    // 0x241ee0: 0xc054e74  jal         func_1539D0
label_241ee4:
    if (ctx->pc == 0x241EE4u) {
        ctx->pc = 0x241EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EE0u;
        // 0x241ee4: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EE8u;
        goto label_241ee8;
    }
    ctx->pc = 0x241EE0u;
    SET_GPR_U32(ctx, 31, 0x241EE8u);
    ctx->pc = 0x241EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EE0u;
    // 0x241ee4: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x241EE0u, 0x241EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EE8u;
label_241ee8:
    // 0x241ee8: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_241eec:
    // 0x241eec: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_241ef0:
    // 0x241ef0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x241ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241ef4:
    // 0x241ef4: 0x24444300  addiu       $a0, $v0, 0x4300
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_241ef8:
    // 0x241ef8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241efc:
    // 0x241efc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241f00:
    // 0x241f00: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241f04:
    // 0x241f04: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x241f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241f08:
    // 0x241f08: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_241f0c:
    // 0x241f0c: 0xc0708ac  jal         func_1C22B0
label_241f10:
    if (ctx->pc == 0x241F10u) {
        ctx->pc = 0x241F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F0Cu;
        // 0x241f10: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F14u;
        goto label_241f14;
    }
    ctx->pc = 0x241F0Cu;
    SET_GPR_U32(ctx, 31, 0x241F14u);
    ctx->pc = 0x241F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F0Cu;
    // 0x241f10: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x241F14u;
label_241f14:
    // 0x241f14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x241f14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_241f18:
    // 0x241f18: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x241f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_241f1c:
    // 0x241f1c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x241f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_241f20:
    // 0x241f20: 0x26520ea0  addiu       $s2, $s2, 0xEA0
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
label_241f24:
    // 0x241f24: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_241f28:
    if (ctx->pc == 0x241F28u) {
        ctx->pc = 0x241F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F24u;
        // 0x241f28: 0x267301e0  addiu       $s3, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F2Cu;
        goto label_241f2c;
    }
    ctx->pc = 0x241F24u;
    {
        const bool branch_taken_0x241f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F24u;
        // 0x241f28: 0x267301e0  addiu       $s3, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f24) {
            ctx->pc = 0x241E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241e5c;
        }
    }
    ctx->pc = 0x241F2Cu;
label_241f2c:
    // 0x241f2c: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_241f30:
    // 0x241f30: 0x3401c160  ori         $at, $zero, 0xC160
    ctx->pc = 0x241f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49504);
label_241f34:
    // 0x241f34: 0x24050310  addiu       $a1, $zero, 0x310
    ctx->pc = 0x241f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_241f38:
    // 0x241f38: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_241f3c:
    // 0x241f3c: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241f40:
    // 0x241f40: 0xc05e234  jal         func_1788D0
label_241f44:
    if (ctx->pc == 0x241F44u) {
        ctx->pc = 0x241F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F40u;
        // 0x241f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F48u;
        goto label_241f48;
    }
    ctx->pc = 0x241F40u;
    SET_GPR_U32(ctx, 31, 0x241F48u);
    ctx->pc = 0x241F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F40u;
    // 0x241f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x241F40u, 0x241F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F48u;
label_241f48:
    // 0x241f48: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x241f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_241f4c:
    // 0x241f4c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x241f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_241f50:
    // 0x241f50: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x241f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_241f54:
    // 0x241f54: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_241f58:
    // 0x241f58: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x241f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_241f5c:
    // 0x241f5c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x241f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_241f60:
    // 0x241f60: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x241f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_241f64:
    // 0x241f64: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241f68:
    // 0x241f68: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x241f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241f6c:
    // 0x241f6c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x241f6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241f70:
    // 0x241f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x241f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241f74:
    // 0x241f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241f78:
    // 0x241f78: 0xc07c110  jal         func_1F0440
label_241f7c:
    if (ctx->pc == 0x241F7Cu) {
        ctx->pc = 0x241F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F78u;
        // 0x241f7c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F80u;
        goto label_241f80;
    }
    ctx->pc = 0x241F78u;
    SET_GPR_U32(ctx, 31, 0x241F80u);
    ctx->pc = 0x241F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F78u;
    // 0x241f7c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x241F80u;
label_241f80:
    // 0x241f80: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_241f84:
    // 0x241f84: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x241f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_241f88:
    // 0x241f88: 0xc07091c  jal         func_1C2470
label_241f8c:
    if (ctx->pc == 0x241F8Cu) {
        ctx->pc = 0x241F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F88u;
        // 0x241f8c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F90u;
        goto label_241f90;
    }
    ctx->pc = 0x241F88u;
    SET_GPR_U32(ctx, 31, 0x241F90u);
    ctx->pc = 0x241F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F88u;
    // 0x241f8c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x241F90u;
label_241f90:
    // 0x241f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241f94:
    // 0x241f94: 0x26040380  addiu       $a0, $s0, 0x380
    ctx->pc = 0x241f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
label_241f98:
    // 0x241f98: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_241f9c:
    // 0x241f9c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x241f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241fa0:
    // 0x241fa0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x241fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_241fa4:
    // 0x241fa4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x241fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241fa8:
    // 0x241fa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241fac:
    // 0x241fac: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x241facu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_241fb0:
    // 0x241fb0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x241fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_241fb4:
    // 0x241fb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241fb8:
    // 0x241fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241fbc:
    // 0x241fbc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x241fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_241fc0:
    // 0x241fc0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x241fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_241fc4:
    // 0x241fc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241fc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241fc8:
    // 0x241fc8: 0xc05de30  jal         func_1778C0
label_241fcc:
    if (ctx->pc == 0x241FCCu) {
        ctx->pc = 0x241FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FC8u;
        // 0x241fcc: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FD0u;
        goto label_241fd0;
    }
    ctx->pc = 0x241FC8u;
    SET_GPR_U32(ctx, 31, 0x241FD0u);
    ctx->pc = 0x241FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FC8u;
    // 0x241fcc: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x241FC8u, 0x241FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FD0u;
label_241fd0:
    // 0x241fd0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x241fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_241fd4:
    // 0x241fd4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x241fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241fd8:
    // 0x241fd8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x241fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_241fdc:
    // 0x241fdc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x241fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241fe0:
    // 0x241fe0: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x241fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_241fe4:
    // 0x241fe4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x241fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_241fe8:
    // 0x241fe8: 0xc054e5c  jal         func_153970
label_241fec:
    if (ctx->pc == 0x241FECu) {
        ctx->pc = 0x241FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FE8u;
        // 0x241fec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FF0u;
        goto label_241ff0;
    }
    ctx->pc = 0x241FE8u;
    SET_GPR_U32(ctx, 31, 0x241FF0u);
    ctx->pc = 0x241FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FE8u;
    // 0x241fec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x241FE8u, 0x241FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FF0u;
label_241ff0:
    // 0x241ff0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ff4:
    // 0x241ff4: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x241ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_241ff8:
    // 0x241ff8: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x241ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_241ffc:
    // 0x241ffc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x241ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_242000:
    // 0x242000: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x242000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242004:
    // 0x242004: 0xc054e74  jal         func_1539D0
label_242008:
    if (ctx->pc == 0x242008u) {
        ctx->pc = 0x242008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242004u;
        // 0x242008: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24200Cu;
        goto label_24200c;
    }
    ctx->pc = 0x242004u;
    SET_GPR_U32(ctx, 31, 0x24200Cu);
    ctx->pc = 0x242008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242004u;
    // 0x242008: 0x2508ea80  addiu       $t0, $t0, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x242004u, 0x24200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24200Cu;
label_24200c:
    // 0x24200c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_242010:
    // 0x242010: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_242014:
    // 0x242014: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->pc = 0x242018u;
    return;
}
