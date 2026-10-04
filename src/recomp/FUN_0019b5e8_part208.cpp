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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        case 0x200828u: goto label_200828;
        case 0x20082cu: goto label_20082c;
        case 0x200830u: goto label_200830;
        case 0x200834u: goto label_200834;
        case 0x200838u: goto label_200838;
        case 0x20083cu: goto label_20083c;
        case 0x200840u: goto label_200840;
        case 0x200844u: goto label_200844;
        case 0x200848u: goto label_200848;
        case 0x20084cu: goto label_20084c;
        case 0x200850u: goto label_200850;
        case 0x200854u: goto label_200854;
        case 0x200858u: goto label_200858;
        case 0x20085cu: goto label_20085c;
        case 0x200860u: goto label_200860;
        case 0x200864u: goto label_200864;
        case 0x200868u: goto label_200868;
        case 0x20086cu: goto label_20086c;
        case 0x200870u: goto label_200870;
        case 0x200874u: goto label_200874;
        case 0x200878u: goto label_200878;
        case 0x20087cu: goto label_20087c;
        case 0x200880u: goto label_200880;
        case 0x200884u: goto label_200884;
        case 0x200888u: goto label_200888;
        case 0x20088cu: goto label_20088c;
        case 0x200890u: goto label_200890;
        case 0x200894u: goto label_200894;
        case 0x200898u: goto label_200898;
        case 0x20089cu: goto label_20089c;
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a4u: goto label_2008a4;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008acu: goto label_2008ac;
        case 0x2008b0u: goto label_2008b0;
        case 0x2008b4u: goto label_2008b4;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008bcu: goto label_2008bc;
        case 0x2008c0u: goto label_2008c0;
        case 0x2008c4u: goto label_2008c4;
        case 0x2008c8u: goto label_2008c8;
        case 0x2008ccu: goto label_2008cc;
        case 0x2008d0u: goto label_2008d0;
        case 0x2008d4u: goto label_2008d4;
        case 0x2008d8u: goto label_2008d8;
        case 0x2008dcu: goto label_2008dc;
        case 0x2008e0u: goto label_2008e0;
        case 0x2008e4u: goto label_2008e4;
        case 0x2008e8u: goto label_2008e8;
        case 0x2008ecu: goto label_2008ec;
        case 0x2008f0u: goto label_2008f0;
        case 0x2008f4u: goto label_2008f4;
        case 0x2008f8u: goto label_2008f8;
        case 0x2008fcu: goto label_2008fc;
        case 0x200900u: goto label_200900;
        case 0x200904u: goto label_200904;
        case 0x200908u: goto label_200908;
        case 0x20090cu: goto label_20090c;
        case 0x200910u: goto label_200910;
        case 0x200914u: goto label_200914;
        case 0x200918u: goto label_200918;
        case 0x20091cu: goto label_20091c;
        case 0x200920u: goto label_200920;
        case 0x200924u: goto label_200924;
        case 0x200928u: goto label_200928;
        case 0x20092cu: goto label_20092c;
        case 0x200930u: goto label_200930;
        case 0x200934u: goto label_200934;
        case 0x200938u: goto label_200938;
        case 0x20093cu: goto label_20093c;
        case 0x200940u: goto label_200940;
        case 0x200944u: goto label_200944;
        case 0x200948u: goto label_200948;
        case 0x20094cu: goto label_20094c;
        case 0x200950u: goto label_200950;
        case 0x200954u: goto label_200954;
        case 0x200958u: goto label_200958;
        case 0x20095cu: goto label_20095c;
        case 0x200960u: goto label_200960;
        case 0x200964u: goto label_200964;
        case 0x200968u: goto label_200968;
        case 0x20096cu: goto label_20096c;
        case 0x200970u: goto label_200970;
        case 0x200974u: goto label_200974;
        case 0x200978u: goto label_200978;
        case 0x20097cu: goto label_20097c;
        case 0x200980u: goto label_200980;
        case 0x200984u: goto label_200984;
        case 0x200988u: goto label_200988;
        case 0x20098cu: goto label_20098c;
        case 0x200990u: goto label_200990;
        case 0x200994u: goto label_200994;
        case 0x200998u: goto label_200998;
        case 0x20099cu: goto label_20099c;
        case 0x2009a0u: goto label_2009a0;
        case 0x2009a4u: goto label_2009a4;
        case 0x2009a8u: goto label_2009a8;
        case 0x2009acu: goto label_2009ac;
        case 0x2009b0u: goto label_2009b0;
        case 0x2009b4u: goto label_2009b4;
        case 0x2009b8u: goto label_2009b8;
        case 0x2009bcu: goto label_2009bc;
        case 0x2009c0u: goto label_2009c0;
        case 0x2009c4u: goto label_2009c4;
        case 0x2009c8u: goto label_2009c8;
        case 0x2009ccu: goto label_2009cc;
        case 0x2009d0u: goto label_2009d0;
        case 0x2009d4u: goto label_2009d4;
        case 0x2009d8u: goto label_2009d8;
        case 0x2009dcu: goto label_2009dc;
        case 0x2009e0u: goto label_2009e0;
        case 0x2009e4u: goto label_2009e4;
        case 0x2009e8u: goto label_2009e8;
        case 0x2009ecu: goto label_2009ec;
        case 0x2009f0u: goto label_2009f0;
        case 0x2009f4u: goto label_2009f4;
        case 0x2009f8u: goto label_2009f8;
        case 0x2009fcu: goto label_2009fc;
        case 0x200a00u: goto label_200a00;
        case 0x200a04u: goto label_200a04;
        case 0x200a08u: goto label_200a08;
        case 0x200a0cu: goto label_200a0c;
        case 0x200a10u: goto label_200a10;
        case 0x200a14u: goto label_200a14;
        case 0x200a18u: goto label_200a18;
        case 0x200a1cu: goto label_200a1c;
        case 0x200a20u: goto label_200a20;
        case 0x200a24u: goto label_200a24;
        case 0x200a28u: goto label_200a28;
        case 0x200a2cu: goto label_200a2c;
        case 0x200a30u: goto label_200a30;
        case 0x200a34u: goto label_200a34;
        case 0x200a38u: goto label_200a38;
        case 0x200a3cu: goto label_200a3c;
        case 0x200a40u: goto label_200a40;
        case 0x200a44u: goto label_200a44;
        case 0x200a48u: goto label_200a48;
        case 0x200a4cu: goto label_200a4c;
        case 0x200a50u: goto label_200a50;
        case 0x200a54u: goto label_200a54;
        case 0x200a58u: goto label_200a58;
        case 0x200a5cu: goto label_200a5c;
        case 0x200a60u: goto label_200a60;
        case 0x200a64u: goto label_200a64;
        case 0x200a68u: goto label_200a68;
        case 0x200a6cu: goto label_200a6c;
        case 0x200a70u: goto label_200a70;
        case 0x200a74u: goto label_200a74;
        case 0x200a78u: goto label_200a78;
        case 0x200a7cu: goto label_200a7c;
        case 0x200a80u: goto label_200a80;
        case 0x200a84u: goto label_200a84;
        case 0x200a88u: goto label_200a88;
        case 0x200a8cu: goto label_200a8c;
        case 0x200a90u: goto label_200a90;
        case 0x200a94u: goto label_200a94;
        case 0x200a98u: goto label_200a98;
        case 0x200a9cu: goto label_200a9c;
        case 0x200aa0u: goto label_200aa0;
        case 0x200aa4u: goto label_200aa4;
        case 0x200aa8u: goto label_200aa8;
        case 0x200aacu: goto label_200aac;
        case 0x200ab0u: goto label_200ab0;
        case 0x200ab4u: goto label_200ab4;
        case 0x200ab8u: goto label_200ab8;
        case 0x200abcu: goto label_200abc;
        case 0x200ac0u: goto label_200ac0;
        case 0x200ac4u: goto label_200ac4;
        case 0x200ac8u: goto label_200ac8;
        case 0x200accu: goto label_200acc;
        case 0x200ad0u: goto label_200ad0;
        case 0x200ad4u: goto label_200ad4;
        case 0x200ad8u: goto label_200ad8;
        case 0x200adcu: goto label_200adc;
        case 0x200ae0u: goto label_200ae0;
        case 0x200ae4u: goto label_200ae4;
        case 0x200ae8u: goto label_200ae8;
        case 0x200aecu: goto label_200aec;
        case 0x200af0u: goto label_200af0;
        case 0x200af4u: goto label_200af4;
        case 0x200af8u: goto label_200af8;
        case 0x200afcu: goto label_200afc;
        case 0x200b00u: goto label_200b00;
        case 0x200b04u: goto label_200b04;
        case 0x200b08u: goto label_200b08;
        case 0x200b0cu: goto label_200b0c;
        case 0x200b10u: goto label_200b10;
        case 0x200b14u: goto label_200b14;
        case 0x200b18u: goto label_200b18;
        case 0x200b1cu: goto label_200b1c;
        case 0x200b20u: goto label_200b20;
        case 0x200b24u: goto label_200b24;
        case 0x200b28u: goto label_200b28;
        case 0x200b2cu: goto label_200b2c;
        case 0x200b30u: goto label_200b30;
        case 0x200b34u: goto label_200b34;
        case 0x200b38u: goto label_200b38;
        case 0x200b3cu: goto label_200b3c;
        case 0x200b40u: goto label_200b40;
        case 0x200b44u: goto label_200b44;
        case 0x200b48u: goto label_200b48;
        case 0x200b4cu: goto label_200b4c;
        case 0x200b50u: goto label_200b50;
        case 0x200b54u: goto label_200b54;
        case 0x200b58u: goto label_200b58;
        case 0x200b5cu: goto label_200b5c;
        case 0x200b60u: goto label_200b60;
        case 0x200b64u: goto label_200b64;
        case 0x200b68u: goto label_200b68;
        case 0x200b6cu: goto label_200b6c;
        case 0x200b70u: goto label_200b70;
        case 0x200b74u: goto label_200b74;
        case 0x200b78u: goto label_200b78;
        case 0x200b7cu: goto label_200b7c;
        case 0x200b80u: goto label_200b80;
        case 0x200b84u: goto label_200b84;
        case 0x200b88u: goto label_200b88;
        case 0x200b8cu: goto label_200b8c;
        case 0x200b90u: goto label_200b90;
        case 0x200b94u: goto label_200b94;
        case 0x200b98u: goto label_200b98;
        case 0x200b9cu: goto label_200b9c;
        case 0x200ba0u: goto label_200ba0;
        case 0x200ba4u: goto label_200ba4;
        case 0x200ba8u: goto label_200ba8;
        case 0x200bacu: goto label_200bac;
        case 0x200bb0u: goto label_200bb0;
        case 0x200bb4u: goto label_200bb4;
        case 0x200bb8u: goto label_200bb8;
        case 0x200bbcu: goto label_200bbc;
        case 0x200bc0u: goto label_200bc0;
        case 0x200bc4u: goto label_200bc4;
        case 0x200bc8u: goto label_200bc8;
        case 0x200bccu: goto label_200bcc;
        case 0x200bd0u: goto label_200bd0;
        case 0x200bd4u: goto label_200bd4;
        case 0x200bd8u: goto label_200bd8;
        case 0x200bdcu: goto label_200bdc;
        case 0x200be0u: goto label_200be0;
        case 0x200be4u: goto label_200be4;
        case 0x200be8u: goto label_200be8;
        case 0x200becu: goto label_200bec;
        case 0x200bf0u: goto label_200bf0;
        case 0x200bf4u: goto label_200bf4;
        case 0x200bf8u: goto label_200bf8;
        case 0x200bfcu: goto label_200bfc;
        case 0x200c00u: goto label_200c00;
        case 0x200c04u: goto label_200c04;
        case 0x200c08u: goto label_200c08;
        case 0x200c0cu: goto label_200c0c;
        case 0x200c10u: goto label_200c10;
        case 0x200c14u: goto label_200c14;
        case 0x200c18u: goto label_200c18;
        case 0x200c1cu: goto label_200c1c;
        case 0x200c20u: goto label_200c20;
        case 0x200c24u: goto label_200c24;
        case 0x200c28u: goto label_200c28;
        case 0x200c2cu: goto label_200c2c;
        case 0x200c30u: goto label_200c30;
        case 0x200c34u: goto label_200c34;
        case 0x200c38u: goto label_200c38;
        case 0x200c3cu: goto label_200c3c;
        case 0x200c40u: goto label_200c40;
        case 0x200c44u: goto label_200c44;
        case 0x200c48u: goto label_200c48;
        case 0x200c4cu: goto label_200c4c;
        case 0x200c50u: goto label_200c50;
        case 0x200c54u: goto label_200c54;
        case 0x200c58u: goto label_200c58;
        case 0x200c5cu: goto label_200c5c;
        case 0x200c60u: goto label_200c60;
        case 0x200c64u: goto label_200c64;
        case 0x200c68u: goto label_200c68;
        case 0x200c6cu: goto label_200c6c;
        case 0x200c70u: goto label_200c70;
        case 0x200c74u: goto label_200c74;
        case 0x200c78u: goto label_200c78;
        case 0x200c7cu: goto label_200c7c;
        case 0x200c80u: goto label_200c80;
        case 0x200c84u: goto label_200c84;
        case 0x200c88u: goto label_200c88;
        case 0x200c8cu: goto label_200c8c;
        case 0x200c90u: goto label_200c90;
        case 0x200c94u: goto label_200c94;
        case 0x200c98u: goto label_200c98;
        case 0x200c9cu: goto label_200c9c;
        case 0x200ca0u: goto label_200ca0;
        case 0x200ca4u: goto label_200ca4;
        case 0x200ca8u: goto label_200ca8;
        case 0x200cacu: goto label_200cac;
        case 0x200cb0u: goto label_200cb0;
        case 0x200cb4u: goto label_200cb4;
        case 0x200cb8u: goto label_200cb8;
        case 0x200cbcu: goto label_200cbc;
        case 0x200cc0u: goto label_200cc0;
        case 0x200cc4u: goto label_200cc4;
        case 0x200cc8u: goto label_200cc8;
        case 0x200cccu: goto label_200ccc;
        case 0x200cd0u: goto label_200cd0;
        case 0x200cd4u: goto label_200cd4;
        case 0x200cd8u: goto label_200cd8;
        case 0x200cdcu: goto label_200cdc;
        case 0x200ce0u: goto label_200ce0;
        case 0x200ce4u: goto label_200ce4;
        case 0x200ce8u: goto label_200ce8;
        case 0x200cecu: goto label_200cec;
        case 0x200cf0u: goto label_200cf0;
        case 0x200cf4u: goto label_200cf4;
        case 0x200cf8u: goto label_200cf8;
        case 0x200cfcu: goto label_200cfc;
        case 0x200d00u: goto label_200d00;
        case 0x200d04u: goto label_200d04;
        case 0x200d08u: goto label_200d08;
        case 0x200d0cu: goto label_200d0c;
        case 0x200d10u: goto label_200d10;
        case 0x200d14u: goto label_200d14;
        case 0x200d18u: goto label_200d18;
        case 0x200d1cu: goto label_200d1c;
        case 0x200d20u: goto label_200d20;
        case 0x200d24u: goto label_200d24;
        case 0x200d28u: goto label_200d28;
        case 0x200d2cu: goto label_200d2c;
        case 0x200d30u: goto label_200d30;
        case 0x200d34u: goto label_200d34;
        case 0x200d38u: goto label_200d38;
        case 0x200d3cu: goto label_200d3c;
        case 0x200d40u: goto label_200d40;
        case 0x200d44u: goto label_200d44;
        case 0x200d48u: goto label_200d48;
        case 0x200d4cu: goto label_200d4c;
        case 0x200d50u: goto label_200d50;
        case 0x200d54u: goto label_200d54;
        case 0x200d58u: goto label_200d58;
        case 0x200d5cu: goto label_200d5c;
        case 0x200d60u: goto label_200d60;
        case 0x200d64u: goto label_200d64;
        case 0x200d68u: goto label_200d68;
        case 0x200d6cu: goto label_200d6c;
        case 0x200d70u: goto label_200d70;
        case 0x200d74u: goto label_200d74;
        case 0x200d78u: goto label_200d78;
        case 0x200d7cu: goto label_200d7c;
        case 0x200d80u: goto label_200d80;
        case 0x200d84u: goto label_200d84;
        case 0x200d88u: goto label_200d88;
        case 0x200d8cu: goto label_200d8c;
        case 0x200d90u: goto label_200d90;
        case 0x200d94u: goto label_200d94;
        case 0x200d98u: goto label_200d98;
        case 0x200d9cu: goto label_200d9c;
        case 0x200da0u: goto label_200da0;
        case 0x200da4u: goto label_200da4;
        case 0x200da8u: goto label_200da8;
        case 0x200dacu: goto label_200dac;
        case 0x200db0u: goto label_200db0;
        case 0x200db4u: goto label_200db4;
        case 0x200db8u: goto label_200db8;
        case 0x200dbcu: goto label_200dbc;
        case 0x200dc0u: goto label_200dc0;
        case 0x200dc4u: goto label_200dc4;
        case 0x200dc8u: goto label_200dc8;
        case 0x200dccu: goto label_200dcc;
        case 0x200dd0u: goto label_200dd0;
        case 0x200dd4u: goto label_200dd4;
        case 0x200dd8u: goto label_200dd8;
        case 0x200ddcu: goto label_200ddc;
        case 0x200de0u: goto label_200de0;
        case 0x200de4u: goto label_200de4;
        case 0x200de8u: goto label_200de8;
        case 0x200decu: goto label_200dec;
        case 0x200df0u: goto label_200df0;
        case 0x200df4u: goto label_200df4;
        case 0x200df8u: goto label_200df8;
        case 0x200dfcu: goto label_200dfc;
        case 0x200e00u: goto label_200e00;
        case 0x200e04u: goto label_200e04;
        case 0x200e08u: goto label_200e08;
        case 0x200e0cu: goto label_200e0c;
        case 0x200e10u: goto label_200e10;
        case 0x200e14u: goto label_200e14;
        case 0x200e18u: goto label_200e18;
        case 0x200e1cu: goto label_200e1c;
        case 0x200e20u: goto label_200e20;
        case 0x200e24u: goto label_200e24;
        case 0x200e28u: goto label_200e28;
        case 0x200e2cu: goto label_200e2c;
        case 0x200e30u: goto label_200e30;
        case 0x200e34u: goto label_200e34;
        case 0x200e38u: goto label_200e38;
        case 0x200e3cu: goto label_200e3c;
        case 0x200e40u: goto label_200e40;
        case 0x200e44u: goto label_200e44;
        case 0x200e48u: goto label_200e48;
        case 0x200e4cu: goto label_200e4c;
        case 0x200e50u: goto label_200e50;
        case 0x200e54u: goto label_200e54;
        case 0x200e58u: goto label_200e58;
        case 0x200e5cu: goto label_200e5c;
        case 0x200e60u: goto label_200e60;
        case 0x200e64u: goto label_200e64;
        case 0x200e68u: goto label_200e68;
        case 0x200e6cu: goto label_200e6c;
        case 0x200e70u: goto label_200e70;
        case 0x200e74u: goto label_200e74;
        case 0x200e78u: goto label_200e78;
        case 0x200e7cu: goto label_200e7c;
        case 0x200e80u: goto label_200e80;
        case 0x200e84u: goto label_200e84;
        case 0x200e88u: goto label_200e88;
        case 0x200e8cu: goto label_200e8c;
        case 0x200e90u: goto label_200e90;
        case 0x200e94u: goto label_200e94;
        case 0x200e98u: goto label_200e98;
        case 0x200e9cu: goto label_200e9c;
        case 0x200ea0u: goto label_200ea0;
        case 0x200ea4u: goto label_200ea4;
        case 0x200ea8u: goto label_200ea8;
        case 0x200eacu: goto label_200eac;
        case 0x200eb0u: goto label_200eb0;
        case 0x200eb4u: goto label_200eb4;
        case 0x200eb8u: goto label_200eb8;
        case 0x200ebcu: goto label_200ebc;
        case 0x200ec0u: goto label_200ec0;
        case 0x200ec4u: goto label_200ec4;
        case 0x200ec8u: goto label_200ec8;
        case 0x200eccu: goto label_200ecc;
        case 0x200ed0u: goto label_200ed0;
        case 0x200ed4u: goto label_200ed4;
        case 0x200ed8u: goto label_200ed8;
        case 0x200edcu: goto label_200edc;
        case 0x200ee0u: goto label_200ee0;
        case 0x200ee4u: goto label_200ee4;
        default: return;
    }

