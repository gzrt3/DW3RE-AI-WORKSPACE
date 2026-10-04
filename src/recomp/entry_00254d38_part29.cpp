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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part29(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2627f8u: goto label_2627f8;
        case 0x2627fcu: goto label_2627fc;
        case 0x262800u: goto label_262800;
        case 0x262804u: goto label_262804;
        case 0x262808u: goto label_262808;
        case 0x26280cu: goto label_26280c;
        case 0x262810u: goto label_262810;
        case 0x262814u: goto label_262814;
        case 0x262818u: goto label_262818;
        case 0x26281cu: goto label_26281c;
        case 0x262820u: goto label_262820;
        case 0x262824u: goto label_262824;
        case 0x262828u: goto label_262828;
        case 0x26282cu: goto label_26282c;
        case 0x262830u: goto label_262830;
        case 0x262834u: goto label_262834;
        case 0x262838u: goto label_262838;
        case 0x26283cu: goto label_26283c;
        case 0x262840u: goto label_262840;
        case 0x262844u: goto label_262844;
        case 0x262848u: goto label_262848;
        case 0x26284cu: goto label_26284c;
        case 0x262850u: goto label_262850;
        case 0x262854u: goto label_262854;
        case 0x262858u: goto label_262858;
        case 0x26285cu: goto label_26285c;
        case 0x262860u: goto label_262860;
        case 0x262864u: goto label_262864;
        case 0x262868u: goto label_262868;
        case 0x26286cu: goto label_26286c;
        case 0x262870u: goto label_262870;
        case 0x262874u: goto label_262874;
        case 0x262878u: goto label_262878;
        case 0x26287cu: goto label_26287c;
        case 0x262880u: goto label_262880;
        case 0x262884u: goto label_262884;
        case 0x262888u: goto label_262888;
        case 0x26288cu: goto label_26288c;
        case 0x262890u: goto label_262890;
        case 0x262894u: goto label_262894;
        case 0x262898u: goto label_262898;
        case 0x26289cu: goto label_26289c;
        case 0x2628a0u: goto label_2628a0;
        case 0x2628a4u: goto label_2628a4;
        case 0x2628a8u: goto label_2628a8;
        case 0x2628acu: goto label_2628ac;
        case 0x2628b0u: goto label_2628b0;
        case 0x2628b4u: goto label_2628b4;
        case 0x2628b8u: goto label_2628b8;
        case 0x2628bcu: goto label_2628bc;
        case 0x2628c0u: goto label_2628c0;
        case 0x2628c4u: goto label_2628c4;
        case 0x2628c8u: goto label_2628c8;
        case 0x2628ccu: goto label_2628cc;
        case 0x2628d0u: goto label_2628d0;
        case 0x2628d4u: goto label_2628d4;
        case 0x2628d8u: goto label_2628d8;
        case 0x2628dcu: goto label_2628dc;
        case 0x2628e0u: goto label_2628e0;
        case 0x2628e4u: goto label_2628e4;
        case 0x2628e8u: goto label_2628e8;
        case 0x2628ecu: goto label_2628ec;
        case 0x2628f0u: goto label_2628f0;
        case 0x2628f4u: goto label_2628f4;
        case 0x2628f8u: goto label_2628f8;
        case 0x2628fcu: goto label_2628fc;
        case 0x262900u: goto label_262900;
        case 0x262904u: goto label_262904;
        case 0x262908u: goto label_262908;
        case 0x26290cu: goto label_26290c;
        case 0x262910u: goto label_262910;
        case 0x262914u: goto label_262914;
        case 0x262918u: goto label_262918;
        case 0x26291cu: goto label_26291c;
        case 0x262920u: goto label_262920;
        case 0x262924u: goto label_262924;
        case 0x262928u: goto label_262928;
        case 0x26292cu: goto label_26292c;
        case 0x262930u: goto label_262930;
        case 0x262934u: goto label_262934;
        case 0x262938u: goto label_262938;
        case 0x26293cu: goto label_26293c;
        case 0x262940u: goto label_262940;
        case 0x262944u: goto label_262944;
        case 0x262948u: goto label_262948;
        case 0x26294cu: goto label_26294c;
        case 0x262950u: goto label_262950;
        case 0x262954u: goto label_262954;
        case 0x262958u: goto label_262958;
        case 0x26295cu: goto label_26295c;
        case 0x262960u: goto label_262960;
        case 0x262964u: goto label_262964;
        case 0x262968u: goto label_262968;
        case 0x26296cu: goto label_26296c;
        case 0x262970u: goto label_262970;
        case 0x262974u: goto label_262974;
        case 0x262978u: goto label_262978;
        case 0x26297cu: goto label_26297c;
        case 0x262980u: goto label_262980;
        case 0x262984u: goto label_262984;
        case 0x262988u: goto label_262988;
        case 0x26298cu: goto label_26298c;
        case 0x262990u: goto label_262990;
        case 0x262994u: goto label_262994;
        case 0x262998u: goto label_262998;
        case 0x26299cu: goto label_26299c;
        case 0x2629a0u: goto label_2629a0;
        case 0x2629a4u: goto label_2629a4;
        case 0x2629a8u: goto label_2629a8;
        case 0x2629acu: goto label_2629ac;
        case 0x2629b0u: goto label_2629b0;
        case 0x2629b4u: goto label_2629b4;
        case 0x2629b8u: goto label_2629b8;
        case 0x2629bcu: goto label_2629bc;
        case 0x2629c0u: goto label_2629c0;
        case 0x2629c4u: goto label_2629c4;
        case 0x2629c8u: goto label_2629c8;
        case 0x2629ccu: goto label_2629cc;
        case 0x2629d0u: goto label_2629d0;
        case 0x2629d4u: goto label_2629d4;
        case 0x2629d8u: goto label_2629d8;
        case 0x2629dcu: goto label_2629dc;
        case 0x2629e0u: goto label_2629e0;
        case 0x2629e4u: goto label_2629e4;
        case 0x2629e8u: goto label_2629e8;
        case 0x2629ecu: goto label_2629ec;
        case 0x2629f0u: goto label_2629f0;
        case 0x2629f4u: goto label_2629f4;
        case 0x2629f8u: goto label_2629f8;
        case 0x2629fcu: goto label_2629fc;
        case 0x262a00u: goto label_262a00;
        case 0x262a04u: goto label_262a04;
        case 0x262a08u: goto label_262a08;
        case 0x262a0cu: goto label_262a0c;
        case 0x262a10u: goto label_262a10;
        case 0x262a14u: goto label_262a14;
        case 0x262a18u: goto label_262a18;
        case 0x262a1cu: goto label_262a1c;
        case 0x262a20u: goto label_262a20;
        case 0x262a24u: goto label_262a24;
        case 0x262a28u: goto label_262a28;
        case 0x262a2cu: goto label_262a2c;
        case 0x262a30u: goto label_262a30;
        case 0x262a34u: goto label_262a34;
        case 0x262a38u: goto label_262a38;
        case 0x262a3cu: goto label_262a3c;
        case 0x262a40u: goto label_262a40;
        case 0x262a44u: goto label_262a44;
        case 0x262a48u: goto label_262a48;
        case 0x262a4cu: goto label_262a4c;
        case 0x262a50u: goto label_262a50;
        case 0x262a54u: goto label_262a54;
        case 0x262a58u: goto label_262a58;
        case 0x262a5cu: goto label_262a5c;
        case 0x262a60u: goto label_262a60;
        case 0x262a64u: goto label_262a64;
        case 0x262a68u: goto label_262a68;
        case 0x262a6cu: goto label_262a6c;
        case 0x262a70u: goto label_262a70;
        case 0x262a74u: goto label_262a74;
        case 0x262a78u: goto label_262a78;
        case 0x262a7cu: goto label_262a7c;
        case 0x262a80u: goto label_262a80;
        case 0x262a84u: goto label_262a84;
        case 0x262a88u: goto label_262a88;
        case 0x262a8cu: goto label_262a8c;
        case 0x262a90u: goto label_262a90;
        case 0x262a94u: goto label_262a94;
        case 0x262a98u: goto label_262a98;
        case 0x262a9cu: goto label_262a9c;
        case 0x262aa0u: goto label_262aa0;
        case 0x262aa4u: goto label_262aa4;
        case 0x262aa8u: goto label_262aa8;
        case 0x262aacu: goto label_262aac;
        case 0x262ab0u: goto label_262ab0;
        case 0x262ab4u: goto label_262ab4;
        case 0x262ab8u: goto label_262ab8;
        case 0x262abcu: goto label_262abc;
        case 0x262ac0u: goto label_262ac0;
        case 0x262ac4u: goto label_262ac4;
        case 0x262ac8u: goto label_262ac8;
        case 0x262accu: goto label_262acc;
        case 0x262ad0u: goto label_262ad0;
        case 0x262ad4u: goto label_262ad4;
        case 0x262ad8u: goto label_262ad8;
        case 0x262adcu: goto label_262adc;
        case 0x262ae0u: goto label_262ae0;
        case 0x262ae4u: goto label_262ae4;
        case 0x262ae8u: goto label_262ae8;
        case 0x262aecu: goto label_262aec;
        case 0x262af0u: goto label_262af0;
        case 0x262af4u: goto label_262af4;
        case 0x262af8u: goto label_262af8;
        case 0x262afcu: goto label_262afc;
        case 0x262b00u: goto label_262b00;
        case 0x262b04u: goto label_262b04;
        case 0x262b08u: goto label_262b08;
        case 0x262b0cu: goto label_262b0c;
        case 0x262b10u: goto label_262b10;
        case 0x262b14u: goto label_262b14;
        case 0x262b18u: goto label_262b18;
        case 0x262b1cu: goto label_262b1c;
        case 0x262b20u: goto label_262b20;
        case 0x262b24u: goto label_262b24;
        case 0x262b28u: goto label_262b28;
        case 0x262b2cu: goto label_262b2c;
        case 0x262b30u: goto label_262b30;
        case 0x262b34u: goto label_262b34;
        case 0x262b38u: goto label_262b38;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b40u: goto label_262b40;
        case 0x262b44u: goto label_262b44;
        case 0x262b48u: goto label_262b48;
        case 0x262b4cu: goto label_262b4c;
        case 0x262b50u: goto label_262b50;
        case 0x262b54u: goto label_262b54;
        case 0x262b58u: goto label_262b58;
        case 0x262b5cu: goto label_262b5c;
        case 0x262b60u: goto label_262b60;
        case 0x262b64u: goto label_262b64;
        case 0x262b68u: goto label_262b68;
        case 0x262b6cu: goto label_262b6c;
        case 0x262b70u: goto label_262b70;
        case 0x262b74u: goto label_262b74;
        case 0x262b78u: goto label_262b78;
        case 0x262b7cu: goto label_262b7c;
        case 0x262b80u: goto label_262b80;
        case 0x262b84u: goto label_262b84;
        case 0x262b88u: goto label_262b88;
        case 0x262b8cu: goto label_262b8c;
        case 0x262b90u: goto label_262b90;
        case 0x262b94u: goto label_262b94;
        case 0x262b98u: goto label_262b98;
        case 0x262b9cu: goto label_262b9c;
        case 0x262ba0u: goto label_262ba0;
        case 0x262ba4u: goto label_262ba4;
        case 0x262ba8u: goto label_262ba8;
        case 0x262bacu: goto label_262bac;
        case 0x262bb0u: goto label_262bb0;
        case 0x262bb4u: goto label_262bb4;
        case 0x262bb8u: goto label_262bb8;
        case 0x262bbcu: goto label_262bbc;
        case 0x262bc0u: goto label_262bc0;
        case 0x262bc4u: goto label_262bc4;
        case 0x262bc8u: goto label_262bc8;
        case 0x262bccu: goto label_262bcc;
        case 0x262bd0u: goto label_262bd0;
        case 0x262bd4u: goto label_262bd4;
        case 0x262bd8u: goto label_262bd8;
        case 0x262bdcu: goto label_262bdc;
        case 0x262be0u: goto label_262be0;
        case 0x262be4u: goto label_262be4;
        case 0x262be8u: goto label_262be8;
        case 0x262becu: goto label_262bec;
        case 0x262bf0u: goto label_262bf0;
        case 0x262bf4u: goto label_262bf4;
        case 0x262bf8u: goto label_262bf8;
        case 0x262bfcu: goto label_262bfc;
        case 0x262c00u: goto label_262c00;
        case 0x262c04u: goto label_262c04;
        case 0x262c08u: goto label_262c08;
        case 0x262c0cu: goto label_262c0c;
        case 0x262c10u: goto label_262c10;
        case 0x262c14u: goto label_262c14;
        case 0x262c18u: goto label_262c18;
        case 0x262c1cu: goto label_262c1c;
        case 0x262c20u: goto label_262c20;
        case 0x262c24u: goto label_262c24;
        case 0x262c28u: goto label_262c28;
        case 0x262c2cu: goto label_262c2c;
        case 0x262c30u: goto label_262c30;
        case 0x262c34u: goto label_262c34;
        case 0x262c38u: goto label_262c38;
        case 0x262c3cu: goto label_262c3c;
        case 0x262c40u: goto label_262c40;
        case 0x262c44u: goto label_262c44;
        case 0x262c48u: goto label_262c48;
        case 0x262c4cu: goto label_262c4c;
        case 0x262c50u: goto label_262c50;
        case 0x262c54u: goto label_262c54;
        case 0x262c58u: goto label_262c58;
        case 0x262c5cu: goto label_262c5c;
        case 0x262c60u: goto label_262c60;
        case 0x262c64u: goto label_262c64;
        case 0x262c68u: goto label_262c68;
        case 0x262c6cu: goto label_262c6c;
        case 0x262c70u: goto label_262c70;
        case 0x262c74u: goto label_262c74;
        case 0x262c78u: goto label_262c78;
        case 0x262c7cu: goto label_262c7c;
        case 0x262c80u: goto label_262c80;
        case 0x262c84u: goto label_262c84;
        case 0x262c88u: goto label_262c88;
        case 0x262c8cu: goto label_262c8c;
        case 0x262c90u: goto label_262c90;
        case 0x262c94u: goto label_262c94;
        case 0x262c98u: goto label_262c98;
        case 0x262c9cu: goto label_262c9c;
        case 0x262ca0u: goto label_262ca0;
        case 0x262ca4u: goto label_262ca4;
        case 0x262ca8u: goto label_262ca8;
        case 0x262cacu: goto label_262cac;
        case 0x262cb0u: goto label_262cb0;
        case 0x262cb4u: goto label_262cb4;
        case 0x262cb8u: goto label_262cb8;
        case 0x262cbcu: goto label_262cbc;
        case 0x262cc0u: goto label_262cc0;
        case 0x262cc4u: goto label_262cc4;
        case 0x262cc8u: goto label_262cc8;
        case 0x262cccu: goto label_262ccc;
        case 0x262cd0u: goto label_262cd0;
        case 0x262cd4u: goto label_262cd4;
        case 0x262cd8u: goto label_262cd8;
        case 0x262cdcu: goto label_262cdc;
        case 0x262ce0u: goto label_262ce0;
        case 0x262ce4u: goto label_262ce4;
        case 0x262ce8u: goto label_262ce8;
        case 0x262cecu: goto label_262cec;
        case 0x262cf0u: goto label_262cf0;
        case 0x262cf4u: goto label_262cf4;
        case 0x262cf8u: goto label_262cf8;
        case 0x262cfcu: goto label_262cfc;
        case 0x262d00u: goto label_262d00;
        case 0x262d04u: goto label_262d04;
        case 0x262d08u: goto label_262d08;
        case 0x262d0cu: goto label_262d0c;
        case 0x262d10u: goto label_262d10;
        case 0x262d14u: goto label_262d14;
        case 0x262d18u: goto label_262d18;
        case 0x262d1cu: goto label_262d1c;
        case 0x262d20u: goto label_262d20;
        case 0x262d24u: goto label_262d24;
        case 0x262d28u: goto label_262d28;
        case 0x262d2cu: goto label_262d2c;
        case 0x262d30u: goto label_262d30;
        case 0x262d34u: goto label_262d34;
        case 0x262d38u: goto label_262d38;
        case 0x262d3cu: goto label_262d3c;
        case 0x262d40u: goto label_262d40;
        case 0x262d44u: goto label_262d44;
        case 0x262d48u: goto label_262d48;
        case 0x262d4cu: goto label_262d4c;
        case 0x262d50u: goto label_262d50;
        case 0x262d54u: goto label_262d54;
        case 0x262d58u: goto label_262d58;
        case 0x262d5cu: goto label_262d5c;
        case 0x262d60u: goto label_262d60;
        case 0x262d64u: goto label_262d64;
        case 0x262d68u: goto label_262d68;
        case 0x262d6cu: goto label_262d6c;
        case 0x262d70u: goto label_262d70;
        case 0x262d74u: goto label_262d74;
        case 0x262d78u: goto label_262d78;
        case 0x262d7cu: goto label_262d7c;
        case 0x262d80u: goto label_262d80;
        case 0x262d84u: goto label_262d84;
        case 0x262d88u: goto label_262d88;
        case 0x262d8cu: goto label_262d8c;
        case 0x262d90u: goto label_262d90;
        case 0x262d94u: goto label_262d94;
        case 0x262d98u: goto label_262d98;
        case 0x262d9cu: goto label_262d9c;
        case 0x262da0u: goto label_262da0;
        case 0x262da4u: goto label_262da4;
        case 0x262da8u: goto label_262da8;
        case 0x262dacu: goto label_262dac;
        case 0x262db0u: goto label_262db0;
        case 0x262db4u: goto label_262db4;
        case 0x262db8u: goto label_262db8;
        case 0x262dbcu: goto label_262dbc;
        case 0x262dc0u: goto label_262dc0;
        case 0x262dc4u: goto label_262dc4;
        case 0x262dc8u: goto label_262dc8;
        case 0x262dccu: goto label_262dcc;
        case 0x262dd0u: goto label_262dd0;
        case 0x262dd4u: goto label_262dd4;
        case 0x262dd8u: goto label_262dd8;
        case 0x262ddcu: goto label_262ddc;
        case 0x262de0u: goto label_262de0;
        case 0x262de4u: goto label_262de4;
        case 0x262de8u: goto label_262de8;
        case 0x262decu: goto label_262dec;
        case 0x262df0u: goto label_262df0;
        case 0x262df4u: goto label_262df4;
        case 0x262df8u: goto label_262df8;
        case 0x262dfcu: goto label_262dfc;
        case 0x262e00u: goto label_262e00;
        case 0x262e04u: goto label_262e04;
        case 0x262e08u: goto label_262e08;
        case 0x262e0cu: goto label_262e0c;
        case 0x262e10u: goto label_262e10;
        case 0x262e14u: goto label_262e14;
        case 0x262e18u: goto label_262e18;
        case 0x262e1cu: goto label_262e1c;
        case 0x262e20u: goto label_262e20;
        case 0x262e24u: goto label_262e24;
        case 0x262e28u: goto label_262e28;
        case 0x262e2cu: goto label_262e2c;
        case 0x262e30u: goto label_262e30;
        case 0x262e34u: goto label_262e34;
        case 0x262e38u: goto label_262e38;
        case 0x262e3cu: goto label_262e3c;
        case 0x262e40u: goto label_262e40;
        case 0x262e44u: goto label_262e44;
        case 0x262e48u: goto label_262e48;
        case 0x262e4cu: goto label_262e4c;
        case 0x262e50u: goto label_262e50;
        case 0x262e54u: goto label_262e54;
        case 0x262e58u: goto label_262e58;
        case 0x262e5cu: goto label_262e5c;
        case 0x262e60u: goto label_262e60;
        case 0x262e64u: goto label_262e64;
        case 0x262e68u: goto label_262e68;
        case 0x262e6cu: goto label_262e6c;
        case 0x262e70u: goto label_262e70;
        case 0x262e74u: goto label_262e74;
        case 0x262e78u: goto label_262e78;
        case 0x262e7cu: goto label_262e7c;
        case 0x262e80u: goto label_262e80;
        case 0x262e84u: goto label_262e84;
        case 0x262e88u: goto label_262e88;
        case 0x262e8cu: goto label_262e8c;
        case 0x262e90u: goto label_262e90;
        case 0x262e94u: goto label_262e94;
        case 0x262e98u: goto label_262e98;
        case 0x262e9cu: goto label_262e9c;
        case 0x262ea0u: goto label_262ea0;
        case 0x262ea4u: goto label_262ea4;
        case 0x262ea8u: goto label_262ea8;
        case 0x262eacu: goto label_262eac;
        case 0x262eb0u: goto label_262eb0;
        case 0x262eb4u: goto label_262eb4;
        case 0x262eb8u: goto label_262eb8;
        case 0x262ebcu: goto label_262ebc;
        case 0x262ec0u: goto label_262ec0;
        case 0x262ec4u: goto label_262ec4;
        case 0x262ec8u: goto label_262ec8;
        case 0x262eccu: goto label_262ecc;
        case 0x262ed0u: goto label_262ed0;
        case 0x262ed4u: goto label_262ed4;
        case 0x262ed8u: goto label_262ed8;
        case 0x262edcu: goto label_262edc;
        case 0x262ee0u: goto label_262ee0;
        case 0x262ee4u: goto label_262ee4;
        case 0x262ee8u: goto label_262ee8;
        case 0x262eecu: goto label_262eec;
        case 0x262ef0u: goto label_262ef0;
        case 0x262ef4u: goto label_262ef4;
        case 0x262ef8u: goto label_262ef8;
        case 0x262efcu: goto label_262efc;
        case 0x262f00u: goto label_262f00;
        case 0x262f04u: goto label_262f04;
        case 0x262f08u: goto label_262f08;
        case 0x262f0cu: goto label_262f0c;
        case 0x262f10u: goto label_262f10;
        case 0x262f14u: goto label_262f14;
        case 0x262f18u: goto label_262f18;
        case 0x262f1cu: goto label_262f1c;
        case 0x262f20u: goto label_262f20;
        case 0x262f24u: goto label_262f24;
        case 0x262f28u: goto label_262f28;
        case 0x262f2cu: goto label_262f2c;
        case 0x262f30u: goto label_262f30;
        case 0x262f34u: goto label_262f34;
        case 0x262f38u: goto label_262f38;
        case 0x262f3cu: goto label_262f3c;
        case 0x262f40u: goto label_262f40;
        case 0x262f44u: goto label_262f44;
        case 0x262f48u: goto label_262f48;
        case 0x262f4cu: goto label_262f4c;
        case 0x262f50u: goto label_262f50;
        case 0x262f54u: goto label_262f54;
        case 0x262f58u: goto label_262f58;
        case 0x262f5cu: goto label_262f5c;
        case 0x262f60u: goto label_262f60;
        case 0x262f64u: goto label_262f64;
        case 0x262f68u: goto label_262f68;
        case 0x262f6cu: goto label_262f6c;
        case 0x262f70u: goto label_262f70;
        case 0x262f74u: goto label_262f74;
        case 0x262f78u: goto label_262f78;
        case 0x262f7cu: goto label_262f7c;
        case 0x262f80u: goto label_262f80;
        case 0x262f84u: goto label_262f84;
        case 0x262f88u: goto label_262f88;
        case 0x262f8cu: goto label_262f8c;
        case 0x262f90u: goto label_262f90;
        case 0x262f94u: goto label_262f94;
        case 0x262f98u: goto label_262f98;
        case 0x262f9cu: goto label_262f9c;
        case 0x262fa0u: goto label_262fa0;
        case 0x262fa4u: goto label_262fa4;
        case 0x262fa8u: goto label_262fa8;
        case 0x262facu: goto label_262fac;
        case 0x262fb0u: goto label_262fb0;
        case 0x262fb4u: goto label_262fb4;
        case 0x262fb8u: goto label_262fb8;
        case 0x262fbcu: goto label_262fbc;
        case 0x262fc0u: goto label_262fc0;
        case 0x262fc4u: goto label_262fc4;
        default: return;
    }

