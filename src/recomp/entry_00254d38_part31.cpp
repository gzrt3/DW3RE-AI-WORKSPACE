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


void entry_00254d38_part31(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x263798u: goto label_263798;
        case 0x26379cu: goto label_26379c;
        case 0x2637a0u: goto label_2637a0;
        case 0x2637a4u: goto label_2637a4;
        case 0x2637a8u: goto label_2637a8;
        case 0x2637acu: goto label_2637ac;
        case 0x2637b0u: goto label_2637b0;
        case 0x2637b4u: goto label_2637b4;
        case 0x2637b8u: goto label_2637b8;
        case 0x2637bcu: goto label_2637bc;
        case 0x2637c0u: goto label_2637c0;
        case 0x2637c4u: goto label_2637c4;
        case 0x2637c8u: goto label_2637c8;
        case 0x2637ccu: goto label_2637cc;
        case 0x2637d0u: goto label_2637d0;
        case 0x2637d4u: goto label_2637d4;
        case 0x2637d8u: goto label_2637d8;
        case 0x2637dcu: goto label_2637dc;
        case 0x2637e0u: goto label_2637e0;
        case 0x2637e4u: goto label_2637e4;
        case 0x2637e8u: goto label_2637e8;
        case 0x2637ecu: goto label_2637ec;
        case 0x2637f0u: goto label_2637f0;
        case 0x2637f4u: goto label_2637f4;
        case 0x2637f8u: goto label_2637f8;
        case 0x2637fcu: goto label_2637fc;
        case 0x263800u: goto label_263800;
        case 0x263804u: goto label_263804;
        case 0x263808u: goto label_263808;
        case 0x26380cu: goto label_26380c;
        case 0x263810u: goto label_263810;
        case 0x263814u: goto label_263814;
        case 0x263818u: goto label_263818;
        case 0x26381cu: goto label_26381c;
        case 0x263820u: goto label_263820;
        case 0x263824u: goto label_263824;
        case 0x263828u: goto label_263828;
        case 0x26382cu: goto label_26382c;
        case 0x263830u: goto label_263830;
        case 0x263834u: goto label_263834;
        case 0x263838u: goto label_263838;
        case 0x26383cu: goto label_26383c;
        case 0x263840u: goto label_263840;
        case 0x263844u: goto label_263844;
        case 0x263848u: goto label_263848;
        case 0x26384cu: goto label_26384c;
        case 0x263850u: goto label_263850;
        case 0x263854u: goto label_263854;
        case 0x263858u: goto label_263858;
        case 0x26385cu: goto label_26385c;
        case 0x263860u: goto label_263860;
        case 0x263864u: goto label_263864;
        case 0x263868u: goto label_263868;
        case 0x26386cu: goto label_26386c;
        case 0x263870u: goto label_263870;
        case 0x263874u: goto label_263874;
        case 0x263878u: goto label_263878;
        case 0x26387cu: goto label_26387c;
        case 0x263880u: goto label_263880;
        case 0x263884u: goto label_263884;
        case 0x263888u: goto label_263888;
        case 0x26388cu: goto label_26388c;
        case 0x263890u: goto label_263890;
        case 0x263894u: goto label_263894;
        case 0x263898u: goto label_263898;
        case 0x26389cu: goto label_26389c;
        case 0x2638a0u: goto label_2638a0;
        case 0x2638a4u: goto label_2638a4;
        case 0x2638a8u: goto label_2638a8;
        case 0x2638acu: goto label_2638ac;
        case 0x2638b0u: goto label_2638b0;
        case 0x2638b4u: goto label_2638b4;
        case 0x2638b8u: goto label_2638b8;
        case 0x2638bcu: goto label_2638bc;
        case 0x2638c0u: goto label_2638c0;
        case 0x2638c4u: goto label_2638c4;
        case 0x2638c8u: goto label_2638c8;
        case 0x2638ccu: goto label_2638cc;
        case 0x2638d0u: goto label_2638d0;
        case 0x2638d4u: goto label_2638d4;
        case 0x2638d8u: goto label_2638d8;
        case 0x2638dcu: goto label_2638dc;
        case 0x2638e0u: goto label_2638e0;
        case 0x2638e4u: goto label_2638e4;
        case 0x2638e8u: goto label_2638e8;
        case 0x2638ecu: goto label_2638ec;
        case 0x2638f0u: goto label_2638f0;
        case 0x2638f4u: goto label_2638f4;
        case 0x2638f8u: goto label_2638f8;
        case 0x2638fcu: goto label_2638fc;
        case 0x263900u: goto label_263900;
        case 0x263904u: goto label_263904;
        case 0x263908u: goto label_263908;
        case 0x26390cu: goto label_26390c;
        case 0x263910u: goto label_263910;
        case 0x263914u: goto label_263914;
        case 0x263918u: goto label_263918;
        case 0x26391cu: goto label_26391c;
        case 0x263920u: goto label_263920;
        case 0x263924u: goto label_263924;
        case 0x263928u: goto label_263928;
        case 0x26392cu: goto label_26392c;
        case 0x263930u: goto label_263930;
        case 0x263934u: goto label_263934;
        case 0x263938u: goto label_263938;
        case 0x26393cu: goto label_26393c;
        case 0x263940u: goto label_263940;
        case 0x263944u: goto label_263944;
        case 0x263948u: goto label_263948;
        case 0x26394cu: goto label_26394c;
        case 0x263950u: goto label_263950;
        case 0x263954u: goto label_263954;
        case 0x263958u: goto label_263958;
        case 0x26395cu: goto label_26395c;
        case 0x263960u: goto label_263960;
        case 0x263964u: goto label_263964;
        case 0x263968u: goto label_263968;
        case 0x26396cu: goto label_26396c;
        case 0x263970u: goto label_263970;
        case 0x263974u: goto label_263974;
        case 0x263978u: goto label_263978;
        case 0x26397cu: goto label_26397c;
        case 0x263980u: goto label_263980;
        case 0x263984u: goto label_263984;
        case 0x263988u: goto label_263988;
        case 0x26398cu: goto label_26398c;
        case 0x263990u: goto label_263990;
        case 0x263994u: goto label_263994;
        case 0x263998u: goto label_263998;
        case 0x26399cu: goto label_26399c;
        case 0x2639a0u: goto label_2639a0;
        case 0x2639a4u: goto label_2639a4;
        case 0x2639a8u: goto label_2639a8;
        case 0x2639acu: goto label_2639ac;
        case 0x2639b0u: goto label_2639b0;
        case 0x2639b4u: goto label_2639b4;
        case 0x2639b8u: goto label_2639b8;
        case 0x2639bcu: goto label_2639bc;
        case 0x2639c0u: goto label_2639c0;
        case 0x2639c4u: goto label_2639c4;
        case 0x2639c8u: goto label_2639c8;
        case 0x2639ccu: goto label_2639cc;
        case 0x2639d0u: goto label_2639d0;
        case 0x2639d4u: goto label_2639d4;
        case 0x2639d8u: goto label_2639d8;
        case 0x2639dcu: goto label_2639dc;
        case 0x2639e0u: goto label_2639e0;
        case 0x2639e4u: goto label_2639e4;
        case 0x2639e8u: goto label_2639e8;
        case 0x2639ecu: goto label_2639ec;
        case 0x2639f0u: goto label_2639f0;
        case 0x2639f4u: goto label_2639f4;
        case 0x2639f8u: goto label_2639f8;
        case 0x2639fcu: goto label_2639fc;
        case 0x263a00u: goto label_263a00;
        case 0x263a04u: goto label_263a04;
        case 0x263a08u: goto label_263a08;
        case 0x263a0cu: goto label_263a0c;
        case 0x263a10u: goto label_263a10;
        case 0x263a14u: goto label_263a14;
        case 0x263a18u: goto label_263a18;
        case 0x263a1cu: goto label_263a1c;
        case 0x263a20u: goto label_263a20;
        case 0x263a24u: goto label_263a24;
        case 0x263a28u: goto label_263a28;
        case 0x263a2cu: goto label_263a2c;
        case 0x263a30u: goto label_263a30;
        case 0x263a34u: goto label_263a34;
        case 0x263a38u: goto label_263a38;
        case 0x263a3cu: goto label_263a3c;
        case 0x263a40u: goto label_263a40;
        case 0x263a44u: goto label_263a44;
        case 0x263a48u: goto label_263a48;
        case 0x263a4cu: goto label_263a4c;
        case 0x263a50u: goto label_263a50;
        case 0x263a54u: goto label_263a54;
        case 0x263a58u: goto label_263a58;
        case 0x263a5cu: goto label_263a5c;
        case 0x263a60u: goto label_263a60;
        case 0x263a64u: goto label_263a64;
        case 0x263a68u: goto label_263a68;
        case 0x263a6cu: goto label_263a6c;
        case 0x263a70u: goto label_263a70;
        case 0x263a74u: goto label_263a74;
        case 0x263a78u: goto label_263a78;
        case 0x263a7cu: goto label_263a7c;
        case 0x263a80u: goto label_263a80;
        case 0x263a84u: goto label_263a84;
        case 0x263a88u: goto label_263a88;
        case 0x263a8cu: goto label_263a8c;
        case 0x263a90u: goto label_263a90;
        case 0x263a94u: goto label_263a94;
        case 0x263a98u: goto label_263a98;
        case 0x263a9cu: goto label_263a9c;
        case 0x263aa0u: goto label_263aa0;
        case 0x263aa4u: goto label_263aa4;
        case 0x263aa8u: goto label_263aa8;
        case 0x263aacu: goto label_263aac;
        case 0x263ab0u: goto label_263ab0;
        case 0x263ab4u: goto label_263ab4;
        case 0x263ab8u: goto label_263ab8;
        case 0x263abcu: goto label_263abc;
        case 0x263ac0u: goto label_263ac0;
        case 0x263ac4u: goto label_263ac4;
        case 0x263ac8u: goto label_263ac8;
        case 0x263accu: goto label_263acc;
        case 0x263ad0u: goto label_263ad0;
        case 0x263ad4u: goto label_263ad4;
        case 0x263ad8u: goto label_263ad8;
        case 0x263adcu: goto label_263adc;
        case 0x263ae0u: goto label_263ae0;
        case 0x263ae4u: goto label_263ae4;
        case 0x263ae8u: goto label_263ae8;
        case 0x263aecu: goto label_263aec;
        case 0x263af0u: goto label_263af0;
        case 0x263af4u: goto label_263af4;
        case 0x263af8u: goto label_263af8;
        case 0x263afcu: goto label_263afc;
        case 0x263b00u: goto label_263b00;
        case 0x263b04u: goto label_263b04;
        case 0x263b08u: goto label_263b08;
        case 0x263b0cu: goto label_263b0c;
        case 0x263b10u: goto label_263b10;
        case 0x263b14u: goto label_263b14;
        case 0x263b18u: goto label_263b18;
        case 0x263b1cu: goto label_263b1c;
        case 0x263b20u: goto label_263b20;
        case 0x263b24u: goto label_263b24;
        case 0x263b28u: goto label_263b28;
        case 0x263b2cu: goto label_263b2c;
        case 0x263b30u: goto label_263b30;
        case 0x263b34u: goto label_263b34;
        case 0x263b38u: goto label_263b38;
        case 0x263b3cu: goto label_263b3c;
        case 0x263b40u: goto label_263b40;
        case 0x263b44u: goto label_263b44;
        case 0x263b48u: goto label_263b48;
        case 0x263b4cu: goto label_263b4c;
        case 0x263b50u: goto label_263b50;
        case 0x263b54u: goto label_263b54;
        case 0x263b58u: goto label_263b58;
        case 0x263b5cu: goto label_263b5c;
        case 0x263b60u: goto label_263b60;
        case 0x263b64u: goto label_263b64;
        case 0x263b68u: goto label_263b68;
        case 0x263b6cu: goto label_263b6c;
        case 0x263b70u: goto label_263b70;
        case 0x263b74u: goto label_263b74;
        case 0x263b78u: goto label_263b78;
        case 0x263b7cu: goto label_263b7c;
        case 0x263b80u: goto label_263b80;
        case 0x263b84u: goto label_263b84;
        case 0x263b88u: goto label_263b88;
        case 0x263b8cu: goto label_263b8c;
        case 0x263b90u: goto label_263b90;
        case 0x263b94u: goto label_263b94;
        case 0x263b98u: goto label_263b98;
        case 0x263b9cu: goto label_263b9c;
        case 0x263ba0u: goto label_263ba0;
        case 0x263ba4u: goto label_263ba4;
        case 0x263ba8u: goto label_263ba8;
        case 0x263bacu: goto label_263bac;
        case 0x263bb0u: goto label_263bb0;
        case 0x263bb4u: goto label_263bb4;
        case 0x263bb8u: goto label_263bb8;
        case 0x263bbcu: goto label_263bbc;
        case 0x263bc0u: goto label_263bc0;
        case 0x263bc4u: goto label_263bc4;
        case 0x263bc8u: goto label_263bc8;
        case 0x263bccu: goto label_263bcc;
        case 0x263bd0u: goto label_263bd0;
        case 0x263bd4u: goto label_263bd4;
        case 0x263bd8u: goto label_263bd8;
        case 0x263bdcu: goto label_263bdc;
        case 0x263be0u: goto label_263be0;
        case 0x263be4u: goto label_263be4;
        case 0x263be8u: goto label_263be8;
        case 0x263becu: goto label_263bec;
        case 0x263bf0u: goto label_263bf0;
        case 0x263bf4u: goto label_263bf4;
        case 0x263bf8u: goto label_263bf8;
        case 0x263bfcu: goto label_263bfc;
        case 0x263c00u: goto label_263c00;
        case 0x263c04u: goto label_263c04;
        case 0x263c08u: goto label_263c08;
        case 0x263c0cu: goto label_263c0c;
        case 0x263c10u: goto label_263c10;
        case 0x263c14u: goto label_263c14;
        case 0x263c18u: goto label_263c18;
        case 0x263c1cu: goto label_263c1c;
        case 0x263c20u: goto label_263c20;
        case 0x263c24u: goto label_263c24;
        case 0x263c28u: goto label_263c28;
        case 0x263c2cu: goto label_263c2c;
        case 0x263c30u: goto label_263c30;
        case 0x263c34u: goto label_263c34;
        case 0x263c38u: goto label_263c38;
        case 0x263c3cu: goto label_263c3c;
        case 0x263c40u: goto label_263c40;
        case 0x263c44u: goto label_263c44;
        case 0x263c48u: goto label_263c48;
        case 0x263c4cu: goto label_263c4c;
        case 0x263c50u: goto label_263c50;
        case 0x263c54u: goto label_263c54;
        case 0x263c58u: goto label_263c58;
        case 0x263c5cu: goto label_263c5c;
        case 0x263c60u: goto label_263c60;
        case 0x263c64u: goto label_263c64;
        case 0x263c68u: goto label_263c68;
        case 0x263c6cu: goto label_263c6c;
        case 0x263c70u: goto label_263c70;
        case 0x263c74u: goto label_263c74;
        case 0x263c78u: goto label_263c78;
        case 0x263c7cu: goto label_263c7c;
        case 0x263c80u: goto label_263c80;
        case 0x263c84u: goto label_263c84;
        case 0x263c88u: goto label_263c88;
        case 0x263c8cu: goto label_263c8c;
        case 0x263c90u: goto label_263c90;
        case 0x263c94u: goto label_263c94;
        case 0x263c98u: goto label_263c98;
        case 0x263c9cu: goto label_263c9c;
        case 0x263ca0u: goto label_263ca0;
        case 0x263ca4u: goto label_263ca4;
        case 0x263ca8u: goto label_263ca8;
        case 0x263cacu: goto label_263cac;
        case 0x263cb0u: goto label_263cb0;
        case 0x263cb4u: goto label_263cb4;
        case 0x263cb8u: goto label_263cb8;
        case 0x263cbcu: goto label_263cbc;
        case 0x263cc0u: goto label_263cc0;
        case 0x263cc4u: goto label_263cc4;
        case 0x263cc8u: goto label_263cc8;
        case 0x263cccu: goto label_263ccc;
        case 0x263cd0u: goto label_263cd0;
        case 0x263cd4u: goto label_263cd4;
        case 0x263cd8u: goto label_263cd8;
        case 0x263cdcu: goto label_263cdc;
        case 0x263ce0u: goto label_263ce0;
        case 0x263ce4u: goto label_263ce4;
        case 0x263ce8u: goto label_263ce8;
        case 0x263cecu: goto label_263cec;
        case 0x263cf0u: goto label_263cf0;
        case 0x263cf4u: goto label_263cf4;
        case 0x263cf8u: goto label_263cf8;
        case 0x263cfcu: goto label_263cfc;
        case 0x263d00u: goto label_263d00;
        case 0x263d04u: goto label_263d04;
        case 0x263d08u: goto label_263d08;
        case 0x263d0cu: goto label_263d0c;
        case 0x263d10u: goto label_263d10;
        case 0x263d14u: goto label_263d14;
        case 0x263d18u: goto label_263d18;
        case 0x263d1cu: goto label_263d1c;
        case 0x263d20u: goto label_263d20;
        case 0x263d24u: goto label_263d24;
        case 0x263d28u: goto label_263d28;
        case 0x263d2cu: goto label_263d2c;
        case 0x263d30u: goto label_263d30;
        case 0x263d34u: goto label_263d34;
        case 0x263d38u: goto label_263d38;
        case 0x263d3cu: goto label_263d3c;
        case 0x263d40u: goto label_263d40;
        case 0x263d44u: goto label_263d44;
        case 0x263d48u: goto label_263d48;
        case 0x263d4cu: goto label_263d4c;
        case 0x263d50u: goto label_263d50;
        case 0x263d54u: goto label_263d54;
        case 0x263d58u: goto label_263d58;
        case 0x263d5cu: goto label_263d5c;
        case 0x263d60u: goto label_263d60;
        case 0x263d64u: goto label_263d64;
        case 0x263d68u: goto label_263d68;
        case 0x263d6cu: goto label_263d6c;
        case 0x263d70u: goto label_263d70;
        case 0x263d74u: goto label_263d74;
        case 0x263d78u: goto label_263d78;
        case 0x263d7cu: goto label_263d7c;
        case 0x263d80u: goto label_263d80;
        case 0x263d84u: goto label_263d84;
        case 0x263d88u: goto label_263d88;
        case 0x263d8cu: goto label_263d8c;
        case 0x263d90u: goto label_263d90;
        case 0x263d94u: goto label_263d94;
        case 0x263d98u: goto label_263d98;
        case 0x263d9cu: goto label_263d9c;
        case 0x263da0u: goto label_263da0;
        case 0x263da4u: goto label_263da4;
        case 0x263da8u: goto label_263da8;
        case 0x263dacu: goto label_263dac;
        case 0x263db0u: goto label_263db0;
        case 0x263db4u: goto label_263db4;
        case 0x263db8u: goto label_263db8;
        case 0x263dbcu: goto label_263dbc;
        case 0x263dc0u: goto label_263dc0;
        case 0x263dc4u: goto label_263dc4;
        case 0x263dc8u: goto label_263dc8;
        case 0x263dccu: goto label_263dcc;
        case 0x263dd0u: goto label_263dd0;
        case 0x263dd4u: goto label_263dd4;
        case 0x263dd8u: goto label_263dd8;
        case 0x263ddcu: goto label_263ddc;
        case 0x263de0u: goto label_263de0;
        case 0x263de4u: goto label_263de4;
        case 0x263de8u: goto label_263de8;
        case 0x263decu: goto label_263dec;
        case 0x263df0u: goto label_263df0;
        case 0x263df4u: goto label_263df4;
        case 0x263df8u: goto label_263df8;
        case 0x263dfcu: goto label_263dfc;
        case 0x263e00u: goto label_263e00;
        case 0x263e04u: goto label_263e04;
        case 0x263e08u: goto label_263e08;
        case 0x263e0cu: goto label_263e0c;
        case 0x263e10u: goto label_263e10;
        case 0x263e14u: goto label_263e14;
        case 0x263e18u: goto label_263e18;
        case 0x263e1cu: goto label_263e1c;
        case 0x263e20u: goto label_263e20;
        case 0x263e24u: goto label_263e24;
        case 0x263e28u: goto label_263e28;
        case 0x263e2cu: goto label_263e2c;
        case 0x263e30u: goto label_263e30;
        case 0x263e34u: goto label_263e34;
        case 0x263e38u: goto label_263e38;
        case 0x263e3cu: goto label_263e3c;
        case 0x263e40u: goto label_263e40;
        case 0x263e44u: goto label_263e44;
        case 0x263e48u: goto label_263e48;
        case 0x263e4cu: goto label_263e4c;
        case 0x263e50u: goto label_263e50;
        case 0x263e54u: goto label_263e54;
        case 0x263e58u: goto label_263e58;
        case 0x263e5cu: goto label_263e5c;
        case 0x263e60u: goto label_263e60;
        case 0x263e64u: goto label_263e64;
        case 0x263e68u: goto label_263e68;
        case 0x263e6cu: goto label_263e6c;
        case 0x263e70u: goto label_263e70;
        case 0x263e74u: goto label_263e74;
        case 0x263e78u: goto label_263e78;
        case 0x263e7cu: goto label_263e7c;
        case 0x263e80u: goto label_263e80;
        case 0x263e84u: goto label_263e84;
        case 0x263e88u: goto label_263e88;
        case 0x263e8cu: goto label_263e8c;
        case 0x263e90u: goto label_263e90;
        case 0x263e94u: goto label_263e94;
        case 0x263e98u: goto label_263e98;
        case 0x263e9cu: goto label_263e9c;
        case 0x263ea0u: goto label_263ea0;
        case 0x263ea4u: goto label_263ea4;
        case 0x263ea8u: goto label_263ea8;
        case 0x263eacu: goto label_263eac;
        case 0x263eb0u: goto label_263eb0;
        case 0x263eb4u: goto label_263eb4;
        case 0x263eb8u: goto label_263eb8;
        case 0x263ebcu: goto label_263ebc;
        case 0x263ec0u: goto label_263ec0;
        case 0x263ec4u: goto label_263ec4;
        case 0x263ec8u: goto label_263ec8;
        case 0x263eccu: goto label_263ecc;
        case 0x263ed0u: goto label_263ed0;
        case 0x263ed4u: goto label_263ed4;
        case 0x263ed8u: goto label_263ed8;
        case 0x263edcu: goto label_263edc;
        case 0x263ee0u: goto label_263ee0;
        case 0x263ee4u: goto label_263ee4;
        case 0x263ee8u: goto label_263ee8;
        case 0x263eecu: goto label_263eec;
        case 0x263ef0u: goto label_263ef0;
        case 0x263ef4u: goto label_263ef4;
        case 0x263ef8u: goto label_263ef8;
        case 0x263efcu: goto label_263efc;
        case 0x263f00u: goto label_263f00;
        case 0x263f04u: goto label_263f04;
        case 0x263f08u: goto label_263f08;
        case 0x263f0cu: goto label_263f0c;
        case 0x263f10u: goto label_263f10;
        case 0x263f14u: goto label_263f14;
        case 0x263f18u: goto label_263f18;
        case 0x263f1cu: goto label_263f1c;
        case 0x263f20u: goto label_263f20;
        case 0x263f24u: goto label_263f24;
        case 0x263f28u: goto label_263f28;
        case 0x263f2cu: goto label_263f2c;
        case 0x263f30u: goto label_263f30;
        case 0x263f34u: goto label_263f34;
        case 0x263f38u: goto label_263f38;
        case 0x263f3cu: goto label_263f3c;
        case 0x263f40u: goto label_263f40;
        case 0x263f44u: goto label_263f44;
        case 0x263f48u: goto label_263f48;
        case 0x263f4cu: goto label_263f4c;
        case 0x263f50u: goto label_263f50;
        case 0x263f54u: goto label_263f54;
        case 0x263f58u: goto label_263f58;
        case 0x263f5cu: goto label_263f5c;
        case 0x263f60u: goto label_263f60;
        case 0x263f64u: goto label_263f64;
        default: return;
    }

