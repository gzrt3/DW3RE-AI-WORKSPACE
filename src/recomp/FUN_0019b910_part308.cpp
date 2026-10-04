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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x231780u: goto label_231780;
        case 0x231784u: goto label_231784;
        case 0x231788u: goto label_231788;
        case 0x23178cu: goto label_23178c;
        case 0x231790u: goto label_231790;
        case 0x231794u: goto label_231794;
        case 0x231798u: goto label_231798;
        case 0x23179cu: goto label_23179c;
        case 0x2317a0u: goto label_2317a0;
        case 0x2317a4u: goto label_2317a4;
        case 0x2317a8u: goto label_2317a8;
        case 0x2317acu: goto label_2317ac;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317b4u: goto label_2317b4;
        case 0x2317b8u: goto label_2317b8;
        case 0x2317bcu: goto label_2317bc;
        case 0x2317c0u: goto label_2317c0;
        case 0x2317c4u: goto label_2317c4;
        case 0x2317c8u: goto label_2317c8;
        case 0x2317ccu: goto label_2317cc;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317d4u: goto label_2317d4;
        case 0x2317d8u: goto label_2317d8;
        case 0x2317dcu: goto label_2317dc;
        case 0x2317e0u: goto label_2317e0;
        case 0x2317e4u: goto label_2317e4;
        case 0x2317e8u: goto label_2317e8;
        case 0x2317ecu: goto label_2317ec;
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f4u: goto label_2317f4;
        case 0x2317f8u: goto label_2317f8;
        case 0x2317fcu: goto label_2317fc;
        case 0x231800u: goto label_231800;
        case 0x231804u: goto label_231804;
        case 0x231808u: goto label_231808;
        case 0x23180cu: goto label_23180c;
        case 0x231810u: goto label_231810;
        case 0x231814u: goto label_231814;
        case 0x231818u: goto label_231818;
        case 0x23181cu: goto label_23181c;
        case 0x231820u: goto label_231820;
        case 0x231824u: goto label_231824;
        case 0x231828u: goto label_231828;
        case 0x23182cu: goto label_23182c;
        case 0x231830u: goto label_231830;
        case 0x231834u: goto label_231834;
        case 0x231838u: goto label_231838;
        case 0x23183cu: goto label_23183c;
        case 0x231840u: goto label_231840;
        case 0x231844u: goto label_231844;
        case 0x231848u: goto label_231848;
        case 0x23184cu: goto label_23184c;
        case 0x231850u: goto label_231850;
        case 0x231854u: goto label_231854;
        case 0x231858u: goto label_231858;
        case 0x23185cu: goto label_23185c;
        case 0x231860u: goto label_231860;
        case 0x231864u: goto label_231864;
        case 0x231868u: goto label_231868;
        case 0x23186cu: goto label_23186c;
        case 0x231870u: goto label_231870;
        case 0x231874u: goto label_231874;
        case 0x231878u: goto label_231878;
        case 0x23187cu: goto label_23187c;
        case 0x231880u: goto label_231880;
        case 0x231884u: goto label_231884;
        case 0x231888u: goto label_231888;
        case 0x23188cu: goto label_23188c;
        case 0x231890u: goto label_231890;
        case 0x231894u: goto label_231894;
        case 0x231898u: goto label_231898;
        case 0x23189cu: goto label_23189c;
        case 0x2318a0u: goto label_2318a0;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318a8u: goto label_2318a8;
        case 0x2318acu: goto label_2318ac;
        case 0x2318b0u: goto label_2318b0;
        case 0x2318b4u: goto label_2318b4;
        case 0x2318b8u: goto label_2318b8;
        case 0x2318bcu: goto label_2318bc;
        case 0x2318c0u: goto label_2318c0;
        case 0x2318c4u: goto label_2318c4;
        case 0x2318c8u: goto label_2318c8;
        case 0x2318ccu: goto label_2318cc;
        case 0x2318d0u: goto label_2318d0;
        case 0x2318d4u: goto label_2318d4;
        case 0x2318d8u: goto label_2318d8;
        case 0x2318dcu: goto label_2318dc;
        case 0x2318e0u: goto label_2318e0;
        case 0x2318e4u: goto label_2318e4;
        case 0x2318e8u: goto label_2318e8;
        case 0x2318ecu: goto label_2318ec;
        case 0x2318f0u: goto label_2318f0;
        case 0x2318f4u: goto label_2318f4;
        case 0x2318f8u: goto label_2318f8;
        case 0x2318fcu: goto label_2318fc;
        case 0x231900u: goto label_231900;
        case 0x231904u: goto label_231904;
        case 0x231908u: goto label_231908;
        case 0x23190cu: goto label_23190c;
        case 0x231910u: goto label_231910;
        case 0x231914u: goto label_231914;
        case 0x231918u: goto label_231918;
        case 0x23191cu: goto label_23191c;
        case 0x231920u: goto label_231920;
        case 0x231924u: goto label_231924;
        case 0x231928u: goto label_231928;
        case 0x23192cu: goto label_23192c;
        case 0x231930u: goto label_231930;
        case 0x231934u: goto label_231934;
        case 0x231938u: goto label_231938;
        case 0x23193cu: goto label_23193c;
        case 0x231940u: goto label_231940;
        case 0x231944u: goto label_231944;
        case 0x231948u: goto label_231948;
        case 0x23194cu: goto label_23194c;
        case 0x231950u: goto label_231950;
        case 0x231954u: goto label_231954;
        case 0x231958u: goto label_231958;
        case 0x23195cu: goto label_23195c;
        case 0x231960u: goto label_231960;
        case 0x231964u: goto label_231964;
        case 0x231968u: goto label_231968;
        case 0x23196cu: goto label_23196c;
        case 0x231970u: goto label_231970;
        case 0x231974u: goto label_231974;
        case 0x231978u: goto label_231978;
        case 0x23197cu: goto label_23197c;
        case 0x231980u: goto label_231980;
        case 0x231984u: goto label_231984;
        case 0x231988u: goto label_231988;
        case 0x23198cu: goto label_23198c;
        case 0x231990u: goto label_231990;
        case 0x231994u: goto label_231994;
        case 0x231998u: goto label_231998;
        case 0x23199cu: goto label_23199c;
        case 0x2319a0u: goto label_2319a0;
        case 0x2319a4u: goto label_2319a4;
        case 0x2319a8u: goto label_2319a8;
        case 0x2319acu: goto label_2319ac;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319b4u: goto label_2319b4;
        case 0x2319b8u: goto label_2319b8;
        case 0x2319bcu: goto label_2319bc;
        case 0x2319c0u: goto label_2319c0;
        case 0x2319c4u: goto label_2319c4;
        case 0x2319c8u: goto label_2319c8;
        case 0x2319ccu: goto label_2319cc;
        case 0x2319d0u: goto label_2319d0;
        case 0x2319d4u: goto label_2319d4;
        case 0x2319d8u: goto label_2319d8;
        case 0x2319dcu: goto label_2319dc;
        case 0x2319e0u: goto label_2319e0;
        case 0x2319e4u: goto label_2319e4;
        case 0x2319e8u: goto label_2319e8;
        case 0x2319ecu: goto label_2319ec;
        case 0x2319f0u: goto label_2319f0;
        case 0x2319f4u: goto label_2319f4;
        case 0x2319f8u: goto label_2319f8;
        case 0x2319fcu: goto label_2319fc;
        case 0x231a00u: goto label_231a00;
        case 0x231a04u: goto label_231a04;
        case 0x231a08u: goto label_231a08;
        case 0x231a0cu: goto label_231a0c;
        case 0x231a10u: goto label_231a10;
        case 0x231a14u: goto label_231a14;
        case 0x231a18u: goto label_231a18;
        case 0x231a1cu: goto label_231a1c;
        case 0x231a20u: goto label_231a20;
        case 0x231a24u: goto label_231a24;
        case 0x231a28u: goto label_231a28;
        case 0x231a2cu: goto label_231a2c;
        case 0x231a30u: goto label_231a30;
        case 0x231a34u: goto label_231a34;
        case 0x231a38u: goto label_231a38;
        case 0x231a3cu: goto label_231a3c;
        case 0x231a40u: goto label_231a40;
        case 0x231a44u: goto label_231a44;
        case 0x231a48u: goto label_231a48;
        case 0x231a4cu: goto label_231a4c;
        case 0x231a50u: goto label_231a50;
        case 0x231a54u: goto label_231a54;
        case 0x231a58u: goto label_231a58;
        case 0x231a5cu: goto label_231a5c;
        case 0x231a60u: goto label_231a60;
        case 0x231a64u: goto label_231a64;
        case 0x231a68u: goto label_231a68;
        case 0x231a6cu: goto label_231a6c;
        case 0x231a70u: goto label_231a70;
        case 0x231a74u: goto label_231a74;
        case 0x231a78u: goto label_231a78;
        case 0x231a7cu: goto label_231a7c;
        case 0x231a80u: goto label_231a80;
        case 0x231a84u: goto label_231a84;
        case 0x231a88u: goto label_231a88;
        case 0x231a8cu: goto label_231a8c;
        case 0x231a90u: goto label_231a90;
        case 0x231a94u: goto label_231a94;
        case 0x231a98u: goto label_231a98;
        case 0x231a9cu: goto label_231a9c;
        case 0x231aa0u: goto label_231aa0;
        case 0x231aa4u: goto label_231aa4;
        case 0x231aa8u: goto label_231aa8;
        case 0x231aacu: goto label_231aac;
        case 0x231ab0u: goto label_231ab0;
        case 0x231ab4u: goto label_231ab4;
        case 0x231ab8u: goto label_231ab8;
        case 0x231abcu: goto label_231abc;
        case 0x231ac0u: goto label_231ac0;
        case 0x231ac4u: goto label_231ac4;
        case 0x231ac8u: goto label_231ac8;
        case 0x231accu: goto label_231acc;
        case 0x231ad0u: goto label_231ad0;
        case 0x231ad4u: goto label_231ad4;
        case 0x231ad8u: goto label_231ad8;
        case 0x231adcu: goto label_231adc;
        case 0x231ae0u: goto label_231ae0;
        case 0x231ae4u: goto label_231ae4;
        case 0x231ae8u: goto label_231ae8;
        case 0x231aecu: goto label_231aec;
        case 0x231af0u: goto label_231af0;
        case 0x231af4u: goto label_231af4;
        case 0x231af8u: goto label_231af8;
        case 0x231afcu: goto label_231afc;
        case 0x231b00u: goto label_231b00;
        case 0x231b04u: goto label_231b04;
        case 0x231b08u: goto label_231b08;
        case 0x231b0cu: goto label_231b0c;
        case 0x231b10u: goto label_231b10;
        case 0x231b14u: goto label_231b14;
        case 0x231b18u: goto label_231b18;
        case 0x231b1cu: goto label_231b1c;
        case 0x231b20u: goto label_231b20;
        case 0x231b24u: goto label_231b24;
        case 0x231b28u: goto label_231b28;
        case 0x231b2cu: goto label_231b2c;
        case 0x231b30u: goto label_231b30;
        case 0x231b34u: goto label_231b34;
        case 0x231b38u: goto label_231b38;
        case 0x231b3cu: goto label_231b3c;
        case 0x231b40u: goto label_231b40;
        case 0x231b44u: goto label_231b44;
        case 0x231b48u: goto label_231b48;
        case 0x231b4cu: goto label_231b4c;
        case 0x231b50u: goto label_231b50;
        case 0x231b54u: goto label_231b54;
        case 0x231b58u: goto label_231b58;
        case 0x231b5cu: goto label_231b5c;
        case 0x231b60u: goto label_231b60;
        case 0x231b64u: goto label_231b64;
        case 0x231b68u: goto label_231b68;
        case 0x231b6cu: goto label_231b6c;
        case 0x231b70u: goto label_231b70;
        case 0x231b74u: goto label_231b74;
        case 0x231b78u: goto label_231b78;
        case 0x231b7cu: goto label_231b7c;
        case 0x231b80u: goto label_231b80;
        case 0x231b84u: goto label_231b84;
        case 0x231b88u: goto label_231b88;
        case 0x231b8cu: goto label_231b8c;
        case 0x231b90u: goto label_231b90;
        case 0x231b94u: goto label_231b94;
        case 0x231b98u: goto label_231b98;
        case 0x231b9cu: goto label_231b9c;
        case 0x231ba0u: goto label_231ba0;
        case 0x231ba4u: goto label_231ba4;
        case 0x231ba8u: goto label_231ba8;
        case 0x231bacu: goto label_231bac;
        case 0x231bb0u: goto label_231bb0;
        case 0x231bb4u: goto label_231bb4;
        case 0x231bb8u: goto label_231bb8;
        case 0x231bbcu: goto label_231bbc;
        case 0x231bc0u: goto label_231bc0;
        case 0x231bc4u: goto label_231bc4;
        case 0x231bc8u: goto label_231bc8;
        case 0x231bccu: goto label_231bcc;
        case 0x231bd0u: goto label_231bd0;
        case 0x231bd4u: goto label_231bd4;
        case 0x231bd8u: goto label_231bd8;
        case 0x231bdcu: goto label_231bdc;
        case 0x231be0u: goto label_231be0;
        case 0x231be4u: goto label_231be4;
        case 0x231be8u: goto label_231be8;
        case 0x231becu: goto label_231bec;
        case 0x231bf0u: goto label_231bf0;
        case 0x231bf4u: goto label_231bf4;
        case 0x231bf8u: goto label_231bf8;
        case 0x231bfcu: goto label_231bfc;
        case 0x231c00u: goto label_231c00;
        case 0x231c04u: goto label_231c04;
        case 0x231c08u: goto label_231c08;
        case 0x231c0cu: goto label_231c0c;
        case 0x231c10u: goto label_231c10;
        case 0x231c14u: goto label_231c14;
        case 0x231c18u: goto label_231c18;
        case 0x231c1cu: goto label_231c1c;
        case 0x231c20u: goto label_231c20;
        case 0x231c24u: goto label_231c24;
        case 0x231c28u: goto label_231c28;
        case 0x231c2cu: goto label_231c2c;
        case 0x231c30u: goto label_231c30;
        case 0x231c34u: goto label_231c34;
        case 0x231c38u: goto label_231c38;
        case 0x231c3cu: goto label_231c3c;
        case 0x231c40u: goto label_231c40;
        case 0x231c44u: goto label_231c44;
        case 0x231c48u: goto label_231c48;
        case 0x231c4cu: goto label_231c4c;
        case 0x231c50u: goto label_231c50;
        case 0x231c54u: goto label_231c54;
        case 0x231c58u: goto label_231c58;
        case 0x231c5cu: goto label_231c5c;
        case 0x231c60u: goto label_231c60;
        case 0x231c64u: goto label_231c64;
        case 0x231c68u: goto label_231c68;
        case 0x231c6cu: goto label_231c6c;
        case 0x231c70u: goto label_231c70;
        case 0x231c74u: goto label_231c74;
        case 0x231c78u: goto label_231c78;
        case 0x231c7cu: goto label_231c7c;
        case 0x231c80u: goto label_231c80;
        case 0x231c84u: goto label_231c84;
        case 0x231c88u: goto label_231c88;
        case 0x231c8cu: goto label_231c8c;
        case 0x231c90u: goto label_231c90;
        case 0x231c94u: goto label_231c94;
        case 0x231c98u: goto label_231c98;
        case 0x231c9cu: goto label_231c9c;
        case 0x231ca0u: goto label_231ca0;
        case 0x231ca4u: goto label_231ca4;
        case 0x231ca8u: goto label_231ca8;
        case 0x231cacu: goto label_231cac;
        case 0x231cb0u: goto label_231cb0;
        case 0x231cb4u: goto label_231cb4;
        case 0x231cb8u: goto label_231cb8;
        case 0x231cbcu: goto label_231cbc;
        case 0x231cc0u: goto label_231cc0;
        case 0x231cc4u: goto label_231cc4;
        case 0x231cc8u: goto label_231cc8;
        case 0x231cccu: goto label_231ccc;
        case 0x231cd0u: goto label_231cd0;
        case 0x231cd4u: goto label_231cd4;
        case 0x231cd8u: goto label_231cd8;
        case 0x231cdcu: goto label_231cdc;
        case 0x231ce0u: goto label_231ce0;
        case 0x231ce4u: goto label_231ce4;
        case 0x231ce8u: goto label_231ce8;
        case 0x231cecu: goto label_231cec;
        case 0x231cf0u: goto label_231cf0;
        case 0x231cf4u: goto label_231cf4;
        case 0x231cf8u: goto label_231cf8;
        case 0x231cfcu: goto label_231cfc;
        case 0x231d00u: goto label_231d00;
        case 0x231d04u: goto label_231d04;
        case 0x231d08u: goto label_231d08;
        case 0x231d0cu: goto label_231d0c;
        case 0x231d10u: goto label_231d10;
        case 0x231d14u: goto label_231d14;
        case 0x231d18u: goto label_231d18;
        case 0x231d1cu: goto label_231d1c;
        case 0x231d20u: goto label_231d20;
        case 0x231d24u: goto label_231d24;
        case 0x231d28u: goto label_231d28;
        case 0x231d2cu: goto label_231d2c;
        case 0x231d30u: goto label_231d30;
        case 0x231d34u: goto label_231d34;
        case 0x231d38u: goto label_231d38;
        case 0x231d3cu: goto label_231d3c;
        case 0x231d40u: goto label_231d40;
        case 0x231d44u: goto label_231d44;
        case 0x231d48u: goto label_231d48;
        case 0x231d4cu: goto label_231d4c;
        case 0x231d50u: goto label_231d50;
        case 0x231d54u: goto label_231d54;
        case 0x231d58u: goto label_231d58;
        case 0x231d5cu: goto label_231d5c;
        case 0x231d60u: goto label_231d60;
        case 0x231d64u: goto label_231d64;
        case 0x231d68u: goto label_231d68;
        case 0x231d6cu: goto label_231d6c;
        case 0x231d70u: goto label_231d70;
        case 0x231d74u: goto label_231d74;
        case 0x231d78u: goto label_231d78;
        case 0x231d7cu: goto label_231d7c;
        case 0x231d80u: goto label_231d80;
        case 0x231d84u: goto label_231d84;
        case 0x231d88u: goto label_231d88;
        case 0x231d8cu: goto label_231d8c;
        case 0x231d90u: goto label_231d90;
        case 0x231d94u: goto label_231d94;
        case 0x231d98u: goto label_231d98;
        case 0x231d9cu: goto label_231d9c;
        case 0x231da0u: goto label_231da0;
        case 0x231da4u: goto label_231da4;
        case 0x231da8u: goto label_231da8;
        case 0x231dacu: goto label_231dac;
        case 0x231db0u: goto label_231db0;
        case 0x231db4u: goto label_231db4;
        case 0x231db8u: goto label_231db8;
        case 0x231dbcu: goto label_231dbc;
        case 0x231dc0u: goto label_231dc0;
        case 0x231dc4u: goto label_231dc4;
        case 0x231dc8u: goto label_231dc8;
        case 0x231dccu: goto label_231dcc;
        case 0x231dd0u: goto label_231dd0;
        case 0x231dd4u: goto label_231dd4;
        case 0x231dd8u: goto label_231dd8;
        case 0x231ddcu: goto label_231ddc;
        case 0x231de0u: goto label_231de0;
        case 0x231de4u: goto label_231de4;
        case 0x231de8u: goto label_231de8;
        case 0x231decu: goto label_231dec;
        case 0x231df0u: goto label_231df0;
        case 0x231df4u: goto label_231df4;
        case 0x231df8u: goto label_231df8;
        case 0x231dfcu: goto label_231dfc;
        case 0x231e00u: goto label_231e00;
        case 0x231e04u: goto label_231e04;
        case 0x231e08u: goto label_231e08;
        case 0x231e0cu: goto label_231e0c;
        case 0x231e10u: goto label_231e10;
        case 0x231e14u: goto label_231e14;
        case 0x231e18u: goto label_231e18;
        case 0x231e1cu: goto label_231e1c;
        case 0x231e20u: goto label_231e20;
        case 0x231e24u: goto label_231e24;
        case 0x231e28u: goto label_231e28;
        case 0x231e2cu: goto label_231e2c;
        case 0x231e30u: goto label_231e30;
        case 0x231e34u: goto label_231e34;
        case 0x231e38u: goto label_231e38;
        case 0x231e3cu: goto label_231e3c;
        case 0x231e40u: goto label_231e40;
        case 0x231e44u: goto label_231e44;
        case 0x231e48u: goto label_231e48;
        case 0x231e4cu: goto label_231e4c;
        case 0x231e50u: goto label_231e50;
        case 0x231e54u: goto label_231e54;
        case 0x231e58u: goto label_231e58;
        case 0x231e5cu: goto label_231e5c;
        case 0x231e60u: goto label_231e60;
        case 0x231e64u: goto label_231e64;
        case 0x231e68u: goto label_231e68;
        case 0x231e6cu: goto label_231e6c;
        case 0x231e70u: goto label_231e70;
        case 0x231e74u: goto label_231e74;
        case 0x231e78u: goto label_231e78;
        case 0x231e7cu: goto label_231e7c;
        case 0x231e80u: goto label_231e80;
        case 0x231e84u: goto label_231e84;
        case 0x231e88u: goto label_231e88;
        case 0x231e8cu: goto label_231e8c;
        case 0x231e90u: goto label_231e90;
        case 0x231e94u: goto label_231e94;
        case 0x231e98u: goto label_231e98;
        case 0x231e9cu: goto label_231e9c;
        case 0x231ea0u: goto label_231ea0;
        case 0x231ea4u: goto label_231ea4;
        case 0x231ea8u: goto label_231ea8;
        case 0x231eacu: goto label_231eac;
        case 0x231eb0u: goto label_231eb0;
        case 0x231eb4u: goto label_231eb4;
        case 0x231eb8u: goto label_231eb8;
        case 0x231ebcu: goto label_231ebc;
        case 0x231ec0u: goto label_231ec0;
        case 0x231ec4u: goto label_231ec4;
        case 0x231ec8u: goto label_231ec8;
        case 0x231eccu: goto label_231ecc;
        case 0x231ed0u: goto label_231ed0;
        case 0x231ed4u: goto label_231ed4;
        case 0x231ed8u: goto label_231ed8;
        case 0x231edcu: goto label_231edc;
        case 0x231ee0u: goto label_231ee0;
        case 0x231ee4u: goto label_231ee4;
        case 0x231ee8u: goto label_231ee8;
        case 0x231eecu: goto label_231eec;
        case 0x231ef0u: goto label_231ef0;
        case 0x231ef4u: goto label_231ef4;
        case 0x231ef8u: goto label_231ef8;
        case 0x231efcu: goto label_231efc;
        case 0x231f00u: goto label_231f00;
        case 0x231f04u: goto label_231f04;
        case 0x231f08u: goto label_231f08;
        case 0x231f0cu: goto label_231f0c;
        case 0x231f10u: goto label_231f10;
        case 0x231f14u: goto label_231f14;
        case 0x231f18u: goto label_231f18;
        case 0x231f1cu: goto label_231f1c;
        case 0x231f20u: goto label_231f20;
        case 0x231f24u: goto label_231f24;
        case 0x231f28u: goto label_231f28;
        case 0x231f2cu: goto label_231f2c;
        case 0x231f30u: goto label_231f30;
        case 0x231f34u: goto label_231f34;
        case 0x231f38u: goto label_231f38;
        case 0x231f3cu: goto label_231f3c;
        case 0x231f40u: goto label_231f40;
        case 0x231f44u: goto label_231f44;
        case 0x231f48u: goto label_231f48;
        case 0x231f4cu: goto label_231f4c;
        default: return;
    }