label_2627f8:
    // 0x2627f8: 0x0  nop
    ctx->pc = 0x2627f8u;
    // NOP
label_2627fc:
    // 0x2627fc: 0x0  nop
    ctx->pc = 0x2627fcu;
    // NOP
label_262800:
    // 0x262800: 0xd537  .word       0x0000D537                   # INVALID     $zero, $zero, -0x2AC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262800 raw=0x0000D537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262804:
    // 0x262804: 0xa1d0  .word       0x0000A1D0                   # mfhi        $s4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262804u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_262808:
    // 0x262808: 0x0  nop
    ctx->pc = 0x262808u;
    // NOP
label_26280c:
    // 0x26280c: 0x0  nop
    ctx->pc = 0x26280cu;
    // NOP
label_262810:
    // 0x262810: 0xd54c  syscall     853
    ctx->pc = 0x262810u;
    ctx->pc = 0x262814u;
runtime->handleSyscall(rdram, ctx, 0x355u);
label_262814:
    // 0x262814: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x262814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262818:
    // 0x262818: 0x0  nop
    ctx->pc = 0x262818u;
    // NOP
label_26281c:
    // 0x26281c: 0x0  nop
    ctx->pc = 0x26281cu;
    // NOP
label_262820:
    // 0x262820: 0xd558  .word       0x0000D558                   # mult        $k0, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_262824:
    // 0x262824: 0xfc20  .word       0x0000FC20                   # add         $ra, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_262828:
    // 0x262828: 0x0  nop
    ctx->pc = 0x262828u;
    // NOP
