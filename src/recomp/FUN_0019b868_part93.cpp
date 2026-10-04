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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part93(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c8728u: goto label_1c8728;
        case 0x1c872cu: goto label_1c872c;
        case 0x1c8730u: goto label_1c8730;
        case 0x1c8734u: goto label_1c8734;
        case 0x1c8738u: goto label_1c8738;
        case 0x1c873cu: goto label_1c873c;
        case 0x1c8740u: goto label_1c8740;
        case 0x1c8744u: goto label_1c8744;
        case 0x1c8748u: goto label_1c8748;
        case 0x1c874cu: goto label_1c874c;
        case 0x1c8750u: goto label_1c8750;
        case 0x1c8754u: goto label_1c8754;
        case 0x1c8758u: goto label_1c8758;
        case 0x1c875cu: goto label_1c875c;
        case 0x1c8760u: goto label_1c8760;
        case 0x1c8764u: goto label_1c8764;
        case 0x1c8768u: goto label_1c8768;
        case 0x1c876cu: goto label_1c876c;
        case 0x1c8770u: goto label_1c8770;
        case 0x1c8774u: goto label_1c8774;
        case 0x1c8778u: goto label_1c8778;
        case 0x1c877cu: goto label_1c877c;
        case 0x1c8780u: goto label_1c8780;
        case 0x1c8784u: goto label_1c8784;
        case 0x1c8788u: goto label_1c8788;
        case 0x1c878cu: goto label_1c878c;
        case 0x1c8790u: goto label_1c8790;
        case 0x1c8794u: goto label_1c8794;
        case 0x1c8798u: goto label_1c8798;
        case 0x1c879cu: goto label_1c879c;
        case 0x1c87a0u: goto label_1c87a0;
        case 0x1c87a4u: goto label_1c87a4;
        case 0x1c87a8u: goto label_1c87a8;
        case 0x1c87acu: goto label_1c87ac;
        case 0x1c87b0u: goto label_1c87b0;
        case 0x1c87b4u: goto label_1c87b4;
        case 0x1c87b8u: goto label_1c87b8;
        case 0x1c87bcu: goto label_1c87bc;
        case 0x1c87c0u: goto label_1c87c0;
        case 0x1c87c4u: goto label_1c87c4;
        case 0x1c87c8u: goto label_1c87c8;
        case 0x1c87ccu: goto label_1c87cc;
        case 0x1c87d0u: goto label_1c87d0;
        case 0x1c87d4u: goto label_1c87d4;
        case 0x1c87d8u: goto label_1c87d8;
        case 0x1c87dcu: goto label_1c87dc;
        case 0x1c87e0u: goto label_1c87e0;
        case 0x1c87e4u: goto label_1c87e4;
        case 0x1c87e8u: goto label_1c87e8;
        case 0x1c87ecu: goto label_1c87ec;
        case 0x1c87f0u: goto label_1c87f0;
        case 0x1c87f4u: goto label_1c87f4;
        case 0x1c87f8u: goto label_1c87f8;
        case 0x1c87fcu: goto label_1c87fc;
        case 0x1c8800u: goto label_1c8800;
        case 0x1c8804u: goto label_1c8804;
        case 0x1c8808u: goto label_1c8808;
        case 0x1c880cu: goto label_1c880c;
        case 0x1c8810u: goto label_1c8810;
        case 0x1c8814u: goto label_1c8814;
        case 0x1c8818u: goto label_1c8818;
        case 0x1c881cu: goto label_1c881c;
        case 0x1c8820u: goto label_1c8820;
        case 0x1c8824u: goto label_1c8824;
        case 0x1c8828u: goto label_1c8828;
        case 0x1c882cu: goto label_1c882c;
        case 0x1c8830u: goto label_1c8830;
        case 0x1c8834u: goto label_1c8834;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c883cu: goto label_1c883c;
        case 0x1c8840u: goto label_1c8840;
        case 0x1c8844u: goto label_1c8844;
        case 0x1c8848u: goto label_1c8848;
        case 0x1c884cu: goto label_1c884c;
        case 0x1c8850u: goto label_1c8850;
        case 0x1c8854u: goto label_1c8854;
        case 0x1c8858u: goto label_1c8858;
        case 0x1c885cu: goto label_1c885c;
        case 0x1c8860u: goto label_1c8860;
        case 0x1c8864u: goto label_1c8864;
        case 0x1c8868u: goto label_1c8868;
        case 0x1c886cu: goto label_1c886c;
        case 0x1c8870u: goto label_1c8870;
        case 0x1c8874u: goto label_1c8874;
        case 0x1c8878u: goto label_1c8878;
        case 0x1c887cu: goto label_1c887c;
        case 0x1c8880u: goto label_1c8880;
        case 0x1c8884u: goto label_1c8884;
        case 0x1c8888u: goto label_1c8888;
        case 0x1c888cu: goto label_1c888c;
        case 0x1c8890u: goto label_1c8890;
        case 0x1c8894u: goto label_1c8894;
        case 0x1c8898u: goto label_1c8898;
        case 0x1c889cu: goto label_1c889c;
        case 0x1c88a0u: goto label_1c88a0;
        case 0x1c88a4u: goto label_1c88a4;
        case 0x1c88a8u: goto label_1c88a8;
        case 0x1c88acu: goto label_1c88ac;
        case 0x1c88b0u: goto label_1c88b0;
        case 0x1c88b4u: goto label_1c88b4;
        case 0x1c88b8u: goto label_1c88b8;
        case 0x1c88bcu: goto label_1c88bc;
        case 0x1c88c0u: goto label_1c88c0;
        case 0x1c88c4u: goto label_1c88c4;
        case 0x1c88c8u: goto label_1c88c8;
        case 0x1c88ccu: goto label_1c88cc;
        case 0x1c88d0u: goto label_1c88d0;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88d8u: goto label_1c88d8;
        case 0x1c88dcu: goto label_1c88dc;
        case 0x1c88e0u: goto label_1c88e0;
        case 0x1c88e4u: goto label_1c88e4;
        case 0x1c88e8u: goto label_1c88e8;
        case 0x1c88ecu: goto label_1c88ec;
        case 0x1c88f0u: goto label_1c88f0;
        case 0x1c88f4u: goto label_1c88f4;
        case 0x1c88f8u: goto label_1c88f8;
        case 0x1c88fcu: goto label_1c88fc;
        case 0x1c8900u: goto label_1c8900;
        case 0x1c8904u: goto label_1c8904;
        case 0x1c8908u: goto label_1c8908;
        case 0x1c890cu: goto label_1c890c;
        case 0x1c8910u: goto label_1c8910;
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8918u: goto label_1c8918;
        case 0x1c891cu: goto label_1c891c;
        case 0x1c8920u: goto label_1c8920;
        case 0x1c8924u: goto label_1c8924;
        case 0x1c8928u: goto label_1c8928;
        case 0x1c892cu: goto label_1c892c;
        case 0x1c8930u: goto label_1c8930;
        case 0x1c8934u: goto label_1c8934;
        case 0x1c8938u: goto label_1c8938;
        case 0x1c893cu: goto label_1c893c;
        case 0x1c8940u: goto label_1c8940;
        case 0x1c8944u: goto label_1c8944;
        case 0x1c8948u: goto label_1c8948;
        case 0x1c894cu: goto label_1c894c;
        case 0x1c8950u: goto label_1c8950;
        case 0x1c8954u: goto label_1c8954;
        case 0x1c8958u: goto label_1c8958;
        case 0x1c895cu: goto label_1c895c;
        case 0x1c8960u: goto label_1c8960;
        case 0x1c8964u: goto label_1c8964;
        case 0x1c8968u: goto label_1c8968;
        case 0x1c896cu: goto label_1c896c;
        case 0x1c8970u: goto label_1c8970;
        case 0x1c8974u: goto label_1c8974;
        case 0x1c8978u: goto label_1c8978;
        case 0x1c897cu: goto label_1c897c;
        case 0x1c8980u: goto label_1c8980;
        case 0x1c8984u: goto label_1c8984;
        case 0x1c8988u: goto label_1c8988;
        case 0x1c898cu: goto label_1c898c;
        case 0x1c8990u: goto label_1c8990;
        case 0x1c8994u: goto label_1c8994;
        case 0x1c8998u: goto label_1c8998;
        case 0x1c899cu: goto label_1c899c;
        case 0x1c89a0u: goto label_1c89a0;
        case 0x1c89a4u: goto label_1c89a4;
        case 0x1c89a8u: goto label_1c89a8;
        case 0x1c89acu: goto label_1c89ac;
        case 0x1c89b0u: goto label_1c89b0;
        case 0x1c89b4u: goto label_1c89b4;
        case 0x1c89b8u: goto label_1c89b8;
        case 0x1c89bcu: goto label_1c89bc;
        case 0x1c89c0u: goto label_1c89c0;
        case 0x1c89c4u: goto label_1c89c4;
        case 0x1c89c8u: goto label_1c89c8;
        case 0x1c89ccu: goto label_1c89cc;
        case 0x1c89d0u: goto label_1c89d0;
        case 0x1c89d4u: goto label_1c89d4;
        case 0x1c89d8u: goto label_1c89d8;
        case 0x1c89dcu: goto label_1c89dc;
        case 0x1c89e0u: goto label_1c89e0;
        case 0x1c89e4u: goto label_1c89e4;
        case 0x1c89e8u: goto label_1c89e8;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c89f0u: goto label_1c89f0;
        case 0x1c89f4u: goto label_1c89f4;
        case 0x1c89f8u: goto label_1c89f8;
        case 0x1c89fcu: goto label_1c89fc;
        case 0x1c8a00u: goto label_1c8a00;
        case 0x1c8a04u: goto label_1c8a04;
        case 0x1c8a08u: goto label_1c8a08;
        case 0x1c8a0cu: goto label_1c8a0c;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a14u: goto label_1c8a14;
        case 0x1c8a18u: goto label_1c8a18;
        case 0x1c8a1cu: goto label_1c8a1c;
        case 0x1c8a20u: goto label_1c8a20;
        case 0x1c8a24u: goto label_1c8a24;
        case 0x1c8a28u: goto label_1c8a28;
        case 0x1c8a2cu: goto label_1c8a2c;
        case 0x1c8a30u: goto label_1c8a30;
        case 0x1c8a34u: goto label_1c8a34;
        case 0x1c8a38u: goto label_1c8a38;
        case 0x1c8a3cu: goto label_1c8a3c;
        case 0x1c8a40u: goto label_1c8a40;
        case 0x1c8a44u: goto label_1c8a44;
        case 0x1c8a48u: goto label_1c8a48;
        case 0x1c8a4cu: goto label_1c8a4c;
        case 0x1c8a50u: goto label_1c8a50;
        case 0x1c8a54u: goto label_1c8a54;
        case 0x1c8a58u: goto label_1c8a58;
        case 0x1c8a5cu: goto label_1c8a5c;
        case 0x1c8a60u: goto label_1c8a60;
        case 0x1c8a64u: goto label_1c8a64;
        case 0x1c8a68u: goto label_1c8a68;
        case 0x1c8a6cu: goto label_1c8a6c;
        case 0x1c8a70u: goto label_1c8a70;
        case 0x1c8a74u: goto label_1c8a74;
        case 0x1c8a78u: goto label_1c8a78;
        case 0x1c8a7cu: goto label_1c8a7c;
        case 0x1c8a80u: goto label_1c8a80;
        case 0x1c8a84u: goto label_1c8a84;
        case 0x1c8a88u: goto label_1c8a88;
        case 0x1c8a8cu: goto label_1c8a8c;
        case 0x1c8a90u: goto label_1c8a90;
        case 0x1c8a94u: goto label_1c8a94;
        case 0x1c8a98u: goto label_1c8a98;
        case 0x1c8a9cu: goto label_1c8a9c;
        case 0x1c8aa0u: goto label_1c8aa0;
        case 0x1c8aa4u: goto label_1c8aa4;
        case 0x1c8aa8u: goto label_1c8aa8;
        case 0x1c8aacu: goto label_1c8aac;
        case 0x1c8ab0u: goto label_1c8ab0;
        case 0x1c8ab4u: goto label_1c8ab4;
        case 0x1c8ab8u: goto label_1c8ab8;
        case 0x1c8abcu: goto label_1c8abc;
        case 0x1c8ac0u: goto label_1c8ac0;
        case 0x1c8ac4u: goto label_1c8ac4;
        case 0x1c8ac8u: goto label_1c8ac8;
        case 0x1c8accu: goto label_1c8acc;
        case 0x1c8ad0u: goto label_1c8ad0;
        case 0x1c8ad4u: goto label_1c8ad4;
        case 0x1c8ad8u: goto label_1c8ad8;
        case 0x1c8adcu: goto label_1c8adc;
        case 0x1c8ae0u: goto label_1c8ae0;
        case 0x1c8ae4u: goto label_1c8ae4;
        case 0x1c8ae8u: goto label_1c8ae8;
        case 0x1c8aecu: goto label_1c8aec;
        case 0x1c8af0u: goto label_1c8af0;
        case 0x1c8af4u: goto label_1c8af4;
        case 0x1c8af8u: goto label_1c8af8;
        case 0x1c8afcu: goto label_1c8afc;
        case 0x1c8b00u: goto label_1c8b00;
        case 0x1c8b04u: goto label_1c8b04;
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b0cu: goto label_1c8b0c;
        case 0x1c8b10u: goto label_1c8b10;
        case 0x1c8b14u: goto label_1c8b14;
        case 0x1c8b18u: goto label_1c8b18;
        case 0x1c8b1cu: goto label_1c8b1c;
        case 0x1c8b20u: goto label_1c8b20;
        case 0x1c8b24u: goto label_1c8b24;
        case 0x1c8b28u: goto label_1c8b28;
        case 0x1c8b2cu: goto label_1c8b2c;
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b34u: goto label_1c8b34;
        case 0x1c8b38u: goto label_1c8b38;
        case 0x1c8b3cu: goto label_1c8b3c;
        case 0x1c8b40u: goto label_1c8b40;
        case 0x1c8b44u: goto label_1c8b44;
        case 0x1c8b48u: goto label_1c8b48;
        case 0x1c8b4cu: goto label_1c8b4c;
        case 0x1c8b50u: goto label_1c8b50;
        case 0x1c8b54u: goto label_1c8b54;
        case 0x1c8b58u: goto label_1c8b58;
        case 0x1c8b5cu: goto label_1c8b5c;
        case 0x1c8b60u: goto label_1c8b60;
        case 0x1c8b64u: goto label_1c8b64;
        case 0x1c8b68u: goto label_1c8b68;
        case 0x1c8b6cu: goto label_1c8b6c;
        case 0x1c8b70u: goto label_1c8b70;
        case 0x1c8b74u: goto label_1c8b74;
        case 0x1c8b78u: goto label_1c8b78;
        case 0x1c8b7cu: goto label_1c8b7c;
        case 0x1c8b80u: goto label_1c8b80;
        case 0x1c8b84u: goto label_1c8b84;
        case 0x1c8b88u: goto label_1c8b88;
        case 0x1c8b8cu: goto label_1c8b8c;
        case 0x1c8b90u: goto label_1c8b90;
        case 0x1c8b94u: goto label_1c8b94;
        case 0x1c8b98u: goto label_1c8b98;
        case 0x1c8b9cu: goto label_1c8b9c;
        case 0x1c8ba0u: goto label_1c8ba0;
        case 0x1c8ba4u: goto label_1c8ba4;
        case 0x1c8ba8u: goto label_1c8ba8;
        case 0x1c8bacu: goto label_1c8bac;
        case 0x1c8bb0u: goto label_1c8bb0;
        case 0x1c8bb4u: goto label_1c8bb4;
        case 0x1c8bb8u: goto label_1c8bb8;
        case 0x1c8bbcu: goto label_1c8bbc;
        case 0x1c8bc0u: goto label_1c8bc0;
        case 0x1c8bc4u: goto label_1c8bc4;
        case 0x1c8bc8u: goto label_1c8bc8;
        case 0x1c8bccu: goto label_1c8bcc;
        case 0x1c8bd0u: goto label_1c8bd0;
        case 0x1c8bd4u: goto label_1c8bd4;
        case 0x1c8bd8u: goto label_1c8bd8;
        case 0x1c8bdcu: goto label_1c8bdc;
        case 0x1c8be0u: goto label_1c8be0;
        case 0x1c8be4u: goto label_1c8be4;
        case 0x1c8be8u: goto label_1c8be8;
        case 0x1c8becu: goto label_1c8bec;
        case 0x1c8bf0u: goto label_1c8bf0;
        case 0x1c8bf4u: goto label_1c8bf4;
        case 0x1c8bf8u: goto label_1c8bf8;
        case 0x1c8bfcu: goto label_1c8bfc;
        case 0x1c8c00u: goto label_1c8c00;
        case 0x1c8c04u: goto label_1c8c04;
        case 0x1c8c08u: goto label_1c8c08;
        case 0x1c8c0cu: goto label_1c8c0c;
        case 0x1c8c10u: goto label_1c8c10;
        case 0x1c8c14u: goto label_1c8c14;
        case 0x1c8c18u: goto label_1c8c18;
        case 0x1c8c1cu: goto label_1c8c1c;
        case 0x1c8c20u: goto label_1c8c20;
        case 0x1c8c24u: goto label_1c8c24;
        case 0x1c8c28u: goto label_1c8c28;
        case 0x1c8c2cu: goto label_1c8c2c;
        case 0x1c8c30u: goto label_1c8c30;
        case 0x1c8c34u: goto label_1c8c34;
        case 0x1c8c38u: goto label_1c8c38;
        case 0x1c8c3cu: goto label_1c8c3c;
        case 0x1c8c40u: goto label_1c8c40;
        case 0x1c8c44u: goto label_1c8c44;
        case 0x1c8c48u: goto label_1c8c48;
        case 0x1c8c4cu: goto label_1c8c4c;
        case 0x1c8c50u: goto label_1c8c50;
        case 0x1c8c54u: goto label_1c8c54;
        case 0x1c8c58u: goto label_1c8c58;
        case 0x1c8c5cu: goto label_1c8c5c;
        case 0x1c8c60u: goto label_1c8c60;
        case 0x1c8c64u: goto label_1c8c64;
        case 0x1c8c68u: goto label_1c8c68;
        case 0x1c8c6cu: goto label_1c8c6c;
        case 0x1c8c70u: goto label_1c8c70;
        case 0x1c8c74u: goto label_1c8c74;
        case 0x1c8c78u: goto label_1c8c78;
        case 0x1c8c7cu: goto label_1c8c7c;
        case 0x1c8c80u: goto label_1c8c80;
        case 0x1c8c84u: goto label_1c8c84;
        case 0x1c8c88u: goto label_1c8c88;
        case 0x1c8c8cu: goto label_1c8c8c;
        case 0x1c8c90u: goto label_1c8c90;
        case 0x1c8c94u: goto label_1c8c94;
        case 0x1c8c98u: goto label_1c8c98;
        case 0x1c8c9cu: goto label_1c8c9c;
        case 0x1c8ca0u: goto label_1c8ca0;
        case 0x1c8ca4u: goto label_1c8ca4;
        case 0x1c8ca8u: goto label_1c8ca8;
        case 0x1c8cacu: goto label_1c8cac;
        case 0x1c8cb0u: goto label_1c8cb0;
        case 0x1c8cb4u: goto label_1c8cb4;
        case 0x1c8cb8u: goto label_1c8cb8;
        case 0x1c8cbcu: goto label_1c8cbc;
        case 0x1c8cc0u: goto label_1c8cc0;
        case 0x1c8cc4u: goto label_1c8cc4;
        case 0x1c8cc8u: goto label_1c8cc8;
        case 0x1c8cccu: goto label_1c8ccc;
        case 0x1c8cd0u: goto label_1c8cd0;
        case 0x1c8cd4u: goto label_1c8cd4;
        case 0x1c8cd8u: goto label_1c8cd8;
        case 0x1c8cdcu: goto label_1c8cdc;
        case 0x1c8ce0u: goto label_1c8ce0;
        case 0x1c8ce4u: goto label_1c8ce4;
        case 0x1c8ce8u: goto label_1c8ce8;
        case 0x1c8cecu: goto label_1c8cec;
        case 0x1c8cf0u: goto label_1c8cf0;
        case 0x1c8cf4u: goto label_1c8cf4;
        case 0x1c8cf8u: goto label_1c8cf8;
        case 0x1c8cfcu: goto label_1c8cfc;
        case 0x1c8d00u: goto label_1c8d00;
        case 0x1c8d04u: goto label_1c8d04;
        case 0x1c8d08u: goto label_1c8d08;
        case 0x1c8d0cu: goto label_1c8d0c;
        case 0x1c8d10u: goto label_1c8d10;
        case 0x1c8d14u: goto label_1c8d14;
        case 0x1c8d18u: goto label_1c8d18;
        case 0x1c8d1cu: goto label_1c8d1c;
        case 0x1c8d20u: goto label_1c8d20;
        case 0x1c8d24u: goto label_1c8d24;
        case 0x1c8d28u: goto label_1c8d28;
        case 0x1c8d2cu: goto label_1c8d2c;
        case 0x1c8d30u: goto label_1c8d30;
        case 0x1c8d34u: goto label_1c8d34;
        case 0x1c8d38u: goto label_1c8d38;
        case 0x1c8d3cu: goto label_1c8d3c;
        case 0x1c8d40u: goto label_1c8d40;
        case 0x1c8d44u: goto label_1c8d44;
        case 0x1c8d48u: goto label_1c8d48;
        case 0x1c8d4cu: goto label_1c8d4c;
        case 0x1c8d50u: goto label_1c8d50;
        case 0x1c8d54u: goto label_1c8d54;
        case 0x1c8d58u: goto label_1c8d58;
        case 0x1c8d5cu: goto label_1c8d5c;
        case 0x1c8d60u: goto label_1c8d60;
        case 0x1c8d64u: goto label_1c8d64;
        case 0x1c8d68u: goto label_1c8d68;
        case 0x1c8d6cu: goto label_1c8d6c;
        case 0x1c8d70u: goto label_1c8d70;
        case 0x1c8d74u: goto label_1c8d74;
        case 0x1c8d78u: goto label_1c8d78;
        case 0x1c8d7cu: goto label_1c8d7c;
        case 0x1c8d80u: goto label_1c8d80;
        case 0x1c8d84u: goto label_1c8d84;
        case 0x1c8d88u: goto label_1c8d88;
        case 0x1c8d8cu: goto label_1c8d8c;
        case 0x1c8d90u: goto label_1c8d90;
        case 0x1c8d94u: goto label_1c8d94;
        case 0x1c8d98u: goto label_1c8d98;
        case 0x1c8d9cu: goto label_1c8d9c;
        case 0x1c8da0u: goto label_1c8da0;
        case 0x1c8da4u: goto label_1c8da4;
        case 0x1c8da8u: goto label_1c8da8;
        case 0x1c8dacu: goto label_1c8dac;
        case 0x1c8db0u: goto label_1c8db0;
        case 0x1c8db4u: goto label_1c8db4;
        case 0x1c8db8u: goto label_1c8db8;
        case 0x1c8dbcu: goto label_1c8dbc;
        case 0x1c8dc0u: goto label_1c8dc0;
        case 0x1c8dc4u: goto label_1c8dc4;
        case 0x1c8dc8u: goto label_1c8dc8;
        case 0x1c8dccu: goto label_1c8dcc;
        case 0x1c8dd0u: goto label_1c8dd0;
        case 0x1c8dd4u: goto label_1c8dd4;
        case 0x1c8dd8u: goto label_1c8dd8;
        case 0x1c8ddcu: goto label_1c8ddc;
        case 0x1c8de0u: goto label_1c8de0;
        case 0x1c8de4u: goto label_1c8de4;
        case 0x1c8de8u: goto label_1c8de8;
        case 0x1c8decu: goto label_1c8dec;
        case 0x1c8df0u: goto label_1c8df0;
        case 0x1c8df4u: goto label_1c8df4;
        case 0x1c8df8u: goto label_1c8df8;
        case 0x1c8dfcu: goto label_1c8dfc;
        case 0x1c8e00u: goto label_1c8e00;
        case 0x1c8e04u: goto label_1c8e04;
        case 0x1c8e08u: goto label_1c8e08;
        case 0x1c8e0cu: goto label_1c8e0c;
        case 0x1c8e10u: goto label_1c8e10;
        case 0x1c8e14u: goto label_1c8e14;
        case 0x1c8e18u: goto label_1c8e18;
        case 0x1c8e1cu: goto label_1c8e1c;
        case 0x1c8e20u: goto label_1c8e20;
        case 0x1c8e24u: goto label_1c8e24;
        case 0x1c8e28u: goto label_1c8e28;
        case 0x1c8e2cu: goto label_1c8e2c;
        case 0x1c8e30u: goto label_1c8e30;
        case 0x1c8e34u: goto label_1c8e34;
        case 0x1c8e38u: goto label_1c8e38;
        case 0x1c8e3cu: goto label_1c8e3c;
        case 0x1c8e40u: goto label_1c8e40;
        case 0x1c8e44u: goto label_1c8e44;
        case 0x1c8e48u: goto label_1c8e48;
        case 0x1c8e4cu: goto label_1c8e4c;
        case 0x1c8e50u: goto label_1c8e50;
        case 0x1c8e54u: goto label_1c8e54;
        case 0x1c8e58u: goto label_1c8e58;
        case 0x1c8e5cu: goto label_1c8e5c;
        case 0x1c8e60u: goto label_1c8e60;
        case 0x1c8e64u: goto label_1c8e64;
        case 0x1c8e68u: goto label_1c8e68;
        case 0x1c8e6cu: goto label_1c8e6c;
        case 0x1c8e70u: goto label_1c8e70;
        case 0x1c8e74u: goto label_1c8e74;
        case 0x1c8e78u: goto label_1c8e78;
        case 0x1c8e7cu: goto label_1c8e7c;
        case 0x1c8e80u: goto label_1c8e80;
        case 0x1c8e84u: goto label_1c8e84;
        case 0x1c8e88u: goto label_1c8e88;
        case 0x1c8e8cu: goto label_1c8e8c;
        case 0x1c8e90u: goto label_1c8e90;
        case 0x1c8e94u: goto label_1c8e94;
        case 0x1c8e98u: goto label_1c8e98;
        case 0x1c8e9cu: goto label_1c8e9c;
        case 0x1c8ea0u: goto label_1c8ea0;
        case 0x1c8ea4u: goto label_1c8ea4;
        case 0x1c8ea8u: goto label_1c8ea8;
        case 0x1c8eacu: goto label_1c8eac;
        case 0x1c8eb0u: goto label_1c8eb0;
        case 0x1c8eb4u: goto label_1c8eb4;
        case 0x1c8eb8u: goto label_1c8eb8;
        case 0x1c8ebcu: goto label_1c8ebc;
        case 0x1c8ec0u: goto label_1c8ec0;
        case 0x1c8ec4u: goto label_1c8ec4;
        case 0x1c8ec8u: goto label_1c8ec8;
        case 0x1c8eccu: goto label_1c8ecc;
        case 0x1c8ed0u: goto label_1c8ed0;
        case 0x1c8ed4u: goto label_1c8ed4;
        case 0x1c8ed8u: goto label_1c8ed8;
        case 0x1c8edcu: goto label_1c8edc;
        case 0x1c8ee0u: goto label_1c8ee0;
        case 0x1c8ee4u: goto label_1c8ee4;
        case 0x1c8ee8u: goto label_1c8ee8;
        case 0x1c8eecu: goto label_1c8eec;
        case 0x1c8ef0u: goto label_1c8ef0;
        case 0x1c8ef4u: goto label_1c8ef4;
        default: return;
    }

