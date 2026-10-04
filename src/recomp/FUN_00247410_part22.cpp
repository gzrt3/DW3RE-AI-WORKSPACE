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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part22(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x251820u: goto label_251820;
        case 0x251824u: goto label_251824;
        case 0x251828u: goto label_251828;
        case 0x25182cu: goto label_25182c;
        case 0x251830u: goto label_251830;
        case 0x251834u: goto label_251834;
        case 0x251838u: goto label_251838;
        case 0x25183cu: goto label_25183c;
        case 0x251840u: goto label_251840;
        case 0x251844u: goto label_251844;
        case 0x251848u: goto label_251848;
        case 0x25184cu: goto label_25184c;
        case 0x251850u: goto label_251850;
        case 0x251854u: goto label_251854;
        case 0x251858u: goto label_251858;
        case 0x25185cu: goto label_25185c;
        case 0x251860u: goto label_251860;
        case 0x251864u: goto label_251864;
        case 0x251868u: goto label_251868;
        case 0x25186cu: goto label_25186c;
        case 0x251870u: goto label_251870;
        case 0x251874u: goto label_251874;
        case 0x251878u: goto label_251878;
        case 0x25187cu: goto label_25187c;
        case 0x251880u: goto label_251880;
        case 0x251884u: goto label_251884;
        case 0x251888u: goto label_251888;
        case 0x25188cu: goto label_25188c;
        case 0x251890u: goto label_251890;
        case 0x251894u: goto label_251894;
        case 0x251898u: goto label_251898;
        case 0x25189cu: goto label_25189c;
        case 0x2518a0u: goto label_2518a0;
        case 0x2518a4u: goto label_2518a4;
        case 0x2518a8u: goto label_2518a8;
        case 0x2518acu: goto label_2518ac;
        case 0x2518b0u: goto label_2518b0;
        case 0x2518b4u: goto label_2518b4;
        case 0x2518b8u: goto label_2518b8;
        case 0x2518bcu: goto label_2518bc;
        case 0x2518c0u: goto label_2518c0;
        case 0x2518c4u: goto label_2518c4;
        case 0x2518c8u: goto label_2518c8;
        case 0x2518ccu: goto label_2518cc;
        case 0x2518d0u: goto label_2518d0;
        case 0x2518d4u: goto label_2518d4;
        case 0x2518d8u: goto label_2518d8;
        case 0x2518dcu: goto label_2518dc;
        case 0x2518e0u: goto label_2518e0;
        case 0x2518e4u: goto label_2518e4;
        case 0x2518e8u: goto label_2518e8;
        case 0x2518ecu: goto label_2518ec;
        case 0x2518f0u: goto label_2518f0;
        case 0x2518f4u: goto label_2518f4;
        case 0x2518f8u: goto label_2518f8;
        case 0x2518fcu: goto label_2518fc;
        case 0x251900u: goto label_251900;
        case 0x251904u: goto label_251904;
        case 0x251908u: goto label_251908;
        case 0x25190cu: goto label_25190c;
        case 0x251910u: goto label_251910;
        case 0x251914u: goto label_251914;
        case 0x251918u: goto label_251918;
        case 0x25191cu: goto label_25191c;
        case 0x251920u: goto label_251920;
        case 0x251924u: goto label_251924;
        case 0x251928u: goto label_251928;
        case 0x25192cu: goto label_25192c;
        case 0x251930u: goto label_251930;
        case 0x251934u: goto label_251934;
        case 0x251938u: goto label_251938;
        case 0x25193cu: goto label_25193c;
        case 0x251940u: goto label_251940;
        case 0x251944u: goto label_251944;
        case 0x251948u: goto label_251948;
        case 0x25194cu: goto label_25194c;
        case 0x251950u: goto label_251950;
        case 0x251954u: goto label_251954;
        case 0x251958u: goto label_251958;
        case 0x25195cu: goto label_25195c;
        case 0x251960u: goto label_251960;
        case 0x251964u: goto label_251964;
        case 0x251968u: goto label_251968;
        case 0x25196cu: goto label_25196c;
        case 0x251970u: goto label_251970;
        case 0x251974u: goto label_251974;
        case 0x251978u: goto label_251978;
        case 0x25197cu: goto label_25197c;
        case 0x251980u: goto label_251980;
        case 0x251984u: goto label_251984;
        case 0x251988u: goto label_251988;
        case 0x25198cu: goto label_25198c;
        case 0x251990u: goto label_251990;
        case 0x251994u: goto label_251994;
        case 0x251998u: goto label_251998;
        case 0x25199cu: goto label_25199c;
        case 0x2519a0u: goto label_2519a0;
        case 0x2519a4u: goto label_2519a4;
        case 0x2519a8u: goto label_2519a8;
        case 0x2519acu: goto label_2519ac;
        case 0x2519b0u: goto label_2519b0;
        case 0x2519b4u: goto label_2519b4;
        case 0x2519b8u: goto label_2519b8;
        case 0x2519bcu: goto label_2519bc;
        case 0x2519c0u: goto label_2519c0;
        case 0x2519c4u: goto label_2519c4;
        case 0x2519c8u: goto label_2519c8;
        case 0x2519ccu: goto label_2519cc;
        case 0x2519d0u: goto label_2519d0;
        case 0x2519d4u: goto label_2519d4;
        case 0x2519d8u: goto label_2519d8;
        case 0x2519dcu: goto label_2519dc;
        case 0x2519e0u: goto label_2519e0;
        case 0x2519e4u: goto label_2519e4;
        case 0x2519e8u: goto label_2519e8;
        case 0x2519ecu: goto label_2519ec;
        case 0x2519f0u: goto label_2519f0;
        case 0x2519f4u: goto label_2519f4;
        case 0x2519f8u: goto label_2519f8;
        case 0x2519fcu: goto label_2519fc;
        case 0x251a00u: goto label_251a00;
        case 0x251a04u: goto label_251a04;
        case 0x251a08u: goto label_251a08;
        case 0x251a0cu: goto label_251a0c;
        case 0x251a10u: goto label_251a10;
        case 0x251a14u: goto label_251a14;
        case 0x251a18u: goto label_251a18;
        case 0x251a1cu: goto label_251a1c;
        case 0x251a20u: goto label_251a20;
        case 0x251a24u: goto label_251a24;
        case 0x251a28u: goto label_251a28;
        case 0x251a2cu: goto label_251a2c;
        case 0x251a30u: goto label_251a30;
        case 0x251a34u: goto label_251a34;
        case 0x251a38u: goto label_251a38;
        case 0x251a3cu: goto label_251a3c;
        case 0x251a40u: goto label_251a40;
        case 0x251a44u: goto label_251a44;
        case 0x251a48u: goto label_251a48;
        case 0x251a4cu: goto label_251a4c;
        case 0x251a50u: goto label_251a50;
        case 0x251a54u: goto label_251a54;
        case 0x251a58u: goto label_251a58;
        case 0x251a5cu: goto label_251a5c;
        case 0x251a60u: goto label_251a60;
        case 0x251a64u: goto label_251a64;
        case 0x251a68u: goto label_251a68;
        case 0x251a6cu: goto label_251a6c;
        case 0x251a70u: goto label_251a70;
        case 0x251a74u: goto label_251a74;
        case 0x251a78u: goto label_251a78;
        case 0x251a7cu: goto label_251a7c;
        case 0x251a80u: goto label_251a80;
        case 0x251a84u: goto label_251a84;
        case 0x251a88u: goto label_251a88;
        case 0x251a8cu: goto label_251a8c;
        case 0x251a90u: goto label_251a90;
        case 0x251a94u: goto label_251a94;
        case 0x251a98u: goto label_251a98;
        case 0x251a9cu: goto label_251a9c;
        case 0x251aa0u: goto label_251aa0;
        case 0x251aa4u: goto label_251aa4;
        case 0x251aa8u: goto label_251aa8;
        case 0x251aacu: goto label_251aac;
        case 0x251ab0u: goto label_251ab0;
        case 0x251ab4u: goto label_251ab4;
        case 0x251ab8u: goto label_251ab8;
        case 0x251abcu: goto label_251abc;
        case 0x251ac0u: goto label_251ac0;
        case 0x251ac4u: goto label_251ac4;
        case 0x251ac8u: goto label_251ac8;
        case 0x251accu: goto label_251acc;
        case 0x251ad0u: goto label_251ad0;
        case 0x251ad4u: goto label_251ad4;
        case 0x251ad8u: goto label_251ad8;
        case 0x251adcu: goto label_251adc;
        case 0x251ae0u: goto label_251ae0;
        case 0x251ae4u: goto label_251ae4;
        case 0x251ae8u: goto label_251ae8;
        case 0x251aecu: goto label_251aec;
        case 0x251af0u: goto label_251af0;
        case 0x251af4u: goto label_251af4;
        case 0x251af8u: goto label_251af8;
        case 0x251afcu: goto label_251afc;
        case 0x251b00u: goto label_251b00;
        case 0x251b04u: goto label_251b04;
        case 0x251b08u: goto label_251b08;
        case 0x251b0cu: goto label_251b0c;
        case 0x251b10u: goto label_251b10;
        case 0x251b14u: goto label_251b14;
        case 0x251b18u: goto label_251b18;
        case 0x251b1cu: goto label_251b1c;
        case 0x251b20u: goto label_251b20;
        case 0x251b24u: goto label_251b24;
        case 0x251b28u: goto label_251b28;
        case 0x251b2cu: goto label_251b2c;
        case 0x251b30u: goto label_251b30;
        case 0x251b34u: goto label_251b34;
        case 0x251b38u: goto label_251b38;
        case 0x251b3cu: goto label_251b3c;
        case 0x251b40u: goto label_251b40;
        case 0x251b44u: goto label_251b44;
        case 0x251b48u: goto label_251b48;
        case 0x251b4cu: goto label_251b4c;
        case 0x251b50u: goto label_251b50;
        case 0x251b54u: goto label_251b54;
        case 0x251b58u: goto label_251b58;
        case 0x251b5cu: goto label_251b5c;
        case 0x251b60u: goto label_251b60;
        case 0x251b64u: goto label_251b64;
        case 0x251b68u: goto label_251b68;
        case 0x251b6cu: goto label_251b6c;
        case 0x251b70u: goto label_251b70;
        case 0x251b74u: goto label_251b74;
        case 0x251b78u: goto label_251b78;
        case 0x251b7cu: goto label_251b7c;
        case 0x251b80u: goto label_251b80;
        case 0x251b84u: goto label_251b84;
        case 0x251b88u: goto label_251b88;
        case 0x251b8cu: goto label_251b8c;
        case 0x251b90u: goto label_251b90;
        case 0x251b94u: goto label_251b94;
        case 0x251b98u: goto label_251b98;
        case 0x251b9cu: goto label_251b9c;
        case 0x251ba0u: goto label_251ba0;
        case 0x251ba4u: goto label_251ba4;
        case 0x251ba8u: goto label_251ba8;
        case 0x251bacu: goto label_251bac;
        case 0x251bb0u: goto label_251bb0;
        case 0x251bb4u: goto label_251bb4;
        case 0x251bb8u: goto label_251bb8;
        case 0x251bbcu: goto label_251bbc;
        case 0x251bc0u: goto label_251bc0;
        case 0x251bc4u: goto label_251bc4;
        case 0x251bc8u: goto label_251bc8;
        case 0x251bccu: goto label_251bcc;
        case 0x251bd0u: goto label_251bd0;
        case 0x251bd4u: goto label_251bd4;
        case 0x251bd8u: goto label_251bd8;
        case 0x251bdcu: goto label_251bdc;
        case 0x251be0u: goto label_251be0;
        case 0x251be4u: goto label_251be4;
        case 0x251be8u: goto label_251be8;
        case 0x251becu: goto label_251bec;
        case 0x251bf0u: goto label_251bf0;
        case 0x251bf4u: goto label_251bf4;
        case 0x251bf8u: goto label_251bf8;
        case 0x251bfcu: goto label_251bfc;
        case 0x251c00u: goto label_251c00;
        case 0x251c04u: goto label_251c04;
        case 0x251c08u: goto label_251c08;
        case 0x251c0cu: goto label_251c0c;
        case 0x251c10u: goto label_251c10;
        case 0x251c14u: goto label_251c14;
        case 0x251c18u: goto label_251c18;
        case 0x251c1cu: goto label_251c1c;
        case 0x251c20u: goto label_251c20;
        case 0x251c24u: goto label_251c24;
        case 0x251c28u: goto label_251c28;
        case 0x251c2cu: goto label_251c2c;
        case 0x251c30u: goto label_251c30;
        case 0x251c34u: goto label_251c34;
        case 0x251c38u: goto label_251c38;
        case 0x251c3cu: goto label_251c3c;
        case 0x251c40u: goto label_251c40;
        case 0x251c44u: goto label_251c44;
        case 0x251c48u: goto label_251c48;
        case 0x251c4cu: goto label_251c4c;
        case 0x251c50u: goto label_251c50;
        case 0x251c54u: goto label_251c54;
        case 0x251c58u: goto label_251c58;
        case 0x251c5cu: goto label_251c5c;
        case 0x251c60u: goto label_251c60;
        case 0x251c64u: goto label_251c64;
        case 0x251c68u: goto label_251c68;
        case 0x251c6cu: goto label_251c6c;
        case 0x251c70u: goto label_251c70;
        case 0x251c74u: goto label_251c74;
        case 0x251c78u: goto label_251c78;
        case 0x251c7cu: goto label_251c7c;
        case 0x251c80u: goto label_251c80;
        case 0x251c84u: goto label_251c84;
        case 0x251c88u: goto label_251c88;
        case 0x251c8cu: goto label_251c8c;
        case 0x251c90u: goto label_251c90;
        case 0x251c94u: goto label_251c94;
        case 0x251c98u: goto label_251c98;
        case 0x251c9cu: goto label_251c9c;
        case 0x251ca0u: goto label_251ca0;
        case 0x251ca4u: goto label_251ca4;
        case 0x251ca8u: goto label_251ca8;
        case 0x251cacu: goto label_251cac;
        case 0x251cb0u: goto label_251cb0;
        case 0x251cb4u: goto label_251cb4;
        case 0x251cb8u: goto label_251cb8;
        case 0x251cbcu: goto label_251cbc;
        case 0x251cc0u: goto label_251cc0;
        case 0x251cc4u: goto label_251cc4;
        case 0x251cc8u: goto label_251cc8;
        case 0x251cccu: goto label_251ccc;
        case 0x251cd0u: goto label_251cd0;
        case 0x251cd4u: goto label_251cd4;
        case 0x251cd8u: goto label_251cd8;
        case 0x251cdcu: goto label_251cdc;
        case 0x251ce0u: goto label_251ce0;
        case 0x251ce4u: goto label_251ce4;
        case 0x251ce8u: goto label_251ce8;
        case 0x251cecu: goto label_251cec;
        case 0x251cf0u: goto label_251cf0;
        case 0x251cf4u: goto label_251cf4;
        case 0x251cf8u: goto label_251cf8;
        case 0x251cfcu: goto label_251cfc;
        case 0x251d00u: goto label_251d00;
        case 0x251d04u: goto label_251d04;
        case 0x251d08u: goto label_251d08;
        case 0x251d0cu: goto label_251d0c;
        case 0x251d10u: goto label_251d10;
        case 0x251d14u: goto label_251d14;
        case 0x251d18u: goto label_251d18;
        case 0x251d1cu: goto label_251d1c;
        case 0x251d20u: goto label_251d20;
        case 0x251d24u: goto label_251d24;
        case 0x251d28u: goto label_251d28;
        case 0x251d2cu: goto label_251d2c;
        case 0x251d30u: goto label_251d30;
        case 0x251d34u: goto label_251d34;
        case 0x251d38u: goto label_251d38;
        case 0x251d3cu: goto label_251d3c;
        case 0x251d40u: goto label_251d40;
        case 0x251d44u: goto label_251d44;
        case 0x251d48u: goto label_251d48;
        case 0x251d4cu: goto label_251d4c;
        case 0x251d50u: goto label_251d50;
        case 0x251d54u: goto label_251d54;
        case 0x251d58u: goto label_251d58;
        case 0x251d5cu: goto label_251d5c;
        case 0x251d60u: goto label_251d60;
        case 0x251d64u: goto label_251d64;
        case 0x251d68u: goto label_251d68;
        case 0x251d6cu: goto label_251d6c;
        case 0x251d70u: goto label_251d70;
        case 0x251d74u: goto label_251d74;
        case 0x251d78u: goto label_251d78;
        case 0x251d7cu: goto label_251d7c;
        case 0x251d80u: goto label_251d80;
        case 0x251d84u: goto label_251d84;
        case 0x251d88u: goto label_251d88;
        case 0x251d8cu: goto label_251d8c;
        case 0x251d90u: goto label_251d90;
        case 0x251d94u: goto label_251d94;
        case 0x251d98u: goto label_251d98;
        case 0x251d9cu: goto label_251d9c;
        case 0x251da0u: goto label_251da0;
        case 0x251da4u: goto label_251da4;
        case 0x251da8u: goto label_251da8;
        case 0x251dacu: goto label_251dac;
        case 0x251db0u: goto label_251db0;
        case 0x251db4u: goto label_251db4;
        case 0x251db8u: goto label_251db8;
        case 0x251dbcu: goto label_251dbc;
        case 0x251dc0u: goto label_251dc0;
        case 0x251dc4u: goto label_251dc4;
        case 0x251dc8u: goto label_251dc8;
        case 0x251dccu: goto label_251dcc;
        case 0x251dd0u: goto label_251dd0;
        case 0x251dd4u: goto label_251dd4;
        case 0x251dd8u: goto label_251dd8;
        case 0x251ddcu: goto label_251ddc;
        case 0x251de0u: goto label_251de0;
        case 0x251de4u: goto label_251de4;
        case 0x251de8u: goto label_251de8;
        case 0x251decu: goto label_251dec;
        case 0x251df0u: goto label_251df0;
        case 0x251df4u: goto label_251df4;
        case 0x251df8u: goto label_251df8;
        case 0x251dfcu: goto label_251dfc;
        case 0x251e00u: goto label_251e00;
        case 0x251e04u: goto label_251e04;
        case 0x251e08u: goto label_251e08;
        case 0x251e0cu: goto label_251e0c;
        case 0x251e10u: goto label_251e10;
        case 0x251e14u: goto label_251e14;
        case 0x251e18u: goto label_251e18;
        case 0x251e1cu: goto label_251e1c;
        case 0x251e20u: goto label_251e20;
        case 0x251e24u: goto label_251e24;
        case 0x251e28u: goto label_251e28;
        case 0x251e2cu: goto label_251e2c;
        case 0x251e30u: goto label_251e30;
        case 0x251e34u: goto label_251e34;
        case 0x251e38u: goto label_251e38;
        case 0x251e3cu: goto label_251e3c;
        case 0x251e40u: goto label_251e40;
        case 0x251e44u: goto label_251e44;
        case 0x251e48u: goto label_251e48;
        case 0x251e4cu: goto label_251e4c;
        case 0x251e50u: goto label_251e50;
        case 0x251e54u: goto label_251e54;
        case 0x251e58u: goto label_251e58;
        case 0x251e5cu: goto label_251e5c;
        case 0x251e60u: goto label_251e60;
        case 0x251e64u: goto label_251e64;
        case 0x251e68u: goto label_251e68;
        case 0x251e6cu: goto label_251e6c;
        case 0x251e70u: goto label_251e70;
        case 0x251e74u: goto label_251e74;
        case 0x251e78u: goto label_251e78;
        case 0x251e7cu: goto label_251e7c;
        case 0x251e80u: goto label_251e80;
        case 0x251e84u: goto label_251e84;
        case 0x251e88u: goto label_251e88;
        case 0x251e8cu: goto label_251e8c;
        case 0x251e90u: goto label_251e90;
        case 0x251e94u: goto label_251e94;
        case 0x251e98u: goto label_251e98;
        case 0x251e9cu: goto label_251e9c;
        case 0x251ea0u: goto label_251ea0;
        case 0x251ea4u: goto label_251ea4;
        case 0x251ea8u: goto label_251ea8;
        case 0x251eacu: goto label_251eac;
        case 0x251eb0u: goto label_251eb0;
        case 0x251eb4u: goto label_251eb4;
        case 0x251eb8u: goto label_251eb8;
        case 0x251ebcu: goto label_251ebc;
        case 0x251ec0u: goto label_251ec0;
        case 0x251ec4u: goto label_251ec4;
        case 0x251ec8u: goto label_251ec8;
        case 0x251eccu: goto label_251ecc;
        case 0x251ed0u: goto label_251ed0;
        case 0x251ed4u: goto label_251ed4;
        case 0x251ed8u: goto label_251ed8;
        case 0x251edcu: goto label_251edc;
        case 0x251ee0u: goto label_251ee0;
        case 0x251ee4u: goto label_251ee4;
        case 0x251ee8u: goto label_251ee8;
        case 0x251eecu: goto label_251eec;
        case 0x251ef0u: goto label_251ef0;
        case 0x251ef4u: goto label_251ef4;
        case 0x251ef8u: goto label_251ef8;
        case 0x251efcu: goto label_251efc;
        case 0x251f00u: goto label_251f00;
        case 0x251f04u: goto label_251f04;
        case 0x251f08u: goto label_251f08;
        case 0x251f0cu: goto label_251f0c;
        case 0x251f10u: goto label_251f10;
        case 0x251f14u: goto label_251f14;
        case 0x251f18u: goto label_251f18;
        case 0x251f1cu: goto label_251f1c;
        case 0x251f20u: goto label_251f20;
        case 0x251f24u: goto label_251f24;
        case 0x251f28u: goto label_251f28;
        case 0x251f2cu: goto label_251f2c;
        case 0x251f30u: goto label_251f30;
        case 0x251f34u: goto label_251f34;
        case 0x251f38u: goto label_251f38;
        case 0x251f3cu: goto label_251f3c;
        case 0x251f40u: goto label_251f40;
        case 0x251f44u: goto label_251f44;
        case 0x251f48u: goto label_251f48;
        case 0x251f4cu: goto label_251f4c;
        case 0x251f50u: goto label_251f50;
        case 0x251f54u: goto label_251f54;
        case 0x251f58u: goto label_251f58;
        case 0x251f5cu: goto label_251f5c;
        case 0x251f60u: goto label_251f60;
        case 0x251f64u: goto label_251f64;
        case 0x251f68u: goto label_251f68;
        case 0x251f6cu: goto label_251f6c;
        case 0x251f70u: goto label_251f70;
        case 0x251f74u: goto label_251f74;
        case 0x251f78u: goto label_251f78;
        case 0x251f7cu: goto label_251f7c;
        case 0x251f80u: goto label_251f80;
        case 0x251f84u: goto label_251f84;
        case 0x251f88u: goto label_251f88;
        case 0x251f8cu: goto label_251f8c;
        case 0x251f90u: goto label_251f90;
        case 0x251f94u: goto label_251f94;
        case 0x251f98u: goto label_251f98;
        case 0x251f9cu: goto label_251f9c;
        case 0x251fa0u: goto label_251fa0;
        case 0x251fa4u: goto label_251fa4;
        case 0x251fa8u: goto label_251fa8;
        case 0x251facu: goto label_251fac;
        case 0x251fb0u: goto label_251fb0;
        case 0x251fb4u: goto label_251fb4;
        case 0x251fb8u: goto label_251fb8;
        case 0x251fbcu: goto label_251fbc;
        case 0x251fc0u: goto label_251fc0;
        case 0x251fc4u: goto label_251fc4;
        case 0x251fc8u: goto label_251fc8;
        case 0x251fccu: goto label_251fcc;
        case 0x251fd0u: goto label_251fd0;
        case 0x251fd4u: goto label_251fd4;
        case 0x251fd8u: goto label_251fd8;
        case 0x251fdcu: goto label_251fdc;
        case 0x251fe0u: goto label_251fe0;
        case 0x251fe4u: goto label_251fe4;
        case 0x251fe8u: goto label_251fe8;
        case 0x251fecu: goto label_251fec;
        default: return;
    }