label_26282c:
    // 0x26282c: 0x0  nop
    ctx->pc = 0x26282cu;
    // NOP
label_262830:
    // 0x262830: 0xd578  dsll        $k0, $zero, 21
    ctx->pc = 0x262830u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << 21);
label_262834:
    // 0x262834: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x262834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_262838:
    // 0x262838: 0x0  nop
    ctx->pc = 0x262838u;
    // NOP
label_26283c:
    // 0x26283c: 0x0  nop
    ctx->pc = 0x26283cu;
    // NOP
label_262840:
    // 0x262840: 0xd57f  dsra32      $k0, $zero, 21
    ctx->pc = 0x262840u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (32 + 21));
label_262844:
    // 0x262844: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262844u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262848:
    // 0x262848: 0x0  nop
    ctx->pc = 0x262848u;
    // NOP
label_26284c:
    // 0x26284c: 0x0  nop
    ctx->pc = 0x26284cu;
    // NOP
label_262850:
    // 0x262850: 0xd58a  .word       0x0000D58A                   # movz        $k0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262850u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262854:
    // 0x262854: 0xbce0  .word       0x0000BCE0                   # add         $s7, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_262858:
    // 0x262858: 0x0  nop
    ctx->pc = 0x262858u;
    // NOP
label_26285c:
    // 0x26285c: 0x0  nop
    ctx->pc = 0x26285cu;
    // NOP
label_262860:
    // 0x262860: 0xd5a2  .word       0x0000D5A2                   # neg         $k0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262860u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_262864:
    // 0x262864: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x262864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262868:
    // 0x262868: 0x0  nop
    ctx->pc = 0x262868u;
    // NOP
label_26286c:
    // 0x26286c: 0x0  nop
    ctx->pc = 0x26286cu;
    // NOP
label_262870:
    // 0x262870: 0xd5b7  .word       0x0000D5B7                   # INVALID     $zero, $zero, -0x2A49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262870 raw=0x0000D5B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262874:
    // 0x262874: 0xd780  sll         $k0, $zero, 30
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_262878:
    // 0x262878: 0x0  nop
    ctx->pc = 0x262878u;
    // NOP
label_26287c:
    // 0x26287c: 0x0  nop
    ctx->pc = 0x26287cu;
    // NOP
label_262880:
    // 0x262880: 0xd5d2  .word       0x0000D5D2                   # mflo        $k0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262880u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262884:
    // 0x262884: 0x11c00  sll         $v1, $at, 16
    ctx->pc = 0x262884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_262888:
    // 0x262888: 0x0  nop
    ctx->pc = 0x262888u;
    // NOP
label_26288c:
    // 0x26288c: 0x0  nop
    ctx->pc = 0x26288cu;
    // NOP
label_262890:
    // 0x262890: 0xd5f6  tne         $zero, $zero, 855
    ctx->pc = 0x262890u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262894:
    // 0x262894: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_262898:
    // 0x262898: 0x0  nop
    ctx->pc = 0x262898u;
    // NOP
label_26289c:
    // 0x26289c: 0x0  nop
    ctx->pc = 0x26289cu;
    // NOP
label_2628a0:
    // 0x2628a0: 0xd601  .word       0x0000D601                   # INVALID     $zero, $zero, -0x29FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2628A0 raw=0x0000D601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2628a4:
    // 0x2628a4: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x2628a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2628a8:
    // 0x2628a8: 0x0  nop
    ctx->pc = 0x2628a8u;
    // NOP
label_2628ac:
    // 0x2628ac: 0x0  nop
    ctx->pc = 0x2628acu;
    // NOP
label_2628b0:
    // 0x2628b0: 0xd60a  .word       0x0000D60A                   # movz        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2628b4:
    // 0x2628b4: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2628b8:
    // 0x2628b8: 0x0  nop
    ctx->pc = 0x2628b8u;
    // NOP
label_2628bc:
    // 0x2628bc: 0x0  nop
    ctx->pc = 0x2628bcu;
    // NOP
label_2628c0:
    // 0x2628c0: 0xd614  .word       0x0000D614                   # dsllv       $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628c0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2628c4:
    // 0x2628c4: 0x2340  sll         $a0, $zero, 13
    ctx->pc = 0x2628c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2628c8:
    // 0x2628c8: 0x0  nop
    ctx->pc = 0x2628c8u;
    // NOP
label_2628cc:
    // 0x2628cc: 0x0  nop
    ctx->pc = 0x2628ccu;
    // NOP
label_2628d0:
    // 0x2628d0: 0xd619  .word       0x0000D619                   # multu       $zero, $zero # 0000D600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2628d4:
    // 0x2628d4: 0x3590  .word       0x00003590                   # mfhi        $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2628d8:
    // 0x2628d8: 0x0  nop
    ctx->pc = 0x2628d8u;
    // NOP
label_2628dc:
    // 0x2628dc: 0x0  nop
    ctx->pc = 0x2628dcu;
    // NOP