label_1c8728:
    // 0x1c8728: 0xac204be4  sw          $zero, 0x4BE4($at)
    ctx->pc = 0x1c8728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19428), GPR_U32(ctx, 0));
label_1c872c:
    // 0x1c872c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8730:
    // 0x1c8730: 0xac204be8  sw          $zero, 0x4BE8($at)
    ctx->pc = 0x1c8730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19432), GPR_U32(ctx, 0));
label_1c8734:
    // 0x1c8734: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8738:
    // 0x1c8738: 0xac274bec  sw          $a3, 0x4BEC($at)
    ctx->pc = 0x1c8738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19436), GPR_U32(ctx, 7));
label_1c873c:
    // 0x1c873c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8740:
    // 0x1c8740: 0xac204bb4  sw          $zero, 0x4BB4($at)
    ctx->pc = 0x1c8740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19380), GPR_U32(ctx, 0));
label_1c8744:
    // 0x1c8744: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8748:
    // 0x1c8748: 0xac204bb8  sw          $zero, 0x4BB8($at)
    ctx->pc = 0x1c8748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19384), GPR_U32(ctx, 0));
label_1c874c:
    // 0x1c874c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8750:
    // 0x1c8750: 0xac274bbc  sw          $a3, 0x4BBC($at)
    ctx->pc = 0x1c8750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19388), GPR_U32(ctx, 7));