label_231780:
    // 0x231780: 0xc08cd0c  jal         func_233430
label_231784:
    if (ctx->pc == 0x231784u) {
        ctx->pc = 0x231784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231780u;
        // 0x231784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231788u;
        goto label_231788;
    }
    ctx->pc = 0x231780u;
    SET_GPR_U32(ctx, 31, 0x231788u);
    ctx->pc = 0x231784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231780u;
    // 0x231784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233430u;
    { ctx->pc = 0x233430; return; }
    ctx->pc = 0x231788u;
label_231788:
    // 0x231788: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23178c:
    // 0x23178c: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x23178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_231790:
    // 0x231790: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
label_231794:
    // 0x231794: 0x34a51140  ori         $a1, $a1, 0x1140
    ctx->pc = 0x231794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4416);
label_231798:
    // 0x231798: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x231798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23179c:
    // 0x23179c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2317a0:
    // 0x2317a0: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2317a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_2317a4:
    // 0x2317a4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2317a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_2317a8:
    // 0x2317a8: 0xc08cf58  jal         func_233D60
label_2317ac:
    if (ctx->pc == 0x2317ACu) {
        ctx->pc = 0x2317ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A8u;
        // 0x2317ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317B0u;
        goto label_2317b0;
    }
    ctx->pc = 0x2317A8u;
    SET_GPR_U32(ctx, 31, 0x2317B0u);
    ctx->pc = 0x2317ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317A8u;
    // 0x2317ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    { ctx->pc = 0x233d60; return; }
    ctx->pc = 0x2317B0u;