label_2628e0:
    // 0x2628e0: 0xd620  .word       0x0000D620                   # add         $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2628e4:
    // 0x2628e4: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628e4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2628e8:
    // 0x2628e8: 0x0  nop
    ctx->pc = 0x2628e8u;
    // NOP
label_2628ec:
    // 0x2628ec: 0x0  nop
    ctx->pc = 0x2628ecu;
    // NOP
label_2628f0:
    // 0x2628f0: 0xd632  tlt         $zero, $zero, 856
    ctx->pc = 0x2628f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2628f4:
    // 0x2628f4: 0x6fc0  sll         $t5, $zero, 31
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2628f8:
    // 0x2628f8: 0x0  nop
    ctx->pc = 0x2628f8u;
    // NOP
label_2628fc:
    // 0x2628fc: 0x0  nop
    ctx->pc = 0x2628fcu;
    // NOP
label_262900:
    // 0x262900: 0xd640  sll         $k0, $zero, 25
    ctx->pc = 0x262900u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_262904:
    // 0x262904: 0x25e0  .word       0x000025E0                   # add         $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262908:
    // 0x262908: 0x0  nop
    ctx->pc = 0x262908u;
    // NOP
label_26290c:
    // 0x26290c: 0x0  nop
    ctx->pc = 0x26290cu;
    // NOP
label_262910:
    // 0x262910: 0xd645  .word       0x0000D645                   # INVALID     $zero, $zero, -0x29BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262910 raw=0x0000D645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262914:
    // 0x262914: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x262914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262918:
    // 0x262918: 0x0  nop
    ctx->pc = 0x262918u;
    // NOP
label_26291c:
    // 0x26291c: 0x0  nop
    ctx->pc = 0x26291cu;
    // NOP
label_262920:
    // 0x262920: 0xd64b  .word       0x0000D64B                   # movn        $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262920u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262924:
    // 0x262924: 0x8b60  .word       0x00008B60                   # add         $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_262928:
    // 0x262928: 0x0  nop
    ctx->pc = 0x262928u;
    // NOP
label_26292c:
    // 0x26292c: 0x0  nop
    ctx->pc = 0x26292cu;
    // NOP
label_262930:
    // 0x262930: 0xd65d  .word       0x0000D65D                   # dmultu      $zero, $zero # 0000D640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262930 raw=0x0000D65D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262934:
    // 0x262934: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262938:
    // 0x262938: 0x0  nop
    ctx->pc = 0x262938u;
    // NOP
label_26293c:
    // 0x26293c: 0x0  nop
    ctx->pc = 0x26293cu;
    // NOP
label_262940:
    // 0x262940: 0xd66c  .word       0x0000D66C                   # dadd        $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_262944:
    // 0x262944: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262944u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262948:
    // 0x262948: 0x0  nop
    ctx->pc = 0x262948u;
    // NOP
label_26294c:
    // 0x26294c: 0x0  nop
    ctx->pc = 0x26294cu;
    // NOP
label_262950:
    // 0x262950: 0xd676  tne         $zero, $zero, 857
    ctx->pc = 0x262950u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262954:
    // 0x262954: 0x8320  .word       0x00008320                   # add         $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_262958:
    // 0x262958: 0x0  nop
    ctx->pc = 0x262958u;
    // NOP
label_26295c:
    // 0x26295c: 0x0  nop
    ctx->pc = 0x26295cu;
    // NOP
label_262960:
    // 0x262960: 0xd687  .word       0x0000D687                   # srav        $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262964:
    // 0x262964: 0x18b80  sll         $s1, $at, 14
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_262968:
    // 0x262968: 0x0  nop
    ctx->pc = 0x262968u;
    // NOP
label_26296c:
    // 0x26296c: 0x0  nop
    ctx->pc = 0x26296cu;
    // NOP
label_262970:
    // 0x262970: 0xd6b9  .word       0x0000D6B9                   # INVALID     $zero, $zero, -0x2947 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x262970 raw=0x0000D6B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262974:
    // 0x262974: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262974u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_262978:
    // 0x262978: 0x0  nop
    ctx->pc = 0x262978u;
    // NOP
label_26297c:
    // 0x26297c: 0x0  nop
    ctx->pc = 0x26297cu;
    // NOP
label_262980:
    // 0x262980: 0xd6cc  syscall     859
    ctx->pc = 0x262980u;
    ctx->pc = 0x262984u;
runtime->handleSyscall(rdram, ctx, 0x35Bu);
label_262984:
    // 0x262984: 0x2c90  .word       0x00002C90                   # mfhi        $a1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262984u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_262988:
    // 0x262988: 0x0  nop
    ctx->pc = 0x262988u;
    // NOP
label_26298c:
    // 0x26298c: 0x0  nop
    ctx->pc = 0x26298cu;
    // NOP
label_262990:
    // 0x262990: 0xd6d2  .word       0x0000D6D2                   # mflo        $k0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262990u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262994:
    // 0x262994: 0xd230  tge         $zero, $zero, 840
    ctx->pc = 0x262994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262998:
    // 0x262998: 0x0  nop
    ctx->pc = 0x262998u;
    // NOP
label_26299c:
    // 0x26299c: 0x0  nop
    ctx->pc = 0x26299cu;
    // NOP
label_2629a0:
    // 0x2629a0: 0xd6ed  .word       0x0000D6ED                   # daddu       $k0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629a0u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2629a4:
    // 0x2629a4: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629a4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2629a8:
    // 0x2629a8: 0x0  nop
    ctx->pc = 0x2629a8u;
    // NOP
label_2629ac:
    // 0x2629ac: 0x0  nop
    ctx->pc = 0x2629acu;
    // NOP
label_2629b0:
    // 0x2629b0: 0xd70a  .word       0x0000D70A                   # movz        $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2629b4:
    // 0x2629b4: 0x10180  sll         $zero, $at, 6
    ctx->pc = 0x2629b4u;
    
label_2629b8:
    // 0x2629b8: 0x0  nop
    ctx->pc = 0x2629b8u;
    // NOP
label_2629bc:
    // 0x2629bc: 0x0  nop
    ctx->pc = 0x2629bcu;
    // NOP
label_2629c0:
    // 0x2629c0: 0xd72b  .word       0x0000D72B                   # sltu        $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629c0u;
    SET_GPR_U64(ctx, 26, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2629c4:
    // 0x2629c4: 0xc7d0  .word       0x0000C7D0                   # mfhi        $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2629c8:
    // 0x2629c8: 0x0  nop
    ctx->pc = 0x2629c8u;
    // NOP
label_2629cc:
    // 0x2629cc: 0x0  nop
    ctx->pc = 0x2629ccu;
    // NOP
label_2629d0:
    // 0x2629d0: 0xd744  .word       0x0000D744                   # sllv        $k0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2629d4:
    // 0x2629d4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2629d8:
    // 0x2629d8: 0x0  nop
    ctx->pc = 0x2629d8u;
    // NOP
label_2629dc:
    // 0x2629dc: 0x0  nop
    ctx->pc = 0x2629dcu;
    // NOP
label_2629e0:
    // 0x2629e0: 0xd753  .word       0x0000D753                   # mtlo        $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2629e4:
    // 0x2629e4: 0x10e60  .word       0x00010E60                   # add         $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2629e8:
    // 0x2629e8: 0x0  nop
    ctx->pc = 0x2629e8u;
    // NOP
label_2629ec:
    // 0x2629ec: 0x0  nop
    ctx->pc = 0x2629ecu;
    // NOP
label_2629f0:
    // 0x2629f0: 0xd775  .word       0x0000D775                   # INVALID     $zero, $zero, -0x288B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2629F0 raw=0x0000D775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2629f4:
    // 0x2629f4: 0x189a0  .word       0x000189A0                   # add         $s1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2629f8:
    // 0x2629f8: 0x0  nop
    ctx->pc = 0x2629f8u;
    // NOP
label_2629fc:
    // 0x2629fc: 0x0  nop
    ctx->pc = 0x2629fcu;
    // NOP
label_262a00:
    // 0x262a00: 0xd7a7  .word       0x0000D7A7                   # not         $k0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a00u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_262a04:
    // 0x262a04: 0x15410  .word       0x00015410                   # mfhi        $t2 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262a08:
    // 0x262a08: 0x0  nop
    ctx->pc = 0x262a08u;
    // NOP
label_262a0c:
    // 0x262a0c: 0x0  nop
    ctx->pc = 0x262a0cu;
    // NOP
label_262a10:
    // 0x262a10: 0xd7d2  .word       0x0000D7D2                   # mflo        $k0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a10u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262a14:
    // 0x262a14: 0x17370  tge         $zero, $at, 461
    ctx->pc = 0x262a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262a18:
    // 0x262a18: 0x0  nop
    ctx->pc = 0x262a18u;
    // NOP
label_262a1c:
    // 0x262a1c: 0x0  nop
    ctx->pc = 0x262a1cu;
    // NOP
label_262a20:
    // 0x262a20: 0xd801  .word       0x0000D801                   # INVALID     $zero, $zero, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262A20 raw=0x0000D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a24:
    // 0x262a24: 0x61d0  .word       0x000061D0                   # mfhi        $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a24u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_262a28:
    // 0x262a28: 0x0  nop
    ctx->pc = 0x262a28u;
    // NOP
label_262a2c:
    // 0x262a2c: 0x0  nop
    ctx->pc = 0x262a2cu;
    // NOP
label_262a30:
    // 0x262a30: 0xd80e  .word       0x0000D80E                   # INVALID     $zero, $zero, -0x27F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x262A30 raw=0x0000D80E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a34:
    // 0x262a34: 0x4910  .word       0x00004910                   # mfhi        $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262a38:
    // 0x262a38: 0x0  nop
    ctx->pc = 0x262a38u;
    // NOP
label_262a3c:
    // 0x262a3c: 0x0  nop
    ctx->pc = 0x262a3cu;
    // NOP
label_262a40:
    // 0x262a40: 0xd818  mult        $k1, $zero, $zero
    ctx->pc = 0x262a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262a44:
    // 0x262a44: 0x9f00  sll         $s3, $zero, 28
    ctx->pc = 0x262a44u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_262a48:
    // 0x262a48: 0x0  nop
    ctx->pc = 0x262a48u;
    // NOP
label_262a4c:
    // 0x262a4c: 0x0  nop
    ctx->pc = 0x262a4cu;
    // NOP
label_262a50:
    // 0x262a50: 0xd82c  dadd        $k1, $zero, $zero
    ctx->pc = 0x262a50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_262a54:
    // 0x262a54: 0x75a0  .word       0x000075A0                   # add         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262a58:
    // 0x262a58: 0x0  nop
    ctx->pc = 0x262a58u;
    // NOP
label_262a5c:
    // 0x262a5c: 0x0  nop
    ctx->pc = 0x262a5cu;
    // NOP
label_262a60:
    // 0x262a60: 0xd83b  dsra        $k1, $zero, 0
    ctx->pc = 0x262a60u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 0);