label_263798:
    // 0x263798: 0x0  nop
    ctx->pc = 0x263798u;
    // NOP
label_26379c:
    // 0x26379c: 0x0  nop
    ctx->pc = 0x26379cu;
    // NOP
label_2637a0:
    // 0x2637a0: 0xe31d  .word       0x0000E31D                   # dmultu      $zero, $zero # 0000E300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2637A0 raw=0x0000E31D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2637a4:
    // 0x2637a4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x2637a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2637a8:
    // 0x2637a8: 0x0  nop
    ctx->pc = 0x2637a8u;
    // NOP
label_2637ac:
    // 0x2637ac: 0x0  nop
    ctx->pc = 0x2637acu;
    // NOP
label_2637b0:
    // 0x2637b0: 0xe331  tgeu        $zero, $zero, 908
    ctx->pc = 0x2637b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2637b4:
    // 0x2637b4: 0x8220  .word       0x00008220                   # add         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2637b8:
    // 0x2637b8: 0x0  nop
    ctx->pc = 0x2637b8u;
    // NOP
label_2637bc:
    // 0x2637bc: 0x0  nop
    ctx->pc = 0x2637bcu;
    // NOP
label_2637c0:
    // 0x2637c0: 0xe342  srl         $gp, $zero, 13
    ctx->pc = 0x2637c0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_2637c4:
    // 0x2637c4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x2637c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2637c8:
    // 0x2637c8: 0x0  nop
    ctx->pc = 0x2637c8u;
    // NOP
