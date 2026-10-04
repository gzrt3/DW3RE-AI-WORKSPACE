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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part96(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x217750u: goto label_217750;
        case 0x217754u: goto label_217754;
        case 0x217758u: goto label_217758;
        case 0x21775cu: goto label_21775c;
        case 0x217760u: goto label_217760;
        case 0x217764u: goto label_217764;
        case 0x217768u: goto label_217768;
        case 0x21776cu: goto label_21776c;
        case 0x217770u: goto label_217770;
        case 0x217774u: goto label_217774;
        case 0x217778u: goto label_217778;
        case 0x21777cu: goto label_21777c;
        case 0x217780u: goto label_217780;
        case 0x217784u: goto label_217784;
        case 0x217788u: goto label_217788;
        case 0x21778cu: goto label_21778c;
        case 0x217790u: goto label_217790;
        case 0x217794u: goto label_217794;
        case 0x217798u: goto label_217798;
        case 0x21779cu: goto label_21779c;
        case 0x2177a0u: goto label_2177a0;
        case 0x2177a4u: goto label_2177a4;
        case 0x2177a8u: goto label_2177a8;
        case 0x2177acu: goto label_2177ac;
        case 0x2177b0u: goto label_2177b0;
        case 0x2177b4u: goto label_2177b4;
        case 0x2177b8u: goto label_2177b8;
        case 0x2177bcu: goto label_2177bc;
        case 0x2177c0u: goto label_2177c0;
        case 0x2177c4u: goto label_2177c4;
        case 0x2177c8u: goto label_2177c8;
        case 0x2177ccu: goto label_2177cc;
        case 0x2177d0u: goto label_2177d0;
        case 0x2177d4u: goto label_2177d4;
        case 0x2177d8u: goto label_2177d8;
        case 0x2177dcu: goto label_2177dc;
        case 0x2177e0u: goto label_2177e0;
        case 0x2177e4u: goto label_2177e4;
        case 0x2177e8u: goto label_2177e8;
        case 0x2177ecu: goto label_2177ec;
        case 0x2177f0u: goto label_2177f0;
        case 0x2177f4u: goto label_2177f4;
        case 0x2177f8u: goto label_2177f8;
        case 0x2177fcu: goto label_2177fc;
        case 0x217800u: goto label_217800;
        case 0x217804u: goto label_217804;
        case 0x217808u: goto label_217808;
        case 0x21780cu: goto label_21780c;
        case 0x217810u: goto label_217810;
        case 0x217814u: goto label_217814;
        case 0x217818u: goto label_217818;
        case 0x21781cu: goto label_21781c;
        case 0x217820u: goto label_217820;
        case 0x217824u: goto label_217824;
        case 0x217828u: goto label_217828;
        case 0x21782cu: goto label_21782c;
        case 0x217830u: goto label_217830;
        case 0x217834u: goto label_217834;
        case 0x217838u: goto label_217838;
        case 0x21783cu: goto label_21783c;
        case 0x217840u: goto label_217840;
        case 0x217844u: goto label_217844;
        case 0x217848u: goto label_217848;
        case 0x21784cu: goto label_21784c;
        case 0x217850u: goto label_217850;
        case 0x217854u: goto label_217854;
        case 0x217858u: goto label_217858;
        case 0x21785cu: goto label_21785c;
        case 0x217860u: goto label_217860;
        case 0x217864u: goto label_217864;
        case 0x217868u: goto label_217868;
        case 0x21786cu: goto label_21786c;
        case 0x217870u: goto label_217870;
        case 0x217874u: goto label_217874;
        case 0x217878u: goto label_217878;
        case 0x21787cu: goto label_21787c;
        case 0x217880u: goto label_217880;
        case 0x217884u: goto label_217884;
        case 0x217888u: goto label_217888;
        case 0x21788cu: goto label_21788c;
        case 0x217890u: goto label_217890;
        case 0x217894u: goto label_217894;
        case 0x217898u: goto label_217898;
        case 0x21789cu: goto label_21789c;
        case 0x2178a0u: goto label_2178a0;
        case 0x2178a4u: goto label_2178a4;
        case 0x2178a8u: goto label_2178a8;
        case 0x2178acu: goto label_2178ac;
        case 0x2178b0u: goto label_2178b0;
        case 0x2178b4u: goto label_2178b4;
        case 0x2178b8u: goto label_2178b8;
        case 0x2178bcu: goto label_2178bc;
        case 0x2178c0u: goto label_2178c0;
        case 0x2178c4u: goto label_2178c4;
        case 0x2178c8u: goto label_2178c8;
        case 0x2178ccu: goto label_2178cc;
        case 0x2178d0u: goto label_2178d0;
        case 0x2178d4u: goto label_2178d4;
        case 0x2178d8u: goto label_2178d8;
        case 0x2178dcu: goto label_2178dc;
        case 0x2178e0u: goto label_2178e0;
        case 0x2178e4u: goto label_2178e4;
        case 0x2178e8u: goto label_2178e8;
        case 0x2178ecu: goto label_2178ec;
        case 0x2178f0u: goto label_2178f0;
        case 0x2178f4u: goto label_2178f4;
        case 0x2178f8u: goto label_2178f8;
        case 0x2178fcu: goto label_2178fc;
        case 0x217900u: goto label_217900;
        case 0x217904u: goto label_217904;
        case 0x217908u: goto label_217908;
        case 0x21790cu: goto label_21790c;
        case 0x217910u: goto label_217910;
        case 0x217914u: goto label_217914;
        case 0x217918u: goto label_217918;
        case 0x21791cu: goto label_21791c;
        case 0x217920u: goto label_217920;
        case 0x217924u: goto label_217924;
        case 0x217928u: goto label_217928;
        case 0x21792cu: goto label_21792c;
        case 0x217930u: goto label_217930;
        case 0x217934u: goto label_217934;
        case 0x217938u: goto label_217938;
        case 0x21793cu: goto label_21793c;
        case 0x217940u: goto label_217940;
        case 0x217944u: goto label_217944;
        case 0x217948u: goto label_217948;
        case 0x21794cu: goto label_21794c;
        case 0x217950u: goto label_217950;
        case 0x217954u: goto label_217954;
        case 0x217958u: goto label_217958;
        case 0x21795cu: goto label_21795c;
        case 0x217960u: goto label_217960;
        case 0x217964u: goto label_217964;
        case 0x217968u: goto label_217968;
        case 0x21796cu: goto label_21796c;
        case 0x217970u: goto label_217970;
        case 0x217974u: goto label_217974;
        case 0x217978u: goto label_217978;
        case 0x21797cu: goto label_21797c;
        case 0x217980u: goto label_217980;
        case 0x217984u: goto label_217984;
        case 0x217988u: goto label_217988;
        case 0x21798cu: goto label_21798c;
        case 0x217990u: goto label_217990;
        case 0x217994u: goto label_217994;
        case 0x217998u: goto label_217998;
        case 0x21799cu: goto label_21799c;
        case 0x2179a0u: goto label_2179a0;
        case 0x2179a4u: goto label_2179a4;
        case 0x2179a8u: goto label_2179a8;
        case 0x2179acu: goto label_2179ac;
        case 0x2179b0u: goto label_2179b0;
        case 0x2179b4u: goto label_2179b4;
        case 0x2179b8u: goto label_2179b8;
        case 0x2179bcu: goto label_2179bc;
        case 0x2179c0u: goto label_2179c0;
        case 0x2179c4u: goto label_2179c4;
        case 0x2179c8u: goto label_2179c8;
        case 0x2179ccu: goto label_2179cc;
        case 0x2179d0u: goto label_2179d0;
        case 0x2179d4u: goto label_2179d4;
        case 0x2179d8u: goto label_2179d8;
        case 0x2179dcu: goto label_2179dc;
        case 0x2179e0u: goto label_2179e0;
        case 0x2179e4u: goto label_2179e4;
        case 0x2179e8u: goto label_2179e8;
        case 0x2179ecu: goto label_2179ec;
        case 0x2179f0u: goto label_2179f0;
        case 0x2179f4u: goto label_2179f4;
        case 0x2179f8u: goto label_2179f8;
        case 0x2179fcu: goto label_2179fc;
        case 0x217a00u: goto label_217a00;
        case 0x217a04u: goto label_217a04;
        case 0x217a08u: goto label_217a08;
        case 0x217a0cu: goto label_217a0c;
        case 0x217a10u: goto label_217a10;
        case 0x217a14u: goto label_217a14;
        case 0x217a18u: goto label_217a18;
        case 0x217a1cu: goto label_217a1c;
        case 0x217a20u: goto label_217a20;
        case 0x217a24u: goto label_217a24;
        case 0x217a28u: goto label_217a28;
        case 0x217a2cu: goto label_217a2c;
        case 0x217a30u: goto label_217a30;
        case 0x217a34u: goto label_217a34;
        case 0x217a38u: goto label_217a38;
        case 0x217a3cu: goto label_217a3c;
        case 0x217a40u: goto label_217a40;
        case 0x217a44u: goto label_217a44;
        case 0x217a48u: goto label_217a48;
        case 0x217a4cu: goto label_217a4c;
        case 0x217a50u: goto label_217a50;
        case 0x217a54u: goto label_217a54;
        case 0x217a58u: goto label_217a58;
        case 0x217a5cu: goto label_217a5c;
        case 0x217a60u: goto label_217a60;
        case 0x217a64u: goto label_217a64;
        case 0x217a68u: goto label_217a68;
        case 0x217a6cu: goto label_217a6c;
        case 0x217a70u: goto label_217a70;
        case 0x217a74u: goto label_217a74;
        case 0x217a78u: goto label_217a78;
        case 0x217a7cu: goto label_217a7c;
        case 0x217a80u: goto label_217a80;
        case 0x217a84u: goto label_217a84;
        case 0x217a88u: goto label_217a88;
        case 0x217a8cu: goto label_217a8c;
        case 0x217a90u: goto label_217a90;
        case 0x217a94u: goto label_217a94;
        case 0x217a98u: goto label_217a98;
        case 0x217a9cu: goto label_217a9c;
        case 0x217aa0u: goto label_217aa0;
        case 0x217aa4u: goto label_217aa4;
        case 0x217aa8u: goto label_217aa8;
        case 0x217aacu: goto label_217aac;
        case 0x217ab0u: goto label_217ab0;
        case 0x217ab4u: goto label_217ab4;
        case 0x217ab8u: goto label_217ab8;
        case 0x217abcu: goto label_217abc;
        case 0x217ac0u: goto label_217ac0;
        case 0x217ac4u: goto label_217ac4;
        case 0x217ac8u: goto label_217ac8;
        case 0x217accu: goto label_217acc;
        case 0x217ad0u: goto label_217ad0;
        case 0x217ad4u: goto label_217ad4;
        case 0x217ad8u: goto label_217ad8;
        case 0x217adcu: goto label_217adc;
        case 0x217ae0u: goto label_217ae0;
        case 0x217ae4u: goto label_217ae4;
        case 0x217ae8u: goto label_217ae8;
        case 0x217aecu: goto label_217aec;
        case 0x217af0u: goto label_217af0;
        case 0x217af4u: goto label_217af4;
        case 0x217af8u: goto label_217af8;
        case 0x217afcu: goto label_217afc;
        case 0x217b00u: goto label_217b00;
        case 0x217b04u: goto label_217b04;
        case 0x217b08u: goto label_217b08;
        case 0x217b0cu: goto label_217b0c;
        case 0x217b10u: goto label_217b10;
        case 0x217b14u: goto label_217b14;
        case 0x217b18u: goto label_217b18;
        case 0x217b1cu: goto label_217b1c;
        case 0x217b20u: goto label_217b20;
        case 0x217b24u: goto label_217b24;
        case 0x217b28u: goto label_217b28;
        case 0x217b2cu: goto label_217b2c;
        case 0x217b30u: goto label_217b30;
        case 0x217b34u: goto label_217b34;
        case 0x217b38u: goto label_217b38;
        case 0x217b3cu: goto label_217b3c;
        case 0x217b40u: goto label_217b40;
        case 0x217b44u: goto label_217b44;
        case 0x217b48u: goto label_217b48;
        case 0x217b4cu: goto label_217b4c;
        case 0x217b50u: goto label_217b50;
        case 0x217b54u: goto label_217b54;
        case 0x217b58u: goto label_217b58;
        case 0x217b5cu: goto label_217b5c;
        case 0x217b60u: goto label_217b60;
        case 0x217b64u: goto label_217b64;
        case 0x217b68u: goto label_217b68;
        case 0x217b6cu: goto label_217b6c;
        case 0x217b70u: goto label_217b70;
        case 0x217b74u: goto label_217b74;
        case 0x217b78u: goto label_217b78;
        case 0x217b7cu: goto label_217b7c;
        case 0x217b80u: goto label_217b80;
        case 0x217b84u: goto label_217b84;
        case 0x217b88u: goto label_217b88;
        case 0x217b8cu: goto label_217b8c;
        case 0x217b90u: goto label_217b90;
        case 0x217b94u: goto label_217b94;
        case 0x217b98u: goto label_217b98;
        case 0x217b9cu: goto label_217b9c;
        case 0x217ba0u: goto label_217ba0;
        case 0x217ba4u: goto label_217ba4;
        case 0x217ba8u: goto label_217ba8;
        case 0x217bacu: goto label_217bac;
        case 0x217bb0u: goto label_217bb0;
        case 0x217bb4u: goto label_217bb4;
        case 0x217bb8u: goto label_217bb8;
        case 0x217bbcu: goto label_217bbc;
        case 0x217bc0u: goto label_217bc0;
        case 0x217bc4u: goto label_217bc4;
        case 0x217bc8u: goto label_217bc8;
        case 0x217bccu: goto label_217bcc;
        case 0x217bd0u: goto label_217bd0;
        case 0x217bd4u: goto label_217bd4;
        case 0x217bd8u: goto label_217bd8;
        case 0x217bdcu: goto label_217bdc;
        case 0x217be0u: goto label_217be0;
        case 0x217be4u: goto label_217be4;
        case 0x217be8u: goto label_217be8;
        case 0x217becu: goto label_217bec;
        case 0x217bf0u: goto label_217bf0;
        case 0x217bf4u: goto label_217bf4;
        case 0x217bf8u: goto label_217bf8;
        case 0x217bfcu: goto label_217bfc;
        case 0x217c00u: goto label_217c00;
        case 0x217c04u: goto label_217c04;
        case 0x217c08u: goto label_217c08;
        case 0x217c0cu: goto label_217c0c;
        case 0x217c10u: goto label_217c10;
        case 0x217c14u: goto label_217c14;
        case 0x217c18u: goto label_217c18;
        case 0x217c1cu: goto label_217c1c;
        case 0x217c20u: goto label_217c20;
        case 0x217c24u: goto label_217c24;
        case 0x217c28u: goto label_217c28;
        case 0x217c2cu: goto label_217c2c;
        case 0x217c30u: goto label_217c30;
        case 0x217c34u: goto label_217c34;
        case 0x217c38u: goto label_217c38;
        case 0x217c3cu: goto label_217c3c;
        case 0x217c40u: goto label_217c40;
        case 0x217c44u: goto label_217c44;
        case 0x217c48u: goto label_217c48;
        case 0x217c4cu: goto label_217c4c;
        case 0x217c50u: goto label_217c50;
        case 0x217c54u: goto label_217c54;
        case 0x217c58u: goto label_217c58;
        case 0x217c5cu: goto label_217c5c;
        case 0x217c60u: goto label_217c60;
        case 0x217c64u: goto label_217c64;
        case 0x217c68u: goto label_217c68;
        case 0x217c6cu: goto label_217c6c;
        case 0x217c70u: goto label_217c70;
        case 0x217c74u: goto label_217c74;
        case 0x217c78u: goto label_217c78;
        case 0x217c7cu: goto label_217c7c;
        case 0x217c80u: goto label_217c80;
        case 0x217c84u: goto label_217c84;
        case 0x217c88u: goto label_217c88;
        case 0x217c8cu: goto label_217c8c;
        case 0x217c90u: goto label_217c90;
        case 0x217c94u: goto label_217c94;
        case 0x217c98u: goto label_217c98;
        case 0x217c9cu: goto label_217c9c;
        case 0x217ca0u: goto label_217ca0;
        case 0x217ca4u: goto label_217ca4;
        case 0x217ca8u: goto label_217ca8;
        case 0x217cacu: goto label_217cac;
        case 0x217cb0u: goto label_217cb0;
        case 0x217cb4u: goto label_217cb4;
        case 0x217cb8u: goto label_217cb8;
        case 0x217cbcu: goto label_217cbc;
        case 0x217cc0u: goto label_217cc0;
        case 0x217cc4u: goto label_217cc4;
        case 0x217cc8u: goto label_217cc8;
        case 0x217cccu: goto label_217ccc;
        case 0x217cd0u: goto label_217cd0;
        case 0x217cd4u: goto label_217cd4;
        case 0x217cd8u: goto label_217cd8;
        case 0x217cdcu: goto label_217cdc;
        case 0x217ce0u: goto label_217ce0;
        case 0x217ce4u: goto label_217ce4;
        case 0x217ce8u: goto label_217ce8;
        case 0x217cecu: goto label_217cec;
        case 0x217cf0u: goto label_217cf0;
        case 0x217cf4u: goto label_217cf4;
        case 0x217cf8u: goto label_217cf8;
        case 0x217cfcu: goto label_217cfc;
        case 0x217d00u: goto label_217d00;
        case 0x217d04u: goto label_217d04;
        case 0x217d08u: goto label_217d08;
        case 0x217d0cu: goto label_217d0c;
        case 0x217d10u: goto label_217d10;
        case 0x217d14u: goto label_217d14;
        case 0x217d18u: goto label_217d18;
        case 0x217d1cu: goto label_217d1c;
        case 0x217d20u: goto label_217d20;
        case 0x217d24u: goto label_217d24;
        case 0x217d28u: goto label_217d28;
        case 0x217d2cu: goto label_217d2c;
        case 0x217d30u: goto label_217d30;
        case 0x217d34u: goto label_217d34;
        case 0x217d38u: goto label_217d38;
        case 0x217d3cu: goto label_217d3c;
        case 0x217d40u: goto label_217d40;
        case 0x217d44u: goto label_217d44;
        case 0x217d48u: goto label_217d48;
        case 0x217d4cu: goto label_217d4c;
        case 0x217d50u: goto label_217d50;
        case 0x217d54u: goto label_217d54;
        case 0x217d58u: goto label_217d58;
        case 0x217d5cu: goto label_217d5c;
        case 0x217d60u: goto label_217d60;
        case 0x217d64u: goto label_217d64;
        case 0x217d68u: goto label_217d68;
        case 0x217d6cu: goto label_217d6c;
        case 0x217d70u: goto label_217d70;
        case 0x217d74u: goto label_217d74;
        case 0x217d78u: goto label_217d78;
        case 0x217d7cu: goto label_217d7c;
        case 0x217d80u: goto label_217d80;
        case 0x217d84u: goto label_217d84;
        case 0x217d88u: goto label_217d88;
        case 0x217d8cu: goto label_217d8c;
        case 0x217d90u: goto label_217d90;
        case 0x217d94u: goto label_217d94;
        case 0x217d98u: goto label_217d98;
        case 0x217d9cu: goto label_217d9c;
        case 0x217da0u: goto label_217da0;
        case 0x217da4u: goto label_217da4;
        case 0x217da8u: goto label_217da8;
        case 0x217dacu: goto label_217dac;
        case 0x217db0u: goto label_217db0;
        case 0x217db4u: goto label_217db4;
        case 0x217db8u: goto label_217db8;
        case 0x217dbcu: goto label_217dbc;
        case 0x217dc0u: goto label_217dc0;
        case 0x217dc4u: goto label_217dc4;
        case 0x217dc8u: goto label_217dc8;
        case 0x217dccu: goto label_217dcc;
        case 0x217dd0u: goto label_217dd0;
        case 0x217dd4u: goto label_217dd4;
        case 0x217dd8u: goto label_217dd8;
        case 0x217ddcu: goto label_217ddc;
        case 0x217de0u: goto label_217de0;
        case 0x217de4u: goto label_217de4;
        case 0x217de8u: goto label_217de8;
        case 0x217decu: goto label_217dec;
        case 0x217df0u: goto label_217df0;
        case 0x217df4u: goto label_217df4;
        case 0x217df8u: goto label_217df8;
        case 0x217dfcu: goto label_217dfc;
        case 0x217e00u: goto label_217e00;
        case 0x217e04u: goto label_217e04;
        case 0x217e08u: goto label_217e08;
        case 0x217e0cu: goto label_217e0c;
        case 0x217e10u: goto label_217e10;
        case 0x217e14u: goto label_217e14;
        case 0x217e18u: goto label_217e18;
        case 0x217e1cu: goto label_217e1c;
        case 0x217e20u: goto label_217e20;
        case 0x217e24u: goto label_217e24;
        case 0x217e28u: goto label_217e28;
        case 0x217e2cu: goto label_217e2c;
        case 0x217e30u: goto label_217e30;
        case 0x217e34u: goto label_217e34;
        case 0x217e38u: goto label_217e38;
        case 0x217e3cu: goto label_217e3c;
        case 0x217e40u: goto label_217e40;
        case 0x217e44u: goto label_217e44;
        case 0x217e48u: goto label_217e48;
        case 0x217e4cu: goto label_217e4c;
        case 0x217e50u: goto label_217e50;
        case 0x217e54u: goto label_217e54;
        case 0x217e58u: goto label_217e58;
        case 0x217e5cu: goto label_217e5c;
        case 0x217e60u: goto label_217e60;
        case 0x217e64u: goto label_217e64;
        case 0x217e68u: goto label_217e68;
        case 0x217e6cu: goto label_217e6c;
        case 0x217e70u: goto label_217e70;
        case 0x217e74u: goto label_217e74;
        case 0x217e78u: goto label_217e78;
        case 0x217e7cu: goto label_217e7c;
        case 0x217e80u: goto label_217e80;
        case 0x217e84u: goto label_217e84;
        case 0x217e88u: goto label_217e88;
        case 0x217e8cu: goto label_217e8c;
        case 0x217e90u: goto label_217e90;
        case 0x217e94u: goto label_217e94;
        case 0x217e98u: goto label_217e98;
        case 0x217e9cu: goto label_217e9c;
        case 0x217ea0u: goto label_217ea0;
        case 0x217ea4u: goto label_217ea4;
        case 0x217ea8u: goto label_217ea8;
        case 0x217eacu: goto label_217eac;
        case 0x217eb0u: goto label_217eb0;
        case 0x217eb4u: goto label_217eb4;
        case 0x217eb8u: goto label_217eb8;
        case 0x217ebcu: goto label_217ebc;
        case 0x217ec0u: goto label_217ec0;
        case 0x217ec4u: goto label_217ec4;
        case 0x217ec8u: goto label_217ec8;
        case 0x217eccu: goto label_217ecc;
        case 0x217ed0u: goto label_217ed0;
        case 0x217ed4u: goto label_217ed4;
        case 0x217ed8u: goto label_217ed8;
        case 0x217edcu: goto label_217edc;
        case 0x217ee0u: goto label_217ee0;
        case 0x217ee4u: goto label_217ee4;
        case 0x217ee8u: goto label_217ee8;
        case 0x217eecu: goto label_217eec;
        case 0x217ef0u: goto label_217ef0;
        case 0x217ef4u: goto label_217ef4;
        case 0x217ef8u: goto label_217ef8;
        case 0x217efcu: goto label_217efc;
        case 0x217f00u: goto label_217f00;
        case 0x217f04u: goto label_217f04;
        case 0x217f08u: goto label_217f08;
        case 0x217f0cu: goto label_217f0c;
        case 0x217f10u: goto label_217f10;
        case 0x217f14u: goto label_217f14;
        case 0x217f18u: goto label_217f18;
        case 0x217f1cu: goto label_217f1c;
        default: return;
    }