label_262a64:
    // 0x262a64: 0x10bd0  .word       0x00010BD0                   # mfhi        $at # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a64u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_262a68:
    // 0x262a68: 0x0  nop
    ctx->pc = 0x262a68u;
    // NOP
label_262a6c:
    // 0x262a6c: 0x0  nop
    ctx->pc = 0x262a6cu;
    // NOP
label_262a70:
    // 0x262a70: 0xd85d  .word       0x0000D85D                   # dmultu      $zero, $zero # 0000D840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262A70 raw=0x0000D85D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a74:
    // 0x262a74: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x262a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262a78:
    // 0x262a78: 0x0  nop
    ctx->pc = 0x262a78u;
    // NOP
label_262a7c:
    // 0x262a7c: 0x0  nop
    ctx->pc = 0x262a7cu;
    // NOP
label_262a80:
    // 0x262a80: 0xd875  .word       0x0000D875                   # INVALID     $zero, $zero, -0x278B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262A80 raw=0x0000D875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a84:
    // 0x262a84: 0x3ab0  tge         $zero, $zero, 234
    ctx->pc = 0x262a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262a88:
    // 0x262a88: 0x0  nop
    ctx->pc = 0x262a88u;
    // NOP
label_262a8c:
    // 0x262a8c: 0x0  nop
    ctx->pc = 0x262a8cu;
    // NOP
label_262a90:
    // 0x262a90: 0xd87d  .word       0x0000D87D                   # INVALID     $zero, $zero, -0x2783 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x262A90 raw=0x0000D87D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a94:
    // 0x262a94: 0xb1d0  .word       0x0000B1D0                   # mfhi        $s6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_262a98:
    // 0x262a98: 0x0  nop
    ctx->pc = 0x262a98u;
    // NOP
label_262a9c:
    // 0x262a9c: 0x0  nop
    ctx->pc = 0x262a9cu;
    // NOP
label_262aa0:
    // 0x262aa0: 0xd894  .word       0x0000D894                   # dsllv       $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262aa0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262aa4:
    // 0x262aa4: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_262aa8:
    // 0x262aa8: 0x0  nop
    ctx->pc = 0x262aa8u;
    // NOP
label_262aac:
    // 0x262aac: 0x0  nop
    ctx->pc = 0x262aacu;
    // NOP
label_262ab0:
    // 0x262ab0: 0xd8a4  .word       0x0000D8A4                   # and         $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ab0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262ab4:
    // 0x262ab4: 0x4b60  .word       0x00004B60                   # add         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_262ab8:
    // 0x262ab8: 0x0  nop
    ctx->pc = 0x262ab8u;
    // NOP
label_262abc:
    // 0x262abc: 0x0  nop
    ctx->pc = 0x262abcu;
    // NOP
label_262ac0:
    // 0x262ac0: 0xd8ae  .word       0x0000D8AE                   # dsub        $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ac0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_262ac4:
    // 0x262ac4: 0x6aa0  .word       0x00006AA0                   # add         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_262ac8:
    // 0x262ac8: 0x0  nop
    ctx->pc = 0x262ac8u;
    // NOP
label_262acc:
    // 0x262acc: 0x0  nop
    ctx->pc = 0x262accu;
    // NOP
label_262ad0:
    // 0x262ad0: 0xd8bc  dsll32      $k1, $zero, 2
    ctx->pc = 0x262ad0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (32 + 2));
label_262ad4:
    // 0x262ad4: 0xa2b0  tge         $zero, $zero, 650
    ctx->pc = 0x262ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262ad8:
    // 0x262ad8: 0x0  nop
    ctx->pc = 0x262ad8u;
    // NOP
label_262adc:
    // 0x262adc: 0x0  nop
    ctx->pc = 0x262adcu;
    // NOP
label_262ae0:
    // 0x262ae0: 0xd8d1  .word       0x0000D8D1                   # mthi        $zero # 0000D8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ae0u;
    ctx->hi = GPR_U64(ctx, 0);
label_262ae4:
    // 0x262ae4: 0x5fa0  .word       0x00005FA0                   # add         $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262ae8:
    // 0x262ae8: 0x0  nop
    ctx->pc = 0x262ae8u;
    // NOP
label_262aec:
    // 0x262aec: 0x0  nop
    ctx->pc = 0x262aecu;
    // NOP
label_262af0:
    // 0x262af0: 0xd8dd  .word       0x0000D8DD                   # dmultu      $zero, $zero # 0000D8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262AF0 raw=0x0000D8DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262af4:
    // 0x262af4: 0x6330  tge         $zero, $zero, 396
    ctx->pc = 0x262af4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262af8:
    // 0x262af8: 0x0  nop
    ctx->pc = 0x262af8u;
    // NOP
label_262afc:
    // 0x262afc: 0x0  nop
    ctx->pc = 0x262afcu;
    // NOP
label_262b00:
    // 0x262b00: 0xd8ea  .word       0x0000D8EA                   # slt         $k1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b00u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_262b04:
    // 0x262b04: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_262b08:
    // 0x262b08: 0x0  nop
    ctx->pc = 0x262b08u;
    // NOP
label_262b0c:
    // 0x262b0c: 0x0  nop
    ctx->pc = 0x262b0cu;
    // NOP
label_262b10:
    // 0x262b10: 0xd8f6  tne         $zero, $zero, 867
    ctx->pc = 0x262b10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b14:
    // 0x262b14: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262b18:
    // 0x262b18: 0x0  nop
    ctx->pc = 0x262b18u;
    // NOP
label_262b1c:
    // 0x262b1c: 0x0  nop
    ctx->pc = 0x262b1cu;
    // NOP
label_262b20:
    // 0x262b20: 0xd901  .word       0x0000D901                   # INVALID     $zero, $zero, -0x26FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262B20 raw=0x0000D901"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262b24:
    // 0x262b24: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262b28:
    // 0x262b28: 0x0  nop
    ctx->pc = 0x262b28u;
    // NOP
label_262b2c:
    // 0x262b2c: 0x0  nop
    ctx->pc = 0x262b2cu;
    // NOP
label_262b30:
    // 0x262b30: 0xd90c  syscall     868
    ctx->pc = 0x262b30u;
    ctx->pc = 0x262B34u;
runtime->handleSyscall(rdram, ctx, 0x364u);
label_262b34:
    // 0x262b34: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x262b34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b38:
    // 0x262b38: 0x0  nop
    ctx->pc = 0x262b38u;
    // NOP
label_262b3c:
    // 0x262b3c: 0x0  nop
    ctx->pc = 0x262b3cu;
    // NOP
label_262b40:
    // 0x262b40: 0xd918  .word       0x0000D918                   # mult        $k1, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262b44:
    // 0x262b44: 0x5a50  .word       0x00005A50                   # mfhi        $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b44u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262b48:
    // 0x262b48: 0x0  nop
    ctx->pc = 0x262b48u;
    // NOP
label_262b4c:
    // 0x262b4c: 0x0  nop
    ctx->pc = 0x262b4cu;
    // NOP
label_262b50:
    // 0x262b50: 0xd924  .word       0x0000D924                   # and         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262b54:
    // 0x262b54: 0x6dd0  .word       0x00006DD0                   # mfhi        $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_262b58:
    // 0x262b58: 0x0  nop
    ctx->pc = 0x262b58u;
    // NOP
label_262b5c:
    // 0x262b5c: 0x0  nop
    ctx->pc = 0x262b5cu;
    // NOP
label_262b60:
    // 0x262b60: 0xd932  tlt         $zero, $zero, 868
    ctx->pc = 0x262b60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b64:
    // 0x262b64: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262b68:
    // 0x262b68: 0x0  nop
    ctx->pc = 0x262b68u;
    // NOP
label_262b6c:
    // 0x262b6c: 0x0  nop
    ctx->pc = 0x262b6cu;
    // NOP
label_262b70:
    // 0x262b70: 0xd93e  dsrl32      $k1, $zero, 4
    ctx->pc = 0x262b70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (32 + 4));
label_262b74:
    // 0x262b74: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262b78:
    // 0x262b78: 0x0  nop
    ctx->pc = 0x262b78u;
    // NOP
label_262b7c:
    // 0x262b7c: 0x0  nop
    ctx->pc = 0x262b7cu;
    // NOP
label_262b80:
    // 0x262b80: 0xd948  .word       0x0000D948                   # jr          $zero # 0000D940 <InstrIdType: CPU_SPECIAL>
label_262b84:
    if (ctx->pc == 0x262B84u) {
        ctx->pc = 0x262B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B80u;
        // 0x262b84: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B88u;
        goto label_262b88;
    }
    ctx->pc = 0x262B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x262B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B80u;
        // 0x262b84: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262B88u;
label_262b88:
    // 0x262b88: 0x0  nop
    ctx->pc = 0x262b88u;
    // NOP
label_262b8c:
    // 0x262b8c: 0x0  nop
    ctx->pc = 0x262b8cu;
    // NOP
label_262b90:
    // 0x262b90: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b90u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_262b94:
    // 0x262b94: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x262b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b98:
    // 0x262b98: 0x0  nop
    ctx->pc = 0x262b98u;
    // NOP
label_262b9c:
    // 0x262b9c: 0x0  nop
    ctx->pc = 0x262b9cu;
    // NOP
label_262ba0:
    // 0x262ba0: 0xd95a  .word       0x0000D95A                   # div         $k1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ba0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_262ba4:
    // 0x262ba4: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x262ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_262ba8:
    // 0x262ba8: 0x0  nop
    ctx->pc = 0x262ba8u;
    // NOP
label_262bac:
    // 0x262bac: 0x0  nop
    ctx->pc = 0x262bacu;
    // NOP
