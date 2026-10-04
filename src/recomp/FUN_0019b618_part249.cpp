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


void FUN_0019b618_part249(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x214798u: goto label_214798;
        case 0x21479cu: goto label_21479c;
        case 0x2147a0u: goto label_2147a0;
        case 0x2147a4u: goto label_2147a4;
        case 0x2147a8u: goto label_2147a8;
        case 0x2147acu: goto label_2147ac;
        case 0x2147b0u: goto label_2147b0;
        case 0x2147b4u: goto label_2147b4;
        case 0x2147b8u: goto label_2147b8;
        case 0x2147bcu: goto label_2147bc;
        case 0x2147c0u: goto label_2147c0;
        case 0x2147c4u: goto label_2147c4;
        case 0x2147c8u: goto label_2147c8;
        case 0x2147ccu: goto label_2147cc;
        case 0x2147d0u: goto label_2147d0;
        case 0x2147d4u: goto label_2147d4;
        case 0x2147d8u: goto label_2147d8;
        case 0x2147dcu: goto label_2147dc;
        case 0x2147e0u: goto label_2147e0;
        case 0x2147e4u: goto label_2147e4;
        case 0x2147e8u: goto label_2147e8;
        case 0x2147ecu: goto label_2147ec;
        case 0x2147f0u: goto label_2147f0;
        case 0x2147f4u: goto label_2147f4;
        case 0x2147f8u: goto label_2147f8;
        case 0x2147fcu: goto label_2147fc;
        case 0x214800u: goto label_214800;
        case 0x214804u: goto label_214804;
        case 0x214808u: goto label_214808;
        case 0x21480cu: goto label_21480c;
        case 0x214810u: goto label_214810;
        case 0x214814u: goto label_214814;
        case 0x214818u: goto label_214818;
        case 0x21481cu: goto label_21481c;
        case 0x214820u: goto label_214820;
        case 0x214824u: goto label_214824;
        case 0x214828u: goto label_214828;
        case 0x21482cu: goto label_21482c;
        case 0x214830u: goto label_214830;
        case 0x214834u: goto label_214834;
        case 0x214838u: goto label_214838;
        case 0x21483cu: goto label_21483c;
        case 0x214840u: goto label_214840;
        case 0x214844u: goto label_214844;
        case 0x214848u: goto label_214848;
        case 0x21484cu: goto label_21484c;
        case 0x214850u: goto label_214850;
        case 0x214854u: goto label_214854;
        case 0x214858u: goto label_214858;
        case 0x21485cu: goto label_21485c;
        case 0x214860u: goto label_214860;
        case 0x214864u: goto label_214864;
        case 0x214868u: goto label_214868;
        case 0x21486cu: goto label_21486c;
        case 0x214870u: goto label_214870;
        case 0x214874u: goto label_214874;
        case 0x214878u: goto label_214878;
        case 0x21487cu: goto label_21487c;
        case 0x214880u: goto label_214880;
        case 0x214884u: goto label_214884;
        case 0x214888u: goto label_214888;
        case 0x21488cu: goto label_21488c;
        case 0x214890u: goto label_214890;
        case 0x214894u: goto label_214894;
        case 0x214898u: goto label_214898;
        case 0x21489cu: goto label_21489c;
        case 0x2148a0u: goto label_2148a0;
        case 0x2148a4u: goto label_2148a4;
        case 0x2148a8u: goto label_2148a8;
        case 0x2148acu: goto label_2148ac;
        case 0x2148b0u: goto label_2148b0;
        case 0x2148b4u: goto label_2148b4;
        case 0x2148b8u: goto label_2148b8;
        case 0x2148bcu: goto label_2148bc;
        case 0x2148c0u: goto label_2148c0;
        case 0x2148c4u: goto label_2148c4;
        case 0x2148c8u: goto label_2148c8;
        case 0x2148ccu: goto label_2148cc;
        case 0x2148d0u: goto label_2148d0;
        case 0x2148d4u: goto label_2148d4;
        case 0x2148d8u: goto label_2148d8;
        case 0x2148dcu: goto label_2148dc;
        case 0x2148e0u: goto label_2148e0;
        case 0x2148e4u: goto label_2148e4;
        case 0x2148e8u: goto label_2148e8;
        case 0x2148ecu: goto label_2148ec;
        case 0x2148f0u: goto label_2148f0;
        case 0x2148f4u: goto label_2148f4;
        case 0x2148f8u: goto label_2148f8;
        case 0x2148fcu: goto label_2148fc;
        case 0x214900u: goto label_214900;
        case 0x214904u: goto label_214904;
        case 0x214908u: goto label_214908;
        case 0x21490cu: goto label_21490c;
        case 0x214910u: goto label_214910;
        case 0x214914u: goto label_214914;
        case 0x214918u: goto label_214918;
        case 0x21491cu: goto label_21491c;
        case 0x214920u: goto label_214920;
        case 0x214924u: goto label_214924;
        case 0x214928u: goto label_214928;
        case 0x21492cu: goto label_21492c;
        case 0x214930u: goto label_214930;
        case 0x214934u: goto label_214934;
        case 0x214938u: goto label_214938;
        case 0x21493cu: goto label_21493c;
        case 0x214940u: goto label_214940;
        case 0x214944u: goto label_214944;
        case 0x214948u: goto label_214948;
        case 0x21494cu: goto label_21494c;
        case 0x214950u: goto label_214950;
        case 0x214954u: goto label_214954;
        case 0x214958u: goto label_214958;
        case 0x21495cu: goto label_21495c;
        case 0x214960u: goto label_214960;
        case 0x214964u: goto label_214964;
        case 0x214968u: goto label_214968;
        case 0x21496cu: goto label_21496c;
        case 0x214970u: goto label_214970;
        case 0x214974u: goto label_214974;
        case 0x214978u: goto label_214978;
        case 0x21497cu: goto label_21497c;
        case 0x214980u: goto label_214980;
        case 0x214984u: goto label_214984;
        case 0x214988u: goto label_214988;
        case 0x21498cu: goto label_21498c;
        case 0x214990u: goto label_214990;
        case 0x214994u: goto label_214994;
        case 0x214998u: goto label_214998;
        case 0x21499cu: goto label_21499c;
        case 0x2149a0u: goto label_2149a0;
        case 0x2149a4u: goto label_2149a4;
        case 0x2149a8u: goto label_2149a8;
        case 0x2149acu: goto label_2149ac;
        case 0x2149b0u: goto label_2149b0;
        case 0x2149b4u: goto label_2149b4;
        case 0x2149b8u: goto label_2149b8;
        case 0x2149bcu: goto label_2149bc;
        case 0x2149c0u: goto label_2149c0;
        case 0x2149c4u: goto label_2149c4;
        case 0x2149c8u: goto label_2149c8;
        case 0x2149ccu: goto label_2149cc;
        case 0x2149d0u: goto label_2149d0;
        case 0x2149d4u: goto label_2149d4;
        case 0x2149d8u: goto label_2149d8;
        case 0x2149dcu: goto label_2149dc;
        case 0x2149e0u: goto label_2149e0;
        case 0x2149e4u: goto label_2149e4;
        case 0x2149e8u: goto label_2149e8;
        case 0x2149ecu: goto label_2149ec;
        case 0x2149f0u: goto label_2149f0;
        case 0x2149f4u: goto label_2149f4;
        case 0x2149f8u: goto label_2149f8;
        case 0x2149fcu: goto label_2149fc;
        case 0x214a00u: goto label_214a00;
        case 0x214a04u: goto label_214a04;
        case 0x214a08u: goto label_214a08;
        case 0x214a0cu: goto label_214a0c;
        case 0x214a10u: goto label_214a10;
        case 0x214a14u: goto label_214a14;
        case 0x214a18u: goto label_214a18;
        case 0x214a1cu: goto label_214a1c;
        case 0x214a20u: goto label_214a20;
        case 0x214a24u: goto label_214a24;
        case 0x214a28u: goto label_214a28;
        case 0x214a2cu: goto label_214a2c;
        case 0x214a30u: goto label_214a30;
        case 0x214a34u: goto label_214a34;
        case 0x214a38u: goto label_214a38;
        case 0x214a3cu: goto label_214a3c;
        case 0x214a40u: goto label_214a40;
        case 0x214a44u: goto label_214a44;
        case 0x214a48u: goto label_214a48;
        case 0x214a4cu: goto label_214a4c;
        case 0x214a50u: goto label_214a50;
        case 0x214a54u: goto label_214a54;
        case 0x214a58u: goto label_214a58;
        case 0x214a5cu: goto label_214a5c;
        case 0x214a60u: goto label_214a60;
        case 0x214a64u: goto label_214a64;
        case 0x214a68u: goto label_214a68;
        case 0x214a6cu: goto label_214a6c;
        case 0x214a70u: goto label_214a70;
        case 0x214a74u: goto label_214a74;
        case 0x214a78u: goto label_214a78;
        case 0x214a7cu: goto label_214a7c;
        case 0x214a80u: goto label_214a80;
        case 0x214a84u: goto label_214a84;
        case 0x214a88u: goto label_214a88;
        case 0x214a8cu: goto label_214a8c;
        case 0x214a90u: goto label_214a90;
        case 0x214a94u: goto label_214a94;
        case 0x214a98u: goto label_214a98;
        case 0x214a9cu: goto label_214a9c;
        case 0x214aa0u: goto label_214aa0;
        case 0x214aa4u: goto label_214aa4;
        case 0x214aa8u: goto label_214aa8;
        case 0x214aacu: goto label_214aac;
        case 0x214ab0u: goto label_214ab0;
        case 0x214ab4u: goto label_214ab4;
        case 0x214ab8u: goto label_214ab8;
        case 0x214abcu: goto label_214abc;
        case 0x214ac0u: goto label_214ac0;
        case 0x214ac4u: goto label_214ac4;
        case 0x214ac8u: goto label_214ac8;
        case 0x214accu: goto label_214acc;
        case 0x214ad0u: goto label_214ad0;
        case 0x214ad4u: goto label_214ad4;
        case 0x214ad8u: goto label_214ad8;
        case 0x214adcu: goto label_214adc;
        case 0x214ae0u: goto label_214ae0;
        case 0x214ae4u: goto label_214ae4;
        case 0x214ae8u: goto label_214ae8;
        case 0x214aecu: goto label_214aec;
        case 0x214af0u: goto label_214af0;
        case 0x214af4u: goto label_214af4;
        case 0x214af8u: goto label_214af8;
        case 0x214afcu: goto label_214afc;
        case 0x214b00u: goto label_214b00;
        case 0x214b04u: goto label_214b04;
        case 0x214b08u: goto label_214b08;
        case 0x214b0cu: goto label_214b0c;
        case 0x214b10u: goto label_214b10;
        case 0x214b14u: goto label_214b14;
        case 0x214b18u: goto label_214b18;
        case 0x214b1cu: goto label_214b1c;
        case 0x214b20u: goto label_214b20;
        case 0x214b24u: goto label_214b24;
        case 0x214b28u: goto label_214b28;
        case 0x214b2cu: goto label_214b2c;
        case 0x214b30u: goto label_214b30;
        case 0x214b34u: goto label_214b34;
        case 0x214b38u: goto label_214b38;
        case 0x214b3cu: goto label_214b3c;
        case 0x214b40u: goto label_214b40;
        case 0x214b44u: goto label_214b44;
        case 0x214b48u: goto label_214b48;
        case 0x214b4cu: goto label_214b4c;
        case 0x214b50u: goto label_214b50;
        case 0x214b54u: goto label_214b54;
        case 0x214b58u: goto label_214b58;
        case 0x214b5cu: goto label_214b5c;
        case 0x214b60u: goto label_214b60;
        case 0x214b64u: goto label_214b64;
        case 0x214b68u: goto label_214b68;
        case 0x214b6cu: goto label_214b6c;
        case 0x214b70u: goto label_214b70;
        case 0x214b74u: goto label_214b74;
        case 0x214b78u: goto label_214b78;
        case 0x214b7cu: goto label_214b7c;
        case 0x214b80u: goto label_214b80;
        case 0x214b84u: goto label_214b84;
        case 0x214b88u: goto label_214b88;
        case 0x214b8cu: goto label_214b8c;
        case 0x214b90u: goto label_214b90;
        case 0x214b94u: goto label_214b94;
        case 0x214b98u: goto label_214b98;
        case 0x214b9cu: goto label_214b9c;
        case 0x214ba0u: goto label_214ba0;
        case 0x214ba4u: goto label_214ba4;
        case 0x214ba8u: goto label_214ba8;
        case 0x214bacu: goto label_214bac;
        case 0x214bb0u: goto label_214bb0;
        case 0x214bb4u: goto label_214bb4;
        case 0x214bb8u: goto label_214bb8;
        case 0x214bbcu: goto label_214bbc;
        case 0x214bc0u: goto label_214bc0;
        case 0x214bc4u: goto label_214bc4;
        case 0x214bc8u: goto label_214bc8;
        case 0x214bccu: goto label_214bcc;
        case 0x214bd0u: goto label_214bd0;
        case 0x214bd4u: goto label_214bd4;
        case 0x214bd8u: goto label_214bd8;
        case 0x214bdcu: goto label_214bdc;
        case 0x214be0u: goto label_214be0;
        case 0x214be4u: goto label_214be4;
        case 0x214be8u: goto label_214be8;
        case 0x214becu: goto label_214bec;
        case 0x214bf0u: goto label_214bf0;
        case 0x214bf4u: goto label_214bf4;
        case 0x214bf8u: goto label_214bf8;
        case 0x214bfcu: goto label_214bfc;
        case 0x214c00u: goto label_214c00;
        case 0x214c04u: goto label_214c04;
        case 0x214c08u: goto label_214c08;
        case 0x214c0cu: goto label_214c0c;
        case 0x214c10u: goto label_214c10;
        case 0x214c14u: goto label_214c14;
        case 0x214c18u: goto label_214c18;
        case 0x214c1cu: goto label_214c1c;
        case 0x214c20u: goto label_214c20;
        case 0x214c24u: goto label_214c24;
        case 0x214c28u: goto label_214c28;
        case 0x214c2cu: goto label_214c2c;
        case 0x214c30u: goto label_214c30;
        case 0x214c34u: goto label_214c34;
        case 0x214c38u: goto label_214c38;
        case 0x214c3cu: goto label_214c3c;
        case 0x214c40u: goto label_214c40;
        case 0x214c44u: goto label_214c44;
        case 0x214c48u: goto label_214c48;
        case 0x214c4cu: goto label_214c4c;
        case 0x214c50u: goto label_214c50;
        case 0x214c54u: goto label_214c54;
        case 0x214c58u: goto label_214c58;
        case 0x214c5cu: goto label_214c5c;
        case 0x214c60u: goto label_214c60;
        case 0x214c64u: goto label_214c64;
        case 0x214c68u: goto label_214c68;
        case 0x214c6cu: goto label_214c6c;
        case 0x214c70u: goto label_214c70;
        case 0x214c74u: goto label_214c74;
        case 0x214c78u: goto label_214c78;
        case 0x214c7cu: goto label_214c7c;
        case 0x214c80u: goto label_214c80;
        case 0x214c84u: goto label_214c84;
        case 0x214c88u: goto label_214c88;
        case 0x214c8cu: goto label_214c8c;
        case 0x214c90u: goto label_214c90;
        case 0x214c94u: goto label_214c94;
        case 0x214c98u: goto label_214c98;
        case 0x214c9cu: goto label_214c9c;
        case 0x214ca0u: goto label_214ca0;
        case 0x214ca4u: goto label_214ca4;
        case 0x214ca8u: goto label_214ca8;
        case 0x214cacu: goto label_214cac;
        case 0x214cb0u: goto label_214cb0;
        case 0x214cb4u: goto label_214cb4;
        case 0x214cb8u: goto label_214cb8;
        case 0x214cbcu: goto label_214cbc;
        case 0x214cc0u: goto label_214cc0;
        case 0x214cc4u: goto label_214cc4;
        case 0x214cc8u: goto label_214cc8;
        case 0x214cccu: goto label_214ccc;
        case 0x214cd0u: goto label_214cd0;
        case 0x214cd4u: goto label_214cd4;
        case 0x214cd8u: goto label_214cd8;
        case 0x214cdcu: goto label_214cdc;
        case 0x214ce0u: goto label_214ce0;
        case 0x214ce4u: goto label_214ce4;
        case 0x214ce8u: goto label_214ce8;
        case 0x214cecu: goto label_214cec;
        case 0x214cf0u: goto label_214cf0;
        case 0x214cf4u: goto label_214cf4;
        case 0x214cf8u: goto label_214cf8;
        case 0x214cfcu: goto label_214cfc;
        case 0x214d00u: goto label_214d00;
        case 0x214d04u: goto label_214d04;
        case 0x214d08u: goto label_214d08;
        case 0x214d0cu: goto label_214d0c;
        case 0x214d10u: goto label_214d10;
        case 0x214d14u: goto label_214d14;
        case 0x214d18u: goto label_214d18;
        case 0x214d1cu: goto label_214d1c;
        case 0x214d20u: goto label_214d20;
        case 0x214d24u: goto label_214d24;
        case 0x214d28u: goto label_214d28;
        case 0x214d2cu: goto label_214d2c;
        case 0x214d30u: goto label_214d30;
        case 0x214d34u: goto label_214d34;
        case 0x214d38u: goto label_214d38;
        case 0x214d3cu: goto label_214d3c;
        case 0x214d40u: goto label_214d40;
        case 0x214d44u: goto label_214d44;
        case 0x214d48u: goto label_214d48;
        case 0x214d4cu: goto label_214d4c;
        case 0x214d50u: goto label_214d50;
        case 0x214d54u: goto label_214d54;
        case 0x214d58u: goto label_214d58;
        case 0x214d5cu: goto label_214d5c;
        case 0x214d60u: goto label_214d60;
        case 0x214d64u: goto label_214d64;
        case 0x214d68u: goto label_214d68;
        case 0x214d6cu: goto label_214d6c;
        case 0x214d70u: goto label_214d70;
        case 0x214d74u: goto label_214d74;
        case 0x214d78u: goto label_214d78;
        case 0x214d7cu: goto label_214d7c;
        case 0x214d80u: goto label_214d80;
        case 0x214d84u: goto label_214d84;
        case 0x214d88u: goto label_214d88;
        case 0x214d8cu: goto label_214d8c;
        case 0x214d90u: goto label_214d90;
        case 0x214d94u: goto label_214d94;
        case 0x214d98u: goto label_214d98;
        case 0x214d9cu: goto label_214d9c;
        case 0x214da0u: goto label_214da0;
        case 0x214da4u: goto label_214da4;
        case 0x214da8u: goto label_214da8;
        case 0x214dacu: goto label_214dac;
        case 0x214db0u: goto label_214db0;
        case 0x214db4u: goto label_214db4;
        case 0x214db8u: goto label_214db8;
        case 0x214dbcu: goto label_214dbc;
        case 0x214dc0u: goto label_214dc0;
        case 0x214dc4u: goto label_214dc4;
        case 0x214dc8u: goto label_214dc8;
        case 0x214dccu: goto label_214dcc;
        case 0x214dd0u: goto label_214dd0;
        case 0x214dd4u: goto label_214dd4;
        case 0x214dd8u: goto label_214dd8;
        case 0x214ddcu: goto label_214ddc;
        case 0x214de0u: goto label_214de0;
        case 0x214de4u: goto label_214de4;
        case 0x214de8u: goto label_214de8;
        case 0x214decu: goto label_214dec;
        case 0x214df0u: goto label_214df0;
        case 0x214df4u: goto label_214df4;
        case 0x214df8u: goto label_214df8;
        case 0x214dfcu: goto label_214dfc;
        case 0x214e00u: goto label_214e00;
        case 0x214e04u: goto label_214e04;
        case 0x214e08u: goto label_214e08;
        case 0x214e0cu: goto label_214e0c;
        case 0x214e10u: goto label_214e10;
        case 0x214e14u: goto label_214e14;
        case 0x214e18u: goto label_214e18;
        case 0x214e1cu: goto label_214e1c;
        case 0x214e20u: goto label_214e20;
        case 0x214e24u: goto label_214e24;
        case 0x214e28u: goto label_214e28;
        case 0x214e2cu: goto label_214e2c;
        case 0x214e30u: goto label_214e30;
        case 0x214e34u: goto label_214e34;
        case 0x214e38u: goto label_214e38;
        case 0x214e3cu: goto label_214e3c;
        case 0x214e40u: goto label_214e40;
        case 0x214e44u: goto label_214e44;
        case 0x214e48u: goto label_214e48;
        case 0x214e4cu: goto label_214e4c;
        case 0x214e50u: goto label_214e50;
        case 0x214e54u: goto label_214e54;
        case 0x214e58u: goto label_214e58;
        case 0x214e5cu: goto label_214e5c;
        case 0x214e60u: goto label_214e60;
        case 0x214e64u: goto label_214e64;
        case 0x214e68u: goto label_214e68;
        case 0x214e6cu: goto label_214e6c;
        case 0x214e70u: goto label_214e70;
        case 0x214e74u: goto label_214e74;
        case 0x214e78u: goto label_214e78;
        case 0x214e7cu: goto label_214e7c;
        case 0x214e80u: goto label_214e80;
        case 0x214e84u: goto label_214e84;
        case 0x214e88u: goto label_214e88;
        case 0x214e8cu: goto label_214e8c;
        case 0x214e90u: goto label_214e90;
        case 0x214e94u: goto label_214e94;
        case 0x214e98u: goto label_214e98;
        case 0x214e9cu: goto label_214e9c;
        case 0x214ea0u: goto label_214ea0;
        case 0x214ea4u: goto label_214ea4;
        case 0x214ea8u: goto label_214ea8;
        case 0x214eacu: goto label_214eac;
        case 0x214eb0u: goto label_214eb0;
        case 0x214eb4u: goto label_214eb4;
        case 0x214eb8u: goto label_214eb8;
        case 0x214ebcu: goto label_214ebc;
        case 0x214ec0u: goto label_214ec0;
        case 0x214ec4u: goto label_214ec4;
        case 0x214ec8u: goto label_214ec8;
        case 0x214eccu: goto label_214ecc;
        case 0x214ed0u: goto label_214ed0;
        case 0x214ed4u: goto label_214ed4;
        case 0x214ed8u: goto label_214ed8;
        case 0x214edcu: goto label_214edc;
        case 0x214ee0u: goto label_214ee0;
        case 0x214ee4u: goto label_214ee4;
        case 0x214ee8u: goto label_214ee8;
        case 0x214eecu: goto label_214eec;
        case 0x214ef0u: goto label_214ef0;
        case 0x214ef4u: goto label_214ef4;
        case 0x214ef8u: goto label_214ef8;
        case 0x214efcu: goto label_214efc;
        case 0x214f00u: goto label_214f00;
        case 0x214f04u: goto label_214f04;
        case 0x214f08u: goto label_214f08;
        case 0x214f0cu: goto label_214f0c;
        case 0x214f10u: goto label_214f10;
        case 0x214f14u: goto label_214f14;
        case 0x214f18u: goto label_214f18;
        case 0x214f1cu: goto label_214f1c;
        case 0x214f20u: goto label_214f20;
        case 0x214f24u: goto label_214f24;
        case 0x214f28u: goto label_214f28;
        case 0x214f2cu: goto label_214f2c;
        case 0x214f30u: goto label_214f30;
        case 0x214f34u: goto label_214f34;
        case 0x214f38u: goto label_214f38;
        case 0x214f3cu: goto label_214f3c;
        case 0x214f40u: goto label_214f40;
        case 0x214f44u: goto label_214f44;
        case 0x214f48u: goto label_214f48;
        case 0x214f4cu: goto label_214f4c;
        case 0x214f50u: goto label_214f50;
        case 0x214f54u: goto label_214f54;
        case 0x214f58u: goto label_214f58;
        case 0x214f5cu: goto label_214f5c;
        case 0x214f60u: goto label_214f60;
        case 0x214f64u: goto label_214f64;
        default: return;
    }