label_217750:
    if (ctx->pc == 0x217750u) {
        ctx->pc = 0x217750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21774Cu;
        // 0x217750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217754u;
        goto label_217754;
    }
    ctx->pc = 0x21774Cu;
    SET_GPR_U32(ctx, 31, 0x217754u);
    ctx->pc = 0x217750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21774Cu;
    // 0x217750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x21774Cu, 0x217754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217754u;
label_217754:
    // 0x217754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x217754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217758:
    // 0x217758: 0xc060678  jal         func_1819E0
label_21775c:
    if (ctx->pc == 0x21775Cu) {
        ctx->pc = 0x21775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217758u;
        // 0x21775c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217760u;
        goto label_217760;
    }
    ctx->pc = 0x217758u;
    SET_GPR_U32(ctx, 31, 0x217760u);
    ctx->pc = 0x21775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217758u;
    // 0x21775c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x217758u, 0x217760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217760u;
label_217760:
    // 0x217760: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x217760u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
label_217764:
    // 0x217764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217768:
    // 0x217768: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x217768u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_21776c:
    // 0x21776c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21776cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217770:
    // 0x217770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217774:
    // 0x217774: 0xc0602c8  jal         func_180B20
label_217778:
    if (ctx->pc == 0x217778u) {
        ctx->pc = 0x217778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217774u;
        // 0x217778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21777Cu;
        goto label_21777c;
    }
    ctx->pc = 0x217774u;
    SET_GPR_U32(ctx, 31, 0x21777Cu);
    ctx->pc = 0x217778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217774u;
    // 0x217778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x217774u, 0x21777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21777Cu;
