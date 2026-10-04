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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part222(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2076e0u: goto label_2076e0;
        case 0x2076e4u: goto label_2076e4;
        case 0x2076e8u: goto label_2076e8;
        case 0x2076ecu: goto label_2076ec;
        case 0x2076f0u: goto label_2076f0;
        case 0x2076f4u: goto label_2076f4;
        case 0x2076f8u: goto label_2076f8;
        case 0x2076fcu: goto label_2076fc;
        case 0x207700u: goto label_207700;
        case 0x207704u: goto label_207704;
        case 0x207708u: goto label_207708;
        case 0x20770cu: goto label_20770c;
        case 0x207710u: goto label_207710;
        case 0x207714u: goto label_207714;
        case 0x207718u: goto label_207718;
        case 0x20771cu: goto label_20771c;
        case 0x207720u: goto label_207720;
        case 0x207724u: goto label_207724;
        case 0x207728u: goto label_207728;
        case 0x20772cu: goto label_20772c;
        case 0x207730u: goto label_207730;
        case 0x207734u: goto label_207734;
        case 0x207738u: goto label_207738;
        case 0x20773cu: goto label_20773c;
        case 0x207740u: goto label_207740;
        case 0x207744u: goto label_207744;
        case 0x207748u: goto label_207748;
        case 0x20774cu: goto label_20774c;
        case 0x207750u: goto label_207750;
        case 0x207754u: goto label_207754;
        case 0x207758u: goto label_207758;
        case 0x20775cu: goto label_20775c;
        case 0x207760u: goto label_207760;
        case 0x207764u: goto label_207764;
        case 0x207768u: goto label_207768;
        case 0x20776cu: goto label_20776c;
        case 0x207770u: goto label_207770;
        case 0x207774u: goto label_207774;
        case 0x207778u: goto label_207778;
        case 0x20777cu: goto label_20777c;
        case 0x207780u: goto label_207780;
        case 0x207784u: goto label_207784;
        case 0x207788u: goto label_207788;
        case 0x20778cu: goto label_20778c;
        case 0x207790u: goto label_207790;
        case 0x207794u: goto label_207794;
        case 0x207798u: goto label_207798;
        case 0x20779cu: goto label_20779c;
        case 0x2077a0u: goto label_2077a0;
        case 0x2077a4u: goto label_2077a4;
        case 0x2077a8u: goto label_2077a8;
        case 0x2077acu: goto label_2077ac;
        case 0x2077b0u: goto label_2077b0;
        case 0x2077b4u: goto label_2077b4;
        case 0x2077b8u: goto label_2077b8;
        case 0x2077bcu: goto label_2077bc;
        case 0x2077c0u: goto label_2077c0;
        case 0x2077c4u: goto label_2077c4;
        case 0x2077c8u: goto label_2077c8;
        case 0x2077ccu: goto label_2077cc;
        case 0x2077d0u: goto label_2077d0;
        case 0x2077d4u: goto label_2077d4;
        case 0x2077d8u: goto label_2077d8;
        case 0x2077dcu: goto label_2077dc;
        case 0x2077e0u: goto label_2077e0;
        case 0x2077e4u: goto label_2077e4;
        case 0x2077e8u: goto label_2077e8;
        case 0x2077ecu: goto label_2077ec;
        case 0x2077f0u: goto label_2077f0;
        case 0x2077f4u: goto label_2077f4;
        case 0x2077f8u: goto label_2077f8;
        case 0x2077fcu: goto label_2077fc;
        case 0x207800u: goto label_207800;
        case 0x207804u: goto label_207804;
        case 0x207808u: goto label_207808;
        case 0x20780cu: goto label_20780c;
        case 0x207810u: goto label_207810;
        case 0x207814u: goto label_207814;
        case 0x207818u: goto label_207818;
        case 0x20781cu: goto label_20781c;
        case 0x207820u: goto label_207820;
        case 0x207824u: goto label_207824;
        case 0x207828u: goto label_207828;
        case 0x20782cu: goto label_20782c;
        case 0x207830u: goto label_207830;
        case 0x207834u: goto label_207834;
        case 0x207838u: goto label_207838;
        case 0x20783cu: goto label_20783c;
        case 0x207840u: goto label_207840;
        case 0x207844u: goto label_207844;
        case 0x207848u: goto label_207848;
        case 0x20784cu: goto label_20784c;
        case 0x207850u: goto label_207850;
        case 0x207854u: goto label_207854;
        case 0x207858u: goto label_207858;
        case 0x20785cu: goto label_20785c;
        case 0x207860u: goto label_207860;
        case 0x207864u: goto label_207864;
        case 0x207868u: goto label_207868;
        case 0x20786cu: goto label_20786c;
        case 0x207870u: goto label_207870;
        case 0x207874u: goto label_207874;
        case 0x207878u: goto label_207878;
        case 0x20787cu: goto label_20787c;
        case 0x207880u: goto label_207880;
        case 0x207884u: goto label_207884;
        case 0x207888u: goto label_207888;
        case 0x20788cu: goto label_20788c;
        case 0x207890u: goto label_207890;
        case 0x207894u: goto label_207894;
        case 0x207898u: goto label_207898;
        case 0x20789cu: goto label_20789c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078a4u: goto label_2078a4;
        case 0x2078a8u: goto label_2078a8;
        case 0x2078acu: goto label_2078ac;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078bcu: goto label_2078bc;
        case 0x2078c0u: goto label_2078c0;
        case 0x2078c4u: goto label_2078c4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078ccu: goto label_2078cc;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078d4u: goto label_2078d4;
        case 0x2078d8u: goto label_2078d8;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078e0u: goto label_2078e0;
        case 0x2078e4u: goto label_2078e4;
        case 0x2078e8u: goto label_2078e8;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078f0u: goto label_2078f0;
        case 0x2078f4u: goto label_2078f4;
        case 0x2078f8u: goto label_2078f8;
        case 0x2078fcu: goto label_2078fc;
        case 0x207900u: goto label_207900;
        case 0x207904u: goto label_207904;
        case 0x207908u: goto label_207908;
        case 0x20790cu: goto label_20790c;
        case 0x207910u: goto label_207910;
        case 0x207914u: goto label_207914;
        case 0x207918u: goto label_207918;
        case 0x20791cu: goto label_20791c;
        case 0x207920u: goto label_207920;
        case 0x207924u: goto label_207924;
        case 0x207928u: goto label_207928;
        case 0x20792cu: goto label_20792c;
        case 0x207930u: goto label_207930;
        case 0x207934u: goto label_207934;
        case 0x207938u: goto label_207938;
        case 0x20793cu: goto label_20793c;
        case 0x207940u: goto label_207940;
        case 0x207944u: goto label_207944;
        case 0x207948u: goto label_207948;
        case 0x20794cu: goto label_20794c;
        case 0x207950u: goto label_207950;
        case 0x207954u: goto label_207954;
        case 0x207958u: goto label_207958;
        case 0x20795cu: goto label_20795c;
        case 0x207960u: goto label_207960;
        case 0x207964u: goto label_207964;
        case 0x207968u: goto label_207968;
        case 0x20796cu: goto label_20796c;
        case 0x207970u: goto label_207970;
        case 0x207974u: goto label_207974;
        case 0x207978u: goto label_207978;
        case 0x20797cu: goto label_20797c;
        case 0x207980u: goto label_207980;
        case 0x207984u: goto label_207984;
        case 0x207988u: goto label_207988;
        case 0x20798cu: goto label_20798c;
        case 0x207990u: goto label_207990;
        case 0x207994u: goto label_207994;
        case 0x207998u: goto label_207998;
        case 0x20799cu: goto label_20799c;
        case 0x2079a0u: goto label_2079a0;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079acu: goto label_2079ac;
        case 0x2079b0u: goto label_2079b0;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079b8u: goto label_2079b8;
        case 0x2079bcu: goto label_2079bc;
        case 0x2079c0u: goto label_2079c0;
        case 0x2079c4u: goto label_2079c4;
        case 0x2079c8u: goto label_2079c8;
        case 0x2079ccu: goto label_2079cc;
        case 0x2079d0u: goto label_2079d0;
        case 0x2079d4u: goto label_2079d4;
        case 0x2079d8u: goto label_2079d8;
        case 0x2079dcu: goto label_2079dc;
        case 0x2079e0u: goto label_2079e0;
        case 0x2079e4u: goto label_2079e4;
        case 0x2079e8u: goto label_2079e8;
        case 0x2079ecu: goto label_2079ec;
        case 0x2079f0u: goto label_2079f0;
        case 0x2079f4u: goto label_2079f4;
        case 0x2079f8u: goto label_2079f8;
        case 0x2079fcu: goto label_2079fc;
        case 0x207a00u: goto label_207a00;
        case 0x207a04u: goto label_207a04;
        case 0x207a08u: goto label_207a08;
        case 0x207a0cu: goto label_207a0c;
        case 0x207a10u: goto label_207a10;
        case 0x207a14u: goto label_207a14;
        case 0x207a18u: goto label_207a18;
        case 0x207a1cu: goto label_207a1c;
        case 0x207a20u: goto label_207a20;
        case 0x207a24u: goto label_207a24;
        case 0x207a28u: goto label_207a28;
        case 0x207a2cu: goto label_207a2c;
        case 0x207a30u: goto label_207a30;
        case 0x207a34u: goto label_207a34;
        case 0x207a38u: goto label_207a38;
        case 0x207a3cu: goto label_207a3c;
        case 0x207a40u: goto label_207a40;
        case 0x207a44u: goto label_207a44;
        case 0x207a48u: goto label_207a48;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a50u: goto label_207a50;
        case 0x207a54u: goto label_207a54;
        case 0x207a58u: goto label_207a58;
        case 0x207a5cu: goto label_207a5c;
        case 0x207a60u: goto label_207a60;
        case 0x207a64u: goto label_207a64;
        case 0x207a68u: goto label_207a68;
        case 0x207a6cu: goto label_207a6c;
        case 0x207a70u: goto label_207a70;
        case 0x207a74u: goto label_207a74;
        case 0x207a78u: goto label_207a78;
        case 0x207a7cu: goto label_207a7c;
        case 0x207a80u: goto label_207a80;
        case 0x207a84u: goto label_207a84;
        case 0x207a88u: goto label_207a88;
        case 0x207a8cu: goto label_207a8c;
        case 0x207a90u: goto label_207a90;
        case 0x207a94u: goto label_207a94;
        case 0x207a98u: goto label_207a98;
        case 0x207a9cu: goto label_207a9c;
        case 0x207aa0u: goto label_207aa0;
        case 0x207aa4u: goto label_207aa4;
        case 0x207aa8u: goto label_207aa8;
        case 0x207aacu: goto label_207aac;
        case 0x207ab0u: goto label_207ab0;
        case 0x207ab4u: goto label_207ab4;
        case 0x207ab8u: goto label_207ab8;
        case 0x207abcu: goto label_207abc;
        case 0x207ac0u: goto label_207ac0;
        case 0x207ac4u: goto label_207ac4;
        case 0x207ac8u: goto label_207ac8;
        case 0x207accu: goto label_207acc;
        case 0x207ad0u: goto label_207ad0;
        case 0x207ad4u: goto label_207ad4;
        case 0x207ad8u: goto label_207ad8;
        case 0x207adcu: goto label_207adc;
        case 0x207ae0u: goto label_207ae0;
        case 0x207ae4u: goto label_207ae4;
        case 0x207ae8u: goto label_207ae8;
        case 0x207aecu: goto label_207aec;
        case 0x207af0u: goto label_207af0;
        case 0x207af4u: goto label_207af4;
        case 0x207af8u: goto label_207af8;
        case 0x207afcu: goto label_207afc;
        case 0x207b00u: goto label_207b00;
        case 0x207b04u: goto label_207b04;
        case 0x207b08u: goto label_207b08;
        case 0x207b0cu: goto label_207b0c;
        case 0x207b10u: goto label_207b10;
        case 0x207b14u: goto label_207b14;
        case 0x207b18u: goto label_207b18;
        case 0x207b1cu: goto label_207b1c;
        case 0x207b20u: goto label_207b20;
        case 0x207b24u: goto label_207b24;
        case 0x207b28u: goto label_207b28;
        case 0x207b2cu: goto label_207b2c;
        case 0x207b30u: goto label_207b30;
        case 0x207b34u: goto label_207b34;
        case 0x207b38u: goto label_207b38;
        case 0x207b3cu: goto label_207b3c;
        case 0x207b40u: goto label_207b40;
        case 0x207b44u: goto label_207b44;
        case 0x207b48u: goto label_207b48;
        case 0x207b4cu: goto label_207b4c;
        case 0x207b50u: goto label_207b50;
        case 0x207b54u: goto label_207b54;
        case 0x207b58u: goto label_207b58;
        case 0x207b5cu: goto label_207b5c;
        case 0x207b60u: goto label_207b60;
        case 0x207b64u: goto label_207b64;
        case 0x207b68u: goto label_207b68;
        case 0x207b6cu: goto label_207b6c;
        case 0x207b70u: goto label_207b70;
        case 0x207b74u: goto label_207b74;
        case 0x207b78u: goto label_207b78;
        case 0x207b7cu: goto label_207b7c;
        case 0x207b80u: goto label_207b80;
        case 0x207b84u: goto label_207b84;
        case 0x207b88u: goto label_207b88;
        case 0x207b8cu: goto label_207b8c;
        case 0x207b90u: goto label_207b90;
        case 0x207b94u: goto label_207b94;
        case 0x207b98u: goto label_207b98;
        case 0x207b9cu: goto label_207b9c;
        case 0x207ba0u: goto label_207ba0;
        case 0x207ba4u: goto label_207ba4;
        case 0x207ba8u: goto label_207ba8;
        case 0x207bacu: goto label_207bac;
        case 0x207bb0u: goto label_207bb0;
        case 0x207bb4u: goto label_207bb4;
        case 0x207bb8u: goto label_207bb8;
        case 0x207bbcu: goto label_207bbc;
        case 0x207bc0u: goto label_207bc0;
        case 0x207bc4u: goto label_207bc4;
        case 0x207bc8u: goto label_207bc8;
        case 0x207bccu: goto label_207bcc;
        case 0x207bd0u: goto label_207bd0;
        case 0x207bd4u: goto label_207bd4;
        case 0x207bd8u: goto label_207bd8;
        case 0x207bdcu: goto label_207bdc;
        case 0x207be0u: goto label_207be0;
        case 0x207be4u: goto label_207be4;
        case 0x207be8u: goto label_207be8;
        case 0x207becu: goto label_207bec;
        case 0x207bf0u: goto label_207bf0;
        case 0x207bf4u: goto label_207bf4;
        case 0x207bf8u: goto label_207bf8;
        case 0x207bfcu: goto label_207bfc;
        case 0x207c00u: goto label_207c00;
        case 0x207c04u: goto label_207c04;
        case 0x207c08u: goto label_207c08;
        case 0x207c0cu: goto label_207c0c;
        case 0x207c10u: goto label_207c10;
        case 0x207c14u: goto label_207c14;
        case 0x207c18u: goto label_207c18;
        case 0x207c1cu: goto label_207c1c;
        case 0x207c20u: goto label_207c20;
        case 0x207c24u: goto label_207c24;
        case 0x207c28u: goto label_207c28;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c30u: goto label_207c30;
        case 0x207c34u: goto label_207c34;
        case 0x207c38u: goto label_207c38;
        case 0x207c3cu: goto label_207c3c;
        case 0x207c40u: goto label_207c40;
        case 0x207c44u: goto label_207c44;
        case 0x207c48u: goto label_207c48;
        case 0x207c4cu: goto label_207c4c;
        case 0x207c50u: goto label_207c50;
        case 0x207c54u: goto label_207c54;
        case 0x207c58u: goto label_207c58;
        case 0x207c5cu: goto label_207c5c;
        case 0x207c60u: goto label_207c60;
        case 0x207c64u: goto label_207c64;
        case 0x207c68u: goto label_207c68;
        case 0x207c6cu: goto label_207c6c;
        case 0x207c70u: goto label_207c70;
        case 0x207c74u: goto label_207c74;
        case 0x207c78u: goto label_207c78;
        case 0x207c7cu: goto label_207c7c;
        case 0x207c80u: goto label_207c80;
        case 0x207c84u: goto label_207c84;
        case 0x207c88u: goto label_207c88;
        case 0x207c8cu: goto label_207c8c;
        case 0x207c90u: goto label_207c90;
        case 0x207c94u: goto label_207c94;
        case 0x207c98u: goto label_207c98;
        case 0x207c9cu: goto label_207c9c;
        case 0x207ca0u: goto label_207ca0;
        case 0x207ca4u: goto label_207ca4;
        case 0x207ca8u: goto label_207ca8;
        case 0x207cacu: goto label_207cac;
        case 0x207cb0u: goto label_207cb0;
        case 0x207cb4u: goto label_207cb4;
        case 0x207cb8u: goto label_207cb8;
        case 0x207cbcu: goto label_207cbc;
        case 0x207cc0u: goto label_207cc0;
        case 0x207cc4u: goto label_207cc4;
        case 0x207cc8u: goto label_207cc8;
        case 0x207cccu: goto label_207ccc;
        case 0x207cd0u: goto label_207cd0;
        case 0x207cd4u: goto label_207cd4;
        case 0x207cd8u: goto label_207cd8;
        case 0x207cdcu: goto label_207cdc;
        case 0x207ce0u: goto label_207ce0;
        case 0x207ce4u: goto label_207ce4;
        case 0x207ce8u: goto label_207ce8;
        case 0x207cecu: goto label_207cec;
        case 0x207cf0u: goto label_207cf0;
        case 0x207cf4u: goto label_207cf4;
        case 0x207cf8u: goto label_207cf8;
        case 0x207cfcu: goto label_207cfc;
        case 0x207d00u: goto label_207d00;
        case 0x207d04u: goto label_207d04;
        case 0x207d08u: goto label_207d08;
        case 0x207d0cu: goto label_207d0c;
        case 0x207d10u: goto label_207d10;
        case 0x207d14u: goto label_207d14;
        case 0x207d18u: goto label_207d18;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d20u: goto label_207d20;
        case 0x207d24u: goto label_207d24;
        case 0x207d28u: goto label_207d28;
        case 0x207d2cu: goto label_207d2c;
        case 0x207d30u: goto label_207d30;
        case 0x207d34u: goto label_207d34;
        case 0x207d38u: goto label_207d38;
        case 0x207d3cu: goto label_207d3c;
        case 0x207d40u: goto label_207d40;
        case 0x207d44u: goto label_207d44;
        case 0x207d48u: goto label_207d48;
        case 0x207d4cu: goto label_207d4c;
        case 0x207d50u: goto label_207d50;
        case 0x207d54u: goto label_207d54;
        case 0x207d58u: goto label_207d58;
        case 0x207d5cu: goto label_207d5c;
        case 0x207d60u: goto label_207d60;
        case 0x207d64u: goto label_207d64;
        case 0x207d68u: goto label_207d68;
        case 0x207d6cu: goto label_207d6c;
        case 0x207d70u: goto label_207d70;
        case 0x207d74u: goto label_207d74;
        case 0x207d78u: goto label_207d78;
        case 0x207d7cu: goto label_207d7c;
        case 0x207d80u: goto label_207d80;
        case 0x207d84u: goto label_207d84;
        case 0x207d88u: goto label_207d88;
        case 0x207d8cu: goto label_207d8c;
        case 0x207d90u: goto label_207d90;
        case 0x207d94u: goto label_207d94;
        case 0x207d98u: goto label_207d98;
        case 0x207d9cu: goto label_207d9c;
        case 0x207da0u: goto label_207da0;
        case 0x207da4u: goto label_207da4;
        case 0x207da8u: goto label_207da8;
        case 0x207dacu: goto label_207dac;
        case 0x207db0u: goto label_207db0;
        case 0x207db4u: goto label_207db4;
        case 0x207db8u: goto label_207db8;
        case 0x207dbcu: goto label_207dbc;
        case 0x207dc0u: goto label_207dc0;
        case 0x207dc4u: goto label_207dc4;
        case 0x207dc8u: goto label_207dc8;
        case 0x207dccu: goto label_207dcc;
        case 0x207dd0u: goto label_207dd0;
        case 0x207dd4u: goto label_207dd4;
        case 0x207dd8u: goto label_207dd8;
        case 0x207ddcu: goto label_207ddc;
        case 0x207de0u: goto label_207de0;
        case 0x207de4u: goto label_207de4;
        case 0x207de8u: goto label_207de8;
        case 0x207decu: goto label_207dec;
        case 0x207df0u: goto label_207df0;
        case 0x207df4u: goto label_207df4;
        case 0x207df8u: goto label_207df8;
        case 0x207dfcu: goto label_207dfc;
        case 0x207e00u: goto label_207e00;
        case 0x207e04u: goto label_207e04;
        case 0x207e08u: goto label_207e08;
        case 0x207e0cu: goto label_207e0c;
        case 0x207e10u: goto label_207e10;
        case 0x207e14u: goto label_207e14;
        case 0x207e18u: goto label_207e18;
        case 0x207e1cu: goto label_207e1c;
        case 0x207e20u: goto label_207e20;
        case 0x207e24u: goto label_207e24;
        case 0x207e28u: goto label_207e28;
        case 0x207e2cu: goto label_207e2c;
        case 0x207e30u: goto label_207e30;
        case 0x207e34u: goto label_207e34;
        case 0x207e38u: goto label_207e38;
        case 0x207e3cu: goto label_207e3c;
        case 0x207e40u: goto label_207e40;
        case 0x207e44u: goto label_207e44;
        case 0x207e48u: goto label_207e48;
        case 0x207e4cu: goto label_207e4c;
        case 0x207e50u: goto label_207e50;
        case 0x207e54u: goto label_207e54;
        case 0x207e58u: goto label_207e58;
        case 0x207e5cu: goto label_207e5c;
        case 0x207e60u: goto label_207e60;
        case 0x207e64u: goto label_207e64;
        case 0x207e68u: goto label_207e68;
        case 0x207e6cu: goto label_207e6c;
        case 0x207e70u: goto label_207e70;
        case 0x207e74u: goto label_207e74;
        case 0x207e78u: goto label_207e78;
        case 0x207e7cu: goto label_207e7c;
        case 0x207e80u: goto label_207e80;
        case 0x207e84u: goto label_207e84;
        case 0x207e88u: goto label_207e88;
        case 0x207e8cu: goto label_207e8c;
        case 0x207e90u: goto label_207e90;
        case 0x207e94u: goto label_207e94;
        case 0x207e98u: goto label_207e98;
        case 0x207e9cu: goto label_207e9c;
        case 0x207ea0u: goto label_207ea0;
        case 0x207ea4u: goto label_207ea4;
        case 0x207ea8u: goto label_207ea8;
        case 0x207eacu: goto label_207eac;
        default: return;
    }