label_214798:
    // 0x214798: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_21479c:
    // 0x21479c: 0xa50e03d0  sh          $t6, 0x3D0($t0)
    ctx->pc = 0x21479cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 976), (uint16_t)GPR_U32(ctx, 14));
label_2147a0:
    // 0x2147a0: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_2147a4:
    // 0x2147a4: 0x3195821  addu        $t3, $t8, $t9
    ctx->pc = 0x2147a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
label_2147a8:
    // 0x2147a8: 0xa50d03d2  sh          $t5, 0x3D2($t0)
    ctx->pc = 0x2147a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 978), (uint16_t)GPR_U32(ctx, 13));
label_2147ac:
    // 0x2147ac: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2147acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2147b0:
    // 0x2147b0: 0xad0203d4  sw          $v0, 0x3D4($t0)
    ctx->pc = 0x2147b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 980), GPR_U32(ctx, 2));
label_2147b4:
    // 0x2147b4: 0x256b7900  addiu       $t3, $t3, 0x7900
    ctx->pc = 0x2147b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_2147b8:
    // 0x2147b8: 0xa50f03e0  sh          $t7, 0x3E0($t0)
    ctx->pc = 0x2147b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 992), (uint16_t)GPR_U32(ctx, 15));
label_2147bc:
    // 0x2147bc: 0x292a0002  slti        $t2, $t1, 0x2
    ctx->pc = 0x2147bcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_2147c0:
    // 0x2147c0: 0xa50d03e2  sh          $t5, 0x3E2($t0)
    ctx->pc = 0x2147c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 994), (uint16_t)GPR_U32(ctx, 13));
