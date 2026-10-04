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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part321(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x219810u: goto label_219810;
        case 0x219814u: goto label_219814;
        case 0x219818u: goto label_219818;
        case 0x21981cu: goto label_21981c;
        case 0x219820u: goto label_219820;
        case 0x219824u: goto label_219824;
        case 0x219828u: goto label_219828;
        case 0x21982cu: goto label_21982c;
        case 0x219830u: goto label_219830;
        case 0x219834u: goto label_219834;
        case 0x219838u: goto label_219838;
        case 0x21983cu: goto label_21983c;
        case 0x219840u: goto label_219840;
        case 0x219844u: goto label_219844;
        case 0x219848u: goto label_219848;
        case 0x21984cu: goto label_21984c;
        case 0x219850u: goto label_219850;
        case 0x219854u: goto label_219854;
        case 0x219858u: goto label_219858;
        case 0x21985cu: goto label_21985c;
        case 0x219860u: goto label_219860;
        case 0x219864u: goto label_219864;
        case 0x219868u: goto label_219868;
        case 0x21986cu: goto label_21986c;
        case 0x219870u: goto label_219870;
        case 0x219874u: goto label_219874;
        case 0x219878u: goto label_219878;
        case 0x21987cu: goto label_21987c;
        case 0x219880u: goto label_219880;
        case 0x219884u: goto label_219884;
        case 0x219888u: goto label_219888;
        case 0x21988cu: goto label_21988c;
        case 0x219890u: goto label_219890;
        case 0x219894u: goto label_219894;
        case 0x219898u: goto label_219898;
        case 0x21989cu: goto label_21989c;
        case 0x2198a0u: goto label_2198a0;
        case 0x2198a4u: goto label_2198a4;
        case 0x2198a8u: goto label_2198a8;
        case 0x2198acu: goto label_2198ac;
        case 0x2198b0u: goto label_2198b0;
        case 0x2198b4u: goto label_2198b4;
        case 0x2198b8u: goto label_2198b8;
        case 0x2198bcu: goto label_2198bc;
        case 0x2198c0u: goto label_2198c0;
        case 0x2198c4u: goto label_2198c4;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198ccu: goto label_2198cc;
        case 0x2198d0u: goto label_2198d0;
        case 0x2198d4u: goto label_2198d4;
        case 0x2198d8u: goto label_2198d8;
        case 0x2198dcu: goto label_2198dc;
        case 0x2198e0u: goto label_2198e0;
        case 0x2198e4u: goto label_2198e4;
        case 0x2198e8u: goto label_2198e8;
        case 0x2198ecu: goto label_2198ec;
        case 0x2198f0u: goto label_2198f0;
        case 0x2198f4u: goto label_2198f4;
        case 0x2198f8u: goto label_2198f8;
        case 0x2198fcu: goto label_2198fc;
        case 0x219900u: goto label_219900;
        case 0x219904u: goto label_219904;
        case 0x219908u: goto label_219908;
        case 0x21990cu: goto label_21990c;
        case 0x219910u: goto label_219910;
        case 0x219914u: goto label_219914;
        case 0x219918u: goto label_219918;
        case 0x21991cu: goto label_21991c;
        case 0x219920u: goto label_219920;
        case 0x219924u: goto label_219924;
        case 0x219928u: goto label_219928;
        case 0x21992cu: goto label_21992c;
        case 0x219930u: goto label_219930;
        case 0x219934u: goto label_219934;
        case 0x219938u: goto label_219938;
        case 0x21993cu: goto label_21993c;
        case 0x219940u: goto label_219940;
        case 0x219944u: goto label_219944;
        case 0x219948u: goto label_219948;
        case 0x21994cu: goto label_21994c;
        case 0x219950u: goto label_219950;
        case 0x219954u: goto label_219954;
        case 0x219958u: goto label_219958;
        case 0x21995cu: goto label_21995c;
        case 0x219960u: goto label_219960;
        case 0x219964u: goto label_219964;
        case 0x219968u: goto label_219968;
        case 0x21996cu: goto label_21996c;
        case 0x219970u: goto label_219970;
        case 0x219974u: goto label_219974;
        case 0x219978u: goto label_219978;
        case 0x21997cu: goto label_21997c;
        case 0x219980u: goto label_219980;
        case 0x219984u: goto label_219984;
        case 0x219988u: goto label_219988;
        case 0x21998cu: goto label_21998c;
        case 0x219990u: goto label_219990;
        case 0x219994u: goto label_219994;
        case 0x219998u: goto label_219998;
        case 0x21999cu: goto label_21999c;
        case 0x2199a0u: goto label_2199a0;
        case 0x2199a4u: goto label_2199a4;
        case 0x2199a8u: goto label_2199a8;
        case 0x2199acu: goto label_2199ac;
        case 0x2199b0u: goto label_2199b0;
        case 0x2199b4u: goto label_2199b4;
        case 0x2199b8u: goto label_2199b8;
        case 0x2199bcu: goto label_2199bc;
        case 0x2199c0u: goto label_2199c0;
        case 0x2199c4u: goto label_2199c4;
        case 0x2199c8u: goto label_2199c8;
        case 0x2199ccu: goto label_2199cc;
        case 0x2199d0u: goto label_2199d0;
        case 0x2199d4u: goto label_2199d4;
        case 0x2199d8u: goto label_2199d8;
        case 0x2199dcu: goto label_2199dc;
        case 0x2199e0u: goto label_2199e0;
        case 0x2199e4u: goto label_2199e4;
        case 0x2199e8u: goto label_2199e8;
        case 0x2199ecu: goto label_2199ec;
        case 0x2199f0u: goto label_2199f0;
        case 0x2199f4u: goto label_2199f4;
        case 0x2199f8u: goto label_2199f8;
        case 0x2199fcu: goto label_2199fc;
        case 0x219a00u: goto label_219a00;
        case 0x219a04u: goto label_219a04;
        case 0x219a08u: goto label_219a08;
        case 0x219a0cu: goto label_219a0c;
        case 0x219a10u: goto label_219a10;
        case 0x219a14u: goto label_219a14;
        case 0x219a18u: goto label_219a18;
        case 0x219a1cu: goto label_219a1c;
        case 0x219a20u: goto label_219a20;
        case 0x219a24u: goto label_219a24;
        case 0x219a28u: goto label_219a28;
        case 0x219a2cu: goto label_219a2c;
        case 0x219a30u: goto label_219a30;
        case 0x219a34u: goto label_219a34;
        case 0x219a38u: goto label_219a38;
        case 0x219a3cu: goto label_219a3c;
        case 0x219a40u: goto label_219a40;
        case 0x219a44u: goto label_219a44;
        case 0x219a48u: goto label_219a48;
        case 0x219a4cu: goto label_219a4c;
        case 0x219a50u: goto label_219a50;
        case 0x219a54u: goto label_219a54;
        case 0x219a58u: goto label_219a58;
        case 0x219a5cu: goto label_219a5c;
        case 0x219a60u: goto label_219a60;
        case 0x219a64u: goto label_219a64;
        case 0x219a68u: goto label_219a68;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a70u: goto label_219a70;
        case 0x219a74u: goto label_219a74;
        case 0x219a78u: goto label_219a78;
        case 0x219a7cu: goto label_219a7c;
        case 0x219a80u: goto label_219a80;
        case 0x219a84u: goto label_219a84;
        case 0x219a88u: goto label_219a88;
        case 0x219a8cu: goto label_219a8c;
        case 0x219a90u: goto label_219a90;
        case 0x219a94u: goto label_219a94;
        case 0x219a98u: goto label_219a98;
        case 0x219a9cu: goto label_219a9c;
        case 0x219aa0u: goto label_219aa0;
        case 0x219aa4u: goto label_219aa4;
        case 0x219aa8u: goto label_219aa8;
        case 0x219aacu: goto label_219aac;
        case 0x219ab0u: goto label_219ab0;
        case 0x219ab4u: goto label_219ab4;
        case 0x219ab8u: goto label_219ab8;
        case 0x219abcu: goto label_219abc;
        case 0x219ac0u: goto label_219ac0;
        case 0x219ac4u: goto label_219ac4;
        case 0x219ac8u: goto label_219ac8;
        case 0x219accu: goto label_219acc;
        case 0x219ad0u: goto label_219ad0;
        case 0x219ad4u: goto label_219ad4;
        case 0x219ad8u: goto label_219ad8;
        case 0x219adcu: goto label_219adc;
        case 0x219ae0u: goto label_219ae0;
        case 0x219ae4u: goto label_219ae4;
        case 0x219ae8u: goto label_219ae8;
        case 0x219aecu: goto label_219aec;
        case 0x219af0u: goto label_219af0;
        case 0x219af4u: goto label_219af4;
        case 0x219af8u: goto label_219af8;
        case 0x219afcu: goto label_219afc;
        case 0x219b00u: goto label_219b00;
        case 0x219b04u: goto label_219b04;
        case 0x219b08u: goto label_219b08;
        case 0x219b0cu: goto label_219b0c;
        case 0x219b10u: goto label_219b10;
        case 0x219b14u: goto label_219b14;
        case 0x219b18u: goto label_219b18;
        case 0x219b1cu: goto label_219b1c;
        case 0x219b20u: goto label_219b20;
        case 0x219b24u: goto label_219b24;
        case 0x219b28u: goto label_219b28;
        case 0x219b2cu: goto label_219b2c;
        case 0x219b30u: goto label_219b30;
        case 0x219b34u: goto label_219b34;
        case 0x219b38u: goto label_219b38;
        case 0x219b3cu: goto label_219b3c;
        case 0x219b40u: goto label_219b40;
        case 0x219b44u: goto label_219b44;
        case 0x219b48u: goto label_219b48;
        case 0x219b4cu: goto label_219b4c;
        case 0x219b50u: goto label_219b50;
        case 0x219b54u: goto label_219b54;
        case 0x219b58u: goto label_219b58;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b60u: goto label_219b60;
        case 0x219b64u: goto label_219b64;
        case 0x219b68u: goto label_219b68;
        case 0x219b6cu: goto label_219b6c;
        case 0x219b70u: goto label_219b70;
        case 0x219b74u: goto label_219b74;
        case 0x219b78u: goto label_219b78;
        case 0x219b7cu: goto label_219b7c;
        case 0x219b80u: goto label_219b80;
        case 0x219b84u: goto label_219b84;
        case 0x219b88u: goto label_219b88;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b90u: goto label_219b90;
        case 0x219b94u: goto label_219b94;
        case 0x219b98u: goto label_219b98;
        case 0x219b9cu: goto label_219b9c;
        case 0x219ba0u: goto label_219ba0;
        case 0x219ba4u: goto label_219ba4;
        case 0x219ba8u: goto label_219ba8;
        case 0x219bacu: goto label_219bac;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bb4u: goto label_219bb4;
        case 0x219bb8u: goto label_219bb8;
        case 0x219bbcu: goto label_219bbc;
        case 0x219bc0u: goto label_219bc0;
        case 0x219bc4u: goto label_219bc4;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bccu: goto label_219bcc;
        case 0x219bd0u: goto label_219bd0;
        case 0x219bd4u: goto label_219bd4;
        case 0x219bd8u: goto label_219bd8;
        case 0x219bdcu: goto label_219bdc;
        case 0x219be0u: goto label_219be0;
        case 0x219be4u: goto label_219be4;
        case 0x219be8u: goto label_219be8;
        case 0x219becu: goto label_219bec;
        case 0x219bf0u: goto label_219bf0;
        case 0x219bf4u: goto label_219bf4;
        case 0x219bf8u: goto label_219bf8;
        case 0x219bfcu: goto label_219bfc;
        case 0x219c00u: goto label_219c00;
        case 0x219c04u: goto label_219c04;
        case 0x219c08u: goto label_219c08;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c10u: goto label_219c10;
        case 0x219c14u: goto label_219c14;
        case 0x219c18u: goto label_219c18;
        case 0x219c1cu: goto label_219c1c;
        case 0x219c20u: goto label_219c20;
        case 0x219c24u: goto label_219c24;
        case 0x219c28u: goto label_219c28;
        case 0x219c2cu: goto label_219c2c;
        case 0x219c30u: goto label_219c30;
        case 0x219c34u: goto label_219c34;
        case 0x219c38u: goto label_219c38;
        case 0x219c3cu: goto label_219c3c;
        case 0x219c40u: goto label_219c40;
        case 0x219c44u: goto label_219c44;
        case 0x219c48u: goto label_219c48;
        case 0x219c4cu: goto label_219c4c;
        case 0x219c50u: goto label_219c50;
        case 0x219c54u: goto label_219c54;
        case 0x219c58u: goto label_219c58;
        case 0x219c5cu: goto label_219c5c;
        case 0x219c60u: goto label_219c60;
        case 0x219c64u: goto label_219c64;
        case 0x219c68u: goto label_219c68;
        case 0x219c6cu: goto label_219c6c;
        case 0x219c70u: goto label_219c70;
        case 0x219c74u: goto label_219c74;
        case 0x219c78u: goto label_219c78;
        case 0x219c7cu: goto label_219c7c;
        case 0x219c80u: goto label_219c80;
        case 0x219c84u: goto label_219c84;
        case 0x219c88u: goto label_219c88;
        case 0x219c8cu: goto label_219c8c;
        case 0x219c90u: goto label_219c90;
        case 0x219c94u: goto label_219c94;
        case 0x219c98u: goto label_219c98;
        case 0x219c9cu: goto label_219c9c;
        case 0x219ca0u: goto label_219ca0;
        case 0x219ca4u: goto label_219ca4;
        case 0x219ca8u: goto label_219ca8;
        case 0x219cacu: goto label_219cac;
        case 0x219cb0u: goto label_219cb0;
        case 0x219cb4u: goto label_219cb4;
        case 0x219cb8u: goto label_219cb8;
        case 0x219cbcu: goto label_219cbc;
        case 0x219cc0u: goto label_219cc0;
        case 0x219cc4u: goto label_219cc4;
        case 0x219cc8u: goto label_219cc8;
        case 0x219cccu: goto label_219ccc;
        case 0x219cd0u: goto label_219cd0;
        case 0x219cd4u: goto label_219cd4;
        case 0x219cd8u: goto label_219cd8;
        case 0x219cdcu: goto label_219cdc;
        case 0x219ce0u: goto label_219ce0;
        case 0x219ce4u: goto label_219ce4;
        case 0x219ce8u: goto label_219ce8;
        case 0x219cecu: goto label_219cec;
        case 0x219cf0u: goto label_219cf0;
        case 0x219cf4u: goto label_219cf4;
        case 0x219cf8u: goto label_219cf8;
        case 0x219cfcu: goto label_219cfc;
        case 0x219d00u: goto label_219d00;
        case 0x219d04u: goto label_219d04;
        case 0x219d08u: goto label_219d08;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d10u: goto label_219d10;
        case 0x219d14u: goto label_219d14;
        case 0x219d18u: goto label_219d18;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d20u: goto label_219d20;
        case 0x219d24u: goto label_219d24;
        case 0x219d28u: goto label_219d28;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d30u: goto label_219d30;
        case 0x219d34u: goto label_219d34;
        case 0x219d38u: goto label_219d38;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d40u: goto label_219d40;
        case 0x219d44u: goto label_219d44;
        case 0x219d48u: goto label_219d48;
        case 0x219d4cu: goto label_219d4c;
        case 0x219d50u: goto label_219d50;
        case 0x219d54u: goto label_219d54;
        case 0x219d58u: goto label_219d58;
        case 0x219d5cu: goto label_219d5c;
        case 0x219d60u: goto label_219d60;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d70u: goto label_219d70;
        case 0x219d74u: goto label_219d74;
        case 0x219d78u: goto label_219d78;
        case 0x219d7cu: goto label_219d7c;
        case 0x219d80u: goto label_219d80;
        case 0x219d84u: goto label_219d84;
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        case 0x219da0u: goto label_219da0;
        case 0x219da4u: goto label_219da4;
        case 0x219da8u: goto label_219da8;
        case 0x219dacu: goto label_219dac;
        case 0x219db0u: goto label_219db0;
        case 0x219db4u: goto label_219db4;
        case 0x219db8u: goto label_219db8;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dc4u: goto label_219dc4;
        case 0x219dc8u: goto label_219dc8;
        case 0x219dccu: goto label_219dcc;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd4u: goto label_219dd4;
        case 0x219dd8u: goto label_219dd8;
        case 0x219ddcu: goto label_219ddc;
        case 0x219de0u: goto label_219de0;
        case 0x219de4u: goto label_219de4;
        case 0x219de8u: goto label_219de8;
        case 0x219decu: goto label_219dec;
        case 0x219df0u: goto label_219df0;
        case 0x219df4u: goto label_219df4;
        case 0x219df8u: goto label_219df8;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e00u: goto label_219e00;
        case 0x219e04u: goto label_219e04;
        case 0x219e08u: goto label_219e08;
        case 0x219e0cu: goto label_219e0c;
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f40u: goto label_219f40;
        case 0x219f44u: goto label_219f44;
        case 0x219f48u: goto label_219f48;
        case 0x219f4cu: goto label_219f4c;
        case 0x219f50u: goto label_219f50;
        case 0x219f54u: goto label_219f54;
        case 0x219f58u: goto label_219f58;
        case 0x219f5cu: goto label_219f5c;
        case 0x219f60u: goto label_219f60;
        case 0x219f64u: goto label_219f64;
        case 0x219f68u: goto label_219f68;
        case 0x219f6cu: goto label_219f6c;
        case 0x219f70u: goto label_219f70;
        case 0x219f74u: goto label_219f74;
        case 0x219f78u: goto label_219f78;
        case 0x219f7cu: goto label_219f7c;
        case 0x219f80u: goto label_219f80;
        case 0x219f84u: goto label_219f84;
        case 0x219f88u: goto label_219f88;
        case 0x219f8cu: goto label_219f8c;
        case 0x219f90u: goto label_219f90;
        case 0x219f94u: goto label_219f94;
        case 0x219f98u: goto label_219f98;
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fa8u: goto label_219fa8;
        case 0x219facu: goto label_219fac;
        case 0x219fb0u: goto label_219fb0;
        case 0x219fb4u: goto label_219fb4;
        case 0x219fb8u: goto label_219fb8;
        case 0x219fbcu: goto label_219fbc;
        case 0x219fc0u: goto label_219fc0;
        case 0x219fc4u: goto label_219fc4;
        case 0x219fc8u: goto label_219fc8;
        case 0x219fccu: goto label_219fcc;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        default: return;
    }