label_2317b0:
    // 0x2317b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_2317b4:
    // 0x2317b4: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2317b8:
    // 0x2317b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2317b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2317bc:
    // 0x2317bc: 0x9207001e  lbu         $a3, 0x1E($s0)
    ctx->pc = 0x2317bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
label_2317c0:
    // 0x2317c0: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2317c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
label_2317c4:
    // 0x2317c4: 0x24c68170  addiu       $a2, $a2, -0x7E90
    ctx->pc = 0x2317c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934896));
label_2317c8:
    // 0x2317c8: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x2317c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
label_2317cc:
    // 0x2317cc: 0x34219140  ori         $at, $at, 0x9140
    ctx->pc = 0x2317ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37184);
label_2317d0:
    // 0x2317d0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2317d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_2317d4:
    // 0x2317d4: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2317d8:
    // 0x2317d8: 0x24423688  addiu       $v0, $v0, 0x3688
    ctx->pc = 0x2317d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13960));
label_2317dc:
    // 0x2317dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2317dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2317e0:
    // 0x2317e0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2317e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_2317e4:
    // 0x2317e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2317e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2317e8:
    // 0x2317e8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_2317ec:
    // 0x2317ec: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2317ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_2317f0:
    // 0x2317f0: 0xc069188  jal         func_1A4620
label_2317f4:
    if (ctx->pc == 0x2317F4u) {
        ctx->pc = 0x2317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317F0u;
        // 0x2317f4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317F8u;
        goto label_2317f8;
    }
    ctx->pc = 0x2317F0u;
    SET_GPR_U32(ctx, 31, 0x2317F8u);
    ctx->pc = 0x2317F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F0u;
    // 0x2317f4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4620u;
    { ctx->pc = 0x1a4620; return; }
    ctx->pc = 0x2317F8u;
label_2317f8:
    // 0x2317f8: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x2317f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2317fc:
    // 0x2317fc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231800:
    // 0x231800: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231800u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231804:
    // 0x231804: 0xac221278  sw          $v0, 0x1278($at)
    ctx->pc = 0x231804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4728), GPR_U32(ctx, 2));
label_231808:
    // 0x231808: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23180c:
    // 0x23180c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x23180cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231810:
    // 0x231810: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x231810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231814:
    // 0x231814: 0xc069190  jal         func_1A4640
label_231818:
    if (ctx->pc == 0x231818u) {
        ctx->pc = 0x231818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231814u;
        // 0x231818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23181Cu;
        goto label_23181c;
    }
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 31, 0x23181Cu);
    ctx->pc = 0x231818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231814u;
    // 0x231818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    { ctx->pc = 0x1a4640; return; }
    ctx->pc = 0x23181Cu;
label_23181c:
    // 0x23181c: 0xc0694c0  jal         func_1A5300
label_231820:
    if (ctx->pc == 0x231820u) {
        ctx->pc = 0x231820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23181Cu;
        // 0x231820: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231824u;
        goto label_231824;
    }
    ctx->pc = 0x23181Cu;
    SET_GPR_U32(ctx, 31, 0x231824u);
    ctx->pc = 0x231820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23181Cu;
    // 0x231820: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    { ctx->pc = 0x1a5300; return; }
    ctx->pc = 0x231824u;
label_231824:
    // 0x231824: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231828:
    // 0x231828: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x231828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_23182c:
    // 0x23182c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231830:
    // 0x231830: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231834:
    // 0x231834: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_231838:
    // 0x231838: 0xac22127c  sw          $v0, 0x127C($at)
    ctx->pc = 0x231838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4732), GPR_U32(ctx, 2));
label_23183c:
    // 0x23183c: 0xc08d118  jal         func_234460
label_231840:
    if (ctx->pc == 0x231840u) {
        ctx->pc = 0x231840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23183Cu;
        // 0x231840: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231844u;
        goto label_231844;
    }
    ctx->pc = 0x23183Cu;
    SET_GPR_U32(ctx, 31, 0x231844u);
    ctx->pc = 0x231840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23183Cu;
    // 0x231840: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    { ctx->pc = 0x234460; return; }
    ctx->pc = 0x231844u;
label_231844:
    // 0x231844: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x231844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231848:
    // 0x231848: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23184c:
    // 0x23184c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x23184cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_231850:
    // 0x231850: 0xac221208  sw          $v0, 0x1208($at)
    ctx->pc = 0x231850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4616), GPR_U32(ctx, 2));