label_2637cc:
    // 0x2637cc: 0x0  nop
    ctx->pc = 0x2637ccu;
    // NOP
label_2637d0:
    // 0x2637d0: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637d0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2637d4:
    // 0x2637d4: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2637d8:
    // 0x2637d8: 0x0  nop
    ctx->pc = 0x2637d8u;
    // NOP
label_2637dc:
    // 0x2637dc: 0x0  nop
    ctx->pc = 0x2637dcu;
    // NOP
label_2637e0:
    // 0x2637e0: 0xe35c  .word       0x0000E35C                   # dmult       $zero, $zero # 0000E340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2637E0 raw=0x0000E35C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2637e4:
    // 0x2637e4: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2637e8:
    // 0x2637e8: 0x0  nop
    ctx->pc = 0x2637e8u;
    // NOP
label_2637ec:
    // 0x2637ec: 0x0  nop
    ctx->pc = 0x2637ecu;
    // NOP
label_2637f0:
    // 0x2637f0: 0xe367  .word       0x0000E367                   # not         $gp, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2637f0u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2637f4:
    // 0x2637f4: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x2637f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2637f8:
    // 0x2637f8: 0x0  nop
    ctx->pc = 0x2637f8u;
    // NOP
label_2637fc:
    // 0x2637fc: 0x0  nop
    ctx->pc = 0x2637fcu;
    // NOP
label_263800:
    // 0x263800: 0xe36e  .word       0x0000E36E                   # dsub        $gp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263800u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263804:
    // 0x263804: 0x4870  tge         $zero, $zero, 289
    ctx->pc = 0x263804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263808:
    // 0x263808: 0x0  nop
    ctx->pc = 0x263808u;
    // NOP
label_26380c:
    // 0x26380c: 0x0  nop
    ctx->pc = 0x26380cu;
    // NOP
label_263810:
    // 0x263810: 0xe378  dsll        $gp, $zero, 13
    ctx->pc = 0x263810u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 13);
label_263814:
    // 0x263814: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x263814u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263818:
    // 0x263818: 0x0  nop
    ctx->pc = 0x263818u;
    // NOP
label_26381c:
    // 0x26381c: 0x0  nop
    ctx->pc = 0x26381cu;
    // NOP
label_263820:
    // 0x263820: 0xe388  .word       0x0000E388                   # jr          $zero # 0000E380 <InstrIdType: CPU_SPECIAL>
label_263824:
    if (ctx->pc == 0x263824u) {
        ctx->pc = 0x263824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263820u;
        // 0x263824: 0x6270  tge         $zero, $zero, 393 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x263828u;
        goto label_263828;
    }
    ctx->pc = 0x263820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x263824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263820u;
        // 0x263824: 0x6270  tge         $zero, $zero, 393 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x263828u;
label_263828:
    // 0x263828: 0x0  nop
    ctx->pc = 0x263828u;
    // NOP
label_26382c:
    // 0x26382c: 0x0  nop
    ctx->pc = 0x26382cu;
    // NOP
label_263830:
    // 0x263830: 0xe395  .word       0x0000E395                   # INVALID     $zero, $zero, -0x1C6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x263830 raw=0x0000E395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263834:
    // 0x263834: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263838:
    // 0x263838: 0x0  nop
    ctx->pc = 0x263838u;
    // NOP
label_26383c:
    // 0x26383c: 0x0  nop
    ctx->pc = 0x26383cu;
    // NOP
label_263840:
    // 0x263840: 0xe3a0  .word       0x0000E3A0                   # add         $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263840u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_263844:
    // 0x263844: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263848:
    // 0x263848: 0x0  nop
    ctx->pc = 0x263848u;
    // NOP
label_26384c:
    // 0x26384c: 0x0  nop
    ctx->pc = 0x26384cu;
    // NOP
label_263850:
    // 0x263850: 0xe3ac  .word       0x0000E3AC                   # dadd        $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263854:
    // 0x263854: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x263854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263858:
    // 0x263858: 0x0  nop
    ctx->pc = 0x263858u;
    // NOP
label_26385c:
    // 0x26385c: 0x0  nop
    ctx->pc = 0x26385cu;
    // NOP
label_263860:
    // 0x263860: 0xe3bd  .word       0x0000E3BD                   # INVALID     $zero, $zero, -0x1C43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x263860 raw=0x0000E3BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263864:
    // 0x263864: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x263864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263868:
    // 0x263868: 0x0  nop
    ctx->pc = 0x263868u;
    // NOP