label_219810:
    // 0x219810: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_219814:
    // 0x219814: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219818:
    // 0x219818: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x219818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_21981c:
    // 0x21981c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x21981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
label_219820:
    // 0x219820: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x219820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219824:
    // 0x219824: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_219828:
    // 0x219828: 0xc0550d0  jal         func_154340
label_21982c:
    if (ctx->pc == 0x21982Cu) {
        ctx->pc = 0x21982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219828u;
        // 0x21982c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219830u;
        goto label_219830;
    }
    ctx->pc = 0x219828u;
    SET_GPR_U32(ctx, 31, 0x219830u);
    ctx->pc = 0x21982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219828u;
    // 0x21982c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x219828u, 0x219830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219830u;
label_219830:
    // 0x219830: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_219834:
    if (ctx->pc == 0x219834u) {
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219830u;
        // 0x219834: 0x24080194  addiu       $t0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219838u;
        goto label_219838;
    }
    ctx->pc = 0x219830u;
    {
        const bool branch_taken_0x219830 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219830u;
        // 0x219834: 0x24080194  addiu       $t0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219830) {
            ctx->pc = 0x219840u;
            goto label_219840;
        }
    }
    ctx->pc = 0x219838u;
label_219838:
    // 0x219838: 0x240300ec  addiu       $v1, $zero, 0xEC
    ctx->pc = 0x219838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_21983c:
    // 0x21983c: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x21983cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_219840:
    // 0x219840: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_219844:
    // 0x219844: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x219844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219848:
    // 0x219848: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x219848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21984c:
    // 0x21984c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x21984cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219850:
    // 0x219850: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x219850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_219854:
    // 0x219854: 0xc054e5c  jal         func_153970