label_200718:
    // 0x200718: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x200718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20071c:
    // 0x20071c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x20071cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200720:
    // 0x200720: 0x0  nop
    ctx->pc = 0x200720u;
    // NOP
label_200724:
    // 0x200724: 0x0  nop
    ctx->pc = 0x200724u;
    // NOP
label_200728:
    // 0x200728: 0x2810  mfhi        $a1
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_20072c:
    // 0x20072c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_200730:
    // 0x200730: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_200734:
    // 0x200734: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_200738:
    // 0x200738: 0xac25276c  sw          $a1, 0x276C($at)
    ctx->pc = 0x200738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 5));
label_20073c:
    // 0x20073c: 0x9205005d  lbu         $a1, 0x5D($s0)
    ctx->pc = 0x20073cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_200740:
    // 0x200740: 0xaf8590d0  sw          $a1, -0x6F30($gp)
    ctx->pc = 0x200740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 5));
label_200744:
    // 0x200744: 0xaf8090cc  sw          $zero, -0x6F34($gp)
    ctx->pc = 0x200744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 0));
label_200748:
    // 0x200748: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_20074c:
    // 0x20074c: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_200750:
    // 0x200750: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_200754:
    // 0x200754: 0x25292740  addiu       $t1, $t1, 0x2740
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10048));
label_200758:
    // 0x200758: 0x2508a230  addiu       $t0, $t0, -0x5DD0
    ctx->pc = 0x200758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943280));
