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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x254708u: goto label_254708;
        case 0x25470cu: goto label_25470c;
        case 0x254710u: goto label_254710;
        case 0x254714u: goto label_254714;
        case 0x254718u: goto label_254718;
        case 0x25471cu: goto label_25471c;
        case 0x254720u: goto label_254720;
        case 0x254724u: goto label_254724;
        case 0x254728u: goto label_254728;
        case 0x25472cu: goto label_25472c;
        case 0x254730u: goto label_254730;
        case 0x254734u: goto label_254734;
        case 0x254738u: goto label_254738;
        case 0x25473cu: goto label_25473c;
        case 0x254740u: goto label_254740;
        case 0x254744u: goto label_254744;
        case 0x254748u: goto label_254748;
        case 0x25474cu: goto label_25474c;
        case 0x254750u: goto label_254750;
        case 0x254754u: goto label_254754;
        case 0x254758u: goto label_254758;
        case 0x25475cu: goto label_25475c;
        case 0x254760u: goto label_254760;
        case 0x254764u: goto label_254764;
        case 0x254768u: goto label_254768;
        case 0x25476cu: goto label_25476c;
        case 0x254770u: goto label_254770;
        case 0x254774u: goto label_254774;
        case 0x254778u: goto label_254778;
        case 0x25477cu: goto label_25477c;
        case 0x254780u: goto label_254780;
        case 0x254784u: goto label_254784;
        case 0x254788u: goto label_254788;
        case 0x25478cu: goto label_25478c;
        case 0x254790u: goto label_254790;
        case 0x254794u: goto label_254794;
        case 0x254798u: goto label_254798;
        case 0x25479cu: goto label_25479c;
        case 0x2547a0u: goto label_2547a0;
        case 0x2547a4u: goto label_2547a4;
        case 0x2547a8u: goto label_2547a8;
        case 0x2547acu: goto label_2547ac;
        case 0x2547b0u: goto label_2547b0;
        case 0x2547b4u: goto label_2547b4;
        case 0x2547b8u: goto label_2547b8;
        case 0x2547bcu: goto label_2547bc;
        case 0x2547c0u: goto label_2547c0;
        case 0x2547c4u: goto label_2547c4;
        case 0x2547c8u: goto label_2547c8;
        case 0x2547ccu: goto label_2547cc;
        case 0x2547d0u: goto label_2547d0;
        case 0x2547d4u: goto label_2547d4;
        case 0x2547d8u: goto label_2547d8;
        case 0x2547dcu: goto label_2547dc;
        case 0x2547e0u: goto label_2547e0;
        case 0x2547e4u: goto label_2547e4;
        case 0x2547e8u: goto label_2547e8;
        case 0x2547ecu: goto label_2547ec;
        case 0x2547f0u: goto label_2547f0;
        case 0x2547f4u: goto label_2547f4;
        case 0x2547f8u: goto label_2547f8;
        case 0x2547fcu: goto label_2547fc;
        case 0x254800u: goto label_254800;
        case 0x254804u: goto label_254804;
        case 0x254808u: goto label_254808;
        case 0x25480cu: goto label_25480c;
        case 0x254810u: goto label_254810;
        case 0x254814u: goto label_254814;
        case 0x254818u: goto label_254818;
        case 0x25481cu: goto label_25481c;
        case 0x254820u: goto label_254820;
        case 0x254824u: goto label_254824;
        case 0x254828u: goto label_254828;
        case 0x25482cu: goto label_25482c;
        case 0x254830u: goto label_254830;
        case 0x254834u: goto label_254834;
        case 0x254838u: goto label_254838;
        case 0x25483cu: goto label_25483c;
        case 0x254840u: goto label_254840;
        case 0x254844u: goto label_254844;
        case 0x254848u: goto label_254848;
        case 0x25484cu: goto label_25484c;
        case 0x254850u: goto label_254850;
        case 0x254854u: goto label_254854;
        case 0x254858u: goto label_254858;
        case 0x25485cu: goto label_25485c;
        case 0x254860u: goto label_254860;
        case 0x254864u: goto label_254864;
        case 0x254868u: goto label_254868;
        case 0x25486cu: goto label_25486c;
        case 0x254870u: goto label_254870;
        case 0x254874u: goto label_254874;
        case 0x254878u: goto label_254878;
        case 0x25487cu: goto label_25487c;
        case 0x254880u: goto label_254880;
        case 0x254884u: goto label_254884;
        case 0x254888u: goto label_254888;
        case 0x25488cu: goto label_25488c;
        case 0x254890u: goto label_254890;
        case 0x254894u: goto label_254894;
        case 0x254898u: goto label_254898;
        case 0x25489cu: goto label_25489c;
        case 0x2548a0u: goto label_2548a0;
        case 0x2548a4u: goto label_2548a4;
        case 0x2548a8u: goto label_2548a8;
        case 0x2548acu: goto label_2548ac;
        case 0x2548b0u: goto label_2548b0;
        case 0x2548b4u: goto label_2548b4;
        case 0x2548b8u: goto label_2548b8;
        case 0x2548bcu: goto label_2548bc;
        case 0x2548c0u: goto label_2548c0;
        case 0x2548c4u: goto label_2548c4;
        case 0x2548c8u: goto label_2548c8;
        case 0x2548ccu: goto label_2548cc;
        case 0x2548d0u: goto label_2548d0;
        case 0x2548d4u: goto label_2548d4;
        case 0x2548d8u: goto label_2548d8;
        case 0x2548dcu: goto label_2548dc;
        case 0x2548e0u: goto label_2548e0;
        case 0x2548e4u: goto label_2548e4;
        case 0x2548e8u: goto label_2548e8;
        case 0x2548ecu: goto label_2548ec;
        case 0x2548f0u: goto label_2548f0;
        case 0x2548f4u: goto label_2548f4;
        case 0x2548f8u: goto label_2548f8;
        case 0x2548fcu: goto label_2548fc;
        case 0x254900u: goto label_254900;
        case 0x254904u: goto label_254904;
        case 0x254908u: goto label_254908;
        case 0x25490cu: goto label_25490c;
        case 0x254910u: goto label_254910;
        case 0x254914u: goto label_254914;
        case 0x254918u: goto label_254918;
        case 0x25491cu: goto label_25491c;
        case 0x254920u: goto label_254920;
        case 0x254924u: goto label_254924;
        case 0x254928u: goto label_254928;
        case 0x25492cu: goto label_25492c;
        case 0x254930u: goto label_254930;
        case 0x254934u: goto label_254934;
        case 0x254938u: goto label_254938;
        case 0x25493cu: goto label_25493c;
        case 0x254940u: goto label_254940;
        case 0x254944u: goto label_254944;
        case 0x254948u: goto label_254948;
        case 0x25494cu: goto label_25494c;
        case 0x254950u: goto label_254950;
        case 0x254954u: goto label_254954;
        case 0x254958u: goto label_254958;
        case 0x25495cu: goto label_25495c;
        case 0x254960u: goto label_254960;
        case 0x254964u: goto label_254964;
        case 0x254968u: goto label_254968;
        case 0x25496cu: goto label_25496c;
        case 0x254970u: goto label_254970;
        case 0x254974u: goto label_254974;
        case 0x254978u: goto label_254978;
        case 0x25497cu: goto label_25497c;
        case 0x254980u: goto label_254980;
        case 0x254984u: goto label_254984;
        case 0x254988u: goto label_254988;
        case 0x25498cu: goto label_25498c;
        case 0x254990u: goto label_254990;
        case 0x254994u: goto label_254994;
        case 0x254998u: goto label_254998;
        case 0x25499cu: goto label_25499c;
        case 0x2549a0u: goto label_2549a0;
        case 0x2549a4u: goto label_2549a4;
        case 0x2549a8u: goto label_2549a8;
        case 0x2549acu: goto label_2549ac;
        case 0x2549b0u: goto label_2549b0;
        case 0x2549b4u: goto label_2549b4;
        case 0x2549b8u: goto label_2549b8;
        case 0x2549bcu: goto label_2549bc;
        case 0x2549c0u: goto label_2549c0;
        case 0x2549c4u: goto label_2549c4;
        case 0x2549c8u: goto label_2549c8;
        case 0x2549ccu: goto label_2549cc;
        case 0x2549d0u: goto label_2549d0;
        case 0x2549d4u: goto label_2549d4;
        case 0x2549d8u: goto label_2549d8;
        case 0x2549dcu: goto label_2549dc;
        case 0x2549e0u: goto label_2549e0;
        case 0x2549e4u: goto label_2549e4;
        case 0x2549e8u: goto label_2549e8;
        case 0x2549ecu: goto label_2549ec;
        case 0x2549f0u: goto label_2549f0;
        case 0x2549f4u: goto label_2549f4;
        case 0x2549f8u: goto label_2549f8;
        case 0x2549fcu: goto label_2549fc;
        case 0x254a00u: goto label_254a00;
        case 0x254a04u: goto label_254a04;
        case 0x254a08u: goto label_254a08;
        case 0x254a0cu: goto label_254a0c;
        case 0x254a10u: goto label_254a10;
        case 0x254a14u: goto label_254a14;
        case 0x254a18u: goto label_254a18;
        case 0x254a1cu: goto label_254a1c;
        case 0x254a20u: goto label_254a20;
        case 0x254a24u: goto label_254a24;
        case 0x254a28u: goto label_254a28;
        case 0x254a2cu: goto label_254a2c;
        case 0x254a30u: goto label_254a30;
        case 0x254a34u: goto label_254a34;
        case 0x254a38u: goto label_254a38;
        case 0x254a3cu: goto label_254a3c;
        case 0x254a40u: goto label_254a40;
        case 0x254a44u: goto label_254a44;
        case 0x254a48u: goto label_254a48;
        case 0x254a4cu: goto label_254a4c;
        case 0x254a50u: goto label_254a50;
        case 0x254a54u: goto label_254a54;
        case 0x254a58u: goto label_254a58;
        case 0x254a5cu: goto label_254a5c;
        case 0x254a60u: goto label_254a60;
        case 0x254a64u: goto label_254a64;
        case 0x254a68u: goto label_254a68;
        case 0x254a6cu: goto label_254a6c;
        case 0x254a70u: goto label_254a70;
        case 0x254a74u: goto label_254a74;
        case 0x254a78u: goto label_254a78;
        case 0x254a7cu: goto label_254a7c;
        case 0x254a80u: goto label_254a80;
        case 0x254a84u: goto label_254a84;
        case 0x254a88u: goto label_254a88;
        case 0x254a8cu: goto label_254a8c;
        case 0x254a90u: goto label_254a90;
        case 0x254a94u: goto label_254a94;
        case 0x254a98u: goto label_254a98;
        case 0x254a9cu: goto label_254a9c;
        case 0x254aa0u: goto label_254aa0;
        case 0x254aa4u: goto label_254aa4;
        case 0x254aa8u: goto label_254aa8;
        case 0x254aacu: goto label_254aac;
        case 0x254ab0u: goto label_254ab0;
        case 0x254ab4u: goto label_254ab4;
        case 0x254ab8u: goto label_254ab8;
        case 0x254abcu: goto label_254abc;
        case 0x254ac0u: goto label_254ac0;
        case 0x254ac4u: goto label_254ac4;
        case 0x254ac8u: goto label_254ac8;
        case 0x254accu: goto label_254acc;
        case 0x254ad0u: goto label_254ad0;
        case 0x254ad4u: goto label_254ad4;
        case 0x254ad8u: goto label_254ad8;
        case 0x254adcu: goto label_254adc;
        case 0x254ae0u: goto label_254ae0;
        case 0x254ae4u: goto label_254ae4;
        case 0x254ae8u: goto label_254ae8;
        case 0x254aecu: goto label_254aec;
        case 0x254af0u: goto label_254af0;
        case 0x254af4u: goto label_254af4;
        case 0x254af8u: goto label_254af8;
        case 0x254afcu: goto label_254afc;
        case 0x254b00u: goto label_254b00;
        case 0x254b04u: goto label_254b04;
        case 0x254b08u: goto label_254b08;
        case 0x254b0cu: goto label_254b0c;
        case 0x254b10u: goto label_254b10;
        case 0x254b14u: goto label_254b14;
        case 0x254b18u: goto label_254b18;
        case 0x254b1cu: goto label_254b1c;
        case 0x254b20u: goto label_254b20;
        case 0x254b24u: goto label_254b24;
        case 0x254b28u: goto label_254b28;
        case 0x254b2cu: goto label_254b2c;
        case 0x254b30u: goto label_254b30;
        case 0x254b34u: goto label_254b34;
        case 0x254b38u: goto label_254b38;
        case 0x254b3cu: goto label_254b3c;
        case 0x254b40u: goto label_254b40;
        case 0x254b44u: goto label_254b44;
        case 0x254b48u: goto label_254b48;
        case 0x254b4cu: goto label_254b4c;
        case 0x254b50u: goto label_254b50;
        case 0x254b54u: goto label_254b54;
        case 0x254b58u: goto label_254b58;
        case 0x254b5cu: goto label_254b5c;
        case 0x254b60u: goto label_254b60;
        case 0x254b64u: goto label_254b64;
        case 0x254b68u: goto label_254b68;
        case 0x254b6cu: goto label_254b6c;
        case 0x254b70u: goto label_254b70;
        case 0x254b74u: goto label_254b74;
        case 0x254b78u: goto label_254b78;
        case 0x254b7cu: goto label_254b7c;
        case 0x254b80u: goto label_254b80;
        case 0x254b84u: goto label_254b84;
        case 0x254b88u: goto label_254b88;
        case 0x254b8cu: goto label_254b8c;
        case 0x254b90u: goto label_254b90;
        case 0x254b94u: goto label_254b94;
        case 0x254b98u: goto label_254b98;
        case 0x254b9cu: goto label_254b9c;
        case 0x254ba0u: goto label_254ba0;
        case 0x254ba4u: goto label_254ba4;
        case 0x254ba8u: goto label_254ba8;
        case 0x254bacu: goto label_254bac;
        case 0x254bb0u: goto label_254bb0;
        case 0x254bb4u: goto label_254bb4;
        case 0x254bb8u: goto label_254bb8;
        case 0x254bbcu: goto label_254bbc;
        case 0x254bc0u: goto label_254bc0;
        case 0x254bc4u: goto label_254bc4;
        case 0x254bc8u: goto label_254bc8;
        case 0x254bccu: goto label_254bcc;
        case 0x254bd0u: goto label_254bd0;
        case 0x254bd4u: goto label_254bd4;
        case 0x254bd8u: goto label_254bd8;
        case 0x254bdcu: goto label_254bdc;
        case 0x254be0u: goto label_254be0;
        case 0x254be4u: goto label_254be4;
        case 0x254be8u: goto label_254be8;
        case 0x254becu: goto label_254bec;
        case 0x254bf0u: goto label_254bf0;
        case 0x254bf4u: goto label_254bf4;
        case 0x254bf8u: goto label_254bf8;
        case 0x254bfcu: goto label_254bfc;
        case 0x254c00u: goto label_254c00;
        case 0x254c04u: goto label_254c04;
        case 0x254c08u: goto label_254c08;
        case 0x254c0cu: goto label_254c0c;
        case 0x254c10u: goto label_254c10;
        case 0x254c14u: goto label_254c14;
        case 0x254c18u: goto label_254c18;
        case 0x254c1cu: goto label_254c1c;
        case 0x254c20u: goto label_254c20;
        case 0x254c24u: goto label_254c24;
        case 0x254c28u: goto label_254c28;
        case 0x254c2cu: goto label_254c2c;
        case 0x254c30u: goto label_254c30;
        case 0x254c34u: goto label_254c34;
        case 0x254c38u: goto label_254c38;
        case 0x254c3cu: goto label_254c3c;
        case 0x254c40u: goto label_254c40;
        case 0x254c44u: goto label_254c44;
        case 0x254c48u: goto label_254c48;
        case 0x254c4cu: goto label_254c4c;
        case 0x254c50u: goto label_254c50;
        case 0x254c54u: goto label_254c54;
        case 0x254c58u: goto label_254c58;
        case 0x254c5cu: goto label_254c5c;
        case 0x254c60u: goto label_254c60;
        case 0x254c64u: goto label_254c64;
        case 0x254c68u: goto label_254c68;
        case 0x254c6cu: goto label_254c6c;
        case 0x254c70u: goto label_254c70;
        case 0x254c74u: goto label_254c74;
        case 0x254c78u: goto label_254c78;
        case 0x254c7cu: goto label_254c7c;
        case 0x254c80u: goto label_254c80;
        case 0x254c84u: goto label_254c84;
        case 0x254c88u: goto label_254c88;
        case 0x254c8cu: goto label_254c8c;
        case 0x254c90u: goto label_254c90;
        case 0x254c94u: goto label_254c94;
        case 0x254c98u: goto label_254c98;
        case 0x254c9cu: goto label_254c9c;
        case 0x254ca0u: goto label_254ca0;
        case 0x254ca4u: goto label_254ca4;
        case 0x254ca8u: goto label_254ca8;
        case 0x254cacu: goto label_254cac;
        case 0x254cb0u: goto label_254cb0;
        case 0x254cb4u: goto label_254cb4;
        case 0x254cb8u: goto label_254cb8;
        case 0x254cbcu: goto label_254cbc;
        case 0x254cc0u: goto label_254cc0;
        case 0x254cc4u: goto label_254cc4;
        case 0x254cc8u: goto label_254cc8;
        case 0x254cccu: goto label_254ccc;
        case 0x254cd0u: goto label_254cd0;
        case 0x254cd4u: goto label_254cd4;
        case 0x254cd8u: goto label_254cd8;
        case 0x254cdcu: goto label_254cdc;
        case 0x254ce0u: goto label_254ce0;
        case 0x254ce4u: goto label_254ce4;
        case 0x254ce8u: goto label_254ce8;
        case 0x254cecu: goto label_254cec;
        case 0x254cf0u: goto label_254cf0;
        case 0x254cf4u: goto label_254cf4;
        case 0x254cf8u: goto label_254cf8;
        case 0x254cfcu: goto label_254cfc;
        case 0x254d00u: goto label_254d00;
        case 0x254d04u: goto label_254d04;
        case 0x254d08u: goto label_254d08;
        case 0x254d0cu: goto label_254d0c;
        case 0x254d10u: goto label_254d10;
        case 0x254d14u: goto label_254d14;
        case 0x254d18u: goto label_254d18;
        case 0x254d1cu: goto label_254d1c;
        case 0x254d20u: goto label_254d20;
        case 0x254d24u: goto label_254d24;
        case 0x254d28u: goto label_254d28;
        case 0x254d2cu: goto label_254d2c;
        case 0x254d30u: goto label_254d30;
        case 0x254d34u: goto label_254d34;
        case 0x254d38u: goto label_254d38;
        case 0x254d3cu: goto label_254d3c;
        case 0x254d40u: goto label_254d40;
        case 0x254d44u: goto label_254d44;
        case 0x254d48u: goto label_254d48;
        case 0x254d4cu: goto label_254d4c;
        case 0x254d50u: goto label_254d50;
        case 0x254d54u: goto label_254d54;
        case 0x254d58u: goto label_254d58;
        case 0x254d5cu: goto label_254d5c;
        case 0x254d60u: goto label_254d60;
        case 0x254d64u: goto label_254d64;
        case 0x254d68u: goto label_254d68;
        case 0x254d6cu: goto label_254d6c;
        case 0x254d70u: goto label_254d70;
        case 0x254d74u: goto label_254d74;
        case 0x254d78u: goto label_254d78;
        case 0x254d7cu: goto label_254d7c;
        case 0x254d80u: goto label_254d80;
        case 0x254d84u: goto label_254d84;
        case 0x254d88u: goto label_254d88;
        case 0x254d8cu: goto label_254d8c;
        case 0x254d90u: goto label_254d90;
        case 0x254d94u: goto label_254d94;
        case 0x254d98u: goto label_254d98;
        case 0x254d9cu: goto label_254d9c;
        case 0x254da0u: goto label_254da0;
        case 0x254da4u: goto label_254da4;
        case 0x254da8u: goto label_254da8;
        case 0x254dacu: goto label_254dac;
        case 0x254db0u: goto label_254db0;
        case 0x254db4u: goto label_254db4;
        case 0x254db8u: goto label_254db8;
        case 0x254dbcu: goto label_254dbc;
        case 0x254dc0u: goto label_254dc0;
        case 0x254dc4u: goto label_254dc4;
        case 0x254dc8u: goto label_254dc8;
        case 0x254dccu: goto label_254dcc;
        case 0x254dd0u: goto label_254dd0;
        case 0x254dd4u: goto label_254dd4;
        case 0x254dd8u: goto label_254dd8;
        case 0x254ddcu: goto label_254ddc;
        case 0x254de0u: goto label_254de0;
        case 0x254de4u: goto label_254de4;
        case 0x254de8u: goto label_254de8;
        case 0x254decu: goto label_254dec;
        case 0x254df0u: goto label_254df0;
        case 0x254df4u: goto label_254df4;
        case 0x254df8u: goto label_254df8;
        case 0x254dfcu: goto label_254dfc;
        case 0x254e00u: goto label_254e00;
        case 0x254e04u: goto label_254e04;
        case 0x254e08u: goto label_254e08;
        case 0x254e0cu: goto label_254e0c;
        case 0x254e10u: goto label_254e10;
        case 0x254e14u: goto label_254e14;
        case 0x254e18u: goto label_254e18;
        case 0x254e1cu: goto label_254e1c;
        case 0x254e20u: goto label_254e20;
        case 0x254e24u: goto label_254e24;
        case 0x254e28u: goto label_254e28;
        case 0x254e2cu: goto label_254e2c;
        case 0x254e30u: goto label_254e30;
        case 0x254e34u: goto label_254e34;
        case 0x254e38u: goto label_254e38;
        case 0x254e3cu: goto label_254e3c;
        case 0x254e40u: goto label_254e40;
        case 0x254e44u: goto label_254e44;
        case 0x254e48u: goto label_254e48;
        case 0x254e4cu: goto label_254e4c;
        case 0x254e50u: goto label_254e50;
        case 0x254e54u: goto label_254e54;
        case 0x254e58u: goto label_254e58;
        case 0x254e5cu: goto label_254e5c;
        case 0x254e60u: goto label_254e60;
        case 0x254e64u: goto label_254e64;
        case 0x254e68u: goto label_254e68;
        case 0x254e6cu: goto label_254e6c;
        case 0x254e70u: goto label_254e70;
        case 0x254e74u: goto label_254e74;
        case 0x254e78u: goto label_254e78;
        case 0x254e7cu: goto label_254e7c;
        case 0x254e80u: goto label_254e80;
        case 0x254e84u: goto label_254e84;
        case 0x254e88u: goto label_254e88;
        case 0x254e8cu: goto label_254e8c;
        case 0x254e90u: goto label_254e90;
        case 0x254e94u: goto label_254e94;
        case 0x254e98u: goto label_254e98;
        case 0x254e9cu: goto label_254e9c;
        case 0x254ea0u: goto label_254ea0;
        case 0x254ea4u: goto label_254ea4;
        case 0x254ea8u: goto label_254ea8;
        case 0x254eacu: goto label_254eac;
        case 0x254eb0u: goto label_254eb0;
        case 0x254eb4u: goto label_254eb4;
        case 0x254eb8u: goto label_254eb8;
        case 0x254ebcu: goto label_254ebc;
        case 0x254ec0u: goto label_254ec0;
        case 0x254ec4u: goto label_254ec4;
        case 0x254ec8u: goto label_254ec8;
        case 0x254eccu: goto label_254ecc;
        case 0x254ed0u: goto label_254ed0;
        case 0x254ed4u: goto label_254ed4;
        default: return;
    }