label_231854:
    // 0x231854: 0xc0694da  jal         func_1A5368
label_231858:
    if (ctx->pc == 0x231858u) {
        ctx->pc = 0x231858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231854u;
        // 0x231858: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23185Cu;
        goto label_23185c;
    }
    ctx->pc = 0x231854u;
    SET_GPR_U32(ctx, 31, 0x23185Cu);
    ctx->pc = 0x231858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231854u;
    // 0x231858: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    { ctx->pc = 0x1a5368; return; }
    ctx->pc = 0x23185Cu;
label_23185c:
    // 0x23185c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231860:
    // 0x231860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231864:
    // 0x231864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231868:
    // 0x231868: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x231868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_23186c:
    // 0x23186c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231870:
    // 0x231870: 0x8c631208  lw          $v1, 0x1208($v1)
    ctx->pc = 0x231870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
label_231874:
    // 0x231874: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231878:
    // 0x231878: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_23187c:
    // 0x23187c: 0xac251288  sw          $a1, 0x1288($at)
    ctx->pc = 0x23187cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4744), GPR_U32(ctx, 5));
label_231880:
    // 0x231880: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x231880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_231884:
    // 0x231884: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x231884u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_231888:
    // 0x231888: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x231888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23188c:
    // 0x23188c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x23188cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_231890:
    // 0x231890: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x231890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_231894:
    // 0x231894: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x231894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_231898:
    // 0x231898: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x231898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23189c:
    // 0x23189c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x23189cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2318a0:
    // 0x2318a0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2318a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2318a4:
    // 0x2318a4: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2318a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2318a8:
    // 0x2318a8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2318a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2318ac:
    // 0x2318ac: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2318acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2318b0:
    // 0x2318b0: 0x3e00008  jr          $ra
label_2318b4:
    if (ctx->pc == 0x2318B4u) {
        ctx->pc = 0x2318B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318B0u;
        // 0x2318b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2318B8u;
        goto label_2318b8;
    }
    ctx->pc = 0x2318B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2318B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318B0u;
        // 0x2318b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2318B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2318B8u;
label_2318b8:
    // 0x2318b8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2318b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2318bc:
    // 0x2318bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2318bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2318c0:
    // 0x2318c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2318c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2318c4:
    // 0x2318c4: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
label_2318c8:
    if (ctx->pc == 0x2318C8u) {
        ctx->pc = 0x2318C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C4u;
        // 0x2318c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2318CCu;
        goto label_2318cc;
    }
    ctx->pc = 0x2318C4u;
    {
        const bool branch_taken_0x2318c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C4u;
        // 0x2318c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c4) {
            ctx->pc = 0x231A1Cu;
            goto label_231a1c;
        }
    }
    ctx->pc = 0x2318CCu;
label_2318cc:
    // 0x2318cc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2318ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2318d0:
    // 0x2318d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2318d4:
    // 0x2318d4: 0x8c421288  lw          $v0, 0x1288($v0)
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4744)));
label_2318d8:
    // 0x2318d8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2318dc:
    if (ctx->pc == 0x2318DCu) {
        ctx->pc = 0x2318DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318D8u;
        // 0x2318dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2318E0u;
        goto label_2318e0;
    }
    ctx->pc = 0x2318D8u;
    {
        const bool branch_taken_0x2318d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318D8u;
        // 0x2318dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318d8) {
            ctx->pc = 0x23198Cu;
            goto label_23198c;
        }
    }
    ctx->pc = 0x2318E0u;
label_2318e0:
    // 0x2318e0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2318e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2318e4:
    // 0x2318e4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x2318e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_2318e8:
    // 0x2318e8: 0x8c241278  lw          $a0, 0x1278($at)
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4728)));
label_2318ec:
    // 0x2318ec: 0x10900008  beq         $a0, $s0, . + 4 + (0x8 << 2)
label_2318f0:
    if (ctx->pc == 0x2318F0u) {
        ctx->pc = 0x2318F4u;
        goto label_2318f4;
    }
    ctx->pc = 0x2318ECu;
    {
        const bool branch_taken_0x2318ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2318ec) {
            ctx->pc = 0x231910u;
            goto label_231910;
        }
    }
    ctx->pc = 0x2318F4u;
label_2318f4:
    // 0x2318f4: 0xc06919c  jal         func_1A4670
label_2318f8:
    if (ctx->pc == 0x2318F8u) {
        ctx->pc = 0x2318FCu;
        goto label_2318fc;
    }
    ctx->pc = 0x2318F4u;
    SET_GPR_U32(ctx, 31, 0x2318FCu);
    ctx->pc = 0x1A4670u;
    { ctx->pc = 0x1a4670; return; }
    ctx->pc = 0x2318FCu;
label_2318fc:
    // 0x2318fc: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231900:
    // 0x231900: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x231900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_231904:
    // 0x231904: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x231904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_231908:
    // 0x231908: 0xc06918c  jal         func_1A4630
label_23190c:
    if (ctx->pc == 0x23190Cu) {
        ctx->pc = 0x23190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231908u;
        // 0x23190c: 0x8c841278  lw          $a0, 0x1278($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231910u;
        goto label_231910;
    }
    ctx->pc = 0x231908u;
    SET_GPR_U32(ctx, 31, 0x231910u);
    ctx->pc = 0x23190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231908u;
    // 0x23190c: 0x8c841278  lw          $a0, 0x1278($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4630u;
    { ctx->pc = 0x1a4630; return; }
    ctx->pc = 0x231910u;
label_231910:
    // 0x231910: 0xc0694c0  jal         func_1A5300
label_231914:
    if (ctx->pc == 0x231914u) {
        ctx->pc = 0x231914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231910u;
        // 0x231914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231918u;
        goto label_231918;
    }
    ctx->pc = 0x231910u;
    SET_GPR_U32(ctx, 31, 0x231918u);
    ctx->pc = 0x231914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231910u;
    // 0x231914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    { ctx->pc = 0x1a5300; return; }
    ctx->pc = 0x231918u;
label_231918:
    // 0x231918: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23191c:
    // 0x23191c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x23191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_231920:
    // 0x231920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231924:
    // 0x231924: 0x8c421208  lw          $v0, 0x1208($v0)
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4616)));
label_231928:
    // 0x231928: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_23192c:
    if (ctx->pc == 0x23192Cu) {
        ctx->pc = 0x231930u;
        goto label_231930;
    }
    ctx->pc = 0x231928u;
    {
        const bool branch_taken_0x231928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x231928) {
            ctx->pc = 0x23193Cu;
            goto label_23193c;
        }
    }
    ctx->pc = 0x231930u;
label_231930:
    // 0x231930: 0xc08d14c  jal         func_234530
label_231934:
    if (ctx->pc == 0x231934u) {
        ctx->pc = 0x231934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231930u;
        // 0x231934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231938u;
        goto label_231938;
    }
    ctx->pc = 0x231930u;
    SET_GPR_U32(ctx, 31, 0x231938u);
    ctx->pc = 0x231934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231930u;
    // 0x231934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234530u;
    { ctx->pc = 0x234530; return; }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23193c:
    // 0x23193c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x23193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_231940:
    // 0x231940: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231944:
    // 0x231944: 0x8c42127c  lw          $v0, 0x127C($v0)
    ctx->pc = 0x231944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4732)));
label_231948:
    // 0x231948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23194c:
    if (ctx->pc == 0x23194Cu) {
        ctx->pc = 0x231950u;
        goto label_231950;
    }
    ctx->pc = 0x231948u;
    {
        const bool branch_taken_0x231948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231948) {
            ctx->pc = 0x23195Cu;
            goto label_23195c;
        }
    }
    ctx->pc = 0x231950u;
label_231950:
    // 0x231950: 0xc0694da  jal         func_1A5368
label_231954:
    if (ctx->pc == 0x231954u) {
        ctx->pc = 0x231954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231950u;
        // 0x231954: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231958u;
        goto label_231958;
    }
    ctx->pc = 0x231950u;
    SET_GPR_U32(ctx, 31, 0x231958u);
    ctx->pc = 0x231954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231950u;
    // 0x231954: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    { ctx->pc = 0x1a5368; return; }
    ctx->pc = 0x231958u;
label_231958:
    // 0x231958: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23195c:
    // 0x23195c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231960:
    // 0x231960: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231964:
    // 0x231964: 0xc08cd22  jal         func_233488
label_231968:
    if (ctx->pc == 0x231968u) {
        ctx->pc = 0x231968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231964u;
        // 0x231968: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23196Cu;
        goto label_23196c;
    }
    ctx->pc = 0x231964u;
    SET_GPR_U32(ctx, 31, 0x23196Cu);
    ctx->pc = 0x231968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231964u;
    // 0x231968: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233488u;
    { ctx->pc = 0x233488; return; }
    ctx->pc = 0x23196Cu;
label_23196c:
    // 0x23196c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231970:
    // 0x231970: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_231974:
    // 0x231974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_231978:
    if (ctx->pc == 0x231978u) {
        ctx->pc = 0x231978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231974u;
        // 0x231978: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23197Cu;
        goto label_23197c;
    }
    ctx->pc = 0x231974u;
    {
        const bool branch_taken_0x231974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231974u;
        // 0x231978: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231974) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x23197Cu;
label_23197c:
    // 0x23197c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231980:
    // 0x231980: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x231980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_231984:
    // 0x231984: 0xc08c7c4  jal         func_231F10
label_231988:
    if (ctx->pc == 0x231988u) {
        ctx->pc = 0x231988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231984u;
        // 0x231988: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23198Cu;
        goto label_23198c;
    }
    ctx->pc = 0x231984u;
    SET_GPR_U32(ctx, 31, 0x23198Cu);
    ctx->pc = 0x231988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231984u;
    // 0x231988: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F10u;
    goto label_231f10;
    ctx->pc = 0x23198Cu;
label_23198c:
    // 0x23198c: 0x8f8382d8  lw          $v1, -0x7D28($gp)
    ctx->pc = 0x23198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
label_231990:
    // 0x231990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231994:
    // 0x231994: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_231998:
    if (ctx->pc == 0x231998u) {
        ctx->pc = 0x231998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231994u;
        // 0x231998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23199Cu;
        goto label_23199c;
    }
    ctx->pc = 0x231994u;
    {
        const bool branch_taken_0x231994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231994u;
        // 0x231998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231994) {
            ctx->pc = 0x2319B0u;
            goto label_2319b0;
        }
    }
    ctx->pc = 0x23199Cu;