label_20075c:
    // 0x20075c: 0x24c62720  addiu       $a2, $a2, 0x2720
    ctx->pc = 0x20075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10016));
label_200760:
    // 0x200760: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_200764:
    // 0x200764: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_200768:
    // 0x200768: 0x90a7005e  lbu         $a3, 0x5E($a1)
    ctx->pc = 0x200768u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 94)));
label_20076c:
    // 0x20076c: 0x10ea000c  beq         $a3, $t2, . + 4 + (0xC << 2)
label_200770:
    if (ctx->pc == 0x200770u) {
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20076Cu;
        // 0x200770: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200774u;
        goto label_200774;
    }
    ctx->pc = 0x20076Cu;
    {
        const bool branch_taken_0x20076c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20076Cu;
        // 0x200770: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20076c) {
            ctx->pc = 0x2007A0u;
            goto label_2007a0;
        }
    }
    ctx->pc = 0x200774u;
label_200774:
    // 0x200774: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_200778:
    // 0x200778: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x200778u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_20077c:
    // 0x20077c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_200780:
    // 0x200780: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_200784:
    // 0x200784: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_200788:
    // 0x200788: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_20078c:
    // 0x20078c: 0x90e70008  lbu         $a3, 0x8($a3)
    ctx->pc = 0x20078cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_200790:
    // 0x200790: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x200790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_200794:
    // 0x200794: 0x8f8590cc  lw          $a1, -0x6F34($gp)
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938828)));
label_200798:
    // 0x200798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20079c:
    // 0x20079c: 0xaf8590cc  sw          $a1, -0x6F34($gp)
    ctx->pc = 0x20079cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 5));
label_2007a0:
    // 0x2007a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2007a4:
    // 0x2007a4: 0x28650005  slti        $a1, $v1, 0x5
    ctx->pc = 0x2007a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_2007a8:
    // 0x2007a8: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
label_2007ac:
    if (ctx->pc == 0x2007ACu) {
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007B0u;
        goto label_2007b0;
    }
    ctx->pc = 0x2007A8u;
    {
        const bool branch_taken_0x2007a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a8) {
            ctx->pc = 0x200768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200768;
        }
    }
    ctx->pc = 0x2007B0u;
label_2007b0:
    // 0x2007b0: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x2007b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
label_2007b4:
    // 0x2007b4: 0xaf8390c8  sw          $v1, -0x6F38($gp)
    ctx->pc = 0x2007b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 3));
label_2007b8:
    // 0x2007b8: 0x92030069  lbu         $v1, 0x69($s0)
    ctx->pc = 0x2007b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_2007bc:
    // 0x2007bc: 0xaf8390c4  sw          $v1, -0x6F3C($gp)
    ctx->pc = 0x2007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 3));
label_2007c0:
    // 0x2007c0: 0x9203006b  lbu         $v1, 0x6B($s0)
    ctx->pc = 0x2007c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
label_2007c4:
    // 0x2007c4: 0xaf8390c0  sw          $v1, -0x6F40($gp)
    ctx->pc = 0x2007c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938816), GPR_U32(ctx, 3));
label_2007c8:
    // 0x2007c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2007c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2007cc:
    // 0x2007cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2007ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2007d0:
    // 0x2007d0: 0x3e00008  jr          $ra
label_2007d4:
    if (ctx->pc == 0x2007D4u) {
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007D8u;
        goto label_2007d8;
    }
    ctx->pc = 0x2007D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007D8u;
label_2007d8:
    // 0x2007d8: 0x0  nop
    ctx->pc = 0x2007d8u;
    // NOP
label_2007dc:
    // 0x2007dc: 0x0  nop
    ctx->pc = 0x2007dcu;
    // NOP
label_2007e0:
    // 0x2007e0: 0x3e00008  jr          $ra
label_2007e4:
    if (ctx->pc == 0x2007E4u) {
        ctx->pc = 0x2007E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E0u;
        // 0x2007e4: 0xaf8490bc  sw          $a0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007E8u;
        goto label_2007e8;
    }
    ctx->pc = 0x2007E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E0u;
        // 0x2007e4: 0xaf8490bc  sw          $a0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007E8u;
label_2007e8:
    // 0x2007e8: 0x0  nop
    ctx->pc = 0x2007e8u;
    // NOP
label_2007ec:
    // 0x2007ec: 0x0  nop
    ctx->pc = 0x2007ecu;
    // NOP
label_2007f0:
    // 0x2007f0: 0x8f8390e8  lw          $v1, -0x6F18($gp)
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_2007f4:
    // 0x2007f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2007f8:
    if (ctx->pc == 0x2007F8u) {
        ctx->pc = 0x2007FCu;
        goto label_2007fc;
    }
    ctx->pc = 0x2007F4u;
    {
        const bool branch_taken_0x2007f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007f4) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x2007FCu;
label_2007fc:
    // 0x2007fc: 0x8f8390bc  lw          $v1, -0x6F44($gp)
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
label_200800:
    // 0x200800: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
label_200804:
    if (ctx->pc == 0x200804u) {
        ctx->pc = 0x200808u;
        goto label_200808;
    }
    ctx->pc = 0x200800u;
    {
        const bool branch_taken_0x200800 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x200800) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x200808u;
label_200808:
    // 0x200808: 0x8f8490b8  lw          $a0, -0x6F48($gp)
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938808)));
label_20080c:
    // 0x20080c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_200810:
    // 0x200810: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_200814:
    // 0x200814: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x200814u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_200818:
    // 0x200818: 0x0  nop
    ctx->pc = 0x200818u;
    // NOP
label_20081c:
    // 0x20081c: 0x0  nop
    ctx->pc = 0x20081cu;
    // NOP
label_200820:
    // 0x200820: 0x1810  mfhi        $v1
    ctx->pc = 0x200820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_200824:
    // 0x200824: 0xaf8390b8  sw          $v1, -0x6F48($gp)
    ctx->pc = 0x200824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938808), GPR_U32(ctx, 3));
label_200828:
    // 0x200828: 0x8f8490ec  lw          $a0, -0x6F14($gp)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938860)));
label_20082c:
    // 0x20082c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200830:
    // 0x200830: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_200834:
    if (ctx->pc == 0x200834u) {
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200838u;
        goto label_200838;
    }
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200830) {
            ctx->pc = 0x200870u;
            goto label_200870;
        }
    }
    ctx->pc = 0x200838u;