label_2076e0:
    // 0x2076e0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2076e4:
    // 0x2076e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2076e8:
    // 0x2076e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2076ec:
    // 0x2076ec: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2076f0:
    // 0x2076f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2076f4:
    // 0x2076f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2076f8:
    // 0x2076f8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2076f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2076fc:
    // 0x2076fc: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_207700:
    // 0x207700: 0x0  nop
    ctx->pc = 0x207700u;
    // NOP
label_207704:
    // 0x207704: 0x1010  mfhi        $v0
    ctx->pc = 0x207704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_207708:
    // 0x207708: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_20770c:
    // 0x20770c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_207710:
    // 0x207710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x207710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_207714:
    // 0x207714: 0x92050066  lbu         $a1, 0x66($s0)
    ctx->pc = 0x207714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 102)));
label_207718:
    // 0x207718: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20771c:
    // 0x20771c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_207720:
    // 0x207720: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x207720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_207724:
    // 0x207724: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207724u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207728:
    // 0x207728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20772c:
    // 0x20772c: 0xac23e2fc  sw          $v1, -0x1D04($at)
    ctx->pc = 0x20772cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959868), GPR_U32(ctx, 3));
label_207730:
    // 0x207730: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207734:
    // 0x207734: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207738:
    // 0x207738: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x207738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