label_2147c4:
    // 0x2147c4: 0xad0203e4  sw          $v0, 0x3E4($t0)
    ctx->pc = 0x2147c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 996), GPR_U32(ctx, 2));
label_2147c8:
    // 0x2147c8: 0xa50e03f0  sh          $t6, 0x3F0($t0)
    ctx->pc = 0x2147c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1008), (uint16_t)GPR_U32(ctx, 14));
label_2147cc:
    // 0x2147cc: 0xa50b03f2  sh          $t3, 0x3F2($t0)
    ctx->pc = 0x2147ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1010), (uint16_t)GPR_U32(ctx, 11));
label_2147d0:
    // 0x2147d0: 0xad0203f4  sw          $v0, 0x3F4($t0)
    ctx->pc = 0x2147d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1012), GPR_U32(ctx, 2));
label_2147d4:
    // 0x2147d4: 0xa50f0400  sh          $t7, 0x400($t0)
    ctx->pc = 0x2147d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1024), (uint16_t)GPR_U32(ctx, 15));
label_2147d8:
    // 0x2147d8: 0xa50b0402  sh          $t3, 0x402($t0)
    ctx->pc = 0x2147d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1026), (uint16_t)GPR_U32(ctx, 11));
label_2147dc:
    // 0x2147dc: 0xad020404  sw          $v0, 0x404($t0)
    ctx->pc = 0x2147dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1028), GPR_U32(ctx, 2));
label_2147e0:
    // 0x2147e0: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x2147e0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_2147e4:
    // 0x2147e4: 0xa10b03c8  sb          $t3, 0x3C8($t0)
    ctx->pc = 0x2147e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 968), (uint8_t)GPR_U32(ctx, 11));
label_2147e8:
    // 0x2147e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2147e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2147ec:
    // 0x2147ec: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x2147ecu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_2147f0:
    // 0x2147f0: 0xa10b03c9  sb          $t3, 0x3C9($t0)
    ctx->pc = 0x2147f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 969), (uint8_t)GPR_U32(ctx, 11));
label_2147f4:
    // 0x2147f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2147f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2147f8:
    // 0x2147f8: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_2147fc:
    // 0x2147fc: 0xa10b03ca  sb          $t3, 0x3CA($t0)
    ctx->pc = 0x2147fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 970), (uint8_t)GPR_U32(ctx, 11));
label_214800:
    // 0x214800: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214804:
    // 0x214804: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x214804u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_214808:
    // 0x214808: 0xa10b03cb  sb          $t3, 0x3CB($t0)
    ctx->pc = 0x214808u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 971), (uint8_t)GPR_U32(ctx, 11));
label_21480c:
    // 0x21480c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214810:
    // 0x214810: 0xad0c03cc  sw          $t4, 0x3CC($t0)
    ctx->pc = 0x214810u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 972), GPR_U32(ctx, 12));
label_214814:
    // 0x214814: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x214814u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_214818:
    // 0x214818: 0xa10b03d8  sb          $t3, 0x3D8($t0)
    ctx->pc = 0x214818u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 984), (uint8_t)GPR_U32(ctx, 11));
label_21481c:
    // 0x21481c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214820:
    // 0x214820: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_214824:
    // 0x214824: 0xa10b03d9  sb          $t3, 0x3D9($t0)
    ctx->pc = 0x214824u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 985), (uint8_t)GPR_U32(ctx, 11));
label_214828:
    // 0x214828: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21482c:
    // 0x21482c: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x21482cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_214830:
    // 0x214830: 0xa10b03da  sb          $t3, 0x3DA($t0)
    ctx->pc = 0x214830u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 986), (uint8_t)GPR_U32(ctx, 11));
label_214834:
    // 0x214834: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214838:
    // 0x214838: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x214838u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_21483c:
    // 0x21483c: 0xa10b03db  sb          $t3, 0x3DB($t0)
    ctx->pc = 0x21483cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 987), (uint8_t)GPR_U32(ctx, 11));
label_214840:
    // 0x214840: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214844:
    // 0x214844: 0xad0c03dc  sw          $t4, 0x3DC($t0)
    ctx->pc = 0x214844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 988), GPR_U32(ctx, 12));
label_214848:
    // 0x214848: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_21484c:
    // 0x21484c: 0xa10b03e8  sb          $t3, 0x3E8($t0)
    ctx->pc = 0x21484cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1000), (uint8_t)GPR_U32(ctx, 11));
label_214850:
    // 0x214850: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214854:
    // 0x214854: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_214858:
    // 0x214858: 0xa10b03e9  sb          $t3, 0x3E9($t0)
    ctx->pc = 0x214858u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1001), (uint8_t)GPR_U32(ctx, 11));
label_21485c:
    // 0x21485c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214860:
    // 0x214860: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_214864:
    // 0x214864: 0xa10b03ea  sb          $t3, 0x3EA($t0)
    ctx->pc = 0x214864u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1002), (uint8_t)GPR_U32(ctx, 11));
label_214868:
    // 0x214868: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21486c:
    // 0x21486c: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_214870:
    // 0x214870: 0xa10b03eb  sb          $t3, 0x3EB($t0)
    ctx->pc = 0x214870u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1003), (uint8_t)GPR_U32(ctx, 11));
label_214874:
    // 0x214874: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214878:
    // 0x214878: 0xad0c03ec  sw          $t4, 0x3EC($t0)
    ctx->pc = 0x214878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1004), GPR_U32(ctx, 12));
label_21487c:
    // 0x21487c: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x21487cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
label_214880:
    // 0x214880: 0xa10b03f8  sb          $t3, 0x3F8($t0)
    ctx->pc = 0x214880u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1016), (uint8_t)GPR_U32(ctx, 11));
label_214884:
    // 0x214884: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214888:
    // 0x214888: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30996)));
label_21488c:
    // 0x21488c: 0xa10b03f9  sb          $t3, 0x3F9($t0)
    ctx->pc = 0x21488cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1017), (uint8_t)GPR_U32(ctx, 11));
label_214890:
    // 0x214890: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_214894:
    // 0x214894: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31000)));
label_214898:
    // 0x214898: 0xa10b03fa  sb          $t3, 0x3FA($t0)
    ctx->pc = 0x214898u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1018), (uint8_t)GPR_U32(ctx, 11));
label_21489c:
    // 0x21489c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21489cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2148a0:
    // 0x2148a0: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x2148a0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 31004)));
label_2148a4:
    // 0x2148a4: 0xa10b03fb  sb          $t3, 0x3FB($t0)
    ctx->pc = 0x2148a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1019), (uint8_t)GPR_U32(ctx, 11));
label_2148a8:
    // 0x2148a8: 0x1540ffac  bnez        $t2, . + 4 + (-0x54 << 2)
label_2148ac:
    if (ctx->pc == 0x2148ACu) {
        ctx->pc = 0x2148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A8u;
        // 0x2148ac: 0xad0c03fc  sw          $t4, 0x3FC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1020), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148B0u;
        goto label_2148b0;
    }
    ctx->pc = 0x2148A8u;
    {
        const bool branch_taken_0x2148a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A8u;
        // 0x2148ac: 0xad0c03fc  sw          $t4, 0x3FC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1020), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148a8) {
            ctx->pc = 0x21475Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21475c; return; }
        }
    }
    ctx->pc = 0x2148B0u;