label_200838:
    // 0x200838: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_20083c:
    // 0x20083c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_200840:
    // 0x200840: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x200840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_200844:
    // 0x200844: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_200848:
    if (ctx->pc == 0x200848u) {
        ctx->pc = 0x200848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200844u;
        // 0x200848: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20084Cu;
        goto label_20084c;
    }
    ctx->pc = 0x200844u;
    {
        const bool branch_taken_0x200844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200844u;
        // 0x200848: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200844) {
            ctx->pc = 0x200854u;
            goto label_200854;
        }
    }
    ctx->pc = 0x20084Cu;
label_20084c:
    // 0x20084c: 0x10000002  b           . + 4 + (0x2 << 2)
label_200850:
    if (ctx->pc == 0x200850u) {
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200854u;
        goto label_200854;
    }
    ctx->pc = 0x20084Cu;
    {
        const bool branch_taken_0x20084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20084c) {
            ctx->pc = 0x200858u;
            goto label_200858;
        }
    }
    ctx->pc = 0x200854u;
label_200854:
    // 0x200854: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200858:
    // 0x200858: 0xaf8390e8  sw          $v1, -0x6F18($gp)
    ctx->pc = 0x200858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
label_20085c:
    // 0x20085c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20085cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_200860:
    // 0x200860: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_200864:
    if (ctx->pc == 0x200864u) {
        ctx->pc = 0x200868u;
        goto label_200868;
    }
    ctx->pc = 0x200860u;
    {
        const bool branch_taken_0x200860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200860) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200868u;
label_200868:
    // 0x200868: 0x1000000e  b           . + 4 + (0xE << 2)
label_20086c:
    if (ctx->pc == 0x20086Cu) {
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200868u;
        // 0x20086c: 0xaf8090ec  sw          $zero, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200870u;
        goto label_200870;
    }
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200868u;
        // 0x20086c: 0xaf8090ec  sw          $zero, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200868) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200870u;
label_200870:
    // 0x200870: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_200874:
    if (ctx->pc == 0x200874u) {
        ctx->pc = 0x200878u;
        goto label_200878;
    }
    ctx->pc = 0x200870u;
    {
        const bool branch_taken_0x200870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x200870) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200878u;
label_200878:
    // 0x200878: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_20087c:
    // 0x20087c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_200880:
    // 0x200880: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x200880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_200884:
    // 0x200884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_200888:
    if (ctx->pc == 0x200888u) {
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20088Cu;
        goto label_20088c;
    }
    ctx->pc = 0x200884u;
    {
        const bool branch_taken_0x200884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200884) {
            ctx->pc = 0x200894u;
            goto label_200894;
        }
    }
    ctx->pc = 0x20088Cu;
label_20088c:
    // 0x20088c: 0x10000002  b           . + 4 + (0x2 << 2)
label_200890:
    if (ctx->pc == 0x200890u) {
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200894u;
        goto label_200894;
    }
    ctx->pc = 0x20088Cu;
    {
        const bool branch_taken_0x20088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20088c) {
            ctx->pc = 0x200898u;
            goto label_200898;
        }
    }
    ctx->pc = 0x200894u;
label_200894:
    // 0x200894: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200898:
    // 0x200898: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_20089c:
    if (ctx->pc == 0x20089Cu) {
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008A0u;
        goto label_2008a0;
    }
    ctx->pc = 0x200898u;
    {
        const bool branch_taken_0x200898 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200898) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x2008A0u;
label_2008a0:
    // 0x2008a0: 0xaf8090ec  sw          $zero, -0x6F14($gp)
    ctx->pc = 0x2008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
label_2008a4:
    // 0x2008a4: 0x3e00008  jr          $ra
label_2008a8:
    if (ctx->pc == 0x2008A8u) {
        ctx->pc = 0x2008ACu;
        goto label_2008ac;
    }
    ctx->pc = 0x2008A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008ACu;
label_2008ac:
    // 0x2008ac: 0x0  nop
    ctx->pc = 0x2008acu;
    // NOP
label_2008b0:
    // 0x2008b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2008b4:
    // 0x2008b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2008b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2008b8:
    // 0x2008b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2008b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2008bc:
    // 0x2008bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2008bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2008c0:
    // 0x2008c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2008c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2008c4:
    // 0x2008c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2008c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2008c8:
    // 0x2008c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2008c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2008cc:
    // 0x2008cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2008ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2008d0:
    // 0x2008d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2008d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2008d4:
    // 0x2008d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2008d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2008d8:
    // 0x2008d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2008d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2008dc:
    // 0x2008dc: 0x8f8390e8  lw          $v1, -0x6F18($gp)
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_2008e0:
    // 0x2008e0: 0x10600259  beqz        $v1, . + 4 + (0x259 << 2)
label_2008e4:
    if (ctx->pc == 0x2008E4u) {
        ctx->pc = 0x2008E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E0u;
        // 0x2008e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008E8u;
        goto label_2008e8;
    }
    ctx->pc = 0x2008E0u;
    {
        const bool branch_taken_0x2008e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E0u;
        // 0x2008e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e0) {
            ctx->pc = 0x201248u;
            { ctx->pc = 0x201248; return; }
        }
    }
    ctx->pc = 0x2008E8u;
label_2008e8:
    // 0x2008e8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2008ec:
    // 0x2008ec: 0x8c2d3ffc  lw          $t5, 0x3FFC($at)
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2008f0:
    // 0x2008f0: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_2008f4:
    // 0x2008f4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_2008f8:
    // 0x2008f8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_2008fc:
    // 0x2008fc: 0x344baaab  ori         $t3, $v0, 0xAAAB
    ctx->pc = 0x2008fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_200900:
    // 0x200900: 0x34078ce0  ori         $a3, $zero, 0x8CE0
    ctx->pc = 0x200900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36064);
label_200904:
    // 0x200904: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200908:
    // 0x200908: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_20090c:
    // 0x20090c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200910:
    // 0x200910: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_200914:
    // 0x200914: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x200914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_200918:
    // 0x200918: 0x25082770  addiu       $t0, $t0, 0x2770
    ctx->pc = 0x200918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10096));
label_20091c:
    // 0x20091c: 0x1a76018  mult        $t4, $t5, $a3
    ctx->pc = 0x20091cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_200920:
    // 0x200920: 0xd1140  sll         $v0, $t5, 5
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_200924:
    // 0x200924: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x200924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_200928:
    // 0x200928: 0x25292a70  addiu       $t1, $t1, 0x2A70
    ctx->pc = 0x200928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10864));
label_20092c:
    // 0x20092c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x20092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_200930:
    // 0x200930: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_200934:
    // 0x200934: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_200938:
    // 0x200938: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_20093c:
    // 0x20093c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x20093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_200940:
    // 0x200940: 0x12c8021  addu        $s0, $t1, $t4
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_200944:
    // 0x200944: 0x1640018  mult        $zero, $t3, $a0
    ctx->pc = 0x200944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200948:
    // 0x200948: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20094c:
    // 0x20094c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_200950:
    // 0x200950: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x200950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_200954:
    // 0x200954: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x200954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_200958:
    // 0x200958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20095c:
    // 0x20095c: 0x240701d8  addiu       $a3, $zero, 0x1D8
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_200960:
    // 0x200960: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_200964:
    // 0x200964: 0x1010  mfhi        $v0
    ctx->pc = 0x200964u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_200968:
    // 0x200968: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x200968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20096c:
    // 0x20096c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x20096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_200970:
    // 0x200970: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_200974:
    // 0x200974: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_200978:
    // 0x200978: 0x1660018  mult        $zero, $t3, $a2
    ctx->pc = 0x200978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20097c:
    // 0x20097c: 0x245101c0  addiu       $s1, $v0, 0x1C0
    ctx->pc = 0x20097cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_200980:
    // 0x200980: 0x0  nop
    ctx->pc = 0x200980u;
    // NOP
label_200984:
    // 0x200984: 0x1010  mfhi        $v0
    ctx->pc = 0x200984u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_200988:
    // 0x200988: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x200988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20098c:
    // 0x20098c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20098cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_200990:
    // 0x200990: 0xc07c17c  jal         func_1F05F0
label_200994:
    if (ctx->pc == 0x200994u) {
        ctx->pc = 0x200994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200990u;
        // 0x200994: 0x435021  addu        $t2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200998u;
        goto label_200998;
    }
    ctx->pc = 0x200990u;
    SET_GPR_U32(ctx, 31, 0x200998u);
    ctx->pc = 0x200994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200990u;
    // 0x200994: 0x435021  addu        $t2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x200998u;
label_200998:
    // 0x200998: 0x24037200  addiu       $v1, $zero, 0x7200
    ctx->pc = 0x200998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
label_20099c:
    // 0x20099c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x20099cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_2009a0:
    // 0x2009a0: 0xa6030a30  sh          $v1, 0xA30($s0)
    ctx->pc = 0x2009a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2608), (uint16_t)GPR_U32(ctx, 3));
label_2009a4:
    // 0x2009a4: 0x24527900  addiu       $s2, $v0, 0x7900
    ctx->pc = 0x2009a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_2009a8:
    // 0x2009a8: 0xa6120a32  sh          $s2, 0xA32($s0)
    ctx->pc = 0x2009a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2610), (uint16_t)GPR_U32(ctx, 18));
label_2009ac:
    // 0x2009ac: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x2009acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2009b0:
    // 0x2009b0: 0xae090a34  sw          $t1, 0xA34($s0)
    ctx->pc = 0x2009b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2612), GPR_U32(ctx, 9));
label_2009b4:
    // 0x2009b4: 0x24027600  addiu       $v0, $zero, 0x7600
    ctx->pc = 0x2009b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30208));