label_254708:
    // 0x254708: 0xbb00ff87  swr         $zero, -0x79($t8)
    ctx->pc = 0x254708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967175); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_25470c:
    // 0x25470c: 0x11083100  beq         $t0, $t0, . + 4 + (0x3100 << 2)
label_254710:
    if (ctx->pc == 0x254710u) {
        ctx->pc = 0x254710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25470Cu;
        // 0x254710: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254714u;
        goto label_254714;
    }
    ctx->pc = 0x25470Cu;
    {
        const bool branch_taken_0x25470c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 8));
        ctx->pc = 0x254710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25470Cu;
        // 0x254710: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25470c) {
            ctx->pc = 0x260B10u;
            { ctx->pc = 0x260b10; return; }
        }
    }
    ctx->pc = 0x254714u;
label_254714:
    // 0x254714: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254714u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254718:
    // 0x254718: 0xbc00ff  .word       0x00BC00FF                   # dsra32      $zero, $gp, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254718u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (32 + 3));
label_25471c:
    // 0x25471c: 0x2170831  tgeu        $s0, $s7, 32
    ctx->pc = 0x25471cu;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_254720:
    // 0x254720: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254720u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254720 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254724:
    // 0x254724: 0xff824664  sd          $v0, 0x4664($gp)
    ctx->pc = 0x254724u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18020), GPR_U64(ctx, 2));
label_254728:
    // 0x254728: 0x3200bd00  andi        $zero, $s0, 0xBD00
    ctx->pc = 0x254728u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)48384);
label_25472c:
    // 0x25472c: 0x50021108  beql        $zero, $v0, . + 4 + (0x1108 << 2)
label_254730:
    if (ctx->pc == 0x254730u) {
        ctx->pc = 0x254730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25472Cu;
        // 0x254730: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254734u;
        goto label_254734;
    }
    ctx->pc = 0x25472Cu;
    {
        const bool branch_taken_0x25472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25472c) {
            ctx->pc = 0x254730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25472Cu;
            // 0x254730: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x258B50u;
            { ctx->pc = 0x258b50; return; }
        }
    }
    ctx->pc = 0x254734u;
label_254734:
    // 0x254734: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254734u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254738:
    // 0x254738: 0x93200be  j           func_4C802F8
label_25473c:
    if (ctx->pc == 0x25473Cu) {
        ctx->pc = 0x25473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254738u;
        // 0x25473c: 0x4b4b0217  vminiw.xz   $vf8, $vf0, $vf11w (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254740u;
        goto label_254740;
    }
    ctx->pc = 0x254738u;
    ctx->pc = 0x25473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254738u;
    // 0x25473c: 0x4b4b0217  vminiw.xz   $vf8, $vf0, $vf11w (Delay Slot)
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C802F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C802F8u, 0x254738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254740u;
label_254740:
    // 0x254740: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254744:
    // 0x254744: 0xbf00ff82  cache       0x00, -0x7E($t8)
    ctx->pc = 0x254744u;
    // CACHE instruction (ignored)
label_254748:
    // 0x254748: 0x15053200  bne         $t0, $a1, . + 4 + (0x3200 << 2)
label_25474c:
    if (ctx->pc == 0x25474Cu) {
        ctx->pc = 0x25474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254748u;
        // 0x25474c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254750u;
        goto label_254750;
    }
    ctx->pc = 0x254748u;
    {
        const bool branch_taken_0x254748 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x25474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254748u;
        // 0x25474c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254748) {
            ctx->pc = 0x260F4Cu;
            { ctx->pc = 0x260f4c; return; }
        }
    }
    ctx->pc = 0x254750u;
label_254750:
    // 0x254750: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254750u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254754:
    // 0x254754: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x254754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_254758:
    // 0x254758: 0x2110431  tgeu        $s0, $s1, 16
    ctx->pc = 0x254758u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_25475c:
    // 0x25475c: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x25475cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254760:
    // 0x254760: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254760u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254764:
    // 0x254764: 0x33000000  andi        $zero, $t8, 0x0
    ctx->pc = 0x254764u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)0);
label_254768:
    // 0x254768: 0x4b021204  vsubx.x     $vf8, $vf2, $vf2x
    ctx->pc = 0x254768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_25476c:
    // 0x25476c: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x25476cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254770:
    // 0x254770: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254770u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254774:
    // 0x254774: 0x13100c0  .word       0x013100C0                   # sll         $zero, $s1, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254774u;
    
label_254778:
    // 0x254778: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y
    ctx->pc = 0x254778u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_25477c:
    // 0x25477c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x25477cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254780:
    // 0x254780: 0xc100ff82  ll          $zero, -0x7E($t0)
    ctx->pc = 0x254780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294967170); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_254784:
    // 0x254784: 0x17003200  bnez        $t8, . + 4 + (0x3200 << 2)