label_251820:
    // 0x251820: 0x0  nop
    ctx->pc = 0x251820u;
    // NOP
label_251824:
    // 0x251824: 0x0  nop
    ctx->pc = 0x251824u;
    // NOP
label_251828:
    // 0x251828: 0x0  nop
    ctx->pc = 0x251828u;
    // NOP
label_25182c:
    // 0x25182c: 0x0  nop
    ctx->pc = 0x25182cu;
    // NOP
label_251830:
    // 0x251830: 0x0  nop
    ctx->pc = 0x251830u;
    // NOP
label_251834:
    // 0x251834: 0x0  nop
    ctx->pc = 0x251834u;
    // NOP
label_251838:
    // 0x251838: 0x0  nop
    ctx->pc = 0x251838u;
    // NOP
label_25183c:
    // 0x25183c: 0x0  nop
    ctx->pc = 0x25183cu;
    // NOP
label_251840:
    // 0x251840: 0x0  nop
    ctx->pc = 0x251840u;
    // NOP
label_251844:
    // 0x251844: 0x0  nop
    ctx->pc = 0x251844u;
    // NOP
label_251848:
    // 0x251848: 0x0  nop
    ctx->pc = 0x251848u;
    // NOP
label_25184c:
    // 0x25184c: 0x0  nop
    ctx->pc = 0x25184cu;
    // NOP