label_262bb0:
    // 0x262bb0: 0xd963  .word       0x0000D963                   # negu        $k1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bb0u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_262bb4:
    // 0x262bb4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_262bb8:
    // 0x262bb8: 0x0  nop
    ctx->pc = 0x262bb8u;
    // NOP
label_262bbc:
    // 0x262bbc: 0x0  nop
    ctx->pc = 0x262bbcu;
    // NOP
label_262bc0:
    // 0x262bc0: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x262bc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262bc4:
    // 0x262bc4: 0x8480  sll         $s0, $zero, 18
    ctx->pc = 0x262bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262bc8:
    // 0x262bc8: 0x0  nop
    ctx->pc = 0x262bc8u;
    // NOP
label_262bcc:
    // 0x262bcc: 0x0  nop
    ctx->pc = 0x262bccu;
    // NOP
label_262bd0:
    // 0x262bd0: 0xd981  .word       0x0000D981                   # INVALID     $zero, $zero, -0x267F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262BD0 raw=0x0000D981"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262bd4:
    // 0x262bd4: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262bd8:
    // 0x262bd8: 0x0  nop
    ctx->pc = 0x262bd8u;
    // NOP
label_262bdc:
    // 0x262bdc: 0x0  nop
    ctx->pc = 0x262bdcu;
    // NOP
label_262be0:
    // 0x262be0: 0xd98c  syscall     870
    ctx->pc = 0x262be0u;
    ctx->pc = 0x262BE4u;
runtime->handleSyscall(rdram, ctx, 0x366u);
label_262be4:
    // 0x262be4: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262be8:
    // 0x262be8: 0x0  nop
    ctx->pc = 0x262be8u;
    // NOP
label_262bec:
    // 0x262bec: 0x0  nop
    ctx->pc = 0x262becu;
    // NOP
label_262bf0:
    // 0x262bf0: 0xd998  .word       0x0000D998                   # mult        $k1, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262bf4:
    // 0x262bf4: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bf4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_262bf8:
    // 0x262bf8: 0x0  nop
    ctx->pc = 0x262bf8u;
    // NOP
label_262bfc:
    // 0x262bfc: 0x0  nop
    ctx->pc = 0x262bfcu;
    // NOP
label_262c00:
    // 0x262c00: 0xd9a6  .word       0x0000D9A6                   # xor         $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c00u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_262c04:
    // 0x262c04: 0x7ad0  .word       0x00007AD0                   # mfhi        $t7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262c08:
    // 0x262c08: 0x0  nop
    ctx->pc = 0x262c08u;
    // NOP
label_262c0c:
    // 0x262c0c: 0x0  nop
    ctx->pc = 0x262c0cu;
    // NOP
label_262c10:
    // 0x262c10: 0xd9b6  tne         $zero, $zero, 870
    ctx->pc = 0x262c10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262c14:
    // 0x262c14: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262c18:
    // 0x262c18: 0x0  nop
    ctx->pc = 0x262c18u;
    // NOP
label_262c1c:
    // 0x262c1c: 0x0  nop
    ctx->pc = 0x262c1cu;
    // NOP
label_262c20:
    // 0x262c20: 0xd9c1  .word       0x0000D9C1                   # INVALID     $zero, $zero, -0x263F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262C20 raw=0x0000D9C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262c24:
    // 0x262c24: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x262c24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_262c28:
    // 0x262c28: 0x0  nop
    ctx->pc = 0x262c28u;
    // NOP
label_262c2c:
    // 0x262c2c: 0x0  nop
    ctx->pc = 0x262c2cu;
    // NOP
label_262c30:
    // 0x262c30: 0xd9cc  syscall     871
    ctx->pc = 0x262c30u;
    ctx->pc = 0x262C34u;
runtime->handleSyscall(rdram, ctx, 0x367u);
label_262c34:
    // 0x262c34: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_262c38:
    // 0x262c38: 0x0  nop
    ctx->pc = 0x262c38u;
    // NOP
label_262c3c:
    // 0x262c3c: 0x0  nop
    ctx->pc = 0x262c3cu;
    // NOP
label_262c40:
    // 0x262c40: 0xd9da  .word       0x0000D9DA                   # div         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_262c44:
    // 0x262c44: 0x57d0  .word       0x000057D0                   # mfhi        $t2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c44u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262c48:
    // 0x262c48: 0x0  nop
    ctx->pc = 0x262c48u;
    // NOP
label_262c4c:
    // 0x262c4c: 0x0  nop
    ctx->pc = 0x262c4cu;
    // NOP
label_262c50:
    // 0x262c50: 0xd9e5  .word       0x0000D9E5                   # move        $k1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_262c54:
    // 0x262c54: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x262c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262c58:
    // 0x262c58: 0x0  nop
    ctx->pc = 0x262c58u;
    // NOP
label_262c5c:
    // 0x262c5c: 0x0  nop
    ctx->pc = 0x262c5cu;
    // NOP
label_262c60:
    // 0x262c60: 0xd9f1  tgeu        $zero, $zero, 871
    ctx->pc = 0x262c60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262c64:
    // 0x262c64: 0x37d0  .word       0x000037D0                   # mfhi        $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_262c68:
    // 0x262c68: 0x0  nop
    ctx->pc = 0x262c68u;
    // NOP
label_262c6c:
    // 0x262c6c: 0x0  nop
    ctx->pc = 0x262c6cu;
    // NOP
label_262c70:
    // 0x262c70: 0xd9f8  dsll        $k1, $zero, 7
    ctx->pc = 0x262c70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << 7);
label_262c74:
    // 0x262c74: 0x84a0  .word       0x000084A0                   # add         $s0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_262c78:
    // 0x262c78: 0x0  nop
    ctx->pc = 0x262c78u;
    // NOP
label_262c7c:
    // 0x262c7c: 0x0  nop
    ctx->pc = 0x262c7cu;
    // NOP
label_262c80:
    // 0x262c80: 0xda09  .word       0x0000DA09                   # jalr        $k1, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_262c84:
    if (ctx->pc == 0x262C84u) {
        ctx->pc = 0x262C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C80u;
        // 0x262c84: 0x8b40  sll         $s1, $zero, 13 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C88u;
        goto label_262c88;
    }
    ctx->pc = 0x262C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 27, 0x262C88u);
        ctx->pc = 0x262C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C80u;
        // 0x262c84: 0x8b40  sll         $s1, $zero, 13 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262C80u, 0x262C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262C88u;
label_262c88:
    // 0x262c88: 0x0  nop
    ctx->pc = 0x262c88u;
    // NOP
label_262c8c:
    // 0x262c8c: 0x0  nop
    ctx->pc = 0x262c8cu;
    // NOP
label_262c90:
    // 0x262c90: 0xda1b  .word       0x0000DA1B                   # divu        $k1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262c90u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262c94:
    // 0x262c94: 0x4c80  sll         $t1, $zero, 18
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262c98:
    // 0x262c98: 0x0  nop
    ctx->pc = 0x262c98u;
    // NOP
label_262c9c:
    // 0x262c9c: 0x0  nop
    ctx->pc = 0x262c9cu;
    // NOP
label_262ca0:
    // 0x262ca0: 0xda25  .word       0x0000DA25                   # move        $k1, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ca0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_262ca4:
    // 0x262ca4: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x262ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_262ca8:
    // 0x262ca8: 0x0  nop
    ctx->pc = 0x262ca8u;
    // NOP
label_262cac:
    // 0x262cac: 0x0  nop
    ctx->pc = 0x262cacu;
    // NOP
label_262cb0:
    // 0x262cb0: 0xda2f  .word       0x0000DA2F                   # dsubu       $k1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262cb0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_262cb4:
    // 0x262cb4: 0x4170  tge         $zero, $zero, 261
    ctx->pc = 0x262cb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262cb8:
    // 0x262cb8: 0x0  nop
    ctx->pc = 0x262cb8u;
    // NOP
label_262cbc:
    // 0x262cbc: 0x0  nop
    ctx->pc = 0x262cbcu;
    // NOP
label_262cc0:
    // 0x262cc0: 0xda38  dsll        $k1, $zero, 8
    ctx->pc = 0x262cc0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << 8);
label_262cc4:
    // 0x262cc4: 0x5280  sll         $t2, $zero, 10
    ctx->pc = 0x262cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_262cc8:
    // 0x262cc8: 0x0  nop
    ctx->pc = 0x262cc8u;
    // NOP
label_262ccc:
    // 0x262ccc: 0x0  nop
    ctx->pc = 0x262cccu;
    // NOP
label_262cd0:
    // 0x262cd0: 0xda43  sra         $k1, $zero, 9
    ctx->pc = 0x262cd0u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 0), 9));
label_262cd4:
    // 0x262cd4: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_262cd8:
    // 0x262cd8: 0x0  nop
    ctx->pc = 0x262cd8u;
    // NOP
label_262cdc:
    // 0x262cdc: 0x0  nop
    ctx->pc = 0x262cdcu;
    // NOP
label_262ce0:
    // 0x262ce0: 0xda4c  syscall     873
    ctx->pc = 0x262ce0u;
    ctx->pc = 0x262CE4u;
runtime->handleSyscall(rdram, ctx, 0x369u);
label_262ce4:
    // 0x262ce4: 0x6580  sll         $t4, $zero, 22
    ctx->pc = 0x262ce4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_262ce8:
    // 0x262ce8: 0x0  nop
    ctx->pc = 0x262ce8u;
    // NOP
label_262cec:
    // 0x262cec: 0x0  nop
    ctx->pc = 0x262cecu;
    // NOP
label_262cf0:
    // 0x262cf0: 0xda59  .word       0x0000DA59                   # multu       $zero, $zero # 0000DA40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262cf0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262cf4:
    // 0x262cf4: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x262cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262cf8:
    // 0x262cf8: 0x0  nop
    ctx->pc = 0x262cf8u;
    // NOP
label_262cfc:
    // 0x262cfc: 0x0  nop
    ctx->pc = 0x262cfcu;
    // NOP
label_262d00:
    // 0x262d00: 0xda64  .word       0x0000DA64                   # and         $k1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d00u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262d04:
    // 0x262d04: 0x6eb0  tge         $zero, $zero, 442
    ctx->pc = 0x262d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262d08:
    // 0x262d08: 0x0  nop
    ctx->pc = 0x262d08u;
    // NOP