label_219858:
    if (ctx->pc == 0x219858u) {
        ctx->pc = 0x219858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219854u;
        // 0x219858: 0x340aff00  ori         $t2, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21985Cu;
        goto label_21985c;
    }
    ctx->pc = 0x219854u;
    SET_GPR_U32(ctx, 31, 0x21985Cu);
    ctx->pc = 0x219858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219854u;
    // 0x219858: 0x340aff00  ori         $t2, $zero, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x219854u, 0x21985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21985Cu;
label_21985c:
    // 0x21985c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_219860:
    // 0x219860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219864:
    // 0x219864: 0xc054e70  jal         func_1539C0
label_219868:
    if (ctx->pc == 0x219868u) {
        ctx->pc = 0x219868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219864u;
        // 0x219868: 0x54200b  movn        $a0, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21986Cu;
        goto label_21986c;
    }
    ctx->pc = 0x219864u;
    SET_GPR_U32(ctx, 31, 0x21986Cu);
    ctx->pc = 0x219868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219864u;
    // 0x219868: 0x54200b  movn        $a0, $v0, $s4 (Delay Slot)
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x219864u, 0x21986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21986Cu;
label_21986c:
    // 0x21986c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_219870:
    // 0x219870: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_219874:
    // 0x219874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219878:
    // 0x219878: 0x24440430  addiu       $a0, $v0, 0x430
    ctx->pc = 0x219878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
label_21987c:
    // 0x21987c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_219880:
    // 0x219880: 0xc054e74  jal         func_1539D0
label_219884:
    if (ctx->pc == 0x219884u) {
        ctx->pc = 0x219884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219880u;
        // 0x219884: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219888u;
        goto label_219888;
    }
    ctx->pc = 0x219880u;
    SET_GPR_U32(ctx, 31, 0x219888u);
    ctx->pc = 0x219884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219880u;
    // 0x219884: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x219880u, 0x219888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219888u;
label_219888:
    // 0x219888: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x219888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21988c:
    // 0x21988c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x21988cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_219890:
    // 0x219890: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_219894:
    if (ctx->pc == 0x219894u) {
        ctx->pc = 0x219894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219890u;
        // 0x219894: 0x26310ea0  addiu       $s1, $s1, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219898u;
        goto label_219898;
    }
    ctx->pc = 0x219890u;
    {
        const bool branch_taken_0x219890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219890u;
        // 0x219894: 0x26310ea0  addiu       $s1, $s1, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219890) {
            ctx->pc = 0x219808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x219808; return; }
        }
    }
    ctx->pc = 0x219898u;
label_219898:
    // 0x219898: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x219898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21989c:
    // 0x21989c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2198a0:
    // 0x2198a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2198a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2198a4:
    // 0x2198a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2198a8:
    // 0x2198a8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2198a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2198ac:
    // 0x2198ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2198b0:
    // 0x2198b0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2198b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2198b4:
    // 0x2198b4: 0x26042170  addiu       $a0, $s0, 0x2170
    ctx->pc = 0x2198b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8560));
label_2198b8:
    // 0x2198b8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2198b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2198bc:
    // 0x2198bc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2198bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2198c0:
    // 0x2198c0: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x2198c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_2198c4:
    // 0x2198c4: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x2198c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_2198c8:
    // 0x2198c8: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2198c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2198cc:
    // 0x2198cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2198ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2198d0:
    // 0x2198d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2198d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2198d4:
    // 0x2198d4: 0xc05de30  jal         func_1778C0
label_2198d8:
    if (ctx->pc == 0x2198D8u) {
        ctx->pc = 0x2198D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198D4u;
        // 0x2198d8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2198DCu;
        goto label_2198dc;
    }
    ctx->pc = 0x2198D4u;
    SET_GPR_U32(ctx, 31, 0x2198DCu);
    ctx->pc = 0x2198D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198D4u;
    // 0x2198d8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2198D4u, 0x2198DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198DCu;
label_2198dc:
    // 0x2198dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2198e0:
    // 0x2198e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2198e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2198e4:
    // 0x2198e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2198e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2198e8:
    // 0x2198e8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2198ec:
    // 0x2198ec: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2198ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2198f0:
    // 0x2198f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2198f4:
    // 0x2198f4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2198f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2198f8:
    // 0x2198f8: 0x26042210  addiu       $a0, $s0, 0x2210
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8720));
label_2198fc:
    // 0x2198fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2198fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219900:
    // 0x219900: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x219900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_219904:
    // 0x219904: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x219904u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_219908:
    // 0x219908: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_21990c:
    // 0x21990c: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x21990cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219910:
    // 0x219910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219914:
    // 0x219914: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x219914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_219918:
    // 0x219918: 0xc05de30  jal         func_1778C0
label_21991c:
    if (ctx->pc == 0x21991Cu) {
        ctx->pc = 0x21991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219918u;
        // 0x21991c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219920u;
        goto label_219920;
    }
    ctx->pc = 0x219918u;
    SET_GPR_U32(ctx, 31, 0x219920u);
    ctx->pc = 0x21991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219918u;
    // 0x21991c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x219918u, 0x219920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219920u;
label_219920:
    // 0x219920: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x219920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219924:
    // 0x219924: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x219924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_219928:
    // 0x219928: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x219928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21992c:
    // 0x21992c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219930:
    // 0x219930: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_219934:
    // 0x219934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219938:
    // 0x219938: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x219938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21993c:
    // 0x21993c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219940:
    // 0x219940: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219944:
    // 0x219944: 0x260422b0  addiu       $a0, $s0, 0x22B0
    ctx->pc = 0x219944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
label_219948:
    // 0x219948: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x219948u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_21994c:
    // 0x21994c: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x21994cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_219950:
    // 0x219950: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x219950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_219954:
    // 0x219954: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219958:
    // 0x219958: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x219958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21995c:
    // 0x21995c: 0xc05de30  jal         func_1778C0
label_219960:
    if (ctx->pc == 0x219960u) {
        ctx->pc = 0x219960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21995Cu;
        // 0x219960: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219964u;
        goto label_219964;
    }
    ctx->pc = 0x21995Cu;
    SET_GPR_U32(ctx, 31, 0x219964u);
    ctx->pc = 0x219960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21995Cu;
    // 0x219960: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21995Cu, 0x219964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219964u;
label_219964:
    // 0x219964: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x219964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219968:
    // 0x219968: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x219968u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21996c:
    // 0x21996c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_219970:
    // 0x219970: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219974:
    // 0x219974: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_219978:
    // 0x219978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21997c:
    // 0x21997c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_219980:
    // 0x219980: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x219980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219984:
    // 0x219984: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219988:
    // 0x219988: 0x26042350  addiu       $a0, $s0, 0x2350
    ctx->pc = 0x219988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9040));
label_21998c:
    // 0x21998c: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x21998cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_219990:
    // 0x219990: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x219990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_219994:
    // 0x219994: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x219994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_219998:
    // 0x219998: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219998u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_21999c:
    // 0x21999c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2199a0:
    // 0x2199a0: 0xc05de30  jal         func_1778C0