label_254788:
    if (ctx->pc == 0x254788u) {
        ctx->pc = 0x254788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254784u;
        // 0x254788: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25478Cu;
        goto label_25478c;
    }
    ctx->pc = 0x254784u;
    {
        const bool branch_taken_0x254784 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x254788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254784u;
        // 0x254788: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254784) {
            ctx->pc = 0x260F88u;
            { ctx->pc = 0x260f88; return; }
        }
    }
    ctx->pc = 0x25478Cu;
label_25478c:
    // 0x25478c: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x25478cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254790:
    // 0x254790: 0xc200ff  .word       0x00C200FF                   # dsra32      $zero, $v0, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254790u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 3));
label_254794:
    // 0x254794: 0x2170031  tgeu        $s0, $s7, 0
    ctx->pc = 0x254794u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_254798:
    // 0x254798: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_25479c:
    // 0x25479c: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x25479cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_2547a0:
    // 0x2547a0: 0x3300c300  andi        $zero, $t8, 0xC300
    ctx->pc = 0x2547a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)49920);
label_2547a4:
    // 0x2547a4: 0x64021200  daddiu      $v0, $zero, 0x1200
    ctx->pc = 0x2547a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4608);
label_2547a8:
    // 0x2547a8: 0x5a646450  .word       0x5A646450                   # blezl       $s3, . + 4 + (0x6450 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_2547ac:
    if (ctx->pc == 0x2547ACu) {
        ctx->pc = 0x2547ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547A8u;
        // 0x2547ac: 0xff823c  .word       0x00FF823C                   # dsll32      $s0, $ra, 8 # 00E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 31) << (32 + 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547B0u;
        goto label_2547b0;
    }
    ctx->pc = 0x2547A8u;
    {
        const bool branch_taken_0x2547a8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2547a8) {
            ctx->pc = 0x2547ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2547A8u;
            // 0x2547ac: 0xff823c  .word       0x00FF823C                   # dsll32      $s0, $ra, 8 # 00E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 31) << (32 + 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D8ECu;
            { ctx->pc = 0x26d8ec; return; }
        }
    }
    ctx->pc = 0x2547B0u;
label_2547b0:
    // 0x2547b0: 0x92c00c4  j           func_4B00310
label_2547b4:
    if (ctx->pc == 0x2547B4u) {
        ctx->pc = 0x2547B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547B0u;
        // 0x2547b4: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x2547B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547B8u;
        goto label_2547b8;
    }
    ctx->pc = 0x2547B0u;
    ctx->pc = 0x2547B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547B0u;
    // 0x2547b4: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2) (Delay Slot)
    // Likely branch instruction at 0x2547B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B00310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B00310u, 0x2547B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2547B8u;
label_2547b8:
    // 0x2547b8: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x2547b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2547bc:
    // 0x2547bc: 0xc500ff87  lwc1        $f0, -0x79($t0)
    ctx->pc = 0x2547bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967175)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2547c0:
    // 0x2547c0: 0x15092a00  bne         $t0, $t1, . + 4 + (0x2A00 << 2)
label_2547c4:
    if (ctx->pc == 0x2547C4u) {
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C0u;
        // 0x2547c4: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547C8u;
        goto label_2547c8;
    }
    ctx->pc = 0x2547C0u;
    {
        const bool branch_taken_0x2547c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C0u;
        // 0x2547c4: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547c0) {
            ctx->pc = 0x25EFC4u;
            { ctx->pc = 0x25efc4; return; }
        }
    }
    ctx->pc = 0x2547C8u;
label_2547c8:
    // 0x2547c8: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x2547c8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_2547cc:
    // 0x2547cc: 0xc600ff  .word       0x00C600FF                   # dsra32      $zero, $a2, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2547ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 3));
label_2547d0:
    // 0x2547d0: 0x217082c  dadd        $at, $s0, $s7
    ctx->pc = 0x2547d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 16); int64_t b = (int64_t)GPR_S64(ctx, 23); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2547d4:
    // 0x2547d4: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2547d8:
    if (ctx->pc == 0x2547D8u) {
        ctx->pc = 0x2547D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547D4u;
        // 0x2547d8: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547DCu;
        goto label_2547dc;
    }
    ctx->pc = 0x2547D4u;
    {
        const bool branch_taken_0x2547d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2547d4) {
            ctx->pc = 0x2547D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2547D4u;
            // 0x2547d8: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268918u;
            { ctx->pc = 0x268918; return; }
        }
    }
    ctx->pc = 0x2547DCu;
label_2547dc:
    // 0x2547dc: 0x2a00c700  slti        $zero, $s0, -0x3900
    ctx->pc = 0x2547dcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294952704) ? 1 : 0);
label_2547e0:
    // 0x2547e0: 0x4b021508  vmaddx.x    $vf20, $vf2, $vf2x
    ctx->pc = 0x2547e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_2547e4:
    // 0x2547e4: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x2547e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2547e8:
    // 0x2547e8: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2547e8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2547ec:
    // 0x2547ec: 0x8310100  j           func_C40400
label_2547f0:
    if (ctx->pc == 0x2547F0u) {
        ctx->pc = 0x2547F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547ECu;
        // 0x2547f0: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2547F0 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547F4u;
        goto label_2547f4;
    }
    ctx->pc = 0x2547ECu;
    ctx->pc = 0x2547F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547ECu;
    // 0x2547f0: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2547F0 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x2547ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2547F4u;
label_2547f4:
    // 0x2547f4: 0x0  nop
    ctx->pc = 0x2547f4u;
    // NOP
label_2547f8:
    // 0x2547f8: 0xc800ff00  lwc2        $0, -0x100($zero)
    ctx->pc = 0x2547f8u;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x2547F8 raw=0xC800FF00");
 /* MITIGATED */
label_2547fc:
    // 0x2547fc: 0x11043100  beq         $t0, $a0, . + 4 + (0x3100 << 2)
label_254800:
    if (ctx->pc == 0x254800u) {
        ctx->pc = 0x254800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547FCu;
        // 0x254800: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254804u;
        goto label_254804;
    }
    ctx->pc = 0x2547FCu;
    {
        const bool branch_taken_0x2547fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x254800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547FCu;
        // 0x254800: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547fc) {
            ctx->pc = 0x260C00u;
            { ctx->pc = 0x260c00; return; }
        }
    }
    ctx->pc = 0x254804u;
label_254804:
    // 0x254804: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254808:
    // 0x254808: 0xc900ff  .word       0x00C900FF                   # dsra32      $zero, $t1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254808u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 9) >> (32 + 3));
label_25480c:
    // 0x25480c: 0x2150432  tlt         $s0, $s5, 16
    ctx->pc = 0x25480cu;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254810:
    // 0x254810: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254814:
    // 0x254814: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254814u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254818:
    // 0x254818: 0x3100ca00  andi        $zero, $t0, 0xCA00
    ctx->pc = 0x254818u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)51712);
label_25481c:
    // 0x25481c: 0x4b021500  vaddx.x     $vf20, $vf2, $vf2x
    ctx->pc = 0x25481cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254820:
    // 0x254820: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254824:
    // 0x254824: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254824u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254828:
    // 0x254828: 0x93300cb  j           func_4CC032C
label_25482c:
    if (ctx->pc == 0x25482Cu) {
        ctx->pc = 0x25482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254828u;
        // 0x25482c: 0x4b4b0212  vmaxz.xz    $vf8, $vf0, $vf11z (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254830u;
        goto label_254830;
    }
    ctx->pc = 0x254828u;
    ctx->pc = 0x25482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254828u;
    // 0x25482c: 0x4b4b0212  vmaxz.xz    $vf8, $vf0, $vf11z (Delay Slot)
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC032Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC032Cu, 0x254828u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254830u;
label_254830:
    // 0x254830: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254834:
    // 0x254834: 0xcc00ff82  pref        0x00, -0x7E($zero)
    ctx->pc = 0x254834u;
    // PREF instruction (ignored)
label_254838:
    // 0x254838: 0x15083100  bne         $t0, $t0, . + 4 + (0x3100 << 2)
label_25483c:
    if (ctx->pc == 0x25483Cu) {
        ctx->pc = 0x25483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254838u;
        // 0x25483c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254840u;
        goto label_254840;
    }
    ctx->pc = 0x254838u;
    {
        const bool branch_taken_0x254838 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x25483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254838u;
        // 0x25483c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254838) {
            ctx->pc = 0x260C3Cu;
            { ctx->pc = 0x260c3c; return; }
        }
    }
    ctx->pc = 0x254840u;
label_254840:
    // 0x254840: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254844:
    // 0x254844: 0xcd00ff  .word       0x00CD00FF                   # dsra32      $zero, $t5, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 13) >> (32 + 3));
label_254848:
    // 0x254848: 0x2170832  tlt         $s0, $s7, 32
    ctx->pc = 0x254848u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_25484c:
    // 0x25484c: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254850:
    if (ctx->pc == 0x254850u) {
        ctx->pc = 0x254850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25484Cu;
        // 0x254850: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254854u;
        goto label_254854;
    }
    ctx->pc = 0x25484Cu;
    {
        const bool branch_taken_0x25484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x25484c) {
            ctx->pc = 0x254850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25484Cu;
            // 0x254850: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268990u;
            { ctx->pc = 0x268990; return; }
        }
    }
    ctx->pc = 0x254854u;
label_254854:
    // 0x254854: 0x3100ce00  andi        $zero, $t0, 0xCE00
    ctx->pc = 0x254854u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)52736);
label_254858:
    // 0x254858: 0x4b021108  vmaddx.x    $vf4, $vf2, $vf2x
    ctx->pc = 0x254858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25485c:
    // 0x25485c: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x25485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254860:
    // 0x254860: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254860u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254864:
    // 0x254864: 0x93100cf  j           func_4C4033C
label_254868:
    if (ctx->pc == 0x254868u) {
        ctx->pc = 0x254868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254864u;
        // 0x254868: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25486Cu;
        goto label_25486c;
    }
    ctx->pc = 0x254864u;
    ctx->pc = 0x254868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254864u;
    // 0x254868: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4033Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4033Cu, 0x254864u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x25486Cu;
label_25486c:
    // 0x25486c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x25486cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254870:
    // 0x254870: 0xd000ff82  lld         $zero, -0x7E($zero)
    ctx->pc = 0x254870u;
//     throw std::runtime_error("Unhandled opcode: 0x34 at 0x254870 raw=0xD000FF82");
 /* MITIGATED */
label_254874:
    // 0x254874: 0x17073100  bne         $t8, $a3, . + 4 + (0x3100 << 2)
label_254878:
    if (ctx->pc == 0x254878u) {
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254878 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25487Cu;
        goto label_25487c;
    }
    ctx->pc = 0x254874u;
    {
        const bool branch_taken_0x254874 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 7));
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254878 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254874) {
            ctx->pc = 0x260C78u;
            { ctx->pc = 0x260c78; return; }
        }
    }
    ctx->pc = 0x25487Cu;
label_25487c:
    // 0x25487c: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_254880:
    // 0x254880: 0xd100ff  .word       0x00D100FF                   # dsra32      $zero, $s1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254880u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 17) >> (32 + 3));
label_254884:
    // 0x254884: 0x2150632  tlt         $s0, $s5, 24
    ctx->pc = 0x254884u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254888:
    // 0x254888: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25488c:
    if (ctx->pc == 0x25488Cu) {
        ctx->pc = 0x25488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254888u;
        // 0x25488c: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254890u;
        goto label_254890;
    }
    ctx->pc = 0x254888u;
    {
        const bool branch_taken_0x254888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254888) {
            ctx->pc = 0x25488Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254888u;
            // 0x25488c: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689CCu;
            { ctx->pc = 0x2689cc; return; }
        }
    }
    ctx->pc = 0x254890u;
label_254890:
    // 0x254890: 0x3100d200  andi        $zero, $t0, 0xD200
    ctx->pc = 0x254890u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)53760);
label_254894:
    // 0x254894: 0x4b021100  vaddx.x     $vf4, $vf2, $vf2x
    ctx->pc = 0x254894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254898:
    // 0x254898: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_25489c:
    // 0x25489c: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25489cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2548a0:
    // 0x2548a0: 0x13100d3  .word       0x013100D3                   # mtlo        $t1 # 001100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548a0u;
    ctx->lo = GPR_U64(ctx, 9);
label_2548a4:
    // 0x2548a4: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y
    ctx->pc = 0x2548a4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2548a8:
    // 0x2548a8: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x2548a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2548ac:
    // 0x2548ac: 0x9a00ff82  lwr         $zero, -0x7E($s0)
    ctx->pc = 0x2548acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967170); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 0) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 0) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 0, merged64); }
label_2548b0:
    // 0x2548b0: 0x12083301  beq         $s0, $t0, . + 4 + (0x3301 << 2)
label_2548b4:
    if (ctx->pc == 0x2548B4u) {
        ctx->pc = 0x2548B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548B0u;
        // 0x2548b4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2548B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2548B8u;
        goto label_2548b8;
    }
    ctx->pc = 0x2548B0u;
    {
        const bool branch_taken_0x2548b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x2548B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548B0u;
        // 0x2548b4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2548B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548b0) {
            ctx->pc = 0x2614B8u;
            { ctx->pc = 0x2614b8; return; }
        }
    }
    ctx->pc = 0x2548B8u;
label_2548b8:
    // 0x2548b8: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x2548b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_2548bc:
    // 0x2548bc: 0x1d400ff  .word       0x01D400FF                   # dsra32      $zero, $s4, 3 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 20) >> (32 + 3));
label_2548c0:
    // 0x2548c0: 0x2120833  tltu        $s0, $s2, 32
    ctx->pc = 0x2548c0u;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2548c4:
    // 0x2548c4: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2548c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2548c8:
    // 0x2548c8: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x2548c8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_2548cc:
    // 0x2548cc: 0x3201d500  andi        $at, $s0, 0xD500
    ctx->pc = 0x2548ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)54528);
label_2548d0:
    // 0x2548d0: 0x50021500  beql        $zero, $v0, . + 4 + (0x1500 << 2)