label_251850:
    // 0x251850: 0x0  nop
    ctx->pc = 0x251850u;
    // NOP
label_251854:
    // 0x251854: 0x0  nop
    ctx->pc = 0x251854u;
    // NOP
label_251858:
    // 0x251858: 0x0  nop
    ctx->pc = 0x251858u;
    // NOP
label_25185c:
    // 0x25185c: 0x0  nop
    ctx->pc = 0x25185cu;
    // NOP
label_251860:
    // 0x251860: 0x0  nop
    ctx->pc = 0x251860u;
    // NOP
label_251864:
    // 0x251864: 0x0  nop
    ctx->pc = 0x251864u;
    // NOP
label_251868:
    // 0x251868: 0x0  nop
    ctx->pc = 0x251868u;
    // NOP
label_25186c:
    // 0x25186c: 0x0  nop
    ctx->pc = 0x25186cu;
    // NOP
label_251870:
    // 0x251870: 0x0  nop
    ctx->pc = 0x251870u;
    // NOP
label_251874:
    // 0x251874: 0x0  nop
    ctx->pc = 0x251874u;
    // NOP
label_251878:
    // 0x251878: 0x5b2  tlt         $zero, $zero, 22
    ctx->pc = 0x251878u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25187c:
    // 0x25187c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x25187cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_251880:
    // 0x251880: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251880u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_251884:
    // 0x251884: 0x0  nop
    ctx->pc = 0x251884u;
    // NOP
label_251888:
    // 0x251888: 0x0  nop
    ctx->pc = 0x251888u;
    // NOP
label_25188c:
    // 0x25188c: 0x0  nop
    ctx->pc = 0x25188cu;
    // NOP
label_251890:
    // 0x251890: 0x0  nop
    ctx->pc = 0x251890u;
    // NOP
label_251894:
    // 0x251894: 0x0  nop
    ctx->pc = 0x251894u;
    // NOP
label_251898:
    // 0x251898: 0x0  nop
    ctx->pc = 0x251898u;
    // NOP
label_25189c:
    // 0x25189c: 0x0  nop
    ctx->pc = 0x25189cu;
    // NOP
label_2518a0:
    // 0x2518a0: 0x0  nop
    ctx->pc = 0x2518a0u;
    // NOP
label_2518a4:
    // 0x2518a4: 0x0  nop
    ctx->pc = 0x2518a4u;
    // NOP
label_2518a8:
    // 0x2518a8: 0x0  nop
    ctx->pc = 0x2518a8u;
    // NOP
label_2518ac:
    // 0x2518ac: 0x0  nop
    ctx->pc = 0x2518acu;
    // NOP
label_2518b0:
    // 0x2518b0: 0x0  nop
    ctx->pc = 0x2518b0u;
    // NOP
label_2518b4:
    // 0x2518b4: 0x0  nop
    ctx->pc = 0x2518b4u;
    // NOP
label_2518b8:
    // 0x2518b8: 0x0  nop
    ctx->pc = 0x2518b8u;
    // NOP
label_2518bc:
    // 0x2518bc: 0x0  nop
    ctx->pc = 0x2518bcu;
    // NOP
label_2518c0:
    // 0x2518c0: 0x0  nop
    ctx->pc = 0x2518c0u;
    // NOP
label_2518c4:
    // 0x2518c4: 0x0  nop
    ctx->pc = 0x2518c4u;
    // NOP
label_2518c8:
    // 0x2518c8: 0x0  nop
    ctx->pc = 0x2518c8u;
    // NOP
label_2518cc:
    // 0x2518cc: 0x0  nop
    ctx->pc = 0x2518ccu;
    // NOP
label_2518d0:
    // 0x2518d0: 0x0  nop
    ctx->pc = 0x2518d0u;
    // NOP
label_2518d4:
    // 0x2518d4: 0x0  nop
    ctx->pc = 0x2518d4u;
    // NOP
label_2518d8:
    // 0x2518d8: 0x0  nop
    ctx->pc = 0x2518d8u;
    // NOP
label_2518dc:
    // 0x2518dc: 0x0  nop
    ctx->pc = 0x2518dcu;
    // NOP
label_2518e0:
    // 0x2518e0: 0x0  nop
    ctx->pc = 0x2518e0u;
    // NOP
label_2518e4:
    // 0x2518e4: 0x0  nop
    ctx->pc = 0x2518e4u;
    // NOP
label_2518e8:
    // 0x2518e8: 0x0  nop
    ctx->pc = 0x2518e8u;
    // NOP
label_2518ec:
    // 0x2518ec: 0x0  nop
    ctx->pc = 0x2518ecu;
    // NOP
label_2518f0:
    // 0x2518f0: 0x0  nop
    ctx->pc = 0x2518f0u;
    // NOP
label_2518f4:
    // 0x2518f4: 0x0  nop
    ctx->pc = 0x2518f4u;
    // NOP
label_2518f8:
    // 0x2518f8: 0x0  nop
    ctx->pc = 0x2518f8u;
    // NOP
label_2518fc:
    // 0x2518fc: 0x0  nop
    ctx->pc = 0x2518fcu;
    // NOP
label_251900:
    // 0x251900: 0x0  nop
    ctx->pc = 0x251900u;
    // NOP
label_251904:
    // 0x251904: 0x0  nop
    ctx->pc = 0x251904u;
    // NOP
label_251908:
    // 0x251908: 0x0  nop
    ctx->pc = 0x251908u;
    // NOP
label_25190c:
    // 0x25190c: 0x0  nop
    ctx->pc = 0x25190cu;
    // NOP
label_251910:
    // 0x251910: 0x0  nop
    ctx->pc = 0x251910u;
    // NOP
label_251914:
    // 0x251914: 0x0  nop
    ctx->pc = 0x251914u;
    // NOP