label_20773c:
    // 0x20773c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_207740:
    // 0x207740: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x207740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_207744:
    // 0x207744: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207748:
    // 0x207748: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20774c:
    // 0x20774c: 0x8c25e300  lw          $a1, -0x1D00($at)
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_207750:
    // 0x207750: 0xc056968  jal         func_15A5A0
label_207754:
    if (ctx->pc == 0x207754u) {
        ctx->pc = 0x207754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207750u;
        // 0x207754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207758u;
        goto label_207758;
    }
    ctx->pc = 0x207750u;
    SET_GPR_U32(ctx, 31, 0x207758u);
    ctx->pc = 0x207754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207750u;
    // 0x207754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x207750u, 0x207758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207758u;
label_207758:
    // 0x207758: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20775c:
    // 0x20775c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207760:
    // 0x207760: 0x92040069  lbu         $a0, 0x69($s0)
    ctx->pc = 0x207760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_207764:
    // 0x207764: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_207768:
    // 0x207768: 0xac24e304  sw          $a0, -0x1CFC($at)
    ctx->pc = 0x207768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959876), GPR_U32(ctx, 4));
label_20776c:
    // 0x20776c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207770:
    // 0x207770: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207774:
    // 0x207774: 0x92040071  lbu         $a0, 0x71($s0)
    ctx->pc = 0x207774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
label_207778:
    // 0x207778: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_20777c:
    // 0x20777c: 0xac24e314  sw          $a0, -0x1CEC($at)
    ctx->pc = 0x20777cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959892), GPR_U32(ctx, 4));
label_207780:
    // 0x207780: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207784:
    // 0x207784: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207788:
    // 0x207788: 0x92040073  lbu         $a0, 0x73($s0)
    ctx->pc = 0x207788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
label_20778c:
    // 0x20778c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_207790:
    // 0x207790: 0xac24e318  sw          $a0, -0x1CE8($at)
    ctx->pc = 0x207790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959896), GPR_U32(ctx, 4));
label_207794:
    // 0x207794: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207798:
    // 0x207798: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20779c:
    // 0x20779c: 0x92040074  lbu         $a0, 0x74($s0)
    ctx->pc = 0x20779cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
label_2077a0:
    // 0x2077a0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2077a4:
    // 0x2077a4: 0xac24e31c  sw          $a0, -0x1CE4($at)
    ctx->pc = 0x2077a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959900), GPR_U32(ctx, 4));
label_2077a8:
    // 0x2077a8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2077ac:
    // 0x2077ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2077acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2077b0:
    // 0x2077b0: 0x92040075  lbu         $a0, 0x75($s0)
    ctx->pc = 0x2077b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
label_2077b4:
    // 0x2077b4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2077b8:
    // 0x2077b8: 0xac24e320  sw          $a0, -0x1CE0($at)
    ctx->pc = 0x2077b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959904), GPR_U32(ctx, 4));
label_2077bc:
    // 0x2077bc: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2077c0:
    // 0x2077c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2077c4:
    // 0x2077c4: 0x9204006b  lbu         $a0, 0x6B($s0)
    ctx->pc = 0x2077c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
label_2077c8:
    // 0x2077c8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2077cc:
    // 0x2077cc: 0xac24e308  sw          $a0, -0x1CF8($at)
    ctx->pc = 0x2077ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959880), GPR_U32(ctx, 4));
label_2077d0:
    // 0x2077d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2077d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2077d4:
    // 0x2077d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2077d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2077d8:
    // 0x2077d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2077d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2077dc:
    // 0x2077dc: 0x3e00008  jr          $ra
label_2077e0:
    if (ctx->pc == 0x2077E0u) {
        ctx->pc = 0x2077E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077DCu;
        // 0x2077e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077E4u;
        goto label_2077e4;
    }
    ctx->pc = 0x2077DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2077E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077DCu;
        // 0x2077e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077E4u;
label_2077e4:
    // 0x2077e4: 0x0  nop
    ctx->pc = 0x2077e4u;
    // NOP
label_2077e8:
    // 0x2077e8: 0x0  nop
    ctx->pc = 0x2077e8u;
    // NOP
label_2077ec:
    // 0x2077ec: 0x0  nop
    ctx->pc = 0x2077ecu;
    // NOP
label_2077f0:
    // 0x2077f0: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2077f4:
    // 0x2077f4: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_2077f8:
    if (ctx->pc == 0x2077F8u) {
        ctx->pc = 0x2077F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077F4u;
        // 0x2077f8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077FCu;
        goto label_2077fc;
    }
    ctx->pc = 0x2077F4u;
    {
        const bool branch_taken_0x2077f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077F4u;
        // 0x2077f8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077f4) {
            ctx->pc = 0x207964u;
            goto label_207964;
        }
    }
    ctx->pc = 0x2077FCu;
label_2077fc:
    // 0x2077fc: 0x3463e2e4  ori         $v1, $v1, 0xE2E4
    ctx->pc = 0x2077fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58084);
label_207800:
    // 0x207800: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x207800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_207804:
    // 0x207804: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207808:
    // 0x207808: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20780c:
    if (ctx->pc == 0x20780Cu) {
        ctx->pc = 0x20780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207808u;
        // 0x20780c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207810u;
        goto label_207810;
    }
    ctx->pc = 0x207808u;
    {
        const bool branch_taken_0x207808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207808u;
        // 0x20780c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207808) {
            ctx->pc = 0x207838u;
            goto label_207838;
        }
    }
    ctx->pc = 0x207810u;
label_207810:
    // 0x207810: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_207814:
    // 0x207814: 0x3421e2e8  ori         $at, $at, 0xE2E8
    ctx->pc = 0x207814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58088);