label_2548d4:
    if (ctx->pc == 0x2548D4u) {
        ctx->pc = 0x2548D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548D0u;
        // 0x2548d4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2548D8u;
        goto label_2548d8;
    }
    ctx->pc = 0x2548D0u;
    {
        const bool branch_taken_0x2548d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2548d0) {
            ctx->pc = 0x2548D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2548D0u;
            // 0x2548d4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259CD4u;
            { ctx->pc = 0x259cd4; return; }
        }
    }
    ctx->pc = 0x2548D8u;
label_2548d8:
    // 0x2548d8: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548d8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2548dc:
    // 0x2548dc: 0x33101d6  .word       0x033101D6                   # dsrlv       $zero, $s1, $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) >> (GPR_U32(ctx, 25) & 0x3F));
label_2548e0:
    // 0x2548e0: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y
    ctx->pc = 0x2548e0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2548e4:
    // 0x2548e4: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x2548e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2548e8:
    // 0x2548e8: 0xe000ff82  sc          $zero, -0x7E($zero)
    ctx->pc = 0x2548e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294967170); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 0)); SET_GPR_S32(ctx, 0, 1); } else { SET_GPR_S32(ctx, 0, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_2548ec:
    // 0x2548ec: 0x10082900  beq         $zero, $t0, . + 4 + (0x2900 << 2)
label_2548f0:
    if (ctx->pc == 0x2548F0u) {
        ctx->pc = 0x2548F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548ECu;
        // 0x2548f0: 0x14141400  bne         $zero, $s4, . + 4 + (0x1400 << 2) (Delay Slot)
        // Likely branch instruction at 0x2548F0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2548F4u;
        goto label_2548f4;
    }
    ctx->pc = 0x2548ECu;
    {
        const bool branch_taken_0x2548ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2548F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548ECu;
        // 0x2548f0: 0x14141400  bne         $zero, $s4, . + 4 + (0x1400 << 2) (Delay Slot)
        // Likely branch instruction at 0x2548F0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548ec) {
            ctx->pc = 0x25ECF0u;
            { ctx->pc = 0x25ecf0; return; }
        }
    }
    ctx->pc = 0x2548F4u;
label_2548f4:
    // 0x2548f4: 0x64466414  daddiu      $a2, $v0, 0x6414
    ctx->pc = 0x2548f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25620);
label_2548f8:
    // 0x2548f8: 0x1df00ff  .word       0x01DF00FF                   # dsra32      $zero, $ra, 3 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548f8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
label_2548fc:
    // 0x2548fc: 0x6150831  .word       0x06150831                   # INVALID     $s0, $s5, 0x831 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2548fcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x15 at 0x2548FC raw=0x06150831");
 /* MITIGATED */
label_254900:
    // 0x254900: 0x14141414  bne         $zero, $s4, . + 4 + (0x1414 << 2)
label_254904:
    if (ctx->pc == 0x254904u) {
        ctx->pc = 0x254904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254900u;
        // 0x254904: 0xff644664  sd          $a0, 0x4664($k1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 27), 18020), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254908u;
        goto label_254908;
    }
    ctx->pc = 0x254900u;
    {
        const bool branch_taken_0x254900 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 20));
        ctx->pc = 0x254904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254900u;
        // 0x254904: 0xff644664  sd          $a0, 0x4664($k1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 27), 18020), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254900) {
            ctx->pc = 0x259954u;
            { ctx->pc = 0x259954; return; }
        }
    }
    ctx->pc = 0x254908u;
label_254908:
    // 0x254908: 0x3301de00  andi        $at, $t8, 0xDE00
    ctx->pc = 0x254908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)56832);
label_25490c:
    // 0x25490c: 0x50021208  beql        $zero, $v0, . + 4 + (0x1208 << 2)
label_254910:
    if (ctx->pc == 0x254910u) {
        ctx->pc = 0x254910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25490Cu;
        // 0x254910: 0x6e3c3c50  ldr         $gp, 0x3C50($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254914u;
        goto label_254914;
    }
    ctx->pc = 0x25490Cu;
    {
        const bool branch_taken_0x25490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25490c) {
            ctx->pc = 0x254910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25490Cu;
            // 0x254910: 0x6e3c3c50  ldr         $gp, 0x3C50($s1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259130u;
            { ctx->pc = 0x259130; return; }
        }
    }
    ctx->pc = 0x254914u;
label_254914:
    // 0x254914: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254914u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254918:
    // 0x254918: 0x8310100  j           func_C40400
label_25491c:
    if (ctx->pc == 0x25491Cu) {
        ctx->pc = 0x25491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254918u;
        // 0x25491c: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25491C raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254920u;
        goto label_254920;
    }
    ctx->pc = 0x254918u;
    ctx->pc = 0x25491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254918u;
    // 0x25491c: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25491C raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x254918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254920u;
label_254920:
    // 0x254920: 0x0  nop
    ctx->pc = 0x254920u;
    // NOP
label_254924:
    // 0x254924: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x254924u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_254928:
    // 0x254928: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_25492c:
    if (ctx->pc == 0x25492Cu) {
        ctx->pc = 0x25492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254928u;
        // 0x25492c: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254930u;
        goto label_254930;
    }
    ctx->pc = 0x254928u;
    {
        const bool branch_taken_0x254928 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x25492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254928u;
        // 0x25492c: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254928) {
            ctx->pc = 0x260D30u;
            { ctx->pc = 0x260d30; return; }
        }
    }
    ctx->pc = 0x254930u;
label_254930:
    // 0x254930: 0x0  nop
    ctx->pc = 0x254930u;
    // NOP
label_254934:
    // 0x254934: 0x10000ff  .word       0x010000FF                   # dsra32      $zero, $zero, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_254938:
    // 0x254938: 0x2150831  tgeu        $s0, $s5, 32
    ctx->pc = 0x254938u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_25493c:
    // 0x25493c: 0x0  nop
    ctx->pc = 0x25493cu;
    // NOP
label_254940:
    // 0x254940: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x254940u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_254944:
    // 0x254944: 0x2c01e400  sltiu       $at, $zero, -0x1C00
    ctx->pc = 0x254944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)4294960128) ? 1 : 0);
label_254948:
    // 0x254948: 0x50021506  beql        $zero, $v0, . + 4 + (0x1506 << 2)
label_25494c:
    if (ctx->pc == 0x25494Cu) {
        ctx->pc = 0x25494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254948u;
        // 0x25494c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254950u;
        goto label_254950;
    }
    ctx->pc = 0x254948u;
    {
        const bool branch_taken_0x254948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254948) {
            ctx->pc = 0x25494Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254948u;
            // 0x25494c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259D64u;
            { ctx->pc = 0x259d64; return; }
        }
    }
    ctx->pc = 0x254950u;
label_254950:
    // 0x254950: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254950u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254954:
    // 0x254954: 0x72a00dd  tlti        $t9, 0xDD
    ctx->pc = 0x254954u;
    if (GPR_S64(ctx, 25) < (int64_t)(int32_t)221) { runtime->handleTrap(rdram, ctx); }
label_254958:
    // 0x254958: 0x50500317  beql        $v0, $s0, . + 4 + (0x317 << 2)
label_25495c:
    if (ctx->pc == 0x25495Cu) {
        ctx->pc = 0x25495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254958u;
        // 0x25495c: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254960u;
        goto label_254960;
    }
    ctx->pc = 0x254958u;
    {
        const bool branch_taken_0x254958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254958) {
            ctx->pc = 0x25495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254958u;
            // 0x25495c: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2555B8u;
            { ctx->pc = 0x2555b8; return; }
        }
    }
    ctx->pc = 0x254960u;
label_254960:
    // 0x254960: 0xdb00ff82  lqc2        $vf0, -0x7E($t8)
    ctx->pc = 0x254960u;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 4294967170)));
label_254964:
    // 0x254964: 0x15003200  bnez        $t0, . + 4 + (0x3200 << 2)
label_254968:
    if (ctx->pc == 0x254968u) {
        ctx->pc = 0x254968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254964u;
        // 0x254968: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254968 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25496Cu;
        goto label_25496c;
    }
    ctx->pc = 0x254964u;
    {
        const bool branch_taken_0x254964 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x254968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254964u;
        // 0x254968: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254968 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254964) {
            ctx->pc = 0x261168u;
            { ctx->pc = 0x261168; return; }
        }
    }
    ctx->pc = 0x25496Cu;
label_25496c:
    // 0x25496c: 0x824b6e50  lb          $t3, 0x6E50($s2)
    ctx->pc = 0x25496cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28240)));
label_254970:
    // 0x254970: 0xdb00ff  .word       0x00DB00FF                   # dsra32      $zero, $k1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254970u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 27) >> (32 + 3));
label_254974:
    // 0x254974: 0x2110232  tlt         $s0, $s1, 8
    ctx->pc = 0x254974u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_254978:
    // 0x254978: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25497c:
    if (ctx->pc == 0x25497Cu) {
        ctx->pc = 0x25497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254978u;
        // 0x25497c: 0xff824b6e  sd          $v0, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254980u;
        goto label_254980;
    }
    ctx->pc = 0x254978u;
    {
        const bool branch_taken_0x254978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254978) {
            ctx->pc = 0x25497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254978u;
            // 0x25497c: 0xff824b6e  sd          $v0, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268ABCu;
            { ctx->pc = 0x268abc; return; }
        }
    }
    ctx->pc = 0x254980u;
label_254980:
    // 0x254980: 0x3200db00  andi        $zero, $s0, 0xDB00
    ctx->pc = 0x254980u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)56064);
label_254984:
    // 0x254984: 0x50021704  beql        $zero, $v0, . + 4 + (0x1704 << 2)
label_254988:
    if (ctx->pc == 0x254988u) {
        ctx->pc = 0x254988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254984u;
        // 0x254988: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25498Cu;
        goto label_25498c;
    }
    ctx->pc = 0x254984u;
    {
        const bool branch_taken_0x254984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254984) {
            ctx->pc = 0x254988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254984u;
            // 0x254988: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A598u;
            { ctx->pc = 0x25a598; return; }
        }
    }
    ctx->pc = 0x25498Cu;
label_25498c:
    // 0x25498c: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25498cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254990:
    // 0x254990: 0x83100db  j           func_C4036C
label_254994:
    if (ctx->pc == 0x254994u) {
        ctx->pc = 0x254994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254990u;
        // 0x254994: 0x50500214  beql        $v0, $s0, . + 4 + (0x214 << 2) (Delay Slot)
        // Likely branch instruction at 0x254994 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254998u;
        goto label_254998;
    }
    ctx->pc = 0x254990u;
    ctx->pc = 0x254994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254990u;
    // 0x254994: 0x50500214  beql        $v0, $s0, . + 4 + (0x214 << 2) (Delay Slot)
    // Likely branch instruction at 0x254994 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC4036Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC4036Cu, 0x254990u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254998u;
label_254998:
    // 0x254998: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x254998u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25499c:
    // 0x25499c: 0xdb00ff82  lqc2        $vf0, -0x7E($t8)
    ctx->pc = 0x25499cu;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 4294967170)));
label_2549a0:
    // 0x2549a0: 0x10063100  beq         $zero, $a2, . + 4 + (0x3100 << 2)
label_2549a4:
    if (ctx->pc == 0x2549A4u) {
        ctx->pc = 0x2549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549A0u;
        // 0x2549a4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2549A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2549A8u;
        goto label_2549a8;
    }
    ctx->pc = 0x2549A0u;
    {
        const bool branch_taken_0x2549a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549A0u;
        // 0x2549a4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2549A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549a0) {
            ctx->pc = 0x260DA4u;
            { ctx->pc = 0x260da4; return; }
        }
    }
    ctx->pc = 0x2549A8u;
label_2549a8:
    // 0x2549a8: 0x824b6e50  lb          $t3, 0x6E50($s2)
    ctx->pc = 0x2549a8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28240)));
label_2549ac:
    // 0x2549ac: 0xdb00ff  .word       0x00DB00FF                   # dsra32      $zero, $k1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2549acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 27) >> (32 + 3));
label_2549b0:
    // 0x2549b0: 0x2160030  tge         $s0, $s6, 0
    ctx->pc = 0x2549b0u;
    if (GPR_S64(ctx, 16) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2549b4:
    // 0x2549b4: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2549b8:
    if (ctx->pc == 0x2549B8u) {
        ctx->pc = 0x2549B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549B4u;
        // 0x2549b8: 0xff824b6e  sd          $v0, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2549BCu;
        goto label_2549bc;
    }
    ctx->pc = 0x2549B4u;
    {
        const bool branch_taken_0x2549b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2549b4) {
            ctx->pc = 0x2549B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2549B4u;
            // 0x2549b8: 0xff824b6e  sd          $v0, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268AF8u;
            { ctx->pc = 0x268af8; return; }
        }
    }
    ctx->pc = 0x2549BCu;
label_2549bc:
    // 0x2549bc: 0x3700db00  ori         $zero, $t8, 0xDB00
    ctx->pc = 0x2549bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)56064);
label_2549c0:
    // 0x2549c0: 0x50021500  beql        $zero, $v0, . + 4 + (0x1500 << 2)
label_2549c4:
    if (ctx->pc == 0x2549C4u) {
        ctx->pc = 0x2549C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549C0u;
        // 0x2549c4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2549C8u;
        goto label_2549c8;
    }
    ctx->pc = 0x2549C0u;
    {
        const bool branch_taken_0x2549c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2549c0) {
            ctx->pc = 0x2549C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2549C0u;
            // 0x2549c4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259DC4u;
            { ctx->pc = 0x259dc4; return; }
        }
    }
    ctx->pc = 0x2549C8u;
label_2549c8:
    // 0x2549c8: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2549c8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2549cc:
    // 0x2549cc: 0x83200d9  j           func_C80364
label_2549d0:
    if (ctx->pc == 0x2549D0u) {
        ctx->pc = 0x2549D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549CCu;
        // 0x2549d0: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
        // Likely branch instruction at 0x2549D0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2549D4u;
        goto label_2549d4;
    }
    ctx->pc = 0x2549CCu;
    ctx->pc = 0x2549D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549CCu;
    // 0x2549d0: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
    // Likely branch instruction at 0x2549D0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC80364u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC80364u, 0x2549CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2549D4u;