label_2009b8:
    // 0x2009b8: 0xa6020a40  sh          $v0, 0xA40($s0)
    ctx->pc = 0x2009b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2624), (uint16_t)GPR_U32(ctx, 2));
label_2009bc:
    // 0x2009bc: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_2009c0:
    // 0x2009c0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2009c4:
    // 0x2009c4: 0x2628000c  addiu       $t0, $s1, 0xC
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2009c8:
    // 0x2009c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2009c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2009cc:
    // 0x2009cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2009ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2009d0:
    // 0x2009d0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_2009d4:
    // 0x2009d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2009d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2009d8:
    // 0x2009d8: 0xa6020a42  sh          $v0, 0xA42($s0)
    ctx->pc = 0x2009d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2626), (uint16_t)GPR_U32(ctx, 2));
label_2009dc:
    // 0x2009dc: 0x2407009c  addiu       $a3, $zero, 0x9C
    ctx->pc = 0x2009dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_2009e0:
    // 0x2009e0: 0xae090a44  sw          $t1, 0xA44($s0)
    ctx->pc = 0x2009e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2628), GPR_U32(ctx, 9));
label_2009e4:
    // 0x2009e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2009e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2009e8:
    // 0x2009e8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2009e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_2009ec:
    // 0x2009ec: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2009f0:
    // 0x2009f0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2009f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2009f4:
    // 0x2009f4: 0x8f8590e4  lw          $a1, -0x6F1C($gp)
    ctx->pc = 0x2009f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938852)));
label_2009f8:
    // 0x2009f8: 0xc054c60  jal         func_153180
label_2009fc:
    if (ctx->pc == 0x2009FCu) {
        ctx->pc = 0x2009FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009F8u;
        // 0x2009fc: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A00u;
        goto label_200a00;
    }
    ctx->pc = 0x2009F8u;
    SET_GPR_U32(ctx, 31, 0x200A00u);
    ctx->pc = 0x2009FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009F8u;
    // 0x2009fc: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x2009F8u, 0x200A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A00u;
label_200a00:
    // 0x200a00: 0x24027680  addiu       $v0, $zero, 0x7680
    ctx->pc = 0x200a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30336));
label_200a04:
    // 0x200a04: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x200a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_200a08:
    // 0x200a08: 0xa6020ba0  sh          $v0, 0xBA0($s0)
    ctx->pc = 0x200a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2976), (uint16_t)GPR_U32(ctx, 2));
label_200a0c:
    // 0x200a0c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x200a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_200a10:
    // 0x200a10: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x200a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200a14:
    // 0x200a14: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_200a18:
    // 0x200a18: 0xa6030ba2  sh          $v1, 0xBA2($s0)
    ctx->pc = 0x200a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2978), (uint16_t)GPR_U32(ctx, 3));
label_200a1c:
    // 0x200a1c: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x200a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200a20:
    // 0x200a20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_200a24:
    // 0x200a24: 0xae040ba4  sw          $a0, 0xBA4($s0)
    ctx->pc = 0x200a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2980), GPR_U32(ctx, 4));
label_200a28:
    // 0x200a28: 0x24037920  addiu       $v1, $zero, 0x7920
    ctx->pc = 0x200a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31008));
label_200a2c:
    // 0x200a2c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x200a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200a30:
    // 0x200a30: 0xa6030bb0  sh          $v1, 0xBB0($s0)
    ctx->pc = 0x200a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2992), (uint16_t)GPR_U32(ctx, 3));
label_200a34:
    // 0x200a34: 0xa6020bb2  sh          $v0, 0xBB2($s0)
    ctx->pc = 0x200a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2994), (uint16_t)GPR_U32(ctx, 2));
label_200a38:
    // 0x200a38: 0xae040bb4  sw          $a0, 0xBB4($s0)
    ctx->pc = 0x200a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2996), GPR_U32(ctx, 4));
label_200a3c:
    // 0x200a3c: 0x8f8690d8  lw          $a2, -0x6F28($gp)
    ctx->pc = 0x200a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
label_200a40:
    // 0x200a40: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_200a44:
    if (ctx->pc == 0x200A44u) {
        ctx->pc = 0x200A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A40u;
        // 0x200a44: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A48u;
        goto label_200a48;
    }
    ctx->pc = 0x200A40u;
    {
        const bool branch_taken_0x200a40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x200A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A40u;
        // 0x200a44: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a40) {
            ctx->pc = 0x200A60u;
            goto label_200a60;
        }
    }
    ctx->pc = 0x200A48u;
label_200a48:
    // 0x200a48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_200a4c:
    // 0x200a4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_200a50:
    // 0x200a50: 0xc08f20e  jal         func_23C838
label_200a54:
    if (ctx->pc == 0x200A54u) {
        ctx->pc = 0x200A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A50u;
        // 0x200a54: 0x24a5d560  addiu       $a1, $a1, -0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A58u;
        goto label_200a58;
    }
    ctx->pc = 0x200A50u;
    SET_GPR_U32(ctx, 31, 0x200A58u);
    ctx->pc = 0x200A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A50u;
    // 0x200a54: 0x24a5d560  addiu       $a1, $a1, -0x2AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x200A58u;
label_200a58:
    // 0x200a58: 0x10000005  b           . + 4 + (0x5 << 2)
label_200a5c:
    if (ctx->pc == 0x200A5Cu) {
        ctx->pc = 0x200A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A58u;
        // 0x200a5c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A60u;
        goto label_200a60;
    }
    ctx->pc = 0x200A58u;
    {
        const bool branch_taken_0x200a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A58u;
        // 0x200a5c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a58) {
            ctx->pc = 0x200A70u;
            goto label_200a70;
        }
    }
    ctx->pc = 0x200A60u;
label_200a60:
    // 0x200a60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x200a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_200a64:
    // 0x200a64: 0xc08f20e  jal         func_23C838
label_200a68:
    if (ctx->pc == 0x200A68u) {
        ctx->pc = 0x200A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A64u;
        // 0x200a68: 0x24a5d568  addiu       $a1, $a1, -0x2A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A6Cu;
        goto label_200a6c;
    }
    ctx->pc = 0x200A64u;
    SET_GPR_U32(ctx, 31, 0x200A6Cu);
    ctx->pc = 0x200A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A64u;
    // 0x200a68: 0x24a5d568  addiu       $a1, $a1, -0x2A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x200A6Cu;
label_200a6c:
    // 0x200a6c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x200a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200a70:
    // 0x200a70: 0x26270028  addiu       $a3, $s1, 0x28
    ctx->pc = 0x200a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_200a74:
    // 0x200a74: 0x26040bc0  addiu       $a0, $s0, 0xBC0
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3008));
label_200a78:
    // 0x200a78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x200a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_200a7c:
    // 0x200a7c: 0x240600d8  addiu       $a2, $zero, 0xD8
    ctx->pc = 0x200a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_200a80:
    // 0x200a80: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200a80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200a84:
    // 0x200a84: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x200a84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_200a88:
    // 0x200a88: 0xc0708ac  jal         func_1C22B0
label_200a8c:
    if (ctx->pc == 0x200A8Cu) {
        ctx->pc = 0x200A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A88u;
        // 0x200a8c: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200A90u;
        goto label_200a90;
    }
    ctx->pc = 0x200A88u;
    SET_GPR_U32(ctx, 31, 0x200A90u);
    ctx->pc = 0x200A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A88u;
    // 0x200a8c: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x200A90u;
label_200a90:
    // 0x200a90: 0x26290038  addiu       $t1, $s1, 0x38
    ctx->pc = 0x200a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_200a94:
    // 0x200a94: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x200a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_200a98:
    // 0x200a98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x200a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_200a9c:
    // 0x200a9c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_200aa0:
    // 0x200aa0: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x200aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_200aa4:
    // 0x200aa4: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x200aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_200aa8:
    // 0x200aa8: 0xc054e5c  jal         func_153970
label_200aac:
    if (ctx->pc == 0x200AACu) {
        ctx->pc = 0x200AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AA8u;
        // 0x200aac: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AB0u;
        goto label_200ab0;
    }
    ctx->pc = 0x200AA8u;
    SET_GPR_U32(ctx, 31, 0x200AB0u);
    ctx->pc = 0x200AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AA8u;
    // 0x200aac: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200AA8u, 0x200AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AB0u;
label_200ab0:
    // 0x200ab0: 0x8f8390dc  lw          $v1, -0x6F24($gp)
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
label_200ab4:
    // 0x200ab4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_200ab8:
    // 0x200ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200abc:
    // 0x200abc: 0x24422e20  addiu       $v0, $v0, 0x2E20
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11808));
label_200ac0:
    // 0x200ac0: 0x26040da0  addiu       $a0, $s0, 0xDA0
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3488));
label_200ac4:
    // 0x200ac4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_200ac8:
    // 0x200ac8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200acc:
    // 0x200acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200ad0:
    // 0x200ad0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x200ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200ad4:
    // 0x200ad4: 0xc054e74  jal         func_1539D0
label_200ad8:
    if (ctx->pc == 0x200AD8u) {
        ctx->pc = 0x200AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AD4u;
        // 0x200ad8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ADCu;
        goto label_200adc;
    }
    ctx->pc = 0x200AD4u;
    SET_GPR_U32(ctx, 31, 0x200ADCu);
    ctx->pc = 0x200AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AD4u;
    // 0x200ad8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x200AD4u, 0x200ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ADCu;