label_21777c:
    // 0x21777c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217780:
    // 0x217780: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x217780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_217784:
    // 0x217784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217788:
    // 0x217788: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_21778c:
    // 0x21778c: 0xc060390  jal         func_180E40
label_217790:
    if (ctx->pc == 0x217790u) {
        ctx->pc = 0x217790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21778Cu;
        // 0x217790: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217794u;
        goto label_217794;
    }
    ctx->pc = 0x21778Cu;
    SET_GPR_U32(ctx, 31, 0x217794u);
    ctx->pc = 0x217790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21778Cu;
    // 0x217790: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x21778Cu, 0x217794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217794u;
label_217794:
    // 0x217794: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217798:
    // 0x217798: 0x24638c10  addiu       $v1, $v1, -0x73F0
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937616));
label_21779c:
    // 0x21779c: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x21779cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2177a0:
    // 0x2177a0: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2177a0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_2177a4:
    // 0x2177a4: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x2177a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_2177a8:
    // 0x2177a8: 0xc06063c  jal         func_1818F0
label_2177ac:
    if (ctx->pc == 0x2177ACu) {
        ctx->pc = 0x2177ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177A8u;
        // 0x2177ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177B0u;
        goto label_2177b0;
    }
    ctx->pc = 0x2177A8u;
    SET_GPR_U32(ctx, 31, 0x2177B0u);
    ctx->pc = 0x2177ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177A8u;
    // 0x2177ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x2177A8u, 0x2177B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177B0u;
label_2177b0:
    // 0x2177b0: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2177b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_2177b4:
    // 0x2177b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2177b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2177b8:
    // 0x2177b8: 0x87b3005e  lh          $s3, 0x5E($sp)
    ctx->pc = 0x2177b8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_2177bc:
    // 0x2177bc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2177bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2177c0:
    // 0x2177c0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2177c4:
    if (ctx->pc == 0x2177C4u) {
        ctx->pc = 0x2177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177C0u;
        // 0x2177c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177C8u;
        goto label_2177c8;
    }
    ctx->pc = 0x2177C0u;
    {
        const bool branch_taken_0x2177c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177C0u;
        // 0x2177c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177c0) {
            ctx->pc = 0x217770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217770;
        }
    }
    ctx->pc = 0x2177C8u;
label_2177c8:
    // 0x2177c8: 0xc070038  jal         func_1C00E0
label_2177cc:
    if (ctx->pc == 0x2177CCu) {
        ctx->pc = 0x2177CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177C8u;
        // 0x2177cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177D0u;
        goto label_2177d0;
    }
    ctx->pc = 0x2177C8u;
    SET_GPR_U32(ctx, 31, 0x2177D0u);
    ctx->pc = 0x2177CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177C8u;
    // 0x2177cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2177C8u, 0x2177D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177D0u;
label_2177d0:
    // 0x2177d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2177d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2177d4:
    // 0x2177d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2177d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2177d8:
    // 0x2177d8: 0x27829260  addiu       $v0, $gp, -0x6DA0
    ctx->pc = 0x2177d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
label_2177dc:
    // 0x2177dc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x2177dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2177e0:
    // 0x2177e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2177e4:
    // 0x2177e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2177e8:
    if (ctx->pc == 0x2177E8u) {
        ctx->pc = 0x2177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177E4u;
        // 0x2177e8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177ECu;
        goto label_2177ec;
    }
    ctx->pc = 0x2177E4u;
    {
        const bool branch_taken_0x2177e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177E4u;
        // 0x2177e8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177e4) {
            ctx->pc = 0x2177F8u;
            goto label_2177f8;
        }
    }
    ctx->pc = 0x2177ECu;
label_2177ec:
    // 0x2177ec: 0xc070080  jal         func_1C0200
label_2177f0:
    if (ctx->pc == 0x2177F0u) {
        ctx->pc = 0x2177F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177ECu;
        // 0x2177f0: 0x240527b0  addiu       $a1, $zero, 0x27B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2177F4u;
        goto label_2177f4;
    }
    ctx->pc = 0x2177ECu;
    SET_GPR_U32(ctx, 31, 0x2177F4u);
    ctx->pc = 0x2177F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177ECu;
    // 0x2177f0: 0x240527b0  addiu       $a1, $zero, 0x27B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x2177ECu, 0x2177F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2177F4u;
label_2177f4:
    // 0x2177f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2177f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2177f8:
    // 0x2177f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2177f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2177fc:
    // 0x2177fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2177fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217800:
    // 0x217800: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x217800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_217804:
    // 0x217804: 0xc070080  jal         func_1C0200
label_217808:
    if (ctx->pc == 0x217808u) {
        ctx->pc = 0x217808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217804u;
        // 0x217808: 0x24054890  addiu       $a1, $zero, 0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21780Cu;
        goto label_21780c;
    }
    ctx->pc = 0x217804u;
    SET_GPR_U32(ctx, 31, 0x21780Cu);
    ctx->pc = 0x217808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217804u;
    // 0x217808: 0x24054890  addiu       $a1, $zero, 0x4890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x217804u, 0x21780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21780Cu;
label_21780c:
    // 0x21780c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217810:
    // 0x217810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x217810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_217814:
    // 0x217814: 0x24638c00  addiu       $v1, $v1, -0x7400
    ctx->pc = 0x217814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937600));
label_217818:
    // 0x217818: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_21781c:
    // 0x21781c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x21781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_217820:
    // 0x217820: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x217820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_217824:
    // 0x217824: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x217824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_217828:
    // 0x217828: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x217828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21782c:
    // 0x21782c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_217830:
    if (ctx->pc == 0x217830u) {
        ctx->pc = 0x217830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21782Cu;
        // 0x217830: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217834u;
        goto label_217834;
    }
    ctx->pc = 0x21782Cu;
    {
        const bool branch_taken_0x21782c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x217830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21782Cu;
        // 0x217830: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21782c) {
            ctx->pc = 0x217800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217800;
        }
    }
    ctx->pc = 0x217834u;
label_217834:
    // 0x217834: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217838:
    // 0x217838: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x217838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_21783c:
    // 0x21783c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_217840:
    if (ctx->pc == 0x217840u) {
        ctx->pc = 0x217840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21783Cu;
        // 0x217840: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217844u;
        goto label_217844;
    }
    ctx->pc = 0x21783Cu;
    {
        const bool branch_taken_0x21783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21783Cu;
        // 0x217840: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21783c) {
            ctx->pc = 0x2177D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2177d8;
        }
    }
    ctx->pc = 0x217844u;
label_217844:
    // 0x217844: 0xc0864d0  jal         func_219340
label_217848:
    if (ctx->pc == 0x217848u) {
        ctx->pc = 0x21784Cu;
        goto label_21784c;
    }
    ctx->pc = 0x217844u;
    SET_GPR_U32(ctx, 31, 0x21784Cu);
    ctx->pc = 0x219340u;
    { ctx->pc = 0x219340; return; }
    ctx->pc = 0x21784Cu;
label_21784c:
    // 0x21784c: 0xc086270  jal         func_2189C0
label_217850:
    if (ctx->pc == 0x217850u) {
        ctx->pc = 0x217854u;
        goto label_217854;
    }
    ctx->pc = 0x21784Cu;
    SET_GPR_U32(ctx, 31, 0x217854u);
    ctx->pc = 0x2189C0u;
    { ctx->pc = 0x2189c0; return; }
    ctx->pc = 0x217854u;
label_217854:
    // 0x217854: 0xc07c014  jal         func_1F0050
label_217858:
    if (ctx->pc == 0x217858u) {
        ctx->pc = 0x21785Cu;
        goto label_21785c;
    }
    ctx->pc = 0x217854u;
    SET_GPR_U32(ctx, 31, 0x21785Cu);
    ctx->pc = 0x1F0050u;
    { ctx->pc = 0x1f0050; return; }
    ctx->pc = 0x21785Cu;
label_21785c:
    // 0x21785c: 0xc08562c  jal         func_2158B0
label_217860:
    if (ctx->pc == 0x217860u) {
        ctx->pc = 0x217860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21785Cu;
        // 0x217860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217864u;
        goto label_217864;
    }
    ctx->pc = 0x21785Cu;
    SET_GPR_U32(ctx, 31, 0x217864u);
    ctx->pc = 0x217860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21785Cu;
    // 0x217860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158B0u;
    { ctx->pc = 0x2158b0; return; }
    ctx->pc = 0x217864u;
label_217864:
    // 0x217864: 0xc07ab5c  jal         func_1EAD70
label_217868:
    if (ctx->pc == 0x217868u) {
        ctx->pc = 0x217868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217864u;
        // 0x217868: 0x8f849274  lw          $a0, -0x6D8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21786Cu;
        goto label_21786c;
    }
    ctx->pc = 0x217864u;
    SET_GPR_U32(ctx, 31, 0x21786Cu);
    ctx->pc = 0x217868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217864u;
    // 0x217868: 0x8f849274  lw          $a0, -0x6D8C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD70u;
    { ctx->pc = 0x1ead70; return; }
    ctx->pc = 0x21786Cu;
label_21786c:
    // 0x21786c: 0xc077fc0  jal         func_1DFF00
label_217870:
    if (ctx->pc == 0x217870u) {
        ctx->pc = 0x217874u;
        goto label_217874;
    }
    ctx->pc = 0x21786Cu;
    SET_GPR_U32(ctx, 31, 0x217874u);
    ctx->pc = 0x1DFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF00u, 0x21786Cu, 0x217874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217874u;
label_217874:
    // 0x217874: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x217874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_217878:
    // 0x217878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x217878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21787c:
    // 0x21787c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21787cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217880:
    // 0x217880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217884:
    // 0x217884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217888:
    // 0x217888: 0x3e00008  jr          $ra
label_21788c:
    if (ctx->pc == 0x21788Cu) {
        ctx->pc = 0x21788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217888u;
        // 0x21788c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217890u;
        goto label_217890;
    }
    ctx->pc = 0x217888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217888u;
        // 0x21788c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217890u;
label_217890:
    // 0x217890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x217890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_217894:
    // 0x217894: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x217894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_217898:
    // 0x217898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x217898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_21789c:
    // 0x21789c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2178a0:
    // 0x2178a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2178a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2178a4:
    // 0x2178a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2178a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2178a8:
    // 0x2178a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2178a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2178ac:
    // 0x2178ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2178acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2178b0:
    // 0x2178b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2178b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2178b4:
    // 0x2178b4: 0x8c224904  lw          $v0, 0x4904($at)
    ctx->pc = 0x2178b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18692)));
label_2178b8:
    // 0x2178b8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_2178bc:
    if (ctx->pc == 0x2178BCu) {
        ctx->pc = 0x2178BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178B8u;
        // 0x2178bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2178C0u;
        goto label_2178c0;
    }
    ctx->pc = 0x2178B8u;
    {
        const bool branch_taken_0x2178b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2178BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178B8u;
        // 0x2178bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178b8) {
            ctx->pc = 0x2178D0u;
            goto label_2178d0;
        }
    }
    ctx->pc = 0x2178C0u;
label_2178c0:
    // 0x2178c0: 0xc085d40  jal         func_217500
label_2178c4:
    if (ctx->pc == 0x2178C4u) {
        ctx->pc = 0x2178C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178C0u;
        // 0x2178c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2178C8u;
        goto label_2178c8;
    }
    ctx->pc = 0x2178C0u;
    SET_GPR_U32(ctx, 31, 0x2178C8u);
    ctx->pc = 0x2178C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178C0u;
    // 0x2178c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217500u;
    { ctx->pc = 0x217500; return; }
    ctx->pc = 0x2178C8u;
label_2178c8:
    // 0x2178c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2178cc:
    if (ctx->pc == 0x2178CCu) {
        ctx->pc = 0x2178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178C8u;
        // 0x2178cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2178D0u;
        goto label_2178d0;
    }
    ctx->pc = 0x2178C8u;
    {
        const bool branch_taken_0x2178c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178C8u;
        // 0x2178cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178c8) {
            ctx->pc = 0x2178DCu;
            goto label_2178dc;
        }
    }
    ctx->pc = 0x2178D0u;