label_207818:
    // 0x207818: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20781c:
    // 0x20781c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207820:
    // 0x207820: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x207820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_207824:
    // 0x207824: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x207824u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_207828:
    // 0x207828: 0x0  nop
    ctx->pc = 0x207828u;
    // NOP
label_20782c:
    // 0x20782c: 0x0  nop
    ctx->pc = 0x20782cu;
    // NOP
label_207830:
    // 0x207830: 0x1810  mfhi        $v1
    ctx->pc = 0x207830u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_207834:
    // 0x207834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x207834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_207838:
    // 0x207838: 0x8f8590fc  lw          $a1, -0x6F04($gp)
    ctx->pc = 0x207838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20783c:
    // 0x20783c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20783cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_207840:
    // 0x207840: 0x3464e2e0  ori         $a0, $v1, 0xE2E0
    ctx->pc = 0x207840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58080);
label_207844:
    // 0x207844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207848:
    // 0x207848: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x207848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20784c:
    // 0x20784c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20784cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207850:
    // 0x207850: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_207854:
    if (ctx->pc == 0x207854u) {
        ctx->pc = 0x207854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207850u;
        // 0x207854: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207858u;
        goto label_207858;
    }
    ctx->pc = 0x207850u;
    {
        const bool branch_taken_0x207850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x207854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207850u;
        // 0x207854: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207850) {
            ctx->pc = 0x2078E0u;
            goto label_2078e0;
        }
    }
    ctx->pc = 0x207858u;
label_207858:
    // 0x207858: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20785c:
    // 0x20785c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x20785cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_207860:
    // 0x207860: 0x8c24e2e4  lw          $a0, -0x1D1C($at)
    ctx->pc = 0x207860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_207864:
    // 0x207864: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207868:
    // 0x207868: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x207868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20786c:
    // 0x20786c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x20786cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_207870:
    // 0x207870: 0xac23e2e4  sw          $v1, -0x1D1C($at)
    ctx->pc = 0x207870u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
label_207874:
    // 0x207874: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_207878:
    // 0x207878: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_20787c:
    if (ctx->pc == 0x20787Cu) {
        ctx->pc = 0x207880u;
        goto label_207880;
    }
    ctx->pc = 0x207878u;
    {
        const bool branch_taken_0x207878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207878) {
            ctx->pc = 0x2078A4u;
            goto label_2078a4;
        }
    }
    ctx->pc = 0x207880u;
label_207880:
    // 0x207880: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207884:
    // 0x207884: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207888:
    // 0x207888: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20788c:
    // 0x20788c: 0x8c25e2e4  lw          $a1, -0x1D1C($at)
    ctx->pc = 0x20788cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_207890:
    // 0x207890: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207894:
    // 0x207894: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_207898:
    // 0x207898: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20789c:
    // 0x20789c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2078a0:
    if (ctx->pc == 0x2078A0u) {
        ctx->pc = 0x2078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20789Cu;
        // 0x2078a0: 0xac23e2e4  sw          $v1, -0x1D1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078A4u;
        goto label_2078a4;
    }
    ctx->pc = 0x20789Cu;
    {
        const bool branch_taken_0x20789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20789Cu;
        // 0x2078a0: 0xac23e2e4  sw          $v1, -0x1D1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20789c) {
            ctx->pc = 0x2078A8u;
            goto label_2078a8;
        }
    }
    ctx->pc = 0x2078A4u;
label_2078a4:
    // 0x2078a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2078a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2078a8:
    // 0x2078a8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2078ac:
    // 0x2078ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2078b0:
    // 0x2078b0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2078b4:
    // 0x2078b4: 0xac25e2e4  sw          $a1, -0x1D1C($at)
    ctx->pc = 0x2078b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 5));
label_2078b8:
    // 0x2078b8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2078bc:
    // 0x2078bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2078c0:
    // 0x2078c0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2078c4:
    // 0x2078c4: 0x8c23e2e4  lw          $v1, -0x1D1C($at)
    ctx->pc = 0x2078c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_2078c8:
    // 0x2078c8: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x2078c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_2078cc:
    // 0x2078cc: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_2078d0:
    if (ctx->pc == 0x2078D0u) {
        ctx->pc = 0x2078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078CCu;
        // 0x2078d0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078D4u;
        goto label_2078d4;
    }
    ctx->pc = 0x2078CCu;
    {
        const bool branch_taken_0x2078cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078CCu;
        // 0x2078d0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078cc) {
            ctx->pc = 0x207964u;
            goto label_207964;
        }
    }
    ctx->pc = 0x2078D4u;
label_2078d4:
    // 0x2078d4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2078d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2078d8:
    // 0x2078d8: 0x10000022  b           . + 4 + (0x22 << 2)
label_2078dc:
    if (ctx->pc == 0x2078DCu) {
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D8u;
        // 0x2078dc: 0xac20e2e0  sw          $zero, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078E0u;
        goto label_2078e0;
    }
    ctx->pc = 0x2078D8u;
    {
        const bool branch_taken_0x2078d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D8u;
        // 0x2078dc: 0xac20e2e0  sw          $zero, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078d8) {
            ctx->pc = 0x207964u;
            goto label_207964;
        }
    }
    ctx->pc = 0x2078E0u;
label_2078e0:
    // 0x2078e0: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_2078e4:
    if (ctx->pc == 0x2078E4u) {
        ctx->pc = 0x2078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E0u;
        // 0x2078e4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078E8u;
        goto label_2078e8;
    }
    ctx->pc = 0x2078E0u;
    {
        const bool branch_taken_0x2078e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E0u;
        // 0x2078e4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078e0) {
            ctx->pc = 0x207964u;
            goto label_207964;
        }
    }
    ctx->pc = 0x2078E8u;
label_2078e8:
    // 0x2078e8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2078e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2078ec:
    // 0x2078ec: 0x8c24e2e4  lw          $a0, -0x1D1C($at)
    ctx->pc = 0x2078ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_2078f0:
    // 0x2078f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2078f4:
    // 0x2078f4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2078f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2078f8:
    // 0x2078f8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2078f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2078fc:
    // 0x2078fc: 0xac23e2e4  sw          $v1, -0x1D1C($at)
    ctx->pc = 0x2078fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
label_207900:
    // 0x207900: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_207904:
    // 0x207904: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_207908:
    if (ctx->pc == 0x207908u) {
        ctx->pc = 0x20790Cu;
        goto label_20790c;
    }
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207904) {
            ctx->pc = 0x207930u;
            goto label_207930;
        }
    }
    ctx->pc = 0x20790Cu;
label_20790c:
    // 0x20790c: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207910:
    // 0x207910: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207914:
    // 0x207914: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_207918:
    // 0x207918: 0x8c25e2e4  lw          $a1, -0x1D1C($at)
    ctx->pc = 0x207918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_20791c:
    // 0x20791c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20791cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207920:
    // 0x207920: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_207924:
    // 0x207924: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_207928:
    // 0x207928: 0x10000002  b           . + 4 + (0x2 << 2)
label_20792c:
    if (ctx->pc == 0x20792Cu) {
        ctx->pc = 0x20792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207928u;
        // 0x20792c: 0xac23e2e4  sw          $v1, -0x1D1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207930u;
        goto label_207930;
    }
    ctx->pc = 0x207928u;
    {
        const bool branch_taken_0x207928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207928u;
        // 0x20792c: 0xac23e2e4  sw          $v1, -0x1D1C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207928) {
            ctx->pc = 0x207934u;
            goto label_207934;
        }
    }
    ctx->pc = 0x207930u;
label_207930:
    // 0x207930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207934:
    // 0x207934: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207938:
    // 0x207938: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20793c:
    // 0x20793c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20793cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_207940:
    // 0x207940: 0xac25e2e4  sw          $a1, -0x1D1C($at)
    ctx->pc = 0x207940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 5));
label_207944:
    // 0x207944: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207948:
    // 0x207948: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20794c:
    // 0x20794c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20794cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_207950:
    // 0x207950: 0x8c23e2e4  lw          $v1, -0x1D1C($at)
    ctx->pc = 0x207950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_207954:
    // 0x207954: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_207958:
    if (ctx->pc == 0x207958u) {
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20795Cu;
        goto label_20795c;
    }
    ctx->pc = 0x207954u;
    {
        const bool branch_taken_0x207954 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207954) {
            ctx->pc = 0x207964u;
            goto label_207964;
        }
    }
    ctx->pc = 0x20795Cu;
label_20795c:
    // 0x20795c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20795cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_207960:
    // 0x207960: 0xac20e2e0  sw          $zero, -0x1D20($at)
    ctx->pc = 0x207960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
label_207964:
    // 0x207964: 0x3e00008  jr          $ra
label_207968:
    if (ctx->pc == 0x207968u) {
        ctx->pc = 0x20796Cu;
        goto label_20796c;
    }
    ctx->pc = 0x207964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20796Cu;
label_20796c:
    // 0x20796c: 0x0  nop
    ctx->pc = 0x20796cu;
    // NOP
label_207970:
    // 0x207970: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x207970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_207974:
    // 0x207974: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x207974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_207978:
    // 0x207978: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x207978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_20797c:
    // 0x20797c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_207980:
    // 0x207980: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x207980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_207984:
    // 0x207984: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x207984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_207988:
    // 0x207988: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x207988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20798c:
    // 0x20798c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_207990:
    // 0x207990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207994:
    // 0x207994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207998:
    // 0x207998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20799c:
    // 0x20799c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2079a0:
    // 0x2079a0: 0x1060049a  beqz        $v1, . + 4 + (0x49A << 2)
label_2079a4:
    if (ctx->pc == 0x2079A4u) {
        ctx->pc = 0x2079A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079A0u;
        // 0x2079a4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079A8u;
        goto label_2079a8;
    }
    ctx->pc = 0x2079A0u;
    {
        const bool branch_taken_0x2079a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079A0u;
        // 0x2079a4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079a0) {
            ctx->pc = 0x208C0Cu;
            { ctx->pc = 0x208c0c; return; }
        }
    }
    ctx->pc = 0x2079A8u;
label_2079a8:
    // 0x2079a8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2079a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2079ac:
    // 0x2079ac: 0x8c24e2e4  lw          $a0, -0x1D1C($at)
    ctx->pc = 0x2079acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