label_1c8754:
    // 0x1c8754: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8758:
    // 0x1c8758: 0xac274b8c  sw          $a3, 0x4B8C($at)
    ctx->pc = 0x1c8758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19340), GPR_U32(ctx, 7));
label_1c875c:
    // 0x1c875c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8760:
    // 0x1c8760: 0xfc204bd0  sd          $zero, 0x4BD0($at)
    ctx->pc = 0x1c8760u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19408), GPR_U64(ctx, 0));
label_1c8764:
    // 0x1c8764: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8768:
    // 0x1c8768: 0xfc234bd8  sd          $v1, 0x4BD8($at)
    ctx->pc = 0x1c8768u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19416), GPR_U64(ctx, 3));
label_1c876c:
    // 0x1c876c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8770:
    // 0x1c8770: 0xfc234ba8  sd          $v1, 0x4BA8($at)
    ctx->pc = 0x1c8770u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19368), GPR_U64(ctx, 3));
label_1c8774:
    // 0x1c8774: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8778:
    // 0x1c8778: 0xac204b80  sw          $zero, 0x4B80($at)
    ctx->pc = 0x1c8778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19328), GPR_U32(ctx, 0));
label_1c877c:
    // 0x1c877c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c877cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8780:
    // 0x1c8780: 0xac204b84  sw          $zero, 0x4B84($at)
    ctx->pc = 0x1c8780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19332), GPR_U32(ctx, 0));
label_1c8784:
    // 0x1c8784: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8788:
    // 0x1c8788: 0xac204b88  sw          $zero, 0x4B88($at)
    ctx->pc = 0x1c8788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19336), GPR_U32(ctx, 0));
label_1c878c:
    // 0x1c878c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c878cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8790:
    // 0x1c8790: 0xdc258eb0  ld          $a1, -0x7150($at)
    ctx->pc = 0x1c8790u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938288)));
label_1c8794:
    // 0x1c8794: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8798:
    // 0x1c8798: 0xdc268eb8  ld          $a2, -0x7148($at)
    ctx->pc = 0x1c8798u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 4294938296)));
label_1c879c:
    // 0x1c879c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c879cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c87a0:
    // 0x1c87a0: 0xdc248ec0  ld          $a0, -0x7140($at)
    ctx->pc = 0x1c87a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294938304)));
label_1c87a4:
    // 0x1c87a4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c87a8:
    // 0x1c87a8: 0xdc238ec8  ld          $v1, -0x7138($at)
    ctx->pc = 0x1c87a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294938312)));
label_1c87ac:
    // 0x1c87ac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87b0:
    // 0x1c87b0: 0xfc254b60  sd          $a1, 0x4B60($at)
    ctx->pc = 0x1c87b0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19296), GPR_U64(ctx, 5));
label_1c87b4:
    // 0x1c87b4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87b8:
    // 0x1c87b8: 0xfc264b68  sd          $a2, 0x4B68($at)
    ctx->pc = 0x1c87b8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19304), GPR_U64(ctx, 6));
label_1c87bc:
    // 0x1c87bc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87c0:
    // 0x1c87c0: 0xfc244b90  sd          $a0, 0x4B90($at)
    ctx->pc = 0x1c87c0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19344), GPR_U64(ctx, 4));
label_1c87c4:
    // 0x1c87c4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87c8:
    // 0x1c87c8: 0xfc234b98  sd          $v1, 0x4B98($at)
    ctx->pc = 0x1c87c8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19352), GPR_U64(ctx, 3));
label_1c87cc:
    // 0x1c87cc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87d0:
    // 0x1c87d0: 0xfc254b30  sd          $a1, 0x4B30($at)
    ctx->pc = 0x1c87d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19248), GPR_U64(ctx, 5));
label_1c87d4:
    // 0x1c87d4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87d8:
    // 0x1c87d8: 0xfc264b38  sd          $a2, 0x4B38($at)
    ctx->pc = 0x1c87d8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19256), GPR_U64(ctx, 6));
label_1c87dc:
    // 0x1c87dc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87e0:
    // 0x1c87e0: 0xfc254b00  sd          $a1, 0x4B00($at)
    ctx->pc = 0x1c87e0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19200), GPR_U64(ctx, 5));
label_1c87e4:
    // 0x1c87e4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87e8:
    // 0x1c87e8: 0xfc264b08  sd          $a2, 0x4B08($at)
    ctx->pc = 0x1c87e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19208), GPR_U64(ctx, 6));
label_1c87ec:
    // 0x1c87ec: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87f0:
    // 0x1c87f0: 0xfc254ad0  sd          $a1, 0x4AD0($at)
    ctx->pc = 0x1c87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19152), GPR_U64(ctx, 5));
label_1c87f4:
    // 0x1c87f4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c87f8:
    // 0x1c87f8: 0xfc264ad8  sd          $a2, 0x4AD8($at)
    ctx->pc = 0x1c87f8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19160), GPR_U64(ctx, 6));
label_1c87fc:
    // 0x1c87fc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8800:
    // 0x1c8800: 0xfc254cb0  sd          $a1, 0x4CB0($at)
    ctx->pc = 0x1c8800u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19632), GPR_U64(ctx, 5));
label_1c8804:
    // 0x1c8804: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8808:
    // 0x1c8808: 0xfc264cb8  sd          $a2, 0x4CB8($at)
    ctx->pc = 0x1c8808u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19640), GPR_U64(ctx, 6));
label_1c880c:
    // 0x1c880c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c880cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8810:
    // 0x1c8810: 0xfc254c80  sd          $a1, 0x4C80($at)
    ctx->pc = 0x1c8810u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19584), GPR_U64(ctx, 5));
label_1c8814:
    // 0x1c8814: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8818:
    // 0x1c8818: 0xfc264c88  sd          $a2, 0x4C88($at)
    ctx->pc = 0x1c8818u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19592), GPR_U64(ctx, 6));
label_1c881c:
    // 0x1c881c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8820:
    // 0x1c8820: 0xfc254c50  sd          $a1, 0x4C50($at)
    ctx->pc = 0x1c8820u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19536), GPR_U64(ctx, 5));
label_1c8824:
    // 0x1c8824: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8828:
    // 0x1c8828: 0xfc264c58  sd          $a2, 0x4C58($at)
    ctx->pc = 0x1c8828u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19544), GPR_U64(ctx, 6));
label_1c882c:
    // 0x1c882c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8830:
    // 0x1c8830: 0xfc254c20  sd          $a1, 0x4C20($at)
    ctx->pc = 0x1c8830u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19488), GPR_U64(ctx, 5));
label_1c8834:
    // 0x1c8834: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8838:
    // 0x1c8838: 0xfc264c28  sd          $a2, 0x4C28($at)
    ctx->pc = 0x1c8838u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19496), GPR_U64(ctx, 6));
label_1c883c:
    // 0x1c883c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c883cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8840:
    // 0x1c8840: 0xfc254bf0  sd          $a1, 0x4BF0($at)
    ctx->pc = 0x1c8840u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19440), GPR_U64(ctx, 5));