label_2148b0:
    // 0x2148b0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2148b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2148b4:
    // 0x2148b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2148b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148b8:
    // 0x2148b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2148b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148bc:
    // 0x2148bc: 0xc066c72  jal         func_19B1C8
label_2148c0:
    if (ctx->pc == 0x2148C0u) {
        ctx->pc = 0x2148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148BCu;
        // 0x2148c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148C4u;
        goto label_2148c4;
    }
    ctx->pc = 0x2148BCu;
    SET_GPR_U32(ctx, 31, 0x2148C4u);
    ctx->pc = 0x2148C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148BCu;
    // 0x2148c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x2148BCu, 0x2148C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148C4u;
label_2148c4:
    // 0x2148c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2148c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2148c8:
    // 0x2148c8: 0x3e00008  jr          $ra
label_2148cc:
    if (ctx->pc == 0x2148CCu) {
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148D0u;
        goto label_2148d0;
    }
    ctx->pc = 0x2148C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2148C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2148D0u;
label_2148d0:
    // 0x2148d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2148d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2148d4:
    // 0x2148d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2148d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2148d8:
    // 0x2148d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2148d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2148dc:
    // 0x2148dc: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x2148dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_2148e0:
    // 0x2148e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2148e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2148e4:
    // 0x2148e4: 0x8f8591cc  lw          $a1, -0x6E34($gp)
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_2148e8:
    // 0x2148e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2148e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2148ec:
    // 0x2148ec: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_2148f0:
    if (ctx->pc == 0x2148F0u) {
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0xaf8291d0  sw          $v0, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148F4u;
        goto label_2148f4;
    }
    ctx->pc = 0x2148ECu;
    {
        const bool branch_taken_0x2148ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0xaf8291d0  sw          $v0, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148ec) {
            ctx->pc = 0x214920u;
            goto label_214920;
        }
    }
    ctx->pc = 0x2148F4u;
label_2148f4:
    // 0x2148f4: 0xc0853c0  jal         func_214F00
label_2148f8:
    if (ctx->pc == 0x2148F8u) {
        ctx->pc = 0x2148FCu;
        goto label_2148fc;
    }
    ctx->pc = 0x2148F4u;
    SET_GPR_U32(ctx, 31, 0x2148FCu);
    ctx->pc = 0x214F00u;
    goto label_214f00;
    ctx->pc = 0x2148FCu;
label_2148fc:
    // 0x2148fc: 0x8f8291e0  lw          $v0, -0x6E20($gp)
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939104)));
label_214900:
    // 0x214900: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_214904:
    if (ctx->pc == 0x214904u) {
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214908u;
        goto label_214908;
    }
    ctx->pc = 0x214900u;
    {
        const bool branch_taken_0x214900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214900) {
            ctx->pc = 0x214914u;
            goto label_214914;
        }
    }
    ctx->pc = 0x214908u;
label_214908:
    // 0x214908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21490c:
    // 0x21490c: 0x10000002  b           . + 4 + (0x2 << 2)
label_214910:
    if (ctx->pc == 0x214910u) {
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21490Cu;
        // 0x214910: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214914u;
        goto label_214914;
    }
    ctx->pc = 0x21490Cu;
    {
        const bool branch_taken_0x21490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21490Cu;
        // 0x214910: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21490c) {
            ctx->pc = 0x214918u;
            goto label_214918;
        }
    }
    ctx->pc = 0x214914u;
label_214914:
    // 0x214914: 0xaf8291cc  sw          $v0, -0x6E34($gp)
    ctx->pc = 0x214914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
label_214918:
    // 0x214918: 0x1000002b  b           . + 4 + (0x2B << 2)
label_21491c:
    if (ctx->pc == 0x21491Cu) {
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xaf8091d0  sw          $zero, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214920u;
        goto label_214920;
    }
    ctx->pc = 0x214918u;
    {
        const bool branch_taken_0x214918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xaf8091d0  sw          $zero, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214918) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214920u;
label_214920:
    // 0x214920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214924:
    // 0x214924: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_214928:
    if (ctx->pc == 0x214928u) {
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214924u;
        // 0x214928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21492Cu;
        goto label_21492c;
    }
    ctx->pc = 0x214924u;
    {
        const bool branch_taken_0x214924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214924u;
        // 0x214928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214924) {
            ctx->pc = 0x21494Cu;
            goto label_21494c;
        }
    }
    ctx->pc = 0x21492Cu;
label_21492c:
    // 0x21492c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_214930:
    // 0x214930: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x214930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
label_214934:
    // 0x214934: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_214938:
    if (ctx->pc == 0x214938u) {
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214934u;
        // 0x214938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21493Cu;
        goto label_21493c;
    }
    ctx->pc = 0x214934u;
    {
        const bool branch_taken_0x214934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214934u;
        // 0x214938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214934) {
            ctx->pc = 0x2149CCu;
            goto label_2149cc;
        }
    }
    ctx->pc = 0x21493Cu;
label_21493c:
    // 0x21493c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214940:
    // 0x214940: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x214940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
label_214944:
    // 0x214944: 0x10000020  b           . + 4 + (0x20 << 2)
label_214948:
    if (ctx->pc == 0x214948u) {
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21494Cu;
        goto label_21494c;
    }
    ctx->pc = 0x214944u;
    {
        const bool branch_taken_0x214944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214944) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x21494Cu;
label_21494c:
    // 0x21494c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_214950:
    if (ctx->pc == 0x214950u) {
        ctx->pc = 0x214954u;
        goto label_214954;
    }
    ctx->pc = 0x21494Cu;
    {
        const bool branch_taken_0x21494c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x21494c) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x214954u;
label_214954:
    // 0x214954: 0xc0855ac  jal         func_2156B0
label_214958:
    if (ctx->pc == 0x214958u) {
        ctx->pc = 0x21495Cu;
        goto label_21495c;
    }
    ctx->pc = 0x214954u;
    SET_GPR_U32(ctx, 31, 0x21495Cu);
    ctx->pc = 0x2156B0u;
    { ctx->pc = 0x2156b0; return; }
    ctx->pc = 0x21495Cu;
label_21495c:
    // 0x21495c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_214960:
    // 0x214960: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_214964:
    // 0x214964: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_214968:
    if (ctx->pc == 0x214968u) {
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21496Cu;
        goto label_21496c;
    }
    ctx->pc = 0x214964u;
    {
        const bool branch_taken_0x214964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214964) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x21496Cu;
label_21496c:
    // 0x21496c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21496cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
label_214970:
    // 0x214970: 0x10000015  b           . + 4 + (0x15 << 2)
label_214974:
    if (ctx->pc == 0x214974u) {
        ctx->pc = 0x214974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214970u;
        // 0x214974: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214978u;
        goto label_214978;
    }
    ctx->pc = 0x214970u;
    {
        const bool branch_taken_0x214970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214970u;
        // 0x214974: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214970) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214978u;
label_214978:
    // 0x214978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x214978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21497c:
    // 0x21497c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_214980:
    if (ctx->pc == 0x214980u) {
        ctx->pc = 0x214980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21497Cu;
        // 0x214980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214984u;
        goto label_214984;
    }
    ctx->pc = 0x21497Cu;
    {
        const bool branch_taken_0x21497c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x214980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21497Cu;
        // 0x214980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21497c) {
            ctx->pc = 0x214998u;
            goto label_214998;
        }
    }
    ctx->pc = 0x214984u;
label_214984:
    // 0x214984: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_214988:
    if (ctx->pc == 0x214988u) {
        ctx->pc = 0x214988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214984u;
        // 0x214988: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21498Cu;
        goto label_21498c;
    }
    ctx->pc = 0x214984u;
    {
        const bool branch_taken_0x214984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214984u;
        // 0x214988: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214984) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x21498Cu;
label_21498c:
    // 0x21498c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21498cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
label_214990:
    // 0x214990: 0x1000000d  b           . + 4 + (0xD << 2)
label_214994:
    if (ctx->pc == 0x214994u) {
        ctx->pc = 0x214994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214990u;
        // 0x214994: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214998u;
        goto label_214998;
    }
    ctx->pc = 0x214990u;
    {
        const bool branch_taken_0x214990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214990u;
        // 0x214994: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214990) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214998u;
label_214998:
    // 0x214998: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_21499c:
    if (ctx->pc == 0x21499Cu) {
        ctx->pc = 0x2149A0u;
        goto label_2149a0;
    }
    ctx->pc = 0x214998u;
    {
        const bool branch_taken_0x214998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x214998) {
            ctx->pc = 0x2149C4u;
            goto label_2149c4;
        }
    }
    ctx->pc = 0x2149A0u;
label_2149a0:
    // 0x2149a0: 0xc0854bc  jal         func_2152F0
label_2149a4:
    if (ctx->pc == 0x2149A4u) {
        ctx->pc = 0x2149A8u;
        goto label_2149a8;
    }
    ctx->pc = 0x2149A0u;
    SET_GPR_U32(ctx, 31, 0x2149A8u);
    ctx->pc = 0x2152F0u;
    { ctx->pc = 0x2152f0; return; }
    ctx->pc = 0x2149A8u;
label_2149a8:
    // 0x2149a8: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x2149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_2149ac:
    // 0x2149ac: 0x28420060  slti        $v0, $v0, 0x60
    ctx->pc = 0x2149acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
label_2149b0:
    // 0x2149b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2149b4:
    if (ctx->pc == 0x2149B4u) {
        ctx->pc = 0x2149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B0u;
        // 0x2149b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149B8u;
        goto label_2149b8;
    }
    ctx->pc = 0x2149B0u;
    {
        const bool branch_taken_0x2149b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B0u;
        // 0x2149b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149b0) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x2149B8u;
label_2149b8:
    // 0x2149b8: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x2149b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
label_2149bc:
    // 0x2149bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2149c0:
    if (ctx->pc == 0x2149C0u) {
        ctx->pc = 0x2149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149BCu;
        // 0x2149c0: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149C4u;
        goto label_2149c4;
    }
    ctx->pc = 0x2149BCu;
    {
        const bool branch_taken_0x2149bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149BCu;
        // 0x2149c0: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149bc) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x2149C4u;
label_2149c4:
    // 0x2149c4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2149c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2149c8:
    // 0x2149c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2149c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2149cc:
    // 0x2149cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2149ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2149d0:
    // 0x2149d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2149d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2149d4:
    // 0x2149d4: 0x3e00008  jr          $ra
label_2149d8:
    if (ctx->pc == 0x2149D8u) {
        ctx->pc = 0x2149D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D4u;
        // 0x2149d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149DCu;
        goto label_2149dc;
    }
    ctx->pc = 0x2149D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2149D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D4u;
        // 0x2149d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2149D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2149DCu;
label_2149dc:
    // 0x2149dc: 0x0  nop
    ctx->pc = 0x2149dcu;
    // NOP
label_2149e0:
    // 0x2149e0: 0x3e00008  jr          $ra
label_2149e4:
    if (ctx->pc == 0x2149E4u) {
        ctx->pc = 0x2149E8u;
        goto label_2149e8;
    }
    ctx->pc = 0x2149E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2149E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2149E8u;
label_2149e8:
    // 0x2149e8: 0x0  nop
    ctx->pc = 0x2149e8u;
    // NOP
label_2149ec:
    // 0x2149ec: 0x0  nop
    ctx->pc = 0x2149ecu;
    // NOP
label_2149f0:
    // 0x2149f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2149f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2149f4:
    // 0x2149f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2149f8:
    // 0x2149f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2149f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2149fc:
    // 0x2149fc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2149fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_214a00:
    // 0x214a00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x214a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_214a04:
    // 0x214a04: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x214a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_214a08:
    // 0x214a08: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x214a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_214a0c:
    // 0x214a0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x214a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_214a10:
    // 0x214a10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x214a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_214a14:
    // 0x214a14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x214a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_214a18:
    // 0x214a18: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x214a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_214a1c:
    // 0x214a1c: 0xaf8091c8  sw          $zero, -0x6E38($gp)
    ctx->pc = 0x214a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939080), GPR_U32(ctx, 0));
label_214a20:
    // 0x214a20: 0xaf8091cc  sw          $zero, -0x6E34($gp)
    ctx->pc = 0x214a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 0));