label_251918:
    // 0x251918: 0x0  nop
    ctx->pc = 0x251918u;
    // NOP
label_25191c:
    // 0x25191c: 0x0  nop
    ctx->pc = 0x25191cu;
    // NOP
label_251920:
    // 0x251920: 0x0  nop
    ctx->pc = 0x251920u;
    // NOP
label_251924:
    // 0x251924: 0x0  nop
    ctx->pc = 0x251924u;
    // NOP
label_251928:
    // 0x251928: 0x0  nop
    ctx->pc = 0x251928u;
    // NOP
label_25192c:
    // 0x25192c: 0x0  nop
    ctx->pc = 0x25192cu;
    // NOP
label_251930:
    // 0x251930: 0x0  nop
    ctx->pc = 0x251930u;
    // NOP
label_251934:
    // 0x251934: 0x0  nop
    ctx->pc = 0x251934u;
    // NOP
label_251938:
    // 0x251938: 0x0  nop
    ctx->pc = 0x251938u;
    // NOP
label_25193c:
    // 0x25193c: 0x0  nop
    ctx->pc = 0x25193cu;
    // NOP
label_251940:
    // 0x251940: 0x0  nop
    ctx->pc = 0x251940u;
    // NOP
label_251944:
    // 0x251944: 0x0  nop
    ctx->pc = 0x251944u;
    // NOP
label_251948:
    // 0x251948: 0x0  nop
    ctx->pc = 0x251948u;
    // NOP
label_25194c:
    // 0x25194c: 0x0  nop
    ctx->pc = 0x25194cu;
    // NOP
label_251950:
    // 0x251950: 0x5b3  tltu        $zero, $zero, 22
    ctx->pc = 0x251950u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_251954:
    // 0x251954: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x251954u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_251958:
    // 0x251958: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251958u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25195c:
    // 0x25195c: 0x0  nop
    ctx->pc = 0x25195cu;
    // NOP
label_251960:
    // 0x251960: 0x0  nop
    ctx->pc = 0x251960u;
    // NOP
label_251964:
    // 0x251964: 0x0  nop
    ctx->pc = 0x251964u;
    // NOP
label_251968:
    // 0x251968: 0x0  nop
    ctx->pc = 0x251968u;
    // NOP
label_25196c:
    // 0x25196c: 0x0  nop
    ctx->pc = 0x25196cu;
    // NOP
label_251970:
    // 0x251970: 0x0  nop
    ctx->pc = 0x251970u;
    // NOP
label_251974:
    // 0x251974: 0x0  nop
    ctx->pc = 0x251974u;
    // NOP
label_251978:
    // 0x251978: 0x0  nop
    ctx->pc = 0x251978u;
    // NOP
label_25197c:
    // 0x25197c: 0x0  nop
    ctx->pc = 0x25197cu;
    // NOP
label_251980:
    // 0x251980: 0x0  nop
    ctx->pc = 0x251980u;
    // NOP
label_251984:
    // 0x251984: 0x0  nop
    ctx->pc = 0x251984u;
    // NOP
label_251988:
    // 0x251988: 0x0  nop
    ctx->pc = 0x251988u;
    // NOP
label_25198c:
    // 0x25198c: 0x0  nop
    ctx->pc = 0x25198cu;
    // NOP
label_251990:
    // 0x251990: 0x0  nop
    ctx->pc = 0x251990u;
    // NOP
label_251994:
    // 0x251994: 0x0  nop
    ctx->pc = 0x251994u;
    // NOP
label_251998:
    // 0x251998: 0x0  nop
    ctx->pc = 0x251998u;
    // NOP
label_25199c:
    // 0x25199c: 0x0  nop
    ctx->pc = 0x25199cu;
    // NOP
label_2519a0:
    // 0x2519a0: 0x0  nop
    ctx->pc = 0x2519a0u;
    // NOP
label_2519a4:
    // 0x2519a4: 0x0  nop
    ctx->pc = 0x2519a4u;
    // NOP
label_2519a8:
    // 0x2519a8: 0x0  nop
    ctx->pc = 0x2519a8u;
    // NOP
label_2519ac:
    // 0x2519ac: 0x0  nop
    ctx->pc = 0x2519acu;
    // NOP
label_2519b0:
    // 0x2519b0: 0x0  nop
    ctx->pc = 0x2519b0u;
    // NOP
label_2519b4:
    // 0x2519b4: 0x0  nop
    ctx->pc = 0x2519b4u;
    // NOP
label_2519b8:
    // 0x2519b8: 0x0  nop
    ctx->pc = 0x2519b8u;
    // NOP
label_2519bc:
    // 0x2519bc: 0x0  nop
    ctx->pc = 0x2519bcu;
    // NOP
label_2519c0:
    // 0x2519c0: 0x0  nop
    ctx->pc = 0x2519c0u;
    // NOP
label_2519c4:
    // 0x2519c4: 0x0  nop
    ctx->pc = 0x2519c4u;
    // NOP
label_2519c8:
    // 0x2519c8: 0x0  nop
    ctx->pc = 0x2519c8u;
    // NOP
label_2519cc:
    // 0x2519cc: 0x0  nop
    ctx->pc = 0x2519ccu;
    // NOP
label_2519d0:
    // 0x2519d0: 0x0  nop
    ctx->pc = 0x2519d0u;
    // NOP
label_2519d4:
    // 0x2519d4: 0x0  nop
    ctx->pc = 0x2519d4u;
    // NOP
label_2519d8:
    // 0x2519d8: 0x0  nop
    ctx->pc = 0x2519d8u;
    // NOP
label_2519dc:
    // 0x2519dc: 0x0  nop
    ctx->pc = 0x2519dcu;
    // NOP
label_2519e0:
    // 0x2519e0: 0x0  nop
    ctx->pc = 0x2519e0u;
    // NOP
label_2519e4:
    // 0x2519e4: 0x0  nop
    ctx->pc = 0x2519e4u;
    // NOP
label_2519e8:
    // 0x2519e8: 0x0  nop
    ctx->pc = 0x2519e8u;
    // NOP
label_2519ec:
    // 0x2519ec: 0x0  nop
    ctx->pc = 0x2519ecu;
    // NOP
label_2519f0:
    // 0x2519f0: 0x0  nop
    ctx->pc = 0x2519f0u;
    // NOP
label_2519f4:
    // 0x2519f4: 0x0  nop
    ctx->pc = 0x2519f4u;
    // NOP
label_2519f8:
    // 0x2519f8: 0x0  nop
    ctx->pc = 0x2519f8u;
    // NOP
label_2519fc:
    // 0x2519fc: 0x0  nop
    ctx->pc = 0x2519fcu;
    // NOP
label_251a00:
    // 0x251a00: 0x0  nop
    ctx->pc = 0x251a00u;
    // NOP
label_251a04:
    // 0x251a04: 0x0  nop
    ctx->pc = 0x251a04u;
    // NOP
label_251a08:
    // 0x251a08: 0x0  nop
    ctx->pc = 0x251a08u;
    // NOP
label_251a0c:
    // 0x251a0c: 0x0  nop
    ctx->pc = 0x251a0cu;
    // NOP
label_251a10:
    // 0x251a10: 0x0  nop
    ctx->pc = 0x251a10u;
    // NOP
label_251a14:
    // 0x251a14: 0x0  nop
    ctx->pc = 0x251a14u;
    // NOP
label_251a18:
    // 0x251a18: 0x0  nop
    ctx->pc = 0x251a18u;
    // NOP
label_251a1c:
    // 0x251a1c: 0x0  nop
    ctx->pc = 0x251a1cu;
    // NOP
label_251a20:
    // 0x251a20: 0x0  nop
    ctx->pc = 0x251a20u;
    // NOP
label_251a24:
    // 0x251a24: 0x0  nop
    ctx->pc = 0x251a24u;
    // NOP
label_251a28:
    // 0x251a28: 0x5b4  teq         $zero, $zero, 22
    ctx->pc = 0x251a28u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_251a2c:
    // 0x251a2c: 0x8  jr          $zero
label_251a30:
    if (ctx->pc == 0x251A30u) {
        ctx->pc = 0x251A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A2Cu;
        // 0x251a30: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A34u;
        goto label_251a34;
    }
    ctx->pc = 0x251A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A2Cu;
        // 0x251a30: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251A2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251A34u;
label_251a34:
    // 0x251a34: 0x0  nop
    ctx->pc = 0x251a34u;
    // NOP
label_251a38:
    // 0x251a38: 0x0  nop
    ctx->pc = 0x251a38u;
    // NOP
label_251a3c:
    // 0x251a3c: 0x0  nop
    ctx->pc = 0x251a3cu;
    // NOP
label_251a40:
    // 0x251a40: 0x0  nop
    ctx->pc = 0x251a40u;
    // NOP
label_251a44:
    // 0x251a44: 0x0  nop
    ctx->pc = 0x251a44u;
    // NOP
label_251a48:
    // 0x251a48: 0x0  nop
    ctx->pc = 0x251a48u;
    // NOP
label_251a4c:
    // 0x251a4c: 0x0  nop
    ctx->pc = 0x251a4cu;
    // NOP
label_251a50:
    // 0x251a50: 0x0  nop
    ctx->pc = 0x251a50u;
    // NOP
label_251a54:
    // 0x251a54: 0x0  nop
    ctx->pc = 0x251a54u;
    // NOP
label_251a58:
    // 0x251a58: 0x0  nop
    ctx->pc = 0x251a58u;
    // NOP
label_251a5c:
    // 0x251a5c: 0x0  nop
    ctx->pc = 0x251a5cu;
    // NOP
label_251a60:
    // 0x251a60: 0x0  nop
    ctx->pc = 0x251a60u;
    // NOP
label_251a64:
    // 0x251a64: 0x0  nop
    ctx->pc = 0x251a64u;
    // NOP
label_251a68:
    // 0x251a68: 0x0  nop
    ctx->pc = 0x251a68u;
    // NOP
label_251a6c:
    // 0x251a6c: 0x0  nop
    ctx->pc = 0x251a6cu;
    // NOP
label_251a70:
    // 0x251a70: 0x0  nop
    ctx->pc = 0x251a70u;
    // NOP
label_251a74:
    // 0x251a74: 0x0  nop
    ctx->pc = 0x251a74u;
    // NOP
label_251a78:
    // 0x251a78: 0x0  nop
    ctx->pc = 0x251a78u;
    // NOP