label_2178d0:
    // 0x2178d0: 0xc085d40  jal         func_217500
label_2178d4:
    if (ctx->pc == 0x2178D4u) {
        ctx->pc = 0x2178D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178D0u;
        // 0x2178d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2178D8u;
        goto label_2178d8;
    }
    ctx->pc = 0x2178D0u;
    SET_GPR_U32(ctx, 31, 0x2178D8u);
    ctx->pc = 0x2178D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178D0u;
    // 0x2178d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217500u;
    { ctx->pc = 0x217500; return; }
    ctx->pc = 0x2178D8u;
label_2178d8:
    // 0x2178d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2178d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2178dc:
    // 0x2178dc: 0xc0860c4  jal         func_218310
label_2178e0:
    if (ctx->pc == 0x2178E0u) {
        ctx->pc = 0x2178E4u;
        goto label_2178e4;
    }
    ctx->pc = 0x2178DCu;
    SET_GPR_U32(ctx, 31, 0x2178E4u);
    ctx->pc = 0x218310u;
    { ctx->pc = 0x218310; return; }
    ctx->pc = 0x2178E4u;
label_2178e4:
    // 0x2178e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2178e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2178e8:
    // 0x2178e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2178e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2178ec:
    // 0x2178ec: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2178ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_2178f0:
    // 0x2178f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2178f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2178f4:
    // 0x2178f4: 0x246324b0  addiu       $v1, $v1, 0x24B0
    ctx->pc = 0x2178f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9392));
label_2178f8:
    // 0x2178f8: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2178f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2178fc:
    // 0x2178fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2178fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_217900:
    // 0x217900: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_217904:
    if (ctx->pc == 0x217904u) {
        ctx->pc = 0x217908u;
        goto label_217908;
    }
    ctx->pc = 0x217900u;
    {
        const bool branch_taken_0x217900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217900) {
            ctx->pc = 0x217988u;
            goto label_217988;
        }
    }
    ctx->pc = 0x217908u;
label_217908:
    // 0x217908: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x217908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_21790c:
    // 0x21790c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x21790cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_217910:
    // 0x217910: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x217910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_217914:
    // 0x217914: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x217914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_217918:
    // 0x217918: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x217918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21791c:
    // 0x21791c: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x21791cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_217920:
    // 0x217920: 0x1010  mfhi        $v0
    ctx->pc = 0x217920u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_217924:
    // 0x217924: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x217924u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_217928:
    // 0x217928: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x217928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21792c:
    // 0x21792c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x21792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_217930:
    // 0x217930: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x217930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_217934:
    // 0x217934: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x217934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_217938:
    // 0x217938: 0x1010  mfhi        $v0
    ctx->pc = 0x217938u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21793c:
    // 0x21793c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_217940:
    // 0x217940: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x217940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_217944:
    // 0x217944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_217948:
    // 0x217948: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x217948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21794c:
    // 0x21794c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_217950:
    if (ctx->pc == 0x217950u) {
        ctx->pc = 0x217954u;
        goto label_217954;
    }
    ctx->pc = 0x21794Cu;
    {
        const bool branch_taken_0x21794c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21794c) {
            ctx->pc = 0x217978u;
            goto label_217978;
        }
    }
    ctx->pc = 0x217954u;
label_217954:
    // 0x217954: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x217954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_217958:
    // 0x217958: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_21795c:
    if (ctx->pc == 0x21795Cu) {
        ctx->pc = 0x217960u;
        goto label_217960;
    }
    ctx->pc = 0x217958u;
    {
        const bool branch_taken_0x217958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x217958) {
            ctx->pc = 0x217978u;
            goto label_217978;
        }
    }
    ctx->pc = 0x217960u;
label_217960:
    // 0x217960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217964:
    // 0x217964: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x217964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217968:
    // 0x217968: 0xc085cc4  jal         func_217310
label_21796c:
    if (ctx->pc == 0x21796Cu) {
        ctx->pc = 0x21796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217968u;
        // 0x21796c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217970u;
        goto label_217970;
    }
    ctx->pc = 0x217968u;
    SET_GPR_U32(ctx, 31, 0x217970u);
    ctx->pc = 0x21796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217968u;
    // 0x21796c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x217970u;
label_217970:
    // 0x217970: 0x10000005  b           . + 4 + (0x5 << 2)
label_217974:
    if (ctx->pc == 0x217974u) {
        ctx->pc = 0x217978u;
        goto label_217978;
    }
    ctx->pc = 0x217970u;
    {
        const bool branch_taken_0x217970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217970) {
            ctx->pc = 0x217988u;
            goto label_217988;
        }
    }
    ctx->pc = 0x217978u;
label_217978:
    // 0x217978: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x217978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21797c:
    // 0x21797c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217980:
    // 0x217980: 0xc085cc4  jal         func_217310
label_217984:
    if (ctx->pc == 0x217984u) {
        ctx->pc = 0x217984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217980u;
        // 0x217984: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217988u;
        goto label_217988;
    }
    ctx->pc = 0x217980u;
    SET_GPR_U32(ctx, 31, 0x217988u);
    ctx->pc = 0x217984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217980u;
    // 0x217984: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x217988u;
label_217988:
    // 0x217988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21798c:
    // 0x21798c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x21798cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_217990:
    // 0x217990: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_217994:
    if (ctx->pc == 0x217994u) {
        ctx->pc = 0x217994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217990u;
        // 0x217994: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217998u;
        goto label_217998;
    }
    ctx->pc = 0x217990u;
    {
        const bool branch_taken_0x217990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217990u;
        // 0x217994: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217990) {
            ctx->pc = 0x2178ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2178ec;
        }
    }
    ctx->pc = 0x217998u;
label_217998:
    // 0x217998: 0xc086040  jal         func_218100
label_21799c:
    if (ctx->pc == 0x21799Cu) {
        ctx->pc = 0x21799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217998u;
        // 0x21799c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179A0u;
        goto label_2179a0;
    }
    ctx->pc = 0x217998u;
    SET_GPR_U32(ctx, 31, 0x2179A0u);
    ctx->pc = 0x21799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217998u;
    // 0x21799c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218100u;
    { ctx->pc = 0x218100; return; }
    ctx->pc = 0x2179A0u;
label_2179a0:
    // 0x2179a0: 0xc085f98  jal         func_217E60
label_2179a4:
    if (ctx->pc == 0x2179A4u) {
        ctx->pc = 0x2179A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179A0u;
        // 0x2179a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179A8u;
        goto label_2179a8;
    }
    ctx->pc = 0x2179A0u;
    SET_GPR_U32(ctx, 31, 0x2179A8u);
    ctx->pc = 0x2179A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179A0u;
    // 0x2179a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217E60u;
    goto label_217e60;
    ctx->pc = 0x2179A8u;
label_2179a8:
    // 0x2179a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2179a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_2179ac:
    // 0x2179ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2179acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2179b0:
    // 0x2179b0: 0x34427030  ori         $v0, $v0, 0x7030
    ctx->pc = 0x2179b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28720);
label_2179b4:
    // 0x2179b4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_2179b8:
    if (ctx->pc == 0x2179B8u) {
        ctx->pc = 0x2179B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179B4u;
        // 0x2179b8: 0xaf839258  sw          $v1, -0x6DA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179BCu;
        goto label_2179bc;
    }
    ctx->pc = 0x2179B4u;
    {
        const bool branch_taken_0x2179b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2179B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179B4u;
        // 0x2179b8: 0xaf839258  sw          $v1, -0x6DA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2179b4) {
            ctx->pc = 0x2179C0u;
            goto label_2179c0;
        }
    }
    ctx->pc = 0x2179BCu;
label_2179bc:
    // 0x2179bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2179bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2179c0:
    // 0x2179c0: 0xaf829254  sw          $v0, -0x6DAC($gp)
    ctx->pc = 0x2179c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939220), GPR_U32(ctx, 2));
label_2179c4:
    // 0x2179c4: 0xc085acc  jal         func_216B30
label_2179c8:
    if (ctx->pc == 0x2179C8u) {
        ctx->pc = 0x2179C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179C4u;
        // 0x2179c8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179CCu;
        goto label_2179cc;
    }
    ctx->pc = 0x2179C4u;
    SET_GPR_U32(ctx, 31, 0x2179CCu);
    ctx->pc = 0x2179C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179C4u;
    // 0x2179c8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216B30u;
    { ctx->pc = 0x216b30; return; }
    ctx->pc = 0x2179CCu;
label_2179cc:
    // 0x2179cc: 0xc078050  jal         func_1E0140
label_2179d0:
    if (ctx->pc == 0x2179D0u) {
        ctx->pc = 0x2179D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179CCu;
        // 0x2179d0: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179D4u;
        goto label_2179d4;
    }
    ctx->pc = 0x2179CCu;
    SET_GPR_U32(ctx, 31, 0x2179D4u);
    ctx->pc = 0x2179D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179CCu;
    // 0x2179d0: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x2179CCu, 0x2179D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179D4u;
label_2179d4:
    // 0x2179d4: 0xc078070  jal         func_1E01C0
label_2179d8:
    if (ctx->pc == 0x2179D8u) {
        ctx->pc = 0x2179DCu;
        goto label_2179dc;
    }
    ctx->pc = 0x2179D4u;
    SET_GPR_U32(ctx, 31, 0x2179DCu);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x2179D4u, 0x2179DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179DCu;
label_2179dc:
    // 0x2179dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2179dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2179e0:
    // 0x2179e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2179e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2179e4:
    // 0x2179e4: 0xc04e188  jal         func_138620
label_2179e8:
    if (ctx->pc == 0x2179E8u) {
        ctx->pc = 0x2179E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179E4u;
        // 0x2179e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2179ECu;
        goto label_2179ec;
    }
    ctx->pc = 0x2179E4u;
    SET_GPR_U32(ctx, 31, 0x2179ECu);
    ctx->pc = 0x2179E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179E4u;
    // 0x2179e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x2179E4u, 0x2179ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179ECu;
label_2179ec:
    // 0x2179ec: 0xc085904  jal         func_216410
label_2179f0:
    if (ctx->pc == 0x2179F0u) {
        ctx->pc = 0x2179F4u;
        goto label_2179f4;
    }
    ctx->pc = 0x2179ECu;
    SET_GPR_U32(ctx, 31, 0x2179F4u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x2179F4u;
label_2179f4:
    // 0x2179f4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2179f8:
    if (ctx->pc == 0x2179F8u) {
        ctx->pc = 0x2179FCu;
        goto label_2179fc;
    }
    ctx->pc = 0x2179F4u;
    {
        const bool branch_taken_0x2179f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2179f4) {
            ctx->pc = 0x217A88u;
            goto label_217a88;
        }
    }
    ctx->pc = 0x2179FCu;
label_2179fc:
    // 0x2179fc: 0xc085828  jal         func_2160A0
label_217a00:
    if (ctx->pc == 0x217A00u) {
        ctx->pc = 0x217A04u;
        goto label_217a04;
    }
    ctx->pc = 0x2179FCu;
    SET_GPR_U32(ctx, 31, 0x217A04u);
    ctx->pc = 0x2160A0u;
    { ctx->pc = 0x2160a0; return; }
    ctx->pc = 0x217A04u;
label_217a04:
    // 0x217a04: 0xc078030  jal         func_1E00C0
label_217a08:
    if (ctx->pc == 0x217A08u) {
        ctx->pc = 0x217A0Cu;
        goto label_217a0c;
    }
    ctx->pc = 0x217A04u;
    SET_GPR_U32(ctx, 31, 0x217A0Cu);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x217A04u, 0x217A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A0Cu;
label_217a0c:
    // 0x217a0c: 0xc07ab54  jal         func_1EAD50
label_217a10:
    if (ctx->pc == 0x217A10u) {
        ctx->pc = 0x217A14u;
        goto label_217a14;
    }
    ctx->pc = 0x217A0Cu;
    SET_GPR_U32(ctx, 31, 0x217A14u);
    ctx->pc = 0x1EAD50u;
    { ctx->pc = 0x1ead50; return; }
    ctx->pc = 0x217A14u;
label_217a14:
    // 0x217a14: 0xc04e168  jal         func_1385A0
label_217a18:
    if (ctx->pc == 0x217A18u) {
        ctx->pc = 0x217A1Cu;
        goto label_217a1c;
    }
    ctx->pc = 0x217A14u;
    SET_GPR_U32(ctx, 31, 0x217A1Cu);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x217A14u, 0x217A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A1Cu;