label_26386c:
    // 0x26386c: 0x0  nop
    ctx->pc = 0x26386cu;
    // NOP
label_263870:
    // 0x263870: 0xe3c9  .word       0x0000E3C9                   # jalr        $gp, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_263874:
    if (ctx->pc == 0x263874u) {
        ctx->pc = 0x263874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263870u;
        // 0x263874: 0x4270  tge         $zero, $zero, 265 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x263878u;
        goto label_263878;
    }
    ctx->pc = 0x263870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x263878u);
        ctx->pc = 0x263874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263870u;
        // 0x263874: 0x4270  tge         $zero, $zero, 265 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263870u, 0x263878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263878u;
label_263878:
    // 0x263878: 0x0  nop
    ctx->pc = 0x263878u;
    // NOP
label_26387c:
    // 0x26387c: 0x0  nop
    ctx->pc = 0x26387cu;
    // NOP
label_263880:
    // 0x263880: 0xe3d2  .word       0x0000E3D2                   # mflo        $gp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263880u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_263884:
    // 0x263884: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x263884u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_263888:
    // 0x263888: 0x0  nop
    ctx->pc = 0x263888u;
    // NOP
label_26388c:
    // 0x26388c: 0x0  nop
    ctx->pc = 0x26388cu;
    // NOP
label_263890:
    // 0x263890: 0xe3dc  .word       0x0000E3DC                   # dmult       $zero, $zero # 0000E3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x263890 raw=0x0000E3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263894:
    // 0x263894: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263898:
    // 0x263898: 0x0  nop
    ctx->pc = 0x263898u;
    // NOP
label_26389c:
    // 0x26389c: 0x0  nop
    ctx->pc = 0x26389cu;
    // NOP
label_2638a0:
    // 0x2638a0: 0xe3e8  .word       0x0000E3E8                   # mfsa        $gp # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2638a0u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_2638a4:
    // 0x2638a4: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x2638a4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2638a8:
    // 0x2638a8: 0x0  nop
    ctx->pc = 0x2638a8u;
    // NOP
label_2638ac:
    // 0x2638ac: 0x0  nop
    ctx->pc = 0x2638acu;
    // NOP
label_2638b0:
    // 0x2638b0: 0xe3fd  .word       0x0000E3FD                   # INVALID     $zero, $zero, -0x1C03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2638B0 raw=0x0000E3FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2638b4:
    // 0x2638b4: 0x92e0  .word       0x000092E0                   # add         $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2638b8:
    // 0x2638b8: 0x0  nop
    ctx->pc = 0x2638b8u;
    // NOP
label_2638bc:
    // 0x2638bc: 0x0  nop
    ctx->pc = 0x2638bcu;
    // NOP
label_2638c0:
    // 0x2638c0: 0xe410  .word       0x0000E410                   # mfhi        $gp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638c0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2638c4:
    // 0x2638c4: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2638c8:
    // 0x2638c8: 0x0  nop
    ctx->pc = 0x2638c8u;
    // NOP
label_2638cc:
    // 0x2638cc: 0x0  nop
    ctx->pc = 0x2638ccu;
    // NOP
label_2638d0:
    // 0x2638d0: 0xe41f  .word       0x0000E41F                   # ddivu       $gp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2638D0 raw=0x0000E41F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2638d4:
    // 0x2638d4: 0x7260  .word       0x00007260                   # add         $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2638d8:
    // 0x2638d8: 0x0  nop
    ctx->pc = 0x2638d8u;
    // NOP
label_2638dc:
    // 0x2638dc: 0x0  nop
    ctx->pc = 0x2638dcu;
    // NOP
label_2638e0:
    // 0x2638e0: 0xe42e  .word       0x0000E42E                   # dsub        $gp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_2638e4:
    // 0x2638e4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2638e4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2638e8:
    // 0x2638e8: 0x0  nop
    ctx->pc = 0x2638e8u;
    // NOP
label_2638ec:
    // 0x2638ec: 0x0  nop
    ctx->pc = 0x2638ecu;
    // NOP
label_2638f0:
    // 0x2638f0: 0xe43e  dsrl32      $gp, $zero, 16
    ctx->pc = 0x2638f0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 16));
label_2638f4:
    // 0x2638f4: 0x7740  sll         $t6, $zero, 29
    ctx->pc = 0x2638f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2638f8:
    // 0x2638f8: 0x0  nop
    ctx->pc = 0x2638f8u;
    // NOP
label_2638fc:
    // 0x2638fc: 0x0  nop
    ctx->pc = 0x2638fcu;
    // NOP
label_263900:
    // 0x263900: 0xe44d  break       0, 913
    ctx->pc = 0x263900u;
    runtime->handleBreak(rdram, ctx);
label_263904:
    // 0x263904: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263904u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263908:
    // 0x263908: 0x0  nop
    ctx->pc = 0x263908u;
    // NOP
label_26390c:
    // 0x26390c: 0x0  nop
    ctx->pc = 0x26390cu;
    // NOP
label_263910:
    // 0x263910: 0xe459  .word       0x0000E459                   # multu       $zero, $zero # 0000E440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263910u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_263914:
    // 0x263914: 0x6ec0  sll         $t5, $zero, 27
    ctx->pc = 0x263914u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263918:
    // 0x263918: 0x0  nop
    ctx->pc = 0x263918u;
    // NOP
label_26391c:
    // 0x26391c: 0x0  nop
    ctx->pc = 0x26391cu;
    // NOP
label_263920:
    // 0x263920: 0xe467  .word       0x0000E467                   # not         $gp, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263920u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_263924:
    // 0x263924: 0x8090  .word       0x00008090                   # mfhi        $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263924u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263928:
    // 0x263928: 0x0  nop
    ctx->pc = 0x263928u;
    // NOP
label_26392c:
    // 0x26392c: 0x0  nop
    ctx->pc = 0x26392cu;
    // NOP
label_263930:
    // 0x263930: 0xe478  dsll        $gp, $zero, 17
    ctx->pc = 0x263930u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 17);
label_263934:
    // 0x263934: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_263938:
    // 0x263938: 0x0  nop
    ctx->pc = 0x263938u;
    // NOP
label_26393c:
    // 0x26393c: 0x0  nop
    ctx->pc = 0x26393cu;
    // NOP
label_263940:
    // 0x263940: 0xe48e  .word       0x0000E48E                   # INVALID     $zero, $zero, -0x1B72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x263940 raw=0x0000E48E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263944:
    // 0x263944: 0x8230  tge         $zero, $zero, 520
    ctx->pc = 0x263944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263948:
    // 0x263948: 0x0  nop
    ctx->pc = 0x263948u;
    // NOP
label_26394c:
    // 0x26394c: 0x0  nop
    ctx->pc = 0x26394cu;
    // NOP
label_263950:
    // 0x263950: 0xe49f  .word       0x0000E49F                   # ddivu       $gp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263950 raw=0x0000E49F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263954:
    // 0x263954: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263954u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_263958:
    // 0x263958: 0x0  nop
    ctx->pc = 0x263958u;
    // NOP
label_26395c:
    // 0x26395c: 0x0  nop
    ctx->pc = 0x26395cu;
    // NOP
label_263960:
    // 0x263960: 0xe4b2  tlt         $zero, $zero, 914
    ctx->pc = 0x263960u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263964:
    // 0x263964: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x263964u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_263968:
    // 0x263968: 0x0  nop
    ctx->pc = 0x263968u;
    // NOP
label_26396c:
    // 0x26396c: 0x0  nop
    ctx->pc = 0x26396cu;
    // NOP
label_263970:
    // 0x263970: 0xe4c6  .word       0x0000E4C6                   # srlv        $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263970u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263974:
    // 0x263974: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263974u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263978:
    // 0x263978: 0x0  nop
    ctx->pc = 0x263978u;
    // NOP
label_26397c:
    // 0x26397c: 0x0  nop
    ctx->pc = 0x26397cu;
    // NOP
label_263980:
    // 0x263980: 0xe4d7  .word       0x0000E4D7                   # dsrav       $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263980u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263984:
    // 0x263984: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263984u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_263988:
    // 0x263988: 0x0  nop
    ctx->pc = 0x263988u;
    // NOP
label_26398c:
    // 0x26398c: 0x0  nop
    ctx->pc = 0x26398cu;
    // NOP
label_263990:
    // 0x263990: 0xe4eb  .word       0x0000E4EB                   # sltu        $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263990u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_263994:
    // 0x263994: 0x3930  tge         $zero, $zero, 228
    ctx->pc = 0x263994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263998:
    // 0x263998: 0x0  nop
    ctx->pc = 0x263998u;
    // NOP
label_26399c:
    // 0x26399c: 0x0  nop
    ctx->pc = 0x26399cu;
    // NOP
label_2639a0:
    // 0x2639a0: 0xe4f3  tltu        $zero, $zero, 915
    ctx->pc = 0x2639a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2639a4:
    // 0x2639a4: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x2639a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2639a8:
    // 0x2639a8: 0x0  nop
    ctx->pc = 0x2639a8u;
    // NOP
label_2639ac:
    // 0x2639ac: 0x0  nop
    ctx->pc = 0x2639acu;
    // NOP
label_2639b0:
    // 0x2639b0: 0xe506  .word       0x0000E506                   # srlv        $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639b0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2639b4:
    // 0x2639b4: 0x8720  .word       0x00008720                   # add         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2639b8:
    // 0x2639b8: 0x0  nop
    ctx->pc = 0x2639b8u;
    // NOP
label_2639bc:
    // 0x2639bc: 0x0  nop
    ctx->pc = 0x2639bcu;
    // NOP
label_2639c0:
    // 0x2639c0: 0xe517  .word       0x0000E517                   # dsrav       $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639c0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2639c4:
    // 0x2639c4: 0x60a0  .word       0x000060A0                   # add         $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2639c8:
    // 0x2639c8: 0x0  nop
    ctx->pc = 0x2639c8u;
    // NOP