label_200adc:
    // 0x200adc: 0x24027d00  addiu       $v0, $zero, 0x7D00
    ctx->pc = 0x200adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_200ae0:
    // 0x200ae0: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x200ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200ae4:
    // 0x200ae4: 0xa6021cc0  sh          $v0, 0x1CC0($s0)
    ctx->pc = 0x200ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7360), (uint16_t)GPR_U32(ctx, 2));
label_200ae8:
    // 0x200ae8: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x200ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
label_200aec:
    // 0x200aec: 0xa6121cc2  sh          $s2, 0x1CC2($s0)
    ctx->pc = 0x200aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7362), (uint16_t)GPR_U32(ctx, 18));
label_200af0:
    // 0x200af0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x200af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_200af4:
    // 0x200af4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_200af8:
    // 0x200af8: 0xae051cc4  sw          $a1, 0x1CC4($s0)
    ctx->pc = 0x200af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7364), GPR_U32(ctx, 5));
label_200afc:
    // 0x200afc: 0xa6031cd0  sh          $v1, 0x1CD0($s0)
    ctx->pc = 0x200afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7376), (uint16_t)GPR_U32(ctx, 3));
label_200b00:
    // 0x200b00: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x200b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200b04:
    // 0x200b04: 0xa6021cd2  sh          $v0, 0x1CD2($s0)
    ctx->pc = 0x200b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7378), (uint16_t)GPR_U32(ctx, 2));
label_200b08:
    // 0x200b08: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x200b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_200b0c:
    // 0x200b0c: 0xae051cd4  sw          $a1, 0x1CD4($s0)
    ctx->pc = 0x200b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7380), GPR_U32(ctx, 5));
label_200b10:
    // 0x200b10: 0x8f8690d4  lw          $a2, -0x6F2C($gp)
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_200b14:
    // 0x200b14: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x200b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_200b18:
    // 0x200b18: 0xc08f20e  jal         func_23C838
label_200b1c:
    if (ctx->pc == 0x200B1Cu) {
        ctx->pc = 0x200B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B18u;
        // 0x200b1c: 0x24a5d570  addiu       $a1, $a1, -0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B20u;
        goto label_200b20;
    }
    ctx->pc = 0x200B18u;
    SET_GPR_U32(ctx, 31, 0x200B20u);
    ctx->pc = 0x200B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B18u;
    // 0x200b1c: 0x24a5d570  addiu       $a1, $a1, -0x2A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x200B20u;
label_200b20:
    // 0x200b20: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x200b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200b24:
    // 0x200b24: 0x26041ce0  addiu       $a0, $s0, 0x1CE0
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7392));
label_200b28:
    // 0x200b28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x200b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_200b2c:
    // 0x200b2c: 0x24060178  addiu       $a2, $zero, 0x178
    ctx->pc = 0x200b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_200b30:
    // 0x200b30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x200b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200b34:
    // 0x200b34: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200b34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200b38:
    // 0x200b38: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x200b38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_200b3c:
    // 0x200b3c: 0xc0708ac  jal         func_1C22B0
label_200b40:
    if (ctx->pc == 0x200B40u) {
        ctx->pc = 0x200B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B3Cu;
        // 0x200b40: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B44u;
        goto label_200b44;
    }
    ctx->pc = 0x200B3Cu;
    SET_GPR_U32(ctx, 31, 0x200B44u);
    ctx->pc = 0x200B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B3Cu;
    // 0x200b40: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x200B44u;
label_200b44:
    // 0x200b44: 0x24027d00  addiu       $v0, $zero, 0x7D00
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_200b48:
    // 0x200b48: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x200b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_200b4c:
    // 0x200b4c: 0xa6022080  sh          $v0, 0x2080($s0)
    ctx->pc = 0x200b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8320), (uint16_t)GPR_U32(ctx, 2));
label_200b50:
    // 0x200b50: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200b54:
    // 0x200b54: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x200b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_200b58:
    // 0x200b58: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x200b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_200b5c:
    // 0x200b5c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x200b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200b60:
    // 0x200b60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x200b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b64:
    // 0x200b64: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x200b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_200b68:
    // 0x200b68: 0xa6032082  sh          $v1, 0x2082($s0)
    ctx->pc = 0x200b68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8322), (uint16_t)GPR_U32(ctx, 3));
label_200b6c:
    // 0x200b6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x200b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_200b70:
    // 0x200b70: 0xae082084  sw          $t0, 0x2084($s0)
    ctx->pc = 0x200b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8324), GPR_U32(ctx, 8));
label_200b74:
    // 0x200b74: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x200b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200b78:
    // 0x200b78: 0xa6072090  sh          $a3, 0x2090($s0)
    ctx->pc = 0x200b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8336), (uint16_t)GPR_U32(ctx, 7));
label_200b7c:
    // 0x200b7c: 0xa6022092  sh          $v0, 0x2092($s0)
    ctx->pc = 0x200b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8338), (uint16_t)GPR_U32(ctx, 2));
label_200b80:
    // 0x200b80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200b80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b84:
    // 0x200b84: 0xae082094  sw          $t0, 0x2094($s0)
    ctx->pc = 0x200b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8340), GPR_U32(ctx, 8));
label_200b88:
    // 0x200b88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200b88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b8c:
    // 0x200b8c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x200b8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b90:
    // 0x200b90: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x200b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_200b94:
    // 0x200b94: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x200b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_200b98:
    // 0x200b98: 0x34058900  ori         $a1, $zero, 0x8900
    ctx->pc = 0x200b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
label_200b9c:
    // 0x200b9c: 0x24842760  addiu       $a0, $a0, 0x2760
    ctx->pc = 0x200b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10080));
label_200ba0:
    // 0x200ba0: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_200ba4:
    // 0x200ba4: 0x20b6821  addu        $t5, $s0, $t3
    ctx->pc = 0x200ba4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_200ba8:
    // 0x200ba8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x200ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_200bac:
    // 0x200bac: 0xa5a72120  sh          $a3, 0x2120($t5)
    ctx->pc = 0x200bacu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 8480), (uint16_t)GPR_U32(ctx, 7));
label_200bb0:
    // 0x200bb0: 0x244e7900  addiu       $t6, $v0, 0x7900
    ctx->pc = 0x200bb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200bb4:
    // 0x200bb4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_200bb8:
    // 0x200bb8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x200bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_200bbc:
    // 0x200bbc: 0xa5ae2122  sh          $t6, 0x2122($t5)
    ctx->pc = 0x200bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 8482), (uint16_t)GPR_U32(ctx, 14));
label_200bc0:
    // 0x200bc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x200bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_200bc4:
    // 0x200bc4: 0xada82124  sw          $t0, 0x2124($t5)
    ctx->pc = 0x200bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8484), GPR_U32(ctx, 8));
label_200bc8:
    // 0x200bc8: 0x244f7900  addiu       $t7, $v0, 0x7900
    ctx->pc = 0x200bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_200bcc:
    // 0x200bcc: 0xa5a52130  sh          $a1, 0x2130($t5)
    ctx->pc = 0x200bccu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 8496), (uint16_t)GPR_U32(ctx, 5));
label_200bd0:
    // 0x200bd0: 0xa5af2132  sh          $t7, 0x2132($t5)
    ctx->pc = 0x200bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 8498), (uint16_t)GPR_U32(ctx, 15));
label_200bd4:
    // 0x200bd4: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_200bd8:
    // 0x200bd8: 0xada82134  sw          $t0, 0x2134($t5)
    ctx->pc = 0x200bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8500), GPR_U32(ctx, 8));
label_200bdc:
    // 0x200bdc: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x200bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_200be0:
    // 0x200be0: 0xa5a723a0  sh          $a3, 0x23A0($t5)
    ctx->pc = 0x200be0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9120), (uint16_t)GPR_U32(ctx, 7));
label_200be4:
    // 0x200be4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x200be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_200be8:
    // 0x200be8: 0xa5ae23a2  sh          $t6, 0x23A2($t5)
    ctx->pc = 0x200be8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9122), (uint16_t)GPR_U32(ctx, 14));
label_200bec:
    // 0x200bec: 0x256b00a0  addiu       $t3, $t3, 0xA0
    ctx->pc = 0x200becu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 160));
label_200bf0:
    // 0x200bf0: 0xada823a4  sw          $t0, 0x23A4($t5)
    ctx->pc = 0x200bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 9124), GPR_U32(ctx, 8));
label_200bf4:
    // 0x200bf4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_200bf8:
    // 0x200bf8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x200bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_200bfc:
    // 0x200bfc: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x200bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_200c00:
    // 0x200c00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x200c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_200c04:
    // 0x200c04: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x200c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_200c08:
    // 0x200c08: 0xa5a323b0  sh          $v1, 0x23B0($t5)
    ctx->pc = 0x200c08u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9136), (uint16_t)GPR_U32(ctx, 3));
label_200c0c:
    // 0x200c0c: 0xa5af23b2  sh          $t7, 0x23B2($t5)
    ctx->pc = 0x200c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 9138), (uint16_t)GPR_U32(ctx, 15));
label_200c10:
    // 0x200c10: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_200c14:
    if (ctx->pc == 0x200C14u) {
        ctx->pc = 0x200C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C10u;
        // 0x200c14: 0xada823b4  sw          $t0, 0x23B4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 9140), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C18u;
        goto label_200c18;
    }
    ctx->pc = 0x200C10u;
    {
        const bool branch_taken_0x200c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C10u;
        // 0x200c14: 0xada823b4  sw          $t0, 0x23B4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 9140), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c10) {
            ctx->pc = 0x200BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200ba0;
        }
    }
    ctx->pc = 0x200C18u;