label_217a1c:
    // 0x217a1c: 0xc07c06c  jal         func_1F01B0
label_217a20:
    if (ctx->pc == 0x217A20u) {
        ctx->pc = 0x217A24u;
        goto label_217a24;
    }
    ctx->pc = 0x217A1Cu;
    SET_GPR_U32(ctx, 31, 0x217A24u);
    ctx->pc = 0x1F01B0u;
    { ctx->pc = 0x1f01b0; return; }
    ctx->pc = 0x217A24u;
label_217a24:
    // 0x217a24: 0xc085908  jal         func_216420
label_217a28:
    if (ctx->pc == 0x217A28u) {
        ctx->pc = 0x217A2Cu;
        goto label_217a2c;
    }
    ctx->pc = 0x217A24u;
    SET_GPR_U32(ctx, 31, 0x217A2Cu);
    ctx->pc = 0x216420u;
    { ctx->pc = 0x216420; return; }
    ctx->pc = 0x217A2Cu;
label_217a2c:
    // 0x217a2c: 0xc086410  jal         func_219040
label_217a30:
    if (ctx->pc == 0x217A30u) {
        ctx->pc = 0x217A34u;
        goto label_217a34;
    }
    ctx->pc = 0x217A2Cu;
    SET_GPR_U32(ctx, 31, 0x217A34u);
    ctx->pc = 0x219040u;
    { ctx->pc = 0x219040; return; }
    ctx->pc = 0x217A34u;
label_217a34:
    // 0x217a34: 0xc086694  jal         func_219A50
label_217a38:
    if (ctx->pc == 0x217A38u) {
        ctx->pc = 0x217A3Cu;
        goto label_217a3c;
    }
    ctx->pc = 0x217A34u;
    SET_GPR_U32(ctx, 31, 0x217A3Cu);
    ctx->pc = 0x219A50u;
    { ctx->pc = 0x219a50; return; }
    ctx->pc = 0x217A3Cu;
label_217a3c:
    // 0x217a3c: 0xc077fc4  jal         func_1DFF10
label_217a40:
    if (ctx->pc == 0x217A40u) {
        ctx->pc = 0x217A44u;
        goto label_217a44;
    }
    ctx->pc = 0x217A3Cu;
    SET_GPR_U32(ctx, 31, 0x217A44u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x217A3Cu, 0x217A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A44u;
label_217a44:
    // 0x217a44: 0xc07ab3c  jal         func_1EACF0
label_217a48:
    if (ctx->pc == 0x217A48u) {
        ctx->pc = 0x217A4Cu;
        goto label_217a4c;
    }
    ctx->pc = 0x217A44u;
    SET_GPR_U32(ctx, 31, 0x217A4Cu);
    ctx->pc = 0x1EACF0u;
    { ctx->pc = 0x1eacf0; return; }
    ctx->pc = 0x217A4Cu;
label_217a4c:
    // 0x217a4c: 0xc04e120  jal         func_138480
label_217a50:
    if (ctx->pc == 0x217A50u) {
        ctx->pc = 0x217A54u;
        goto label_217a54;
    }
    ctx->pc = 0x217A4Cu;
    SET_GPR_U32(ctx, 31, 0x217A54u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x217A4Cu, 0x217A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A54u;
label_217a54:
    // 0x217a54: 0xc05b578  jal         func_16D5E0
label_217a58:
    if (ctx->pc == 0x217A58u) {
        ctx->pc = 0x217A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A54u;
        // 0x217a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217A5Cu;
        goto label_217a5c;
    }
    ctx->pc = 0x217A54u;
    SET_GPR_U32(ctx, 31, 0x217A5Cu);
    ctx->pc = 0x217A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A54u;
    // 0x217a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x217A54u, 0x217A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A5Cu;
label_217a5c:
    // 0x217a5c: 0xc060258  jal         func_180960
label_217a60:
    if (ctx->pc == 0x217A60u) {
        ctx->pc = 0x217A64u;
        goto label_217a64;
    }
    ctx->pc = 0x217A5Cu;
    SET_GPR_U32(ctx, 31, 0x217A64u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x217A5Cu, 0x217A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A64u;
label_217a64:
    // 0x217a64: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x217a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_217a68:
    // 0x217a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217a6c:
    if (ctx->pc == 0x217A6Cu) {
        ctx->pc = 0x217A70u;
        goto label_217a70;
    }
    ctx->pc = 0x217A68u;
    {
        const bool branch_taken_0x217a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a68) {
            ctx->pc = 0x217A78u;
            goto label_217a78;
        }
    }
    ctx->pc = 0x217A70u;
label_217a70:
    // 0x217a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217a74:
    // 0x217a74: 0xaf829270  sw          $v0, -0x6D90($gp)
    ctx->pc = 0x217a74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 2));
label_217a78:
    // 0x217a78: 0xc085904  jal         func_216410
label_217a7c:
    if (ctx->pc == 0x217A7Cu) {
        ctx->pc = 0x217A80u;
        goto label_217a80;
    }
    ctx->pc = 0x217A78u;
    SET_GPR_U32(ctx, 31, 0x217A80u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x217A80u;
label_217a80:
    // 0x217a80: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_217a84:
    if (ctx->pc == 0x217A84u) {
        ctx->pc = 0x217A88u;
        goto label_217a88;
    }
    ctx->pc = 0x217A80u;
    {
        const bool branch_taken_0x217a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217a80) {
            ctx->pc = 0x2179FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2179fc;
        }
    }
    ctx->pc = 0x217A88u;
label_217a88:
    // 0x217a88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217a8c:
    // 0x217a8c: 0x8f829270  lw          $v0, -0x6D90($gp)
    ctx->pc = 0x217a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939248)));
label_217a90:
    // 0x217a90: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
label_217a94:
    if (ctx->pc == 0x217A94u) {
        ctx->pc = 0x217A98u;
        goto label_217a98;
    }
    ctx->pc = 0x217A90u;
    {
        const bool branch_taken_0x217a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217a90) {
            ctx->pc = 0x217D78u;
            goto label_217d78;
        }
    }
    ctx->pc = 0x217A98u;
label_217a98:
    // 0x217a98: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x217a98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_217a9c:
    // 0x217a9c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x217a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_217aa0:
    // 0x217aa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_217aa4:
    if (ctx->pc == 0x217AA4u) {
        ctx->pc = 0x217AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AA0u;
        // 0x217aa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217AA8u;
        goto label_217aa8;
    }
    ctx->pc = 0x217AA0u;
    {
        const bool branch_taken_0x217aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AA0u;
        // 0x217aa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217aa0) {
            ctx->pc = 0x217ABCu;
            goto label_217abc;
        }
    }
    ctx->pc = 0x217AA8u;
label_217aa8:
    // 0x217aa8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x217aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217aac:
    // 0x217aac: 0xc05b420  jal         func_16D080
label_217ab0:
    if (ctx->pc == 0x217AB0u) {
        ctx->pc = 0x217AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AACu;
        // 0x217ab0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217AB4u;
        goto label_217ab4;
    }
    ctx->pc = 0x217AACu;
    SET_GPR_U32(ctx, 31, 0x217AB4u);
    ctx->pc = 0x217AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AACu;
    // 0x217ab0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x217AACu, 0x217AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AB4u;
label_217ab4:
    // 0x217ab4: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_217ab8:
    if (ctx->pc == 0x217AB8u) {
        ctx->pc = 0x217ABCu;
        goto label_217abc;
    }
    ctx->pc = 0x217AB4u;
    {
        const bool branch_taken_0x217ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ab4) {
            ctx->pc = 0x217D78u;
            goto label_217d78;
        }
    }
    ctx->pc = 0x217ABCu;
label_217abc:
    // 0x217abc: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x217abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_217ac0:
    // 0x217ac0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x217ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_217ac4:
    // 0x217ac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_217ac8:
    if (ctx->pc == 0x217AC8u) {
        ctx->pc = 0x217ACCu;
        goto label_217acc;
    }
    ctx->pc = 0x217AC4u;
    {
        const bool branch_taken_0x217ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ac4) {
            ctx->pc = 0x217AE0u;
            goto label_217ae0;
        }
    }
    ctx->pc = 0x217ACCu;
label_217acc:
    // 0x217acc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x217accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_217ad0:
    // 0x217ad0: 0xc05b420  jal         func_16D080
label_217ad4:
    if (ctx->pc == 0x217AD4u) {
        ctx->pc = 0x217AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AD0u;
        // 0x217ad4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217AD8u;
        goto label_217ad8;
    }
    ctx->pc = 0x217AD0u;
    SET_GPR_U32(ctx, 31, 0x217AD8u);
    ctx->pc = 0x217AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AD0u;
    // 0x217ad4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x217AD0u, 0x217AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AD8u;
label_217ad8:
    // 0x217ad8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_217adc:
    if (ctx->pc == 0x217ADCu) {
        ctx->pc = 0x217ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AD8u;
        // 0x217adc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217AE0u;
        goto label_217ae0;
    }
    ctx->pc = 0x217AD8u;
    {
        const bool branch_taken_0x217ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AD8u;
        // 0x217adc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ad8) {
            ctx->pc = 0x217B8Cu;
            goto label_217b8c;
        }
    }
    ctx->pc = 0x217AE0u;
label_217ae0:
    // 0x217ae0: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x217ae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_217ae4:
    // 0x217ae4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x217ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_217ae8:
    // 0x217ae8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_217aec:
    if (ctx->pc == 0x217AECu) {
        ctx->pc = 0x217AF0u;
        goto label_217af0;
    }
    ctx->pc = 0x217AE8u;
    {
        const bool branch_taken_0x217ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ae8) {
            ctx->pc = 0x217B34u;
            goto label_217b34;
        }
    }
    ctx->pc = 0x217AF0u;
label_217af0:
    // 0x217af0: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x217af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_217af4:
    // 0x217af4: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x217af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_217af8:
    // 0x217af8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_217afc:
    if (ctx->pc == 0x217AFCu) {
        ctx->pc = 0x217B00u;
        goto label_217b00;
    }
    ctx->pc = 0x217AF8u;
    {
        const bool branch_taken_0x217af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x217af8) {
            ctx->pc = 0x217B28u;
            goto label_217b28;
        }
    }
    ctx->pc = 0x217B00u;
label_217b00:
    // 0x217b00: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_217b04:
    if (ctx->pc == 0x217B04u) {
        ctx->pc = 0x217B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B00u;
        // 0x217b04: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B08u;
        goto label_217b08;
    }
    ctx->pc = 0x217B00u;
    {
        const bool branch_taken_0x217b00 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x217B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B00u;
        // 0x217b04: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b00) {
            ctx->pc = 0x217B14u;
            goto label_217b14;
        }
    }
    ctx->pc = 0x217B08u;
label_217b08:
    // 0x217b08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217b0c:
    if (ctx->pc == 0x217B0Cu) {
        ctx->pc = 0x217B10u;
        goto label_217b10;
    }
    ctx->pc = 0x217B08u;
    {
        const bool branch_taken_0x217b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b08) {
            ctx->pc = 0x217B14u;
            goto label_217b14;
        }
    }
    ctx->pc = 0x217B10u;
label_217b10:
    // 0x217b10: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x217b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_217b14:
    // 0x217b14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_217b18:
    if (ctx->pc == 0x217B18u) {
        ctx->pc = 0x217B1Cu;
        goto label_217b1c;
    }
    ctx->pc = 0x217B14u;
    {
        const bool branch_taken_0x217b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b14) {
            ctx->pc = 0x217B28u;
            goto label_217b28;
        }
    }
    ctx->pc = 0x217B1Cu;
label_217b1c:
    // 0x217b1c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_217b20:
    // 0x217b20: 0xc05b420  jal         func_16D080
label_217b24:
    if (ctx->pc == 0x217B24u) {
        ctx->pc = 0x217B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B20u;
        // 0x217b24: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B28u;
        goto label_217b28;
    }
    ctx->pc = 0x217B20u;
    SET_GPR_U32(ctx, 31, 0x217B28u);
    ctx->pc = 0x217B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B20u;
    // 0x217b24: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x217B20u, 0x217B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B28u;
label_217b28:
    // 0x217b28: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x217b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_217b2c:
    // 0x217b2c: 0x10000017  b           . + 4 + (0x17 << 2)
label_217b30:
    if (ctx->pc == 0x217B30u) {
        ctx->pc = 0x217B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B2Cu;
        // 0x217b30: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B34u;
        goto label_217b34;
    }
    ctx->pc = 0x217B2Cu;
    {
        const bool branch_taken_0x217b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B2Cu;
        // 0x217b30: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b2c) {
            ctx->pc = 0x217B8Cu;
            goto label_217b8c;
        }
    }
    ctx->pc = 0x217B34u;