label_1c8844:
    // 0x1c8844: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8848:
    // 0x1c8848: 0xfc254bc0  sd          $a1, 0x4BC0($at)
    ctx->pc = 0x1c8848u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19392), GPR_U64(ctx, 5));
label_1c884c:
    // 0x1c884c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8850:
    // 0x1c8850: 0xfc264bf8  sd          $a2, 0x4BF8($at)
    ctx->pc = 0x1c8850u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19448), GPR_U64(ctx, 6));
label_1c8854:
    // 0x1c8854: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8858:
    // 0x1c8858: 0x3e00008  jr          $ra
label_1c885c:
    if (ctx->pc == 0x1C885Cu) {
        ctx->pc = 0x1C885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8858u;
        // 0x1c885c: 0xfc264bc8  sd          $a2, 0x4BC8($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 19400), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8860u;
        goto label_1c8860;
    }
    ctx->pc = 0x1C8858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8858u;
        // 0x1c885c: 0xfc264bc8  sd          $a2, 0x4BC8($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 19400), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8860u;
label_1c8860:
    // 0x1c8860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c8864:
    // 0x1c8864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c8868:
    // 0x1c8868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c886c:
    // 0x1c886c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c8870:
    // 0x1c8870: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1c8874:
    // 0x1c8874: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1c8878:
    if (ctx->pc == 0x1C8878u) {
        ctx->pc = 0x1C8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8874u;
        // 0x1c8878: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C887Cu;
        goto label_1c887c;
    }
    ctx->pc = 0x1C8874u;
    {
        const bool branch_taken_0x1c8874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8874u;
        // 0x1c8878: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8874) {
            ctx->pc = 0x1C892Cu;
            goto label_1c892c;
        }
    }
    ctx->pc = 0x1C887Cu;
label_1c887c:
    // 0x1c887c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1c8880:
    // 0x1c8880: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c8884:
    // 0x1c8884: 0x24428e50  addiu       $v0, $v0, -0x71B0
    ctx->pc = 0x1c8884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938192));
label_1c8888:
    // 0x1c8888: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c888c:
    // 0x1c888c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c888cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8890:
    // 0x1c8890: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c8894:
    // 0x1c8894: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1c8898:
    if (ctx->pc == 0x1C8898u) {
        ctx->pc = 0x1C8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8894u;
        // 0x1c8898: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C889Cu;
        goto label_1c889c;
    }
    ctx->pc = 0x1C8894u;
    {
        const bool branch_taken_0x1c8894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8894u;
        // 0x1c8898: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8894) {
            ctx->pc = 0x1C88A4u;
            goto label_1c88a4;
        }
    }
    ctx->pc = 0x1C889Cu;
label_1c889c:
    // 0x1c889c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c88a0:
    if (ctx->pc == 0x1C88A0u) {
        ctx->pc = 0x1C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C889Cu;
        // 0x1c88a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88A4u;
        goto label_1c88a4;
    }
    ctx->pc = 0x1C889Cu;
    {
        const bool branch_taken_0x1c889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C889Cu;
        // 0x1c88a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c889c) {
            ctx->pc = 0x1C88B8u;
            goto label_1c88b8;
        }
    }
    ctx->pc = 0x1C88A4u;
label_1c88a4:
    // 0x1c88a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c88a8:
    // 0x1c88a8: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_1c88ac:
    // 0x1c88ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c88b0:
    // 0x1c88b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c88b4:
    // 0x1c88b4: 0x0  nop
    ctx->pc = 0x1c88b4u;
    // NOP
label_1c88b8:
    // 0x1c88b8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c88bc:
    // 0x1c88bc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1c88c0:
    if (ctx->pc == 0x1C88C0u) {
        ctx->pc = 0x1C88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88BCu;
        // 0x1c88c0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88C4u;
        goto label_1c88c4;
    }
    ctx->pc = 0x1C88BCu;
    {
        const bool branch_taken_0x1c88bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88BCu;
        // 0x1c88c0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88bc) {
            ctx->pc = 0x1C88CCu;
            goto label_1c88cc;
        }
    }
    ctx->pc = 0x1C88C4u;
label_1c88c4:
    // 0x1c88c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c88c8:
    if (ctx->pc == 0x1C88C8u) {
        ctx->pc = 0x1C88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88C4u;
        // 0x1c88c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88CCu;
        goto label_1c88cc;
    }
    ctx->pc = 0x1C88C4u;
    {
        const bool branch_taken_0x1c88c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88C4u;
        // 0x1c88c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88c4) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C88CCu;
label_1c88cc:
    // 0x1c88cc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c88d0:
    // 0x1c88d0: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
label_1c88d4:
    // 0x1c88d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c88d8:
    // 0x1c88d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c88dc:
    // 0x1c88dc: 0x0  nop
    ctx->pc = 0x1c88dcu;
    // NOP
label_1c88e0:
    // 0x1c88e0: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c88e4:
    // 0x1c88e4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1c88e8:
    if (ctx->pc == 0x1C88E8u) {
        ctx->pc = 0x1C88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E4u;
        // 0x1c88e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88ECu;
        goto label_1c88ec;
    }
    ctx->pc = 0x1C88E4u;
    {
        const bool branch_taken_0x1c88e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E4u;
        // 0x1c88e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88e4) {
            ctx->pc = 0x1C88F4u;
            goto label_1c88f4;
        }
    }
    ctx->pc = 0x1C88ECu;
label_1c88ec:
    // 0x1c88ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c88f0:
    if (ctx->pc == 0x1C88F0u) {
        ctx->pc = 0x1C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88ECu;
        // 0x1c88f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88F4u;
        goto label_1c88f4;
    }
    ctx->pc = 0x1C88ECu;
    {
        const bool branch_taken_0x1c88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88ECu;
        // 0x1c88f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88ec) {
            ctx->pc = 0x1C8908u;
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C88F4u;
label_1c88f4:
    // 0x1c88f4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c88f8:
    // 0x1c88f8: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
label_1c88fc:
    // 0x1c88fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8900:
    // 0x1c8900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c8900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8904:
    // 0x1c8904: 0x0  nop
    ctx->pc = 0x1c8904u;
    // NOP
label_1c8908:
    // 0x1c8908: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c890c:
    // 0x1c890c: 0xc070080  jal         func_1C0200
label_1c8910:
    if (ctx->pc == 0x1C8910u) {
        ctx->pc = 0x1C8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C890Cu;
        // 0x1c8910: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8914u;
        goto label_1c8914;
    }
    ctx->pc = 0x1C890Cu;
    SET_GPR_U32(ctx, 31, 0x1C8914u);
    ctx->pc = 0x1C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C890Cu;
    // 0x1c8910: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8918:
    // 0x1c8918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c891c:
    // 0x1c891c: 0xc041744  jal         func_105D10
label_1c8920:
    if (ctx->pc == 0x1C8920u) {
        ctx->pc = 0x1C8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C891Cu;
        // 0x1c8920: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8924u;
        goto label_1c8924;
    }
    ctx->pc = 0x1C891Cu;
    SET_GPR_U32(ctx, 31, 0x1C8924u);
    ctx->pc = 0x1C8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C891Cu;
    // 0x1c8920: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C891Cu, 0x1C8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8924u;
label_1c8924:
    // 0x1c8924: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1c8928:
    if (ctx->pc == 0x1C8928u) {
        ctx->pc = 0x1C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8924u;
        // 0x1c8928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C892Cu;
        goto label_1c892c;
    }
    ctx->pc = 0x1C8924u;
    {
        const bool branch_taken_0x1c8924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8924u;
        // 0x1c8928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8924) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C892Cu;
label_1c892c:
    // 0x1c892c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c8930:
    // 0x1c8930: 0x24428df0  addiu       $v0, $v0, -0x7210
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938096));
label_1c8934:
    // 0x1c8934: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8938:
    // 0x1c8938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c8938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c893c:
    // 0x1c893c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c8940:
    // 0x1c8940: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1c8944:
    if (ctx->pc == 0x1C8944u) {
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8948u;
        goto label_1c8948;
    }
    ctx->pc = 0x1C8940u;
    {
        const bool branch_taken_0x1c8940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8940) {
            ctx->pc = 0x1C8950u;
            goto label_1c8950;
        }
    }
    ctx->pc = 0x1C8948u;
label_1c8948:
    // 0x1c8948: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c894c:
    if (ctx->pc == 0x1C894Cu) {
        ctx->pc = 0x1C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8948u;
        // 0x1c894c: 0x24020c2d  addiu       $v0, $zero, 0xC2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8950u;
        goto label_1c8950;
    }
    ctx->pc = 0x1C8948u;
    {
        const bool branch_taken_0x1c8948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8948u;
        // 0x1c894c: 0x24020c2d  addiu       $v0, $zero, 0xC2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8948) {
            ctx->pc = 0x1C896Cu;
            goto label_1c896c;
        }
    }
    ctx->pc = 0x1C8950u;
label_1c8950:
    // 0x1c8950: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1c8954:
    // 0x1c8954: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c8958:
    // 0x1c8958: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_1c895c:
    // 0x1c895c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8960:
    // 0x1c8960: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8964:
    // 0x1c8964: 0x0  nop
    ctx->pc = 0x1c8964u;
    // NOP
label_1c8968:
    // 0x1c8968: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c896c:
    // 0x1c896c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1c8970:
    if (ctx->pc == 0x1C8970u) {
        ctx->pc = 0x1C8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C896Cu;
        // 0x1c8970: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8974u;
        goto label_1c8974;
    }
    ctx->pc = 0x1C896Cu;
    {
        const bool branch_taken_0x1c896c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C896Cu;
        // 0x1c8970: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c896c) {
            ctx->pc = 0x1C897Cu;
            goto label_1c897c;
        }
    }
    ctx->pc = 0x1C8974u;
label_1c8974:
    // 0x1c8974: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c8978:
    if (ctx->pc == 0x1C8978u) {
        ctx->pc = 0x1C8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8974u;
        // 0x1c8978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C897Cu;
        goto label_1c897c;
    }
    ctx->pc = 0x1C8974u;
    {
        const bool branch_taken_0x1c8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8974u;
        // 0x1c8978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8974) {
            ctx->pc = 0x1C8990u;
            goto label_1c8990;
        }
    }
    ctx->pc = 0x1C897Cu;
label_1c897c:
    // 0x1c897c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c897cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c8980:
    // 0x1c8980: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
label_1c8984:
    // 0x1c8984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8988:
    // 0x1c8988: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c898c:
    // 0x1c898c: 0x0  nop
    ctx->pc = 0x1c898cu;
    // NOP
label_1c8990:
    // 0x1c8990: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c8990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_1c8994:
    // 0x1c8994: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1c8998:
    if (ctx->pc == 0x1C8998u) {
        ctx->pc = 0x1C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8994u;
        // 0x1c8998: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C899Cu;
        goto label_1c899c;
    }
    ctx->pc = 0x1C8994u;
    {
        const bool branch_taken_0x1c8994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8994u;
        // 0x1c8998: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8994) {
            ctx->pc = 0x1C89A4u;
            goto label_1c89a4;
        }
    }
    ctx->pc = 0x1C899Cu;