label_2199a4:
    if (ctx->pc == 0x2199A4u) {
        ctx->pc = 0x2199A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199A0u;
        // 0x2199a4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2199A8u;
        goto label_2199a8;
    }
    ctx->pc = 0x2199A0u;
    SET_GPR_U32(ctx, 31, 0x2199A8u);
    ctx->pc = 0x2199A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199A0u;
    // 0x2199a4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2199A0u, 0x2199A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199A8u;
label_2199a8:
    // 0x2199a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2199a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2199ac:
    // 0x2199ac: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x2199acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2199b0:
    // 0x2199b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2199b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2199b4:
    // 0x2199b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2199b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2199b8:
    // 0x2199b8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2199b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2199bc:
    // 0x2199bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2199c0:
    // 0x2199c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2199c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2199c4:
    // 0x2199c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2199c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2199c8:
    // 0x2199c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2199c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2199cc:
    // 0x2199cc: 0x260423f0  addiu       $a0, $s0, 0x23F0
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9200));
label_2199d0:
    // 0x2199d0: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x2199d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_2199d4:
    // 0x2199d4: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x2199d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_2199d8:
    // 0x2199d8: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_2199dc:
    // 0x2199dc: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2199dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2199e0:
    // 0x2199e0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x2199e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2199e4:
    // 0x2199e4: 0xc05de30  jal         func_1778C0
label_2199e8:
    if (ctx->pc == 0x2199E8u) {
        ctx->pc = 0x2199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199E4u;
        // 0x2199e8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2199ECu;
        goto label_2199ec;
    }
    ctx->pc = 0x2199E4u;
    SET_GPR_U32(ctx, 31, 0x2199ECu);
    ctx->pc = 0x2199E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199E4u;
    // 0x2199e8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2199E4u, 0x2199ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199ECu;
label_2199ec:
    // 0x2199ec: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x2199ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_2199f0:
    // 0x2199f0: 0x26042490  addiu       $a0, $s0, 0x2490
    ctx->pc = 0x2199f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
label_2199f4:
    // 0x2199f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2199f8:
    // 0x2199f8: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_2199fc:
    // 0x2199fc: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_219a00:
    // 0x219a00: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219a00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219a04:
    // 0x219a04: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x219a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_219a08:
    // 0x219a08: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219a0c:
    // 0x219a0c: 0xc0708ac  jal         func_1C22B0
label_219a10:
    if (ctx->pc == 0x219A10u) {
        ctx->pc = 0x219A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A0Cu;
        // 0x219a10: 0x256be0f0  addiu       $t3, $t3, -0x1F10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219A14u;
        goto label_219a14;
    }
    ctx->pc = 0x219A0Cu;
    SET_GPR_U32(ctx, 31, 0x219A14u);
    ctx->pc = 0x219A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A0Cu;
    // 0x219a10: 0x256be0f0  addiu       $t3, $t3, -0x1F10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x219A14u;
label_219a14:
    // 0x219a14: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x219a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_219a18:
    // 0x219a18: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x219a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_219a1c:
    // 0x219a1c: 0x1460fe56  bnez        $v1, . + 4 + (-0x1AA << 2)
label_219a20:
    if (ctx->pc == 0x219A20u) {
        ctx->pc = 0x219A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A1Cu;
        // 0x219a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219A24u;
        goto label_219a24;
    }
    ctx->pc = 0x219A1Cu;
    {
        const bool branch_taken_0x219a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A1Cu;
        // 0x219a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a1c) {
            ctx->pc = 0x219378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x219378; return; }
        }
    }
    ctx->pc = 0x219A24u;
label_219a24:
    // 0x219a24: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_219a28:
    // 0x219a28: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x219a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_219a2c:
    // 0x219a2c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x219a2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219a30:
    // 0x219a30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x219a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_219a34:
    // 0x219a34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x219a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219a38:
    // 0x219a38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x219a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_219a3c:
    // 0x219a3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x219a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219a40:
    // 0x219a40: 0x3e00008  jr          $ra
label_219a44:
    if (ctx->pc == 0x219A44u) {
        ctx->pc = 0x219A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A40u;
        // 0x219a44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219A48u;
        goto label_219a48;
    }
    ctx->pc = 0x219A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A40u;
        // 0x219a44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A48u;
label_219a48:
    // 0x219a48: 0x0  nop
    ctx->pc = 0x219a48u;
    // NOP
label_219a4c:
    // 0x219a4c: 0x0  nop
    ctx->pc = 0x219a4cu;
    // NOP
label_219a50:
    // 0x219a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_219a54:
    // 0x219a54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_219a58:
    // 0x219a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_219a5c:
    // 0x219a5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x219a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_219a60:
    // 0x219a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219a64:
    // 0x219a64: 0x27839260  addiu       $v1, $gp, -0x6DA0
    ctx->pc = 0x219a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
label_219a68:
    // 0x219a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219a6c:
    // 0x219a6c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x219a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_219a70:
    // 0x219a70: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x219a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_219a74:
    // 0x219a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219a78:
    // 0x219a78: 0x8f829250  lw          $v0, -0x6DB0($gp)
    ctx->pc = 0x219a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939216)));
label_219a7c:
    // 0x219a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219a80:
    // 0x219a80: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x219a80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_219a84:
    // 0x219a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x219a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_219a88:
    // 0x219a88: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x219a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_219a8c:
    // 0x219a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x219a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_219a90:
    // 0x219a90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x219a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_219a94:
    // 0x219a94: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x219a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219a98:
    // 0x219a98: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x219a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_219a9c:
    // 0x219a9c: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x219a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_219aa0:
    // 0x219aa0: 0xa6020358  sh          $v0, 0x358($s0)
    ctx->pc = 0x219aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 856), (uint16_t)GPR_U32(ctx, 2));
label_219aa4:
    // 0x219aa4: 0xa6020328  sh          $v0, 0x328($s0)
    ctx->pc = 0x219aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 808), (uint16_t)GPR_U32(ctx, 2));
label_219aa8:
    // 0x219aa8: 0xa6020410  sh          $v0, 0x410($s0)
    ctx->pc = 0x219aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 2));
label_219aac:
    // 0x219aac: 0xa60203e0  sh          $v0, 0x3E0($s0)
    ctx->pc = 0x219aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 2));
label_219ab0:
    // 0x219ab0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x219ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219ab4:
    // 0x219ab4: 0x8f829258  lw          $v0, -0x6DA8($gp)
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939224)));
label_219ab8:
    // 0x219ab8: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_219abc:
    if (ctx->pc == 0x219ABCu) {
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219AC0u;
        goto label_219ac0;
    }
    ctx->pc = 0x219AB8u;
    {
        const bool branch_taken_0x219ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ab8) {
            ctx->pc = 0x219AC8u;
            goto label_219ac8;
        }
    }
    ctx->pc = 0x219AC0u;
label_219ac0:
    // 0x219ac0: 0x10000003  b           . + 4 + (0x3 << 2)
label_219ac4:
    if (ctx->pc == 0x219AC4u) {
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0xa0432283  sb          $v1, 0x2283($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219AC8u;
        goto label_219ac8;
    }
    ctx->pc = 0x219AC0u;
    {
        const bool branch_taken_0x219ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0xa0432283  sb          $v1, 0x2283($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ac0) {
            ctx->pc = 0x219AD0u;
            goto label_219ad0;
        }
    }
    ctx->pc = 0x219AC8u;
label_219ac8:
    // 0x219ac8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_219acc:
    // 0x219acc: 0xa0402283  sb          $zero, 0x2283($v0)
    ctx->pc = 0x219accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 0));
label_219ad0:
    // 0x219ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_219ad4:
    // 0x219ad4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_219ad8:
    // 0x219ad8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_219adc:
    if (ctx->pc == 0x219ADCu) {
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219AE0u;
        goto label_219ae0;
    }
    ctx->pc = 0x219AD8u;
    {
        const bool branch_taken_0x219ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ad8) {
            ctx->pc = 0x219AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ab4;
        }
    }
    ctx->pc = 0x219AE0u;
label_219ae0:
    // 0x219ae0: 0x8f889254  lw          $t0, -0x6DAC($gp)
    ctx->pc = 0x219ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939220)));
label_219ae4:
    // 0x219ae4: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_219ae8:
    // 0x219ae8: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x219ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_219aec:
    // 0x219aec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x219aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_219af0:
    // 0x219af0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_219af4:
    // 0x219af4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x219af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_219af8:
    // 0x219af8: 0x24a5e0f8  addiu       $a1, $a1, -0x1F08
    ctx->pc = 0x219af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959352));
label_219afc:
    // 0x219afc: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219b00:
    // 0x219b00: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_219b04:
    // 0x219b04: 0x0  nop
    ctx->pc = 0x219b04u;
    // NOP
label_219b08:
    // 0x219b08: 0x1010  mfhi        $v0
    ctx->pc = 0x219b08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_219b0c:
    // 0x219b0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_219b10:
    // 0x219b10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_219b14:
    // 0x219b14: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219b18:
    // 0x219b18: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219b1c:
    // 0x219b1c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_219b20:
    // 0x219b20: 0x0  nop
    ctx->pc = 0x219b20u;
    // NOP
label_219b24:
    // 0x219b24: 0x1010  mfhi        $v0
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_219b28:
    // 0x219b28: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x219b28u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_219b2c:
    // 0x219b2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_219b30:
    // 0x219b30: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_219b34:
    // 0x219b34: 0x3810  mfhi        $a3
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_219b38:
    // 0x219b38: 0xc08f20e  jal         func_23C838