label_251a7c:
    // 0x251a7c: 0x0  nop
    ctx->pc = 0x251a7cu;
    // NOP
label_251a80:
    // 0x251a80: 0x0  nop
    ctx->pc = 0x251a80u;
    // NOP
label_251a84:
    // 0x251a84: 0x0  nop
    ctx->pc = 0x251a84u;
    // NOP
label_251a88:
    // 0x251a88: 0x0  nop
    ctx->pc = 0x251a88u;
    // NOP
label_251a8c:
    // 0x251a8c: 0x0  nop
    ctx->pc = 0x251a8cu;
    // NOP
label_251a90:
    // 0x251a90: 0x0  nop
    ctx->pc = 0x251a90u;
    // NOP
label_251a94:
    // 0x251a94: 0x0  nop
    ctx->pc = 0x251a94u;
    // NOP
label_251a98:
    // 0x251a98: 0x0  nop
    ctx->pc = 0x251a98u;
    // NOP
label_251a9c:
    // 0x251a9c: 0x0  nop
    ctx->pc = 0x251a9cu;
    // NOP
label_251aa0:
    // 0x251aa0: 0x0  nop
    ctx->pc = 0x251aa0u;
    // NOP
label_251aa4:
    // 0x251aa4: 0x0  nop
    ctx->pc = 0x251aa4u;
    // NOP
label_251aa8:
    // 0x251aa8: 0x0  nop
    ctx->pc = 0x251aa8u;
    // NOP
label_251aac:
    // 0x251aac: 0x0  nop
    ctx->pc = 0x251aacu;
    // NOP
label_251ab0:
    // 0x251ab0: 0x0  nop
    ctx->pc = 0x251ab0u;
    // NOP
label_251ab4:
    // 0x251ab4: 0x0  nop
    ctx->pc = 0x251ab4u;
    // NOP
label_251ab8:
    // 0x251ab8: 0x0  nop
    ctx->pc = 0x251ab8u;
    // NOP
label_251abc:
    // 0x251abc: 0x0  nop
    ctx->pc = 0x251abcu;
    // NOP
label_251ac0:
    // 0x251ac0: 0x0  nop
    ctx->pc = 0x251ac0u;
    // NOP
label_251ac4:
    // 0x251ac4: 0x0  nop
    ctx->pc = 0x251ac4u;
    // NOP
label_251ac8:
    // 0x251ac8: 0x0  nop
    ctx->pc = 0x251ac8u;
    // NOP
label_251acc:
    // 0x251acc: 0x0  nop
    ctx->pc = 0x251accu;
    // NOP
label_251ad0:
    // 0x251ad0: 0x0  nop
    ctx->pc = 0x251ad0u;
    // NOP
label_251ad4:
    // 0x251ad4: 0x0  nop
    ctx->pc = 0x251ad4u;
    // NOP
label_251ad8:
    // 0x251ad8: 0x0  nop
    ctx->pc = 0x251ad8u;
    // NOP
label_251adc:
    // 0x251adc: 0x0  nop
    ctx->pc = 0x251adcu;
    // NOP
label_251ae0:
    // 0x251ae0: 0x0  nop
    ctx->pc = 0x251ae0u;
    // NOP
label_251ae4:
    // 0x251ae4: 0x0  nop
    ctx->pc = 0x251ae4u;
    // NOP
label_251ae8:
    // 0x251ae8: 0x0  nop
    ctx->pc = 0x251ae8u;
    // NOP
label_251aec:
    // 0x251aec: 0x0  nop
    ctx->pc = 0x251aecu;
    // NOP
label_251af0:
    // 0x251af0: 0x0  nop
    ctx->pc = 0x251af0u;
    // NOP
label_251af4:
    // 0x251af4: 0x0  nop
    ctx->pc = 0x251af4u;
    // NOP
label_251af8:
    // 0x251af8: 0x0  nop
    ctx->pc = 0x251af8u;
    // NOP
label_251afc:
    // 0x251afc: 0x0  nop
    ctx->pc = 0x251afcu;
    // NOP
label_251b00:
    // 0x251b00: 0x5b5  .word       0x000005B5                   # INVALID     $zero, $zero, 0x5B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x251B00 raw=0x000005B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251b04:
    // 0x251b04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251b04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x251B04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251b08:
    // 0x251b08: 0x152f30  tge         $zero, $s5, 188
    ctx->pc = 0x251b08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_251b0c:
    // 0x251b0c: 0x0  nop
    ctx->pc = 0x251b0cu;
    // NOP
label_251b10:
    // 0x251b10: 0x0  nop
    ctx->pc = 0x251b10u;
    // NOP
label_251b14:
    // 0x251b14: 0x0  nop
    ctx->pc = 0x251b14u;
    // NOP
label_251b18:
    // 0x251b18: 0x0  nop
    ctx->pc = 0x251b18u;
    // NOP
label_251b1c:
    // 0x251b1c: 0x0  nop
    ctx->pc = 0x251b1cu;
    // NOP
label_251b20:
    // 0x251b20: 0x0  nop
    ctx->pc = 0x251b20u;
    // NOP
label_251b24:
    // 0x251b24: 0x0  nop
    ctx->pc = 0x251b24u;
    // NOP
label_251b28:
    // 0x251b28: 0x0  nop
    ctx->pc = 0x251b28u;
    // NOP
label_251b2c:
    // 0x251b2c: 0x0  nop
    ctx->pc = 0x251b2cu;
    // NOP
label_251b30:
    // 0x251b30: 0x0  nop
    ctx->pc = 0x251b30u;
    // NOP
label_251b34:
    // 0x251b34: 0x0  nop
    ctx->pc = 0x251b34u;
    // NOP
label_251b38:
    // 0x251b38: 0x0  nop
    ctx->pc = 0x251b38u;
    // NOP
label_251b3c:
    // 0x251b3c: 0x0  nop
    ctx->pc = 0x251b3cu;
    // NOP
label_251b40:
    // 0x251b40: 0x0  nop
    ctx->pc = 0x251b40u;
    // NOP
label_251b44:
    // 0x251b44: 0x0  nop
    ctx->pc = 0x251b44u;
    // NOP
label_251b48:
    // 0x251b48: 0x0  nop
    ctx->pc = 0x251b48u;
    // NOP
label_251b4c:
    // 0x251b4c: 0x0  nop
    ctx->pc = 0x251b4cu;
    // NOP
label_251b50:
    // 0x251b50: 0x0  nop
    ctx->pc = 0x251b50u;
    // NOP
label_251b54:
    // 0x251b54: 0x0  nop
    ctx->pc = 0x251b54u;
    // NOP
label_251b58:
    // 0x251b58: 0x0  nop
    ctx->pc = 0x251b58u;
    // NOP
label_251b5c:
    // 0x251b5c: 0x0  nop
    ctx->pc = 0x251b5cu;
    // NOP
label_251b60:
    // 0x251b60: 0x0  nop
    ctx->pc = 0x251b60u;
    // NOP
label_251b64:
    // 0x251b64: 0x0  nop
    ctx->pc = 0x251b64u;
    // NOP
label_251b68:
    // 0x251b68: 0x0  nop
    ctx->pc = 0x251b68u;
    // NOP
label_251b6c:
    // 0x251b6c: 0x0  nop
    ctx->pc = 0x251b6cu;
    // NOP
label_251b70:
    // 0x251b70: 0x0  nop
    ctx->pc = 0x251b70u;
    // NOP
label_251b74:
    // 0x251b74: 0x0  nop
    ctx->pc = 0x251b74u;
    // NOP
label_251b78:
    // 0x251b78: 0x0  nop
    ctx->pc = 0x251b78u;
    // NOP
label_251b7c:
    // 0x251b7c: 0x0  nop
    ctx->pc = 0x251b7cu;
    // NOP
label_251b80:
    // 0x251b80: 0x0  nop
    ctx->pc = 0x251b80u;
    // NOP
label_251b84:
    // 0x251b84: 0x0  nop
    ctx->pc = 0x251b84u;
    // NOP
label_251b88:
    // 0x251b88: 0x0  nop
    ctx->pc = 0x251b88u;
    // NOP
label_251b8c:
    // 0x251b8c: 0x0  nop
    ctx->pc = 0x251b8cu;
    // NOP
label_251b90:
    // 0x251b90: 0x0  nop
    ctx->pc = 0x251b90u;
    // NOP
label_251b94:
    // 0x251b94: 0x0  nop
    ctx->pc = 0x251b94u;
    // NOP
label_251b98:
    // 0x251b98: 0x0  nop
    ctx->pc = 0x251b98u;
    // NOP
label_251b9c:
    // 0x251b9c: 0x0  nop
    ctx->pc = 0x251b9cu;
    // NOP
label_251ba0:
    // 0x251ba0: 0x0  nop
    ctx->pc = 0x251ba0u;
    // NOP
label_251ba4:
    // 0x251ba4: 0x0  nop
    ctx->pc = 0x251ba4u;
    // NOP
label_251ba8:
    // 0x251ba8: 0x0  nop
    ctx->pc = 0x251ba8u;
    // NOP
label_251bac:
    // 0x251bac: 0x0  nop
    ctx->pc = 0x251bacu;
    // NOP
label_251bb0:
    // 0x251bb0: 0x0  nop
    ctx->pc = 0x251bb0u;
    // NOP
label_251bb4:
    // 0x251bb4: 0x0  nop
    ctx->pc = 0x251bb4u;
    // NOP
label_251bb8:
    // 0x251bb8: 0x0  nop
    ctx->pc = 0x251bb8u;
    // NOP
label_251bbc:
    // 0x251bbc: 0x0  nop
    ctx->pc = 0x251bbcu;
    // NOP
label_251bc0:
    // 0x251bc0: 0x0  nop
    ctx->pc = 0x251bc0u;
    // NOP
label_251bc4:
    // 0x251bc4: 0x0  nop
    ctx->pc = 0x251bc4u;
    // NOP
label_251bc8:
    // 0x251bc8: 0x0  nop
    ctx->pc = 0x251bc8u;
    // NOP
label_251bcc:
    // 0x251bcc: 0x0  nop
    ctx->pc = 0x251bccu;
    // NOP
label_251bd0:
    // 0x251bd0: 0x0  nop
    ctx->pc = 0x251bd0u;
    // NOP
label_251bd4:
    // 0x251bd4: 0x0  nop
    ctx->pc = 0x251bd4u;
    // NOP