label_2079b0:
    // 0x2079b0: 0x10800496  beqz        $a0, . + 4 + (0x496 << 2)
label_2079b4:
    if (ctx->pc == 0x2079B4u) {
        ctx->pc = 0x2079B8u;
        goto label_2079b8;
    }
    ctx->pc = 0x2079B0u;
    {
        const bool branch_taken_0x2079b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079b0) {
            ctx->pc = 0x208C0Cu;
            { ctx->pc = 0x208c0c; return; }
        }
    }
    ctx->pc = 0x2079B8u;
label_2079b8:
    // 0x2079b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2079bc:
    // 0x2079bc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2079bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2079c0:
    // 0x2079c0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2079c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2079c4:
    // 0x2079c4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2079c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2079c8:
    // 0x2079c8: 0x8c2ae310  lw          $t2, -0x1CF0($at)
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959888)));
label_2079cc:
    // 0x2079cc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x2079ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_2079d0:
    // 0x2079d0: 0x3444aaab  ori         $a0, $v0, 0xAAAB
    ctx->pc = 0x2079d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_2079d4:
    // 0x2079d4: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x2079d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
label_2079d8:
    // 0x2079d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2079dc:
    // 0x2079dc: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x2079dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
label_2079e0:
    // 0x2079e0: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2079e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2079e4:
    // 0x2079e4: 0x25081e00  addiu       $t0, $t0, 0x1E00
    ctx->pc = 0x2079e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7680));
label_2079e8:
    // 0x2079e8: 0x25900  sll         $t3, $v0, 4
    ctx->pc = 0x2079e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2079ec:
    // 0x2079ec: 0x3406f170  ori         $a2, $zero, 0xF170
    ctx->pc = 0x2079ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61808);
label_2079f0:
    // 0x2079f0: 0x2529c990  addiu       $t1, $t1, -0x3670
    ctx->pc = 0x2079f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953360));
label_2079f4:
    // 0x2079f4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2079f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2079f8:
    // 0x2079f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_2079fc:
    // 0x2079fc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_207a00:
    // 0x207a00: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_207a04:
    // 0x207a04: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x207a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_207a08:
    // 0x207a08: 0xc1140  sll         $v0, $t4, 5
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_207a0c:
    // 0x207a0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_207a10:
    // 0x207a10: 0x1866018  mult        $t4, $t4, $a2
    ctx->pc = 0x207a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_207a14:
    // 0x207a14: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x207a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_207a18:
    // 0x207a18: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x207a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_207a1c:
    // 0x207a1c: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x207a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_207a20:
    // 0x207a20: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x207a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_207a24:
    // 0x207a24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x207a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_207a28:
    // 0x207a28: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x207a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_207a2c:
    // 0x207a2c: 0xb2fc2  srl         $a1, $t3, 31
    ctx->pc = 0x207a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
label_207a30:
    // 0x207a30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207a34:
    // 0x207a34: 0x6c8021  addu        $s0, $v1, $t4
    ctx->pc = 0x207a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_207a38:
    // 0x207a38: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_207a3c:
    // 0x207a3c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x207a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_207a40:
    // 0x207a40: 0x8b0018  mult        $zero, $a0, $t3
    ctx->pc = 0x207a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_207a44:
    // 0x207a44: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x207a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207a48:
    // 0x207a48: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x207a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_207a4c:
    // 0x207a4c: 0x240900b8  addiu       $t1, $zero, 0xB8
    ctx->pc = 0x207a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_207a50:
    // 0x207a50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207a54:
    // 0x207a54: 0x1010  mfhi        $v0
    ctx->pc = 0x207a54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_207a58:
    // 0x207a58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x207a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_207a5c:
    // 0x207a5c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x207a5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_207a60:
    // 0x207a60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x207a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_207a64:
    // 0x207a64: 0x24570280  addiu       $s7, $v0, 0x280
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_207a68:
    // 0x207a68: 0xc07c1f4  jal         func_1F07D0
label_207a6c:
    if (ctx->pc == 0x207A6Cu) {
        ctx->pc = 0x207A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A68u;
        // 0x207a6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A70u;
        goto label_207a70;
    }
    ctx->pc = 0x207A68u;
    SET_GPR_U32(ctx, 31, 0x207A70u);
    ctx->pc = 0x207A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207A68u;
    // 0x207a6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x207A70u;
label_207a70:
    // 0x207a70: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_207a74:
    // 0x207a74: 0x24037bf0  addiu       $v1, $zero, 0x7BF0
    ctx->pc = 0x207a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31728));
label_207a78:
    // 0x207a78: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207a7c:
    // 0x207a7c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x207a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_207a80:
    // 0x207a80: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_207a84:
    // 0x207a84: 0xa6040d10  sh          $a0, 0xD10($s0)
    ctx->pc = 0x207a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3344), (uint16_t)GPR_U32(ctx, 4));
label_207a88:
    // 0x207a88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207a8c:
    // 0x207a8c: 0xa6030d12  sh          $v1, 0xD12($s0)
    ctx->pc = 0x207a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3346), (uint16_t)GPR_U32(ctx, 3));
label_207a90:
    // 0x207a90: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x207a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207a94:
    // 0x207a94: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x207a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207a98:
    // 0x207a98: 0xae040d14  sw          $a0, 0xD14($s0)
    ctx->pc = 0x207a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3348), GPR_U32(ctx, 4));
label_207a9c:
    // 0x207a9c: 0xa6020d20  sh          $v0, 0xD20($s0)
    ctx->pc = 0x207a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3360), (uint16_t)GPR_U32(ctx, 2));
label_207aa0:
    // 0x207aa0: 0x24037c70  addiu       $v1, $zero, 0x7C70
    ctx->pc = 0x207aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31856));
label_207aa4:
    // 0x207aa4: 0xa6030d22  sh          $v1, 0xD22($s0)
    ctx->pc = 0x207aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3362), (uint16_t)GPR_U32(ctx, 3));
label_207aa8:
    // 0x207aa8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_207aac:
    // 0x207aac: 0xae040d24  sw          $a0, 0xD24($s0)
    ctx->pc = 0x207aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3364), GPR_U32(ctx, 4));
label_207ab0:
    // 0x207ab0: 0x3442e30c  ori         $v0, $v0, 0xE30C
    ctx->pc = 0x207ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58124);
label_207ab4:
    // 0x207ab4: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207ab8:
    // 0x207ab8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207abc:
    // 0x207abc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207ac0:
    // 0x207ac0: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x207ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_207ac4:
    // 0x207ac4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_207ac8:
    if (ctx->pc == 0x207AC8u) {
        ctx->pc = 0x207AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC4u;
        // 0x207ac8: 0x24050280  addiu       $a1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207ACCu;
        goto label_207acc;
    }
    ctx->pc = 0x207AC4u;
    {
        const bool branch_taken_0x207ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC4u;
        // 0x207ac8: 0x24050280  addiu       $a1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ac4) {
            ctx->pc = 0x207B68u;
            goto label_207b68;
        }
    }
    ctx->pc = 0x207ACCu;
label_207acc:
    // 0x207acc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207ad0:
    // 0x207ad0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_207ad4:
    // 0x207ad4: 0x8c25e2e8  lw          $a1, -0x1D18($at)
    ctx->pc = 0x207ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959848)));
label_207ad8:
    // 0x207ad8: 0x28a10018  slti        $at, $a1, 0x18
    ctx->pc = 0x207ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_207adc:
    // 0x207adc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_207ae0:
    if (ctx->pc == 0x207AE0u) {
        ctx->pc = 0x207AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207ADCu;
        // 0x207ae0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AE4u;
        goto label_207ae4;
    }
    ctx->pc = 0x207ADCu;
    {
        const bool branch_taken_0x207adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207ADCu;
        // 0x207ae0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207adc) {
            ctx->pc = 0x207B14u;
            goto label_207b14;
        }
    }
    ctx->pc = 0x207AE4u;
label_207ae4:
    // 0x207ae4: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x207ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_207ae8:
    // 0x207ae8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_207aec:
    // 0x207aec: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x207aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_207af0:
    // 0x207af0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_207af4:
    // 0x207af4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x207af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_207af8:
    // 0x207af8: 0x0  nop
    ctx->pc = 0x207af8u;
    // NOP
label_207afc:
    // 0x207afc: 0x0  nop
    ctx->pc = 0x207afcu;
    // NOP
label_207b00:
    // 0x207b00: 0x1810  mfhi        $v1
    ctx->pc = 0x207b00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_207b04:
    // 0x207b04: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_207b08:
    // 0x207b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_207b0c:
    // 0x207b0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_207b10:
    if (ctx->pc == 0x207B10u) {
        ctx->pc = 0x207B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B0Cu;
        // 0x207b10: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B14u;
        goto label_207b14;
    }
    ctx->pc = 0x207B0Cu;
    {
        const bool branch_taken_0x207b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B0Cu;
        // 0x207b10: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b0c) {
            ctx->pc = 0x207B44u;
            goto label_207b44;
        }
    }
    ctx->pc = 0x207B14u;
label_207b14:
    // 0x207b14: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_207b18:
    // 0x207b18: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x207b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_207b1c:
    // 0x207b1c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x207b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_207b20:
    // 0x207b20: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_207b24:
    // 0x207b24: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x207b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_207b28:
    // 0x207b28: 0x0  nop
    ctx->pc = 0x207b28u;
    // NOP
label_207b2c:
    // 0x207b2c: 0x0  nop
    ctx->pc = 0x207b2cu;
    // NOP
label_207b30:
    // 0x207b30: 0x1810  mfhi        $v1
    ctx->pc = 0x207b30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_207b34:
    // 0x207b34: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x207b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_207b38:
    // 0x207b38: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x207b38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_207b3c:
    // 0x207b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x207b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_207b40:
    // 0x207b40: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_207b44:
    // 0x207b44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_207b48:
    if (ctx->pc == 0x207B48u) {
        ctx->pc = 0x207B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B44u;
        // 0x207b48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B4Cu;
        goto label_207b4c;
    }
    ctx->pc = 0x207B44u;
    {
        const bool branch_taken_0x207b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B44u;
        // 0x207b48: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b44) {
            ctx->pc = 0x207B54u;
            goto label_207b54;
        }
    }
    ctx->pc = 0x207B4Cu;