label_214a24:
    // 0x214a24: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x214a24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
label_214a28:
    // 0x214a28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x214a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_214a2c:
    // 0x214a2c: 0xaf8391d8  sw          $v1, -0x6E28($gp)
    ctx->pc = 0x214a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939096), GPR_U32(ctx, 3));
label_214a30:
    // 0x214a30: 0x9022490c  lbu         $v0, 0x490C($at)
    ctx->pc = 0x214a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_214a34:
    // 0x214a34: 0xc0852ec  jal         func_214BB0
label_214a38:
    if (ctx->pc == 0x214A38u) {
        ctx->pc = 0x214A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A34u;
        // 0x214a38: 0xaf8291dc  sw          $v0, -0x6E24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A3Cu;
        goto label_214a3c;
    }
    ctx->pc = 0x214A34u;
    SET_GPR_U32(ctx, 31, 0x214A3Cu);
    ctx->pc = 0x214A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A34u;
    // 0x214a38: 0xaf8291dc  sw          $v0, -0x6E24($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214BB0u;
    goto label_214bb0;
    ctx->pc = 0x214A3Cu;
label_214a3c:
    // 0x214a3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x214a3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214a40:
    // 0x214a40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x214a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214a44:
    // 0x214a44: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x214a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_214a48:
    // 0x214a48: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_214a4c:
    // 0x214a4c: 0x24427930  addiu       $v0, $v0, 0x7930
    ctx->pc = 0x214a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31024));
label_214a50:
    // 0x214a50: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x214a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_214a54:
    // 0x214a54: 0xc05e234  jal         func_1788D0
label_214a58:
    if (ctx->pc == 0x214A58u) {
        ctx->pc = 0x214A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A54u;
        // 0x214a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A5Cu;
        goto label_214a5c;
    }
    ctx->pc = 0x214A54u;
    SET_GPR_U32(ctx, 31, 0x214A5Cu);
    ctx->pc = 0x214A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A54u;
    // 0x214a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x214A54u, 0x214A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A5Cu;
label_214a5c:
    // 0x214a5c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x214a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_214a60:
    // 0x214a60: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x214a60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_214a64:
    // 0x214a64: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x214a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_214a68:
    // 0x214a68: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x214a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_214a6c:
    // 0x214a6c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_214a70:
    // 0x214a70: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x214a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_214a74:
    // 0x214a74: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x214a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214a78:
    // 0x214a78: 0xc05e060  jal         func_178180
label_214a7c:
    if (ctx->pc == 0x214A7Cu) {
        ctx->pc = 0x214A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A78u;
        // 0x214a7c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A80u;
        goto label_214a80;
    }
    ctx->pc = 0x214A78u;
    SET_GPR_U32(ctx, 31, 0x214A80u);
    ctx->pc = 0x214A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A78u;
    // 0x214a7c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x214A78u, 0x214A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A80u;
label_214a80:
    // 0x214a80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214a84:
    // 0x214a84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214a88:
    // 0x214a88: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_214a8c:
    // 0x214a8c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_214a90:
    // 0x214a90: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x214a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_214a94:
    // 0x214a94: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_214a98:
    // 0x214a98: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x214a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_214a9c:
    // 0x214a9c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_214aa0:
    // 0x214aa0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x214aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_214aa4:
    // 0x214aa4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x214aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_214aa8:
    // 0x214aa8: 0xc05e060  jal         func_178180
label_214aac:
    if (ctx->pc == 0x214AACu) {
        ctx->pc = 0x214AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AA8u;
        // 0x214aac: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AB0u;
        goto label_214ab0;
    }
    ctx->pc = 0x214AA8u;
    SET_GPR_U32(ctx, 31, 0x214AB0u);
    ctx->pc = 0x214AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AA8u;
    // 0x214aac: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x214AA8u, 0x214AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AB0u;
label_214ab0:
    // 0x214ab0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_214ab4:
    // 0x214ab4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x214ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_214ab8:
    // 0x214ab8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_214abc:
    if (ctx->pc == 0x214ABCu) {
        ctx->pc = 0x214ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AB8u;
        // 0x214abc: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AC0u;
        goto label_214ac0;
    }
    ctx->pc = 0x214AB8u;
    {
        const bool branch_taken_0x214ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AB8u;
        // 0x214abc: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ab8) {
            ctx->pc = 0x214A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214a88;
        }
    }
    ctx->pc = 0x214AC0u;
label_214ac0:
    // 0x214ac0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x214ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214ac4:
    // 0x214ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214ac8:
    // 0x214ac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214acc:
    // 0x214acc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x214accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214ad0:
    // 0x214ad0: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x214ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_214ad4:
    // 0x214ad4: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x214ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_214ad8:
    // 0x214ad8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x214ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_214adc:
    // 0x214adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214ae0:
    // 0x214ae0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x214ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_214ae4:
    // 0x214ae4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x214ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_214ae8:
    // 0x214ae8: 0x244282b0  addiu       $v0, $v0, -0x7D50
    ctx->pc = 0x214ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935216));
label_214aec:
    // 0x214aec: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x214aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_214af0:
    // 0x214af0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x214af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_214af4:
    // 0x214af4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x214af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_214af8:
    // 0x214af8: 0x322bffff  andi        $t3, $s1, 0xFFFF
    ctx->pc = 0x214af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_214afc:
    // 0x214afc: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x214afcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_214b00:
    // 0x214b00: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x214b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_214b04:
    // 0x214b04: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x214b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_214b08:
    // 0x214b08: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x214b08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_214b0c:
    // 0x214b0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214b10:
    // 0x214b10: 0xc05de30  jal         func_1778C0
label_214b14:
    if (ctx->pc == 0x214B14u) {
        ctx->pc = 0x214B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B10u;
        // 0x214b14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B18u;
        goto label_214b18;
    }
    ctx->pc = 0x214B10u;
    SET_GPR_U32(ctx, 31, 0x214B18u);
    ctx->pc = 0x214B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B10u;
    // 0x214b14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x214B10u, 0x214B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B18u;
label_214b18:
    // 0x214b18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x214b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_214b1c:
    // 0x214b1c: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_214b20:
    // 0x214b20: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x214b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_214b24:
    // 0x214b24: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x214b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_214b28:
    // 0x214b28: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_214b2c:
    if (ctx->pc == 0x214B2Cu) {
        ctx->pc = 0x214B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B28u;
        // 0x214b2c: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B30u;
        goto label_214b30;
    }
    ctx->pc = 0x214B28u;
    {
        const bool branch_taken_0x214b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B28u;
        // 0x214b2c: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b28) {
            ctx->pc = 0x214AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214ad0;
        }
    }
    ctx->pc = 0x214B30u;
label_214b30:
    // 0x214b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214b34:
    // 0x214b34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214b38:
    // 0x214b38: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x214b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_214b3c:
    // 0x214b3c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x214b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_214b40:
    // 0x214b40: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x214b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214b44:
    // 0x214b44: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x214b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_214b48:
    // 0x214b48: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x214b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_214b4c:
    // 0x214b4c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x214b4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_214b50:
    // 0x214b50: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_214b54:
    // 0x214b54: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x214b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214b58:
    // 0x214b58: 0xc05e060  jal         func_178180
label_214b5c:
    if (ctx->pc == 0x214B5Cu) {
        ctx->pc = 0x214B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B58u;
        // 0x214b5c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B60u;
        goto label_214b60;
    }
    ctx->pc = 0x214B58u;
    SET_GPR_U32(ctx, 31, 0x214B60u);
    ctx->pc = 0x214B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B58u;
    // 0x214b5c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x214B58u, 0x214B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B60u;
label_214b60:
    // 0x214b60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x214b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_214b64:
    // 0x214b64: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x214b64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_214b68:
    // 0x214b68: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_214b6c:
    if (ctx->pc == 0x214B6Cu) {
        ctx->pc = 0x214B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B68u;
        // 0x214b6c: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B70u;
        goto label_214b70;
    }
    ctx->pc = 0x214B68u;
    {
        const bool branch_taken_0x214b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B68u;
        // 0x214b6c: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b68) {
            ctx->pc = 0x214B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214b38;
        }
    }
    ctx->pc = 0x214B70u;
label_214b70:
    // 0x214b70: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x214b70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_214b74:
    // 0x214b74: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x214b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_214b78:
    // 0x214b78: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_214b7c:
    if (ctx->pc == 0x214B7Cu) {
        ctx->pc = 0x214B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B78u;
        // 0x214b7c: 0x269404c0  addiu       $s4, $s4, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B80u;
        goto label_214b80;
    }
    ctx->pc = 0x214B78u;
    {
        const bool branch_taken_0x214b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B78u;
        // 0x214b7c: 0x269404c0  addiu       $s4, $s4, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b78) {
            ctx->pc = 0x214A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214a44;
        }
    }
    ctx->pc = 0x214B80u;
label_214b80:
    // 0x214b80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x214b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_214b84:
    // 0x214b84: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x214b84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_214b88:
    // 0x214b88: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x214b88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_214b8c:
    // 0x214b8c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x214b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_214b90:
    // 0x214b90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x214b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_214b94:
    // 0x214b94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x214b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_214b98:
    // 0x214b98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x214b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214b9c:
    // 0x214b9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x214b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_214ba0:
    // 0x214ba0: 0x3e00008  jr          $ra
label_214ba4:
    if (ctx->pc == 0x214BA4u) {
        ctx->pc = 0x214BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BA0u;
        // 0x214ba4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214BA8u;
        goto label_214ba8;
    }
    ctx->pc = 0x214BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BA0u;
        // 0x214ba4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214BA8u;
label_214ba8:
    // 0x214ba8: 0x0  nop
    ctx->pc = 0x214ba8u;
    // NOP
label_214bac:
    // 0x214bac: 0x0  nop
    ctx->pc = 0x214bacu;
    // NOP