label_200c18:
    // 0x200c18: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_200c1c:
    // 0x200c1c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x200c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_200c20:
    // 0x200c20: 0x3445aaab  ori         $a1, $v0, 0xAAAB
    ctx->pc = 0x200c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_200c24:
    // 0x200c24: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x200c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200c28:
    // 0x200c28: 0x8f8290bc  lw          $v0, -0x6F44($gp)
    ctx->pc = 0x200c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
label_200c2c:
    // 0x200c2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_200c30:
    // 0x200c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_200c34:
    // 0x200c34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200c38:
    // 0x200c38: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x200c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_200c3c:
    // 0x200c3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x200c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_200c40:
    // 0x200c40: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x200c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200c44:
    // 0x200c44: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x200c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_200c48:
    // 0x200c48: 0x0  nop
    ctx->pc = 0x200c48u;
    // NOP
label_200c4c:
    // 0x200c4c: 0x1810  mfhi        $v1
    ctx->pc = 0x200c4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_200c50:
    // 0x200c50: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x200c50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_200c54:
    // 0x200c54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_200c58:
    // 0x200c58: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
label_200c5c:
    if (ctx->pc == 0x200C5Cu) {
        ctx->pc = 0x200C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C58u;
        // 0x200c5c: 0x247e0280  addiu       $fp, $v1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C60u;
        goto label_200c60;
    }
    ctx->pc = 0x200C58u;
    {
        const bool branch_taken_0x200c58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x200C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C58u;
        // 0x200c5c: 0x247e0280  addiu       $fp, $v1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c58) {
            ctx->pc = 0x200CE4u;
            goto label_200ce4;
        }
    }
    ctx->pc = 0x200C60u;
label_200c60:
    // 0x200c60: 0x8f8490b8  lw          $a0, -0x6F48($gp)
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938808)));
label_200c64:
    // 0x200c64: 0x28810018  slti        $at, $a0, 0x18
    ctx->pc = 0x200c64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
label_200c68:
    // 0x200c68: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_200c6c:
    if (ctx->pc == 0x200C6Cu) {
        ctx->pc = 0x200C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C68u;
        // 0x200c6c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C70u;
        goto label_200c70;
    }
    ctx->pc = 0x200C68u;
    {
        const bool branch_taken_0x200c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C68u;
        // 0x200c6c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c68) {
            ctx->pc = 0x200C94u;
            goto label_200c94;
        }
    }
    ctx->pc = 0x200C70u;
label_200c70:
    // 0x200c70: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_200c74:
    // 0x200c74: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x200c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200c78:
    // 0x200c78: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_200c7c:
    // 0x200c7c: 0x0  nop
    ctx->pc = 0x200c7cu;
    // NOP
label_200c80:
    // 0x200c80: 0x1810  mfhi        $v1
    ctx->pc = 0x200c80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_200c84:
    // 0x200c84: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x200c84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_200c88:
    // 0x200c88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_200c8c:
    // 0x200c8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_200c90:
    if (ctx->pc == 0x200C90u) {
        ctx->pc = 0x200C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C8Cu;
        // 0x200c90: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C94u;
        goto label_200c94;
    }
    ctx->pc = 0x200C8Cu;
    {
        const bool branch_taken_0x200c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C8Cu;
        // 0x200c90: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c8c) {
            ctx->pc = 0x200CB8u;
            goto label_200cb8;
        }
    }
    ctx->pc = 0x200C94u;
label_200c94:
    // 0x200c94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x200c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_200c98:
    // 0x200c98: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x200c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_200c9c:
    // 0x200c9c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x200c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200ca0:
    // 0x200ca0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x200ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_200ca4:
    // 0x200ca4: 0x0  nop
    ctx->pc = 0x200ca4u;
    // NOP
label_200ca8:
    // 0x200ca8: 0x1810  mfhi        $v1
    ctx->pc = 0x200ca8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_200cac:
    // 0x200cac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x200cacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_200cb0:
    // 0x200cb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_200cb4:
    // 0x200cb4: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x200cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_200cb8:
    // 0x200cb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_200cbc:
    if (ctx->pc == 0x200CBCu) {
        ctx->pc = 0x200CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CB8u;
        // 0x200cbc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CC0u;
        goto label_200cc0;
    }
    ctx->pc = 0x200CB8u;
    {
        const bool branch_taken_0x200cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CB8u;
        // 0x200cbc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cb8) {
            ctx->pc = 0x200CCCu;
            goto label_200ccc;
        }
    }
    ctx->pc = 0x200CC0u;
label_200cc0:
    // 0x200cc0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x200cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_200cc4:
    // 0x200cc4: 0x1000000a  b           . + 4 + (0xA << 2)
label_200cc8:
    if (ctx->pc == 0x200CC8u) {
        ctx->pc = 0x200CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC4u;
        // 0x200cc8: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CCCu;
        goto label_200ccc;
    }
    ctx->pc = 0x200CC4u;
    {
        const bool branch_taken_0x200cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC4u;
        // 0x200cc8: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cc4) {
            ctx->pc = 0x200CF0u;
            goto label_200cf0;
        }
    }
    ctx->pc = 0x200CCCu;
label_200ccc:
    // 0x200ccc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x200cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_200cd0:
    // 0x200cd0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_200cd4:
    // 0x200cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200cd8:
    // 0x200cd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x200cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_200cdc:
    // 0x200cdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_200ce0:
    if (ctx->pc == 0x200CE0u) {
        ctx->pc = 0x200CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CDCu;
        // 0x200ce0: 0x24460098  addiu       $a2, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CE4u;
        goto label_200ce4;
    }
    ctx->pc = 0x200CDCu;
    {
        const bool branch_taken_0x200cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CDCu;
        // 0x200ce0: 0x24460098  addiu       $a2, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cdc) {
            ctx->pc = 0x200CF0u;
            goto label_200cf0;
        }
    }
    ctx->pc = 0x200CE4u;
label_200ce4:
    // 0x200ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200ce8:
    // 0x200ce8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200cec:
    // 0x200cec: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200cf0:
    // 0x200cf0: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x200cf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_200cf4:
    // 0x200cf4: 0x24070088  addiu       $a3, $zero, 0x88
    ctx->pc = 0x200cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_200cf8:
    // 0x200cf8: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
label_200cfc:
    // 0x200cfc: 0xc07c0d0  jal         func_1F0340
label_200d00:
    if (ctx->pc == 0x200D00u) {
        ctx->pc = 0x200D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CFCu;
        // 0x200d00: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D04u;
        goto label_200d04;
    }
    ctx->pc = 0x200CFCu;
    SET_GPR_U32(ctx, 31, 0x200D04u);
    ctx->pc = 0x200D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CFCu;
    // 0x200d00: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x200D04u;
label_200d04:
    // 0x200d04: 0x8f8a90e8  lw          $t2, -0x6F18($gp)
    ctx->pc = 0x200d04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_200d08:
    // 0x200d08: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x200d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_200d0c:
    // 0x200d0c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x200d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_200d10:
    // 0x200d10: 0x26040380  addiu       $a0, $s0, 0x380
    ctx->pc = 0x200d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
label_200d14:
    // 0x200d14: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x200d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_200d18:
    // 0x200d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200d1c:
    // 0x200d1c: 0x24070098  addiu       $a3, $zero, 0x98
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_200d20:
    // 0x200d20: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x200d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200d24:
    // 0x200d24: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200d28:
    // 0x200d28: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x200d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_200d2c:
    // 0x200d2c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_200d30:
    // 0x200d30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x200d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_200d34:
    // 0x200d34: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x200d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200d38:
    // 0x200d38: 0x0  nop
    ctx->pc = 0x200d38u;
    // NOP
label_200d3c:
    // 0x200d3c: 0x0  nop
    ctx->pc = 0x200d3cu;
    // NOP
label_200d40:
    // 0x200d40: 0x1010  mfhi        $v0
    ctx->pc = 0x200d40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_200d44:
    // 0x200d44: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_200d48:
    // 0x200d48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x200d48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_200d4c:
    // 0x200d4c: 0xc07c17c  jal         func_1F05F0
label_200d50:
    if (ctx->pc == 0x200D50u) {
        ctx->pc = 0x200D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D4Cu;
        // 0x200d50: 0x435021  addu        $t2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D54u;
        goto label_200d54;
    }
    ctx->pc = 0x200D4Cu;
    SET_GPR_U32(ctx, 31, 0x200D54u);
    ctx->pc = 0x200D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D4Cu;
    // 0x200d50: 0x435021  addu        $t2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x200D54u;
label_200d54:
    // 0x200d54: 0x27d10008  addiu       $s1, $fp, 0x8
    ctx->pc = 0x200d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_200d58:
    // 0x200d58: 0x24037b80  addiu       $v1, $zero, 0x7B80
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31616));
label_200d5c:
    // 0x200d5c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x200d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_200d60:
    // 0x200d60: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x200d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200d64:
    // 0x200d64: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x200d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_200d68:
    // 0x200d68: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x200d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_200d6c:
    // 0x200d6c: 0xa6052620  sh          $a1, 0x2620($s0)
    ctx->pc = 0x200d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9760), (uint16_t)GPR_U32(ctx, 5));
label_200d70:
    // 0x200d70: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_200d74:
    // 0x200d74: 0xa6032622  sh          $v1, 0x2622($s0)
    ctx->pc = 0x200d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9762), (uint16_t)GPR_U32(ctx, 3));
label_200d78:
    // 0x200d78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x200d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_200d7c:
    // 0x200d7c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_200d80:
    // 0x200d80: 0xae042624  sw          $a0, 0x2624($s0)
    ctx->pc = 0x200d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9764), GPR_U32(ctx, 4));