label_207b4c:
    // 0x207b4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_207b50:
    if (ctx->pc == 0x207B50u) {
        ctx->pc = 0x207B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B4Cu;
        // 0x207b50: 0x24060076  addiu       $a2, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B54u;
        goto label_207b54;
    }
    ctx->pc = 0x207B4Cu;
    {
        const bool branch_taken_0x207b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B4Cu;
        // 0x207b50: 0x24060076  addiu       $a2, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b4c) {
            ctx->pc = 0x207B70u;
            goto label_207b70;
        }
    }
    ctx->pc = 0x207B54u;
label_207b54:
    // 0x207b54: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x207b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_207b58:
    // 0x207b58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207b5c:
    // 0x207b5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x207b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_207b60:
    // 0x207b60: 0x10000003  b           . + 4 + (0x3 << 2)
label_207b64:
    if (ctx->pc == 0x207B64u) {
        ctx->pc = 0x207B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B60u;
        // 0x207b64: 0x24460082  addiu       $a2, $v0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B68u;
        goto label_207b68;
    }
    ctx->pc = 0x207B60u;
    {
        const bool branch_taken_0x207b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B60u;
        // 0x207b64: 0x24460082  addiu       $a2, $v0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b60) {
            ctx->pc = 0x207B70u;
            goto label_207b70;
        }
    }
    ctx->pc = 0x207B68u;
label_207b68:
    // 0x207b68: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207b6c:
    // 0x207b6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x207b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207b70:
    // 0x207b70: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_207b74:
    // 0x207b74: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x207b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_207b78:
    // 0x207b78: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x207b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
label_207b7c:
    // 0x207b7c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x207b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207b80:
    // 0x207b80: 0xc07c0d0  jal         func_1F0340
label_207b84:
    if (ctx->pc == 0x207B84u) {
        ctx->pc = 0x207B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B80u;
        // 0x207b84: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B88u;
        goto label_207b88;
    }
    ctx->pc = 0x207B80u;
    SET_GPR_U32(ctx, 31, 0x207B88u);
    ctx->pc = 0x207B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B80u;
    // 0x207b84: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x207B88u;
label_207b88:
    // 0x207b88: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207b8c:
    // 0x207b8c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207b90:
    // 0x207b90: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207b94:
    // 0x207b94: 0x8c23e30c  lw          $v1, -0x1CF4($at)
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959884)));
label_207b98:
    // 0x207b98: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x207b98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_207b9c:
    // 0x207b9c: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_207ba0:
    if (ctx->pc == 0x207BA0u) {
        ctx->pc = 0x207BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B9Cu;
        // 0x207ba0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BA4u;
        goto label_207ba4;
    }
    ctx->pc = 0x207B9Cu;
    {
        const bool branch_taken_0x207b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B9Cu;
        // 0x207ba0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b9c) {
            ctx->pc = 0x207CDCu;
            goto label_207cdc;
        }
    }
    ctx->pc = 0x207BA4u;
label_207ba4:
    // 0x207ba4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207ba8:
    // 0x207ba8: 0x8c22e324  lw          $v0, -0x1CDC($at)
    ctx->pc = 0x207ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959908)));
label_207bac:
    // 0x207bac: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_207bb0:
    if (ctx->pc == 0x207BB0u) {
        ctx->pc = 0x207BB4u;
        goto label_207bb4;
    }
    ctx->pc = 0x207BACu;
    {
        const bool branch_taken_0x207bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207bac) {
            ctx->pc = 0x207CDCu;
            goto label_207cdc;
        }
    }
    ctx->pc = 0x207BB4u;
label_207bb4:
    // 0x207bb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_207bb8:
    if (ctx->pc == 0x207BB8u) {
        ctx->pc = 0x207BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BB4u;
        // 0x207bb8: 0x2407007a  addiu       $a3, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207BBCu;
        goto label_207bbc;
    }
    ctx->pc = 0x207BB4u;
    {
        const bool branch_taken_0x207bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BB4u;
        // 0x207bb8: 0x2407007a  addiu       $a3, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bb4) {
            ctx->pc = 0x207BCCu;
            goto label_207bcc;
        }
    }
    ctx->pc = 0x207BBCu;
label_207bbc:
    // 0x207bbc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_207bc0:
    // 0x207bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207bc4:
    // 0x207bc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x207bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_207bc8:
    // 0x207bc8: 0x24470086  addiu       $a3, $v0, 0x86
    ctx->pc = 0x207bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
label_207bcc:
    // 0x207bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207bd0:
    // 0x207bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207bd4:
    // 0x207bd4: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x207bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_207bd8:
    // 0x207bd8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x207bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207bdc:
    // 0x207bdc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x207bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_207be0:
    // 0x207be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207be4:
    // 0x207be4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x207be4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_207be8:
    // 0x207be8: 0x240d00ec  addiu       $t5, $zero, 0xEC
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_207bec:
    // 0x207bec: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x207becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_207bf0:
    // 0x207bf0: 0x250b7900  addiu       $t3, $t0, 0x7900
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
label_207bf4:
    // 0x207bf4: 0x24e97900  addiu       $t1, $a3, 0x7900
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
label_207bf8:
    // 0x207bf8: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x207bf8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207bfc:
    // 0x207bfc: 0x8f8e90fc  lw          $t6, -0x6F04($gp)
    ctx->pc = 0x207bfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207c00:
    // 0x207c00: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207c04:
    // 0x207c04: 0x1c10821  addu        $at, $t6, $at
    ctx->pc = 0x207c04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 1)));
label_207c08:
    // 0x207c08: 0x8c28e30c  lw          $t0, -0x1CF4($at)
    ctx->pc = 0x207c08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959884)));
label_207c0c:
    // 0x207c0c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_207c10:
    if (ctx->pc == 0x207C10u) {
        ctx->pc = 0x207C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C0Cu;
        // 0x207c10: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C14u;
        goto label_207c14;
    }
    ctx->pc = 0x207C0Cu;
    {
        const bool branch_taken_0x207c0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C0Cu;
        // 0x207c10: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c0c) {
            ctx->pc = 0x207C1Cu;
            goto label_207c1c;
        }
    }
    ctx->pc = 0x207C14u;
label_207c14:
    // 0x207c14: 0x15040006  bne         $t0, $a0, . + 4 + (0x6 << 2)
label_207c18:
    if (ctx->pc == 0x207C18u) {
        ctx->pc = 0x207C1Cu;
        goto label_207c1c;
    }
    ctx->pc = 0x207C14u;
    {
        const bool branch_taken_0x207c14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x207c14) {
            ctx->pc = 0x207C30u;
            goto label_207c30;
        }
    }
    ctx->pc = 0x207C1Cu;
label_207c1c:
    // 0x207c1c: 0x0  nop
    ctx->pc = 0x207c1cu;
    // NOP
label_207c20:
    // 0x207c20: 0x2408007c  addiu       $t0, $zero, 0x7C
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_207c24:
    // 0x207c24: 0x65400b  movn        $t0, $v1, $a1
    ctx->pc = 0x207c24u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_207c28:
    // 0x207c28: 0x10000018  b           . + 4 + (0x18 << 2)
label_207c2c:
    if (ctx->pc == 0x207C2Cu) {
        ctx->pc = 0x207C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C28u;
        // 0x207c2c: 0x2e87821  addu        $t7, $s7, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C30u;
        goto label_207c30;
    }
    ctx->pc = 0x207C28u;
    {
        const bool branch_taken_0x207c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C28u;
        // 0x207c2c: 0x2e87821  addu        $t7, $s7, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c28) {
            ctx->pc = 0x207C8Cu;
            goto label_207c8c;
        }
    }
    ctx->pc = 0x207C30u;
label_207c30:
    // 0x207c30: 0x15020013  bne         $t0, $v0, . + 4 + (0x13 << 2)
label_207c34:
    if (ctx->pc == 0x207C34u) {
        ctx->pc = 0x207C38u;
        goto label_207c38;
    }
    ctx->pc = 0x207C30u;
    {
        const bool branch_taken_0x207c30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x207c30) {
            ctx->pc = 0x207C80u;
            goto label_207c80;
        }
    }
    ctx->pc = 0x207C38u;
label_207c38:
    // 0x207c38: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_207c3c:
    if (ctx->pc == 0x207C3Cu) {
        ctx->pc = 0x207C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C38u;
        // 0x207c3c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C40u;
        goto label_207c40;
    }
    ctx->pc = 0x207C38u;
    {
        const bool branch_taken_0x207c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C38u;
        // 0x207c3c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c38) {
            ctx->pc = 0x207C58u;
            goto label_207c58;
        }
    }
    ctx->pc = 0x207C40u;
label_207c40:
    // 0x207c40: 0x1c10821  addu        $at, $t6, $at
    ctx->pc = 0x207c40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 1)));
label_207c44:
    // 0x207c44: 0x8c28e300  lw          $t0, -0x1D00($at)
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_207c48:
    // 0x207c48: 0x15000010  bnez        $t0, . + 4 + (0x10 << 2)
label_207c4c:
    if (ctx->pc == 0x207C4Cu) {
        ctx->pc = 0x207C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C48u;
        // 0x207c4c: 0x26ef008a  addiu       $t7, $s7, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C50u;
        goto label_207c50;
    }
    ctx->pc = 0x207C48u;
    {
        const bool branch_taken_0x207c48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C48u;
        // 0x207c4c: 0x26ef008a  addiu       $t7, $s7, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c48) {
            ctx->pc = 0x207C8Cu;
            goto label_207c8c;
        }
    }
    ctx->pc = 0x207C50u;
label_207c50:
    // 0x207c50: 0x1000000e  b           . + 4 + (0xE << 2)