label_23199c:
    // 0x23199c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2319a0:
    if (ctx->pc == 0x2319A0u) {
        ctx->pc = 0x2319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23199Cu;
        // 0x2319a0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319A4u;
        goto label_2319a4;
    }
    ctx->pc = 0x23199Cu;
    {
        const bool branch_taken_0x23199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2319A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23199Cu;
        // 0x2319a0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23199c) {
            ctx->pc = 0x2319C0u;
            goto label_2319c0;
        }
    }
    ctx->pc = 0x2319A4u;
label_2319a4:
    // 0x2319a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2319a8:
    if (ctx->pc == 0x2319A8u) {
        ctx->pc = 0x2319ACu;
        goto label_2319ac;
    }
    ctx->pc = 0x2319A4u;
    {
        const bool branch_taken_0x2319a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319a4) {
            ctx->pc = 0x2319CCu;
            goto label_2319cc;
        }
    }
    ctx->pc = 0x2319ACu;
label_2319ac:
    // 0x2319ac: 0x0  nop
    ctx->pc = 0x2319acu;
    // NOP
label_2319b0:
    // 0x2319b0: 0xc08da88  jal         func_236A20
label_2319b4:
    if (ctx->pc == 0x2319B4u) {
        ctx->pc = 0x2319B8u;
        goto label_2319b8;
    }
    ctx->pc = 0x2319B0u;
    SET_GPR_U32(ctx, 31, 0x2319B8u);
    ctx->pc = 0x236A20u;
    { ctx->pc = 0x236a20; return; }
    ctx->pc = 0x2319B8u;
label_2319b8:
    // 0x2319b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2319bc:
    if (ctx->pc == 0x2319BCu) {
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319C0u;
        goto label_2319c0;
    }
    ctx->pc = 0x2319B8u;
    {
        const bool branch_taken_0x2319b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319B8u;
        // 0x2319bc: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319b8) {
            ctx->pc = 0x2319CCu;
            goto label_2319cc;
        }
    }
    ctx->pc = 0x2319C0u;
label_2319c0:
    // 0x2319c0: 0xc06c2e2  jal         func_1B0B88
label_2319c4:
    if (ctx->pc == 0x2319C4u) {
        ctx->pc = 0x2319C8u;
        goto label_2319c8;
    }
    ctx->pc = 0x2319C0u;
    SET_GPR_U32(ctx, 31, 0x2319C8u);
    ctx->pc = 0x1B0B88u;
    { ctx->pc = 0x1b0b88; return; }
    ctx->pc = 0x2319C8u;
label_2319c8:
    // 0x2319c8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2319cc:
    // 0x2319cc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2319ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2319d0:
    // 0x2319d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2319d4:
    // 0x2319d4: 0x8c421280  lw          $v0, 0x1280($v0)
    ctx->pc = 0x2319d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
label_2319d8:
    // 0x2319d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2319dc:
    if (ctx->pc == 0x2319DCu) {
        ctx->pc = 0x2319DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319D8u;
        // 0x2319dc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319E0u;
        goto label_2319e0;
    }
    ctx->pc = 0x2319D8u;
    {
        const bool branch_taken_0x2319d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319d8) {
            ctx->pc = 0x2319DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2319D8u;
            // 0x2319dc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2319F0u;
            goto label_2319f0;
        }
    }
    ctx->pc = 0x2319E0u;
label_2319e0:
    // 0x2319e0: 0xc06ae18  jal         func_1AB860
label_2319e4:
    if (ctx->pc == 0x2319E4u) {
        ctx->pc = 0x2319E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319E0u;
        // 0x2319e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319E8u;
        goto label_2319e8;
    }
    ctx->pc = 0x2319E0u;
    SET_GPR_U32(ctx, 31, 0x2319E8u);
    ctx->pc = 0x2319E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319E0u;
    // 0x2319e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB860u;
    { ctx->pc = 0x1ab860; return; }
    ctx->pc = 0x2319E8u;
label_2319e8:
    // 0x2319e8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2319ec:
    // 0x2319ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2319ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2319f0:
    // 0x2319f0: 0x8c4204f0  lw          $v0, 0x4F0($v0)
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1264)));
label_2319f4:
    // 0x2319f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2319f8:
    if (ctx->pc == 0x2319F8u) {
        ctx->pc = 0x2319FCu;
        goto label_2319fc;
    }
    ctx->pc = 0x2319F4u;
    {
        const bool branch_taken_0x2319f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319f4) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2319FCu;
label_2319fc:
    // 0x2319fc: 0x40f809  jalr        $v0
label_231a00:
    if (ctx->pc == 0x231A00u) {
        ctx->pc = 0x231A04u;
        goto label_231a04;
    }
    ctx->pc = 0x2319FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319FCu, 0x231A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231A04u;
label_231a04:
    // 0x231a04: 0x10000005  b           . + 4 + (0x5 << 2)
label_231a08:
    if (ctx->pc == 0x231A08u) {
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A04u;
        // 0x231a08: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A0Cu;
        goto label_231a0c;
    }
    ctx->pc = 0x231A04u;
    {
        const bool branch_taken_0x231a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A04u;
        // 0x231a08: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a04) {
            ctx->pc = 0x231A1Cu;
            goto label_231a1c;
        }
    }
    ctx->pc = 0x231A0Cu;
label_231a0c:
    // 0x231a0c: 0x0  nop
    ctx->pc = 0x231a0cu;
    // NOP
label_231a10:
    // 0x231a10: 0xc08e660  jal         func_239980
label_231a14:
    if (ctx->pc == 0x231A14u) {
        ctx->pc = 0x231A18u;
        goto label_231a18;
    }
    ctx->pc = 0x231A10u;
    SET_GPR_U32(ctx, 31, 0x231A18u);
    ctx->pc = 0x239980u;
    { ctx->pc = 0x239980; return; }
    ctx->pc = 0x231A18u;
label_231a18:
    // 0x231a18: 0xaf8082d0  sw          $zero, -0x7D30($gp)
    ctx->pc = 0x231a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
label_231a1c:
    // 0x231a1c: 0x8f8282d4  lw          $v0, -0x7D2C($gp)
    ctx->pc = 0x231a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
label_231a20:
    // 0x231a20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_231a24:
    // 0x231a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_231a28:
    if (ctx->pc == 0x231A28u) {
        ctx->pc = 0x231A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A24u;
        // 0x231a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A2Cu;
        goto label_231a2c;
    }
    ctx->pc = 0x231A24u;
    {
        const bool branch_taken_0x231a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A24u;
        // 0x231a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a24) {
            ctx->pc = 0x231A38u;
            goto label_231a38;
        }
    }
    ctx->pc = 0x231A2Cu;
label_231a2c:
    // 0x231a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_231a30:
    // 0x231a30: 0x808db86  j           func_236E18
label_231a34:
    if (ctx->pc == 0x231A34u) {
        ctx->pc = 0x231A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A30u;
        // 0x231a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A38u;
        goto label_231a38;
    }
    ctx->pc = 0x231A30u;
    ctx->pc = 0x231A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A30u;
    // 0x231a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E18u;
    { ctx->pc = 0x236e18; return; }
    ctx->pc = 0x231A38u;
label_231a38:
    // 0x231a38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_231a3c:
    // 0x231a3c: 0x3e00008  jr          $ra
label_231a40:
    if (ctx->pc == 0x231A40u) {
        ctx->pc = 0x231A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A3Cu;
        // 0x231a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A44u;
        goto label_231a44;
    }
    ctx->pc = 0x231A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A3Cu;
        // 0x231a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A44u;
label_231a44:
    // 0x231a44: 0x0  nop
    ctx->pc = 0x231a44u;
    // NOP
label_231a48:
    // 0x231a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_231a4c:
    // 0x231a4c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231a50:
    // 0x231a50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_231a54:
    // 0x231a54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x231a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231a58:
    // 0x231a58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x231a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_231a5c:
    // 0x231a5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x231a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231a60:
    // 0x231a60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x231a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_231a64:
    // 0x231a64: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x231a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_231a68:
    // 0x231a68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x231a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_231a6c:
    // 0x231a6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x231a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_231a70:
    // 0x231a70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x231a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_231a74:
    // 0x231a74: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x231a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_231a78:
    // 0x231a78: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x231a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_231a7c:
    // 0x231a7c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x231a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_231a80:
    // 0x231a80: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231a84:
    // 0x231a84: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231a88:
    // 0x231a88: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231a8c:
    // 0x231a8c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_231a90:
    // 0x231a90: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x231a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_231a94:
    // 0x231a94: 0x8e108008  lw          $s0, -0x7FF8($s0)
    ctx->pc = 0x231a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934536)));
label_231a98:
    // 0x231a98: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x231a98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_231a9c:
    // 0x231a9c: 0x8e91000c  lw          $s1, 0xC($s4)
    ctx->pc = 0x231a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_231aa0:
    // 0x231aa0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x231aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_231aa4:
    // 0x231aa4: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_231aa8:
    // 0x231aa8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x231aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_231aac:
    // 0x231aac: 0xc08cd14  jal         func_233450