label_2639cc:
    // 0x2639cc: 0x0  nop
    ctx->pc = 0x2639ccu;
    // NOP
label_2639d0:
    // 0x2639d0: 0xe524  .word       0x0000E524                   # and         $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639d0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2639d4:
    // 0x2639d4: 0x5a50  .word       0x00005A50                   # mfhi        $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2639d8:
    // 0x2639d8: 0x0  nop
    ctx->pc = 0x2639d8u;
    // NOP
label_2639dc:
    // 0x2639dc: 0x0  nop
    ctx->pc = 0x2639dcu;
    // NOP
label_2639e0:
    // 0x2639e0: 0xe530  tge         $zero, $zero, 916
    ctx->pc = 0x2639e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2639e4:
    // 0x2639e4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2639e8:
    // 0x2639e8: 0x0  nop
    ctx->pc = 0x2639e8u;
    // NOP
label_2639ec:
    // 0x2639ec: 0x0  nop
    ctx->pc = 0x2639ecu;
    // NOP
label_2639f0:
    // 0x2639f0: 0xe539  .word       0x0000E539                   # INVALID     $zero, $zero, -0x1AC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2639f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2639F0 raw=0x0000E539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2639f4:
    // 0x2639f4: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x2639f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2639f8:
    // 0x2639f8: 0x0  nop
    ctx->pc = 0x2639f8u;
    // NOP
label_2639fc:
    // 0x2639fc: 0x0  nop
    ctx->pc = 0x2639fcu;
    // NOP
label_263a00:
    // 0x263a00: 0xe544  .word       0x0000E544                   # sllv        $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a00u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263a04:
    // 0x263a04: 0x2ea0  .word       0x00002EA0                   # add         $a1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_263a08:
    // 0x263a08: 0x0  nop
    ctx->pc = 0x263a08u;
    // NOP
label_263a0c:
    // 0x263a0c: 0x0  nop
    ctx->pc = 0x263a0cu;
    // NOP
label_263a10:
    // 0x263a10: 0xe54a  .word       0x0000E54A                   # movz        $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a10u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263a14:
    // 0x263a14: 0x58a0  .word       0x000058A0                   # add         $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263a18:
    // 0x263a18: 0x0  nop
    ctx->pc = 0x263a18u;
    // NOP
label_263a1c:
    // 0x263a1c: 0x0  nop
    ctx->pc = 0x263a1cu;
    // NOP
label_263a20:
    // 0x263a20: 0xe556  .word       0x0000E556                   # dsrlv       $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a20u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263a24:
    // 0x263a24: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_263a28:
    // 0x263a28: 0x0  nop
    ctx->pc = 0x263a28u;
    // NOP
label_263a2c:
    // 0x263a2c: 0x0  nop
    ctx->pc = 0x263a2cu;
    // NOP
label_263a30:
    // 0x263a30: 0xe562  .word       0x0000E562                   # neg         $gp, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_263a34:
    // 0x263a34: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x263a34u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_263a38:
    // 0x263a38: 0x0  nop
    ctx->pc = 0x263a38u;
    // NOP
label_263a3c:
    // 0x263a3c: 0x0  nop
    ctx->pc = 0x263a3cu;
    // NOP
label_263a40:
    // 0x263a40: 0xe576  tne         $zero, $zero, 917
    ctx->pc = 0x263a40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263a44:
    // 0x263a44: 0x9790  .word       0x00009790                   # mfhi        $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a44u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_263a48:
    // 0x263a48: 0x0  nop
    ctx->pc = 0x263a48u;
    // NOP
label_263a4c:
    // 0x263a4c: 0x0  nop
    ctx->pc = 0x263a4cu;
    // NOP
label_263a50:
    // 0x263a50: 0xe589  .word       0x0000E589                   # jalr        $gp, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_263a54:
    if (ctx->pc == 0x263A54u) {
        ctx->pc = 0x263A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A50u;
        // 0x263a54: 0x7770  tge         $zero, $zero, 477 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A58u;
        goto label_263a58;
    }
    ctx->pc = 0x263A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x263A58u);
        ctx->pc = 0x263A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A50u;
        // 0x263a54: 0x7770  tge         $zero, $zero, 477 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263A50u, 0x263A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263A58u;
label_263a58:
    // 0x263a58: 0x0  nop
    ctx->pc = 0x263a58u;
    // NOP
label_263a5c:
    // 0x263a5c: 0x0  nop
    ctx->pc = 0x263a5cu;
    // NOP
label_263a60:
    // 0x263a60: 0xe598  .word       0x0000E598                   # mult        $gp, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_263a64:
    // 0x263a64: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x263a64u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_263a68:
    // 0x263a68: 0x0  nop
    ctx->pc = 0x263a68u;
    // NOP
label_263a6c:
    // 0x263a6c: 0x0  nop
    ctx->pc = 0x263a6cu;
    // NOP
label_263a70:
    // 0x263a70: 0xe5a6  .word       0x0000E5A6                   # xor         $gp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a70u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_263a74:
    // 0x263a74: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x263a74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_263a78:
    // 0x263a78: 0x0  nop
    ctx->pc = 0x263a78u;
    // NOP
label_263a7c:
    // 0x263a7c: 0x0  nop
    ctx->pc = 0x263a7cu;
    // NOP
label_263a80:
    // 0x263a80: 0xe5b4  teq         $zero, $zero, 918
    ctx->pc = 0x263a80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263a84:
    // 0x263a84: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x263a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263a88:
    // 0x263a88: 0x0  nop
    ctx->pc = 0x263a88u;
    // NOP
label_263a8c:
    // 0x263a8c: 0x0  nop
    ctx->pc = 0x263a8cu;
    // NOP
label_263a90:
    // 0x263a90: 0xe5c3  sra         $gp, $zero, 23
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 23));
label_263a94:
    // 0x263a94: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_263a98:
    // 0x263a98: 0x0  nop
    ctx->pc = 0x263a98u;
    // NOP
label_263a9c:
    // 0x263a9c: 0x0  nop
    ctx->pc = 0x263a9cu;
    // NOP
label_263aa0:
    // 0x263aa0: 0xe5d1  .word       0x0000E5D1                   # mthi        $zero # 0000E5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263aa0u;
    ctx->hi = GPR_U64(ctx, 0);
label_263aa4:
    // 0x263aa4: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x263aa4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_263aa8:
    // 0x263aa8: 0x0  nop
    ctx->pc = 0x263aa8u;
    // NOP
label_263aac:
    // 0x263aac: 0x0  nop
    ctx->pc = 0x263aacu;
    // NOP
label_263ab0:
    // 0x263ab0: 0xe5dd  .word       0x0000E5DD                   # dmultu      $zero, $zero # 0000E5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x263AB0 raw=0x0000E5DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ab4:
    // 0x263ab4: 0x8220  .word       0x00008220                   # add         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_263ab8:
    // 0x263ab8: 0x0  nop
    ctx->pc = 0x263ab8u;
    // NOP
label_263abc:
    // 0x263abc: 0x0  nop
    ctx->pc = 0x263abcu;
    // NOP
label_263ac0:
    // 0x263ac0: 0xe5ee  .word       0x0000E5EE                   # dsub        $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ac0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263ac4:
    // 0x263ac4: 0x7a20  .word       0x00007A20                   # add         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_263ac8:
    // 0x263ac8: 0x0  nop
    ctx->pc = 0x263ac8u;
    // NOP
label_263acc:
    // 0x263acc: 0x0  nop
    ctx->pc = 0x263accu;
    // NOP
label_263ad0:
    // 0x263ad0: 0xe5fe  dsrl32      $gp, $zero, 23
    ctx->pc = 0x263ad0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 23));
label_263ad4:
    // 0x263ad4: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263ad8:
    // 0x263ad8: 0x0  nop
    ctx->pc = 0x263ad8u;
    // NOP
label_263adc:
    // 0x263adc: 0x0  nop
    ctx->pc = 0x263adcu;
    // NOP
label_263ae0:
    // 0x263ae0: 0xe60a  .word       0x0000E60A                   # movz        $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ae0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263ae4:
    // 0x263ae4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_263ae8:
    // 0x263ae8: 0x0  nop
    ctx->pc = 0x263ae8u;
    // NOP
label_263aec:
    // 0x263aec: 0x0  nop
    ctx->pc = 0x263aecu;
    // NOP
label_263af0:
    // 0x263af0: 0xe61b  .word       0x0000E61B                   # divu        $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263af0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_263af4:
    // 0x263af4: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_263af8:
    // 0x263af8: 0x0  nop
    ctx->pc = 0x263af8u;
    // NOP
label_263afc:
    // 0x263afc: 0x0  nop
    ctx->pc = 0x263afcu;
    // NOP
label_263b00:
    // 0x263b00: 0xe62b  .word       0x0000E62B                   # sltu        $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b00u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_263b04:
    // 0x263b04: 0x8820  add         $s1, $zero, $zero
    ctx->pc = 0x263b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_263b08:
    // 0x263b08: 0x0  nop
    ctx->pc = 0x263b08u;
    // NOP
label_263b0c:
    // 0x263b0c: 0x0  nop
    ctx->pc = 0x263b0cu;
    // NOP
label_263b10:
    // 0x263b10: 0xe63d  .word       0x0000E63D                   # INVALID     $zero, $zero, -0x19C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x263B10 raw=0x0000E63D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263b14:
    // 0x263b14: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_263b18:
    // 0x263b18: 0x0  nop
    ctx->pc = 0x263b18u;
    // NOP
label_263b1c:
    // 0x263b1c: 0x0  nop
    ctx->pc = 0x263b1cu;
    // NOP
label_263b20:
    // 0x263b20: 0xe645  .word       0x0000E645                   # INVALID     $zero, $zero, -0x19BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x263B20 raw=0x0000E645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263b24:
    // 0x263b24: 0x5a70  tge         $zero, $zero, 361
    ctx->pc = 0x263b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263b28:
    // 0x263b28: 0x0  nop
    ctx->pc = 0x263b28u;
    // NOP
label_263b2c:
    // 0x263b2c: 0x0  nop
    ctx->pc = 0x263b2cu;
    // NOP