label_214bb0:
    // 0x214bb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x214bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_214bb4:
    // 0x214bb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x214bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_214bb8:
    // 0x214bb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x214bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_214bbc:
    // 0x214bbc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x214bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_214bc0:
    // 0x214bc0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x214bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_214bc4:
    // 0x214bc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x214bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_214bc8:
    // 0x214bc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x214bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_214bcc:
    // 0x214bcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x214bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_214bd0:
    // 0x214bd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x214bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_214bd4:
    // 0x214bd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_214bd8:
    // 0x214bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x214bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_214bdc:
    // 0x214bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_214be0:
    // 0x214be0: 0x8f8491d8  lw          $a0, -0x6E28($gp)
    ctx->pc = 0x214be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_214be4:
    // 0x214be4: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_214be8:
    if (ctx->pc == 0x214BE8u) {
        ctx->pc = 0x214BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BE4u;
        // 0x214be8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214BECu;
        goto label_214bec;
    }
    ctx->pc = 0x214BE4u;
    {
        const bool branch_taken_0x214be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x214BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BE4u;
        // 0x214be8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214be4) {
            ctx->pc = 0x214C10u;
            goto label_214c10;
        }
    }
    ctx->pc = 0x214BECu;
label_214bec:
    // 0x214bec: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_214bf0:
    // 0x214bf0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x214bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_214bf4:
    // 0x214bf4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x214bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_214bf8:
    // 0x214bf8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x214bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_214bfc:
    // 0x214bfc: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x214bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_214c00:
    // 0x214c00: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x214c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_214c04:
    // 0x214c04: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x214c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_214c08:
    // 0x214c08: 0x10000074  b           . + 4 + (0x74 << 2)
label_214c0c:
    if (ctx->pc == 0x214C0Cu) {
        ctx->pc = 0x214C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C08u;
        // 0x214c0c: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C10u;
        goto label_214c10;
    }
    ctx->pc = 0x214C08u;
    {
        const bool branch_taken_0x214c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C08u;
        // 0x214c0c: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c08) {
            ctx->pc = 0x214DDCu;
            goto label_214ddc;
        }
    }
    ctx->pc = 0x214C10u;
label_214c10:
    // 0x214c10: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_214c14:
    if (ctx->pc == 0x214C14u) {
        ctx->pc = 0x214C18u;
        goto label_214c18;
    }
    ctx->pc = 0x214C10u;
    {
        const bool branch_taken_0x214c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x214c10) {
            ctx->pc = 0x214CF0u;
            goto label_214cf0;
        }
    }
    ctx->pc = 0x214C18u;
label_214c18:
    // 0x214c18: 0x8f8591dc  lw          $a1, -0x6E24($gp)
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939100)));
label_214c1c:
    // 0x214c1c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x214c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_214c20:
    // 0x214c20: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_214c24:
    if (ctx->pc == 0x214C24u) {
        ctx->pc = 0x214C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C20u;
        // 0x214c24: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C28u;
        goto label_214c28;
    }
    ctx->pc = 0x214C20u;
    {
        const bool branch_taken_0x214c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x214C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C20u;
        // 0x214c24: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c20) {
            ctx->pc = 0x214C40u;
            goto label_214c40;
        }
    }
    ctx->pc = 0x214C28u;
label_214c28:
    // 0x214c28: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x214c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_214c2c:
    // 0x214c2c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_214c30:
    if (ctx->pc == 0x214C30u) {
        ctx->pc = 0x214C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C2Cu;
        // 0x214c30: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C34u;
        goto label_214c34;
    }
    ctx->pc = 0x214C2Cu;
    {
        const bool branch_taken_0x214c2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x214C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C2Cu;
        // 0x214c30: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c2c) {
            ctx->pc = 0x214C3Cu;
            goto label_214c3c;
        }
    }
    ctx->pc = 0x214C34u;
label_214c34:
    // 0x214c34: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
label_214c38:
    if (ctx->pc == 0x214C38u) {
        ctx->pc = 0x214C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C34u;
        // 0x214c38: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C3Cu;
        goto label_214c3c;
    }
    ctx->pc = 0x214C34u;
    {
        const bool branch_taken_0x214c34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C34u;
        // 0x214c38: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c34) {
            ctx->pc = 0x214CA0u;
            goto label_214ca0;
        }
    }
    ctx->pc = 0x214C3Cu;
label_214c3c:
    // 0x214c3c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x214c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_214c40:
    // 0x214c40: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_214c44:
    if (ctx->pc == 0x214C44u) {
        ctx->pc = 0x214C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C40u;
        // 0x214c44: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C48u;
        goto label_214c48;
    }
    ctx->pc = 0x214C40u;
    {
        const bool branch_taken_0x214c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C40u;
        // 0x214c44: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c40) {
            ctx->pc = 0x214C54u;
            goto label_214c54;
        }
    }
    ctx->pc = 0x214C48u;
label_214c48:
    // 0x214c48: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x214c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_214c4c:
    // 0x214c4c: 0x1000000f  b           . + 4 + (0xF << 2)
label_214c50:
    if (ctx->pc == 0x214C50u) {
        ctx->pc = 0x214C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C4Cu;
        // 0x214c50: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C54u;
        goto label_214c54;
    }
    ctx->pc = 0x214C4Cu;
    {
        const bool branch_taken_0x214c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C4Cu;
        // 0x214c50: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c4c) {
            ctx->pc = 0x214C8Cu;
            goto label_214c8c;
        }
    }
    ctx->pc = 0x214C54u;
label_214c54:
    // 0x214c54: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_214c58:
    if (ctx->pc == 0x214C58u) {
        ctx->pc = 0x214C5Cu;
        goto label_214c5c;
    }
    ctx->pc = 0x214C54u;
    {
        const bool branch_taken_0x214c54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x214c54) {
            ctx->pc = 0x214C68u;
            goto label_214c68;
        }
    }
    ctx->pc = 0x214C5Cu;
label_214c5c:
    // 0x214c5c: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x214c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_214c60:
    // 0x214c60: 0x1000000a  b           . + 4 + (0xA << 2)
label_214c64:
    if (ctx->pc == 0x214C64u) {
        ctx->pc = 0x214C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C60u;
        // 0x214c64: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C68u;
        goto label_214c68;
    }
    ctx->pc = 0x214C60u;
    {
        const bool branch_taken_0x214c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C60u;
        // 0x214c64: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c60) {
            ctx->pc = 0x214C8Cu;
            goto label_214c8c;
        }
    }
    ctx->pc = 0x214C68u;
label_214c68:
    // 0x214c68: 0xc0867a0  jal         func_219E80
label_214c6c:
    if (ctx->pc == 0x214C6Cu) {
        ctx->pc = 0x214C70u;
        goto label_214c70;
    }
    ctx->pc = 0x214C68u;
    SET_GPR_U32(ctx, 31, 0x214C70u);
    ctx->pc = 0x219E80u;
    { ctx->pc = 0x219e80; return; }
    ctx->pc = 0x214C70u;
label_214c70:
    // 0x214c70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x214c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_214c74:
    // 0x214c74: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_214c78:
    if (ctx->pc == 0x214C78u) {
        ctx->pc = 0x214C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C74u;
        // 0x214c78: 0x24030059  addiu       $v1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C7Cu;
        goto label_214c7c;
    }
    ctx->pc = 0x214C74u;
    {
        const bool branch_taken_0x214c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C74u;
        // 0x214c78: 0x24030059  addiu       $v1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c74) {
            ctx->pc = 0x214C88u;
            goto label_214c88;
        }
    }
    ctx->pc = 0x214C7Cu;
label_214c7c:
    // 0x214c7c: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x214c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_214c80:
    // 0x214c80: 0x10000002  b           . + 4 + (0x2 << 2)
label_214c84:
    if (ctx->pc == 0x214C84u) {
        ctx->pc = 0x214C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C80u;
        // 0x214c84: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214C88u;
        goto label_214c88;
    }
    ctx->pc = 0x214C80u;
    {
        const bool branch_taken_0x214c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C80u;
        // 0x214c84: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c80) {
            ctx->pc = 0x214C8Cu;
            goto label_214c8c;
        }
    }
    ctx->pc = 0x214C88u;
label_214c88:
    // 0x214c88: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x214c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_214c8c:
    // 0x214c8c: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x214c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_214c90:
    // 0x214c90: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x214c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_214c94:
    // 0x214c94: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x214c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_214c98:
    // 0x214c98: 0x10000050  b           . + 4 + (0x50 << 2)
label_214c9c:
    if (ctx->pc == 0x214C9Cu) {
        ctx->pc = 0x214C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C98u;
        // 0x214c9c: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CA0u;
        goto label_214ca0;
    }
    ctx->pc = 0x214C98u;
    {
        const bool branch_taken_0x214c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C98u;
        // 0x214c9c: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c98) {
            ctx->pc = 0x214DDCu;
            goto label_214ddc;
        }
    }
    ctx->pc = 0x214CA0u;
label_214ca0:
    // 0x214ca0: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x214ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_214ca4:
    // 0x214ca4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_214ca8:
    if (ctx->pc == 0x214CA8u) {
        ctx->pc = 0x214CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA4u;
        // 0x214ca8: 0x8c244970  lw          $a0, 0x4970($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CACu;
        goto label_214cac;
    }
    ctx->pc = 0x214CA4u;
    {
        const bool branch_taken_0x214ca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA4u;
        // 0x214ca8: 0x8c244970  lw          $a0, 0x4970($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ca4) {
            ctx->pc = 0x214CB8u;
            goto label_214cb8;
        }
    }
    ctx->pc = 0x214CACu;
label_214cac:
    // 0x214cac: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x214cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_214cb0:
    // 0x214cb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_214cb4:
    if (ctx->pc == 0x214CB4u) {
        ctx->pc = 0x214CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CB0u;
        // 0x214cb4: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CB8u;
        goto label_214cb8;
    }
    ctx->pc = 0x214CB0u;
    {
        const bool branch_taken_0x214cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CB0u;
        // 0x214cb4: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cb0) {
            ctx->pc = 0x214CD4u;
            goto label_214cd4;
        }
    }
    ctx->pc = 0x214CB8u;
label_214cb8:
    // 0x214cb8: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_214cbc:
    // 0x214cbc: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_214cc0:
    if (ctx->pc == 0x214CC0u) {
        ctx->pc = 0x214CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CBCu;
        // 0x214cc0: 0x24030059  addiu       $v1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CC4u;
        goto label_214cc4;
    }
    ctx->pc = 0x214CBCu;
    {
        const bool branch_taken_0x214cbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CBCu;
        // 0x214cc0: 0x24030059  addiu       $v1, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cbc) {
            ctx->pc = 0x214CD0u;
            goto label_214cd0;
        }
    }
    ctx->pc = 0x214CC4u;