label_219b3c:
    if (ctx->pc == 0x219B3Cu) {
        ctx->pc = 0x219B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B38u;
        // 0x219b3c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B40u;
        goto label_219b40;
    }
    ctx->pc = 0x219B38u;
    SET_GPR_U32(ctx, 31, 0x219B40u);
    ctx->pc = 0x219B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B38u;
    // 0x219b3c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x219B40u;
label_219b40:
    // 0x219b40: 0x26042490  addiu       $a0, $s0, 0x2490
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
label_219b44:
    // 0x219b44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x219b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_219b48:
    // 0x219b48: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x219b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_219b4c:
    // 0x219b4c: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x219b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_219b50:
    // 0x219b50: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219b54:
    // 0x219b54: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x219b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_219b58:
    // 0x219b58: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219b5c:
    // 0x219b5c: 0xc0708ac  jal         func_1C22B0
label_219b60:
    if (ctx->pc == 0x219B60u) {
        ctx->pc = 0x219B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B5Cu;
        // 0x219b60: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B64u;
        goto label_219b64;
    }
    ctx->pc = 0x219B5Cu;
    SET_GPR_U32(ctx, 31, 0x219B64u);
    ctx->pc = 0x219B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B5Cu;
    // 0x219b60: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x219B64u;
label_219b64:
    // 0x219b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219b68:
    // 0x219b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219b6c:
    // 0x219b6c: 0x2406027b  addiu       $a2, $zero, 0x27B
    ctx->pc = 0x219b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
label_219b70:
    // 0x219b70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219b74:
    // 0x219b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219b78:
    // 0x219b78: 0xc066c72  jal         func_19B1C8
label_219b7c:
    if (ctx->pc == 0x219B7Cu) {
        ctx->pc = 0x219B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B78u;
        // 0x219b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B80u;
        goto label_219b80;
    }
    ctx->pc = 0x219B78u;
    SET_GPR_U32(ctx, 31, 0x219B80u);
    ctx->pc = 0x219B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B78u;
    // 0x219b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x219B80u;
label_219b80:
    // 0x219b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219b84:
    // 0x219b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219b88:
    // 0x219b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219b8c:
    // 0x219b8c: 0x3e00008  jr          $ra
label_219b90:
    if (ctx->pc == 0x219B90u) {
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B94u;
        goto label_219b94;
    }
    ctx->pc = 0x219B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219B94u;
label_219b94:
    // 0x219b94: 0x0  nop
    ctx->pc = 0x219b94u;
    // NOP
label_219b98:
    // 0x219b98: 0x0  nop
    ctx->pc = 0x219b98u;
    // NOP
label_219b9c:
    // 0x219b9c: 0x0  nop
    ctx->pc = 0x219b9cu;
    // NOP
label_219ba0:
    // 0x219ba0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_219ba4:
    if (ctx->pc == 0x219BA4u) {
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BA8u;
        goto label_219ba8;
    }
    ctx->pc = 0x219BA0u;
    {
        const bool branch_taken_0x219ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba0) {
            ctx->pc = 0x219BC8u;
            goto label_219bc8;
        }
    }
    ctx->pc = 0x219BA8u;
label_219ba8:
    // 0x219ba8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
label_219bac:
    if (ctx->pc == 0x219BACu) {
        ctx->pc = 0x219BB0u;
        goto label_219bb0;
    }
    ctx->pc = 0x219BA8u;
    {
        const bool branch_taken_0x219ba8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x219ba8) {
            ctx->pc = 0x219BB8u;
            goto label_219bb8;
        }
    }
    ctx->pc = 0x219BB0u;
label_219bb0:
    // 0x219bb0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_219bb4:
    if (ctx->pc == 0x219BB4u) {
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB0u;
        // 0x219bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BB8u;
        goto label_219bb8;
    }
    ctx->pc = 0x219BB0u;
    {
        const bool branch_taken_0x219bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB0u;
        // 0x219bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BB8u;
label_219bb8:
    // 0x219bb8: 0x481006a  bgez        $a0, . + 4 + (0x6A << 2)
label_219bbc:
    if (ctx->pc == 0x219BBCu) {
        ctx->pc = 0x219BC0u;
        goto label_219bc0;
    }
    ctx->pc = 0x219BB8u;
    {
        const bool branch_taken_0x219bb8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x219bb8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BC0u;
label_219bc0:
    // 0x219bc0: 0x10000068  b           . + 4 + (0x68 << 2)
label_219bc4:
    if (ctx->pc == 0x219BC4u) {
        ctx->pc = 0x219BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BC0u;
        // 0x219bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BC8u;
        goto label_219bc8;
    }
    ctx->pc = 0x219BC0u;
    {
        const bool branch_taken_0x219bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BC0u;
        // 0x219bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bc0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BC8u;
label_219bc8:
    // 0x219bc8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_219bcc:
    if (ctx->pc == 0x219BCCu) {
        ctx->pc = 0x219BD0u;
        goto label_219bd0;
    }
    ctx->pc = 0x219BC8u;
    {
        const bool branch_taken_0x219bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x219bc8) {
            ctx->pc = 0x219BF0u;
            goto label_219bf0;
        }
    }
    ctx->pc = 0x219BD0u;
label_219bd0:
    // 0x219bd0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_219bd4:
    if (ctx->pc == 0x219BD4u) {
        ctx->pc = 0x219BD8u;
        goto label_219bd8;
    }
    ctx->pc = 0x219BD0u;
    {
        const bool branch_taken_0x219bd0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x219bd0) {
            ctx->pc = 0x219BE0u;
            goto label_219be0;
        }
    }
    ctx->pc = 0x219BD8u;
label_219bd8:
    // 0x219bd8: 0x10000062  b           . + 4 + (0x62 << 2)
label_219bdc:
    if (ctx->pc == 0x219BDCu) {
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BE0u;
        goto label_219be0;
    }
    ctx->pc = 0x219BD8u;
    {
        const bool branch_taken_0x219bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bd8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BE0u;
label_219be0:
    // 0x219be0: 0x4a10060  bgez        $a1, . + 4 + (0x60 << 2)
label_219be4:
    if (ctx->pc == 0x219BE4u) {
        ctx->pc = 0x219BE8u;
        goto label_219be8;
    }
    ctx->pc = 0x219BE0u;
    {
        const bool branch_taken_0x219be0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x219be0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BE8u;
label_219be8:
    // 0x219be8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_219bec:
    if (ctx->pc == 0x219BECu) {
        ctx->pc = 0x219BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE8u;
        // 0x219bec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BF0u;
        goto label_219bf0;
    }
    ctx->pc = 0x219BE8u;
    {
        const bool branch_taken_0x219be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE8u;
        // 0x219bec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219be8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BF0u;
label_219bf0:
    // 0x219bf0: 0x18a0002f  blez        $a1, . + 4 + (0x2F << 2)
label_219bf4:
    if (ctx->pc == 0x219BF4u) {
        ctx->pc = 0x219BF8u;
        goto label_219bf8;
    }
    ctx->pc = 0x219BF0u;
    {
        const bool branch_taken_0x219bf0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x219bf0) {
            ctx->pc = 0x219CB0u;
            goto label_219cb0;
        }
    }
    ctx->pc = 0x219BF8u;
label_219bf8:
    // 0x219bf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219bfc:
    // 0x219bfc: 0x3c02c01a  lui         $v0, 0xC01A
    ctx->pc = 0x219bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49178 << 16));
label_219c00:
    // 0x219c00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219c00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c04:
    // 0x219c04: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219c08:
    // 0x219c08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_219c0c:
    // 0x219c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_219c10:
    // 0x219c10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x219c10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_219c14:
    // 0x219c14: 0x0  nop
    ctx->pc = 0x219c14u;
    // NOP
label_219c18:
    // 0x219c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c1c:
    // 0x219c1c: 0x0  nop
    ctx->pc = 0x219c1cu;
    // NOP
label_219c20:
    // 0x219c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c24:
    // 0x219c24: 0x0  nop
    ctx->pc = 0x219c24u;
    // NOP
label_219c28:
    // 0x219c28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c2c:
    if (ctx->pc == 0x219C2Cu) {
        ctx->pc = 0x219C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C28u;
        // 0x219c2c: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C30u;
        goto label_219c30;
    }
    ctx->pc = 0x219C28u;
    {
        const bool branch_taken_0x219c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C28u;
        // 0x219c2c: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c28) {
            ctx->pc = 0x219C38u;
            goto label_219c38;
        }
    }
    ctx->pc = 0x219C30u;
label_219c30:
    // 0x219c30: 0x1000004c  b           . + 4 + (0x4C << 2)