label_1c899c:
    // 0x1c899c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c89a0:
    if (ctx->pc == 0x1C89A0u) {
        ctx->pc = 0x1C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C899Cu;
        // 0x1c89a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89A4u;
        goto label_1c89a4;
    }
    ctx->pc = 0x1C899Cu;
    {
        const bool branch_taken_0x1c899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C899Cu;
        // 0x1c89a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c899c) {
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C89A4u;
label_1c89a4:
    // 0x1c89a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c89a8:
    // 0x1c89a8: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
label_1c89ac:
    // 0x1c89ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c89b0:
    // 0x1c89b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c89b4:
    // 0x1c89b4: 0x0  nop
    ctx->pc = 0x1c89b4u;
    // NOP
label_1c89b8:
    // 0x1c89b8: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c89bc:
    // 0x1c89bc: 0xc070080  jal         func_1C0200
label_1c89c0:
    if (ctx->pc == 0x1C89C0u) {
        ctx->pc = 0x1C89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89BCu;
        // 0x1c89c0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89C4u;
        goto label_1c89c4;
    }
    ctx->pc = 0x1C89BCu;
    SET_GPR_U32(ctx, 31, 0x1C89C4u);
    ctx->pc = 0x1C89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89BCu;
    // 0x1c89c0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C89C4u;
label_1c89c4:
    // 0x1c89c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c89c8:
    // 0x1c89c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c89c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c89cc:
    // 0x1c89cc: 0xc041744  jal         func_105D10
label_1c89d0:
    if (ctx->pc == 0x1C89D0u) {
        ctx->pc = 0x1C89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89CCu;
        // 0x1c89d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89D4u;
        goto label_1c89d4;
    }
    ctx->pc = 0x1C89CCu;
    SET_GPR_U32(ctx, 31, 0x1C89D4u);
    ctx->pc = 0x1C89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89CCu;
    // 0x1c89d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C89CCu, 0x1C89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89D4u;
label_1c89d4:
    // 0x1c89d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c89d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c89d8:
    // 0x1c89d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c89dc:
    // 0x1c89dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c89e0:
    // 0x1c89e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c89e4:
    // 0x1c89e4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c89e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c89e8:
    // 0x1c89e8: 0x24080098  addiu       $t0, $zero, 0x98
    ctx->pc = 0x1c89e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1c89ec:
    // 0x1c89ec: 0xc0603d4  jal         func_180F50
label_1c89f0:
    if (ctx->pc == 0x1C89F0u) {
        ctx->pc = 0x1C89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89ECu;
        // 0x1c89f0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89F4u;
        goto label_1c89f4;
    }
    ctx->pc = 0x1C89ECu;
    SET_GPR_U32(ctx, 31, 0x1C89F4u);
    ctx->pc = 0x1C89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89ECu;
    // 0x1c89f0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C89ECu, 0x1C89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89F4u;
label_1c89f4:
    // 0x1c89f4: 0xff8289e8  sd          $v0, -0x7618($gp)
    ctx->pc = 0x1c89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U64(ctx, 2));
label_1c89f8:
    // 0x1c89f8: 0xc070038  jal         func_1C00E0
label_1c89fc:
    if (ctx->pc == 0x1C89FCu) {
        ctx->pc = 0x1C89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89F8u;
        // 0x1c89fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A00u;
        goto label_1c8a00;
    }
    ctx->pc = 0x1C89F8u;
    SET_GPR_U32(ctx, 31, 0x1C8A00u);
    ctx->pc = 0x1C89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89F8u;
    // 0x1c89fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C8A00u;
label_1c8a00:
    // 0x1c8a00: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c8a04:
    // 0x1c8a04: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x1c8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_1c8a08:
    // 0x1c8a08: 0xc060578  jal         func_1815E0
label_1c8a0c:
    if (ctx->pc == 0x1C8A0Cu) {
        ctx->pc = 0x1C8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A08u;
        // 0x1c8a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A10u;
        goto label_1c8a10;
    }
    ctx->pc = 0x1C8A08u;
    SET_GPR_U32(ctx, 31, 0x1C8A10u);
    ctx->pc = 0x1C8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A08u;
    // 0x1c8a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A08u, 0x1C8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A10u;
label_1c8a10:
    // 0x1c8a10: 0xff8289e0  sd          $v0, -0x7620($gp)
    ctx->pc = 0x1c8a10u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U64(ctx, 2));
label_1c8a14:
    // 0x1c8a14: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c8a18:
    // 0x1c8a18: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x1c8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1c8a1c:
    // 0x1c8a1c: 0xc060578  jal         func_1815E0
label_1c8a20:
    if (ctx->pc == 0x1C8A20u) {
        ctx->pc = 0x1C8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A1Cu;
        // 0x1c8a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A24u;
        goto label_1c8a24;
    }
    ctx->pc = 0x1C8A1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8A24u);
    ctx->pc = 0x1C8A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A1Cu;
    // 0x1c8a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A1Cu, 0x1C8A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A24u;
label_1c8a24:
    // 0x1c8a24: 0xff8289d8  sd          $v0, -0x7628($gp)
    ctx->pc = 0x1c8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U64(ctx, 2));
label_1c8a28:
    // 0x1c8a28: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c8a2c:
    // 0x1c8a2c: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_1c8a30:
    // 0x1c8a30: 0xc060578  jal         func_1815E0
label_1c8a34:
    if (ctx->pc == 0x1C8A34u) {
        ctx->pc = 0x1C8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A30u;
        // 0x1c8a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A38u;
        goto label_1c8a38;
    }
    ctx->pc = 0x1C8A30u;
    SET_GPR_U32(ctx, 31, 0x1C8A38u);
    ctx->pc = 0x1C8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A30u;
    // 0x1c8a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A30u, 0x1C8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A38u;
label_1c8a38:
    // 0x1c8a38: 0xff8289d0  sd          $v0, -0x7630($gp)
    ctx->pc = 0x1c8a38u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U64(ctx, 2));
label_1c8a3c:
    // 0x1c8a3c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c8a40:
    // 0x1c8a40: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1c8a44:
    // 0x1c8a44: 0xc060578  jal         func_1815E0
label_1c8a48:
    if (ctx->pc == 0x1C8A48u) {
        ctx->pc = 0x1C8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A44u;
        // 0x1c8a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A4Cu;
        goto label_1c8a4c;
    }
    ctx->pc = 0x1C8A44u;
    SET_GPR_U32(ctx, 31, 0x1C8A4Cu);
    ctx->pc = 0x1C8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A44u;
    // 0x1c8a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A44u, 0x1C8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A4Cu;
label_1c8a4c:
    // 0x1c8a4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8a50:
    // 0x1c8a50: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a54:
    // 0x1c8a54: 0xa0234a98  sb          $v1, 0x4A98($at)
    ctx->pc = 0x1c8a54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19096), (uint8_t)GPR_U32(ctx, 3));
label_1c8a58:
    // 0x1c8a58: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c8a5c:
    // 0x1c8a5c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a60:
    // 0x1c8a60: 0xff8289c8  sd          $v0, -0x7638($gp)
    ctx->pc = 0x1c8a60u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U64(ctx, 2));
label_1c8a64:
    // 0x1c8a64: 0xa0234a99  sb          $v1, 0x4A99($at)
    ctx->pc = 0x1c8a64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19097), (uint8_t)GPR_U32(ctx, 3));
label_1c8a68:
    // 0x1c8a68: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a6c:
    // 0x1c8a6c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c8a70:
    // 0x1c8a70: 0xa0244a9a  sb          $a0, 0x4A9A($at)
    ctx->pc = 0x1c8a70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19098), (uint8_t)GPR_U32(ctx, 4));
label_1c8a74:
    // 0x1c8a74: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a78:
    // 0x1c8a78: 0xa0244a9b  sb          $a0, 0x4A9B($at)
    ctx->pc = 0x1c8a78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19099), (uint8_t)GPR_U32(ctx, 4));
label_1c8a7c:
    // 0x1c8a7c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a80:
    // 0x1c8a80: 0xa0234a9c  sb          $v1, 0x4A9C($at)
    ctx->pc = 0x1c8a80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19100), (uint8_t)GPR_U32(ctx, 3));
label_1c8a84:
    // 0x1c8a84: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a88:
    // 0x1c8a88: 0xa0234a9d  sb          $v1, 0x4A9D($at)
    ctx->pc = 0x1c8a88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19101), (uint8_t)GPR_U32(ctx, 3));
label_1c8a8c:
    // 0x1c8a8c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a90:
    // 0x1c8a90: 0xa0244a9e  sb          $a0, 0x4A9E($at)
    ctx->pc = 0x1c8a90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19102), (uint8_t)GPR_U32(ctx, 4));
label_1c8a94:
    // 0x1c8a94: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8a98:
    // 0x1c8a98: 0xa0244a9f  sb          $a0, 0x4A9F($at)
    ctx->pc = 0x1c8a98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19103), (uint8_t)GPR_U32(ctx, 4));
label_1c8a9c:
    // 0x1c8a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8aa0:
    // 0x1c8aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8aa4:
    // 0x1c8aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8aa8:
    // 0x1c8aa8: 0x3e00008  jr          $ra
label_1c8aac:
    if (ctx->pc == 0x1C8AACu) {
        ctx->pc = 0x1C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA8u;
        // 0x1c8aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8AB0u;
        goto label_1c8ab0;
    }
    ctx->pc = 0x1C8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA8u;
        // 0x1c8aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8AB0u;
label_1c8ab0:
    // 0x1c8ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c8ab4:
    // 0x1c8ab4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8ab8:
    // 0x1c8ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c8abc:
    // 0x1c8abc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c8ac0:
    // 0x1c8ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c8ac4:
    // 0x1c8ac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c8ac8:
    // 0x1c8ac8: 0x8c306980  lw          $s0, 0x6980($at)
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27008)));
label_1c8acc:
    // 0x1c8acc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8ad0:
    // 0x1c8ad0: 0x8c316984  lw          $s1, 0x6984($at)
    ctx->pc = 0x1c8ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27012)));
label_1c8ad4:
    // 0x1c8ad4: 0xc070080  jal         func_1C0200
label_1c8ad8:
    if (ctx->pc == 0x1C8AD8u) {
        ctx->pc = 0x1C8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AD4u;
        // 0x1c8ad8: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8ADCu;
        goto label_1c8adc;
    }
    ctx->pc = 0x1C8AD4u;
    SET_GPR_U32(ctx, 31, 0x1C8ADCu);
    ctx->pc = 0x1C8AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AD4u;
    // 0x1c8ad8: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C8ADCu;
label_1c8adc:
    // 0x1c8adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ae0:
    // 0x1c8ae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ae4:
    // 0x1c8ae4: 0xc041744  jal         func_105D10
label_1c8ae8:
    if (ctx->pc == 0x1C8AE8u) {
        ctx->pc = 0x1C8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AE4u;
        // 0x1c8ae8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8AECu;
        goto label_1c8aec;
    }
    ctx->pc = 0x1C8AE4u;
    SET_GPR_U32(ctx, 31, 0x1C8AECu);
    ctx->pc = 0x1C8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AE4u;
    // 0x1c8ae8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C8AE4u, 0x1C8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AECu;
label_1c8aec:
    // 0x1c8aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8af0:
    // 0x1c8af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8af4:
    // 0x1c8af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8af8:
    // 0x1c8af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8afc:
    // 0x1c8afc: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c8b00:
    // 0x1c8b00: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1c8b04:
    // 0x1c8b04: 0xc0603d4  jal         func_180F50
label_1c8b08:
    if (ctx->pc == 0x1C8B08u) {
        ctx->pc = 0x1C8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B04u;
        // 0x1c8b08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B0Cu;
        goto label_1c8b0c;
    }
    ctx->pc = 0x1C8B04u;
    SET_GPR_U32(ctx, 31, 0x1C8B0Cu);
    ctx->pc = 0x1C8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B04u;
    // 0x1c8b08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C8B04u, 0x1C8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B0Cu;
label_1c8b0c:
    // 0x1c8b0c: 0xff828a80  sd          $v0, -0x7580($gp)
    ctx->pc = 0x1c8b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937216), GPR_U64(ctx, 2));
label_1c8b10:
    // 0x1c8b10: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c8b14:
    // 0x1c8b14: 0x240500a9  addiu       $a1, $zero, 0xA9
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_1c8b18:
    // 0x1c8b18: 0xc060578  jal         func_1815E0
label_1c8b1c:
    if (ctx->pc == 0x1C8B1Cu) {
        ctx->pc = 0x1C8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B18u;
        // 0x1c8b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B20u;
        goto label_1c8b20;
    }
    ctx->pc = 0x1C8B18u;
    SET_GPR_U32(ctx, 31, 0x1C8B20u);
    ctx->pc = 0x1C8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B18u;
    // 0x1c8b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8B18u, 0x1C8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B20u;