label_231ab0:
    if (ctx->pc == 0x231AB0u) {
        ctx->pc = 0x231AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AACu;
        // 0x231ab0: 0x222800b  movn        $s0, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231AB4u;
        goto label_231ab4;
    }
    ctx->pc = 0x231AACu;
    SET_GPR_U32(ctx, 31, 0x231AB4u);
    ctx->pc = 0x231AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AACu;
    // 0x231ab0: 0x222800b  movn        $s0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233450u;
    { ctx->pc = 0x233450; return; }
    ctx->pc = 0x231AB4u;
label_231ab4:
    // 0x231ab4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x231ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_231ab8:
    // 0x231ab8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x231ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_231abc:
    // 0x231abc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x231abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_231ac0:
    // 0x231ac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x231ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_231ac4:
    // 0x231ac4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x231ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_231ac8:
    // 0x231ac8: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x231ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_231acc:
    // 0x231acc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x231accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_231ad0:
    // 0x231ad0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x231ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_231ad4:
    // 0x231ad4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x231ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_231ad8:
    // 0x231ad8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x231ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231adc:
    // 0x231adc: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x231adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_231ae0:
    // 0x231ae0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x231ae0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231ae4:
    // 0x231ae4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x231ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_231ae8:
    // 0x231ae8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x231ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_231aec:
    // 0x231aec: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x231aecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231af0:
    // 0x231af0: 0xc08c710  jal         func_231C40
label_231af4:
    if (ctx->pc == 0x231AF4u) {
        ctx->pc = 0x231AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AF0u;
        // 0x231af4: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231AF8u;
        goto label_231af8;
    }
    ctx->pc = 0x231AF0u;
    SET_GPR_U32(ctx, 31, 0x231AF8u);
    ctx->pc = 0x231AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231AF0u;
    // 0x231af4: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C40u;
    goto label_231c40;
    ctx->pc = 0x231AF8u;
label_231af8:
    // 0x231af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231afc:
    // 0x231afc: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
label_231b00:
    if (ctx->pc == 0x231B00u) {
        ctx->pc = 0x231B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AFCu;
        // 0x231b00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231B04u;
        goto label_231b04;
    }
    ctx->pc = 0x231AFCu;
    {
        const bool branch_taken_0x231afc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x231B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AFCu;
        // 0x231b00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231afc) {
            ctx->pc = 0x231B24u;
            goto label_231b24;
        }
    }
    ctx->pc = 0x231B04u;
label_231b04:
    // 0x231b04: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231b08:
    // 0x231b08: 0xde860018  ld          $a2, 0x18($s4)
    ctx->pc = 0x231b08u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 24)));
label_231b0c:
    // 0x231b0c: 0xde850010  ld          $a1, 0x10($s4)
    ctx->pc = 0x231b0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_231b10:
    // 0x231b10: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231b14:
    // 0x231b14: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231b18:
    // 0x231b18: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231b1c:
    // 0x231b1c: 0xc08cd3a  jal         func_2334E8
label_231b20:
    if (ctx->pc == 0x231B20u) {
        ctx->pc = 0x231B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B1Cu;
        // 0x231b20: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231B24u;
        goto label_231b24;
    }
    ctx->pc = 0x231B1Cu;
    SET_GPR_U32(ctx, 31, 0x231B24u);
    ctx->pc = 0x231B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B1Cu;
    // 0x231b20: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334E8u;
    { ctx->pc = 0x2334e8; return; }
    ctx->pc = 0x231B24u;
label_231b24:
    // 0x231b24: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231b28:
    // 0x231b28: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231b2c:
    // 0x231b2c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231b2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231b30:
    // 0x231b30: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231b34:
    // 0x231b34: 0xc08cd1a  jal         func_233468
label_231b38:
    if (ctx->pc == 0x231B38u) {
        ctx->pc = 0x231B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B34u;
        // 0x231b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231B3Cu;
        goto label_231b3c;
    }
    ctx->pc = 0x231B34u;
    SET_GPR_U32(ctx, 31, 0x231B3Cu);
    ctx->pc = 0x231B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B34u;
    // 0x231b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233468u;
    { ctx->pc = 0x233468; return; }
    ctx->pc = 0x231B3Cu;
label_231b3c:
    // 0x231b3c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x231b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_231b40:
    // 0x231b40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x231b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_231b44:
    // 0x231b44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x231b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231b48:
    // 0x231b48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231b4c:
    // 0x231b4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x231b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_231b50:
    // 0x231b50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x231b50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231b54:
    // 0x231b54: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x231b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_231b58:
    // 0x231b58: 0x3e00008  jr          $ra
label_231b5c:
    if (ctx->pc == 0x231B5Cu) {
        ctx->pc = 0x231B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B58u;
        // 0x231b5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231B60u;
        goto label_231b60;
    }
    ctx->pc = 0x231B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B58u;
        // 0x231b5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231B60u;
label_231b60:
    // 0x231b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_231b64:
    // 0x231b64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x231b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231b68:
    // 0x231b68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x231b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_231b6c:
    // 0x231b6c: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_231b70:
    // 0x231b70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x231b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_231b74:
    // 0x231b74: 0x3c130009  lui         $s3, 0x9
    ctx->pc = 0x231b74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)9 << 16));
label_231b78:
    // 0x231b78: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x231b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_231b7c:
    // 0x231b7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x231b7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231b80:
    // 0x231b80: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x231b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_231b84:
    // 0x231b84: 0x36731210  ori         $s3, $s3, 0x1210
    ctx->pc = 0x231b84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4624);
label_231b88:
    // 0x231b88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x231b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_231b8c:
    // 0x231b8c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_231b90:
    // 0x231b90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_231b94:
    // 0x231b94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x231b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_231b98:
    // 0x231b98: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231b9c:
    // 0x231b9c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x231b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_231ba0:
    // 0x231ba0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231ba4:
    // 0x231ba4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x231ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_231ba8:
    // 0x231ba8: 0x8c638008  lw          $v1, -0x7FF8($v1)
    ctx->pc = 0x231ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934536)));
label_231bac:
    // 0x231bac: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x231bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_231bb0:
    // 0x231bb0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x231bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_231bb4:
    // 0x231bb4: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x231bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_231bb8:
    // 0x231bb8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x231bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_231bbc:
    // 0x231bbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_231bc0:
    // 0x231bc0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_231bc4:
    // 0x231bc4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x231bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_231bc8:
    // 0x231bc8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x231bc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_231bcc:
    // 0x231bcc: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x231bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_231bd0:
    // 0x231bd0: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x231bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_231bd4:
    // 0x231bd4: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x231bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_231bd8:
    // 0x231bd8: 0xc08c7f0  jal         func_231FC0
label_231bdc:
    if (ctx->pc == 0x231BDCu) {
        ctx->pc = 0x231BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BD8u;
        // 0x231bdc: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231BE0u;
        goto label_231be0;
    }
    ctx->pc = 0x231BD8u;
    SET_GPR_U32(ctx, 31, 0x231BE0u);
    ctx->pc = 0x231BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BD8u;
    // 0x231bdc: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231FC0u;
    { ctx->pc = 0x231fc0; return; }
    ctx->pc = 0x231BE0u;
label_231be0:
    // 0x231be0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x231be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_231be4:
    // 0x231be4: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x231be4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_231be8:
    // 0x231be8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x231be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_231bec:
    // 0x231bec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x231becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231bf0:
    // 0x231bf0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x231bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_231bf4:
    // 0x231bf4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x231bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231bf8:
    // 0x231bf8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x231bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_231bfc:
    // 0x231bfc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x231bfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231c00:
    // 0x231c00: 0xc08c710  jal         func_231C40
label_231c04:
    if (ctx->pc == 0x231C04u) {
        ctx->pc = 0x231C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C00u;
        // 0x231c04: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231C08u;
        goto label_231c08;
    }
    ctx->pc = 0x231C00u;
    SET_GPR_U32(ctx, 31, 0x231C08u);
    ctx->pc = 0x231C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C00u;
    // 0x231c04: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C40u;
    goto label_231c40;
    ctx->pc = 0x231C08u;
label_231c08:
    // 0x231c08: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231c0c:
    // 0x231c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231c10:
    // 0x231c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231c14:
    // 0x231c14: 0xc08c820  jal         func_232080
label_231c18:
    if (ctx->pc == 0x231C18u) {
        ctx->pc = 0x231C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C14u;
        // 0x231c18: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231C1Cu;
        goto label_231c1c;
    }
    ctx->pc = 0x231C14u;
    SET_GPR_U32(ctx, 31, 0x231C1Cu);
    ctx->pc = 0x231C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C14u;
    // 0x231c18: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232080u;
    { ctx->pc = 0x232080; return; }
    ctx->pc = 0x231C1Cu;
label_231c1c:
    // 0x231c1c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x231c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_231c20:
    // 0x231c20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x231c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_231c24:
    // 0x231c24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x231c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231c28:
    // 0x231c28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231c2c:
    // 0x231c2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x231c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_231c30:
    // 0x231c30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x231c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231c34:
    // 0x231c34: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x231c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_231c38:
    // 0x231c38: 0x3e00008  jr          $ra
label_231c3c:
    if (ctx->pc == 0x231C3Cu) {
        ctx->pc = 0x231C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C38u;
        // 0x231c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231C40u;
        goto label_231c40;
    }
    ctx->pc = 0x231C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C38u;
        // 0x231c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231C40u;
label_231c40:
    // 0x231c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_231c44:
    // 0x231c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231c48:
    // 0x231c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_231c4c:
    // 0x231c4c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x231c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_231c50:
    // 0x231c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_231c54:
    // 0x231c54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231c58:
    // 0x231c58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x231c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_231c5c:
    // 0x231c5c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x231c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_231c60:
    // 0x231c60: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x231c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_231c64:
    // 0x231c64: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x231c64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_231c68:
    // 0x231c68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x231c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_231c6c:
    // 0x231c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x231c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_231c70:
    // 0x231c70: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x231c70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_231c74:
    // 0x231c74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x231c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_231c78:
    // 0x231c78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x231c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_231c7c:
    // 0x231c7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x231c7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231c80:
    // 0x231c80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x231c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_231c84:
    // 0x231c84: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x231c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231c88:
    // 0x231c88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x231c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_231c8c:
    // 0x231c8c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x231c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_231c90:
    // 0x231c90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x231c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_231c94:
    // 0x231c94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x231c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_231c98:
    // 0x231c98: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