label_219c34:
    if (ctx->pc == 0x219C34u) {
        ctx->pc = 0x219C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C30u;
        // 0x219c34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C38u;
        goto label_219c38;
    }
    ctx->pc = 0x219C30u;
    {
        const bool branch_taken_0x219c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C30u;
        // 0x219c34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c30) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C38u;
label_219c38:
    // 0x219c38: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219c3c:
    // 0x219c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c40:
    // 0x219c40: 0x0  nop
    ctx->pc = 0x219c40u;
    // NOP
label_219c44:
    // 0x219c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c48:
    // 0x219c48: 0x0  nop
    ctx->pc = 0x219c48u;
    // NOP
label_219c4c:
    // 0x219c4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c50:
    if (ctx->pc == 0x219C50u) {
        ctx->pc = 0x219C54u;
        goto label_219c54;
    }
    ctx->pc = 0x219C4Cu;
    {
        const bool branch_taken_0x219c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c4c) {
            ctx->pc = 0x219C5Cu;
            goto label_219c5c;
        }
    }
    ctx->pc = 0x219C54u;
label_219c54:
    // 0x219c54: 0x10000043  b           . + 4 + (0x43 << 2)
label_219c58:
    if (ctx->pc == 0x219C58u) {
        ctx->pc = 0x219C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C54u;
        // 0x219c58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C5Cu;
        goto label_219c5c;
    }
    ctx->pc = 0x219C54u;
    {
        const bool branch_taken_0x219c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C54u;
        // 0x219c58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c54) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C5Cu;
label_219c5c:
    // 0x219c5c: 0x3c023ed4  lui         $v0, 0x3ED4
    ctx->pc = 0x219c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16084 << 16));
label_219c60:
    // 0x219c60: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219c64:
    // 0x219c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c68:
    // 0x219c68: 0x0  nop
    ctx->pc = 0x219c68u;
    // NOP
label_219c6c:
    // 0x219c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c70:
    // 0x219c70: 0x0  nop
    ctx->pc = 0x219c70u;
    // NOP
label_219c74:
    // 0x219c74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c78:
    if (ctx->pc == 0x219C78u) {
        ctx->pc = 0x219C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C74u;
        // 0x219c78: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C7Cu;
        goto label_219c7c;
    }
    ctx->pc = 0x219C74u;
    {
        const bool branch_taken_0x219c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C74u;
        // 0x219c78: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c74) {
            ctx->pc = 0x219C84u;
            goto label_219c84;
        }
    }
    ctx->pc = 0x219C7Cu;
label_219c7c:
    // 0x219c7c: 0x10000039  b           . + 4 + (0x39 << 2)
label_219c80:
    if (ctx->pc == 0x219C80u) {
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C84u;
        goto label_219c84;
    }
    ctx->pc = 0x219C7Cu;
    {
        const bool branch_taken_0x219c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c7c) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C84u;
label_219c84:
    // 0x219c84: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219c88:
    // 0x219c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c8c:
    // 0x219c8c: 0x0  nop
    ctx->pc = 0x219c8cu;
    // NOP
label_219c90:
    // 0x219c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c94:
    // 0x219c94: 0x0  nop
    ctx->pc = 0x219c94u;
    // NOP
label_219c98:
    // 0x219c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c9c:
    if (ctx->pc == 0x219C9Cu) {
        ctx->pc = 0x219CA0u;
        goto label_219ca0;
    }
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219CA8u;
            goto label_219ca8;
        }
    }
    ctx->pc = 0x219CA0u;
label_219ca0:
    // 0x219ca0: 0x10000030  b           . + 4 + (0x30 << 2)
label_219ca4:
    if (ctx->pc == 0x219CA4u) {
        ctx->pc = 0x219CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA0u;
        // 0x219ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CA8u;
        goto label_219ca8;
    }
    ctx->pc = 0x219CA0u;
    {
        const bool branch_taken_0x219ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA0u;
        // 0x219ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CA8u;
label_219ca8:
    // 0x219ca8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_219cac:
    if (ctx->pc == 0x219CACu) {
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA8u;
        // 0x219cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CB0u;
        goto label_219cb0;
    }
    ctx->pc = 0x219CA8u;
    {
        const bool branch_taken_0x219ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA8u;
        // 0x219cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CB0u;
label_219cb0:
    // 0x219cb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219cb4:
    // 0x219cb4: 0x3c02c01a  lui         $v0, 0xC01A
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49178 << 16));
label_219cb8:
    // 0x219cb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219cb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219cbc:
    // 0x219cbc: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219cc0:
    // 0x219cc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_219cc4:
    // 0x219cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_219cc8:
    // 0x219cc8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x219cc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_219ccc:
    // 0x219ccc: 0x0  nop
    ctx->pc = 0x219cccu;
    // NOP
label_219cd0:
    // 0x219cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219cd4:
    // 0x219cd4: 0x0  nop
    ctx->pc = 0x219cd4u;
    // NOP
label_219cd8:
    // 0x219cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219cdc:
    // 0x219cdc: 0x0  nop
    ctx->pc = 0x219cdcu;
    // NOP
label_219ce0:
    // 0x219ce0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219ce4:
    if (ctx->pc == 0x219CE4u) {
        ctx->pc = 0x219CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE0u;
        // 0x219ce4: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CE8u;
        goto label_219ce8;
    }
    ctx->pc = 0x219CE0u;
    {
        const bool branch_taken_0x219ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE0u;
        // 0x219ce4: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce0) {
            ctx->pc = 0x219CF0u;
            goto label_219cf0;
        }
    }
    ctx->pc = 0x219CE8u;
label_219ce8:
    // 0x219ce8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_219cec:
    if (ctx->pc == 0x219CECu) {
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CF0u;
        goto label_219cf0;
    }
    ctx->pc = 0x219CE8u;
    {
        const bool branch_taken_0x219ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219cf4:
    // 0x219cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219cf8:
    // 0x219cf8: 0x0  nop
    ctx->pc = 0x219cf8u;
    // NOP
label_219cfc:
    // 0x219cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219d00:
    // 0x219d00: 0x0  nop
    ctx->pc = 0x219d00u;
    // NOP
label_219d04:
    // 0x219d04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219d08:
    if (ctx->pc == 0x219D08u) {
        ctx->pc = 0x219D0Cu;
        goto label_219d0c;
    }
    ctx->pc = 0x219D04u;
    {
        const bool branch_taken_0x219d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219d04) {
            ctx->pc = 0x219D14u;
            goto label_219d14;
        }
    }
    ctx->pc = 0x219D0Cu;
label_219d0c:
    // 0x219d0c: 0x10000015  b           . + 4 + (0x15 << 2)
label_219d10:
    if (ctx->pc == 0x219D10u) {
        ctx->pc = 0x219D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D0Cu;
        // 0x219d10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D14u;
        goto label_219d14;
    }
    ctx->pc = 0x219D0Cu;
    {
        const bool branch_taken_0x219d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D0Cu;
        // 0x219d10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d0c) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D14u;
label_219d14:
    // 0x219d14: 0x3c023ed4  lui         $v0, 0x3ED4
    ctx->pc = 0x219d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16084 << 16));
label_219d18:
    // 0x219d18: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219d1c:
    // 0x219d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219d20:
    // 0x219d20: 0x0  nop
    ctx->pc = 0x219d20u;
    // NOP
label_219d24:
    // 0x219d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219d28:
    // 0x219d28: 0x0  nop
    ctx->pc = 0x219d28u;
    // NOP
label_219d2c:
    // 0x219d2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219d30:
    if (ctx->pc == 0x219D30u) {
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D34u;
        goto label_219d34;
    }
    ctx->pc = 0x219D2Cu;
    {
        const bool branch_taken_0x219d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d2c) {
            ctx->pc = 0x219D3Cu;
            goto label_219d3c;
        }
    }
    ctx->pc = 0x219D34u;
label_219d34:
    // 0x219d34: 0x1000000b  b           . + 4 + (0xB << 2)
label_219d38:
    if (ctx->pc == 0x219D38u) {
        ctx->pc = 0x219D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D34u;
        // 0x219d38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D3Cu;
        goto label_219d3c;
    }
    ctx->pc = 0x219D34u;
    {
        const bool branch_taken_0x219d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D34u;
        // 0x219d38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d34) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D3Cu;
label_219d3c:
    // 0x219d3c: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219d40:
    // 0x219d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219d44:
    // 0x219d44: 0x0  nop
    ctx->pc = 0x219d44u;
    // NOP
label_219d48:
    // 0x219d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219d4c:
    // 0x219d4c: 0x0  nop
    ctx->pc = 0x219d4cu;
    // NOP
label_219d50:
    // 0x219d50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219d54:
    if (ctx->pc == 0x219D54u) {
        ctx->pc = 0x219D58u;
        goto label_219d58;
    }
    ctx->pc = 0x219D50u;
    {
        const bool branch_taken_0x219d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219d50) {
            ctx->pc = 0x219D60u;
            goto label_219d60;
        }
    }
    ctx->pc = 0x219D58u;
label_219d58:
    // 0x219d58: 0x10000002  b           . + 4 + (0x2 << 2)