label_1c8b20:
    // 0x1c8b20: 0xff828a78  sd          $v0, -0x7588($gp)
    ctx->pc = 0x1c8b20u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937208), GPR_U64(ctx, 2));
label_1c8b24:
    // 0x1c8b24: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c8b28:
    // 0x1c8b28: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c8b2c:
    // 0x1c8b2c: 0xc060578  jal         func_1815E0
label_1c8b30:
    if (ctx->pc == 0x1C8B30u) {
        ctx->pc = 0x1C8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B2Cu;
        // 0x1c8b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B34u;
        goto label_1c8b34;
    }
    ctx->pc = 0x1C8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B34u);
    ctx->pc = 0x1C8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B2Cu;
    // 0x1c8b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8B2Cu, 0x1C8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B34u;
label_1c8b34:
    // 0x1c8b34: 0xff828a58  sd          $v0, -0x75A8($gp)
    ctx->pc = 0x1c8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937176), GPR_U64(ctx, 2));
label_1c8b38:
    // 0x1c8b38: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c8b3c:
    // 0x1c8b3c: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_1c8b40:
    // 0x1c8b40: 0xc060578  jal         func_1815E0
label_1c8b44:
    if (ctx->pc == 0x1C8B44u) {
        ctx->pc = 0x1C8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B40u;
        // 0x1c8b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B48u;
        goto label_1c8b48;
    }
    ctx->pc = 0x1C8B40u;
    SET_GPR_U32(ctx, 31, 0x1C8B48u);
    ctx->pc = 0x1C8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B40u;
    // 0x1c8b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8B40u, 0x1C8B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B48u;
label_1c8b48:
    // 0x1c8b48: 0xff828ba8  sd          $v0, -0x7458($gp)
    ctx->pc = 0x1c8b48u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U64(ctx, 2));
label_1c8b4c:
    // 0x1c8b4c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c8b50:
    // 0x1c8b50: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x1c8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1c8b54:
    // 0x1c8b54: 0xc060578  jal         func_1815E0
label_1c8b58:
    if (ctx->pc == 0x1C8B58u) {
        ctx->pc = 0x1C8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B54u;
        // 0x1c8b58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B5Cu;
        goto label_1c8b5c;
    }
    ctx->pc = 0x1C8B54u;
    SET_GPR_U32(ctx, 31, 0x1C8B5Cu);
    ctx->pc = 0x1C8B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B54u;
    // 0x1c8b58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8B54u, 0x1C8B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B5Cu;
label_1c8b5c:
    // 0x1c8b5c: 0xff828be0  sd          $v0, -0x7420($gp)
    ctx->pc = 0x1c8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U64(ctx, 2));
label_1c8b60:
    // 0x1c8b60: 0xc070038  jal         func_1C00E0
label_1c8b64:
    if (ctx->pc == 0x1C8B64u) {
        ctx->pc = 0x1C8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B60u;
        // 0x1c8b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B68u;
        goto label_1c8b68;
    }
    ctx->pc = 0x1C8B60u;
    SET_GPR_U32(ctx, 31, 0x1C8B68u);
    ctx->pc = 0x1C8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B60u;
    // 0x1c8b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C8B68u;
label_1c8b68:
    // 0x1c8b68: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8b6c:
    // 0x1c8b6c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c8b70:
    // 0x1c8b70: 0xa0204a38  sb          $zero, 0x4A38($at)
    ctx->pc = 0x1c8b70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19000), (uint8_t)GPR_U32(ctx, 0));
label_1c8b74:
    // 0x1c8b74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c8b78:
    // 0x1c8b78: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8b7c:
    // 0x1c8b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c8b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8b80:
    // 0x1c8b80: 0xa0204a39  sb          $zero, 0x4A39($at)
    ctx->pc = 0x1c8b80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19001), (uint8_t)GPR_U32(ctx, 0));
label_1c8b84:
    // 0x1c8b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c8b88:
    // 0x1c8b88: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8b8c:
    // 0x1c8b8c: 0xa0244a3a  sb          $a0, 0x4A3A($at)
    ctx->pc = 0x1c8b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19002), (uint8_t)GPR_U32(ctx, 4));
label_1c8b90:
    // 0x1c8b90: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8b94:
    // 0x1c8b94: 0xa0244a3b  sb          $a0, 0x4A3B($at)
    ctx->pc = 0x1c8b94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19003), (uint8_t)GPR_U32(ctx, 4));
label_1c8b98:
    // 0x1c8b98: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8b9c:
    // 0x1c8b9c: 0xa0224980  sb          $v0, 0x4980($at)
    ctx->pc = 0x1c8b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18816), (uint8_t)GPR_U32(ctx, 2));
label_1c8ba0:
    // 0x1c8ba0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8ba4:
    // 0x1c8ba4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8ba8:
    // 0x1c8ba8: 0xa0224981  sb          $v0, 0x4981($at)
    ctx->pc = 0x1c8ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18817), (uint8_t)GPR_U32(ctx, 2));
label_1c8bac:
    // 0x1c8bac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bb0:
    // 0x1c8bb0: 0xa0204a3c  sb          $zero, 0x4A3C($at)
    ctx->pc = 0x1c8bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19004), (uint8_t)GPR_U32(ctx, 0));
label_1c8bb4:
    // 0x1c8bb4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bb8:
    // 0x1c8bb8: 0xa0204a3d  sb          $zero, 0x4A3D($at)
    ctx->pc = 0x1c8bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19005), (uint8_t)GPR_U32(ctx, 0));
label_1c8bbc:
    // 0x1c8bbc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bc0:
    // 0x1c8bc0: 0xa0244a3e  sb          $a0, 0x4A3E($at)
    ctx->pc = 0x1c8bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19006), (uint8_t)GPR_U32(ctx, 4));
label_1c8bc4:
    // 0x1c8bc4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bc8:
    // 0x1c8bc8: 0xa0244a3f  sb          $a0, 0x4A3F($at)
    ctx->pc = 0x1c8bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19007), (uint8_t)GPR_U32(ctx, 4));
label_1c8bcc:
    // 0x1c8bcc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bd0:
    // 0x1c8bd0: 0xa0254a4c  sb          $a1, 0x4A4C($at)
    ctx->pc = 0x1c8bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19020), (uint8_t)GPR_U32(ctx, 5));
label_1c8bd4:
    // 0x1c8bd4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bd8:
    // 0x1c8bd8: 0xa0254a4d  sb          $a1, 0x4A4D($at)
    ctx->pc = 0x1c8bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19021), (uint8_t)GPR_U32(ctx, 5));
label_1c8bdc:
    // 0x1c8bdc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8be0:
    // 0x1c8be0: 0xa0244a4e  sb          $a0, 0x4A4E($at)
    ctx->pc = 0x1c8be0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19022), (uint8_t)GPR_U32(ctx, 4));
label_1c8be4:
    // 0x1c8be4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8be8:
    // 0x1c8be8: 0xa0244a4f  sb          $a0, 0x4A4F($at)
    ctx->pc = 0x1c8be8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19023), (uint8_t)GPR_U32(ctx, 4));
label_1c8bec:
    // 0x1c8bec: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bf0:
    // 0x1c8bf0: 0xa0234a50  sb          $v1, 0x4A50($at)
    ctx->pc = 0x1c8bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19024), (uint8_t)GPR_U32(ctx, 3));
label_1c8bf4:
    // 0x1c8bf4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8bf8:
    // 0x1c8bf8: 0xa0234a51  sb          $v1, 0x4A51($at)
    ctx->pc = 0x1c8bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19025), (uint8_t)GPR_U32(ctx, 3));
label_1c8bfc:
    // 0x1c8bfc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8c00:
    // 0x1c8c00: 0xa0244a52  sb          $a0, 0x4A52($at)
    ctx->pc = 0x1c8c00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19026), (uint8_t)GPR_U32(ctx, 4));
label_1c8c04:
    // 0x1c8c04: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8c08:
    // 0x1c8c08: 0xa0244a53  sb          $a0, 0x4A53($at)
    ctx->pc = 0x1c8c08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19027), (uint8_t)GPR_U32(ctx, 4));
label_1c8c0c:
    // 0x1c8c0c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8c10:
    // 0x1c8c10: 0xa0244982  sb          $a0, 0x4982($at)
    ctx->pc = 0x1c8c10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18818), (uint8_t)GPR_U32(ctx, 4));
label_1c8c14:
    // 0x1c8c14: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8c18:
    // 0x1c8c18: 0xa0244983  sb          $a0, 0x4983($at)
    ctx->pc = 0x1c8c18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18819), (uint8_t)GPR_U32(ctx, 4));
label_1c8c1c:
    // 0x1c8c1c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8c20:
    // 0x1c8c20: 0x8c306990  lw          $s0, 0x6990($at)
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27024)));
label_1c8c24:
    // 0x1c8c24: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8c28:
    // 0x1c8c28: 0x8c316994  lw          $s1, 0x6994($at)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27028)));
label_1c8c2c:
    // 0x1c8c2c: 0xc070080  jal         func_1C0200
label_1c8c30:
    if (ctx->pc == 0x1C8C30u) {
        ctx->pc = 0x1C8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C2Cu;
        // 0x1c8c30: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C34u;
        goto label_1c8c34;
    }
    ctx->pc = 0x1C8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C34u);
    ctx->pc = 0x1C8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C2Cu;
    // 0x1c8c30: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C8C34u;
label_1c8c34:
    // 0x1c8c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c38:
    // 0x1c8c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c3c:
    // 0x1c8c3c: 0xc041744  jal         func_105D10
label_1c8c40:
    if (ctx->pc == 0x1C8C40u) {
        ctx->pc = 0x1C8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C3Cu;
        // 0x1c8c40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C44u;
        goto label_1c8c44;
    }
    ctx->pc = 0x1C8C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C44u);
    ctx->pc = 0x1C8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C3Cu;
    // 0x1c8c40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C8C3Cu, 0x1C8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C44u;
label_1c8c44:
    // 0x1c8c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c48:
    // 0x1c8c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c4c:
    // 0x1c8c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c50:
    // 0x1c8c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c54:
    // 0x1c8c54: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1c8c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8c58:
    // 0x1c8c58: 0x240800b1  addiu       $t0, $zero, 0xB1
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_1c8c5c:
    // 0x1c8c5c: 0xc0603d4  jal         func_180F50
label_1c8c60:
    if (ctx->pc == 0x1C8C60u) {
        ctx->pc = 0x1C8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C5Cu;
        // 0x1c8c60: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C64u;
        goto label_1c8c64;
    }
    ctx->pc = 0x1C8C5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C64u);
    ctx->pc = 0x1C8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C5Cu;
    // 0x1c8c60: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C8C5Cu, 0x1C8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C64u;
label_1c8c64:
    // 0x1c8c64: 0xff8289c0  sd          $v0, -0x7640($gp)
    ctx->pc = 0x1c8c64u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U64(ctx, 2));
label_1c8c68:
    // 0x1c8c68: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1c8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8c6c:
    // 0x1c8c6c: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x1c8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_1c8c70:
    // 0x1c8c70: 0xc060578  jal         func_1815E0
label_1c8c74:
    if (ctx->pc == 0x1C8C74u) {
        ctx->pc = 0x1C8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C70u;
        // 0x1c8c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C78u;
        goto label_1c8c78;
    }
    ctx->pc = 0x1C8C70u;
    SET_GPR_U32(ctx, 31, 0x1C8C78u);
    ctx->pc = 0x1C8C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C70u;
    // 0x1c8c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8C70u, 0x1C8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C78u;
label_1c8c78:
    // 0x1c8c78: 0xff8289b8  sd          $v0, -0x7648($gp)
    ctx->pc = 0x1c8c78u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U64(ctx, 2));
label_1c8c7c:
    // 0x1c8c7c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8c80:
    // 0x1c8c80: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_1c8c84:
    // 0x1c8c84: 0xc060578  jal         func_1815E0