label_263b30:
    // 0x263b30: 0xe651  .word       0x0000E651                   # mthi        $zero # 0000E640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b30u;
    ctx->hi = GPR_U64(ctx, 0);
label_263b34:
    // 0x263b34: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_263b38:
    // 0x263b38: 0x0  nop
    ctx->pc = 0x263b38u;
    // NOP
label_263b3c:
    // 0x263b3c: 0x0  nop
    ctx->pc = 0x263b3cu;
    // NOP
label_263b40:
    // 0x263b40: 0xe65f  .word       0x0000E65F                   # ddivu       $gp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263B40 raw=0x0000E65F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263b44:
    // 0x263b44: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b44u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263b48:
    // 0x263b48: 0x0  nop
    ctx->pc = 0x263b48u;
    // NOP
label_263b4c:
    // 0x263b4c: 0x0  nop
    ctx->pc = 0x263b4cu;
    // NOP
label_263b50:
    // 0x263b50: 0xe66f  .word       0x0000E66F                   # dsubu       $gp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b50u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_263b54:
    // 0x263b54: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_263b58:
    // 0x263b58: 0x0  nop
    ctx->pc = 0x263b58u;
    // NOP
label_263b5c:
    // 0x263b5c: 0x0  nop
    ctx->pc = 0x263b5cu;
    // NOP
label_263b60:
    // 0x263b60: 0xe678  dsll        $gp, $zero, 25
    ctx->pc = 0x263b60u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 25);
label_263b64:
    // 0x263b64: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x263b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263b68:
    // 0x263b68: 0x0  nop
    ctx->pc = 0x263b68u;
    // NOP
label_263b6c:
    // 0x263b6c: 0x0  nop
    ctx->pc = 0x263b6cu;
    // NOP
label_263b70:
    // 0x263b70: 0xe683  sra         $gp, $zero, 26
    ctx->pc = 0x263b70u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 26));
label_263b74:
    // 0x263b74: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x263b74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_263b78:
    // 0x263b78: 0x0  nop
    ctx->pc = 0x263b78u;
    // NOP
label_263b7c:
    // 0x263b7c: 0x0  nop
    ctx->pc = 0x263b7cu;
    // NOP
label_263b80:
    // 0x263b80: 0xe68f  .word       0x0000E68F                   # sync.p # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_263b84:
    // 0x263b84: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263b88:
    // 0x263b88: 0x0  nop
    ctx->pc = 0x263b88u;
    // NOP
label_263b8c:
    // 0x263b8c: 0x0  nop
    ctx->pc = 0x263b8cu;
    // NOP
label_263b90:
    // 0x263b90: 0xe69f  .word       0x0000E69F                   # ddivu       $gp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263B90 raw=0x0000E69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263b94:
    // 0x263b94: 0x2350  .word       0x00002350                   # mfhi        $a0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263b94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_263b98:
    // 0x263b98: 0x0  nop
    ctx->pc = 0x263b98u;
    // NOP
label_263b9c:
    // 0x263b9c: 0x0  nop
    ctx->pc = 0x263b9cu;
    // NOP
label_263ba0:
    // 0x263ba0: 0xe6a4  .word       0x0000E6A4                   # and         $gp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ba0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_263ba4:
    // 0x263ba4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x263ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263ba8:
    // 0x263ba8: 0x0  nop
    ctx->pc = 0x263ba8u;
    // NOP
label_263bac:
    // 0x263bac: 0x0  nop
    ctx->pc = 0x263bacu;
    // NOP
label_263bb0:
    // 0x263bb0: 0xe6b0  tge         $zero, $zero, 922
    ctx->pc = 0x263bb0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263bb4:
    // 0x263bb4: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_263bb8:
    // 0x263bb8: 0x0  nop
    ctx->pc = 0x263bb8u;
    // NOP
label_263bbc:
    // 0x263bbc: 0x0  nop
    ctx->pc = 0x263bbcu;
    // NOP
label_263bc0:
    // 0x263bc0: 0xe6bd  .word       0x0000E6BD                   # INVALID     $zero, $zero, -0x1943 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x263BC0 raw=0x0000E6BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263bc4:
    // 0x263bc4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x263bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263bc8:
    // 0x263bc8: 0x0  nop
    ctx->pc = 0x263bc8u;
    // NOP
label_263bcc:
    // 0x263bcc: 0x0  nop
    ctx->pc = 0x263bccu;
    // NOP
label_263bd0:
    // 0x263bd0: 0xe6cf  .word       0x0000E6CF                   # sync.p # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263bd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_263bd4:
    // 0x263bd4: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_263bd8:
    // 0x263bd8: 0x0  nop
    ctx->pc = 0x263bd8u;
    // NOP
label_263bdc:
    // 0x263bdc: 0x0  nop
    ctx->pc = 0x263bdcu;
    // NOP
label_263be0:
    // 0x263be0: 0xe6e4  .word       0x0000E6E4                   # and         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263be0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_263be4:
    // 0x263be4: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x263be4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263be8:
    // 0x263be8: 0x0  nop
    ctx->pc = 0x263be8u;
    // NOP
label_263bec:
    // 0x263bec: 0x0  nop
    ctx->pc = 0x263becu;
    // NOP
label_263bf0:
    // 0x263bf0: 0xe6f3  tltu        $zero, $zero, 923
    ctx->pc = 0x263bf0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263bf4:
    // 0x263bf4: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263bf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_263bf8:
    // 0x263bf8: 0x0  nop
    ctx->pc = 0x263bf8u;
    // NOP
label_263bfc:
    // 0x263bfc: 0x0  nop
    ctx->pc = 0x263bfcu;
    // NOP
label_263c00:
    // 0x263c00: 0xe6fb  dsra        $gp, $zero, 27
    ctx->pc = 0x263c00u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 27);
label_263c04:
    // 0x263c04: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x263c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263c08:
    // 0x263c08: 0x0  nop
    ctx->pc = 0x263c08u;
    // NOP
label_263c0c:
    // 0x263c0c: 0x0  nop
    ctx->pc = 0x263c0cu;
    // NOP
label_263c10:
    // 0x263c10: 0xe707  .word       0x0000E707                   # srav        $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c10u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263c14:
    // 0x263c14: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263c18:
    // 0x263c18: 0x0  nop
    ctx->pc = 0x263c18u;
    // NOP
label_263c1c:
    // 0x263c1c: 0x0  nop
    ctx->pc = 0x263c1cu;
    // NOP
label_263c20:
    // 0x263c20: 0xe712  .word       0x0000E712                   # mflo        $gp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c20u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_263c24:
    // 0x263c24: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c24u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_263c28:
    // 0x263c28: 0x0  nop
    ctx->pc = 0x263c28u;
    // NOP
label_263c2c:
    // 0x263c2c: 0x0  nop
    ctx->pc = 0x263c2cu;
    // NOP
label_263c30:
    // 0x263c30: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_263c34:
    // 0x263c34: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263c38:
    // 0x263c38: 0x0  nop
    ctx->pc = 0x263c38u;
    // NOP
label_263c3c:
    // 0x263c3c: 0x0  nop
    ctx->pc = 0x263c3cu;
    // NOP
label_263c40:
    // 0x263c40: 0xe730  tge         $zero, $zero, 924
    ctx->pc = 0x263c40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263c44:
    // 0x263c44: 0x6be0  .word       0x00006BE0                   # add         $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_263c48:
    // 0x263c48: 0x0  nop
    ctx->pc = 0x263c48u;
    // NOP
label_263c4c:
    // 0x263c4c: 0x0  nop
    ctx->pc = 0x263c4cu;
    // NOP
label_263c50:
    // 0x263c50: 0xe73e  dsrl32      $gp, $zero, 28
    ctx->pc = 0x263c50u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 28));
label_263c54:
    // 0x263c54: 0x6620  .word       0x00006620                   # add         $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_263c58:
    // 0x263c58: 0x0  nop
    ctx->pc = 0x263c58u;
    // NOP
label_263c5c:
    // 0x263c5c: 0x0  nop
    ctx->pc = 0x263c5cu;
    // NOP
label_263c60:
    // 0x263c60: 0xe74b  .word       0x0000E74B                   # movn        $gp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c60u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263c64:
    // 0x263c64: 0x2600  sll         $a0, $zero, 24
    ctx->pc = 0x263c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_263c68:
    // 0x263c68: 0x0  nop
    ctx->pc = 0x263c68u;
    // NOP
label_263c6c:
    // 0x263c6c: 0x0  nop
    ctx->pc = 0x263c6cu;
    // NOP
label_263c70:
    // 0x263c70: 0xe750  .word       0x0000E750                   # mfhi        $gp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c70u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_263c74:
    // 0x263c74: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x263c74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_263c78:
    // 0x263c78: 0x0  nop
    ctx->pc = 0x263c78u;
    // NOP
label_263c7c:
    // 0x263c7c: 0x0  nop
    ctx->pc = 0x263c7cu;
    // NOP
label_263c80:
    // 0x263c80: 0xe75d  .word       0x0000E75D                   # dmultu      $zero, $zero # 0000E740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x263C80 raw=0x0000E75D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263c84:
    // 0x263c84: 0x5130  tge         $zero, $zero, 324
    ctx->pc = 0x263c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263c88:
    // 0x263c88: 0x0  nop
    ctx->pc = 0x263c88u;
    // NOP
label_263c8c:
    // 0x263c8c: 0x0  nop
    ctx->pc = 0x263c8cu;
    // NOP
label_263c90:
    // 0x263c90: 0xe768  .word       0x0000E768                   # mfsa        $gp # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263c90u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_263c94:
    // 0x263c94: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c94u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263c98:
    // 0x263c98: 0x0  nop
    ctx->pc = 0x263c98u;
    // NOP
label_263c9c:
    // 0x263c9c: 0x0  nop
    ctx->pc = 0x263c9cu;
    // NOP
label_263ca0:
    // 0x263ca0: 0xe774  teq         $zero, $zero, 925
    ctx->pc = 0x263ca0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ca4:
    // 0x263ca4: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ca4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_263ca8:
    // 0x263ca8: 0x0  nop
    ctx->pc = 0x263ca8u;
    // NOP