label_251bd8:
    // 0x251bd8: 0x5b6  tne         $zero, $zero, 22
    ctx->pc = 0x251bd8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_251bdc:
    // 0x251bdc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x251bdcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_251be0:
    // 0x251be0: 0x152f30  tge         $zero, $s5, 188
    ctx->pc = 0x251be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_251be4:
    // 0x251be4: 0x0  nop
    ctx->pc = 0x251be4u;
    // NOP
label_251be8:
    // 0x251be8: 0x0  nop
    ctx->pc = 0x251be8u;
    // NOP
label_251bec:
    // 0x251bec: 0x0  nop
    ctx->pc = 0x251becu;
    // NOP
label_251bf0:
    // 0x251bf0: 0x0  nop
    ctx->pc = 0x251bf0u;
    // NOP
label_251bf4:
    // 0x251bf4: 0x0  nop
    ctx->pc = 0x251bf4u;
    // NOP
label_251bf8:
    // 0x251bf8: 0x0  nop
    ctx->pc = 0x251bf8u;
    // NOP
label_251bfc:
    // 0x251bfc: 0x0  nop
    ctx->pc = 0x251bfcu;
    // NOP
label_251c00:
    // 0x251c00: 0x0  nop
    ctx->pc = 0x251c00u;
    // NOP
label_251c04:
    // 0x251c04: 0x0  nop
    ctx->pc = 0x251c04u;
    // NOP
label_251c08:
    // 0x251c08: 0x0  nop
    ctx->pc = 0x251c08u;
    // NOP
label_251c0c:
    // 0x251c0c: 0x0  nop
    ctx->pc = 0x251c0cu;
    // NOP
label_251c10:
    // 0x251c10: 0x0  nop
    ctx->pc = 0x251c10u;
    // NOP
label_251c14:
    // 0x251c14: 0x0  nop
    ctx->pc = 0x251c14u;
    // NOP
label_251c18:
    // 0x251c18: 0x0  nop
    ctx->pc = 0x251c18u;
    // NOP
label_251c1c:
    // 0x251c1c: 0x0  nop
    ctx->pc = 0x251c1cu;
    // NOP
label_251c20:
    // 0x251c20: 0x0  nop
    ctx->pc = 0x251c20u;
    // NOP
label_251c24:
    // 0x251c24: 0x0  nop
    ctx->pc = 0x251c24u;
    // NOP
label_251c28:
    // 0x251c28: 0x0  nop
    ctx->pc = 0x251c28u;
    // NOP
label_251c2c:
    // 0x251c2c: 0x0  nop
    ctx->pc = 0x251c2cu;
    // NOP
label_251c30:
    // 0x251c30: 0x0  nop
    ctx->pc = 0x251c30u;
    // NOP
label_251c34:
    // 0x251c34: 0x0  nop
    ctx->pc = 0x251c34u;
    // NOP
label_251c38:
    // 0x251c38: 0x0  nop
    ctx->pc = 0x251c38u;
    // NOP
label_251c3c:
    // 0x251c3c: 0x0  nop
    ctx->pc = 0x251c3cu;
    // NOP
label_251c40:
    // 0x251c40: 0x0  nop
    ctx->pc = 0x251c40u;
    // NOP
label_251c44:
    // 0x251c44: 0x0  nop
    ctx->pc = 0x251c44u;
    // NOP
label_251c48:
    // 0x251c48: 0x0  nop
    ctx->pc = 0x251c48u;
    // NOP
label_251c4c:
    // 0x251c4c: 0x0  nop
    ctx->pc = 0x251c4cu;
    // NOP
label_251c50:
    // 0x251c50: 0x0  nop
    ctx->pc = 0x251c50u;
    // NOP
label_251c54:
    // 0x251c54: 0x0  nop
    ctx->pc = 0x251c54u;
    // NOP
label_251c58:
    // 0x251c58: 0x0  nop
    ctx->pc = 0x251c58u;
    // NOP
label_251c5c:
    // 0x251c5c: 0x0  nop
    ctx->pc = 0x251c5cu;
    // NOP
label_251c60:
    // 0x251c60: 0x0  nop
    ctx->pc = 0x251c60u;
    // NOP
label_251c64:
    // 0x251c64: 0x0  nop
    ctx->pc = 0x251c64u;
    // NOP
label_251c68:
    // 0x251c68: 0x0  nop
    ctx->pc = 0x251c68u;
    // NOP
label_251c6c:
    // 0x251c6c: 0x0  nop
    ctx->pc = 0x251c6cu;
    // NOP
label_251c70:
    // 0x251c70: 0x0  nop
    ctx->pc = 0x251c70u;
    // NOP
label_251c74:
    // 0x251c74: 0x0  nop
    ctx->pc = 0x251c74u;
    // NOP
label_251c78:
    // 0x251c78: 0x0  nop
    ctx->pc = 0x251c78u;
    // NOP
label_251c7c:
    // 0x251c7c: 0x0  nop
    ctx->pc = 0x251c7cu;
    // NOP
label_251c80:
    // 0x251c80: 0x0  nop
    ctx->pc = 0x251c80u;
    // NOP
label_251c84:
    // 0x251c84: 0x0  nop
    ctx->pc = 0x251c84u;
    // NOP
label_251c88:
    // 0x251c88: 0x0  nop
    ctx->pc = 0x251c88u;
    // NOP
label_251c8c:
    // 0x251c8c: 0x0  nop
    ctx->pc = 0x251c8cu;
    // NOP
label_251c90:
    // 0x251c90: 0x0  nop
    ctx->pc = 0x251c90u;
    // NOP
label_251c94:
    // 0x251c94: 0x0  nop
    ctx->pc = 0x251c94u;
    // NOP
label_251c98:
    // 0x251c98: 0x0  nop
    ctx->pc = 0x251c98u;
    // NOP
label_251c9c:
    // 0x251c9c: 0x0  nop
    ctx->pc = 0x251c9cu;
    // NOP
label_251ca0:
    // 0x251ca0: 0x0  nop
    ctx->pc = 0x251ca0u;
    // NOP
label_251ca4:
    // 0x251ca4: 0x0  nop
    ctx->pc = 0x251ca4u;
    // NOP
label_251ca8:
    // 0x251ca8: 0x0  nop
    ctx->pc = 0x251ca8u;
    // NOP
label_251cac:
    // 0x251cac: 0x0  nop
    ctx->pc = 0x251cacu;
    // NOP
label_251cb0:
    // 0x251cb0: 0x5b7  .word       0x000005B7                   # INVALID     $zero, $zero, 0x5B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x251CB0 raw=0x000005B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251cb4:
    // 0x251cb4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_251cb8:
    // 0x251cb8: 0x152f30  tge         $zero, $s5, 188
    ctx->pc = 0x251cb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_251cbc:
    // 0x251cbc: 0x0  nop
    ctx->pc = 0x251cbcu;
    // NOP
label_251cc0:
    // 0x251cc0: 0x0  nop
    ctx->pc = 0x251cc0u;
    // NOP
label_251cc4:
    // 0x251cc4: 0x0  nop
    ctx->pc = 0x251cc4u;
    // NOP
label_251cc8:
    // 0x251cc8: 0x0  nop
    ctx->pc = 0x251cc8u;
    // NOP
label_251ccc:
    // 0x251ccc: 0x0  nop
    ctx->pc = 0x251cccu;
    // NOP
label_251cd0:
    // 0x251cd0: 0x0  nop
    ctx->pc = 0x251cd0u;
    // NOP
label_251cd4:
    // 0x251cd4: 0x0  nop
    ctx->pc = 0x251cd4u;
    // NOP
label_251cd8:
    // 0x251cd8: 0x0  nop
    ctx->pc = 0x251cd8u;
    // NOP
label_251cdc:
    // 0x251cdc: 0x0  nop
    ctx->pc = 0x251cdcu;
    // NOP
label_251ce0:
    // 0x251ce0: 0x0  nop
    ctx->pc = 0x251ce0u;
    // NOP
label_251ce4:
    // 0x251ce4: 0x0  nop
    ctx->pc = 0x251ce4u;
    // NOP
label_251ce8:
    // 0x251ce8: 0x0  nop
    ctx->pc = 0x251ce8u;
    // NOP
label_251cec:
    // 0x251cec: 0x0  nop
    ctx->pc = 0x251cecu;
    // NOP
label_251cf0:
    // 0x251cf0: 0x0  nop
    ctx->pc = 0x251cf0u;
    // NOP
label_251cf4:
    // 0x251cf4: 0x0  nop
    ctx->pc = 0x251cf4u;
    // NOP
label_251cf8:
    // 0x251cf8: 0x0  nop
    ctx->pc = 0x251cf8u;
    // NOP
label_251cfc:
    // 0x251cfc: 0x0  nop
    ctx->pc = 0x251cfcu;
    // NOP
label_251d00:
    // 0x251d00: 0x0  nop
    ctx->pc = 0x251d00u;
    // NOP
label_251d04:
    // 0x251d04: 0x0  nop
    ctx->pc = 0x251d04u;
    // NOP
label_251d08:
    // 0x251d08: 0x0  nop
    ctx->pc = 0x251d08u;
    // NOP
label_251d0c:
    // 0x251d0c: 0x0  nop
    ctx->pc = 0x251d0cu;
    // NOP
label_251d10:
    // 0x251d10: 0x0  nop
    ctx->pc = 0x251d10u;
    // NOP
label_251d14:
    // 0x251d14: 0x0  nop
    ctx->pc = 0x251d14u;
    // NOP
label_251d18:
    // 0x251d18: 0x0  nop
    ctx->pc = 0x251d18u;
    // NOP
label_251d1c:
    // 0x251d1c: 0x0  nop
    ctx->pc = 0x251d1cu;
    // NOP
label_251d20:
    // 0x251d20: 0x0  nop
    ctx->pc = 0x251d20u;
    // NOP
label_251d24:
    // 0x251d24: 0x0  nop
    ctx->pc = 0x251d24u;
    // NOP
label_251d28:
    // 0x251d28: 0x0  nop
    ctx->pc = 0x251d28u;
    // NOP
label_251d2c:
    // 0x251d2c: 0x0  nop
    ctx->pc = 0x251d2cu;
    // NOP
label_251d30:
    // 0x251d30: 0x0  nop
    ctx->pc = 0x251d30u;
    // NOP
label_251d34:
    // 0x251d34: 0x0  nop
    ctx->pc = 0x251d34u;
    // NOP
label_251d38:
    // 0x251d38: 0x0  nop
    ctx->pc = 0x251d38u;
    // NOP