label_231c9c:
    if (ctx->pc == 0x231C9Cu) {
        ctx->pc = 0x231C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C98u;
        // 0x231c9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CA0u;
        goto label_231ca0;
    }
    ctx->pc = 0x231C98u;
    {
        const bool branch_taken_0x231c98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x231C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C98u;
        // 0x231c9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c98) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231CA0u;
label_231ca0:
    // 0x231ca0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_231ca4:
    if (ctx->pc == 0x231CA4u) {
        ctx->pc = 0x231CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CA0u;
        // 0x231ca4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CA8u;
        goto label_231ca8;
    }
    ctx->pc = 0x231CA0u;
    {
        const bool branch_taken_0x231ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ca0) {
            ctx->pc = 0x231CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CA0u;
            // 0x231ca4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CE0u;
            goto label_231ce0;
        }
    }
    ctx->pc = 0x231CA8u;
label_231ca8:
    // 0x231ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_231cac:
    // 0x231cac: 0xc08e93e  jal         func_23A4F8
label_231cb0:
    if (ctx->pc == 0x231CB0u) {
        ctx->pc = 0x231CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CACu;
        // 0x231cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CB4u;
        goto label_231cb4;
    }
    ctx->pc = 0x231CACu;
    SET_GPR_U32(ctx, 31, 0x231CB4u);
    ctx->pc = 0x231CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CACu;
    // 0x231cb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CB4u;
label_231cb4:
    // 0x231cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_231cb8:
    // 0x231cb8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_231cbc:
    // 0x231cbc: 0xc08e93e  jal         func_23A4F8
label_231cc0:
    if (ctx->pc == 0x231CC0u) {
        ctx->pc = 0x231CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CBCu;
        // 0x231cc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CC4u;
        goto label_231cc4;
    }
    ctx->pc = 0x231CBCu;
    SET_GPR_U32(ctx, 31, 0x231CC4u);
    ctx->pc = 0x231CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CBCu;
    // 0x231cc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CC4u;
label_231cc4:
    // 0x231cc4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_231cc8:
    // 0x231cc8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x231cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_231ccc:
    // 0x231ccc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231cd0:
    // 0x231cd0: 0xc08e93e  jal         func_23A4F8
label_231cd4:
    if (ctx->pc == 0x231CD4u) {
        ctx->pc = 0x231CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD0u;
        // 0x231cd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CD8u;
        goto label_231cd8;
    }
    ctx->pc = 0x231CD0u;
    SET_GPR_U32(ctx, 31, 0x231CD8u);
    ctx->pc = 0x231CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CD0u;
    // 0x231cd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CD8u;
label_231cd8:
    // 0x231cd8: 0x10000018  b           . + 4 + (0x18 << 2)
label_231cdc:
    if (ctx->pc == 0x231CDCu) {
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD8u;
        // 0x231cdc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CE0u;
        goto label_231ce0;
    }
    ctx->pc = 0x231CD8u;
    {
        const bool branch_taken_0x231cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD8u;
        // 0x231cdc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd8) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231CE0u;
label_231ce0:
    // 0x231ce0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x231ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_231ce4:
    // 0x231ce4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_231ce8:
    if (ctx->pc == 0x231CE8u) {
        ctx->pc = 0x231CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CE4u;
        // 0x231ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CECu;
        goto label_231cec;
    }
    ctx->pc = 0x231CE4u;
    {
        const bool branch_taken_0x231ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CE4u;
        // 0x231ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ce4) {
            ctx->pc = 0x231D20u;
            goto label_231d20;
        }
    }
    ctx->pc = 0x231CECu;
label_231cec:
    // 0x231cec: 0xc08e93e  jal         func_23A4F8
label_231cf0:
    if (ctx->pc == 0x231CF0u) {
        ctx->pc = 0x231CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CECu;
        // 0x231cf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231CF4u;
        goto label_231cf4;
    }
    ctx->pc = 0x231CECu;
    SET_GPR_U32(ctx, 31, 0x231CF4u);
    ctx->pc = 0x231CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CECu;
    // 0x231cf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231CF4u;
label_231cf4:
    // 0x231cf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x231cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231cf8:
    // 0x231cf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231cfc:
    // 0x231cfc: 0xc08e93e  jal         func_23A4F8
label_231d00:
    if (ctx->pc == 0x231D00u) {
        ctx->pc = 0x231D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CFCu;
        // 0x231d00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D04u;
        goto label_231d04;
    }
    ctx->pc = 0x231CFCu;
    SET_GPR_U32(ctx, 31, 0x231D04u);
    ctx->pc = 0x231D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CFCu;
    // 0x231d00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D04u;
label_231d04:
    // 0x231d04: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_231d08:
    // 0x231d08: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x231d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_231d0c:
    // 0x231d0c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x231d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_231d10:
    // 0x231d10: 0xc08e93e  jal         func_23A4F8
label_231d14:
    if (ctx->pc == 0x231D14u) {
        ctx->pc = 0x231D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D10u;
        // 0x231d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D18u;
        goto label_231d18;
    }
    ctx->pc = 0x231D10u;
    SET_GPR_U32(ctx, 31, 0x231D18u);
    ctx->pc = 0x231D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D10u;
    // 0x231d14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D18u;
label_231d18:
    // 0x231d18: 0x10000008  b           . + 4 + (0x8 << 2)
label_231d1c:
    if (ctx->pc == 0x231D1Cu) {
        ctx->pc = 0x231D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D18u;
        // 0x231d1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D20u;
        goto label_231d20;
    }
    ctx->pc = 0x231D18u;
    {
        const bool branch_taken_0x231d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D18u;
        // 0x231d1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d18) {
            ctx->pc = 0x231D3Cu;
            goto label_231d3c;
        }
    }
    ctx->pc = 0x231D20u;
label_231d20:
    // 0x231d20: 0xc08e93e  jal         func_23A4F8
label_231d24:
    if (ctx->pc == 0x231D24u) {
        ctx->pc = 0x231D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D20u;
        // 0x231d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D28u;
        goto label_231d28;
    }
    ctx->pc = 0x231D20u;
    SET_GPR_U32(ctx, 31, 0x231D28u);
    ctx->pc = 0x231D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D20u;
    // 0x231d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D28u;
label_231d28:
    // 0x231d28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_231d2c:
    // 0x231d2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231d30:
    // 0x231d30: 0xc08e93e  jal         func_23A4F8
label_231d34:
    if (ctx->pc == 0x231D34u) {
        ctx->pc = 0x231D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D30u;
        // 0x231d34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D38u;
        goto label_231d38;
    }
    ctx->pc = 0x231D30u;
    SET_GPR_U32(ctx, 31, 0x231D38u);
    ctx->pc = 0x231D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D30u;
    // 0x231d34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x231D38u;
label_231d38:
    // 0x231d38: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x231d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_231d3c:
    // 0x231d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231d40:
    // 0x231d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_231d44:
    // 0x231d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x231d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231d48:
    // 0x231d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x231d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_231d4c:
    // 0x231d4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x231d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231d50:
    // 0x231d50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_231d54:
    // 0x231d54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x231d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231d58:
    // 0x231d58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_231d5c:
    // 0x231d5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x231d5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_231d60:
    // 0x231d60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x231d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_231d64:
    // 0x231d64: 0x3e00008  jr          $ra
label_231d68:
    if (ctx->pc == 0x231D68u) {
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D64u;
        // 0x231d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D6Cu;
        goto label_231d6c;
    }
    ctx->pc = 0x231D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D64u;
        // 0x231d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D6Cu;
label_231d6c:
    // 0x231d6c: 0x0  nop
    ctx->pc = 0x231d6cu;
    // NOP
label_231d70:
    // 0x231d70: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x231d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_231d74:
    // 0x231d74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231d78:
    // 0x231d78: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231d7c:
    // 0x231d7c: 0xac208004  sw          $zero, -0x7FFC($at)
    ctx->pc = 0x231d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 0));
label_231d80:
    // 0x231d80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231d84:
    // 0x231d84: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231d88:
    // 0x231d88: 0xac228008  sw          $v0, -0x7FF8($at)
    ctx->pc = 0x231d88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934536), GPR_U32(ctx, 2));
label_231d8c:
    // 0x231d8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231d90:
    // 0x231d90: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231d94:
    // 0x231d94: 0x3e00008  jr          $ra
label_231d98:
    if (ctx->pc == 0x231D98u) {
        ctx->pc = 0x231D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D94u;
        // 0x231d98: 0xac208000  sw          $zero, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231D9Cu;
        goto label_231d9c;
    }
    ctx->pc = 0x231D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D94u;
        // 0x231d98: 0xac208000  sw          $zero, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D9Cu;
label_231d9c:
    // 0x231d9c: 0x0  nop
    ctx->pc = 0x231d9cu;
    // NOP
label_231da0:
    // 0x231da0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_231da4:
    // 0x231da4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231da8:
    // 0x231da8: 0x8c428004  lw          $v0, -0x7FFC($v0)
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934532)));
label_231dac:
    // 0x231dac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231db0:
    // 0x231db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231db4:
    // 0x231db4: 0x8c638008  lw          $v1, -0x7FF8($v1)
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934536)));
label_231db8:
    // 0x231db8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x231db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231dbc:
    // 0x231dbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_231dc0:
    if (ctx->pc == 0x231DC0u) {
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231DC4u;
        goto label_231dc4;
    }
    ctx->pc = 0x231DBCu;
    {
        const bool branch_taken_0x231dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dbc) {
            ctx->pc = 0x231DD8u;
            goto label_231dd8;
        }
    }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231dc8:
    // 0x231dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x231dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231dcc:
    // 0x231dcc: 0x8c638000  lw          $v1, -0x8000($v1)
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934528)));
label_231dd0:
    // 0x231dd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x231dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_231dd4:
    // 0x231dd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x231dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_231dd8:
    // 0x231dd8: 0x3e00008  jr          $ra