label_217b34:
    // 0x217b34: 0x0  nop
    ctx->pc = 0x217b34u;
    // NOP
label_217b38:
    // 0x217b38: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x217b38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_217b3c:
    // 0x217b3c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x217b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_217b40:
    // 0x217b40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_217b44:
    if (ctx->pc == 0x217B44u) {
        ctx->pc = 0x217B48u;
        goto label_217b48;
    }
    ctx->pc = 0x217B40u;
    {
        const bool branch_taken_0x217b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b40) {
            ctx->pc = 0x217B84u;
            goto label_217b84;
        }
    }
    ctx->pc = 0x217B48u;
label_217b48:
    // 0x217b48: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
label_217b4c:
    if (ctx->pc == 0x217B4Cu) {
        ctx->pc = 0x217B50u;
        goto label_217b50;
    }
    ctx->pc = 0x217B48u;
    {
        const bool branch_taken_0x217b48 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x217b48) {
            ctx->pc = 0x217B78u;
            goto label_217b78;
        }
    }
    ctx->pc = 0x217B50u;
label_217b50:
    // 0x217b50: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_217b54:
    if (ctx->pc == 0x217B54u) {
        ctx->pc = 0x217B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B50u;
        // 0x217b54: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B58u;
        goto label_217b58;
    }
    ctx->pc = 0x217B50u;
    {
        const bool branch_taken_0x217b50 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x217B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B50u;
        // 0x217b54: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b50) {
            ctx->pc = 0x217B64u;
            goto label_217b64;
        }
    }
    ctx->pc = 0x217B58u;
label_217b58:
    // 0x217b58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217b5c:
    if (ctx->pc == 0x217B5Cu) {
        ctx->pc = 0x217B60u;
        goto label_217b60;
    }
    ctx->pc = 0x217B58u;
    {
        const bool branch_taken_0x217b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b58) {
            ctx->pc = 0x217B64u;
            goto label_217b64;
        }
    }
    ctx->pc = 0x217B60u;
label_217b60:
    // 0x217b60: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x217b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_217b64:
    // 0x217b64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_217b68:
    if (ctx->pc == 0x217B68u) {
        ctx->pc = 0x217B6Cu;
        goto label_217b6c;
    }
    ctx->pc = 0x217B64u;
    {
        const bool branch_taken_0x217b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b64) {
            ctx->pc = 0x217B78u;
            goto label_217b78;
        }
    }
    ctx->pc = 0x217B6Cu;
label_217b6c:
    // 0x217b6c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x217b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_217b70:
    // 0x217b70: 0xc05b420  jal         func_16D080
label_217b74:
    if (ctx->pc == 0x217B74u) {
        ctx->pc = 0x217B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B70u;
        // 0x217b74: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B78u;
        goto label_217b78;
    }
    ctx->pc = 0x217B70u;
    SET_GPR_U32(ctx, 31, 0x217B78u);
    ctx->pc = 0x217B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B70u;
    // 0x217b74: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x217B70u, 0x217B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B78u;
label_217b78:
    // 0x217b78: 0x2673fff8  addiu       $s3, $s3, -0x8
    ctx->pc = 0x217b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
label_217b7c:
    // 0x217b7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_217b80:
    if (ctx->pc == 0x217B80u) {
        ctx->pc = 0x217B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B7Cu;
        // 0x217b80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B84u;
        goto label_217b84;
    }
    ctx->pc = 0x217B7Cu;
    {
        const bool branch_taken_0x217b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B7Cu;
        // 0x217b80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b7c) {
            ctx->pc = 0x217B8Cu;
            goto label_217b8c;
        }
    }
    ctx->pc = 0x217B84u;
label_217b84:
    // 0x217b84: 0x0  nop
    ctx->pc = 0x217b84u;
    // NOP
label_217b88:
    // 0x217b88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x217b88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_217b8c:
    // 0x217b8c: 0x0  nop
    ctx->pc = 0x217b8cu;
    // NOP
label_217b90:
    // 0x217b90: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x217b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_217b94:
    // 0x217b94: 0x1980a  movz        $s3, $zero, $at
    ctx->pc = 0x217b94u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_217b98:
    // 0x217b98: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x217b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_217b9c:
    // 0x217b9c: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x217b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_217ba0:
    // 0x217ba0: 0x41980a  movz        $s3, $v0, $at
    ctx->pc = 0x217ba0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_217ba4:
    // 0x217ba4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x217ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_217ba8:
    // 0x217ba8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_217bac:
    if (ctx->pc == 0x217BACu) {
        ctx->pc = 0x217BB0u;
        goto label_217bb0;
    }
    ctx->pc = 0x217BA8u;
    {
        const bool branch_taken_0x217ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217ba8) {
            ctx->pc = 0x217BB4u;
            goto label_217bb4;
        }
    }
    ctx->pc = 0x217BB0u;
label_217bb0:
    // 0x217bb0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x217bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217bb4:
    // 0x217bb4: 0x0  nop
    ctx->pc = 0x217bb4u;
    // NOP
label_217bb8:
    // 0x217bb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x217bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_217bbc:
    // 0x217bbc: 0x8c234904  lw          $v1, 0x4904($at)
    ctx->pc = 0x217bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18692)));
label_217bc0:
    // 0x217bc0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x217bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_217bc4:
    // 0x217bc4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x217bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_217bc8:
    // 0x217bc8: 0x2a840  sll         $s5, $v0, 1
    ctx->pc = 0x217bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_217bcc:
    // 0x217bcc: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x217bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_217bd0:
    // 0x217bd0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_217bd4:
    if (ctx->pc == 0x217BD4u) {
        ctx->pc = 0x217BD8u;
        goto label_217bd8;
    }
    ctx->pc = 0x217BD0u;
    {
        const bool branch_taken_0x217bd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x217bd0) {
            ctx->pc = 0x217BE8u;
            goto label_217be8;
        }
    }
    ctx->pc = 0x217BD8u;
label_217bd8:
    // 0x217bd8: 0xc085d40  jal         func_217500
label_217bdc:
    if (ctx->pc == 0x217BDCu) {
        ctx->pc = 0x217BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BD8u;
        // 0x217bdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BE0u;
        goto label_217be0;
    }
    ctx->pc = 0x217BD8u;
    SET_GPR_U32(ctx, 31, 0x217BE0u);
    ctx->pc = 0x217BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BD8u;
    // 0x217bdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217500u;
    { ctx->pc = 0x217500; return; }
    ctx->pc = 0x217BE0u;
label_217be0:
    // 0x217be0: 0x10000003  b           . + 4 + (0x3 << 2)
label_217be4:
    if (ctx->pc == 0x217BE4u) {
        ctx->pc = 0x217BE8u;
        goto label_217be8;
    }
    ctx->pc = 0x217BE0u;
    {
        const bool branch_taken_0x217be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217be0) {
            ctx->pc = 0x217BF0u;
            goto label_217bf0;
        }
    }
    ctx->pc = 0x217BE8u;
label_217be8:
    // 0x217be8: 0xc085d40  jal         func_217500
label_217bec:
    if (ctx->pc == 0x217BECu) {
        ctx->pc = 0x217BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BE8u;
        // 0x217bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BF0u;
        goto label_217bf0;
    }
    ctx->pc = 0x217BE8u;
    SET_GPR_U32(ctx, 31, 0x217BF0u);
    ctx->pc = 0x217BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BE8u;
    // 0x217bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217500u;
    { ctx->pc = 0x217500; return; }
    ctx->pc = 0x217BF0u;
label_217bf0:
    // 0x217bf0: 0xc0860c4  jal         func_218310
label_217bf4:
    if (ctx->pc == 0x217BF4u) {
        ctx->pc = 0x217BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BF0u;
        // 0x217bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BF8u;
        goto label_217bf8;
    }
    ctx->pc = 0x217BF0u;
    SET_GPR_U32(ctx, 31, 0x217BF8u);
    ctx->pc = 0x217BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF0u;
    // 0x217bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218310u;
    { ctx->pc = 0x218310; return; }
    ctx->pc = 0x217BF8u;
label_217bf8:
    // 0x217bf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217bfc:
    // 0x217bfc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x217bfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217c00:
    // 0x217c00: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x217c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_217c04:
    // 0x217c04: 0x244224b0  addiu       $v0, $v0, 0x24B0
    ctx->pc = 0x217c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9392));
label_217c08:
    // 0x217c08: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x217c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_217c0c:
    // 0x217c0c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x217c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_217c10:
    // 0x217c10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x217c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217c14:
    // 0x217c14: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_217c18:
    if (ctx->pc == 0x217C18u) {
        ctx->pc = 0x217C1Cu;
        goto label_217c1c;
    }
    ctx->pc = 0x217C14u;
    {
        const bool branch_taken_0x217c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217c14) {
            ctx->pc = 0x217CA0u;
            goto label_217ca0;
        }
    }
    ctx->pc = 0x217C1Cu;
label_217c1c:
    // 0x217c1c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x217c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_217c20:
    // 0x217c20: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x217c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_217c24:
    // 0x217c24: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x217c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_217c28:
    // 0x217c28: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x217c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_217c2c:
    // 0x217c2c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_217c30:
    // 0x217c30: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x217c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_217c34:
    // 0x217c34: 0x1010  mfhi        $v0
    ctx->pc = 0x217c34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_217c38:
    // 0x217c38: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x217c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_217c3c:
    // 0x217c3c: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x217c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_217c40:
    // 0x217c40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x217c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_217c44:
    // 0x217c44: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x217c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_217c48:
    // 0x217c48: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x217c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_217c4c:
    // 0x217c4c: 0x1010  mfhi        $v0
    ctx->pc = 0x217c4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_217c50:
    // 0x217c50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x217c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_217c54:
    // 0x217c54: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x217c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_217c58:
    // 0x217c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_217c5c:
    // 0x217c5c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x217c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_217c60:
    // 0x217c60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_217c64:
    if (ctx->pc == 0x217C64u) {
        ctx->pc = 0x217C68u;
        goto label_217c68;
    }
    ctx->pc = 0x217C60u;
    {
        const bool branch_taken_0x217c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217c60) {
            ctx->pc = 0x217C8Cu;
            goto label_217c8c;
        }
    }
    ctx->pc = 0x217C68u;
label_217c68:
    // 0x217c68: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x217c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_217c6c:
    // 0x217c6c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_217c70:
    if (ctx->pc == 0x217C70u) {
        ctx->pc = 0x217C74u;
        goto label_217c74;
    }
    ctx->pc = 0x217C6Cu;
    {
        const bool branch_taken_0x217c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x217c6c) {
            ctx->pc = 0x217C8Cu;
            goto label_217c8c;
        }
    }
    ctx->pc = 0x217C74u;
label_217c74:
    // 0x217c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217c78:
    // 0x217c78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217c7c:
    // 0x217c7c: 0xc085cc4  jal         func_217310
label_217c80:
    if (ctx->pc == 0x217C80u) {
        ctx->pc = 0x217C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C7Cu;
        // 0x217c80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C84u;
        goto label_217c84;
    }
    ctx->pc = 0x217C7Cu;
    SET_GPR_U32(ctx, 31, 0x217C84u);
    ctx->pc = 0x217C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C7Cu;
    // 0x217c80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x217C84u;
label_217c84:
    // 0x217c84: 0x10000006  b           . + 4 + (0x6 << 2)
label_217c88:
    if (ctx->pc == 0x217C88u) {
        ctx->pc = 0x217C8Cu;
        goto label_217c8c;
    }
    ctx->pc = 0x217C84u;
    {
        const bool branch_taken_0x217c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217c84) {
            ctx->pc = 0x217CA0u;
            goto label_217ca0;
        }
    }
    ctx->pc = 0x217C8Cu;
label_217c8c:
    // 0x217c8c: 0x0  nop
    ctx->pc = 0x217c8cu;
    // NOP
label_217c90:
    // 0x217c90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x217c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217c94:
    // 0x217c94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x217c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217c98:
    // 0x217c98: 0xc085cc4  jal         func_217310
label_217c9c:
    if (ctx->pc == 0x217C9Cu) {
        ctx->pc = 0x217C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C98u;
        // 0x217c9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CA0u;
        goto label_217ca0;
    }
    ctx->pc = 0x217C98u;
    SET_GPR_U32(ctx, 31, 0x217CA0u);
    ctx->pc = 0x217C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C98u;
    // 0x217c9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x217CA0u;