label_2549d4:
    // 0x2549d4: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x2549d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2549d8:
    // 0x2549d8: 0xe100ff82  sc          $zero, -0x7E($t0)
    ctx->pc = 0x2549d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294967170); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 0)); SET_GPR_S32(ctx, 0, 1); } else { SET_GPR_S32(ctx, 0, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_2549dc:
    // 0x2549dc: 0x10062900  beq         $zero, $a2, . + 4 + (0x2900 << 2)
label_2549e0:
    if (ctx->pc == 0x2549E0u) {
        ctx->pc = 0x2549E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549DCu;
        // 0x2549e0: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2549E4u;
        goto label_2549e4;
    }
    ctx->pc = 0x2549DCu;
    {
        const bool branch_taken_0x2549dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2549E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549DCu;
        // 0x2549e0: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549dc) {
            ctx->pc = 0x25EDE0u;
            { ctx->pc = 0x25ede0; return; }
        }
    }
    ctx->pc = 0x2549E4u;
label_2549e4:
    // 0x2549e4: 0x784b694b  lq          $t3, 0x694B($v0)
    ctx->pc = 0x2549e4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 26955)));
label_2549e8:
    // 0x2549e8: 0xe200ff  .word       0x00E200FF                   # dsra32      $zero, $v0, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2549e8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 3));
label_2549ec:
    // 0x2549ec: 0x100629  .word       0x00100629                   # mtsa        $zero # 00100600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2549ecu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2549f0:
    // 0x2549f0: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2549f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2549f4:
    // 0x2549f4: 0xff784b69  sd          $t8, 0x4B69($k1)
    ctx->pc = 0x2549f4u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 19305), GPR_U64(ctx, 24));
label_2549f8:
    // 0x2549f8: 0x2900e300  slti        $zero, $t0, -0x1D00
    ctx->pc = 0x2549f8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294959872) ? 1 : 0);
label_2549fc:
    // 0x2549fc: 0x4b001006  vsubz.x     $vf0, $vf2, $vf0z
    ctx->pc = 0x2549fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_254a00:
    // 0x254a00: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254a04:
    // 0x254a04: 0xff784b  .word       0x00FF784B                   # movn        $t7, $a3, $ra # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a04u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 7));
label_254a08:
    // 0x254a08: 0x63201d7  bltzall     $s1, . + 4 + (0x1D7 << 2)
label_254a0c:
    if (ctx->pc == 0x254A0Cu) {
        ctx->pc = 0x254A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A08u;
        // 0x254a0c: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
        // Likely branch instruction at 0x254A0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A10u;
        goto label_254a10;
    }
    ctx->pc = 0x254A08u;
    {
        const bool branch_taken_0x254a08 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x254a08) {
            SET_GPR_U32(ctx, 31, 0x254A10u);
            ctx->pc = 0x254A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A08u;
            // 0x254a0c: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
            // Likely branch instruction at 0x254A0C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x255168u;
            { ctx->pc = 0x255168; return; }
        }
    }
    ctx->pc = 0x254A10u;
label_254a10:
    // 0x254a10: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x254a10u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_254a14:
    // 0x254a14: 0xf000ff82  scd         $zero, -0x7E($zero)
    ctx->pc = 0x254a14u;
//     throw std::runtime_error("Unhandled opcode: 0x3C at 0x254A14 raw=0xF000FF82");
 /* MITIGATED */
label_254a18:
    // 0x254a18: 0xf092e00  jal         func_C24B800
label_254a1c:
    if (ctx->pc == 0x254A1Cu) {
        ctx->pc = 0x254A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A18u;
        // 0x254a1c: 0x64466400  daddiu      $a2, $v0, 0x6400 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25600);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A20u;
        goto label_254a20;
    }
    ctx->pc = 0x254A18u;
    SET_GPR_U32(ctx, 31, 0x254A20u);
    ctx->pc = 0x254A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A18u;
    // 0x254a1c: 0x64466400  daddiu      $a2, $v0, 0x6400 (Delay Slot)
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25600);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC24B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC24B800u, 0x254A18u, 0x254A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A20u;
label_254a20:
    // 0x254a20: 0x78415f64  lq          $at, 0x5F64($v0)
    ctx->pc = 0x254a20u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 2), 24420)));
label_254a24:
    // 0x254a24: 0xe500ff  .word       0x00E500FF                   # dsra32      $zero, $a1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 3));
label_254a28:
    // 0x254a28: 0x100029  .word       0x00100029                   # mtsa        $zero # 00100000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254a28u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_254a2c:
    // 0x254a2c: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254a2cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254A2C raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254a30:
    // 0x254a30: 0xff824664  sd          $v0, 0x4664($gp)
    ctx->pc = 0x254a30u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18020), GPR_U64(ctx, 2));
label_254a34:
    // 0x254a34: 0x2c00e600  sltiu       $zero, $zero, -0x1A00
    ctx->pc = 0x254a34u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)4294960640) ? 1 : 0);
label_254a38:
    // 0x254a38: 0x50001000  beql        $zero, $zero, . + 4 + (0x1000 << 2)
label_254a3c:
    if (ctx->pc == 0x254A3Cu) {
        ctx->pc = 0x254A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A38u;
        // 0x254a3c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A40u;
        goto label_254a40;
    }
    ctx->pc = 0x254A38u;
    {
        const bool branch_taken_0x254a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254a38) {
            ctx->pc = 0x254A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A38u;
            // 0x254a3c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x258A3Cu;
            { ctx->pc = 0x258a3c; return; }
        }
    }
    ctx->pc = 0x254A40u;
label_254a40:
    // 0x254a40: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a40u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254a44:
    // 0x254a44: 0x2a00e7  .word       0x002A00E7                   # nor         $zero, $at, $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a44u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 10)));
label_254a48:
    // 0x254a48: 0x4b4b0111  vmaxy.xz    $vf4, $vf0, $vf11y
    ctx->pc = 0x254a48u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254a4c:
    // 0x254a4c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254a4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254a50:
    // 0x254a50: 0xe500ff82  swc1        $f0, -0x7E($t0)
    ctx->pc = 0x254a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967170), bits); }
label_254a54:
    // 0x254a54: 0x14012900  bne         $zero, $at, . + 4 + (0x2900 << 2)
label_254a58:
    if (ctx->pc == 0x254A58u) {
        ctx->pc = 0x254A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A54u;
        // 0x254a58: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254A58 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A5Cu;
        goto label_254a5c;
    }
    ctx->pc = 0x254A54u;
    {
        const bool branch_taken_0x254a54 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 1));
        ctx->pc = 0x254A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A54u;
        // 0x254a58: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254A58 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a54) {
            ctx->pc = 0x25EE58u;
            { ctx->pc = 0x25ee58; return; }
        }
    }
    ctx->pc = 0x254A5Cu;
label_254a5c:
    // 0x254a5c: 0x82466446  lb          $a2, 0x6446($s2)
    ctx->pc = 0x254a5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 25670)));
label_254a60:
    // 0x254a60: 0xe700ff  .word       0x00E700FF                   # dsra32      $zero, $a3, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a60u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 3));
label_254a64:
    // 0x254a64: 0x14012c  .word       0x0014012C                   # dadd        $zero, $zero, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_254a68:
    // 0x254a68: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254a6c:
    if (ctx->pc == 0x254A6Cu) {
        ctx->pc = 0x254A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A68u;
        // 0x254a6c: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A70u;
        goto label_254a70;
    }
    ctx->pc = 0x254A68u;
    {
        const bool branch_taken_0x254a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254a68) {
            ctx->pc = 0x254A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A68u;
            // 0x254a6c: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268BACu;
            { ctx->pc = 0x268bac; return; }
        }
    }
    ctx->pc = 0x254A70u;
label_254a70:
    // 0x254a70: 0x2a00e800  slti        $zero, $s0, -0x1800
    ctx->pc = 0x254a70u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961152) ? 1 : 0);
label_254a74:
    // 0x254a74: 0x4b011501  vaddy.x     $vf20, $vf2, $vf1y
    ctx->pc = 0x254a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254a78:
    // 0x254a78: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254a7c:
    // 0x254a7c: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a7cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254a80:
    // 0x254a80: 0x2900e6  .word       0x002900E6                   # xor         $zero, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 9));
label_254a84:
    // 0x254a84: 0x46460016  .word       0x46460016                   # INVALID     $s2, $a2, 0x16 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254a84u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x16 at 0x254A84 raw=0x46460016"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254a88:
    // 0x254a88: 0x46644646  .word       0x46644646                   # INVALID     $s3, $a0, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254a88u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x6 at 0x254A88 raw=0x46644646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254a8c:
    // 0x254a8c: 0xe700ff82  swc1        $f0, -0x7E($t8)
    ctx->pc = 0x254a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294967170), bits); }
label_254a90:
    // 0x254a90: 0x16012c00  bne         $s0, $at, . + 4 + (0x2C00 << 2)
label_254a94:
    if (ctx->pc == 0x254A94u) {
        ctx->pc = 0x254A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A90u;
        // 0x254a94: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254A94 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A98u;
        goto label_254a98;
    }
    ctx->pc = 0x254A90u;
    {
        const bool branch_taken_0x254a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 1));
        ctx->pc = 0x254A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A90u;
        // 0x254a94: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254A94 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a90) {
            ctx->pc = 0x25FA94u;
            { ctx->pc = 0x25fa94; return; }
        }
    }
    ctx->pc = 0x254A98u;
label_254a98:
    // 0x254a98: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x254a98u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_254a9c:
    // 0x254a9c: 0xe800ff  .word       0x00E800FF                   # dsra32      $zero, $t0, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (32 + 3));
label_254aa0:
    // 0x254aa0: 0x117012a  .word       0x0117012A                   # slt         $zero, $t0, $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254aa0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_254aa4:
    // 0x254aa4: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254aa8:
    // 0x254aa8: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254aac:
    // 0x254aac: 0x2a00e900  slti        $zero, $s0, -0x1700
    ctx->pc = 0x254aacu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961408) ? 1 : 0);
label_254ab0:
    // 0x254ab0: 0x4b011100  vaddx.x     $vf4, $vf2, $vf1x
    ctx->pc = 0x254ab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254ab4:
    // 0x254ab4: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254ab8:
    // 0x254ab8: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254ab8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254abc:
    // 0x254abc: 0x12a00ea  .word       0x012A00EA                   # slt         $zero, $t1, $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254abcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_254ac0:
    // 0x254ac0: 0x4b4b0111  vmaxy.xz    $vf4, $vf0, $vf11y
    ctx->pc = 0x254ac0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254ac4:
    // 0x254ac4: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254ac8:
    // 0x254ac8: 0xe900ff82  swc2        $0, -0x7E($t0)
    ctx->pc = 0x254ac8u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254AC8 raw=0xE900FF82");
 /* MITIGATED */
label_254acc:
    // 0x254acc: 0x15002a00  bnez        $t0, . + 4 + (0x2A00 << 2)
label_254ad0:
    if (ctx->pc == 0x254AD0u) {
        ctx->pc = 0x254AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ACCu;
        // 0x254ad0: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254AD4u;
        goto label_254ad4;
    }
    ctx->pc = 0x254ACCu;
    {
        const bool branch_taken_0x254acc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x254AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ACCu;
        // 0x254ad0: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254acc) {
            ctx->pc = 0x25F2D0u;
            { ctx->pc = 0x25f2d0; return; }
        }
    }
    ctx->pc = 0x254AD4u;
label_254ad4:
    // 0x254ad4: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254ad4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254ad8:
    // 0x254ad8: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254ad8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_254adc:
    // 0x254adc: 0x115012a  .word       0x0115012A                   # slt         $zero, $t0, $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254adcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_254ae0:
    // 0x254ae0: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254ae4:
    // 0x254ae4: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254ae8:
    // 0x254ae8: 0x2a00e900  slti        $zero, $s0, -0x1700
    ctx->pc = 0x254ae8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961408) ? 1 : 0);
label_254aec:
    // 0x254aec: 0x4b011701  vaddy.x     $vf28, $vf2, $vf1y
    ctx->pc = 0x254aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254af0:
    // 0x254af0: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254af4:
    // 0x254af4: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254af4u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254af8:
    // 0x254af8: 0x2a00ea  .word       0x002A00EA                   # slt         $zero, $at, $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254af8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_254afc:
    // 0x254afc: 0x4b4b0117  vminiw.xz   $vf4, $vf0, $vf11w
    ctx->pc = 0x254afcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254b00:
    // 0x254b00: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254b04:
    // 0x254b04: 0xed00ff82  .word       0xED00FF82                   # INVALID     $t0, $zero, -0x7E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254b04u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x254B04 raw=0xED00FF82");
 /* MITIGATED */
label_254b08:
    // 0x254b08: 0xe002d00  jal         func_800B400
label_254b0c:
    if (ctx->pc == 0x254B0Cu) {
        ctx->pc = 0x254B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B08u;
        // 0x254b0c: 0x643c5a00  daddiu      $gp, $at, 0x5A00 (Delay Slot)
        SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23040);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254B10u;
        goto label_254b10;
    }
    ctx->pc = 0x254B08u;
    SET_GPR_U32(ctx, 31, 0x254B10u);
    ctx->pc = 0x254B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B08u;
    // 0x254b0c: 0x643c5a00  daddiu      $gp, $at, 0x5A00 (Delay Slot)
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23040);
    ctx->in_delay_slot = false;
    ctx->pc = 0x800B400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x800B400u, 0x254B08u, 0x254B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B10u;
label_254b10:
    // 0x254b10: 0x783c5a64  lq          $gp, 0x5A64($at)
    ctx->pc = 0x254b10u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23140)));
label_254b14:
    // 0x254b14: 0xee00ff  .word       0x00EE00FF                   # dsra32      $zero, $t6, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 14) >> (32 + 3));
label_254b18:
    // 0x254b18: 0xe012e  .word       0x000E012E                   # dsub        $zero, $zero, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_254b1c:
    // 0x254b1c: 0x6464415f  daddiu      $a0, $v1, 0x415F
    ctx->pc = 0x254b1cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)16735);
label_254b20:
    // 0x254b20: 0xff78415f  sd          $t8, 0x415F($k1)
    ctx->pc = 0x254b20u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 16735), GPR_U64(ctx, 24));
label_254b24:
    // 0x254b24: 0x2e00ef00  sltiu       $zero, $s0, -0x1100
    ctx->pc = 0x254b24u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4294962944) ? 1 : 0);