label_262d0c:
    // 0x262d0c: 0x0  nop
    ctx->pc = 0x262d0cu;
    // NOP
label_262d10:
    // 0x262d10: 0xda72  tlt         $zero, $zero, 873
    ctx->pc = 0x262d10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262d14:
    // 0x262d14: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_262d18:
    // 0x262d18: 0x0  nop
    ctx->pc = 0x262d18u;
    // NOP
label_262d1c:
    // 0x262d1c: 0x0  nop
    ctx->pc = 0x262d1cu;
    // NOP
label_262d20:
    // 0x262d20: 0xda85  .word       0x0000DA85                   # INVALID     $zero, $zero, -0x257B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262D20 raw=0x0000DA85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262d24:
    // 0x262d24: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x262d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262d28:
    // 0x262d28: 0x0  nop
    ctx->pc = 0x262d28u;
    // NOP
label_262d2c:
    // 0x262d2c: 0x0  nop
    ctx->pc = 0x262d2cu;
    // NOP
label_262d30:
    // 0x262d30: 0xda99  .word       0x0000DA99                   # multu       $zero, $zero # 0000DA80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262d34:
    // 0x262d34: 0x5360  .word       0x00005360                   # add         $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262d38:
    // 0x262d38: 0x0  nop
    ctx->pc = 0x262d38u;
    // NOP
label_262d3c:
    // 0x262d3c: 0x0  nop
    ctx->pc = 0x262d3cu;
    // NOP
label_262d40:
    // 0x262d40: 0xdaa4  .word       0x0000DAA4                   # and         $k1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d40u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262d44:
    // 0x262d44: 0x5320  .word       0x00005320                   # add         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262d48:
    // 0x262d48: 0x0  nop
    ctx->pc = 0x262d48u;
    // NOP
label_262d4c:
    // 0x262d4c: 0x0  nop
    ctx->pc = 0x262d4cu;
    // NOP
label_262d50:
    // 0x262d50: 0xdaaf  .word       0x0000DAAF                   # dsubu       $k1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_262d54:
    // 0x262d54: 0x75f0  tge         $zero, $zero, 471
    ctx->pc = 0x262d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262d58:
    // 0x262d58: 0x0  nop
    ctx->pc = 0x262d58u;
    // NOP
label_262d5c:
    // 0x262d5c: 0x0  nop
    ctx->pc = 0x262d5cu;
    // NOP
label_262d60:
    // 0x262d60: 0xdabe  dsrl32      $k1, $zero, 10
    ctx->pc = 0x262d60u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (32 + 10));
label_262d64:
    // 0x262d64: 0xb280  sll         $s6, $zero, 10
    ctx->pc = 0x262d64u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_262d68:
    // 0x262d68: 0x0  nop
    ctx->pc = 0x262d68u;
    // NOP
label_262d6c:
    // 0x262d6c: 0x0  nop
    ctx->pc = 0x262d6cu;
    // NOP
label_262d70:
    // 0x262d70: 0xdad5  .word       0x0000DAD5                   # INVALID     $zero, $zero, -0x252B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x262D70 raw=0x0000DAD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262d74:
    // 0x262d74: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x262d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262d78:
    // 0x262d78: 0x0  nop
    ctx->pc = 0x262d78u;
    // NOP
label_262d7c:
    // 0x262d7c: 0x0  nop
    ctx->pc = 0x262d7cu;
    // NOP
label_262d80:
    // 0x262d80: 0xdaec  .word       0x0000DAEC                   # dadd        $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_262d84:
    // 0x262d84: 0x72d0  .word       0x000072D0                   # mfhi        $t6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262d84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_262d88:
    // 0x262d88: 0x0  nop
    ctx->pc = 0x262d88u;
    // NOP
label_262d8c:
    // 0x262d8c: 0x0  nop
    ctx->pc = 0x262d8cu;
    // NOP
label_262d90:
    // 0x262d90: 0xdafb  dsra        $k1, $zero, 11
    ctx->pc = 0x262d90u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 11);
label_262d94:
    // 0x262d94: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x262d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262d98:
    // 0x262d98: 0x0  nop
    ctx->pc = 0x262d98u;
    // NOP
label_262d9c:
    // 0x262d9c: 0x0  nop
    ctx->pc = 0x262d9cu;
    // NOP
label_262da0:
    // 0x262da0: 0xdb04  .word       0x0000DB04                   # sllv        $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262da0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262da4:
    // 0x262da4: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x262da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262da8:
    // 0x262da8: 0x0  nop
    ctx->pc = 0x262da8u;
    // NOP
label_262dac:
    // 0x262dac: 0x0  nop
    ctx->pc = 0x262dacu;
    // NOP
label_262db0:
    // 0x262db0: 0xdb10  .word       0x0000DB10                   # mfhi        $k1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262db0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_262db4:
    // 0x262db4: 0xa1a0  .word       0x0000A1A0                   # add         $s4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_262db8:
    // 0x262db8: 0x0  nop
    ctx->pc = 0x262db8u;
    // NOP
label_262dbc:
    // 0x262dbc: 0x0  nop
    ctx->pc = 0x262dbcu;
    // NOP
label_262dc0:
    // 0x262dc0: 0xdb25  .word       0x0000DB25                   # move        $k1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262dc0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_262dc4:
    // 0x262dc4: 0x60b0  tge         $zero, $zero, 386
    ctx->pc = 0x262dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262dc8:
    // 0x262dc8: 0x0  nop
    ctx->pc = 0x262dc8u;
    // NOP
label_262dcc:
    // 0x262dcc: 0x0  nop
    ctx->pc = 0x262dccu;
    // NOP
label_262dd0:
    // 0x262dd0: 0xdb32  tlt         $zero, $zero, 876
    ctx->pc = 0x262dd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262dd4:
    // 0x262dd4: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_262dd8:
    // 0x262dd8: 0x0  nop
    ctx->pc = 0x262dd8u;
    // NOP
label_262ddc:
    // 0x262ddc: 0x0  nop
    ctx->pc = 0x262ddcu;
    // NOP
label_262de0:
    // 0x262de0: 0xdb42  srl         $k1, $zero, 13
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_262de4:
    // 0x262de4: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_262de8:
    // 0x262de8: 0x0  nop
    ctx->pc = 0x262de8u;
    // NOP
label_262dec:
    // 0x262dec: 0x0  nop
    ctx->pc = 0x262decu;
    // NOP
label_262df0:
    // 0x262df0: 0xdb52  .word       0x0000DB52                   # mflo        $k1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262df0u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_262df4:
    // 0x262df4: 0x5110  .word       0x00005110                   # mfhi        $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262df4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262df8:
    // 0x262df8: 0x0  nop
    ctx->pc = 0x262df8u;
    // NOP
label_262dfc:
    // 0x262dfc: 0x0  nop
    ctx->pc = 0x262dfcu;
    // NOP
label_262e00:
    // 0x262e00: 0xdb5d  .word       0x0000DB5D                   # dmultu      $zero, $zero # 0000DB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262E00 raw=0x0000DB5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262e04:
    // 0x262e04: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_262e08:
    // 0x262e08: 0x0  nop
    ctx->pc = 0x262e08u;
    // NOP
label_262e0c:
    // 0x262e0c: 0x0  nop
    ctx->pc = 0x262e0cu;
    // NOP
label_262e10:
    // 0x262e10: 0xdb67  .word       0x0000DB67                   # not         $k1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e10u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_262e14:
    // 0x262e14: 0x3c80  sll         $a3, $zero, 18
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262e18:
    // 0x262e18: 0x0  nop
    ctx->pc = 0x262e18u;
    // NOP
label_262e1c:
    // 0x262e1c: 0x0  nop
    ctx->pc = 0x262e1cu;
    // NOP
label_262e20:
    // 0x262e20: 0xdb6f  .word       0x0000DB6F                   # dsubu       $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e20u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_262e24:
    // 0x262e24: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x262e24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_262e28:
    // 0x262e28: 0x0  nop
    ctx->pc = 0x262e28u;
    // NOP
label_262e2c:
    // 0x262e2c: 0x0  nop
    ctx->pc = 0x262e2cu;
    // NOP
label_262e30:
    // 0x262e30: 0xdb7d  .word       0x0000DB7D                   # INVALID     $zero, $zero, -0x2483 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x262E30 raw=0x0000DB7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262e34:
    // 0x262e34: 0x70a0  .word       0x000070A0                   # add         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262e38:
    // 0x262e38: 0x0  nop
    ctx->pc = 0x262e38u;
    // NOP
label_262e3c:
    // 0x262e3c: 0x0  nop
    ctx->pc = 0x262e3cu;
    // NOP
label_262e40:
    // 0x262e40: 0xdb8c  syscall     878
    ctx->pc = 0x262e40u;
    ctx->pc = 0x262E44u;
runtime->handleSyscall(rdram, ctx, 0x36Eu);
label_262e44:
    // 0x262e44: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_262e48:
    // 0x262e48: 0x0  nop
    ctx->pc = 0x262e48u;
    // NOP
label_262e4c:
    // 0x262e4c: 0x0  nop
    ctx->pc = 0x262e4cu;
    // NOP
label_262e50:
    // 0x262e50: 0xdb95  .word       0x0000DB95                   # INVALID     $zero, $zero, -0x246B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x262E50 raw=0x0000DB95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262e54:
    // 0x262e54: 0x4230  tge         $zero, $zero, 264
    ctx->pc = 0x262e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262e58:
    // 0x262e58: 0x0  nop
    ctx->pc = 0x262e58u;
    // NOP
label_262e5c:
    // 0x262e5c: 0x0  nop
    ctx->pc = 0x262e5cu;
    // NOP
label_262e60:
    // 0x262e60: 0xdb9e  .word       0x0000DB9E                   # ddiv        $k1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x262E60 raw=0x0000DB9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262e64:
    // 0x262e64: 0x41d0  .word       0x000041D0                   # mfhi        $t0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e64u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_262e68:
    // 0x262e68: 0x0  nop
    ctx->pc = 0x262e68u;
    // NOP
label_262e6c:
    // 0x262e6c: 0x0  nop
    ctx->pc = 0x262e6cu;
    // NOP