label_1c8c88:
    if (ctx->pc == 0x1C8C88u) {
        ctx->pc = 0x1C8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C84u;
        // 0x1c8c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C8Cu;
        goto label_1c8c8c;
    }
    ctx->pc = 0x1C8C84u;
    SET_GPR_U32(ctx, 31, 0x1C8C8Cu);
    ctx->pc = 0x1C8C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C84u;
    // 0x1c8c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8C84u, 0x1C8C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C8Cu;
label_1c8c8c:
    // 0x1c8c8c: 0xff8289b0  sd          $v0, -0x7650($gp)
    ctx->pc = 0x1c8c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U64(ctx, 2));
label_1c8c90:
    // 0x1c8c90: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8c94:
    // 0x1c8c94: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1c8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1c8c98:
    // 0x1c8c98: 0xc060578  jal         func_1815E0
label_1c8c9c:
    if (ctx->pc == 0x1C8C9Cu) {
        ctx->pc = 0x1C8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C98u;
        // 0x1c8c9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8CA0u;
        goto label_1c8ca0;
    }
    ctx->pc = 0x1C8C98u;
    SET_GPR_U32(ctx, 31, 0x1C8CA0u);
    ctx->pc = 0x1C8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C98u;
    // 0x1c8c9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8C98u, 0x1C8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CA0u;
label_1c8ca0:
    // 0x1c8ca0: 0xff8289a8  sd          $v0, -0x7658($gp)
    ctx->pc = 0x1c8ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U64(ctx, 2));
label_1c8ca4:
    // 0x1c8ca4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1c8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8ca8:
    // 0x1c8ca8: 0x240500b5  addiu       $a1, $zero, 0xB5
    ctx->pc = 0x1c8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_1c8cac:
    // 0x1c8cac: 0xc060578  jal         func_1815E0
label_1c8cb0:
    if (ctx->pc == 0x1C8CB0u) {
        ctx->pc = 0x1C8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CACu;
        // 0x1c8cb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8CB4u;
        goto label_1c8cb4;
    }
    ctx->pc = 0x1C8CACu;
    SET_GPR_U32(ctx, 31, 0x1C8CB4u);
    ctx->pc = 0x1C8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CACu;
    // 0x1c8cb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8CACu, 0x1C8CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CB4u;
label_1c8cb4:
    // 0x1c8cb4: 0xff8289a0  sd          $v0, -0x7660($gp)
    ctx->pc = 0x1c8cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936992), GPR_U64(ctx, 2));
label_1c8cb8:
    // 0x1c8cb8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8cbc:
    // 0x1c8cbc: 0x240500b6  addiu       $a1, $zero, 0xB6
    ctx->pc = 0x1c8cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
label_1c8cc0:
    // 0x1c8cc0: 0xc060578  jal         func_1815E0
label_1c8cc4:
    if (ctx->pc == 0x1C8CC4u) {
        ctx->pc = 0x1C8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CC0u;
        // 0x1c8cc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8CC8u;
        goto label_1c8cc8;
    }
    ctx->pc = 0x1C8CC0u;
    SET_GPR_U32(ctx, 31, 0x1C8CC8u);
    ctx->pc = 0x1C8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CC0u;
    // 0x1c8cc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8CC0u, 0x1C8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CC8u;
label_1c8cc8:
    // 0x1c8cc8: 0xff828998  sd          $v0, -0x7668($gp)
    ctx->pc = 0x1c8cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936984), GPR_U64(ctx, 2));
label_1c8ccc:
    // 0x1c8ccc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c8cd0:
    // 0x1c8cd0: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_1c8cd4:
    // 0x1c8cd4: 0xc060578  jal         func_1815E0
label_1c8cd8:
    if (ctx->pc == 0x1C8CD8u) {
        ctx->pc = 0x1C8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CD4u;
        // 0x1c8cd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8CDCu;
        goto label_1c8cdc;
    }
    ctx->pc = 0x1C8CD4u;
    SET_GPR_U32(ctx, 31, 0x1C8CDCu);
    ctx->pc = 0x1C8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CD4u;
    // 0x1c8cd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8CD4u, 0x1C8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CDCu;
label_1c8cdc:
    // 0x1c8cdc: 0xff828990  sd          $v0, -0x7670($gp)
    ctx->pc = 0x1c8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U64(ctx, 2));
label_1c8ce0:
    // 0x1c8ce0: 0xc070038  jal         func_1C00E0
label_1c8ce4:
    if (ctx->pc == 0x1C8CE4u) {
        ctx->pc = 0x1C8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CE0u;
        // 0x1c8ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8CE8u;
        goto label_1c8ce8;
    }
    ctx->pc = 0x1C8CE0u;
    SET_GPR_U32(ctx, 31, 0x1C8CE8u);
    ctx->pc = 0x1C8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CE0u;
    // 0x1c8ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C8CE8u;
label_1c8ce8:
    // 0x1c8ce8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8cec:
    // 0x1c8cec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8cf0:
    // 0x1c8cf0: 0xa0204aa0  sb          $zero, 0x4AA0($at)
    ctx->pc = 0x1c8cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19104), (uint8_t)GPR_U32(ctx, 0));
label_1c8cf4:
    // 0x1c8cf4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c8cf8:
    // 0x1c8cf8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8cfc:
    // 0x1c8cfc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c8d00:
    // 0x1c8d00: 0xa0234aa1  sb          $v1, 0x4AA1($at)
    ctx->pc = 0x1c8d00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19105), (uint8_t)GPR_U32(ctx, 3));
label_1c8d04:
    // 0x1c8d04: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d08:
    // 0x1c8d08: 0xa0244aa2  sb          $a0, 0x4AA2($at)
    ctx->pc = 0x1c8d08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19106), (uint8_t)GPR_U32(ctx, 4));
label_1c8d0c:
    // 0x1c8d0c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d10:
    // 0x1c8d10: 0xa0224aa3  sb          $v0, 0x4AA3($at)
    ctx->pc = 0x1c8d10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19107), (uint8_t)GPR_U32(ctx, 2));
label_1c8d14:
    // 0x1c8d14: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d18:
    // 0x1c8d18: 0xa0204aa4  sb          $zero, 0x4AA4($at)
    ctx->pc = 0x1c8d18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19108), (uint8_t)GPR_U32(ctx, 0));
label_1c8d1c:
    // 0x1c8d1c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d20:
    // 0x1c8d20: 0xa0234aa5  sb          $v1, 0x4AA5($at)
    ctx->pc = 0x1c8d20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19109), (uint8_t)GPR_U32(ctx, 3));
label_1c8d24:
    // 0x1c8d24: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d28:
    // 0x1c8d28: 0xa0244aa6  sb          $a0, 0x4AA6($at)
    ctx->pc = 0x1c8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19110), (uint8_t)GPR_U32(ctx, 4));
label_1c8d2c:
    // 0x1c8d2c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d30:
    // 0x1c8d30: 0xa0224aa7  sb          $v0, 0x4AA7($at)
    ctx->pc = 0x1c8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19111), (uint8_t)GPR_U32(ctx, 2));
label_1c8d34:
    // 0x1c8d34: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d38:
    // 0x1c8d38: 0xa0204aa8  sb          $zero, 0x4AA8($at)
    ctx->pc = 0x1c8d38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19112), (uint8_t)GPR_U32(ctx, 0));
label_1c8d3c:
    // 0x1c8d3c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d40:
    // 0x1c8d40: 0xa0234aa9  sb          $v1, 0x4AA9($at)
    ctx->pc = 0x1c8d40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19113), (uint8_t)GPR_U32(ctx, 3));
label_1c8d44:
    // 0x1c8d44: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d48:
    // 0x1c8d48: 0xa0244aaa  sb          $a0, 0x4AAA($at)
    ctx->pc = 0x1c8d48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19114), (uint8_t)GPR_U32(ctx, 4));
label_1c8d4c:
    // 0x1c8d4c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d50:
    // 0x1c8d50: 0xa0224aab  sb          $v0, 0x4AAB($at)
    ctx->pc = 0x1c8d50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19115), (uint8_t)GPR_U32(ctx, 2));
label_1c8d54:
    // 0x1c8d54: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d58:
    // 0x1c8d58: 0xa0204aac  sb          $zero, 0x4AAC($at)
    ctx->pc = 0x1c8d58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19116), (uint8_t)GPR_U32(ctx, 0));
label_1c8d5c:
    // 0x1c8d5c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d60:
    // 0x1c8d60: 0xa0234aad  sb          $v1, 0x4AAD($at)
    ctx->pc = 0x1c8d60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19117), (uint8_t)GPR_U32(ctx, 3));
label_1c8d64:
    // 0x1c8d64: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d68:
    // 0x1c8d68: 0xa0244aae  sb          $a0, 0x4AAE($at)
    ctx->pc = 0x1c8d68u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19118), (uint8_t)GPR_U32(ctx, 4));
label_1c8d6c:
    // 0x1c8d6c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d70:
    // 0x1c8d70: 0xa0224aaf  sb          $v0, 0x4AAF($at)
    ctx->pc = 0x1c8d70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19119), (uint8_t)GPR_U32(ctx, 2));
label_1c8d74:
    // 0x1c8d74: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d78:
    // 0x1c8d78: 0xa0204ab0  sb          $zero, 0x4AB0($at)
    ctx->pc = 0x1c8d78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19120), (uint8_t)GPR_U32(ctx, 0));
label_1c8d7c:
    // 0x1c8d7c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d80:
    // 0x1c8d80: 0xa0234ab1  sb          $v1, 0x4AB1($at)
    ctx->pc = 0x1c8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19121), (uint8_t)GPR_U32(ctx, 3));
label_1c8d84:
    // 0x1c8d84: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d88:
    // 0x1c8d88: 0xa0244ab2  sb          $a0, 0x4AB2($at)
    ctx->pc = 0x1c8d88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19122), (uint8_t)GPR_U32(ctx, 4));
label_1c8d8c:
    // 0x1c8d8c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d90:
    // 0x1c8d90: 0xa0224ab3  sb          $v0, 0x4AB3($at)
    ctx->pc = 0x1c8d90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19123), (uint8_t)GPR_U32(ctx, 2));
label_1c8d94:
    // 0x1c8d94: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8d98:
    // 0x1c8d98: 0xa0204ab4  sb          $zero, 0x4AB4($at)
    ctx->pc = 0x1c8d98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19124), (uint8_t)GPR_U32(ctx, 0));
label_1c8d9c:
    // 0x1c8d9c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8da0:
    // 0x1c8da0: 0xa0234ab5  sb          $v1, 0x4AB5($at)
    ctx->pc = 0x1c8da0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19125), (uint8_t)GPR_U32(ctx, 3));
label_1c8da4:
    // 0x1c8da4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8da8:
    // 0x1c8da8: 0xa0234ab9  sb          $v1, 0x4AB9($at)
    ctx->pc = 0x1c8da8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19129), (uint8_t)GPR_U32(ctx, 3));
label_1c8dac:
    // 0x1c8dac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8db0:
    // 0x1c8db0: 0xa0244ab6  sb          $a0, 0x4AB6($at)
    ctx->pc = 0x1c8db0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19126), (uint8_t)GPR_U32(ctx, 4));
label_1c8db4:
    // 0x1c8db4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8db8:
    // 0x1c8db8: 0xa0224ab7  sb          $v0, 0x4AB7($at)
    ctx->pc = 0x1c8db8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19127), (uint8_t)GPR_U32(ctx, 2));
label_1c8dbc:
    // 0x1c8dbc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8dc0:
    // 0x1c8dc0: 0xa0224abb  sb          $v0, 0x4ABB($at)
    ctx->pc = 0x1c8dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19131), (uint8_t)GPR_U32(ctx, 2));
label_1c8dc4:
    // 0x1c8dc4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8dc8:
    // 0x1c8dc8: 0xa0204ab8  sb          $zero, 0x4AB8($at)
    ctx->pc = 0x1c8dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19128), (uint8_t)GPR_U32(ctx, 0));
label_1c8dcc:
    // 0x1c8dcc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c8dd0:
    // 0x1c8dd0: 0xa0244aba  sb          $a0, 0x4ABA($at)
    ctx->pc = 0x1c8dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19130), (uint8_t)GPR_U32(ctx, 4));