label_254b28:
    // 0x254b28: 0x5a000f00  blezl       $s0, . + 4 + (0xF00 << 2)
label_254b2c:
    if (ctx->pc == 0x254B2Cu) {
        ctx->pc = 0x254B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B28u;
        // 0x254b2c: 0x5a64643c  .word       0x5A64643C                   # blezl       $s3, . + 4 + (0x643C << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x254B2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254B30u;
        goto label_254b30;
    }
    ctx->pc = 0x254B28u;
    {
        const bool branch_taken_0x254b28 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x254b28) {
            ctx->pc = 0x254B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B28u;
            // 0x254b2c: 0x5a64643c  .word       0x5A64643C                   # blezl       $s3, . + 4 + (0x643C << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x254B2C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25872Cu;
            { ctx->pc = 0x25872c; return; }
        }
    }
    ctx->pc = 0x254B30u;
label_254b30:
    // 0x254b30: 0xff783c  .word       0x00FF783C                   # dsll32      $t7, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 31) << (32 + 0));
label_254b34:
    // 0x254b34: 0x12e00f0  tge         $t1, $t6, 3
    ctx->pc = 0x254b34u;
    if (GPR_S64(ctx, 9) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_254b38:
    // 0x254b38: 0x4664000f  .word       0x4664000F                   # INVALID     $s3, $a0, 0xF # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254b38u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0xF at 0x254B38 raw=0x4664000F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254b3c:
    // 0x254b3c: 0x415f6464  .word       0x415F6464                   # INVALID     $t2, $ra, 0x6464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x254b3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x254B3C raw=0x415F6464"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254b40:
    // 0x254b40: 0xf100ff78  scd         $zero, -0x88($t0)
    ctx->pc = 0x254b40u;
//     throw std::runtime_error("Unhandled opcode: 0x3C at 0x254B40 raw=0xF100FF78");
 /* MITIGATED */
label_254b44:
    // 0x254b44: 0x15002a00  bnez        $t0, . + 4 + (0x2A00 << 2)
label_254b48:
    if (ctx->pc == 0x254B48u) {
        ctx->pc = 0x254B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B44u;
        // 0x254b48: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254B4Cu;
        goto label_254b4c;
    }
    ctx->pc = 0x254B44u;
    {
        const bool branch_taken_0x254b44 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x254B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B44u;
        // 0x254b48: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b44) {
            ctx->pc = 0x25F348u;
            { ctx->pc = 0x25f348; return; }
        }
    }
    ctx->pc = 0x254B4Cu;
label_254b4c:
    // 0x254b4c: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254b4cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254b50:
    // 0x254b50: 0xda00ff  .word       0x00DA00FF                   # dsra32      $zero, $k0, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b50u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 26) >> (32 + 3));
label_254b54:
    // 0x254b54: 0x17012a  .word       0x0017012A                   # slt         $zero, $zero, $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b54u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_254b58:
    // 0x254b58: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254b5c:
    // 0x254b5c: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254b60:
    // 0x254b60: 0x2900e522  slti        $zero, $t0, -0x1ADE
    ctx->pc = 0x254b60u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294960418) ? 1 : 0);
label_254b64:
    // 0x254b64: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x254b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_254b68:
    // 0x254b68: 0x64464646  daddiu      $a2, $v0, 0x4646
    ctx->pc = 0x254b68u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)17990);
label_254b6c:
    // 0x254b6c: 0xff8246  .word       0x00FF8246                   # srlv        $s0, $ra, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 7) & 0x1F));
label_254b70:
    // 0x254b70: 0x22c00e7  .word       0x022C00E7                   # nor         $zero, $s1, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b70u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 12)));
label_254b74:
    // 0x254b74: 0x50500010  beql        $v0, $s0, . + 4 + (0x10 << 2)
label_254b78:
    if (ctx->pc == 0x254B78u) {
        ctx->pc = 0x254B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B74u;
        // 0x254b78: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254B7Cu;
        goto label_254b7c;
    }
    ctx->pc = 0x254B74u;
    {
        const bool branch_taken_0x254b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254b74) {
            ctx->pc = 0x254B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B74u;
            // 0x254b78: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254BB8u;
            goto label_254bb8;
        }
    }
    ctx->pc = 0x254B7Cu;
label_254b7c:
    // 0x254b7c: 0xe800ff87  swc2        $0, -0x79($zero)
    ctx->pc = 0x254b7cu;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254B7C raw=0xE800FF87");
 /* MITIGATED */
label_254b80:
    // 0x254b80: 0x11022a00  beq         $t0, $v0, . + 4 + (0x2A00 << 2)
label_254b84:
    if (ctx->pc == 0x254B84u) {
        ctx->pc = 0x254B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B80u;
        // 0x254b84: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254B88u;
        goto label_254b88;
    }
    ctx->pc = 0x254B80u;
    {
        const bool branch_taken_0x254b80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x254B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B80u;
        // 0x254b84: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b80) {
            ctx->pc = 0x25F384u;
            { ctx->pc = 0x25f384; return; }
        }
    }
    ctx->pc = 0x254B88u;
label_254b88:
    // 0x254b88: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254b88u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254b8c:
    // 0x254b8c: 0xe500ff  .word       0x00E500FF                   # dsra32      $zero, $a1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 3));
label_254b90:
    // 0x254b90: 0x140329  .word       0x00140329                   # mtsa        $zero # 00140300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254b90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_254b94:
    // 0x254b94: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254b94u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254B94 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254b98:
    // 0x254b98: 0xff824664  sd          $v0, 0x4664($gp)
    ctx->pc = 0x254b98u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18020), GPR_U64(ctx, 2));
label_254b9c:
    // 0x254b9c: 0x2c00e700  sltiu       $zero, $zero, -0x1900
    ctx->pc = 0x254b9cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)4294960896) ? 1 : 0);
label_254ba0:
    // 0x254ba0: 0x50001403  beql        $zero, $zero, . + 4 + (0x1403 << 2)
label_254ba4:
    if (ctx->pc == 0x254BA4u) {
        ctx->pc = 0x254BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BA0u;
        // 0x254ba4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254BA8u;
        goto label_254ba8;
    }
    ctx->pc = 0x254BA0u;
    {
        const bool branch_taken_0x254ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254ba0) {
            ctx->pc = 0x254BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254BA0u;
            // 0x254ba4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259BB0u;
            { ctx->pc = 0x259bb0; return; }
        }
    }
    ctx->pc = 0x254BA8u;
label_254ba8:
    // 0x254ba8: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254ba8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254bac:
    // 0x254bac: 0x32a00e8  .word       0x032A00E8                   # mfsa        $zero # 032A00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254bacu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_254bb0:
    // 0x254bb0: 0x4b4b0115  vminiy.xz   $vf4, $vf0, $vf11y
    ctx->pc = 0x254bb0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254bb4:
    // 0x254bb4: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254bb8:
    // 0x254bb8: 0xe500ff82  swc1        $f0, -0x7E($t0)
    ctx->pc = 0x254bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967170), bits); }
label_254bbc:
    // 0x254bbc: 0x16022900  bne         $s0, $v0, . + 4 + (0x2900 << 2)
label_254bc0:
    if (ctx->pc == 0x254BC0u) {
        ctx->pc = 0x254BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BBCu;
        // 0x254bc0: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254BC0 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254BC4u;
        goto label_254bc4;
    }
    ctx->pc = 0x254BBCu;
    {
        const bool branch_taken_0x254bbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x254BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BBCu;
        // 0x254bc0: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254BC0 raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bbc) {
            ctx->pc = 0x25EFC0u;
            { ctx->pc = 0x25efc0; return; }
        }
    }
    ctx->pc = 0x254BC4u;
label_254bc4:
    // 0x254bc4: 0x82466446  lb          $a2, 0x6446($s2)
    ctx->pc = 0x254bc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 25670)));
label_254bc8:
    // 0x254bc8: 0xe700ff  .word       0x00E700FF                   # dsra32      $zero, $a3, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254bc8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 3));
label_254bcc:
    // 0x254bcc: 0x16032c  .word       0x0016032C                   # dadd        $zero, $zero, $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254bccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_254bd0:
    // 0x254bd0: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254bd4:
    if (ctx->pc == 0x254BD4u) {
        ctx->pc = 0x254BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BD0u;
        // 0x254bd4: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254BD8u;
        goto label_254bd8;
    }
    ctx->pc = 0x254BD0u;
    {
        const bool branch_taken_0x254bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254bd0) {
            ctx->pc = 0x254BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254BD0u;
            // 0x254bd4: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268D14u;
            { ctx->pc = 0x268d14; return; }
        }
    }
    ctx->pc = 0x254BD8u;
label_254bd8:
    // 0x254bd8: 0x2a00e800  slti        $zero, $s0, -0x1800
    ctx->pc = 0x254bd8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961152) ? 1 : 0);
label_254bdc:
    // 0x254bdc: 0x4b011703  vaddw.x     $vf28, $vf2, $vf1w
    ctx->pc = 0x254bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254be0:
    // 0x254be0: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254be4:
    // 0x254be4: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254be4u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254be8:
    // 0x254be8: 0x22a00e9  .word       0x022A00E9                   # mtsa        $s1 # 000A00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254be8u;
    ctx->sa = GPR_U32(ctx, 17) & 0x7F;
label_254bec:
    // 0x254bec: 0x4b4b0111  vmaxy.xz    $vf4, $vf0, $vf11y
    ctx->pc = 0x254becu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254bf0:
    // 0x254bf0: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254bf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254bf4:
    // 0x254bf4: 0xea00ff82  swc2        $0, -0x7E($s0)
    ctx->pc = 0x254bf4u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254BF4 raw=0xEA00FF82");
 /* MITIGATED */
label_254bf8:
    // 0x254bf8: 0x11032a00  beq         $t0, $v1, . + 4 + (0x2A00 << 2)
label_254bfc:
    if (ctx->pc == 0x254BFCu) {
        ctx->pc = 0x254BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BF8u;
        // 0x254bfc: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254C00u;
        goto label_254c00;
    }
    ctx->pc = 0x254BF8u;
    {
        const bool branch_taken_0x254bf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x254BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BF8u;
        // 0x254bfc: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bf8) {
            ctx->pc = 0x25F3FCu;
            { ctx->pc = 0x25f3fc; return; }
        }
    }
    ctx->pc = 0x254C00u;
label_254c00:
    // 0x254c00: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254c00u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254c04:
    // 0x254c04: 0xe900ff  .word       0x00E900FF                   # dsra32      $zero, $t1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 9) >> (32 + 3));
label_254c08:
    // 0x254c08: 0x115022a  .word       0x0115022A                   # slt         $zero, $t0, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c08u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_254c0c:
    // 0x254c0c: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254c10:
    // 0x254c10: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254c10u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254c14:
    // 0x254c14: 0x2a00ea00  slti        $zero, $s0, -0x1600
    ctx->pc = 0x254c14u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961664) ? 1 : 0);
label_254c18:
    // 0x254c18: 0x4b011503  vaddw.x     $vf20, $vf2, $vf1w
    ctx->pc = 0x254c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254c1c:
    // 0x254c1c: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254c20:
    // 0x254c20: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c20u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254c24:
    // 0x254c24: 0x32a00e9  .word       0x032A00E9                   # mtsa        $t9 # 000A00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254c24u;
    ctx->sa = GPR_U32(ctx, 25) & 0x7F;
label_254c28:
    // 0x254c28: 0x4b4b0117  vminiw.xz   $vf4, $vf0, $vf11w
    ctx->pc = 0x254c28u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254c2c:
    // 0x254c2c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254c2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254c30:
    // 0x254c30: 0xea00ff82  swc2        $0, -0x7E($s0)
    ctx->pc = 0x254c30u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254C30 raw=0xEA00FF82");
 /* MITIGATED */
label_254c34:
    // 0x254c34: 0x17022a00  bne         $t8, $v0, . + 4 + (0x2A00 << 2)
label_254c38:
    if (ctx->pc == 0x254C38u) {
        ctx->pc = 0x254C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C34u;
        // 0x254c38: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254C3Cu;
        goto label_254c3c;
    }
    ctx->pc = 0x254C34u;
    {
        const bool branch_taken_0x254c34 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x254C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C34u;
        // 0x254c38: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c34) {
            ctx->pc = 0x25F438u;
            { ctx->pc = 0x25f438; return; }
        }
    }
    ctx->pc = 0x254C3Cu;
label_254c3c:
    // 0x254c3c: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254c3cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254c40:
    // 0x254c40: 0xed00ff  .word       0x00ED00FF                   # dsra32      $zero, $t5, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c40u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 13) >> (32 + 3));
label_254c44:
    // 0x254c44: 0xe022d  .word       0x000E022D                   # daddu       $zero, $zero, $t6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c44u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 14));
label_254c48:
    // 0x254c48: 0x64643c5a  daddiu      $a0, $v1, 0x3C5A
    ctx->pc = 0x254c48u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)15450);
label_254c4c:
    // 0x254c4c: 0xff783c5a  sd          $t8, 0x3C5A($k1)
    ctx->pc = 0x254c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 15450), GPR_U64(ctx, 24));
label_254c50:
    // 0x254c50: 0x2e00ee00  sltiu       $zero, $s0, -0x1200
    ctx->pc = 0x254c50u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4294962688) ? 1 : 0);
label_254c54:
    // 0x254c54: 0x5f000e03  bgtzl       $t8, . + 4 + (0xE03 << 2)
label_254c58:
    if (ctx->pc == 0x254C58u) {
        ctx->pc = 0x254C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C54u;
        // 0x254c58: 0x5f646441  .word       0x5F646441                   # bgtzl       $k1, . + 4 + (0x6441 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x254C58 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254C5Cu;
        goto label_254c5c;
    }
    ctx->pc = 0x254C54u;
    {
        const bool branch_taken_0x254c54 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x254c54) {
            ctx->pc = 0x254C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254C54u;
            // 0x254c58: 0x5f646441  .word       0x5F646441                   # bgtzl       $k1, . + 4 + (0x6441 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x254C58 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x258464u;
            { ctx->pc = 0x258464; return; }
        }
    }
    ctx->pc = 0x254C5Cu;
label_254c5c:
    // 0x254c5c: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x254C5C raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254c60:
    // 0x254c60: 0x22e00ef  .word       0x022E00EF                   # dsubu       $zero, $s1, $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) - GPR_U64(ctx, 14));