label_262e70:
    // 0x262e70: 0xdba7  .word       0x0000DBA7                   # not         $k1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e70u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_262e74:
    // 0x262e74: 0x60b0  tge         $zero, $zero, 386
    ctx->pc = 0x262e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262e78:
    // 0x262e78: 0x0  nop
    ctx->pc = 0x262e78u;
    // NOP
label_262e7c:
    // 0x262e7c: 0x0  nop
    ctx->pc = 0x262e7cu;
    // NOP
label_262e80:
    // 0x262e80: 0xdbb4  teq         $zero, $zero, 878
    ctx->pc = 0x262e80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262e84:
    // 0x262e84: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262e88:
    // 0x262e88: 0x0  nop
    ctx->pc = 0x262e88u;
    // NOP
label_262e8c:
    // 0x262e8c: 0x0  nop
    ctx->pc = 0x262e8cu;
    // NOP
label_262e90:
    // 0x262e90: 0xdbbf  dsra32      $k1, $zero, 14
    ctx->pc = 0x262e90u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 14));
label_262e94:
    // 0x262e94: 0x6820  add         $t5, $zero, $zero
    ctx->pc = 0x262e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_262e98:
    // 0x262e98: 0x0  nop
    ctx->pc = 0x262e98u;
    // NOP
label_262e9c:
    // 0x262e9c: 0x0  nop
    ctx->pc = 0x262e9cu;
    // NOP
label_262ea0:
    // 0x262ea0: 0xdbcd  break       0, 879
    ctx->pc = 0x262ea0u;
    runtime->handleBreak(rdram, ctx);
label_262ea4:
    // 0x262ea4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x262ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262ea8:
    // 0x262ea8: 0x0  nop
    ctx->pc = 0x262ea8u;
    // NOP
label_262eac:
    // 0x262eac: 0x0  nop
    ctx->pc = 0x262eacu;
    // NOP
label_262eb0:
    // 0x262eb0: 0xdbdb  .word       0x0000DBDB                   # divu        $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262eb0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262eb4:
    // 0x262eb4: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x262eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_262eb8:
    // 0x262eb8: 0x0  nop
    ctx->pc = 0x262eb8u;
    // NOP
label_262ebc:
    // 0x262ebc: 0x0  nop
    ctx->pc = 0x262ebcu;
    // NOP
label_262ec0:
    // 0x262ec0: 0xdbec  .word       0x0000DBEC                   # dadd        $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_262ec4:
    // 0x262ec4: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ec4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262ec8:
    // 0x262ec8: 0x0  nop
    ctx->pc = 0x262ec8u;
    // NOP
label_262ecc:
    // 0x262ecc: 0x0  nop
    ctx->pc = 0x262eccu;
    // NOP
label_262ed0:
    // 0x262ed0: 0xdbfc  dsll32      $k1, $zero, 15
    ctx->pc = 0x262ed0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (32 + 15));
label_262ed4:
    // 0x262ed4: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x262ed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262ed8:
    // 0x262ed8: 0x0  nop
    ctx->pc = 0x262ed8u;
    // NOP
label_262edc:
    // 0x262edc: 0x0  nop
    ctx->pc = 0x262edcu;
    // NOP
label_262ee0:
    // 0x262ee0: 0xdc09  .word       0x0000DC09                   # jalr        $k1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_262ee4:
    if (ctx->pc == 0x262EE4u) {
        ctx->pc = 0x262EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EE0u;
        // 0x262ee4: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262EE8u;
        goto label_262ee8;
    }
    ctx->pc = 0x262EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 27, 0x262EE8u);
        ctx->pc = 0x262EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EE0u;
        // 0x262ee4: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262EE0u, 0x262EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262EE8u;
label_262ee8:
    // 0x262ee8: 0x0  nop
    ctx->pc = 0x262ee8u;
    // NOP
label_262eec:
    // 0x262eec: 0x0  nop
    ctx->pc = 0x262eecu;
    // NOP
label_262ef0:
    // 0x262ef0: 0xdc14  .word       0x0000DC14                   # dsllv       $k1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ef0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262ef4:
    // 0x262ef4: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ef4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_262ef8:
    // 0x262ef8: 0x0  nop
    ctx->pc = 0x262ef8u;
    // NOP
label_262efc:
    // 0x262efc: 0x0  nop
    ctx->pc = 0x262efcu;
    // NOP
label_262f00:
    // 0x262f00: 0xdc1d  .word       0x0000DC1D                   # dmultu      $zero, $zero # 0000DC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262F00 raw=0x0000DC1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262f04:
    // 0x262f04: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x262f04u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_262f08:
    // 0x262f08: 0x0  nop
    ctx->pc = 0x262f08u;
    // NOP
label_262f0c:
    // 0x262f0c: 0x0  nop
    ctx->pc = 0x262f0cu;
    // NOP
label_262f10:
    // 0x262f10: 0xdc2b  .word       0x0000DC2B                   # sltu        $k1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f10u;
    SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_262f14:
    // 0x262f14: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262f18:
    // 0x262f18: 0x0  nop
    ctx->pc = 0x262f18u;
    // NOP
label_262f1c:
    // 0x262f1c: 0x0  nop
    ctx->pc = 0x262f1cu;
    // NOP
label_262f20:
    // 0x262f20: 0xdc37  .word       0x0000DC37                   # INVALID     $zero, $zero, -0x23C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262F20 raw=0x0000DC37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262f24:
    // 0x262f24: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_262f28:
    // 0x262f28: 0x0  nop
    ctx->pc = 0x262f28u;
    // NOP
label_262f2c:
    // 0x262f2c: 0x0  nop
    ctx->pc = 0x262f2cu;
    // NOP
label_262f30:
    // 0x262f30: 0xdc46  .word       0x0000DC46                   # srlv        $k1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f30u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262f34:
    // 0x262f34: 0x7ad0  .word       0x00007AD0                   # mfhi        $t7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262f38:
    // 0x262f38: 0x0  nop
    ctx->pc = 0x262f38u;
    // NOP
label_262f3c:
    // 0x262f3c: 0x0  nop
    ctx->pc = 0x262f3cu;
    // NOP
label_262f40:
    // 0x262f40: 0xdc56  .word       0x0000DC56                   # dsrlv       $k1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f40u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_262f44:
    // 0x262f44: 0x7b10  .word       0x00007B10                   # mfhi        $t7 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f44u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262f48:
    // 0x262f48: 0x0  nop
    ctx->pc = 0x262f48u;
    // NOP
label_262f4c:
    // 0x262f4c: 0x0  nop
    ctx->pc = 0x262f4cu;
    // NOP
label_262f50:
    // 0x262f50: 0xdc66  .word       0x0000DC66                   # xor         $k1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_262f54:
    // 0x262f54: 0x9210  .word       0x00009210                   # mfhi        $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f54u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_262f58:
    // 0x262f58: 0x0  nop
    ctx->pc = 0x262f58u;
    // NOP
label_262f5c:
    // 0x262f5c: 0x0  nop
    ctx->pc = 0x262f5cu;
    // NOP
label_262f60:
    // 0x262f60: 0xdc79  .word       0x0000DC79                   # INVALID     $zero, $zero, -0x2387 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x262F60 raw=0x0000DC79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262f64:
    // 0x262f64: 0x52a0  .word       0x000052A0                   # add         $t2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262f68:
    // 0x262f68: 0x0  nop
    ctx->pc = 0x262f68u;
    // NOP
label_262f6c:
    // 0x262f6c: 0x0  nop
    ctx->pc = 0x262f6cu;
    // NOP
label_262f70:
    // 0x262f70: 0xdc84  .word       0x0000DC84                   # sllv        $k1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f70u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262f74:
    // 0x262f74: 0x8f70  tge         $zero, $zero, 573
    ctx->pc = 0x262f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262f78:
    // 0x262f78: 0x0  nop
    ctx->pc = 0x262f78u;
    // NOP
label_262f7c:
    // 0x262f7c: 0x0  nop
    ctx->pc = 0x262f7cu;
    // NOP
label_262f80:
    // 0x262f80: 0xdc96  .word       0x0000DC96                   # dsrlv       $k1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f80u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_262f84:
    // 0x262f84: 0x5f40  sll         $t3, $zero, 29
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262f88:
    // 0x262f88: 0x0  nop
    ctx->pc = 0x262f88u;
    // NOP
label_262f8c:
    // 0x262f8c: 0x0  nop
    ctx->pc = 0x262f8cu;
    // NOP
label_262f90:
    // 0x262f90: 0xdca2  .word       0x0000DCA2                   # neg         $k1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262f90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 27, (int32_t)tmp); }
label_262f94:
    // 0x262f94: 0x77c0  sll         $t6, $zero, 31
    ctx->pc = 0x262f94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_262f98:
    // 0x262f98: 0x0  nop
    ctx->pc = 0x262f98u;
    // NOP
label_262f9c:
    // 0x262f9c: 0x0  nop
    ctx->pc = 0x262f9cu;
    // NOP
label_262fa0:
    // 0x262fa0: 0xdcb1  tgeu        $zero, $zero, 882
    ctx->pc = 0x262fa0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262fa4:
    // 0x262fa4: 0x4790  .word       0x00004790                   # mfhi        $t0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262fa4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_262fa8:
    // 0x262fa8: 0x0  nop
    ctx->pc = 0x262fa8u;
    // NOP
label_262fac:
    // 0x262fac: 0x0  nop
    ctx->pc = 0x262facu;
    // NOP
label_262fb0:
    // 0x262fb0: 0xdcba  dsrl        $k1, $zero, 18
    ctx->pc = 0x262fb0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 18);
label_262fb4:
    // 0x262fb4: 0x3630  tge         $zero, $zero, 216
    ctx->pc = 0x262fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262fb8:
    // 0x262fb8: 0x0  nop
    ctx->pc = 0x262fb8u;
    // NOP
label_262fbc:
    // 0x262fbc: 0x0  nop
    ctx->pc = 0x262fbcu;
    // NOP
label_262fc0:
    // 0x262fc0: 0xdcc1  .word       0x0000DCC1                   # INVALID     $zero, $zero, -0x233F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262FC0 raw=0x0000DCC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262fc4:
    // 0x262fc4: 0x7340  sll         $t6, $zero, 13
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x262fc8u;
    return;
}