label_1c8dd4:
    // 0x1c8dd4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8dd8:
    // 0x1c8dd8: 0x8c3069a0  lw          $s0, 0x69A0($at)
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27040)));
label_1c8ddc:
    // 0x1c8ddc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c8ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c8de0:
    // 0x1c8de0: 0x8c3169a4  lw          $s1, 0x69A4($at)
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27044)));
label_1c8de4:
    // 0x1c8de4: 0xc070080  jal         func_1C0200
label_1c8de8:
    if (ctx->pc == 0x1C8DE8u) {
        ctx->pc = 0x1C8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DE4u;
        // 0x1c8de8: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8DECu;
        goto label_1c8dec;
    }
    ctx->pc = 0x1C8DE4u;
    SET_GPR_U32(ctx, 31, 0x1C8DECu);
    ctx->pc = 0x1C8DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE4u;
    // 0x1c8de8: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C8DECu;
label_1c8dec:
    // 0x1c8dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8df0:
    // 0x1c8df0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8df4:
    // 0x1c8df4: 0xc041744  jal         func_105D10
label_1c8df8:
    if (ctx->pc == 0x1C8DF8u) {
        ctx->pc = 0x1C8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DF4u;
        // 0x1c8df8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8DFCu;
        goto label_1c8dfc;
    }
    ctx->pc = 0x1C8DF4u;
    SET_GPR_U32(ctx, 31, 0x1C8DFCu);
    ctx->pc = 0x1C8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF4u;
    // 0x1c8df8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C8DF4u, 0x1C8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DFCu;
label_1c8dfc:
    // 0x1c8dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e00:
    // 0x1c8e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e04:
    // 0x1c8e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e08:
    // 0x1c8e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e0c:
    // 0x1c8e0c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1c8e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e10:
    // 0x1c8e10: 0x240801b8  addiu       $t0, $zero, 0x1B8
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_1c8e14:
    // 0x1c8e14: 0xc0603d4  jal         func_180F50
label_1c8e18:
    if (ctx->pc == 0x1C8E18u) {
        ctx->pc = 0x1C8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E14u;
        // 0x1c8e18: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E1Cu;
        goto label_1c8e1c;
    }
    ctx->pc = 0x1C8E14u;
    SET_GPR_U32(ctx, 31, 0x1C8E1Cu);
    ctx->pc = 0x1C8E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E14u;
    // 0x1c8e18: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C8E14u, 0x1C8E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E1Cu;
label_1c8e1c:
    // 0x1c8e1c: 0xff828c40  sd          $v0, -0x73C0($gp)
    ctx->pc = 0x1c8e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U64(ctx, 2));
label_1c8e20:
    // 0x1c8e20: 0xc070038  jal         func_1C00E0
label_1c8e24:
    if (ctx->pc == 0x1C8E24u) {
        ctx->pc = 0x1C8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E20u;
        // 0x1c8e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E28u;
        goto label_1c8e28;
    }
    ctx->pc = 0x1C8E20u;
    SET_GPR_U32(ctx, 31, 0x1C8E28u);
    ctx->pc = 0x1C8E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E20u;
    // 0x1c8e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C8E28u;
label_1c8e28:
    // 0x1c8e28: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e2c:
    // 0x1c8e2c: 0x240501b9  addiu       $a1, $zero, 0x1B9
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
label_1c8e30:
    // 0x1c8e30: 0xc060578  jal         func_1815E0
label_1c8e34:
    if (ctx->pc == 0x1C8E34u) {
        ctx->pc = 0x1C8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E30u;
        // 0x1c8e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E38u;
        goto label_1c8e38;
    }
    ctx->pc = 0x1C8E30u;
    SET_GPR_U32(ctx, 31, 0x1C8E38u);
    ctx->pc = 0x1C8E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E30u;
    // 0x1c8e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E30u, 0x1C8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E38u;
label_1c8e38:
    // 0x1c8e38: 0xff828c38  sd          $v0, -0x73C8($gp)
    ctx->pc = 0x1c8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U64(ctx, 2));
label_1c8e3c:
    // 0x1c8e3c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e40:
    // 0x1c8e40: 0x240501ba  addiu       $a1, $zero, 0x1BA
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1c8e44:
    // 0x1c8e44: 0xc060578  jal         func_1815E0
label_1c8e48:
    if (ctx->pc == 0x1C8E48u) {
        ctx->pc = 0x1C8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E44u;
        // 0x1c8e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E4Cu;
        goto label_1c8e4c;
    }
    ctx->pc = 0x1C8E44u;
    SET_GPR_U32(ctx, 31, 0x1C8E4Cu);
    ctx->pc = 0x1C8E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E44u;
    // 0x1c8e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E44u, 0x1C8E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E4Cu;
label_1c8e4c:
    // 0x1c8e4c: 0xff828a10  sd          $v0, -0x75F0($gp)
    ctx->pc = 0x1c8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U64(ctx, 2));
label_1c8e50:
    // 0x1c8e50: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e54:
    // 0x1c8e54: 0x240501bb  addiu       $a1, $zero, 0x1BB
    ctx->pc = 0x1c8e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
label_1c8e58:
    // 0x1c8e58: 0xc060578  jal         func_1815E0
label_1c8e5c:
    if (ctx->pc == 0x1C8E5Cu) {
        ctx->pc = 0x1C8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E58u;
        // 0x1c8e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E60u;
        goto label_1c8e60;
    }
    ctx->pc = 0x1C8E58u;
    SET_GPR_U32(ctx, 31, 0x1C8E60u);
    ctx->pc = 0x1C8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E58u;
    // 0x1c8e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E58u, 0x1C8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E60u;
label_1c8e60:
    // 0x1c8e60: 0xff828bb8  sd          $v0, -0x7448($gp)
    ctx->pc = 0x1c8e60u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U64(ctx, 2));
label_1c8e64:
    // 0x1c8e64: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e68:
    // 0x1c8e68: 0x240501bc  addiu       $a1, $zero, 0x1BC
    ctx->pc = 0x1c8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
label_1c8e6c:
    // 0x1c8e6c: 0xc060578  jal         func_1815E0
label_1c8e70:
    if (ctx->pc == 0x1C8E70u) {
        ctx->pc = 0x1C8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E6Cu;
        // 0x1c8e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E74u;
        goto label_1c8e74;
    }
    ctx->pc = 0x1C8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E74u);
    ctx->pc = 0x1C8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E6Cu;
    // 0x1c8e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E6Cu, 0x1C8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E74u;
label_1c8e74:
    // 0x1c8e74: 0xff828be8  sd          $v0, -0x7418($gp)
    ctx->pc = 0x1c8e74u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U64(ctx, 2));
label_1c8e78:
    // 0x1c8e78: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e7c:
    // 0x1c8e7c: 0x240501bd  addiu       $a1, $zero, 0x1BD
    ctx->pc = 0x1c8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 445));
label_1c8e80:
    // 0x1c8e80: 0xc060578  jal         func_1815E0
label_1c8e84:
    if (ctx->pc == 0x1C8E84u) {
        ctx->pc = 0x1C8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E80u;
        // 0x1c8e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E88u;
        goto label_1c8e88;
    }
    ctx->pc = 0x1C8E80u;
    SET_GPR_U32(ctx, 31, 0x1C8E88u);
    ctx->pc = 0x1C8E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E80u;
    // 0x1c8e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E80u, 0x1C8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E88u;
label_1c8e88:
    // 0x1c8e88: 0xff828bd8  sd          $v0, -0x7428($gp)
    ctx->pc = 0x1c8e88u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U64(ctx, 2));
label_1c8e8c:
    // 0x1c8e8c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8e90:
    // 0x1c8e90: 0x240501be  addiu       $a1, $zero, 0x1BE
    ctx->pc = 0x1c8e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
label_1c8e94:
    // 0x1c8e94: 0xc060578  jal         func_1815E0
label_1c8e98:
    if (ctx->pc == 0x1C8E98u) {
        ctx->pc = 0x1C8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E94u;
        // 0x1c8e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8E9Cu;
        goto label_1c8e9c;
    }
    ctx->pc = 0x1C8E94u;
    SET_GPR_U32(ctx, 31, 0x1C8E9Cu);
    ctx->pc = 0x1C8E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E94u;
    // 0x1c8e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8E94u, 0x1C8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E9Cu;
label_1c8e9c:
    // 0x1c8e9c: 0xff828bc8  sd          $v0, -0x7438($gp)
    ctx->pc = 0x1c8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937544), GPR_U64(ctx, 2));
label_1c8ea0:
    // 0x1c8ea0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ea4:
    // 0x1c8ea4: 0x240501bf  addiu       $a1, $zero, 0x1BF
    ctx->pc = 0x1c8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
label_1c8ea8:
    // 0x1c8ea8: 0xc060578  jal         func_1815E0
label_1c8eac:
    if (ctx->pc == 0x1C8EACu) {
        ctx->pc = 0x1C8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA8u;
        // 0x1c8eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8EB0u;
        goto label_1c8eb0;
    }
    ctx->pc = 0x1C8EA8u;
    SET_GPR_U32(ctx, 31, 0x1C8EB0u);
    ctx->pc = 0x1C8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EA8u;
    // 0x1c8eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EA8u, 0x1C8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB0u;
label_1c8eb0:
    // 0x1c8eb0: 0xff828b78  sd          $v0, -0x7488($gp)
    ctx->pc = 0x1c8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U64(ctx, 2));
label_1c8eb4:
    // 0x1c8eb4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8eb8:
    // 0x1c8eb8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1c8eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1c8ebc:
    // 0x1c8ebc: 0xc060578  jal         func_1815E0
label_1c8ec0:
    if (ctx->pc == 0x1C8EC0u) {
        ctx->pc = 0x1C8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EBCu;
        // 0x1c8ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8EC4u;
        goto label_1c8ec4;
    }
    ctx->pc = 0x1C8EBCu;
    SET_GPR_U32(ctx, 31, 0x1C8EC4u);
    ctx->pc = 0x1C8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBCu;
    // 0x1c8ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EBCu, 0x1C8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC4u;
label_1c8ec4:
    // 0x1c8ec4: 0xff828b70  sd          $v0, -0x7490($gp)
    ctx->pc = 0x1c8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U64(ctx, 2));
label_1c8ec8:
    // 0x1c8ec8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ecc:
    // 0x1c8ecc: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x1c8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
label_1c8ed0:
    // 0x1c8ed0: 0xc060578  jal         func_1815E0
label_1c8ed4:
    if (ctx->pc == 0x1C8ED4u) {
        ctx->pc = 0x1C8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ED0u;
        // 0x1c8ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8ED8u;
        goto label_1c8ed8;
    }
    ctx->pc = 0x1C8ED0u;
    SET_GPR_U32(ctx, 31, 0x1C8ED8u);
    ctx->pc = 0x1C8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED0u;
    // 0x1c8ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8ED0u, 0x1C8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED8u;
label_1c8ed8:
    // 0x1c8ed8: 0xff828b68  sd          $v0, -0x7498($gp)
    ctx->pc = 0x1c8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U64(ctx, 2));
label_1c8edc:
    // 0x1c8edc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ee0:
    // 0x1c8ee0: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1c8ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1c8ee4:
    // 0x1c8ee4: 0xc060578  jal         func_1815E0
label_1c8ee8:
    if (ctx->pc == 0x1C8EE8u) {
        ctx->pc = 0x1C8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE4u;
        // 0x1c8ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8EECu;
        goto label_1c8eec;
    }
    ctx->pc = 0x1C8EE4u;
    SET_GPR_U32(ctx, 31, 0x1C8EECu);
    ctx->pc = 0x1C8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE4u;
    // 0x1c8ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8EE4u, 0x1C8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EECu;
label_1c8eec:
    // 0x1c8eec: 0xff828b60  sd          $v0, -0x74A0($gp)
    ctx->pc = 0x1c8eecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U64(ctx, 2));
label_1c8ef0:
    // 0x1c8ef0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1c8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1c8ef4:
    // 0x1c8ef4: 0x240501c3  addiu       $a1, $zero, 0x1C3
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
    ctx->pc = 0x1c8ef8u;
    return;
}