label_263cac:
    // 0x263cac: 0x0  nop
    ctx->pc = 0x263cacu;
    // NOP
label_263cb0:
    // 0x263cb0: 0xe77c  dsll32      $gp, $zero, 29
    ctx->pc = 0x263cb0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 29));
label_263cb4:
    // 0x263cb4: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cb4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_263cb8:
    // 0x263cb8: 0x0  nop
    ctx->pc = 0x263cb8u;
    // NOP
label_263cbc:
    // 0x263cbc: 0x0  nop
    ctx->pc = 0x263cbcu;
    // NOP
label_263cc0:
    // 0x263cc0: 0xe783  sra         $gp, $zero, 30
    ctx->pc = 0x263cc0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 30));
label_263cc4:
    // 0x263cc4: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263cc8:
    // 0x263cc8: 0x0  nop
    ctx->pc = 0x263cc8u;
    // NOP
label_263ccc:
    // 0x263ccc: 0x0  nop
    ctx->pc = 0x263cccu;
    // NOP
label_263cd0:
    // 0x263cd0: 0xe78f  .word       0x0000E78F                   # sync.p # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_263cd4:
    // 0x263cd4: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_263cd8:
    // 0x263cd8: 0x0  nop
    ctx->pc = 0x263cd8u;
    // NOP
label_263cdc:
    // 0x263cdc: 0x0  nop
    ctx->pc = 0x263cdcu;
    // NOP
label_263ce0:
    // 0x263ce0: 0xe79e  .word       0x0000E79E                   # ddiv        $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x263CE0 raw=0x0000E79E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ce4:
    // 0x263ce4: 0x38b0  tge         $zero, $zero, 226
    ctx->pc = 0x263ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ce8:
    // 0x263ce8: 0x0  nop
    ctx->pc = 0x263ce8u;
    // NOP
label_263cec:
    // 0x263cec: 0x0  nop
    ctx->pc = 0x263cecu;
    // NOP
label_263cf0:
    // 0x263cf0: 0xe7a6  .word       0x0000E7A6                   # xor         $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cf0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_263cf4:
    // 0x263cf4: 0x3af0  tge         $zero, $zero, 235
    ctx->pc = 0x263cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263cf8:
    // 0x263cf8: 0x0  nop
    ctx->pc = 0x263cf8u;
    // NOP
label_263cfc:
    // 0x263cfc: 0x0  nop
    ctx->pc = 0x263cfcu;
    // NOP
label_263d00:
    // 0x263d00: 0xe7ae  .word       0x0000E7AE                   # dsub        $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263d04:
    // 0x263d04: 0x28b0  tge         $zero, $zero, 162
    ctx->pc = 0x263d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d08:
    // 0x263d08: 0x0  nop
    ctx->pc = 0x263d08u;
    // NOP
label_263d0c:
    // 0x263d0c: 0x0  nop
    ctx->pc = 0x263d0cu;
    // NOP
label_263d10:
    // 0x263d10: 0xe7b4  teq         $zero, $zero, 926
    ctx->pc = 0x263d10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d14:
    // 0x263d14: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x263d14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263d18:
    // 0x263d18: 0x0  nop
    ctx->pc = 0x263d18u;
    // NOP
label_263d1c:
    // 0x263d1c: 0x0  nop
    ctx->pc = 0x263d1cu;
    // NOP
label_263d20:
    // 0x263d20: 0xe7bf  dsra32      $gp, $zero, 30
    ctx->pc = 0x263d20u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 30));
label_263d24:
    // 0x263d24: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_263d28:
    // 0x263d28: 0x0  nop
    ctx->pc = 0x263d28u;
    // NOP
label_263d2c:
    // 0x263d2c: 0x0  nop
    ctx->pc = 0x263d2cu;
    // NOP
label_263d30:
    // 0x263d30: 0xe7c6  .word       0x0000E7C6                   # srlv        $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263d34:
    // 0x263d34: 0x4f70  tge         $zero, $zero, 317
    ctx->pc = 0x263d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d38:
    // 0x263d38: 0x0  nop
    ctx->pc = 0x263d38u;
    // NOP
label_263d3c:
    // 0x263d3c: 0x0  nop
    ctx->pc = 0x263d3cu;
    // NOP
label_263d40:
    // 0x263d40: 0xe7d0  .word       0x0000E7D0                   # mfhi        $gp # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d40u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_263d44:
    // 0x263d44: 0x4850  .word       0x00004850                   # mfhi        $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d44u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_263d48:
    // 0x263d48: 0x0  nop
    ctx->pc = 0x263d48u;
    // NOP
label_263d4c:
    // 0x263d4c: 0x0  nop
    ctx->pc = 0x263d4cu;
    // NOP
label_263d50:
    // 0x263d50: 0xe7da  .word       0x0000E7DA                   # div         $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_263d54:
    // 0x263d54: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x263d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d58:
    // 0x263d58: 0x0  nop
    ctx->pc = 0x263d58u;
    // NOP
label_263d5c:
    // 0x263d5c: 0x0  nop
    ctx->pc = 0x263d5cu;
    // NOP
label_263d60:
    // 0x263d60: 0xe7ee  .word       0x0000E7EE                   # dsub        $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263d64:
    // 0x263d64: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x263d64u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_263d68:
    // 0x263d68: 0x0  nop
    ctx->pc = 0x263d68u;
    // NOP
label_263d6c:
    // 0x263d6c: 0x0  nop
    ctx->pc = 0x263d6cu;
    // NOP
label_263d70:
    // 0x263d70: 0xe802  srl         $sp, $zero, 0
    ctx->pc = 0x263d70u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_263d74:
    // 0x263d74: 0x82f0  tge         $zero, $zero, 523
    ctx->pc = 0x263d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d78:
    // 0x263d78: 0x0  nop
    ctx->pc = 0x263d78u;
    // NOP
label_263d7c:
    // 0x263d7c: 0x0  nop
    ctx->pc = 0x263d7cu;
    // NOP
label_263d80:
    // 0x263d80: 0xe813  .word       0x0000E813                   # mtlo        $zero # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d80u;
    ctx->lo = GPR_U64(ctx, 0);
label_263d84:
    // 0x263d84: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_263d88:
    // 0x263d88: 0x0  nop
    ctx->pc = 0x263d88u;
    // NOP
label_263d8c:
    // 0x263d8c: 0x0  nop
    ctx->pc = 0x263d8cu;
    // NOP
label_263d90:
    // 0x263d90: 0xe822  neg         $sp, $zero
    ctx->pc = 0x263d90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_263d94:
    // 0x263d94: 0x7540  sll         $t6, $zero, 21
    ctx->pc = 0x263d94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_263d98:
    // 0x263d98: 0x0  nop
    ctx->pc = 0x263d98u;
    // NOP
label_263d9c:
    // 0x263d9c: 0x0  nop
    ctx->pc = 0x263d9cu;
    // NOP
label_263da0:
    // 0x263da0: 0xe831  tgeu        $zero, $zero, 928
    ctx->pc = 0x263da0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263da4:
    // 0x263da4: 0x7270  tge         $zero, $zero, 457
    ctx->pc = 0x263da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263da8:
    // 0x263da8: 0x0  nop
    ctx->pc = 0x263da8u;
    // NOP
label_263dac:
    // 0x263dac: 0x0  nop
    ctx->pc = 0x263dacu;
    // NOP
label_263db0:
    // 0x263db0: 0xe840  sll         $sp, $zero, 1
    ctx->pc = 0x263db0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_263db4:
    // 0x263db4: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x263db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263db8:
    // 0x263db8: 0x0  nop
    ctx->pc = 0x263db8u;
    // NOP
label_263dbc:
    // 0x263dbc: 0x0  nop
    ctx->pc = 0x263dbcu;
    // NOP
label_263dc0:
    // 0x263dc0: 0xe84c  syscall     929
    ctx->pc = 0x263dc0u;
    ctx->pc = 0x263DC4u;
runtime->handleSyscall(rdram, ctx, 0x3A1u);
label_263dc4:
    // 0x263dc4: 0x54e0  .word       0x000054E0                   # add         $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263dc8:
    // 0x263dc8: 0x0  nop
    ctx->pc = 0x263dc8u;
    // NOP
label_263dcc:
    // 0x263dcc: 0x0  nop
    ctx->pc = 0x263dccu;
    // NOP
label_263dd0:
    // 0x263dd0: 0xe857  .word       0x0000E857                   # dsrav       $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263dd0u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263dd4:
    // 0x263dd4: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263dd4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263dd8:
    // 0x263dd8: 0x0  nop
    ctx->pc = 0x263dd8u;
    // NOP
label_263ddc:
    // 0x263ddc: 0x0  nop
    ctx->pc = 0x263ddcu;
    // NOP
label_263de0:
    // 0x263de0: 0xe863  .word       0x0000E863                   # negu        $sp, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_263de4:
    // 0x263de4: 0x8db0  tge         $zero, $zero, 566
    ctx->pc = 0x263de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263de8:
    // 0x263de8: 0x0  nop
    ctx->pc = 0x263de8u;
    // NOP
label_263dec:
    // 0x263dec: 0x0  nop
    ctx->pc = 0x263decu;
    // NOP
label_263df0:
    // 0x263df0: 0xe875  .word       0x0000E875                   # INVALID     $zero, $zero, -0x178B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x263DF0 raw=0x0000E875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263df4:
    // 0x263df4: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_263df8:
    // 0x263df8: 0x0  nop
    ctx->pc = 0x263df8u;
    // NOP
label_263dfc:
    // 0x263dfc: 0x0  nop
    ctx->pc = 0x263dfcu;
    // NOP
label_263e00:
    // 0x263e00: 0xe87f  dsra32      $sp, $zero, 1
    ctx->pc = 0x263e00u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 1));
label_263e04:
    // 0x263e04: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_263e08:
    // 0x263e08: 0x0  nop
    ctx->pc = 0x263e08u;
    // NOP