label_214cc4:
    // 0x214cc4: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x214cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_214cc8:
    // 0x214cc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_214ccc:
    if (ctx->pc == 0x214CCCu) {
        ctx->pc = 0x214CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CC8u;
        // 0x214ccc: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CD0u;
        goto label_214cd0;
    }
    ctx->pc = 0x214CC8u;
    {
        const bool branch_taken_0x214cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CC8u;
        // 0x214ccc: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cc8) {
            ctx->pc = 0x214CD4u;
            goto label_214cd4;
        }
    }
    ctx->pc = 0x214CD0u;
label_214cd0:
    // 0x214cd0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x214cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_214cd4:
    // 0x214cd4: 0x24830028  addiu       $v1, $a0, 0x28
    ctx->pc = 0x214cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_214cd8:
    // 0x214cd8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x214cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_214cdc:
    // 0x214cdc: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x214cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_214ce0:
    // 0x214ce0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x214ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_214ce4:
    // 0x214ce4: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x214ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_214ce8:
    // 0x214ce8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_214cec:
    if (ctx->pc == 0x214CECu) {
        ctx->pc = 0x214CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CE8u;
        // 0x214cec: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CF0u;
        goto label_214cf0;
    }
    ctx->pc = 0x214CE8u;
    {
        const bool branch_taken_0x214ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CE8u;
        // 0x214cec: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ce8) {
            ctx->pc = 0x214DDCu;
            goto label_214ddc;
        }
    }
    ctx->pc = 0x214CF0u;
label_214cf0:
    // 0x214cf0: 0xc056a38  jal         func_15A8E0
label_214cf4:
    if (ctx->pc == 0x214CF4u) {
        ctx->pc = 0x214CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CF0u;
        // 0x214cf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214CF8u;
        goto label_214cf8;
    }
    ctx->pc = 0x214CF0u;
    SET_GPR_U32(ctx, 31, 0x214CF8u);
    ctx->pc = 0x214CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CF0u;
    // 0x214cf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x214CF0u, 0x214CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CF8u;
label_214cf8:
    // 0x214cf8: 0x28410012  slti        $at, $v0, 0x12
    ctx->pc = 0x214cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_214cfc:
    // 0x214cfc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_214d00:
    if (ctx->pc == 0x214D00u) {
        ctx->pc = 0x214D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CFCu;
        // 0x214d00: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D04u;
        goto label_214d04;
    }
    ctx->pc = 0x214CFCu;
    {
        const bool branch_taken_0x214cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CFCu;
        // 0x214d00: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cfc) {
            ctx->pc = 0x214D14u;
            goto label_214d14;
        }
    }
    ctx->pc = 0x214D04u;
label_214d04:
    // 0x214d04: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x214d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_214d08:
    // 0x214d08: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x214d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_214d0c:
    // 0x214d0c: 0x10000017  b           . + 4 + (0x17 << 2)
label_214d10:
    if (ctx->pc == 0x214D10u) {
        ctx->pc = 0x214D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D0Cu;
        // 0x214d10: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D14u;
        goto label_214d14;
    }
    ctx->pc = 0x214D0Cu;
    {
        const bool branch_taken_0x214d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D0Cu;
        // 0x214d10: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d0c) {
            ctx->pc = 0x214D6Cu;
            goto label_214d6c;
        }
    }
    ctx->pc = 0x214D14u;
label_214d14:
    // 0x214d14: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_214d18:
    if (ctx->pc == 0x214D18u) {
        ctx->pc = 0x214D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D14u;
        // 0x214d18: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D1Cu;
        goto label_214d1c;
    }
    ctx->pc = 0x214D14u;
    {
        const bool branch_taken_0x214d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D14u;
        // 0x214d18: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d14) {
            ctx->pc = 0x214D2Cu;
            goto label_214d2c;
        }
    }
    ctx->pc = 0x214D1Cu;
label_214d1c:
    // 0x214d1c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x214d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_214d20:
    // 0x214d20: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x214d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_214d24:
    // 0x214d24: 0x10000011  b           . + 4 + (0x11 << 2)
label_214d28:
    if (ctx->pc == 0x214D28u) {
        ctx->pc = 0x214D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D24u;
        // 0x214d28: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D2Cu;
        goto label_214d2c;
    }
    ctx->pc = 0x214D24u;
    {
        const bool branch_taken_0x214d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D24u;
        // 0x214d28: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d24) {
            ctx->pc = 0x214D6Cu;
            goto label_214d6c;
        }
    }
    ctx->pc = 0x214D2Cu;
label_214d2c:
    // 0x214d2c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x214d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_214d30:
    // 0x214d30: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_214d34:
    if (ctx->pc == 0x214D34u) {
        ctx->pc = 0x214D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D30u;
        // 0x214d34: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D38u;
        goto label_214d38;
    }
    ctx->pc = 0x214D30u;
    {
        const bool branch_taken_0x214d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D30u;
        // 0x214d34: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d30) {
            ctx->pc = 0x214D4Cu;
            goto label_214d4c;
        }
    }
    ctx->pc = 0x214D38u;
label_214d38:
    // 0x214d38: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_214d3c:
    // 0x214d3c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x214d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_214d40:
    // 0x214d40: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x214d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_214d44:
    // 0x214d44: 0x10000009  b           . + 4 + (0x9 << 2)
label_214d48:
    if (ctx->pc == 0x214D48u) {
        ctx->pc = 0x214D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D44u;
        // 0x214d48: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D4Cu;
        goto label_214d4c;
    }
    ctx->pc = 0x214D44u;
    {
        const bool branch_taken_0x214d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D44u;
        // 0x214d48: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d44) {
            ctx->pc = 0x214D6Cu;
            goto label_214d6c;
        }
    }
    ctx->pc = 0x214D4Cu;
label_214d4c:
    // 0x214d4c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_214d50:
    if (ctx->pc == 0x214D50u) {
        ctx->pc = 0x214D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D4Cu;
        // 0x214d50: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214D54u;
        goto label_214d54;
    }
    ctx->pc = 0x214D4Cu;
    {
        const bool branch_taken_0x214d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x214D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D4Cu;
        // 0x214d50: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d4c) {
            ctx->pc = 0x214D60u;
            goto label_214d60;
        }
    }
    ctx->pc = 0x214D54u;
label_214d54:
    // 0x214d54: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x214d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_214d58:
    // 0x214d58: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_214d5c:
    if (ctx->pc == 0x214D5Cu) {
        ctx->pc = 0x214D60u;
        goto label_214d60;
    }
    ctx->pc = 0x214D58u;
    {
        const bool branch_taken_0x214d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x214d58) {
            ctx->pc = 0x214D6Cu;
            goto label_214d6c;
        }
    }
    ctx->pc = 0x214D60u;
label_214d60:
    // 0x214d60: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_214d64:
    // 0x214d64: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x214d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_214d68:
    // 0x214d68: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x214d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_214d6c:
    // 0x214d6c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x214d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_214d70:
    // 0x214d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214d74:
    // 0x214d74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x214d74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214d78:
    // 0x214d78: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x214d78u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214d7c:
    // 0x214d7c: 0x306a0400  andi        $t2, $v1, 0x400
    ctx->pc = 0x214d7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_214d80:
    // 0x214d80: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x214d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_214d84:
    // 0x214d84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214d88:
    // 0x214d88: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x214d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_214d8c:
    // 0x214d8c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x214d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_214d90:
    // 0x214d90: 0x2407005b  addiu       $a3, $zero, 0x5B
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_214d94:
    // 0x214d94: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
label_214d98:
    if (ctx->pc == 0x214D98u) {
        ctx->pc = 0x214D9Cu;
        goto label_214d9c;
    }
    ctx->pc = 0x214D94u;
    {
        const bool branch_taken_0x214d94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x214d94) {
            ctx->pc = 0x214DACu;
            goto label_214dac;
        }
    }
    ctx->pc = 0x214D9Cu;
label_214d9c:
    // 0x214d9c: 0x15280003  bne         $t1, $t0, . + 4 + (0x3 << 2)
label_214da0:
    if (ctx->pc == 0x214DA0u) {
        ctx->pc = 0x214DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D9Cu;
        // 0x214da0: 0xcb1821  addu        $v1, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214DA4u;
        goto label_214da4;
    }
    ctx->pc = 0x214D9Cu;
    {
        const bool branch_taken_0x214d9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        ctx->pc = 0x214DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D9Cu;
        // 0x214da0: 0xcb1821  addu        $v1, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d9c) {
            ctx->pc = 0x214DACu;
            goto label_214dac;
        }
    }
    ctx->pc = 0x214DA4u;
label_214da4:
    // 0x214da4: 0x10000007  b           . + 4 + (0x7 << 2)
label_214da8:
    if (ctx->pc == 0x214DA8u) {
        ctx->pc = 0x214DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA4u;
        // 0x214da8: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214DACu;
        goto label_214dac;
    }
    ctx->pc = 0x214DA4u;
    {
        const bool branch_taken_0x214da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA4u;
        // 0x214da8: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da4) {
            ctx->pc = 0x214DC4u;
            goto label_214dc4;
        }
    }
    ctx->pc = 0x214DACu;
label_214dac:
    // 0x214dac: 0x0  nop
    ctx->pc = 0x214dacu;
    // NOP
label_214db0:
    // 0x214db0: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x214db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_214db4:
    // 0x214db4: 0x8c643670  lw          $a0, 0x3670($v1)
    ctx->pc = 0x214db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_214db8:
    // 0x214db8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x214db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_214dbc:
    // 0x214dbc: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x214dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_214dc0:
    // 0x214dc0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x214dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_214dc4:
    // 0x214dc4: 0x0  nop
    ctx->pc = 0x214dc4u;
    // NOP
label_214dc8:
    // 0x214dc8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_214dcc:
    // 0x214dcc: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x214dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_214dd0:
    // 0x214dd0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_214dd4:
    // 0x214dd4: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_214dd8:
    if (ctx->pc == 0x214DD8u) {
        ctx->pc = 0x214DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DD4u;
        // 0x214dd8: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214DDCu;
        goto label_214ddc;
    }
    ctx->pc = 0x214DD4u;
    {
        const bool branch_taken_0x214dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DD4u;
        // 0x214dd8: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dd4) {
            ctx->pc = 0x214D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214d94;
        }
    }
    ctx->pc = 0x214DDCu;
label_214ddc:
    // 0x214ddc: 0x0  nop
    ctx->pc = 0x214ddcu;
    // NOP
label_214de0:
    // 0x214de0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x214de0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214de4:
    // 0x214de4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x214de4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214de8:
    // 0x214de8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x214de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214dec:
    // 0x214dec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x214decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214df0:
    // 0x214df0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x214df0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214df4:
    // 0x214df4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_214df8:
    // 0x214df8: 0x778021  addu        $s0, $v1, $s7
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_214dfc:
    // 0x214dfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_214e00:
    // 0x214e00: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x214e00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
label_214e04:
    // 0x214e04: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_214e08:
    if (ctx->pc == 0x214E08u) {
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E04u;
        // 0x214e08: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214E0Cu;
        goto label_214e0c;
    }
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E04u;
        // 0x214e08: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e04) {
            ctx->pc = 0x214EB0u;
            goto label_214eb0;
        }
    }
    ctx->pc = 0x214E0Cu;