label_219d5c:
    if (ctx->pc == 0x219D5Cu) {
        ctx->pc = 0x219D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D58u;
        // 0x219d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D60u;
        goto label_219d60;
    }
    ctx->pc = 0x219D58u;
    {
        const bool branch_taken_0x219d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D58u;
        // 0x219d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d58) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D60u;
label_219d60:
    // 0x219d60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_219d64:
    // 0x219d64: 0x3e00008  jr          $ra
label_219d68:
    if (ctx->pc == 0x219D68u) {
        ctx->pc = 0x219D6Cu;
        goto label_219d6c;
    }
    ctx->pc = 0x219D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219D6Cu;
label_219d6c:
    // 0x219d6c: 0x0  nop
    ctx->pc = 0x219d6cu;
    // NOP
label_219d70:
    // 0x219d70: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x219d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_219d74:
    // 0x219d74: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_219d78:
    // 0x219d78: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x219d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_219d7c:
    // 0x219d7c: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_219d80:
    // 0x219d80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x219d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_219d84:
    // 0x219d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d88:
    // 0x219d88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_219d8c:
    // 0x219d8c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_219d90:
    // 0x219d90: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_219d94:
    // 0x219d94: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_219d98:
    // 0x219d98: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_219d9c:
    // 0x219d9c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x219d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_219da0:
    // 0x219da0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_219da4:
    // 0x219da4: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_219da8:
    // 0x219da8: 0x346b8889  ori         $t3, $v1, 0x8889
    ctx->pc = 0x219da8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_219dac:
    // 0x219dac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_219db0:
    // 0x219db0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_219db4:
    // 0x219db4: 0x8ccc022c  lw          $t4, 0x22C($a2)
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 556)));
label_219db8:
    // 0x219db8: 0x8cc90228  lw          $t1, 0x228($a2)
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 552)));
label_219dbc:
    // 0x219dbc: 0x90c80220  lbu         $t0, 0x220($a2)
    ctx->pc = 0x219dbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 544)));
label_219dc0:
    // 0x219dc0: 0x16c0018  mult        $zero, $t3, $t4
    ctx->pc = 0x219dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219dc4:
    // 0x219dc4: 0xc57c2  srl         $t2, $t4, 31
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_219dc8:
    // 0x219dc8: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_219dcc:
    // 0x219dcc: 0x3010  mfhi        $a2
    ctx->pc = 0x219dccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_219dd0:
    // 0x219dd0: 0x1690018  mult        $zero, $t3, $t1
    ctx->pc = 0x219dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219dd4:
    // 0x219dd4: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_219dd8:
    // 0x219dd8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x219dd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_219ddc:
    // 0x219ddc: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_219de0:
    // 0x219de0: 0x3010  mfhi        $a2
    ctx->pc = 0x219de0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_219de4:
    // 0x219de4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_219de8:
    // 0x219de8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_219dec:
    // 0x219dec: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
label_219df0:
    if (ctx->pc == 0x219DF0u) {
        ctx->pc = 0x219DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DECu;
        // 0x219df0: 0xc74821  addu        $t1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DF4u;
        goto label_219df4;
    }
    ctx->pc = 0x219DECu;
    {
        const bool branch_taken_0x219dec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x219DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DECu;
        // 0x219df0: 0xc74821  addu        $t1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dec) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219DF4u;
label_219df4:
    // 0x219df4: 0x10000020  b           . + 4 + (0x20 << 2)
label_219df8:
    if (ctx->pc == 0x219DF8u) {
        ctx->pc = 0x219DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF4u;
        // 0x219df8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DFCu;
        goto label_219dfc;
    }
    ctx->pc = 0x219DF4u;
    {
        const bool branch_taken_0x219df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF4u;
        // 0x219df8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219df4) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219DFCu;
label_219dfc:
    // 0x219dfc: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
label_219e00:
    if (ctx->pc == 0x219E00u) {
        ctx->pc = 0x219E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DFCu;
        // 0x219e00: 0x51a00  sll         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E04u;
        goto label_219e04;
    }
    ctx->pc = 0x219DFCu;
    {
        const bool branch_taken_0x219dfc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DFCu;
        // 0x219e00: 0x51a00  sll         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dfc) {
            ctx->pc = 0x219E0Cu;
            goto label_219e0c;
        }
    }
    ctx->pc = 0x219E04u;
label_219e04:
    // 0x219e04: 0x1000001c  b           . + 4 + (0x1C << 2)
label_219e08:
    if (ctx->pc == 0x219E08u) {
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E0Cu;
        goto label_219e0c;
    }
    ctx->pc = 0x219E04u;
    {
        const bool branch_taken_0x219e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e04) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E0Cu;
label_219e0c:
    // 0x219e0c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x219e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_219e10:
    // 0x219e10: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_219e14:
    // 0x219e14: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_219e18:
    // 0x219e18: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_219e1c:
    // 0x219e1c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_219e20:
    // 0x219e20: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_219e24:
    // 0x219e24: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x219e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_219e28:
    // 0x219e28: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x219e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_219e2c:
    // 0x219e2c: 0x8a082a  slt         $at, $a0, $t2
    ctx->pc = 0x219e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_219e30:
    // 0x219e30: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x219e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_219e34:
    // 0x219e34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x219e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_219e38:
    // 0x219e38: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x219e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_219e3c:
    // 0x219e3c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_219e40:
    if (ctx->pc == 0x219E40u) {
        ctx->pc = 0x219E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E3Cu;
        // 0x219e40: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E44u;
        goto label_219e44;
    }
    ctx->pc = 0x219E3Cu;
    {
        const bool branch_taken_0x219e3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E3Cu;
        // 0x219e40: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e3c) {
            ctx->pc = 0x219E68u;
            goto label_219e68;
        }
    }
    ctx->pc = 0x219E44u;
label_219e44:
    // 0x219e44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219e48:
    // 0x219e48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_219e4c:
    // 0x219e4c: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x219e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
label_219e50:
    // 0x219e50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_219e54:
    if (ctx->pc == 0x219E54u) {
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E50u;
        // 0x219e54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E58u;
        goto label_219e58;
    }
    ctx->pc = 0x219E50u;
    {
        const bool branch_taken_0x219e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E50u;
        // 0x219e54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e50) {
            ctx->pc = 0x219E60u;
            goto label_219e60;
        }
    }
    ctx->pc = 0x219E58u;
label_219e58:
    // 0x219e58: 0x10000007  b           . + 4 + (0x7 << 2)
label_219e5c:
    if (ctx->pc == 0x219E5Cu) {
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E58u;
        // 0x219e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E60u;
        goto label_219e60;
    }
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E58u;
        // 0x219e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e58) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0x10000005  b           . + 4 + (0x5 << 2)
label_219e64:
    if (ctx->pc == 0x219E64u) {
        ctx->pc = 0x219E68u;
        goto label_219e68;
    }
    ctx->pc = 0x219E60u;
    {
        const bool branch_taken_0x219e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e60) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E68u;
label_219e68:
    // 0x219e68: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x219e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_219e6c:
    // 0x219e6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_219e70:
    if (ctx->pc == 0x219E70u) {
        ctx->pc = 0x219E74u;
        goto label_219e74;
    }
    ctx->pc = 0x219E6Cu;
    {
        const bool branch_taken_0x219e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e6c) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E74u;
label_219e74:
    // 0x219e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219e78:
    // 0x219e78: 0x3e00008  jr          $ra
label_219e7c:
    if (ctx->pc == 0x219E7Cu) {
        ctx->pc = 0x219E80u;
        goto label_219e80;
    }
    ctx->pc = 0x219E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219E80u;
label_219e80:
    // 0x219e80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x219e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_219e84:
    // 0x219e84: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_219e88:
    // 0x219e88: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x219e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_219e8c:
    // 0x219e8c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_219e90:
    if (ctx->pc == 0x219E90u) {
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E94u;
        goto label_219e94;
    }
    ctx->pc = 0x219E8Cu;
    {
        const bool branch_taken_0x219e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e8c) {
            ctx->pc = 0x219EB4u;
            goto label_219eb4;
        }
    }
    ctx->pc = 0x219E94u;
label_219e94:
    // 0x219e94: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x219e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_219e98:
    // 0x219e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219e9c:
    // 0x219e9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_219ea0:
    if (ctx->pc == 0x219EA0u) {
        ctx->pc = 0x219EA4u;
        goto label_219ea4;
    }
    ctx->pc = 0x219E9Cu;
    {
        const bool branch_taken_0x219e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219e9c) {
            ctx->pc = 0x219EACu;
            goto label_219eac;
        }
    }
    ctx->pc = 0x219EA4u;
label_219ea4:
    // 0x219ea4: 0x10000003  b           . + 4 + (0x3 << 2)
label_219ea8:
    if (ctx->pc == 0x219EA8u) {
        ctx->pc = 0x219EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA4u;
        // 0x219ea8: 0x8f8292bc  lw          $v0, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EACu;
        goto label_219eac;
    }
    ctx->pc = 0x219EA4u;
    {
        const bool branch_taken_0x219ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA4u;
        // 0x219ea8: 0x8f8292bc  lw          $v0, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ea4) {
            ctx->pc = 0x219EB4u;
            goto label_219eb4;
        }
    }
    ctx->pc = 0x219EACu;
label_219eac:
    // 0x219eac: 0x8f8292bc  lw          $v0, -0x6D44($gp)
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
label_219eb0:
    // 0x219eb0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_219eb4:
    // 0x219eb4: 0x3e00008  jr          $ra
label_219eb8:
    if (ctx->pc == 0x219EB8u) {
        ctx->pc = 0x219EBCu;
        goto label_219ebc;
    }
    ctx->pc = 0x219EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219EBCu;