label_200d84:
    // 0x200d84: 0xa6022630  sh          $v0, 0x2630($s0)
    ctx->pc = 0x200d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9776), (uint16_t)GPR_U32(ctx, 2));
label_200d88:
    // 0x200d88: 0x24037c00  addiu       $v1, $zero, 0x7C00
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
label_200d8c:
    // 0x200d8c: 0xa6032632  sh          $v1, 0x2632($s0)
    ctx->pc = 0x200d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9778), (uint16_t)GPR_U32(ctx, 3));
label_200d90:
    // 0x200d90: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x200d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_200d94:
    // 0x200d94: 0xae042634  sw          $a0, 0x2634($s0)
    ctx->pc = 0x200d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9780), GPR_U32(ctx, 4));
label_200d98:
    // 0x200d98: 0x24423080  addiu       $v0, $v0, 0x3080
    ctx->pc = 0x200d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12416));
label_200d9c:
    // 0x200d9c: 0x8f8390d0  lw          $v1, -0x6F30($gp)
    ctx->pc = 0x200d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_200da0:
    // 0x200da0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200da4:
    // 0x200da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200da8:
    // 0x200da8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200dac:
    // 0x200dac: 0xc055148  jal         func_154520
label_200db0:
    if (ctx->pc == 0x200DB0u) {
        ctx->pc = 0x200DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DACu;
        // 0x200db0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DB4u;
        goto label_200db4;
    }
    ctx->pc = 0x200DACu;
    SET_GPR_U32(ctx, 31, 0x200DB4u);
    ctx->pc = 0x200DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DACu;
    // 0x200db0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x200DACu, 0x200DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DB4u;
label_200db4:
    // 0x200db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200db8:
    // 0x200db8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x200db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_200dbc:
    // 0x200dbc: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x200dbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_200dc0:
    // 0x200dc0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x200dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_200dc4:
    // 0x200dc4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x200dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200dc8:
    // 0x200dc8: 0x24890060  addiu       $t1, $a0, 0x60
    ctx->pc = 0x200dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_200dcc:
    // 0x200dcc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x200dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200dd0:
    // 0x200dd0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x200dd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_200dd4:
    // 0x200dd4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x200dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_200dd8:
    // 0x200dd8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x200dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200ddc:
    // 0x200ddc: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x200ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_200de0:
    // 0x200de0: 0xc054e5c  jal         func_153970
label_200de4:
    if (ctx->pc == 0x200DE4u) {
        ctx->pc = 0x200DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DE0u;
        // 0x200de4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DE8u;
        goto label_200de8;
    }
    ctx->pc = 0x200DE0u;
    SET_GPR_U32(ctx, 31, 0x200DE8u);
    ctx->pc = 0x200DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DE0u;
    // 0x200de4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200DE0u, 0x200DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DE8u;
label_200de8:
    // 0x200de8: 0xc054e70  jal         func_1539C0
label_200dec:
    if (ctx->pc == 0x200DECu) {
        ctx->pc = 0x200DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DE8u;
        // 0x200dec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DF0u;
        goto label_200df0;
    }
    ctx->pc = 0x200DE8u;
    SET_GPR_U32(ctx, 31, 0x200DF0u);
    ctx->pc = 0x200DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DE8u;
    // 0x200dec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x200DE8u, 0x200DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DF0u;
label_200df0:
    // 0x200df0: 0x8f8390d0  lw          $v1, -0x6F30($gp)
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938832)));
label_200df4:
    // 0x200df4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x200df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_200df8:
    // 0x200df8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200dfc:
    // 0x200dfc: 0x24423080  addiu       $v0, $v0, 0x3080
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12416));
label_200e00:
    // 0x200e00: 0x26042640  addiu       $a0, $s0, 0x2640
    ctx->pc = 0x200e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9792));
label_200e04:
    // 0x200e04: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x200e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_200e08:
    // 0x200e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200e0c:
    // 0x200e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200e10:
    // 0x200e10: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x200e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200e14:
    // 0x200e14: 0xc054e74  jal         func_1539D0
label_200e18:
    if (ctx->pc == 0x200E18u) {
        ctx->pc = 0x200E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E14u;
        // 0x200e18: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E1Cu;
        goto label_200e1c;
    }
    ctx->pc = 0x200E14u;
    SET_GPR_U32(ctx, 31, 0x200E1Cu);
    ctx->pc = 0x200E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E14u;
    // 0x200e18: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x200E14u, 0x200E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E1Cu;
label_200e1c:
    // 0x200e1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x200e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200e20:
    // 0x200e20: 0x24047d40  addiu       $a0, $zero, 0x7D40
    ctx->pc = 0x200e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32064));
label_200e24:
    // 0x200e24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_200e28:
    // 0x200e28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e2c:
    // 0x200e2c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x200e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_200e30:
    // 0x200e30: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x200e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_200e34:
    // 0x200e34: 0xa6033560  sh          $v1, 0x3560($s0)
    ctx->pc = 0x200e34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13664), (uint16_t)GPR_U32(ctx, 3));
label_200e38:
    // 0x200e38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_200e3c:
    // 0x200e3c: 0xa6043562  sh          $a0, 0x3562($s0)
    ctx->pc = 0x200e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13666), (uint16_t)GPR_U32(ctx, 4));
label_200e40:
    // 0x200e40: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x200e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_200e44:
    // 0x200e44: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x200e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200e48:
    // 0x200e48: 0x24027dc0  addiu       $v0, $zero, 0x7DC0
    ctx->pc = 0x200e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32192));
label_200e4c:
    // 0x200e4c: 0xae043564  sw          $a0, 0x3564($s0)
    ctx->pc = 0x200e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13668), GPR_U32(ctx, 4));
label_200e50:
    // 0x200e50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e54:
    // 0x200e54: 0xa6033570  sh          $v1, 0x3570($s0)
    ctx->pc = 0x200e54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13680), (uint16_t)GPR_U32(ctx, 3));
label_200e58:
    // 0x200e58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x200e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e5c:
    // 0x200e5c: 0xa6023572  sh          $v0, 0x3572($s0)
    ctx->pc = 0x200e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13682), (uint16_t)GPR_U32(ctx, 2));
label_200e60:
    // 0x200e60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x200e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e64:
    // 0x200e64: 0xae043574  sw          $a0, 0x3574($s0)
    ctx->pc = 0x200e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13684), GPR_U32(ctx, 4));
label_200e68:
    // 0x200e68: 0x8f8290cc  lw          $v0, -0x6F34($gp)
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938828)));
label_200e6c:
    // 0x200e6c: 0x27d60008  addiu       $s6, $fp, 0x8
    ctx->pc = 0x200e6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_200e70:
    // 0x200e70: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x200e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_200e74:
    // 0x200e74: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_200e78:
    if (ctx->pc == 0x200E78u) {
        ctx->pc = 0x200E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E74u;
        // 0x200e78: 0x26350098  addiu       $s5, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E7Cu;
        goto label_200e7c;
    }
    ctx->pc = 0x200E74u;
    {
        const bool branch_taken_0x200e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E74u;
        // 0x200e78: 0x26350098  addiu       $s5, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e74) {
            ctx->pc = 0x200F28u;
            { ctx->pc = 0x200f28; return; }
        }
    }
    ctx->pc = 0x200E7Cu;
label_200e7c:
    // 0x200e7c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_200e80:
    // 0x200e80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_200e84:
    // 0x200e84: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
label_200e88:
    // 0x200e88: 0x24422ee0  addiu       $v0, $v0, 0x2EE0
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
label_200e8c:
    // 0x200e8c: 0x72b821  addu        $s7, $v1, $s2
    ctx->pc = 0x200e8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_200e90:
    // 0x200e90: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200e94:
    // 0x200e94: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_200e98:
    // 0x200e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200e9c:
    // 0x200e9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200ea0:
    // 0x200ea0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200ea4:
    // 0x200ea4: 0xc055148  jal         func_154520
label_200ea8:
    if (ctx->pc == 0x200EA8u) {
        ctx->pc = 0x200EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EA4u;
        // 0x200ea8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EACu;
        goto label_200eac;
    }
    ctx->pc = 0x200EA4u;
    SET_GPR_U32(ctx, 31, 0x200EACu);
    ctx->pc = 0x200EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EA4u;
    // 0x200ea8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x200EA4u, 0x200EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EACu;
label_200eac:
    // 0x200eac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x200eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200eb0:
    // 0x200eb0: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200eb4:
    // 0x200eb4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x200eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200eb8:
    // 0x200eb8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x200eb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200ebc:
    // 0x200ebc: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x200ebcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_200ec0:
    // 0x200ec0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200ec4:
    // 0x200ec4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x200ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200ec8:
    // 0x200ec8: 0xc054e5c  jal         func_153970
label_200ecc:
    if (ctx->pc == 0x200ECCu) {
        ctx->pc = 0x200ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EC8u;
        // 0x200ecc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ED0u;
        goto label_200ed0;
    }
    ctx->pc = 0x200EC8u;
    SET_GPR_U32(ctx, 31, 0x200ED0u);
    ctx->pc = 0x200ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EC8u;
    // 0x200ecc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200EC8u, 0x200ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ED0u;
label_200ed0:
    // 0x200ed0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x200ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_200ed4:
    // 0x200ed4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x200ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_200ed8:
    // 0x200ed8: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x200ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
label_200edc:
    // 0x200edc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x200edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_200ee0:
    // 0x200ee0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x200ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_200ee4:
    // 0x200ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200ee8u;
    return;
}