label_254c64:
    // 0x254c64: 0x3c5a000f  .word       0x3C5A000F                   # lui         $k0, 0xF # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254c64u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)15 << 16));
label_254c68:
    // 0x254c68: 0x3c5a6464  .word       0x3C5A6464                   # lui         $k0, 0x6464 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254c68u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)25700 << 16));
label_254c6c:
    // 0x254c6c: 0xf000ff78  scd         $zero, -0x88($zero)
    ctx->pc = 0x254c6cu;
//     throw std::runtime_error("Unhandled opcode: 0x3C at 0x254C6C raw=0xF000FF78");
 /* MITIGATED */
label_254c70:
    // 0x254c70: 0xf032e00  jal         func_C0CB800
label_254c74:
    if (ctx->pc == 0x254C74u) {
        ctx->pc = 0x254C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C70u;
        // 0x254c74: 0x64466400  daddiu      $a2, $v0, 0x6400 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25600);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254C78u;
        goto label_254c78;
    }
    ctx->pc = 0x254C70u;
    SET_GPR_U32(ctx, 31, 0x254C78u);
    ctx->pc = 0x254C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C70u;
    // 0x254c74: 0x64466400  daddiu      $a2, $v0, 0x6400 (Delay Slot)
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)25600);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0CB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0CB800u, 0x254C70u, 0x254C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C78u;
label_254c78:
    // 0x254c78: 0x78415f64  lq          $at, 0x5F64($v0)
    ctx->pc = 0x254c78u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 2), 24420)));
label_254c7c:
    // 0x254c7c: 0xf100ff  .word       0x00F100FF                   # dsra32      $zero, $s1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 17) >> (32 + 3));
label_254c80:
    // 0x254c80: 0x15022a  .word       0x0015022A                   # slt         $zero, $zero, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254c80u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_254c84:
    // 0x254c84: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254c84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254c88:
    // 0x254c88: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254c88u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254c8c:
    // 0x254c8c: 0x2a00da00  slti        $zero, $s0, -0x2600
    ctx->pc = 0x254c8cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294957568) ? 1 : 0);
label_254c90:
    // 0x254c90: 0x4b001703  vaddw.x     $vf28, $vf2, $vf0w
    ctx->pc = 0x254c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254c94:
    // 0x254c94: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254c98:
    // 0x254c98: 0x22ff824b  addi        $ra, $s7, -0x7DB5
    ctx->pc = 0x254c98u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 23), (int32_t)4294935115, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_254c9c:
    // 0x254c9c: 0x42900e5  tgeiu       $at, 0xE5
    ctx->pc = 0x254c9cu;
    if (GPR_U64(ctx, 1) >= (uint64_t)(int64_t)(int32_t)229) { runtime->handleTrap(rdram, ctx); }
label_254ca0:
    // 0x254ca0: 0x46460010  .word       0x46460010                   # INVALID     $s2, $a2, 0x10 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254ca0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x254CA0 raw=0x46460010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254ca4:
    // 0x254ca4: 0x46644646  .word       0x46644646                   # INVALID     $s3, $a0, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254ca4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x6 at 0x254CA4 raw=0x46644646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254ca8:
    // 0x254ca8: 0xe700ff82  swc1        $f0, -0x7E($t8)
    ctx->pc = 0x254ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294967170), bits); }
label_254cac:
    // 0x254cac: 0x10042c00  beq         $zero, $a0, . + 4 + (0x2C00 << 2)
label_254cb0:
    if (ctx->pc == 0x254CB0u) {
        ctx->pc = 0x254CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CACu;
        // 0x254cb0: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254CB0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254CB4u;
        goto label_254cb4;
    }
    ctx->pc = 0x254CACu;
    {
        const bool branch_taken_0x254cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x254CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CACu;
        // 0x254cb0: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254CB0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cac) {
            ctx->pc = 0x25FCB0u;
            { ctx->pc = 0x25fcb0; return; }
        }
    }
    ctx->pc = 0x254CB4u;
label_254cb4:
    // 0x254cb4: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x254cb4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_254cb8:
    // 0x254cb8: 0xe800ff  .word       0x00E800FF                   # dsra32      $zero, $t0, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254cb8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (32 + 3));
label_254cbc:
    // 0x254cbc: 0x111042a  .word       0x0111042A                   # slt         $zero, $t0, $s1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254cbcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_254cc0:
    // 0x254cc0: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254cc4:
    // 0x254cc4: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254cc8:
    // 0x254cc8: 0x2900e500  slti        $zero, $t0, -0x1B00
    ctx->pc = 0x254cc8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294960384) ? 1 : 0);
label_254ccc:
    // 0x254ccc: 0x46001405  abs.s       $f16, $f2
    ctx->pc = 0x254cccu;
    ctx->f[16] = FPU_ABS_S(ctx->f[2]);
label_254cd0:
    // 0x254cd0: 0x64464646  daddiu      $a2, $v0, 0x4646
    ctx->pc = 0x254cd0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)17990);
label_254cd4:
    // 0x254cd4: 0xff8246  .word       0x00FF8246                   # srlv        $s0, $ra, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 7) & 0x1F));
label_254cd8:
    // 0x254cd8: 0x52c00e7  teqi        $t1, 0xE7
    ctx->pc = 0x254cd8u;
    if (GPR_S64(ctx, 9) == (int64_t)(int32_t)231) { runtime->handleTrap(rdram, ctx); }
label_254cdc:
    // 0x254cdc: 0x50500014  beql        $v0, $s0, . + 4 + (0x14 << 2)
label_254ce0:
    if (ctx->pc == 0x254CE0u) {
        ctx->pc = 0x254CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CDCu;
        // 0x254ce0: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254CE4u;
        goto label_254ce4;
    }
    ctx->pc = 0x254CDCu;
    {
        const bool branch_taken_0x254cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254cdc) {
            ctx->pc = 0x254CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254CDCu;
            // 0x254ce0: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254D30u;
            goto label_254d30;
        }
    }
    ctx->pc = 0x254CE4u;
label_254ce4:
    // 0x254ce4: 0xe800ff87  swc2        $0, -0x79($zero)
    ctx->pc = 0x254ce4u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254CE4 raw=0xE800FF87");
 /* MITIGATED */
label_254ce8:
    // 0x254ce8: 0x15052a00  bne         $t0, $a1, . + 4 + (0x2A00 << 2)
label_254cec:
    if (ctx->pc == 0x254CECu) {
        ctx->pc = 0x254CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CE8u;
        // 0x254cec: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254CF0u;
        goto label_254cf0;
    }
    ctx->pc = 0x254CE8u;
    {
        const bool branch_taken_0x254ce8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x254CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CE8u;
        // 0x254cec: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ce8) {
            ctx->pc = 0x25F4ECu;
            { ctx->pc = 0x25f4ec; return; }
        }
    }
    ctx->pc = 0x254CF0u;
label_254cf0:
    // 0x254cf0: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254cf0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254cf4:
    // 0x254cf4: 0xe500ff  .word       0x00E500FF                   # dsra32      $zero, $a1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 3));
label_254cf8:
    // 0x254cf8: 0x160429  .word       0x00160429                   # mtsa        $zero # 00160400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x254cf8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_254cfc:
    // 0x254cfc: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254cfcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254CFC raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254d00:
    // 0x254d00: 0xff824664  sd          $v0, 0x4664($gp)
    ctx->pc = 0x254d00u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18020), GPR_U64(ctx, 2));
label_254d04:
    // 0x254d04: 0x2c00e700  sltiu       $zero, $zero, -0x1900
    ctx->pc = 0x254d04u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)4294960896) ? 1 : 0);
label_254d08:
    // 0x254d08: 0x50001605  beql        $zero, $zero, . + 4 + (0x1605 << 2)
label_254d0c:
    if (ctx->pc == 0x254D0Cu) {
        ctx->pc = 0x254D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D08u;
        // 0x254d0c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254D10u;
        goto label_254d10;
    }
    ctx->pc = 0x254D08u;
    {
        const bool branch_taken_0x254d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254d08) {
            ctx->pc = 0x254D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254D08u;
            // 0x254d0c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A520u;
            { ctx->pc = 0x25a520; return; }
        }
    }
    ctx->pc = 0x254D10u;
label_254d10:
    // 0x254d10: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d10u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254d14:
    // 0x254d14: 0x52a00e8  tlti        $t1, 0xE8
    ctx->pc = 0x254d14u;
    if (GPR_S64(ctx, 9) < (int64_t)(int32_t)232) { runtime->handleTrap(rdram, ctx); }
label_254d18:
    // 0x254d18: 0x4b4b0117  vminiw.xz   $vf4, $vf0, $vf11w
    ctx->pc = 0x254d18u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254d1c:
    // 0x254d1c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254d1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254d20:
    // 0x254d20: 0xe900ff82  swc2        $0, -0x7E($t0)
    ctx->pc = 0x254d20u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254D20 raw=0xE900FF82");
 /* MITIGATED */
label_254d24:
    // 0x254d24: 0x11042a00  beq         $t0, $a0, . + 4 + (0x2A00 << 2)
label_254d28:
    if (ctx->pc == 0x254D28u) {
        ctx->pc = 0x254D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D24u;
        // 0x254d28: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254D2Cu;
        goto label_254d2c;
    }
    ctx->pc = 0x254D24u;
    {
        const bool branch_taken_0x254d24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x254D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D24u;
        // 0x254d28: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d24) {
            ctx->pc = 0x25F528u;
            { ctx->pc = 0x25f528; return; }
        }
    }
    ctx->pc = 0x254D2Cu;
label_254d2c:
    // 0x254d2c: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254d2cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254d30:
    // 0x254d30: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_254d34:
    // 0x254d34: 0x111052a  .word       0x0111052A                   # slt         $zero, $t0, $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d34u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_254d38:
    // 0x254d38: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254d3c:
    // 0x254d3c: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254d40:
    // 0x254d40: 0x2a00e900  slti        $zero, $s0, -0x1700
    ctx->pc = 0x254d40u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961408) ? 1 : 0);
label_254d44:
    // 0x254d44: 0x4b011504  vsubx.x     $vf20, $vf2, $vf1x
    ctx->pc = 0x254d44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254d48:
    // 0x254d48: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254d4c:
    // 0x254d4c: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d4cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254d50:
    // 0x254d50: 0x52a00ea  tlti        $t1, 0xEA
    ctx->pc = 0x254d50u;
    if (GPR_S64(ctx, 9) < (int64_t)(int32_t)234) { runtime->handleTrap(rdram, ctx); }
label_254d54:
    // 0x254d54: 0x4b4b0115  vminiy.xz   $vf4, $vf0, $vf11y
    ctx->pc = 0x254d54u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254d58:
    // 0x254d58: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254d5c:
    // 0x254d5c: 0xe900ff82  swc2        $0, -0x7E($t0)
    ctx->pc = 0x254d5cu;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254D5C raw=0xE900FF82");
 /* MITIGATED */
label_254d60:
    // 0x254d60: 0x17052a00  bne         $t8, $a1, . + 4 + (0x2A00 << 2)
label_254d64:
    if (ctx->pc == 0x254D64u) {
        ctx->pc = 0x254D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D60u;
        // 0x254d64: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254D68u;
        goto label_254d68;
    }
    ctx->pc = 0x254D60u;
    {
        const bool branch_taken_0x254d60 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 5));
        ctx->pc = 0x254D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D60u;
        // 0x254d64: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d60) {
            ctx->pc = 0x25F564u;
            { ctx->pc = 0x25f564; return; }
        }
    }
    ctx->pc = 0x254D68u;
label_254d68:
    // 0x254d68: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254d68u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254d6c:
    // 0x254d6c: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_254d70:
    // 0x254d70: 0x117042a  .word       0x0117042A                   # slt         $zero, $t0, $s7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d70u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_254d74:
    // 0x254d74: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254d78:
    // 0x254d78: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254d78u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254d7c:
    // 0x254d7c: 0x2d00ed00  sltiu       $zero, $t0, -0x1300
    ctx->pc = 0x254d7cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4294962432) ? 1 : 0);
label_254d80:
    // 0x254d80: 0x5a000e04  blezl       $s0, . + 4 + (0xE04 << 2)
label_254d84:
    if (ctx->pc == 0x254D84u) {
        ctx->pc = 0x254D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D80u;
        // 0x254d84: 0x5a64643c  .word       0x5A64643C                   # blezl       $s3, . + 4 + (0x643C << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x254D84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254D88u;
        goto label_254d88;
    }
    ctx->pc = 0x254D80u;
    {
        const bool branch_taken_0x254d80 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x254d80) {
            ctx->pc = 0x254D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254D80u;
            // 0x254d84: 0x5a64643c  .word       0x5A64643C                   # blezl       $s3, . + 4 + (0x643C << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x254D84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x258594u;
            { ctx->pc = 0x258594; return; }
        }
    }
    ctx->pc = 0x254D88u;
label_254d88:
    // 0x254d88: 0xff783c  .word       0x00FF783C                   # dsll32      $t7, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254d88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 31) << (32 + 0));
label_254d8c:
    // 0x254d8c: 0x52e00ee  tnei        $t1, 0xEE
    ctx->pc = 0x254d8cu;
    if (GPR_S64(ctx, 9) != (int64_t)(int32_t)238) { runtime->handleTrap(rdram, ctx); }
label_254d90:
    // 0x254d90: 0x415f000e  .word       0x415F000E                   # INVALID     $t2, $ra, 0xE # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x254d90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x254D90 raw=0x415F000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254d94:
    // 0x254d94: 0x415f6464  .word       0x415F6464                   # INVALID     $t2, $ra, 0x6464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x254d94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x254D94 raw=0x415F6464"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254d98:
    // 0x254d98: 0xef00ff78  .word       0xEF00FF78                   # INVALID     $t8, $zero, -0x88 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254d98u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x254D98 raw=0xEF00FF78");
 /* MITIGATED */
label_254d9c:
    // 0x254d9c: 0xf042e00  jal         func_C10B800