label_217ca0:
    // 0x217ca0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x217ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_217ca4:
    // 0x217ca4: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x217ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_217ca8:
    // 0x217ca8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_217cac:
    if (ctx->pc == 0x217CACu) {
        ctx->pc = 0x217CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CA8u;
        // 0x217cac: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CB0u;
        goto label_217cb0;
    }
    ctx->pc = 0x217CA8u;
    {
        const bool branch_taken_0x217ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CA8u;
        // 0x217cac: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ca8) {
            ctx->pc = 0x217C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217c00;
        }
    }
    ctx->pc = 0x217CB0u;
label_217cb0:
    // 0x217cb0: 0xc086040  jal         func_218100
label_217cb4:
    if (ctx->pc == 0x217CB4u) {
        ctx->pc = 0x217CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CB0u;
        // 0x217cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CB8u;
        goto label_217cb8;
    }
    ctx->pc = 0x217CB0u;
    SET_GPR_U32(ctx, 31, 0x217CB8u);
    ctx->pc = 0x217CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CB0u;
    // 0x217cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218100u;
    { ctx->pc = 0x218100; return; }
    ctx->pc = 0x217CB8u;
label_217cb8:
    // 0x217cb8: 0xc085f98  jal         func_217E60
label_217cbc:
    if (ctx->pc == 0x217CBCu) {
        ctx->pc = 0x217CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CB8u;
        // 0x217cbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CC0u;
        goto label_217cc0;
    }
    ctx->pc = 0x217CB8u;
    SET_GPR_U32(ctx, 31, 0x217CC0u);
    ctx->pc = 0x217CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CB8u;
    // 0x217cbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217E60u;
    goto label_217e60;
    ctx->pc = 0x217CC0u;
label_217cc0:
    // 0x217cc0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x217cc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_217cc4:
    // 0x217cc4: 0xaf919258  sw          $s1, -0x6DA8($gp)
    ctx->pc = 0x217cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939224), GPR_U32(ctx, 17));
label_217cc8:
    // 0x217cc8: 0x1a80a  movz        $s5, $zero, $at
    ctx->pc = 0x217cc8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_217ccc:
    // 0x217ccc: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x217cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
label_217cd0:
    // 0x217cd0: 0x34217030  ori         $at, $at, 0x7030
    ctx->pc = 0x217cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28720);
label_217cd4:
    // 0x217cd4: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x217cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_217cd8:
    // 0x217cd8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_217cdc:
    if (ctx->pc == 0x217CDCu) {
        ctx->pc = 0x217CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CD8u;
        // 0x217cdc: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CE0u;
        goto label_217ce0;
    }
    ctx->pc = 0x217CD8u;
    {
        const bool branch_taken_0x217cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CD8u;
        // 0x217cdc: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cd8) {
            ctx->pc = 0x217CECu;
            goto label_217cec;
        }
    }
    ctx->pc = 0x217CE0u;
label_217ce0:
    // 0x217ce0: 0x10000004  b           . + 4 + (0x4 << 2)
label_217ce4:
    if (ctx->pc == 0x217CE4u) {
        ctx->pc = 0x217CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE0u;
        // 0x217ce4: 0xaf959254  sw          $s5, -0x6DAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939220), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CE8u;
        goto label_217ce8;
    }
    ctx->pc = 0x217CE0u;
    {
        const bool branch_taken_0x217ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE0u;
        // 0x217ce4: 0xaf959254  sw          $s5, -0x6DAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939220), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ce0) {
            ctx->pc = 0x217CF4u;
            goto label_217cf4;
        }
    }
    ctx->pc = 0x217CE8u;
label_217ce8:
    // 0x217ce8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x217ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_217cec:
    // 0x217cec: 0x34557030  ori         $s5, $v0, 0x7030
    ctx->pc = 0x217cecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28720);
label_217cf0:
    // 0x217cf0: 0xaf959254  sw          $s5, -0x6DAC($gp)
    ctx->pc = 0x217cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939220), GPR_U32(ctx, 21));
label_217cf4:
    // 0x217cf4: 0xc085828  jal         func_2160A0
label_217cf8:
    if (ctx->pc == 0x217CF8u) {
        ctx->pc = 0x217CFCu;
        goto label_217cfc;
    }
    ctx->pc = 0x217CF4u;
    SET_GPR_U32(ctx, 31, 0x217CFCu);
    ctx->pc = 0x2160A0u;
    { ctx->pc = 0x2160a0; return; }
    ctx->pc = 0x217CFCu;
label_217cfc:
    // 0x217cfc: 0xc078030  jal         func_1E00C0