label_263e0c:
    // 0x263e0c: 0x0  nop
    ctx->pc = 0x263e0cu;
    // NOP
label_263e10:
    // 0x263e10: 0xe88d  break       0, 930
    ctx->pc = 0x263e10u;
    runtime->handleBreak(rdram, ctx);
label_263e14:
    // 0x263e14: 0x4f80  sll         $t1, $zero, 30
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_263e18:
    // 0x263e18: 0x0  nop
    ctx->pc = 0x263e18u;
    // NOP
label_263e1c:
    // 0x263e1c: 0x0  nop
    ctx->pc = 0x263e1cu;
    // NOP
label_263e20:
    // 0x263e20: 0xe897  .word       0x0000E897                   # dsrav       $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e20u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263e24:
    // 0x263e24: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x263e24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_263e28:
    // 0x263e28: 0x0  nop
    ctx->pc = 0x263e28u;
    // NOP
label_263e2c:
    // 0x263e2c: 0x0  nop
    ctx->pc = 0x263e2cu;
    // NOP
label_263e30:
    // 0x263e30: 0xe8a8  .word       0x0000E8A8                   # mfsa        $sp # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263e30u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_263e34:
    // 0x263e34: 0x2db0  tge         $zero, $zero, 182
    ctx->pc = 0x263e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263e38:
    // 0x263e38: 0x0  nop
    ctx->pc = 0x263e38u;
    // NOP
label_263e3c:
    // 0x263e3c: 0x0  nop
    ctx->pc = 0x263e3cu;
    // NOP
label_263e40:
    // 0x263e40: 0xe8ae  .word       0x0000E8AE                   # dsub        $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_263e44:
    // 0x263e44: 0x2050  .word       0x00002050                   # mfhi        $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_263e48:
    // 0x263e48: 0x0  nop
    ctx->pc = 0x263e48u;
    // NOP
label_263e4c:
    // 0x263e4c: 0x0  nop
    ctx->pc = 0x263e4cu;
    // NOP
label_263e50:
    // 0x263e50: 0xe8b3  tltu        $zero, $zero, 930
    ctx->pc = 0x263e50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263e54:
    // 0x263e54: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_263e58:
    // 0x263e58: 0x0  nop
    ctx->pc = 0x263e58u;
    // NOP
label_263e5c:
    // 0x263e5c: 0x0  nop
    ctx->pc = 0x263e5cu;
    // NOP
label_263e60:
    // 0x263e60: 0xe8c0  sll         $sp, $zero, 3
    ctx->pc = 0x263e60u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_263e64:
    // 0x263e64: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x263e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_263e68:
    // 0x263e68: 0x0  nop
    ctx->pc = 0x263e68u;
    // NOP
label_263e6c:
    // 0x263e6c: 0x0  nop
    ctx->pc = 0x263e6cu;
    // NOP
label_263e70:
    // 0x263e70: 0xe8d1  .word       0x0000E8D1                   # mthi        $zero # 0000E8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e70u;
    ctx->hi = GPR_U64(ctx, 0);
label_263e74:
    // 0x263e74: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263e78:
    // 0x263e78: 0x0  nop
    ctx->pc = 0x263e78u;
    // NOP
label_263e7c:
    // 0x263e7c: 0x0  nop
    ctx->pc = 0x263e7cu;
    // NOP
label_263e80:
    // 0x263e80: 0xe8dc  .word       0x0000E8DC                   # dmult       $zero, $zero # 0000E8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x263E80 raw=0x0000E8DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263e84:
    // 0x263e84: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263e88:
    // 0x263e88: 0x0  nop
    ctx->pc = 0x263e88u;
    // NOP
label_263e8c:
    // 0x263e8c: 0x0  nop
    ctx->pc = 0x263e8cu;
    // NOP
label_263e90:
    // 0x263e90: 0xe8e7  .word       0x0000E8E7                   # not         $sp, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e90u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_263e94:
    // 0x263e94: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_263e98:
    // 0x263e98: 0x0  nop
    ctx->pc = 0x263e98u;
    // NOP
label_263e9c:
    // 0x263e9c: 0x0  nop
    ctx->pc = 0x263e9cu;
    // NOP
label_263ea0:
    // 0x263ea0: 0xe8f1  tgeu        $zero, $zero, 931
    ctx->pc = 0x263ea0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ea4:
    // 0x263ea4: 0x6730  tge         $zero, $zero, 412
    ctx->pc = 0x263ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ea8:
    // 0x263ea8: 0x0  nop
    ctx->pc = 0x263ea8u;
    // NOP
label_263eac:
    // 0x263eac: 0x0  nop
    ctx->pc = 0x263eacu;
    // NOP
label_263eb0:
    // 0x263eb0: 0xe8fe  dsrl32      $sp, $zero, 3
    ctx->pc = 0x263eb0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (32 + 3));
label_263eb4:
    // 0x263eb4: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263eb4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263eb8:
    // 0x263eb8: 0x0  nop
    ctx->pc = 0x263eb8u;
    // NOP
label_263ebc:
    // 0x263ebc: 0x0  nop
    ctx->pc = 0x263ebcu;
    // NOP
label_263ec0:
    // 0x263ec0: 0xe90e  .word       0x0000E90E                   # INVALID     $zero, $zero, -0x16F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x263EC0 raw=0x0000E90E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ec4:
    // 0x263ec4: 0x6ec0  sll         $t5, $zero, 27
    ctx->pc = 0x263ec4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263ec8:
    // 0x263ec8: 0x0  nop
    ctx->pc = 0x263ec8u;
    // NOP
label_263ecc:
    // 0x263ecc: 0x0  nop
    ctx->pc = 0x263eccu;
    // NOP
label_263ed0:
    // 0x263ed0: 0xe91c  .word       0x0000E91C                   # dmult       $zero, $zero # 0000E900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x263ED0 raw=0x0000E91C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ed4:
    // 0x263ed4: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_263ed8:
    // 0x263ed8: 0x0  nop
    ctx->pc = 0x263ed8u;
    // NOP
label_263edc:
    // 0x263edc: 0x0  nop
    ctx->pc = 0x263edcu;
    // NOP
label_263ee0:
    // 0x263ee0: 0xe92a  .word       0x0000E92A                   # slt         $sp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ee0u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263ee4:
    // 0x263ee4: 0x4ef0  tge         $zero, $zero, 315
    ctx->pc = 0x263ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ee8:
    // 0x263ee8: 0x0  nop
    ctx->pc = 0x263ee8u;
    // NOP
label_263eec:
    // 0x263eec: 0x0  nop
    ctx->pc = 0x263eecu;
    // NOP
label_263ef0:
    // 0x263ef0: 0xe934  teq         $zero, $zero, 932
    ctx->pc = 0x263ef0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ef4:
    // 0x263ef4: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263ef8:
    // 0x263ef8: 0x0  nop
    ctx->pc = 0x263ef8u;
    // NOP
label_263efc:
    // 0x263efc: 0x0  nop
    ctx->pc = 0x263efcu;
    // NOP
label_263f00:
    // 0x263f00: 0xe940  sll         $sp, $zero, 5
    ctx->pc = 0x263f00u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_263f04:
    // 0x263f04: 0x5d30  tge         $zero, $zero, 372
    ctx->pc = 0x263f04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f08:
    // 0x263f08: 0x0  nop
    ctx->pc = 0x263f08u;
    // NOP
label_263f0c:
    // 0x263f0c: 0x0  nop
    ctx->pc = 0x263f0cu;
    // NOP
label_263f10:
    // 0x263f10: 0xe94c  syscall     933
    ctx->pc = 0x263f10u;
    ctx->pc = 0x263F14u;
runtime->handleSyscall(rdram, ctx, 0x3A5u);
label_263f14:
    // 0x263f14: 0x90e0  .word       0x000090E0                   # add         $s2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_263f18:
    // 0x263f18: 0x0  nop
    ctx->pc = 0x263f18u;
    // NOP
label_263f1c:
    // 0x263f1c: 0x0  nop
    ctx->pc = 0x263f1cu;
    // NOP
label_263f20:
    // 0x263f20: 0xe95f  .word       0x0000E95F                   # ddivu       $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263F20 raw=0x0000E95F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263f24:
    // 0x263f24: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x263f24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_263f28:
    // 0x263f28: 0x0  nop
    ctx->pc = 0x263f28u;
    // NOP
label_263f2c:
    // 0x263f2c: 0x0  nop
    ctx->pc = 0x263f2cu;
    // NOP
label_263f30:
    // 0x263f30: 0xe96a  .word       0x0000E96A                   # slt         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f30u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263f34:
    // 0x263f34: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x263f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f38:
    // 0x263f38: 0x0  nop
    ctx->pc = 0x263f38u;
    // NOP
label_263f3c:
    // 0x263f3c: 0x0  nop
    ctx->pc = 0x263f3cu;
    // NOP
label_263f40:
    // 0x263f40: 0xe97a  dsrl        $sp, $zero, 5
    ctx->pc = 0x263f40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> 5);
label_263f44:
    // 0x263f44: 0x4af0  tge         $zero, $zero, 299
    ctx->pc = 0x263f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f48:
    // 0x263f48: 0x0  nop
    ctx->pc = 0x263f48u;
    // NOP
label_263f4c:
    // 0x263f4c: 0x0  nop
    ctx->pc = 0x263f4cu;
    // NOP
label_263f50:
    // 0x263f50: 0xe984  .word       0x0000E984                   # sllv        $sp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f50u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263f54:
    // 0x263f54: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_263f58:
    // 0x263f58: 0x0  nop
    ctx->pc = 0x263f58u;
    // NOP
label_263f5c:
    // 0x263f5c: 0x0  nop
    ctx->pc = 0x263f5cu;
    // NOP
label_263f60:
    // 0x263f60: 0xe98d  break       0, 934
    ctx->pc = 0x263f60u;
    runtime->handleBreak(rdram, ctx);
label_263f64:
    // 0x263f64: 0x3b60  .word       0x00003B60                   # add         $a3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    ctx->pc = 0x263f68u;
    return;
}