label_231ddc:
    if (ctx->pc == 0x231DDCu) {
        ctx->pc = 0x231DE0u;
        goto label_231de0;
    }
    ctx->pc = 0x231DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231DE0u;
label_231de0:
    // 0x231de0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_231de4:
    // 0x231de4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_231de8:
    // 0x231de8: 0x8ce78008  lw          $a3, -0x7FF8($a3)
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294934536)));
label_231dec:
    // 0x231dec: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_231df0:
    // 0x231df0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_231df4:
    // 0x231df4: 0x8d088004  lw          $t0, -0x7FFC($t0)
    ctx->pc = 0x231df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294934532)));
label_231df8:
    // 0x231df8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x231df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_231dfc:
    // 0x231dfc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x231dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_231e00:
    // 0x231e00: 0x8cc68000  lw          $a2, -0x8000($a2)
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294934528)));
label_231e04:
    // 0x231e04: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_231e08:
    if (ctx->pc == 0x231E08u) {
        ctx->pc = 0x231E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E04u;
        // 0x231e08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E0Cu;
        goto label_231e0c;
    }
    ctx->pc = 0x231E04u;
    {
        const bool branch_taken_0x231e04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e04) {
            ctx->pc = 0x231E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231E04u;
            // 0x231e08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231E0Cu;
            goto label_231e0c;
        }
    }
    ctx->pc = 0x231E0Cu;
label_231e0c:
    // 0x231e0c: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x231e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_231e10:
    // 0x231e10: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x231e10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231e14:
    // 0x231e14: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x231e14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_231e18:
    // 0x231e18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x231e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_231e1c:
    // 0x231e1c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x231e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_231e20:
    // 0x231e20: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x231e20u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_231e24:
    // 0x231e24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231e28:
    // 0x231e28: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231e2c:
    // 0x231e2c: 0xac288004  sw          $t0, -0x7FFC($at)
    ctx->pc = 0x231e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 8));
label_231e30:
    // 0x231e30: 0x1810  mfhi        $v1
    ctx->pc = 0x231e30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_231e34:
    // 0x231e34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231e38:
    // 0x231e38: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231e38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231e3c:
    // 0x231e3c: 0x3e00008  jr          $ra
label_231e40:
    if (ctx->pc == 0x231E40u) {
        ctx->pc = 0x231E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E3Cu;
        // 0x231e40: 0xac238000  sw          $v1, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E44u;
        goto label_231e44;
    }
    ctx->pc = 0x231E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E3Cu;
        // 0x231e40: 0xac238000  sw          $v1, -0x8000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E44u;
label_231e44:
    // 0x231e44: 0x0  nop
    ctx->pc = 0x231e44u;
    // NOP
label_231e48:
    // 0x231e48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x231e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231e4c:
    // 0x231e4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x231e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231e50:
    // 0x231e50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_231e54:
    // 0x231e54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_231e58:
    // 0x231e58: 0x8c638004  lw          $v1, -0x7FFC($v1)
    ctx->pc = 0x231e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934532)));
label_231e5c:
    // 0x231e5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_231e60:
    if (ctx->pc == 0x231E60u) {
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E64u;
        goto label_231e64;
    }
    ctx->pc = 0x231E5Cu;
    {
        const bool branch_taken_0x231e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E5Cu;
        // 0x231e60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e5c) {
            ctx->pc = 0x231E9Cu;
            goto label_231e9c;
        }
    }
    ctx->pc = 0x231E64u;
label_231e64:
    // 0x231e64: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_231e68:
    // 0x231e68: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_231e6c:
    // 0x231e6c: 0x8c848000  lw          $a0, -0x8000($a0)
    ctx->pc = 0x231e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294934528)));
label_231e70:
    // 0x231e70: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x231e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_231e74:
    // 0x231e74: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_231e78:
    // 0x231e78: 0x8ca58008  lw          $a1, -0x7FF8($a1)
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294934536)));
label_231e7c:
    // 0x231e7c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_231e80:
    // 0x231e80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x231e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_231e84:
    // 0x231e84: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_231e88:
    if (ctx->pc == 0x231E88u) {
        ctx->pc = 0x231E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E84u;
        // 0x231e88: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231E8Cu;
        goto label_231e8c;
    }
    ctx->pc = 0x231E84u;
    {
        const bool branch_taken_0x231e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e84) {
            ctx->pc = 0x231E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231E84u;
            // 0x231e88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231E8Cu;
            goto label_231e8c;
        }
    }
    ctx->pc = 0x231E8Cu;
label_231e8c:
    // 0x231e8c: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x231e8cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_231e90:
    // 0x231e90: 0x1810  mfhi        $v1
    ctx->pc = 0x231e90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_231e94:
    // 0x231e94: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_231e98:
    // 0x231e98: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x231e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_231e9c:
    // 0x231e9c: 0x3e00008  jr          $ra
label_231ea0:
    if (ctx->pc == 0x231EA0u) {
        ctx->pc = 0x231EA4u;
        goto label_231ea4;
    }
    ctx->pc = 0x231E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231EA4u;
label_231ea4:
    // 0x231ea4: 0x0  nop
    ctx->pc = 0x231ea4u;
    // NOP
label_231ea8:
    // 0x231ea8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x231ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_231eac:
    // 0x231eac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231eb0:
    // 0x231eb0: 0x8c428004  lw          $v0, -0x7FFC($v0)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934532)));
label_231eb4:
    // 0x231eb4: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x231eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_231eb8:
    // 0x231eb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x231eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231ebc:
    // 0x231ebc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x231ebcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_231ec0:
    // 0x231ec0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x231ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_231ec4:
    // 0x231ec4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x231ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_231ec8:
    // 0x231ec8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231ecc:
    // 0x231ecc: 0x3e00008  jr          $ra
label_231ed0:
    if (ctx->pc == 0x231ED0u) {
        ctx->pc = 0x231ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ECCu;
        // 0x231ed0: 0xac268004  sw          $a2, -0x7FFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231ED4u;
        goto label_231ed4;
    }
    ctx->pc = 0x231ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231ECCu;
        // 0x231ed0: 0xac268004  sw          $a2, -0x7FFC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231ED4u;
label_231ed4:
    // 0x231ed4: 0x0  nop
    ctx->pc = 0x231ed4u;
    // NOP
label_231ed8:
    // 0x231ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231edc:
    // 0x231edc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x231edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_231ee0:
    // 0x231ee0: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x231ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
label_231ee4:
    // 0x231ee4: 0xac870040  sw          $a3, 0x40($a0)
    ctx->pc = 0x231ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 7));
label_231ee8:
    // 0x231ee8: 0xac880048  sw          $t0, 0x48($a0)
    ctx->pc = 0x231ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 8));
label_231eec:
    // 0x231eec: 0xac89004c  sw          $t1, 0x4C($a0)
    ctx->pc = 0x231eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 9));
label_231ef0:
    // 0x231ef0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x231ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_231ef4:
    // 0x231ef4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x231ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_231ef8:
    // 0x231ef8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x231ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_231efc:
    // 0x231efc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x231efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_231f00:
    // 0x231f00: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x231f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_231f04:
    // 0x231f04: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x231f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_231f08:
    // 0x231f08: 0x3e00008  jr          $ra
label_231f0c:
    if (ctx->pc == 0x231F0Cu) {
        ctx->pc = 0x231F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F08u;
        // 0x231f0c: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F10u;
        goto label_231f10;
    }
    ctx->pc = 0x231F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F08u;
        // 0x231f0c: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F10u;
label_231f10:
    // 0x231f10: 0x3e00008  jr          $ra
label_231f14:
    if (ctx->pc == 0x231F14u) {
        ctx->pc = 0x231F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F10u;
        // 0x231f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F18u;
        goto label_231f18;
    }
    ctx->pc = 0x231F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F10u;
        // 0x231f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F18u;
label_231f18:
    // 0x231f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_231f1c:
    // 0x231f1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231f20:
    // 0x231f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_231f24:
    // 0x231f24: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x231f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_231f28:
    // 0x231f28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231f2c:
    if (ctx->pc == 0x231F2Cu) {
        ctx->pc = 0x231F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F28u;
        // 0x231f2c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F30u;
        goto label_231f30;
    }
    ctx->pc = 0x231F28u;
    {
        const bool branch_taken_0x231f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F28u;
        // 0x231f2c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f28) {
            ctx->pc = 0x231F50u;
            { ctx->pc = 0x231f50; return; }
        }
    }
    ctx->pc = 0x231F30u;
label_231f30:
    // 0x231f30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x231f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_231f34:
    // 0x231f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231f38:
    // 0x231f38: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_231f3c:
    if (ctx->pc == 0x231F3Cu) {
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F40u;
        goto label_231f40;
    }
    ctx->pc = 0x231F38u;
    {
        const bool branch_taken_0x231f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f38) {
            ctx->pc = 0x231F50u;
            { ctx->pc = 0x231f50; return; }
        }
    }
    ctx->pc = 0x231F40u;
label_231f40:
    // 0x231f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231f44:
    // 0x231f44: 0x808dbb8  j           func_236EE0
label_231f48:
    if (ctx->pc == 0x231F48u) {
        ctx->pc = 0x231F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F44u;
        // 0x231f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231F4Cu;
        goto label_231f4c;
    }
    ctx->pc = 0x231F44u;
    ctx->pc = 0x231F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F44u;
    // 0x231f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EE0u;
    { ctx->pc = 0x236ee0; return; }
    ctx->pc = 0x231F4Cu;
label_231f4c:
    // 0x231f4c: 0x0  nop
    ctx->pc = 0x231f4cu;
    // NOP
    ctx->pc = 0x231f50u;
    return;
}