label_219ebc:
    // 0x219ebc: 0x0  nop
    ctx->pc = 0x219ebcu;
    // NOP
label_219ec0:
    // 0x219ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_219ec4:
    // 0x219ec4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x219ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_219ec8:
    // 0x219ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_219ecc:
    // 0x219ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219ed0:
    // 0x219ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219ed4:
    // 0x219ed4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219ed8:
    // 0x219ed8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_219edc:
    if (ctx->pc == 0x219EDCu) {
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EE0u;
        goto label_219ee0;
    }
    ctx->pc = 0x219ED8u;
    {
        const bool branch_taken_0x219ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ed8) {
            ctx->pc = 0x219EECu;
            goto label_219eec;
        }
    }
    ctx->pc = 0x219EE0u;
label_219ee0:
    // 0x219ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219ee4:
    // 0x219ee4: 0x10000003  b           . + 4 + (0x3 << 2)
label_219ee8:
    if (ctx->pc == 0x219EE8u) {
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0xaf8292b8  sw          $v0, -0x6D48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EECu;
        goto label_219eec;
    }
    ctx->pc = 0x219EE4u;
    {
        const bool branch_taken_0x219ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0xaf8292b8  sw          $v0, -0x6D48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ee4) {
            ctx->pc = 0x219EF4u;
            goto label_219ef4;
        }
    }
    ctx->pc = 0x219EECu;
label_219eec:
    // 0x219eec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219ef0:
    // 0x219ef0: 0xaf8292b8  sw          $v0, -0x6D48($gp)
    ctx->pc = 0x219ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
label_219ef4:
    // 0x219ef4: 0xc08683c  jal         func_21A0F0
label_219ef8:
    if (ctx->pc == 0x219EF8u) {
        ctx->pc = 0x219EFCu;
        goto label_219efc;
    }
    ctx->pc = 0x219EF4u;
    SET_GPR_U32(ctx, 31, 0x219EFCu);
    ctx->pc = 0x21A0F0u;
    { ctx->pc = 0x21a0f0; return; }
    ctx->pc = 0x219EFCu;
label_219efc:
    // 0x219efc: 0xc086920  jal         func_21A480
label_219f00:
    if (ctx->pc == 0x219F00u) {
        ctx->pc = 0x219F04u;
        goto label_219f04;
    }
    ctx->pc = 0x219EFCu;
    SET_GPR_U32(ctx, 31, 0x219F04u);
    ctx->pc = 0x21A480u;
    { ctx->pc = 0x21a480; return; }
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x8f8492bc  lw          $a0, -0x6D44($gp)
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
label_219f08:
    // 0x219f08: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x219f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_219f0c:
    // 0x219f0c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
label_219f10:
    if (ctx->pc == 0x219F10u) {
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F14u;
        goto label_219f14;
    }
    ctx->pc = 0x219F0Cu;
    {
        const bool branch_taken_0x219f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f0c) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F14u;
label_219f14:
    // 0x219f14: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_219f18:
    if (ctx->pc == 0x219F18u) {
        ctx->pc = 0x219F1Cu;
        goto label_219f1c;
    }
    ctx->pc = 0x219F14u;
    {
        const bool branch_taken_0x219f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219f14) {
            ctx->pc = 0x219F40u;
            goto label_219f40;
        }
    }
    ctx->pc = 0x219F1Cu;
label_219f1c:
    // 0x219f1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_219f20:
    if (ctx->pc == 0x219F20u) {
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F1Cu;
        // 0x219f20: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F24u;
        goto label_219f24;
    }
    ctx->pc = 0x219F1Cu;
    {
        const bool branch_taken_0x219f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F1Cu;
        // 0x219f20: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f1c) {
            ctx->pc = 0x219F34u;
            goto label_219f34;
        }
    }
    ctx->pc = 0x219F24u;
label_219f24:
    // 0x219f24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x219f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_219f28:
    // 0x219f28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f2c:
    // 0x219f2c: 0x10000018  b           . + 4 + (0x18 << 2)
label_219f30:
    if (ctx->pc == 0x219F30u) {
        ctx->pc = 0x219F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F2Cu;
        // 0x219f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F34u;
        goto label_219f34;
    }
    ctx->pc = 0x219F2Cu;
    {
        const bool branch_taken_0x219f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F2Cu;
        // 0x219f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f2c) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F34u;
label_219f34:
    // 0x219f34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f38:
    // 0x219f38: 0x10000015  b           . + 4 + (0x15 << 2)
label_219f3c:
    if (ctx->pc == 0x219F3Cu) {
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F40u;
        goto label_219f40;
    }
    ctx->pc = 0x219F38u;
    {
        const bool branch_taken_0x219f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f38) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F40u;
label_219f40:
    // 0x219f40: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_219f44:
    if (ctx->pc == 0x219F44u) {
        ctx->pc = 0x219F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F40u;
        // 0x219f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F48u;
        goto label_219f48;
    }
    ctx->pc = 0x219F40u;
    {
        const bool branch_taken_0x219f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F40u;
        // 0x219f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f40) {
            ctx->pc = 0x219F58u;
            goto label_219f58;
        }
    }
    ctx->pc = 0x219F48u;
label_219f48:
    // 0x219f48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x219f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_219f4c:
    // 0x219f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f50:
    // 0x219f50: 0x1000000f  b           . + 4 + (0xF << 2)
label_219f54:
    if (ctx->pc == 0x219F54u) {
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F58u;
        goto label_219f58;
    }
    ctx->pc = 0x219F50u;
    {
        const bool branch_taken_0x219f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f50) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F58u;
label_219f58:
    // 0x219f58: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_219f5c:
    if (ctx->pc == 0x219F5Cu) {
        ctx->pc = 0x219F60u;
        goto label_219f60;
    }
    ctx->pc = 0x219F58u;
    {
        const bool branch_taken_0x219f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x219f58) {
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F60u;
label_219f60:
    // 0x219f60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_219f64:
    // 0x219f64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f68:
    // 0x219f68: 0x10000009  b           . + 4 + (0x9 << 2)
label_219f6c:
    if (ctx->pc == 0x219F6Cu) {
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F70u;
        goto label_219f70;
    }
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F70u;
label_219f70:
    // 0x219f70: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_219f74:
    if (ctx->pc == 0x219F74u) {
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F78u;
        goto label_219f78;
    }
    ctx->pc = 0x219F70u;
    {
        const bool branch_taken_0x219f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f70) {
            ctx->pc = 0x219F88u;
            goto label_219f88;
        }
    }
    ctx->pc = 0x219F78u;
label_219f78:
    // 0x219f78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x219f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_219f7c:
    // 0x219f7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f80:
    // 0x219f80: 0x10000003  b           . + 4 + (0x3 << 2)
label_219f84:
    if (ctx->pc == 0x219F84u) {
        ctx->pc = 0x219F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F80u;
        // 0x219f84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F88u;
        goto label_219f88;
    }
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F80u;
        // 0x219f84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f80) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F88u;
label_219f88:
    // 0x219f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f8c:
    // 0x219f8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x219f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_219f90:
    // 0x219f90: 0xc060258  jal         func_180960
label_219f94:
    if (ctx->pc == 0x219F94u) {
        ctx->pc = 0x219F98u;
        goto label_219f98;
    }
    ctx->pc = 0x219F90u;
    SET_GPR_U32(ctx, 31, 0x219F98u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x219F98u;
label_219f98:
    // 0x219f98: 0xc060258  jal         func_180960
label_219f9c:
    if (ctx->pc == 0x219F9Cu) {
        ctx->pc = 0x219FA0u;
        goto label_219fa0;
    }
    ctx->pc = 0x219F98u;
    SET_GPR_U32(ctx, 31, 0x219FA0u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x219FA0u;
label_219fa0:
    // 0x219fa0: 0xc0867f4  jal         func_219FD0
label_219fa4:
    if (ctx->pc == 0x219FA4u) {
        ctx->pc = 0x219FA8u;
        goto label_219fa8;
    }
    ctx->pc = 0x219FA0u;
    SET_GPR_U32(ctx, 31, 0x219FA8u);
    ctx->pc = 0x219FD0u;
    goto label_219fd0;
    ctx->pc = 0x219FA8u;
label_219fa8:
    // 0x219fa8: 0x8f8492c0  lw          $a0, -0x6D40($gp)
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
label_219fac:
    // 0x219fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219fb0:
    // 0x219fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219fb4:
    // 0x219fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219fb8:
    // 0x219fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219fbc:
    // 0x219fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219fc0:
    // 0x219fc0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x219fc0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_219fc4:
    // 0x219fc4: 0x3e00008  jr          $ra
label_219fc8:
    if (ctx->pc == 0x219FC8u) {
        ctx->pc = 0x219FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FC4u;
        // 0x219fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FCCu;
        goto label_219fcc;
    }
    ctx->pc = 0x219FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FC4u;
        // 0x219fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219FCCu;
label_219fcc:
    // 0x219fcc: 0x0  nop
    ctx->pc = 0x219fccu;
    // NOP
label_219fd0:
    // 0x219fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_219fd4:
    // 0x219fd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x219fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_219fd8:
    // 0x219fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_219fdc:
    // 0x219fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x219fe0u;
    return;
}