label_207c54:
    if (ctx->pc == 0x207C54u) {
        ctx->pc = 0x207C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C50u;
        // 0x207c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C58u;
        goto label_207c58;
    }
    ctx->pc = 0x207C50u;
    {
        const bool branch_taken_0x207c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C50u;
        // 0x207c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c50) {
            ctx->pc = 0x207C8Cu;
            goto label_207c8c;
        }
    }
    ctx->pc = 0x207C58u;
label_207c58:
    // 0x207c58: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207c5c:
    // 0x207c5c: 0x1c10821  addu        $at, $t6, $at
    ctx->pc = 0x207c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 1)));
label_207c60:
    // 0x207c60: 0x8c2ce300  lw          $t4, -0x1D00($at)
    ctx->pc = 0x207c60u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_207c64:
    // 0x207c64: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207c68:
    // 0x207c68: 0x1c10821  addu        $at, $t6, $at
    ctx->pc = 0x207c68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 1)));
label_207c6c:
    // 0x207c6c: 0x8c28e2fc  lw          $t0, -0x1D04($at)
    ctx->pc = 0x207c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959868)));
label_207c70:
    // 0x207c70: 0x15880006  bne         $t4, $t0, . + 4 + (0x6 << 2)
label_207c74:
    if (ctx->pc == 0x207C74u) {
        ctx->pc = 0x207C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C70u;
        // 0x207c74: 0x26ef00b2  addiu       $t7, $s7, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C78u;
        goto label_207c78;
    }
    ctx->pc = 0x207C70u;
    {
        const bool branch_taken_0x207c70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 8));
        ctx->pc = 0x207C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C70u;
        // 0x207c74: 0x26ef00b2  addiu       $t7, $s7, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c70) {
            ctx->pc = 0x207C8Cu;
            goto label_207c8c;
        }
    }
    ctx->pc = 0x207C78u;
label_207c78:
    // 0x207c78: 0x10000004  b           . + 4 + (0x4 << 2)
label_207c7c:
    if (ctx->pc == 0x207C7Cu) {
        ctx->pc = 0x207C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C78u;
        // 0x207c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207C80u;
        goto label_207c80;
    }
    ctx->pc = 0x207C78u;
    {
        const bool branch_taken_0x207c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C78u;
        // 0x207c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c78) {
            ctx->pc = 0x207C8Cu;
            goto label_207c8c;
        }
    }
    ctx->pc = 0x207C80u;
label_207c80:
    // 0x207c80: 0x24080084  addiu       $t0, $zero, 0x84
    ctx->pc = 0x207c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_207c84:
    // 0x207c84: 0x1a5400b  movn        $t0, $t5, $a1
    ctx->pc = 0x207c84u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 13));
label_207c88:
    // 0x207c88: 0x2e87821  addu        $t7, $s7, $t0
    ctx->pc = 0x207c88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_207c8c:
    // 0x207c8c: 0x0  nop
    ctx->pc = 0x207c8cu;
    // NOP
label_207c90:
    // 0x207c90: 0xf4100  sll         $t0, $t7, 4
    ctx->pc = 0x207c90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_207c94:
    // 0x207c94: 0x250c6c00  addiu       $t4, $t0, 0x6C00
    ctx->pc = 0x207c94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 27648));
label_207c98:
    // 0x207c98: 0x2067021  addu        $t6, $s0, $a2
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_207c9c:
    // 0x207c9c: 0x25e80010  addiu       $t0, $t7, 0x10
    ctx->pc = 0x207c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
label_207ca0:
    // 0x207ca0: 0xa5cc1070  sh          $t4, 0x1070($t6)
    ctx->pc = 0x207ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4208), (uint16_t)GPR_U32(ctx, 12));
label_207ca4:
    // 0x207ca4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_207ca8:
    // 0x207ca8: 0xa5cb1072  sh          $t3, 0x1072($t6)
    ctx->pc = 0x207ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4210), (uint16_t)GPR_U32(ctx, 11));
label_207cac:
    // 0x207cac: 0x25086c00  addiu       $t0, $t0, 0x6C00
    ctx->pc = 0x207cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27648));
label_207cb0:
    // 0x207cb0: 0xadca1074  sw          $t2, 0x1074($t6)
    ctx->pc = 0x207cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4212), GPR_U32(ctx, 10));
label_207cb4:
    // 0x207cb4: 0xa5c81080  sh          $t0, 0x1080($t6)
    ctx->pc = 0x207cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4224), (uint16_t)GPR_U32(ctx, 8));
label_207cb8:
    // 0x207cb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x207cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_207cbc:
    // 0x207cbc: 0xa5c91082  sh          $t1, 0x1082($t6)
    ctx->pc = 0x207cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4226), (uint16_t)GPR_U32(ctx, 9));
label_207cc0:
    // 0x207cc0: 0x28a80002  slti        $t0, $a1, 0x2
    ctx->pc = 0x207cc0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_207cc4:
    // 0x207cc4: 0xadca1084  sw          $t2, 0x1084($t6)
    ctx->pc = 0x207cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4228), GPR_U32(ctx, 10));
label_207cc8:
    // 0x207cc8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x207cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_207ccc:
    // 0x207ccc: 0x1500ffcb  bnez        $t0, . + 4 + (-0x35 << 2)
label_207cd0:
    if (ctx->pc == 0x207CD0u) {
        ctx->pc = 0x207CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CCCu;
        // 0x207cd0: 0xa1c71063  sb          $a3, 0x1063($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 4195), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CD4u;
        goto label_207cd4;
    }
    ctx->pc = 0x207CCCu;
    {
        const bool branch_taken_0x207ccc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x207CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CCCu;
        // 0x207cd0: 0xa1c71063  sb          $a3, 0x1063($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 4195), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ccc) {
            ctx->pc = 0x207BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207bfc;
        }
    }
    ctx->pc = 0x207CD4u;
label_207cd4:
    // 0x207cd4: 0x10000011  b           . + 4 + (0x11 << 2)
label_207cd8:
    if (ctx->pc == 0x207CD8u) {
        ctx->pc = 0x207CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CD4u;
        // 0x207cd8: 0x26e5ffb0  addiu       $a1, $s7, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207CDCu;
        goto label_207cdc;
    }
    ctx->pc = 0x207CD4u;
    {
        const bool branch_taken_0x207cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CD4u;
        // 0x207cd8: 0x26e5ffb0  addiu       $a1, $s7, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cd4) {
            ctx->pc = 0x207D1Cu;
            goto label_207d1c;
        }
    }
    ctx->pc = 0x207CDCu;
label_207cdc:
    // 0x207cdc: 0xa6001070  sh          $zero, 0x1070($s0)
    ctx->pc = 0x207cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4208), (uint16_t)GPR_U32(ctx, 0));
label_207ce0:
    // 0x207ce0: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x207ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207ce4:
    // 0x207ce4: 0xa6001072  sh          $zero, 0x1072($s0)
    ctx->pc = 0x207ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4210), (uint16_t)GPR_U32(ctx, 0));
label_207ce8:
    // 0x207ce8: 0xae021074  sw          $v0, 0x1074($s0)
    ctx->pc = 0x207ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4212), GPR_U32(ctx, 2));
label_207cec:
    // 0x207cec: 0xa6001080  sh          $zero, 0x1080($s0)
    ctx->pc = 0x207cecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4224), (uint16_t)GPR_U32(ctx, 0));
label_207cf0:
    // 0x207cf0: 0xa6001082  sh          $zero, 0x1082($s0)
    ctx->pc = 0x207cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4226), (uint16_t)GPR_U32(ctx, 0));
label_207cf4:
    // 0x207cf4: 0xae021084  sw          $v0, 0x1084($s0)
    ctx->pc = 0x207cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4228), GPR_U32(ctx, 2));
label_207cf8:
    // 0x207cf8: 0xa2001063  sb          $zero, 0x1063($s0)
    ctx->pc = 0x207cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4195), (uint8_t)GPR_U32(ctx, 0));
label_207cfc:
    // 0x207cfc: 0xa6001110  sh          $zero, 0x1110($s0)
    ctx->pc = 0x207cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4368), (uint16_t)GPR_U32(ctx, 0));
label_207d00:
    // 0x207d00: 0xa6001112  sh          $zero, 0x1112($s0)
    ctx->pc = 0x207d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4370), (uint16_t)GPR_U32(ctx, 0));
label_207d04:
    // 0x207d04: 0xae021114  sw          $v0, 0x1114($s0)
    ctx->pc = 0x207d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4372), GPR_U32(ctx, 2));
label_207d08:
    // 0x207d08: 0xa6001120  sh          $zero, 0x1120($s0)
    ctx->pc = 0x207d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4384), (uint16_t)GPR_U32(ctx, 0));
label_207d0c:
    // 0x207d0c: 0xa6001122  sh          $zero, 0x1122($s0)
    ctx->pc = 0x207d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4386), (uint16_t)GPR_U32(ctx, 0));
label_207d10:
    // 0x207d10: 0xae021124  sw          $v0, 0x1124($s0)
    ctx->pc = 0x207d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4388), GPR_U32(ctx, 2));
label_207d14:
    // 0x207d14: 0xa2001103  sb          $zero, 0x1103($s0)
    ctx->pc = 0x207d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4355), (uint8_t)GPR_U32(ctx, 0));
label_207d18:
    // 0x207d18: 0x26e5ffb0  addiu       $a1, $s7, -0x50
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967216));
label_207d1c:
    // 0x207d1c: 0x260405b0  addiu       $a0, $s0, 0x5B0
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
label_207d20:
    // 0x207d20: 0x2406013a  addiu       $a2, $zero, 0x13A
    ctx->pc = 0x207d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_207d24:
    // 0x207d24: 0x24070152  addiu       $a3, $zero, 0x152
    ctx->pc = 0x207d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_207d28:
    // 0x207d28: 0x24080056  addiu       $t0, $zero, 0x56
    ctx->pc = 0x207d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_207d2c:
    // 0x207d2c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207d30:
    // 0x207d30: 0xc07c17c  jal         func_1F05F0