label_251d3c:
    // 0x251d3c: 0x0  nop
    ctx->pc = 0x251d3cu;
    // NOP
label_251d40:
    // 0x251d40: 0x0  nop
    ctx->pc = 0x251d40u;
    // NOP
label_251d44:
    // 0x251d44: 0x0  nop
    ctx->pc = 0x251d44u;
    // NOP
label_251d48:
    // 0x251d48: 0x0  nop
    ctx->pc = 0x251d48u;
    // NOP
label_251d4c:
    // 0x251d4c: 0x0  nop
    ctx->pc = 0x251d4cu;
    // NOP
label_251d50:
    // 0x251d50: 0x0  nop
    ctx->pc = 0x251d50u;
    // NOP
label_251d54:
    // 0x251d54: 0x0  nop
    ctx->pc = 0x251d54u;
    // NOP
label_251d58:
    // 0x251d58: 0x0  nop
    ctx->pc = 0x251d58u;
    // NOP
label_251d5c:
    // 0x251d5c: 0x0  nop
    ctx->pc = 0x251d5cu;
    // NOP
label_251d60:
    // 0x251d60: 0x0  nop
    ctx->pc = 0x251d60u;
    // NOP
label_251d64:
    // 0x251d64: 0x0  nop
    ctx->pc = 0x251d64u;
    // NOP
label_251d68:
    // 0x251d68: 0x0  nop
    ctx->pc = 0x251d68u;
    // NOP
label_251d6c:
    // 0x251d6c: 0x0  nop
    ctx->pc = 0x251d6cu;
    // NOP
label_251d70:
    // 0x251d70: 0x0  nop
    ctx->pc = 0x251d70u;
    // NOP
label_251d74:
    // 0x251d74: 0x0  nop
    ctx->pc = 0x251d74u;
    // NOP
label_251d78:
    // 0x251d78: 0x0  nop
    ctx->pc = 0x251d78u;
    // NOP
label_251d7c:
    // 0x251d7c: 0x0  nop
    ctx->pc = 0x251d7cu;
    // NOP
label_251d80:
    // 0x251d80: 0x0  nop
    ctx->pc = 0x251d80u;
    // NOP
label_251d84:
    // 0x251d84: 0x0  nop
    ctx->pc = 0x251d84u;
    // NOP
label_251d88:
    // 0x251d88: 0x5b8  dsll        $zero, $zero, 22
    ctx->pc = 0x251d88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 22);
label_251d8c:
    // 0x251d8c: 0x8  jr          $zero
label_251d90:
    if (ctx->pc == 0x251D90u) {
        ctx->pc = 0x251D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D8Cu;
        // 0x251d90: 0x152f30  tge         $zero, $s5, 188 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x251D94u;
        goto label_251d94;
    }
    ctx->pc = 0x251D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D8Cu;
        // 0x251d90: 0x152f30  tge         $zero, $s5, 188 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251D94u;
label_251d94:
    // 0x251d94: 0x0  nop
    ctx->pc = 0x251d94u;
    // NOP
label_251d98:
    // 0x251d98: 0x0  nop
    ctx->pc = 0x251d98u;
    // NOP
label_251d9c:
    // 0x251d9c: 0x0  nop
    ctx->pc = 0x251d9cu;
    // NOP
label_251da0:
    // 0x251da0: 0x0  nop
    ctx->pc = 0x251da0u;
    // NOP
label_251da4:
    // 0x251da4: 0x0  nop
    ctx->pc = 0x251da4u;
    // NOP
label_251da8:
    // 0x251da8: 0x0  nop
    ctx->pc = 0x251da8u;
    // NOP
label_251dac:
    // 0x251dac: 0x0  nop
    ctx->pc = 0x251dacu;
    // NOP
label_251db0:
    // 0x251db0: 0x0  nop
    ctx->pc = 0x251db0u;
    // NOP
label_251db4:
    // 0x251db4: 0x0  nop
    ctx->pc = 0x251db4u;
    // NOP
label_251db8:
    // 0x251db8: 0x0  nop
    ctx->pc = 0x251db8u;
    // NOP
label_251dbc:
    // 0x251dbc: 0x0  nop
    ctx->pc = 0x251dbcu;
    // NOP
label_251dc0:
    // 0x251dc0: 0x0  nop
    ctx->pc = 0x251dc0u;
    // NOP
label_251dc4:
    // 0x251dc4: 0x0  nop
    ctx->pc = 0x251dc4u;
    // NOP
label_251dc8:
    // 0x251dc8: 0x0  nop
    ctx->pc = 0x251dc8u;
    // NOP
label_251dcc:
    // 0x251dcc: 0x0  nop
    ctx->pc = 0x251dccu;
    // NOP
label_251dd0:
    // 0x251dd0: 0x0  nop
    ctx->pc = 0x251dd0u;
    // NOP
label_251dd4:
    // 0x251dd4: 0x0  nop
    ctx->pc = 0x251dd4u;
    // NOP
label_251dd8:
    // 0x251dd8: 0x0  nop
    ctx->pc = 0x251dd8u;
    // NOP
label_251ddc:
    // 0x251ddc: 0x0  nop
    ctx->pc = 0x251ddcu;
    // NOP
label_251de0:
    // 0x251de0: 0x0  nop
    ctx->pc = 0x251de0u;
    // NOP
label_251de4:
    // 0x251de4: 0x0  nop
    ctx->pc = 0x251de4u;
    // NOP
label_251de8:
    // 0x251de8: 0x0  nop
    ctx->pc = 0x251de8u;
    // NOP
label_251dec:
    // 0x251dec: 0x0  nop
    ctx->pc = 0x251decu;
    // NOP
label_251df0:
    // 0x251df0: 0x0  nop
    ctx->pc = 0x251df0u;
    // NOP
label_251df4:
    // 0x251df4: 0x0  nop
    ctx->pc = 0x251df4u;
    // NOP
label_251df8:
    // 0x251df8: 0x0  nop
    ctx->pc = 0x251df8u;
    // NOP
label_251dfc:
    // 0x251dfc: 0x0  nop
    ctx->pc = 0x251dfcu;
    // NOP
label_251e00:
    // 0x251e00: 0x0  nop
    ctx->pc = 0x251e00u;
    // NOP
label_251e04:
    // 0x251e04: 0x0  nop
    ctx->pc = 0x251e04u;
    // NOP
label_251e08:
    // 0x251e08: 0x0  nop
    ctx->pc = 0x251e08u;
    // NOP
label_251e0c:
    // 0x251e0c: 0x0  nop
    ctx->pc = 0x251e0cu;
    // NOP
label_251e10:
    // 0x251e10: 0x0  nop
    ctx->pc = 0x251e10u;
    // NOP
label_251e14:
    // 0x251e14: 0x0  nop
    ctx->pc = 0x251e14u;
    // NOP
label_251e18:
    // 0x251e18: 0x0  nop
    ctx->pc = 0x251e18u;
    // NOP
label_251e1c:
    // 0x251e1c: 0x0  nop
    ctx->pc = 0x251e1cu;
    // NOP
label_251e20:
    // 0x251e20: 0x0  nop
    ctx->pc = 0x251e20u;
    // NOP
label_251e24:
    // 0x251e24: 0x0  nop
    ctx->pc = 0x251e24u;
    // NOP
label_251e28:
    // 0x251e28: 0x0  nop
    ctx->pc = 0x251e28u;
    // NOP
label_251e2c:
    // 0x251e2c: 0x0  nop
    ctx->pc = 0x251e2cu;
    // NOP
label_251e30:
    // 0x251e30: 0x0  nop
    ctx->pc = 0x251e30u;
    // NOP
label_251e34:
    // 0x251e34: 0x0  nop
    ctx->pc = 0x251e34u;
    // NOP
label_251e38:
    // 0x251e38: 0x0  nop
    ctx->pc = 0x251e38u;
    // NOP
label_251e3c:
    // 0x251e3c: 0x0  nop
    ctx->pc = 0x251e3cu;
    // NOP
label_251e40:
    // 0x251e40: 0x0  nop
    ctx->pc = 0x251e40u;
    // NOP
label_251e44:
    // 0x251e44: 0x0  nop
    ctx->pc = 0x251e44u;
    // NOP
label_251e48:
    // 0x251e48: 0x0  nop
    ctx->pc = 0x251e48u;
    // NOP
label_251e4c:
    // 0x251e4c: 0x0  nop
    ctx->pc = 0x251e4cu;
    // NOP
label_251e50:
    // 0x251e50: 0x0  nop
    ctx->pc = 0x251e50u;
    // NOP
label_251e54:
    // 0x251e54: 0x0  nop
    ctx->pc = 0x251e54u;
    // NOP
label_251e58:
    // 0x251e58: 0x0  nop
    ctx->pc = 0x251e58u;
    // NOP
label_251e5c:
    // 0x251e5c: 0x0  nop
    ctx->pc = 0x251e5cu;
    // NOP
label_251e60:
    // 0x251e60: 0x5b9  .word       0x000005B9                   # INVALID     $zero, $zero, 0x5B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x251E60 raw=0x000005B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251e64:
    // 0x251e64: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x251e64u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_251e68:
    // 0x251e68: 0x152ed0  .word       0x00152ED0                   # mfhi        $a1 # 001506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251e68u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_251e6c:
    // 0x251e6c: 0x0  nop
    ctx->pc = 0x251e6cu;
    // NOP
label_251e70:
    // 0x251e70: 0x0  nop
    ctx->pc = 0x251e70u;
    // NOP
label_251e74:
    // 0x251e74: 0x0  nop
    ctx->pc = 0x251e74u;
    // NOP
label_251e78:
    // 0x251e78: 0x0  nop
    ctx->pc = 0x251e78u;
    // NOP
label_251e7c:
    // 0x251e7c: 0x0  nop
    ctx->pc = 0x251e7cu;
    // NOP
label_251e80:
    // 0x251e80: 0x0  nop
    ctx->pc = 0x251e80u;
    // NOP
label_251e84:
    // 0x251e84: 0x0  nop
    ctx->pc = 0x251e84u;
    // NOP
label_251e88:
    // 0x251e88: 0x0  nop
    ctx->pc = 0x251e88u;
    // NOP
label_251e8c:
    // 0x251e8c: 0x0  nop
    ctx->pc = 0x251e8cu;
    // NOP
label_251e90:
    // 0x251e90: 0x0  nop
    ctx->pc = 0x251e90u;
    // NOP