label_254da0:
    if (ctx->pc == 0x254DA0u) {
        ctx->pc = 0x254DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D9Cu;
        // 0x254da0: 0x643c5a00  daddiu      $gp, $at, 0x5A00 (Delay Slot)
        SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23040);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254DA4u;
        goto label_254da4;
    }
    ctx->pc = 0x254D9Cu;
    SET_GPR_U32(ctx, 31, 0x254DA4u);
    ctx->pc = 0x254DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D9Cu;
    // 0x254da0: 0x643c5a00  daddiu      $gp, $at, 0x5A00 (Delay Slot)
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)23040);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC10B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC10B800u, 0x254D9Cu, 0x254DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DA4u;
label_254da4:
    // 0x254da4: 0x783c5a64  lq          $gp, 0x5A64($at)
    ctx->pc = 0x254da4u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23140)));
label_254da8:
    // 0x254da8: 0xf000ff  .word       0x00F000FF                   # dsra32      $zero, $s0, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254da8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 16) >> (32 + 3));
label_254dac:
    // 0x254dac: 0xf052e  .word       0x000F052E                   # dsub        $zero, $zero, $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254dacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 15); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_254db0:
    // 0x254db0: 0x64644664  daddiu      $a0, $v1, 0x4664
    ctx->pc = 0x254db0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18020);
label_254db4:
    // 0x254db4: 0xff78415f  sd          $t8, 0x415F($k1)
    ctx->pc = 0x254db4u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 16735), GPR_U64(ctx, 24));
label_254db8:
    // 0x254db8: 0x2a00f100  slti        $zero, $s0, -0xF00
    ctx->pc = 0x254db8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294963456) ? 1 : 0);
label_254dbc:
    // 0x254dbc: 0x4b001504  vsubx.x     $vf20, $vf2, $vf0x
    ctx->pc = 0x254dbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254dc0:
    // 0x254dc0: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254dc4:
    // 0x254dc4: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254dc4u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254dc8:
    // 0x254dc8: 0x52a00da  tlti        $t1, 0xDA
    ctx->pc = 0x254dc8u;
    if (GPR_S64(ctx, 9) < (int64_t)(int32_t)218) { runtime->handleTrap(rdram, ctx); }
label_254dcc:
    // 0x254dcc: 0x4b4b0017  vminiw.xz   $vf0, $vf0, $vf11w
    ctx->pc = 0x254dccu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_254dd0:
    // 0x254dd0: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254dd4:
    // 0x254dd4: 0xe522ff82  swc1        $f2, -0x7E($t1)
    ctx->pc = 0x254dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967170), bits); }
label_254dd8:
    // 0x254dd8: 0x10082900  beq         $zero, $t0, . + 4 + (0x2900 << 2)
label_254ddc:
    if (ctx->pc == 0x254DDCu) {
        ctx->pc = 0x254DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DD8u;
        // 0x254ddc: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254DDC raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254DE0u;
        goto label_254de0;
    }
    ctx->pc = 0x254DD8u;
    {
        const bool branch_taken_0x254dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x254DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DD8u;
        // 0x254ddc: 0x46464600  .word       0x46464600                   # INVALID     $s2, $a2, 0x4600 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x0 at 0x254DDC raw=0x46464600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dd8) {
            ctx->pc = 0x25F1DCu;
            { ctx->pc = 0x25f1dc; return; }
        }
    }
    ctx->pc = 0x254DE0u;
label_254de0:
    // 0x254de0: 0x82466446  lb          $a2, 0x6446($s2)
    ctx->pc = 0x254de0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 25670)));
label_254de4:
    // 0x254de4: 0xe700ff  .word       0x00E700FF                   # dsra32      $zero, $a3, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 3));
label_254de8:
    // 0x254de8: 0x10082c  dadd        $at, $zero, $s0
    ctx->pc = 0x254de8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_254dec:
    // 0x254dec: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254df0:
    if (ctx->pc == 0x254DF0u) {
        ctx->pc = 0x254DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DECu;
        // 0x254df0: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254DF4u;
        goto label_254df4;
    }
    ctx->pc = 0x254DECu;
    {
        const bool branch_taken_0x254dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254dec) {
            ctx->pc = 0x254DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254DECu;
            // 0x254df0: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268F30u;
            { ctx->pc = 0x268f30; return; }
        }
    }
    ctx->pc = 0x254DF4u;
label_254df4:
    // 0x254df4: 0x2a00e800  slti        $zero, $s0, -0x1800
    ctx->pc = 0x254df4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961152) ? 1 : 0);
label_254df8:
    // 0x254df8: 0x4b011108  vmaddx.x    $vf4, $vf2, $vf1x
    ctx->pc = 0x254df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254dfc:
    // 0x254dfc: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254e00:
    // 0x254e00: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e00u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254e04:
    // 0x254e04: 0x92900e5  j           func_4A40394
label_254e08:
    if (ctx->pc == 0x254E08u) {
        ctx->pc = 0x254E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E04u;
        // 0x254e08: 0x46460014  .word       0x46460014                   # INVALID     $s2, $a2, 0x14 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x14 at 0x254E08 raw=0x46460014"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254E0Cu;
        goto label_254e0c;
    }
    ctx->pc = 0x254E04u;
    ctx->pc = 0x254E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E04u;
    // 0x254e08: 0x46460014  .word       0x46460014                   # INVALID     $s2, $a2, 0x14 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x14 at 0x254E08 raw=0x46460014"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A40394u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A40394u, 0x254E04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254E0Cu;
label_254e0c:
    // 0x254e0c: 0x46644646  .word       0x46644646                   # INVALID     $s3, $a0, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254e0cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x6 at 0x254E0C raw=0x46644646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254e10:
    // 0x254e10: 0xe700ff82  swc1        $f0, -0x7E($t8)
    ctx->pc = 0x254e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294967170), bits); }
label_254e14:
    // 0x254e14: 0x14092c00  bne         $zero, $t1, . + 4 + (0x2C00 << 2)
label_254e18:
    if (ctx->pc == 0x254E18u) {
        ctx->pc = 0x254E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E14u;
        // 0x254e18: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254E18 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254E1Cu;
        goto label_254e1c;
    }
    ctx->pc = 0x254E14u;
    {
        const bool branch_taken_0x254e14 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 9));
        ctx->pc = 0x254E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E14u;
        // 0x254e18: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x254E18 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e14) {
            ctx->pc = 0x25FE18u;
            { ctx->pc = 0x25fe18; return; }
        }
    }
    ctx->pc = 0x254E1Cu;
label_254e1c:
    // 0x254e1c: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x254e1cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_254e20:
    // 0x254e20: 0xe800ff  .word       0x00E800FF                   # dsra32      $zero, $t0, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (32 + 3));
label_254e24:
    // 0x254e24: 0x115092a  .word       0x0115092A                   # slt         $at, $t0, $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_254e28:
    // 0x254e28: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254e28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254e2c:
    // 0x254e2c: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254e30:
    // 0x254e30: 0x2900e500  slti        $zero, $t0, -0x1B00
    ctx->pc = 0x254e30u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294960384) ? 1 : 0);
label_254e34:
    // 0x254e34: 0x46001608  round.l.s   $f24, $f2
    ctx->pc = 0x254e34u;
// //     throw std::runtime_error("Unhandled FPU.S instruction: function 0x8 at 0x254E34 raw=0x46001608"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254e38:
    // 0x254e38: 0x64464646  daddiu      $a2, $v0, 0x4646
    ctx->pc = 0x254e38u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)17990);
label_254e3c:
    // 0x254e3c: 0xff8246  .word       0x00FF8246                   # srlv        $s0, $ra, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 7) & 0x1F));
label_254e40:
    // 0x254e40: 0x92c00e7  j           func_4B0039C
label_254e44:
    if (ctx->pc == 0x254E44u) {
        ctx->pc = 0x254E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E40u;
        // 0x254e44: 0x50500016  beql        $v0, $s0, . + 4 + (0x16 << 2) (Delay Slot)
        // Likely branch instruction at 0x254E44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254E48u;
        goto label_254e48;
    }
    ctx->pc = 0x254E40u;
    ctx->pc = 0x254E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E40u;
    // 0x254e44: 0x50500016  beql        $v0, $s0, . + 4 + (0x16 << 2) (Delay Slot)
    // Likely branch instruction at 0x254E44 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0039Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0039Cu, 0x254E40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254E48u;
label_254e48:
    // 0x254e48: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x254e48u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_254e4c:
    // 0x254e4c: 0xe800ff87  swc2        $0, -0x79($zero)
    ctx->pc = 0x254e4cu;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254E4C raw=0xE800FF87");
 /* MITIGATED */
label_254e50:
    // 0x254e50: 0x17092a00  bne         $t8, $t1, . + 4 + (0x2A00 << 2)
label_254e54:
    if (ctx->pc == 0x254E54u) {
        ctx->pc = 0x254E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E50u;
        // 0x254e54: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254E58u;
        goto label_254e58;
    }
    ctx->pc = 0x254E50u;
    {
        const bool branch_taken_0x254e50 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 9));
        ctx->pc = 0x254E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E50u;
        // 0x254e54: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e50) {
            ctx->pc = 0x25F654u;
            { ctx->pc = 0x25f654; return; }
        }
    }
    ctx->pc = 0x254E58u;
label_254e58:
    // 0x254e58: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254e58u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254e5c:
    // 0x254e5c: 0xe900ff  .word       0x00E900FF                   # dsra32      $zero, $t1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 9) >> (32 + 3));
label_254e60:
    // 0x254e60: 0x111082a  slt         $at, $t0, $s1
    ctx->pc = 0x254e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_254e64:
    // 0x254e64: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254e64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254e68:
    // 0x254e68: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254e68u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254e6c:
    // 0x254e6c: 0x2a00ea00  slti        $zero, $s0, -0x1600
    ctx->pc = 0x254e6cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961664) ? 1 : 0);
label_254e70:
    // 0x254e70: 0x4b011109  vmaddy.x    $vf4, $vf2, $vf1y
    ctx->pc = 0x254e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254e74:
    // 0x254e74: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254e78:
    // 0x254e78: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e78u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254e7c:
    // 0x254e7c: 0x82a00e9  j           func_A803A4
label_254e80:
    if (ctx->pc == 0x254E80u) {
        ctx->pc = 0x254E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E7Cu;
        // 0x254e80: 0x4b4b0115  vminiy.xz   $vf4, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254E84u;
        goto label_254e84;
    }
    ctx->pc = 0x254E7Cu;
    ctx->pc = 0x254E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E7Cu;
    // 0x254e80: 0x4b4b0115  vminiy.xz   $vf4, $vf0, $vf11y (Delay Slot)
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xA803A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA803A4u, 0x254E7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254E84u;
label_254e84:
    // 0x254e84: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254e84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254e88:
    // 0x254e88: 0xea00ff82  swc2        $0, -0x7E($s0)
    ctx->pc = 0x254e88u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x254E88 raw=0xEA00FF82");
 /* MITIGATED */
label_254e8c:
    // 0x254e8c: 0x15092a00  bne         $t0, $t1, . + 4 + (0x2A00 << 2)
label_254e90:
    if (ctx->pc == 0x254E90u) {
        ctx->pc = 0x254E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E8Cu;
        // 0x254e90: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254E94u;
        goto label_254e94;
    }
    ctx->pc = 0x254E8Cu;
    {
        const bool branch_taken_0x254e8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x254E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E8Cu;
        // 0x254e90: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e8c) {
            ctx->pc = 0x25F690u;
            { ctx->pc = 0x25f690; return; }
        }
    }
    ctx->pc = 0x254E94u;
label_254e94:
    // 0x254e94: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254e98:
    // 0x254e98: 0xe900ff  .word       0x00E900FF                   # dsra32      $zero, $t1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e98u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 9) >> (32 + 3));
label_254e9c:
    // 0x254e9c: 0x117092a  .word       0x0117092A                   # slt         $at, $t0, $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_254ea0:
    // 0x254ea0: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254ea4:
    // 0x254ea4: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254ea8:
    // 0x254ea8: 0x2a00ea00  slti        $zero, $s0, -0x1600
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294961664) ? 1 : 0);
label_254eac:
    // 0x254eac: 0x4b011708  vmaddx.x    $vf28, $vf2, $vf1x
    ctx->pc = 0x254eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_254eb0:
    // 0x254eb0: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254eb4:
    // 0x254eb4: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254eb4u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254eb8:
    // 0x254eb8: 0x82d00ed  j           func_B403B4
label_254ebc:
    if (ctx->pc == 0x254EBCu) {
        ctx->pc = 0x254EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EB8u;
        // 0x254ebc: 0x3c5a000e  .word       0x3C5A000E                   # lui         $k0, 0xE # 00400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)14 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EC0u;
        goto label_254ec0;
    }
    ctx->pc = 0x254EB8u;
    ctx->pc = 0x254EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EB8u;
    // 0x254ebc: 0x3c5a000e  .word       0x3C5A000E                   # lui         $k0, 0xE # 00400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0xB403B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB403B4u, 0x254EB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254EC0u;
label_254ec0:
    // 0x254ec0: 0x3c5a6464  .word       0x3C5A6464                   # lui         $k0, 0x6464 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)25700 << 16));
label_254ec4:
    // 0x254ec4: 0xee00ff78  .word       0xEE00FF78                   # INVALID     $s0, $zero, -0x88 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254ec4u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x254EC4 raw=0xEE00FF78");
 /* MITIGATED */
label_254ec8:
    // 0x254ec8: 0xe092e00  jal         func_824B800
label_254ecc:
    if (ctx->pc == 0x254ECCu) {
        ctx->pc = 0x254ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EC8u;
        // 0x254ecc: 0x64415f00  daddiu      $at, $v0, 0x5F00 (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254ED0u;
        goto label_254ed0;
    }
    ctx->pc = 0x254EC8u;
    SET_GPR_U32(ctx, 31, 0x254ED0u);
    ctx->pc = 0x254ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EC8u;
    // 0x254ecc: 0x64415f00  daddiu      $at, $v0, 0x5F00 (Delay Slot)
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x824B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x824B800u, 0x254EC8u, 0x254ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254ED0u;
label_254ed0:
    // 0x254ed0: 0x78415f64  lq          $at, 0x5F64($v0)
    ctx->pc = 0x254ed0u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 2), 24420)));
label_254ed4:
    // 0x254ed4: 0xef00ff  .word       0x00EF00FF                   # dsra32      $zero, $t7, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 15) >> (32 + 3));
    ctx->pc = 0x254ed8u;
    return;
}