label_207d34:
    if (ctx->pc == 0x207D34u) {
        ctx->pc = 0x207D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D30u;
        // 0x207d34: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D38u;
        goto label_207d38;
    }
    ctx->pc = 0x207D30u;
    SET_GPR_U32(ctx, 31, 0x207D38u);
    ctx->pc = 0x207D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D30u;
    // 0x207d34: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x207D38u;
label_207d38:
    // 0x207d38: 0x26e2ffb0  addiu       $v0, $s7, -0x50
    ctx->pc = 0x207d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967216));
label_207d3c:
    // 0x207d3c: 0x340482f0  ori         $a0, $zero, 0x82F0
    ctx->pc = 0x207d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33520);
label_207d40:
    // 0x207d40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x207d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207d44:
    // 0x207d44: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207d48:
    // 0x207d48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x207d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_207d4c:
    // 0x207d4c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_207d50:
    // 0x207d50: 0xa60311b0  sh          $v1, 0x11B0($s0)
    ctx->pc = 0x207d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4528), (uint16_t)GPR_U32(ctx, 3));
label_207d54:
    // 0x207d54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207d58:
    // 0x207d58: 0xa60411b2  sh          $a0, 0x11B2($s0)
    ctx->pc = 0x207d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4530), (uint16_t)GPR_U32(ctx, 4));
label_207d5c:
    // 0x207d5c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x207d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207d60:
    // 0x207d60: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x207d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207d64:
    // 0x207d64: 0x34028370  ori         $v0, $zero, 0x8370
    ctx->pc = 0x207d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33648);
label_207d68:
    // 0x207d68: 0xae0411b4  sw          $a0, 0x11B4($s0)
    ctx->pc = 0x207d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4532), GPR_U32(ctx, 4));
label_207d6c:
    // 0x207d6c: 0xa60311c0  sh          $v1, 0x11C0($s0)
    ctx->pc = 0x207d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4544), (uint16_t)GPR_U32(ctx, 3));
label_207d70:
    // 0x207d70: 0xa60211c2  sh          $v0, 0x11C2($s0)
    ctx->pc = 0x207d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4546), (uint16_t)GPR_U32(ctx, 2));
label_207d74:
    // 0x207d74: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_207d78:
    // 0x207d78: 0xae0411c4  sw          $a0, 0x11C4($s0)
    ctx->pc = 0x207d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 4));
label_207d7c:
    // 0x207d7c: 0x246333f0  addiu       $v1, $v1, 0x33F0
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13296));
label_207d80:
    // 0x207d80: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207d84:
    // 0x207d84: 0x9042009b  lbu         $v0, 0x9B($v0)
    ctx->pc = 0x207d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
label_207d88:
    // 0x207d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_207d8c:
    // 0x207d8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207d90:
    // 0x207d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207d94:
    // 0x207d94: 0xc055148  jal         func_154520
label_207d98:
    if (ctx->pc == 0x207D98u) {
        ctx->pc = 0x207D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D94u;
        // 0x207d98: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D9Cu;
        goto label_207d9c;
    }
    ctx->pc = 0x207D94u;
    SET_GPR_U32(ctx, 31, 0x207D9Cu);
    ctx->pc = 0x207D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D94u;
    // 0x207d98: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x207D94u, 0x207D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D9Cu;
label_207d9c:
    // 0x207d9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207da0:
    // 0x207da0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207da4:
    // 0x207da4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207da8:
    // 0x207da8: 0x9043009b  lbu         $v1, 0x9B($v0)
    ctx->pc = 0x207da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
label_207dac:
    // 0x207dac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x207dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_207db0:
    // 0x207db0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207db4:
    // 0x207db4: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x207db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_207db8:
    // 0x207db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207dbc:
    // 0x207dbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207dc0:
    // 0x207dc0: 0xc0550d0  jal         func_154340
label_207dc4:
    if (ctx->pc == 0x207DC4u) {
        ctx->pc = 0x207DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DC0u;
        // 0x207dc4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DC8u;
        goto label_207dc8;
    }
    ctx->pc = 0x207DC0u;
    SET_GPR_U32(ctx, 31, 0x207DC8u);
    ctx->pc = 0x207DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DC0u;
    // 0x207dc4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x207DC0u, 0x207DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DC8u;
label_207dc8:
    // 0x207dc8: 0x26e40048  addiu       $a0, $s7, 0x48
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_207dcc:
    // 0x207dcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207dd0:
    // 0x207dd0: 0x824023  subu        $t0, $a0, $v0
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207dd4:
    // 0x207dd4: 0x11180a  movz        $v1, $zero, $s1
    ctx->pc = 0x207dd4u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_207dd8:
    // 0x207dd8: 0x2402013c  addiu       $v0, $zero, 0x13C
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_207ddc:
    // 0x207ddc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207de0:
    // 0x207de0: 0x434823  subu        $t1, $v0, $v1
    ctx->pc = 0x207de0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207de4:
    // 0x207de4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_207de8:
    // 0x207de8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_207dec:
    // 0x207dec: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207df0:
    // 0x207df0: 0x51280a  movz        $a1, $v0, $s1
    ctx->pc = 0x207df0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_207df4:
    // 0x207df4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207df8:
    // 0x207df8: 0xc054e5c  jal         func_153970
label_207dfc:
    if (ctx->pc == 0x207DFCu) {
        ctx->pc = 0x207DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DF8u;
        // 0x207dfc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E00u;
        goto label_207e00;
    }
    ctx->pc = 0x207DF8u;
    SET_GPR_U32(ctx, 31, 0x207E00u);
    ctx->pc = 0x207DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DF8u;
    // 0x207dfc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207DF8u, 0x207E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E00u;
label_207e00:
    // 0x207e00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207e04:
    // 0x207e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207e08:
    // 0x207e08: 0x260411d0  addiu       $a0, $s0, 0x11D0
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4560));
label_207e0c:
    // 0x207e0c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x207e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_207e10:
    // 0x207e10: 0x9043009b  lbu         $v1, 0x9B($v0)
    ctx->pc = 0x207e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
label_207e14:
    // 0x207e14: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_207e18:
    // 0x207e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207e1c:
    // 0x207e1c: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x207e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_207e20:
    // 0x207e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207e24:
    // 0x207e24: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207e28:
    // 0x207e28: 0xc054e74  jal         func_1539D0
label_207e2c:
    if (ctx->pc == 0x207E2Cu) {
        ctx->pc = 0x207E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E28u;
        // 0x207e2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E30u;
        goto label_207e30;
    }
    ctx->pc = 0x207E28u;
    SET_GPR_U32(ctx, 31, 0x207E30u);
    ctx->pc = 0x207E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E28u;
    // 0x207e2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207E28u, 0x207E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E30u;
label_207e30:
    // 0x207e30: 0x26e2ffb8  addiu       $v0, $s7, -0x48
    ctx->pc = 0x207e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967224));
label_207e34:
    // 0x207e34: 0x340483b0  ori         $a0, $zero, 0x83B0
    ctx->pc = 0x207e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33712);
label_207e38:
    // 0x207e38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x207e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207e3c:
    // 0x207e3c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207e40:
    // 0x207e40: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_207e44:
    // 0x207e44: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
label_207e48:
    // 0x207e48: 0xa6031ce0  sh          $v1, 0x1CE0($s0)
    ctx->pc = 0x207e48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7392), (uint16_t)GPR_U32(ctx, 3));
label_207e4c:
    // 0x207e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207e50:
    // 0x207e50: 0xa6041ce2  sh          $a0, 0x1CE2($s0)
    ctx->pc = 0x207e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7394), (uint16_t)GPR_U32(ctx, 4));
label_207e54:
    // 0x207e54: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207e58:
    // 0x207e58: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x207e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207e5c:
    // 0x207e5c: 0x34028430  ori         $v0, $zero, 0x8430
    ctx->pc = 0x207e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33840);
label_207e60:
    // 0x207e60: 0xae041ce4  sw          $a0, 0x1CE4($s0)
    ctx->pc = 0x207e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7396), GPR_U32(ctx, 4));
label_207e64:
    // 0x207e64: 0xa6031cf0  sh          $v1, 0x1CF0($s0)
    ctx->pc = 0x207e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7408), (uint16_t)GPR_U32(ctx, 3));
label_207e68:
    // 0x207e68: 0xa6021cf2  sh          $v0, 0x1CF2($s0)
    ctx->pc = 0x207e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7410), (uint16_t)GPR_U32(ctx, 2));
label_207e6c:
    // 0x207e6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x207e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_207e70:
    // 0x207e70: 0xae041cf4  sw          $a0, 0x1CF4($s0)
    ctx->pc = 0x207e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7412), GPR_U32(ctx, 4));
label_207e74:
    // 0x207e74: 0x246333a0  addiu       $v1, $v1, 0x33A0
    ctx->pc = 0x207e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13216));
label_207e78:
    // 0x207e78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207e7c:
    // 0x207e7c: 0x904200a1  lbu         $v0, 0xA1($v0)
    ctx->pc = 0x207e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 161)));
label_207e80:
    // 0x207e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_207e84:
    // 0x207e84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207e88:
    // 0x207e88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207e8c:
    // 0x207e8c: 0xc0550d0  jal         func_154340
label_207e90:
    if (ctx->pc == 0x207E90u) {
        ctx->pc = 0x207E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E8Cu;
        // 0x207e90: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E94u;
        goto label_207e94;
    }
    ctx->pc = 0x207E8Cu;
    SET_GPR_U32(ctx, 31, 0x207E94u);
    ctx->pc = 0x207E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E8Cu;
    // 0x207e90: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x207E8Cu, 0x207E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E94u;
label_207e94:
    // 0x207e94: 0x26e30048  addiu       $v1, $s7, 0x48
    ctx->pc = 0x207e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_207e98:
    // 0x207e98: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x207e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_207e9c:
    // 0x207e9c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_207ea0:
    // 0x207ea0: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207ea4:
    // 0x207ea4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x207ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207ea8:
    // 0x207ea8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207eac:
    // 0x207eac: 0x24090154  addiu       $t1, $zero, 0x154
    ctx->pc = 0x207eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    ctx->pc = 0x207eb0u;
    return;
}