label_217d00:
    if (ctx->pc == 0x217D00u) {
        ctx->pc = 0x217D04u;
        goto label_217d04;
    }
    ctx->pc = 0x217CFCu;
    SET_GPR_U32(ctx, 31, 0x217D04u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x217CFCu, 0x217D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D04u;
label_217d04:
    // 0x217d04: 0xc07ab54  jal         func_1EAD50
label_217d08:
    if (ctx->pc == 0x217D08u) {
        ctx->pc = 0x217D0Cu;
        goto label_217d0c;
    }
    ctx->pc = 0x217D04u;
    SET_GPR_U32(ctx, 31, 0x217D0Cu);
    ctx->pc = 0x1EAD50u;
    { ctx->pc = 0x1ead50; return; }
    ctx->pc = 0x217D0Cu;
label_217d0c:
    // 0x217d0c: 0xc04e168  jal         func_1385A0
label_217d10:
    if (ctx->pc == 0x217D10u) {
        ctx->pc = 0x217D14u;
        goto label_217d14;
    }
    ctx->pc = 0x217D0Cu;
    SET_GPR_U32(ctx, 31, 0x217D14u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x217D0Cu, 0x217D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D14u;
label_217d14:
    // 0x217d14: 0xc07c06c  jal         func_1F01B0
label_217d18:
    if (ctx->pc == 0x217D18u) {
        ctx->pc = 0x217D1Cu;
        goto label_217d1c;
    }
    ctx->pc = 0x217D14u;
    SET_GPR_U32(ctx, 31, 0x217D1Cu);
    ctx->pc = 0x1F01B0u;
    { ctx->pc = 0x1f01b0; return; }
    ctx->pc = 0x217D1Cu;
label_217d1c:
    // 0x217d1c: 0xc085908  jal         func_216420
label_217d20:
    if (ctx->pc == 0x217D20u) {
        ctx->pc = 0x217D24u;
        goto label_217d24;
    }
    ctx->pc = 0x217D1Cu;
    SET_GPR_U32(ctx, 31, 0x217D24u);
    ctx->pc = 0x216420u;
    { ctx->pc = 0x216420; return; }
    ctx->pc = 0x217D24u;
label_217d24:
    // 0x217d24: 0xc086410  jal         func_219040
label_217d28:
    if (ctx->pc == 0x217D28u) {
        ctx->pc = 0x217D2Cu;
        goto label_217d2c;
    }
    ctx->pc = 0x217D24u;
    SET_GPR_U32(ctx, 31, 0x217D2Cu);
    ctx->pc = 0x219040u;
    { ctx->pc = 0x219040; return; }
    ctx->pc = 0x217D2Cu;
label_217d2c:
    // 0x217d2c: 0xc086694  jal         func_219A50
label_217d30:
    if (ctx->pc == 0x217D30u) {
        ctx->pc = 0x217D34u;
        goto label_217d34;
    }
    ctx->pc = 0x217D2Cu;
    SET_GPR_U32(ctx, 31, 0x217D34u);
    ctx->pc = 0x219A50u;
    { ctx->pc = 0x219a50; return; }
    ctx->pc = 0x217D34u;
label_217d34:
    // 0x217d34: 0xc077fc4  jal         func_1DFF10
label_217d38:
    if (ctx->pc == 0x217D38u) {
        ctx->pc = 0x217D3Cu;
        goto label_217d3c;
    }
    ctx->pc = 0x217D34u;
    SET_GPR_U32(ctx, 31, 0x217D3Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x217D34u, 0x217D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D3Cu;
label_217d3c:
    // 0x217d3c: 0xc07ab3c  jal         func_1EACF0
label_217d40:
    if (ctx->pc == 0x217D40u) {
        ctx->pc = 0x217D44u;
        goto label_217d44;
    }
    ctx->pc = 0x217D3Cu;
    SET_GPR_U32(ctx, 31, 0x217D44u);
    ctx->pc = 0x1EACF0u;
    { ctx->pc = 0x1eacf0; return; }
    ctx->pc = 0x217D44u;
label_217d44:
    // 0x217d44: 0xc04e120  jal         func_138480
label_217d48:
    if (ctx->pc == 0x217D48u) {
        ctx->pc = 0x217D4Cu;
        goto label_217d4c;
    }
    ctx->pc = 0x217D44u;
    SET_GPR_U32(ctx, 31, 0x217D4Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x217D44u, 0x217D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D4Cu;
label_217d4c:
    // 0x217d4c: 0xc05b578  jal         func_16D5E0
label_217d50:
    if (ctx->pc == 0x217D50u) {
        ctx->pc = 0x217D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D4Cu;
        // 0x217d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D54u;
        goto label_217d54;
    }
    ctx->pc = 0x217D4Cu;
    SET_GPR_U32(ctx, 31, 0x217D54u);
    ctx->pc = 0x217D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D4Cu;
    // 0x217d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x217D4Cu, 0x217D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D54u;
label_217d54:
    // 0x217d54: 0xc060258  jal         func_180960
label_217d58:
    if (ctx->pc == 0x217D58u) {
        ctx->pc = 0x217D5Cu;
        goto label_217d5c;
    }
    ctx->pc = 0x217D54u;
    SET_GPR_U32(ctx, 31, 0x217D5Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x217D54u, 0x217D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D5Cu;
label_217d5c:
    // 0x217d5c: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x217d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_217d60:
    // 0x217d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217d64:
    if (ctx->pc == 0x217D64u) {
        ctx->pc = 0x217D68u;
        goto label_217d68;
    }
    ctx->pc = 0x217D60u;
    {
        const bool branch_taken_0x217d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d60) {
            ctx->pc = 0x217D70u;
            goto label_217d70;
        }
    }
    ctx->pc = 0x217D68u;
label_217d68:
    // 0x217d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217d6c:
    // 0x217d6c: 0xaf829270  sw          $v0, -0x6D90($gp)
    ctx->pc = 0x217d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 2));
label_217d70:
    // 0x217d70: 0x1000ff46  b           . + 4 + (-0xBA << 2)
label_217d74:
    if (ctx->pc == 0x217D74u) {
        ctx->pc = 0x217D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D70u;
        // 0x217d74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D78u;
        goto label_217d78;
    }
    ctx->pc = 0x217D70u;
    {
        const bool branch_taken_0x217d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D70u;
        // 0x217d74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d70) {
            ctx->pc = 0x217A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217a8c;
        }
    }
    ctx->pc = 0x217D78u;
label_217d78:
    // 0x217d78: 0xc078078  jal         func_1E01E0
label_217d7c:
    if (ctx->pc == 0x217D7Cu) {
        ctx->pc = 0x217D80u;
        goto label_217d80;
    }
    ctx->pc = 0x217D78u;
    SET_GPR_U32(ctx, 31, 0x217D80u);
    ctx->pc = 0x1E01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01E0u, 0x217D78u, 0x217D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D80u;
label_217d80:
    // 0x217d80: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x217d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_217d84:
    // 0x217d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217d88:
    // 0x217d88: 0xc04e188  jal         func_138620
label_217d8c:
    if (ctx->pc == 0x217D8Cu) {
        ctx->pc = 0x217D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D88u;
        // 0x217d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D90u;
        goto label_217d90;
    }
    ctx->pc = 0x217D88u;
    SET_GPR_U32(ctx, 31, 0x217D90u);
    ctx->pc = 0x217D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D88u;
    // 0x217d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x217D88u, 0x217D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D90u;
label_217d90:
    // 0x217d90: 0xc04e198  jal         func_138660
label_217d94:
    if (ctx->pc == 0x217D94u) {
        ctx->pc = 0x217D98u;
        goto label_217d98;
    }
    ctx->pc = 0x217D90u;
    SET_GPR_U32(ctx, 31, 0x217D98u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x217D90u, 0x217D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D98u;
label_217d98:
    // 0x217d98: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_217d9c:
    if (ctx->pc == 0x217D9Cu) {
        ctx->pc = 0x217DA0u;
        goto label_217da0;
    }
    ctx->pc = 0x217D98u;
    {
        const bool branch_taken_0x217d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d98) {
            ctx->pc = 0x217E30u;
            goto label_217e30;
        }
    }
    ctx->pc = 0x217DA0u;
label_217da0:
    // 0x217da0: 0xc085828  jal         func_2160A0
label_217da4:
    if (ctx->pc == 0x217DA4u) {
        ctx->pc = 0x217DA8u;
        goto label_217da8;
    }
    ctx->pc = 0x217DA0u;
    SET_GPR_U32(ctx, 31, 0x217DA8u);
    ctx->pc = 0x2160A0u;
    { ctx->pc = 0x2160a0; return; }
    ctx->pc = 0x217DA8u;
label_217da8:
    // 0x217da8: 0xc078030  jal         func_1E00C0
label_217dac:
    if (ctx->pc == 0x217DACu) {
        ctx->pc = 0x217DB0u;
        goto label_217db0;
    }
    ctx->pc = 0x217DA8u;
    SET_GPR_U32(ctx, 31, 0x217DB0u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x217DA8u, 0x217DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DB0u;
label_217db0:
    // 0x217db0: 0xc07ab54  jal         func_1EAD50
label_217db4:
    if (ctx->pc == 0x217DB4u) {
        ctx->pc = 0x217DB8u;
        goto label_217db8;
    }
    ctx->pc = 0x217DB0u;
    SET_GPR_U32(ctx, 31, 0x217DB8u);
    ctx->pc = 0x1EAD50u;
    { ctx->pc = 0x1ead50; return; }
    ctx->pc = 0x217DB8u;
label_217db8:
    // 0x217db8: 0xc04e168  jal         func_1385A0
label_217dbc:
    if (ctx->pc == 0x217DBCu) {
        ctx->pc = 0x217DC0u;
        goto label_217dc0;
    }
    ctx->pc = 0x217DB8u;
    SET_GPR_U32(ctx, 31, 0x217DC0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x217DB8u, 0x217DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DC0u;
label_217dc0:
    // 0x217dc0: 0xc07c06c  jal         func_1F01B0
label_217dc4:
    if (ctx->pc == 0x217DC4u) {
        ctx->pc = 0x217DC8u;
        goto label_217dc8;
    }
    ctx->pc = 0x217DC0u;
    SET_GPR_U32(ctx, 31, 0x217DC8u);
    ctx->pc = 0x1F01B0u;
    { ctx->pc = 0x1f01b0; return; }
    ctx->pc = 0x217DC8u;
label_217dc8:
    // 0x217dc8: 0xc085908  jal         func_216420
label_217dcc:
    if (ctx->pc == 0x217DCCu) {
        ctx->pc = 0x217DD0u;
        goto label_217dd0;
    }
    ctx->pc = 0x217DC8u;
    SET_GPR_U32(ctx, 31, 0x217DD0u);
    ctx->pc = 0x216420u;
    { ctx->pc = 0x216420; return; }
    ctx->pc = 0x217DD0u;
label_217dd0:
    // 0x217dd0: 0xc086410  jal         func_219040
label_217dd4:
    if (ctx->pc == 0x217DD4u) {
        ctx->pc = 0x217DD8u;
        goto label_217dd8;
    }
    ctx->pc = 0x217DD0u;
    SET_GPR_U32(ctx, 31, 0x217DD8u);
    ctx->pc = 0x219040u;
    { ctx->pc = 0x219040; return; }
    ctx->pc = 0x217DD8u;
label_217dd8:
    // 0x217dd8: 0xc086694  jal         func_219A50
label_217ddc:
    if (ctx->pc == 0x217DDCu) {
        ctx->pc = 0x217DE0u;
        goto label_217de0;
    }
    ctx->pc = 0x217DD8u;
    SET_GPR_U32(ctx, 31, 0x217DE0u);
    ctx->pc = 0x219A50u;
    { ctx->pc = 0x219a50; return; }
    ctx->pc = 0x217DE0u;
label_217de0:
    // 0x217de0: 0xc077fc4  jal         func_1DFF10
label_217de4:
    if (ctx->pc == 0x217DE4u) {
        ctx->pc = 0x217DE8u;
        goto label_217de8;
    }
    ctx->pc = 0x217DE0u;
    SET_GPR_U32(ctx, 31, 0x217DE8u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x217DE0u, 0x217DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DE8u;
label_217de8:
    // 0x217de8: 0xc07ab3c  jal         func_1EACF0
label_217dec:
    if (ctx->pc == 0x217DECu) {
        ctx->pc = 0x217DF0u;
        goto label_217df0;
    }
    ctx->pc = 0x217DE8u;
    SET_GPR_U32(ctx, 31, 0x217DF0u);
    ctx->pc = 0x1EACF0u;
    { ctx->pc = 0x1eacf0; return; }
    ctx->pc = 0x217DF0u;
label_217df0:
    // 0x217df0: 0xc04e120  jal         func_138480
label_217df4:
    if (ctx->pc == 0x217DF4u) {
        ctx->pc = 0x217DF8u;
        goto label_217df8;
    }
    ctx->pc = 0x217DF0u;
    SET_GPR_U32(ctx, 31, 0x217DF8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x217DF0u, 0x217DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DF8u;
label_217df8:
    // 0x217df8: 0xc05b578  jal         func_16D5E0
label_217dfc:
    if (ctx->pc == 0x217DFCu) {
        ctx->pc = 0x217DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DF8u;
        // 0x217dfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E00u;
        goto label_217e00;
    }
    ctx->pc = 0x217DF8u;
    SET_GPR_U32(ctx, 31, 0x217E00u);
    ctx->pc = 0x217DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DF8u;
    // 0x217dfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x217DF8u, 0x217E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E00u;
label_217e00:
    // 0x217e00: 0xc060258  jal         func_180960
label_217e04:
    if (ctx->pc == 0x217E04u) {
        ctx->pc = 0x217E08u;
        goto label_217e08;
    }
    ctx->pc = 0x217E00u;
    SET_GPR_U32(ctx, 31, 0x217E08u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x217E00u, 0x217E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E08u;
label_217e08:
    // 0x217e08: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x217e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_217e0c:
    // 0x217e0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217e10:
    if (ctx->pc == 0x217E10u) {
        ctx->pc = 0x217E14u;
        goto label_217e14;
    }
    ctx->pc = 0x217E0Cu;
    {
        const bool branch_taken_0x217e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217e0c) {
            ctx->pc = 0x217E1Cu;
            goto label_217e1c;
        }
    }
    ctx->pc = 0x217E14u;
label_217e14:
    // 0x217e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217e18:
    // 0x217e18: 0xaf829270  sw          $v0, -0x6D90($gp)
    ctx->pc = 0x217e18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 2));
label_217e1c:
    // 0x217e1c: 0x0  nop
    ctx->pc = 0x217e1cu;
    // NOP
label_217e20:
    // 0x217e20: 0xc04e198  jal         func_138660
label_217e24:
    if (ctx->pc == 0x217E24u) {
        ctx->pc = 0x217E28u;
        goto label_217e28;
    }
    ctx->pc = 0x217E20u;
    SET_GPR_U32(ctx, 31, 0x217E28u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x217E20u, 0x217E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E28u;
label_217e28:
    // 0x217e28: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_217e2c:
    if (ctx->pc == 0x217E2Cu) {
        ctx->pc = 0x217E30u;
        goto label_217e30;
    }
    ctx->pc = 0x217E28u;
    {
        const bool branch_taken_0x217e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217e28) {
            ctx->pc = 0x217DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217da0;
        }
    }
    ctx->pc = 0x217E30u;
label_217e30:
    // 0x217e30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x217e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_217e34:
    // 0x217e34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x217e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_217e38:
    // 0x217e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x217e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217e3c:
    // 0x217e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x217e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217e40:
    // 0x217e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x217e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217e44:
    // 0x217e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217e48:
    // 0x217e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217e4c:
    // 0x217e4c: 0x3e00008  jr          $ra
label_217e50:
    if (ctx->pc == 0x217E50u) {
        ctx->pc = 0x217E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E4Cu;
        // 0x217e50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E54u;
        goto label_217e54;
    }
    ctx->pc = 0x217E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E4Cu;
        // 0x217e50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E54u;
label_217e54:
    // 0x217e54: 0x0  nop
    ctx->pc = 0x217e54u;
    // NOP
label_217e58:
    // 0x217e58: 0x0  nop
    ctx->pc = 0x217e58u;
    // NOP
label_217e5c:
    // 0x217e5c: 0x0  nop
    ctx->pc = 0x217e5cu;
    // NOP
label_217e60:
    // 0x217e60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x217e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_217e64:
    // 0x217e64: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x217e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_217e68:
    // 0x217e68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x217e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_217e6c:
    // 0x217e6c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x217e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_217e70:
    // 0x217e70: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x217e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_217e74:
    // 0x217e74: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x217e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_217e78:
    // 0x217e78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x217e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_217e7c:
    // 0x217e7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x217e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_217e80:
    // 0x217e80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x217e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_217e84:
    // 0x217e84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x217e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_217e88:
    // 0x217e88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x217e88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217e8c:
    // 0x217e8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x217e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_217e90:
    // 0x217e90: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x217e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_217e94:
    // 0x217e94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x217e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_217e98:
    // 0x217e98: 0x152fc2  srl         $a1, $s5, 31
    ctx->pc = 0x217e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_217e9c:
    // 0x217e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_217ea0:
    // 0x217ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_217ea4:
    // 0x217ea4: 0x8f87926c  lw          $a3, -0x6D94($gp)
    ctx->pc = 0x217ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_217ea8:
    // 0x217ea8: 0x1810  mfhi        $v1
    ctx->pc = 0x217ea8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_217eac:
    // 0x217eac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x217eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_217eb0:
    // 0x217eb0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x217eb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_217eb4:
    // 0x217eb4: 0x2a7102a  slt         $v0, $s5, $a3
    ctx->pc = 0x217eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_217eb8:
    // 0x217eb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_217ebc:
    if (ctx->pc == 0x217EBCu) {
        ctx->pc = 0x217EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EB8u;
        // 0x217ebc: 0x65b021  addu        $s6, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EC0u;
        goto label_217ec0;
    }
    ctx->pc = 0x217EB8u;
    {
        const bool branch_taken_0x217eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EB8u;
        // 0x217ebc: 0x65b021  addu        $s6, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217eb8) {
            ctx->pc = 0x217EDCu;
            goto label_217edc;
        }
    }
    ctx->pc = 0x217EC0u;
label_217ec0:
    // 0x217ec0: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x217ec0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_217ec4:
    // 0x217ec4: 0x0  nop
    ctx->pc = 0x217ec4u;
    // NOP
label_217ec8:
    // 0x217ec8: 0x0  nop
    ctx->pc = 0x217ec8u;
    // NOP
label_217ecc:
    // 0x217ecc: 0x1010  mfhi        $v0
    ctx->pc = 0x217eccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_217ed0:
    // 0x217ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217ed4:
    if (ctx->pc == 0x217ED4u) {
        ctx->pc = 0x217ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217ED0u;
        // 0x217ed4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217ED8u;
        goto label_217ed8;
    }
    ctx->pc = 0x217ED0u;
    {
        const bool branch_taken_0x217ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217ED0u;
        // 0x217ed4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ed0) {
            ctx->pc = 0x217EE0u;
            goto label_217ee0;
        }
    }
    ctx->pc = 0x217ED8u;
label_217ed8:
    // 0x217ed8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x217ed8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_217edc:
    // 0x217edc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x217edcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ee0:
    // 0x217ee0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x217ee0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ee4:
    // 0x217ee4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x217ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ee8:
    // 0x217ee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217eec:
    // 0x217eec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ef0:
    // 0x217ef0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x217ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ef4:
    // 0x217ef4: 0x0  nop
    ctx->pc = 0x217ef4u;
    // NOP
label_217ef8:
    // 0x217ef8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x217ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_217efc:
    // 0x217efc: 0x24428ac0  addiu       $v0, $v0, -0x7540
    ctx->pc = 0x217efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
label_217f00:
    // 0x217f00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x217f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_217f04:
    // 0x217f04: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x217f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_217f08:
    // 0x217f08: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x217f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_217f0c:
    // 0x217f0c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x217f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_217f10:
    // 0x217f10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x217f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217f14:
    // 0x217f14: 0xc08675c  jal         func_219D70
label_217f18:
    if (ctx->pc == 0x217F18u) {
        ctx->pc = 0x217F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F14u;
        // 0x217f18: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F1Cu;
        goto label_217f1c;
    }
    ctx->pc = 0x217F14u;
    SET_GPR_U32(ctx, 31, 0x217F1Cu);
    ctx->pc = 0x217F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F14u;
    // 0x217f18: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x217F1Cu;
label_217f1c:
    // 0x217f1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x217f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x217f20u;
    return;
}