label_214e0c:
    // 0x214e0c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x214e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_214e10:
    // 0x214e10: 0x8c318c30  lw          $s1, -0x73D0($at)
    ctx->pc = 0x214e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937648)));
label_214e14:
    // 0x214e14: 0xc070080  jal         func_1C0200
label_214e18:
    if (ctx->pc == 0x214E18u) {
        ctx->pc = 0x214E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E14u;
        // 0x214e18: 0x24054800  addiu       $a1, $zero, 0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214E1Cu;
        goto label_214e1c;
    }
    ctx->pc = 0x214E14u;
    SET_GPR_U32(ctx, 31, 0x214E1Cu);
    ctx->pc = 0x214E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E14u;
    // 0x214e18: 0x24054800  addiu       $a1, $zero, 0x4800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x214E1Cu;
label_214e1c:
    // 0x214e1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x214e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_214e20:
    // 0x214e20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x214e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214e24:
    // 0x214e24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_214e28:
    // 0x214e28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x214e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_214e2c:
    // 0x214e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_214e30:
    // 0x214e30: 0xc041744  jal         func_105D10
label_214e34:
    if (ctx->pc == 0x214E34u) {
        ctx->pc = 0x214E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E30u;
        // 0x214e34: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214E38u;
        goto label_214e38;
    }
    ctx->pc = 0x214E30u;
    SET_GPR_U32(ctx, 31, 0x214E38u);
    ctx->pc = 0x214E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E30u;
    // 0x214e34: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x214E30u, 0x214E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E38u;
label_214e38:
    // 0x214e38: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x214e38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214e3c:
    // 0x214e3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214e40:
    // 0x214e40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214e44:
    // 0x214e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214e48:
    // 0x214e48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x214e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_214e4c:
    // 0x214e4c: 0xc0602c8  jal         func_180B20
label_214e50:
    if (ctx->pc == 0x214E50u) {
        ctx->pc = 0x214E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E4Cu;
        // 0x214e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214E54u;
        goto label_214e54;
    }
    ctx->pc = 0x214E4Cu;
    SET_GPR_U32(ctx, 31, 0x214E54u);
    ctx->pc = 0x214E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E4Cu;
    // 0x214e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x214E4Cu, 0x214E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E54u;
label_214e54:
    // 0x214e54: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x214e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
label_214e58:
    // 0x214e58: 0x14343c  dsll32      $a2, $s4, 16
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 16));
label_214e5c:
    // 0x214e5c: 0x26630150  addiu       $v1, $s3, 0x150
    ctx->pc = 0x214e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_214e60:
    // 0x214e60: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x214e60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_214e64:
    // 0x214e64: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x214e64u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_214e68:
    // 0x214e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214e6c:
    // 0x214e6c: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x214e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_214e70:
    // 0x214e70: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_214e74:
    // 0x214e74: 0xc0603d4  jal         func_180F50
label_214e78:
    if (ctx->pc == 0x214E78u) {
        ctx->pc = 0x214E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E74u;
        // 0x214e78: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214E7Cu;
        goto label_214e7c;
    }
    ctx->pc = 0x214E74u;
    SET_GPR_U32(ctx, 31, 0x214E7Cu);
    ctx->pc = 0x214E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E74u;
    // 0x214e78: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x214E74u, 0x214E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E7Cu;
label_214e7c:
    // 0x214e7c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_214e80:
    // 0x214e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x214e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_214e84:
    // 0x214e84: 0x246382b0  addiu       $v1, $v1, -0x7D50
    ctx->pc = 0x214e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935216));
label_214e88:
    // 0x214e88: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x214e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_214e8c:
    // 0x214e8c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_214e90:
    // 0x214e90: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_214e94:
    // 0x214e94: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_214e98:
    // 0x214e98: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x214e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_214e9c:
    // 0x214e9c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x214e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_214ea0:
    // 0x214ea0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_214ea4:
    if (ctx->pc == 0x214EA4u) {
        ctx->pc = 0x214EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EA0u;
        // 0x214ea4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214EA8u;
        goto label_214ea8;
    }
    ctx->pc = 0x214EA0u;
    {
        const bool branch_taken_0x214ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EA0u;
        // 0x214ea4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ea0) {
            ctx->pc = 0x214E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214e48;
        }
    }
    ctx->pc = 0x214EA8u;
label_214ea8:
    // 0x214ea8: 0xc070038  jal         func_1C00E0
label_214eac:
    if (ctx->pc == 0x214EACu) {
        ctx->pc = 0x214EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EA8u;
        // 0x214eac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214EB0u;
        goto label_214eb0;
    }
    ctx->pc = 0x214EA8u;
    SET_GPR_U32(ctx, 31, 0x214EB0u);
    ctx->pc = 0x214EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EA8u;
    // 0x214eac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x214EB0u;
label_214eb0:
    // 0x214eb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x214eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_214eb4:
    // 0x214eb4: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x214eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_214eb8:
    // 0x214eb8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x214eb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_214ebc:
    // 0x214ebc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x214ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_214ec0:
    // 0x214ec0: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x214ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_214ec4:
    // 0x214ec4: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_214ec8:
    if (ctx->pc == 0x214EC8u) {
        ctx->pc = 0x214EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC4u;
        // 0x214ec8: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214ECCu;
        goto label_214ecc;
    }
    ctx->pc = 0x214EC4u;
    {
        const bool branch_taken_0x214ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC4u;
        // 0x214ec8: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec4) {
            ctx->pc = 0x214DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214df4;
        }
    }
    ctx->pc = 0x214ECCu;
label_214ecc:
    // 0x214ecc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x214eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_214ed0:
    // 0x214ed0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x214ed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_214ed4:
    // 0x214ed4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x214ed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_214ed8:
    // 0x214ed8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x214ed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_214edc:
    // 0x214edc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x214edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_214ee0:
    // 0x214ee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x214ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_214ee4:
    // 0x214ee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x214ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214ee8:
    // 0x214ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x214ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_214eec:
    // 0x214eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214ef0:
    // 0x214ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_214ef4:
    // 0x214ef4: 0x3e00008  jr          $ra
label_214ef8:
    if (ctx->pc == 0x214EF8u) {
        ctx->pc = 0x214EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EF4u;
        // 0x214ef8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214EFCu;
        goto label_214efc;
    }
    ctx->pc = 0x214EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EF4u;
        // 0x214ef8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214EFCu;
label_214efc:
    // 0x214efc: 0x0  nop
    ctx->pc = 0x214efcu;
    // NOP
label_214f00:
    // 0x214f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_214f04:
    // 0x214f04: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x214f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_214f08:
    // 0x214f08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x214f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_214f0c:
    // 0x214f0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_214f10:
    // 0x214f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x214f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_214f14:
    // 0x214f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_214f18:
    // 0x214f18: 0x8f8491d8  lw          $a0, -0x6E28($gp)
    ctx->pc = 0x214f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_214f1c:
    // 0x214f1c: 0xaf8091e0  sw          $zero, -0x6E20($gp)
    ctx->pc = 0x214f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 0));
label_214f20:
    // 0x214f20: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_214f24:
    if (ctx->pc == 0x214F24u) {
        ctx->pc = 0x214F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F20u;
        // 0x214f24: 0xaf8091d4  sw          $zero, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F28u;
        goto label_214f28;
    }
    ctx->pc = 0x214F20u;
    {
        const bool branch_taken_0x214f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x214F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F20u;
        // 0x214f24: 0xaf8091d4  sw          $zero, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f20) {
            ctx->pc = 0x214FD0u;
            { ctx->pc = 0x214fd0; return; }
        }
    }
    ctx->pc = 0x214F28u;
label_214f28:
    // 0x214f28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x214f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_214f2c:
    // 0x214f2c: 0x90244af3  lbu         $a0, 0x4AF3($at)
    ctx->pc = 0x214f2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_214f30:
    // 0x214f30: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x214f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_214f34:
    // 0x214f34: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_214f38:
    if (ctx->pc == 0x214F38u) {
        ctx->pc = 0x214F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F34u;
        // 0x214f38: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F3Cu;
        goto label_214f3c;
    }
    ctx->pc = 0x214F34u;
    {
        const bool branch_taken_0x214f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F34u;
        // 0x214f38: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f34) {
            ctx->pc = 0x214F4Cu;
            goto label_214f4c;
        }
    }
    ctx->pc = 0x214F3Cu;
label_214f3c:
    // 0x214f3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_214f40:
    if (ctx->pc == 0x214F40u) {
        ctx->pc = 0x214F44u;
        goto label_214f44;
    }
    ctx->pc = 0x214F3Cu;
    {
        const bool branch_taken_0x214f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f3c) {
            ctx->pc = 0x214F4Cu;
            goto label_214f4c;
        }
    }
    ctx->pc = 0x214F44u;
label_214f44:
    // 0x214f44: 0x1000005c  b           . + 4 + (0x5C << 2)
label_214f48:
    if (ctx->pc == 0x214F48u) {
        ctx->pc = 0x214F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F44u;
        // 0x214f48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F4Cu;
        goto label_214f4c;
    }
    ctx->pc = 0x214F44u;
    {
        const bool branch_taken_0x214f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F44u;
        // 0x214f48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f44) {
            ctx->pc = 0x2150B8u;
            { ctx->pc = 0x2150b8; return; }
        }
    }
    ctx->pc = 0x214F4Cu;
label_214f4c:
    // 0x214f4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_214f50:
    if (ctx->pc == 0x214F50u) {
        ctx->pc = 0x214F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F4Cu;
        // 0x214f50: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F54u;
        goto label_214f54;
    }
    ctx->pc = 0x214F4Cu;
    {
        const bool branch_taken_0x214f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F4Cu;
        // 0x214f50: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f4c) {
            ctx->pc = 0x214F5Cu;
            goto label_214f5c;
        }
    }
    ctx->pc = 0x214F54u;
label_214f54:
    // 0x214f54: 0x10000058  b           . + 4 + (0x58 << 2)
label_214f58:
    if (ctx->pc == 0x214F58u) {
        ctx->pc = 0x214F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F54u;
        // 0x214f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F5Cu;
        goto label_214f5c;
    }
    ctx->pc = 0x214F54u;
    {
        const bool branch_taken_0x214f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F54u;
        // 0x214f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f54) {
            ctx->pc = 0x2150B8u;
            { ctx->pc = 0x2150b8; return; }
        }
    }
    ctx->pc = 0x214F5Cu;
label_214f5c:
    // 0x214f5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_214f60:
    if (ctx->pc == 0x214F60u) {
        ctx->pc = 0x214F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F5Cu;
        // 0x214f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F64u;
        goto label_214f64;
    }
    ctx->pc = 0x214F5Cu;
    {
        const bool branch_taken_0x214f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F5Cu;
        // 0x214f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f5c) {
            ctx->pc = 0x214F6Cu;
            { ctx->pc = 0x214f6c; return; }
        }
    }
    ctx->pc = 0x214F64u;
label_214f64:
    // 0x214f64: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x214f68u;
    return;
}