label_251e94:
    // 0x251e94: 0x0  nop
    ctx->pc = 0x251e94u;
    // NOP
label_251e98:
    // 0x251e98: 0x0  nop
    ctx->pc = 0x251e98u;
    // NOP
label_251e9c:
    // 0x251e9c: 0x0  nop
    ctx->pc = 0x251e9cu;
    // NOP
label_251ea0:
    // 0x251ea0: 0x0  nop
    ctx->pc = 0x251ea0u;
    // NOP
label_251ea4:
    // 0x251ea4: 0x0  nop
    ctx->pc = 0x251ea4u;
    // NOP
label_251ea8:
    // 0x251ea8: 0x0  nop
    ctx->pc = 0x251ea8u;
    // NOP
label_251eac:
    // 0x251eac: 0x0  nop
    ctx->pc = 0x251eacu;
    // NOP
label_251eb0:
    // 0x251eb0: 0x0  nop
    ctx->pc = 0x251eb0u;
    // NOP
label_251eb4:
    // 0x251eb4: 0x0  nop
    ctx->pc = 0x251eb4u;
    // NOP
label_251eb8:
    // 0x251eb8: 0x0  nop
    ctx->pc = 0x251eb8u;
    // NOP
label_251ebc:
    // 0x251ebc: 0x0  nop
    ctx->pc = 0x251ebcu;
    // NOP
label_251ec0:
    // 0x251ec0: 0x0  nop
    ctx->pc = 0x251ec0u;
    // NOP
label_251ec4:
    // 0x251ec4: 0x0  nop
    ctx->pc = 0x251ec4u;
    // NOP
label_251ec8:
    // 0x251ec8: 0x0  nop
    ctx->pc = 0x251ec8u;
    // NOP
label_251ecc:
    // 0x251ecc: 0x0  nop
    ctx->pc = 0x251eccu;
    // NOP
label_251ed0:
    // 0x251ed0: 0x0  nop
    ctx->pc = 0x251ed0u;
    // NOP
label_251ed4:
    // 0x251ed4: 0x0  nop
    ctx->pc = 0x251ed4u;
    // NOP
label_251ed8:
    // 0x251ed8: 0x0  nop
    ctx->pc = 0x251ed8u;
    // NOP
label_251edc:
    // 0x251edc: 0x0  nop
    ctx->pc = 0x251edcu;
    // NOP
label_251ee0:
    // 0x251ee0: 0x0  nop
    ctx->pc = 0x251ee0u;
    // NOP
label_251ee4:
    // 0x251ee4: 0x0  nop
    ctx->pc = 0x251ee4u;
    // NOP
label_251ee8:
    // 0x251ee8: 0x0  nop
    ctx->pc = 0x251ee8u;
    // NOP
label_251eec:
    // 0x251eec: 0x0  nop
    ctx->pc = 0x251eecu;
    // NOP
label_251ef0:
    // 0x251ef0: 0x0  nop
    ctx->pc = 0x251ef0u;
    // NOP
label_251ef4:
    // 0x251ef4: 0x0  nop
    ctx->pc = 0x251ef4u;
    // NOP
label_251ef8:
    // 0x251ef8: 0x0  nop
    ctx->pc = 0x251ef8u;
    // NOP
label_251efc:
    // 0x251efc: 0x0  nop
    ctx->pc = 0x251efcu;
    // NOP
label_251f00:
    // 0x251f00: 0x0  nop
    ctx->pc = 0x251f00u;
    // NOP
label_251f04:
    // 0x251f04: 0x0  nop
    ctx->pc = 0x251f04u;
    // NOP
label_251f08:
    // 0x251f08: 0x0  nop
    ctx->pc = 0x251f08u;
    // NOP
label_251f0c:
    // 0x251f0c: 0x0  nop
    ctx->pc = 0x251f0cu;
    // NOP
label_251f10:
    // 0x251f10: 0x0  nop
    ctx->pc = 0x251f10u;
    // NOP
label_251f14:
    // 0x251f14: 0x0  nop
    ctx->pc = 0x251f14u;
    // NOP
label_251f18:
    // 0x251f18: 0x0  nop
    ctx->pc = 0x251f18u;
    // NOP
label_251f1c:
    // 0x251f1c: 0x0  nop
    ctx->pc = 0x251f1cu;
    // NOP
label_251f20:
    // 0x251f20: 0x0  nop
    ctx->pc = 0x251f20u;
    // NOP
label_251f24:
    // 0x251f24: 0x0  nop
    ctx->pc = 0x251f24u;
    // NOP
label_251f28:
    // 0x251f28: 0x0  nop
    ctx->pc = 0x251f28u;
    // NOP
label_251f2c:
    // 0x251f2c: 0x0  nop
    ctx->pc = 0x251f2cu;
    // NOP
label_251f30:
    // 0x251f30: 0x0  nop
    ctx->pc = 0x251f30u;
    // NOP
label_251f34:
    // 0x251f34: 0x0  nop
    ctx->pc = 0x251f34u;
    // NOP
label_251f38:
    // 0x251f38: 0x5ba  dsrl        $zero, $zero, 22
    ctx->pc = 0x251f38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 22);
label_251f3c:
    // 0x251f3c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251f3cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_251f40:
    // 0x251f40: 0x152dd0  .word       0x00152DD0                   # mfhi        $a1 # 001505C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251f40u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_251f44:
    // 0x251f44: 0x0  nop
    ctx->pc = 0x251f44u;
    // NOP
label_251f48:
    // 0x251f48: 0x0  nop
    ctx->pc = 0x251f48u;
    // NOP
label_251f4c:
    // 0x251f4c: 0x0  nop
    ctx->pc = 0x251f4cu;
    // NOP
label_251f50:
    // 0x251f50: 0x0  nop
    ctx->pc = 0x251f50u;
    // NOP
label_251f54:
    // 0x251f54: 0x0  nop
    ctx->pc = 0x251f54u;
    // NOP
label_251f58:
    // 0x251f58: 0x0  nop
    ctx->pc = 0x251f58u;
    // NOP
label_251f5c:
    // 0x251f5c: 0x0  nop
    ctx->pc = 0x251f5cu;
    // NOP
label_251f60:
    // 0x251f60: 0x0  nop
    ctx->pc = 0x251f60u;
    // NOP
label_251f64:
    // 0x251f64: 0x0  nop
    ctx->pc = 0x251f64u;
    // NOP
label_251f68:
    // 0x251f68: 0x0  nop
    ctx->pc = 0x251f68u;
    // NOP
label_251f6c:
    // 0x251f6c: 0x0  nop
    ctx->pc = 0x251f6cu;
    // NOP
label_251f70:
    // 0x251f70: 0x0  nop
    ctx->pc = 0x251f70u;
    // NOP
label_251f74:
    // 0x251f74: 0x0  nop
    ctx->pc = 0x251f74u;
    // NOP
label_251f78:
    // 0x251f78: 0x0  nop
    ctx->pc = 0x251f78u;
    // NOP
label_251f7c:
    // 0x251f7c: 0x0  nop
    ctx->pc = 0x251f7cu;
    // NOP
label_251f80:
    // 0x251f80: 0x0  nop
    ctx->pc = 0x251f80u;
    // NOP
label_251f84:
    // 0x251f84: 0x0  nop
    ctx->pc = 0x251f84u;
    // NOP
label_251f88:
    // 0x251f88: 0x0  nop
    ctx->pc = 0x251f88u;
    // NOP
label_251f8c:
    // 0x251f8c: 0x0  nop
    ctx->pc = 0x251f8cu;
    // NOP
label_251f90:
    // 0x251f90: 0x0  nop
    ctx->pc = 0x251f90u;
    // NOP
label_251f94:
    // 0x251f94: 0x0  nop
    ctx->pc = 0x251f94u;
    // NOP
label_251f98:
    // 0x251f98: 0x0  nop
    ctx->pc = 0x251f98u;
    // NOP
label_251f9c:
    // 0x251f9c: 0x0  nop
    ctx->pc = 0x251f9cu;
    // NOP
label_251fa0:
    // 0x251fa0: 0x0  nop
    ctx->pc = 0x251fa0u;
    // NOP
label_251fa4:
    // 0x251fa4: 0x0  nop
    ctx->pc = 0x251fa4u;
    // NOP
label_251fa8:
    // 0x251fa8: 0x0  nop
    ctx->pc = 0x251fa8u;
    // NOP
label_251fac:
    // 0x251fac: 0x0  nop
    ctx->pc = 0x251facu;
    // NOP
label_251fb0:
    // 0x251fb0: 0x0  nop
    ctx->pc = 0x251fb0u;
    // NOP
label_251fb4:
    // 0x251fb4: 0x0  nop
    ctx->pc = 0x251fb4u;
    // NOP
label_251fb8:
    // 0x251fb8: 0x0  nop
    ctx->pc = 0x251fb8u;
    // NOP
label_251fbc:
    // 0x251fbc: 0x0  nop
    ctx->pc = 0x251fbcu;
    // NOP
label_251fc0:
    // 0x251fc0: 0x0  nop
    ctx->pc = 0x251fc0u;
    // NOP
label_251fc4:
    // 0x251fc4: 0x0  nop
    ctx->pc = 0x251fc4u;
    // NOP
label_251fc8:
    // 0x251fc8: 0x0  nop
    ctx->pc = 0x251fc8u;
    // NOP
label_251fcc:
    // 0x251fcc: 0x0  nop
    ctx->pc = 0x251fccu;
    // NOP
label_251fd0:
    // 0x251fd0: 0x0  nop
    ctx->pc = 0x251fd0u;
    // NOP
label_251fd4:
    // 0x251fd4: 0x0  nop
    ctx->pc = 0x251fd4u;
    // NOP
label_251fd8:
    // 0x251fd8: 0x0  nop
    ctx->pc = 0x251fd8u;
    // NOP
label_251fdc:
    // 0x251fdc: 0x0  nop
    ctx->pc = 0x251fdcu;
    // NOP
label_251fe0:
    // 0x251fe0: 0x0  nop
    ctx->pc = 0x251fe0u;
    // NOP
label_251fe4:
    // 0x251fe4: 0x0  nop
    ctx->pc = 0x251fe4u;
    // NOP
label_251fe8:
    // 0x251fe8: 0x0  nop
    ctx->pc = 0x251fe8u;
    // NOP
label_251fec:
    // 0x251fec: 0x0  nop
    ctx->pc = 0x251fecu;
    // NOP
    ctx->pc = 0x251ff0u;
    return;
}
