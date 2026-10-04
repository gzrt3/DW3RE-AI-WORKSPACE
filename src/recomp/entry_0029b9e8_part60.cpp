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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b86d8u: goto label_2b86d8;
        case 0x2b86dcu: goto label_2b86dc;
        case 0x2b86e0u: goto label_2b86e0;
        case 0x2b86e4u: goto label_2b86e4;
        case 0x2b86e8u: goto label_2b86e8;
        case 0x2b86ecu: goto label_2b86ec;
        case 0x2b86f0u: goto label_2b86f0;
        case 0x2b86f4u: goto label_2b86f4;
        case 0x2b86f8u: goto label_2b86f8;
        case 0x2b86fcu: goto label_2b86fc;
        case 0x2b8700u: goto label_2b8700;
        case 0x2b8704u: goto label_2b8704;
        case 0x2b8708u: goto label_2b8708;
        case 0x2b870cu: goto label_2b870c;
        case 0x2b8710u: goto label_2b8710;
        case 0x2b8714u: goto label_2b8714;
        case 0x2b8718u: goto label_2b8718;
        case 0x2b871cu: goto label_2b871c;
        case 0x2b8720u: goto label_2b8720;
        case 0x2b8724u: goto label_2b8724;
        case 0x2b8728u: goto label_2b8728;
        case 0x2b872cu: goto label_2b872c;
        case 0x2b8730u: goto label_2b8730;
        case 0x2b8734u: goto label_2b8734;
        case 0x2b8738u: goto label_2b8738;
        case 0x2b873cu: goto label_2b873c;
        case 0x2b8740u: goto label_2b8740;
        case 0x2b8744u: goto label_2b8744;
        case 0x2b8748u: goto label_2b8748;
        case 0x2b874cu: goto label_2b874c;
        case 0x2b8750u: goto label_2b8750;
        case 0x2b8754u: goto label_2b8754;
        case 0x2b8758u: goto label_2b8758;
        case 0x2b875cu: goto label_2b875c;
        case 0x2b8760u: goto label_2b8760;
        case 0x2b8764u: goto label_2b8764;
        case 0x2b8768u: goto label_2b8768;
        case 0x2b876cu: goto label_2b876c;
        case 0x2b8770u: goto label_2b8770;
        case 0x2b8774u: goto label_2b8774;
        case 0x2b8778u: goto label_2b8778;
        case 0x2b877cu: goto label_2b877c;
        case 0x2b8780u: goto label_2b8780;
        case 0x2b8784u: goto label_2b8784;
        case 0x2b8788u: goto label_2b8788;
        case 0x2b878cu: goto label_2b878c;
        case 0x2b8790u: goto label_2b8790;
        case 0x2b8794u: goto label_2b8794;
        case 0x2b8798u: goto label_2b8798;
        case 0x2b879cu: goto label_2b879c;
        case 0x2b87a0u: goto label_2b87a0;
        case 0x2b87a4u: goto label_2b87a4;
        case 0x2b87a8u: goto label_2b87a8;
        case 0x2b87acu: goto label_2b87ac;
        case 0x2b87b0u: goto label_2b87b0;
        case 0x2b87b4u: goto label_2b87b4;
        case 0x2b87b8u: goto label_2b87b8;
        case 0x2b87bcu: goto label_2b87bc;
        case 0x2b87c0u: goto label_2b87c0;
        case 0x2b87c4u: goto label_2b87c4;
        case 0x2b87c8u: goto label_2b87c8;
        case 0x2b87ccu: goto label_2b87cc;
        case 0x2b87d0u: goto label_2b87d0;
        case 0x2b87d4u: goto label_2b87d4;
        case 0x2b87d8u: goto label_2b87d8;
        case 0x2b87dcu: goto label_2b87dc;
        case 0x2b87e0u: goto label_2b87e0;
        case 0x2b87e4u: goto label_2b87e4;
        case 0x2b87e8u: goto label_2b87e8;
        case 0x2b87ecu: goto label_2b87ec;
        case 0x2b87f0u: goto label_2b87f0;
        case 0x2b87f4u: goto label_2b87f4;
        case 0x2b87f8u: goto label_2b87f8;
        case 0x2b87fcu: goto label_2b87fc;
        case 0x2b8800u: goto label_2b8800;
        case 0x2b8804u: goto label_2b8804;
        case 0x2b8808u: goto label_2b8808;
        case 0x2b880cu: goto label_2b880c;
        case 0x2b8810u: goto label_2b8810;
        case 0x2b8814u: goto label_2b8814;
        case 0x2b8818u: goto label_2b8818;
        case 0x2b881cu: goto label_2b881c;
        case 0x2b8820u: goto label_2b8820;
        case 0x2b8824u: goto label_2b8824;
        case 0x2b8828u: goto label_2b8828;
        case 0x2b882cu: goto label_2b882c;
        case 0x2b8830u: goto label_2b8830;
        case 0x2b8834u: goto label_2b8834;
        case 0x2b8838u: goto label_2b8838;
        case 0x2b883cu: goto label_2b883c;
        case 0x2b8840u: goto label_2b8840;
        case 0x2b8844u: goto label_2b8844;
        case 0x2b8848u: goto label_2b8848;
        case 0x2b884cu: goto label_2b884c;
        case 0x2b8850u: goto label_2b8850;
        case 0x2b8854u: goto label_2b8854;
        case 0x2b8858u: goto label_2b8858;
        case 0x2b885cu: goto label_2b885c;
        case 0x2b8860u: goto label_2b8860;
        case 0x2b8864u: goto label_2b8864;
        case 0x2b8868u: goto label_2b8868;
        case 0x2b886cu: goto label_2b886c;
        case 0x2b8870u: goto label_2b8870;
        case 0x2b8874u: goto label_2b8874;
        case 0x2b8878u: goto label_2b8878;
        case 0x2b887cu: goto label_2b887c;
        case 0x2b8880u: goto label_2b8880;
        case 0x2b8884u: goto label_2b8884;
        case 0x2b8888u: goto label_2b8888;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b8890u: goto label_2b8890;
        case 0x2b8894u: goto label_2b8894;
        case 0x2b8898u: goto label_2b8898;
        case 0x2b889cu: goto label_2b889c;
        case 0x2b88a0u: goto label_2b88a0;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88acu: goto label_2b88ac;
        case 0x2b88b0u: goto label_2b88b0;
        case 0x2b88b4u: goto label_2b88b4;
        case 0x2b88b8u: goto label_2b88b8;
        case 0x2b88bcu: goto label_2b88bc;
        case 0x2b88c0u: goto label_2b88c0;
        case 0x2b88c4u: goto label_2b88c4;
        case 0x2b88c8u: goto label_2b88c8;
        case 0x2b88ccu: goto label_2b88cc;
        case 0x2b88d0u: goto label_2b88d0;
        case 0x2b88d4u: goto label_2b88d4;
        case 0x2b88d8u: goto label_2b88d8;
        case 0x2b88dcu: goto label_2b88dc;
        case 0x2b88e0u: goto label_2b88e0;
        case 0x2b88e4u: goto label_2b88e4;
        case 0x2b88e8u: goto label_2b88e8;
        case 0x2b88ecu: goto label_2b88ec;
        case 0x2b88f0u: goto label_2b88f0;
        case 0x2b88f4u: goto label_2b88f4;
        case 0x2b88f8u: goto label_2b88f8;
        case 0x2b88fcu: goto label_2b88fc;
        case 0x2b8900u: goto label_2b8900;
        case 0x2b8904u: goto label_2b8904;
        case 0x2b8908u: goto label_2b8908;
        case 0x2b890cu: goto label_2b890c;
        case 0x2b8910u: goto label_2b8910;
        case 0x2b8914u: goto label_2b8914;
        case 0x2b8918u: goto label_2b8918;
        case 0x2b891cu: goto label_2b891c;
        case 0x2b8920u: goto label_2b8920;
        case 0x2b8924u: goto label_2b8924;
        case 0x2b8928u: goto label_2b8928;
        case 0x2b892cu: goto label_2b892c;
        case 0x2b8930u: goto label_2b8930;
        case 0x2b8934u: goto label_2b8934;
        case 0x2b8938u: goto label_2b8938;
        case 0x2b893cu: goto label_2b893c;
        case 0x2b8940u: goto label_2b8940;
        case 0x2b8944u: goto label_2b8944;
        case 0x2b8948u: goto label_2b8948;
        case 0x2b894cu: goto label_2b894c;
        case 0x2b8950u: goto label_2b8950;
        case 0x2b8954u: goto label_2b8954;
        case 0x2b8958u: goto label_2b8958;
        case 0x2b895cu: goto label_2b895c;
        case 0x2b8960u: goto label_2b8960;
        case 0x2b8964u: goto label_2b8964;
        case 0x2b8968u: goto label_2b8968;
        case 0x2b896cu: goto label_2b896c;
        case 0x2b8970u: goto label_2b8970;
        case 0x2b8974u: goto label_2b8974;
        case 0x2b8978u: goto label_2b8978;
        case 0x2b897cu: goto label_2b897c;
        case 0x2b8980u: goto label_2b8980;
        case 0x2b8984u: goto label_2b8984;
        case 0x2b8988u: goto label_2b8988;
        case 0x2b898cu: goto label_2b898c;
        case 0x2b8990u: goto label_2b8990;
        case 0x2b8994u: goto label_2b8994;
        case 0x2b8998u: goto label_2b8998;
        case 0x2b899cu: goto label_2b899c;
        case 0x2b89a0u: goto label_2b89a0;
        case 0x2b89a4u: goto label_2b89a4;
        case 0x2b89a8u: goto label_2b89a8;
        case 0x2b89acu: goto label_2b89ac;
        case 0x2b89b0u: goto label_2b89b0;
        case 0x2b89b4u: goto label_2b89b4;
        case 0x2b89b8u: goto label_2b89b8;
        case 0x2b89bcu: goto label_2b89bc;
        case 0x2b89c0u: goto label_2b89c0;
        case 0x2b89c4u: goto label_2b89c4;
        case 0x2b89c8u: goto label_2b89c8;
        case 0x2b89ccu: goto label_2b89cc;
        case 0x2b89d0u: goto label_2b89d0;
        case 0x2b89d4u: goto label_2b89d4;
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89dcu: goto label_2b89dc;
        case 0x2b89e0u: goto label_2b89e0;
        case 0x2b89e4u: goto label_2b89e4;
        case 0x2b89e8u: goto label_2b89e8;
        case 0x2b89ecu: goto label_2b89ec;
        case 0x2b89f0u: goto label_2b89f0;
        case 0x2b89f4u: goto label_2b89f4;
        case 0x2b89f8u: goto label_2b89f8;
        case 0x2b89fcu: goto label_2b89fc;
        case 0x2b8a00u: goto label_2b8a00;
        case 0x2b8a04u: goto label_2b8a04;
        case 0x2b8a08u: goto label_2b8a08;
        case 0x2b8a0cu: goto label_2b8a0c;
        case 0x2b8a10u: goto label_2b8a10;
        case 0x2b8a14u: goto label_2b8a14;
        case 0x2b8a18u: goto label_2b8a18;
        case 0x2b8a1cu: goto label_2b8a1c;
        case 0x2b8a20u: goto label_2b8a20;
        case 0x2b8a24u: goto label_2b8a24;
        case 0x2b8a28u: goto label_2b8a28;
        case 0x2b8a2cu: goto label_2b8a2c;
        case 0x2b8a30u: goto label_2b8a30;
        case 0x2b8a34u: goto label_2b8a34;
        case 0x2b8a38u: goto label_2b8a38;
        case 0x2b8a3cu: goto label_2b8a3c;
        case 0x2b8a40u: goto label_2b8a40;
        case 0x2b8a44u: goto label_2b8a44;
        case 0x2b8a48u: goto label_2b8a48;
        case 0x2b8a4cu: goto label_2b8a4c;
        case 0x2b8a50u: goto label_2b8a50;
        case 0x2b8a54u: goto label_2b8a54;
        case 0x2b8a58u: goto label_2b8a58;
        case 0x2b8a5cu: goto label_2b8a5c;
        case 0x2b8a60u: goto label_2b8a60;
        case 0x2b8a64u: goto label_2b8a64;
        case 0x2b8a68u: goto label_2b8a68;
        case 0x2b8a6cu: goto label_2b8a6c;
        case 0x2b8a70u: goto label_2b8a70;
        case 0x2b8a74u: goto label_2b8a74;
        case 0x2b8a78u: goto label_2b8a78;
        case 0x2b8a7cu: goto label_2b8a7c;
        case 0x2b8a80u: goto label_2b8a80;
        case 0x2b8a84u: goto label_2b8a84;
        case 0x2b8a88u: goto label_2b8a88;
        case 0x2b8a8cu: goto label_2b8a8c;
        case 0x2b8a90u: goto label_2b8a90;
        case 0x2b8a94u: goto label_2b8a94;
        case 0x2b8a98u: goto label_2b8a98;
        case 0x2b8a9cu: goto label_2b8a9c;
        case 0x2b8aa0u: goto label_2b8aa0;
        case 0x2b8aa4u: goto label_2b8aa4;
        case 0x2b8aa8u: goto label_2b8aa8;
        case 0x2b8aacu: goto label_2b8aac;
        case 0x2b8ab0u: goto label_2b8ab0;
        case 0x2b8ab4u: goto label_2b8ab4;
        case 0x2b8ab8u: goto label_2b8ab8;
        case 0x2b8abcu: goto label_2b8abc;
        case 0x2b8ac0u: goto label_2b8ac0;
        case 0x2b8ac4u: goto label_2b8ac4;
        case 0x2b8ac8u: goto label_2b8ac8;
        case 0x2b8accu: goto label_2b8acc;
        case 0x2b8ad0u: goto label_2b8ad0;
        case 0x2b8ad4u: goto label_2b8ad4;
        case 0x2b8ad8u: goto label_2b8ad8;
        case 0x2b8adcu: goto label_2b8adc;
        case 0x2b8ae0u: goto label_2b8ae0;
        case 0x2b8ae4u: goto label_2b8ae4;
        case 0x2b8ae8u: goto label_2b8ae8;
        case 0x2b8aecu: goto label_2b8aec;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8af4u: goto label_2b8af4;
        case 0x2b8af8u: goto label_2b8af8;
        case 0x2b8afcu: goto label_2b8afc;
        case 0x2b8b00u: goto label_2b8b00;
        case 0x2b8b04u: goto label_2b8b04;
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b0cu: goto label_2b8b0c;
        case 0x2b8b10u: goto label_2b8b10;
        case 0x2b8b14u: goto label_2b8b14;
        case 0x2b8b18u: goto label_2b8b18;
        case 0x2b8b1cu: goto label_2b8b1c;
        case 0x2b8b20u: goto label_2b8b20;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b28u: goto label_2b8b28;
        case 0x2b8b2cu: goto label_2b8b2c;
        case 0x2b8b30u: goto label_2b8b30;
        case 0x2b8b34u: goto label_2b8b34;
        case 0x2b8b38u: goto label_2b8b38;
        case 0x2b8b3cu: goto label_2b8b3c;
        case 0x2b8b40u: goto label_2b8b40;
        case 0x2b8b44u: goto label_2b8b44;
        case 0x2b8b48u: goto label_2b8b48;
        case 0x2b8b4cu: goto label_2b8b4c;
        case 0x2b8b50u: goto label_2b8b50;
        case 0x2b8b54u: goto label_2b8b54;
        case 0x2b8b58u: goto label_2b8b58;
        case 0x2b8b5cu: goto label_2b8b5c;
        case 0x2b8b60u: goto label_2b8b60;
        case 0x2b8b64u: goto label_2b8b64;
        case 0x2b8b68u: goto label_2b8b68;
        case 0x2b8b6cu: goto label_2b8b6c;
        case 0x2b8b70u: goto label_2b8b70;
        case 0x2b8b74u: goto label_2b8b74;
        case 0x2b8b78u: goto label_2b8b78;
        case 0x2b8b7cu: goto label_2b8b7c;
        case 0x2b8b80u: goto label_2b8b80;
        case 0x2b8b84u: goto label_2b8b84;
        case 0x2b8b88u: goto label_2b8b88;
        case 0x2b8b8cu: goto label_2b8b8c;
        case 0x2b8b90u: goto label_2b8b90;
        case 0x2b8b94u: goto label_2b8b94;
        case 0x2b8b98u: goto label_2b8b98;
        case 0x2b8b9cu: goto label_2b8b9c;
        case 0x2b8ba0u: goto label_2b8ba0;
        case 0x2b8ba4u: goto label_2b8ba4;
        case 0x2b8ba8u: goto label_2b8ba8;
        case 0x2b8bacu: goto label_2b8bac;
        case 0x2b8bb0u: goto label_2b8bb0;
        case 0x2b8bb4u: goto label_2b8bb4;
        case 0x2b8bb8u: goto label_2b8bb8;
        case 0x2b8bbcu: goto label_2b8bbc;
        case 0x2b8bc0u: goto label_2b8bc0;
        case 0x2b8bc4u: goto label_2b8bc4;
        case 0x2b8bc8u: goto label_2b8bc8;
        case 0x2b8bccu: goto label_2b8bcc;
        case 0x2b8bd0u: goto label_2b8bd0;
        case 0x2b8bd4u: goto label_2b8bd4;
        case 0x2b8bd8u: goto label_2b8bd8;
        case 0x2b8bdcu: goto label_2b8bdc;
        case 0x2b8be0u: goto label_2b8be0;
        case 0x2b8be4u: goto label_2b8be4;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8becu: goto label_2b8bec;
        case 0x2b8bf0u: goto label_2b8bf0;
        case 0x2b8bf4u: goto label_2b8bf4;
        case 0x2b8bf8u: goto label_2b8bf8;
        case 0x2b8bfcu: goto label_2b8bfc;
        case 0x2b8c00u: goto label_2b8c00;
        case 0x2b8c04u: goto label_2b8c04;
        case 0x2b8c08u: goto label_2b8c08;
        case 0x2b8c0cu: goto label_2b8c0c;
        case 0x2b8c10u: goto label_2b8c10;
        case 0x2b8c14u: goto label_2b8c14;
        case 0x2b8c18u: goto label_2b8c18;
        case 0x2b8c1cu: goto label_2b8c1c;
        case 0x2b8c20u: goto label_2b8c20;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c28u: goto label_2b8c28;
        case 0x2b8c2cu: goto label_2b8c2c;
        case 0x2b8c30u: goto label_2b8c30;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c38u: goto label_2b8c38;
        case 0x2b8c3cu: goto label_2b8c3c;
        case 0x2b8c40u: goto label_2b8c40;
        case 0x2b8c44u: goto label_2b8c44;
        case 0x2b8c48u: goto label_2b8c48;
        case 0x2b8c4cu: goto label_2b8c4c;
        case 0x2b8c50u: goto label_2b8c50;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c58u: goto label_2b8c58;
        case 0x2b8c5cu: goto label_2b8c5c;
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c64u: goto label_2b8c64;
        case 0x2b8c68u: goto label_2b8c68;
        case 0x2b8c6cu: goto label_2b8c6c;
        case 0x2b8c70u: goto label_2b8c70;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c78u: goto label_2b8c78;
        case 0x2b8c7cu: goto label_2b8c7c;
        case 0x2b8c80u: goto label_2b8c80;
        case 0x2b8c84u: goto label_2b8c84;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c8cu: goto label_2b8c8c;
        case 0x2b8c90u: goto label_2b8c90;
        case 0x2b8c94u: goto label_2b8c94;
        case 0x2b8c98u: goto label_2b8c98;
        case 0x2b8c9cu: goto label_2b8c9c;
        case 0x2b8ca0u: goto label_2b8ca0;
        case 0x2b8ca4u: goto label_2b8ca4;
        case 0x2b8ca8u: goto label_2b8ca8;
        case 0x2b8cacu: goto label_2b8cac;
        case 0x2b8cb0u: goto label_2b8cb0;
        case 0x2b8cb4u: goto label_2b8cb4;
        case 0x2b8cb8u: goto label_2b8cb8;
        case 0x2b8cbcu: goto label_2b8cbc;
        case 0x2b8cc0u: goto label_2b8cc0;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cc8u: goto label_2b8cc8;
        case 0x2b8cccu: goto label_2b8ccc;
        case 0x2b8cd0u: goto label_2b8cd0;
        case 0x2b8cd4u: goto label_2b8cd4;
        case 0x2b8cd8u: goto label_2b8cd8;
        case 0x2b8cdcu: goto label_2b8cdc;
        case 0x2b8ce0u: goto label_2b8ce0;
        case 0x2b8ce4u: goto label_2b8ce4;
        case 0x2b8ce8u: goto label_2b8ce8;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8cf0u: goto label_2b8cf0;
        case 0x2b8cf4u: goto label_2b8cf4;
        case 0x2b8cf8u: goto label_2b8cf8;
        case 0x2b8cfcu: goto label_2b8cfc;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d04u: goto label_2b8d04;
        case 0x2b8d08u: goto label_2b8d08;
        case 0x2b8d0cu: goto label_2b8d0c;
        case 0x2b8d10u: goto label_2b8d10;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d18u: goto label_2b8d18;
        case 0x2b8d1cu: goto label_2b8d1c;
        case 0x2b8d20u: goto label_2b8d20;
        case 0x2b8d24u: goto label_2b8d24;
        case 0x2b8d28u: goto label_2b8d28;
        case 0x2b8d2cu: goto label_2b8d2c;
        case 0x2b8d30u: goto label_2b8d30;
        case 0x2b8d34u: goto label_2b8d34;
        case 0x2b8d38u: goto label_2b8d38;
        case 0x2b8d3cu: goto label_2b8d3c;
        case 0x2b8d40u: goto label_2b8d40;
        case 0x2b8d44u: goto label_2b8d44;
        case 0x2b8d48u: goto label_2b8d48;
        case 0x2b8d4cu: goto label_2b8d4c;
        case 0x2b8d50u: goto label_2b8d50;
        case 0x2b8d54u: goto label_2b8d54;
        case 0x2b8d58u: goto label_2b8d58;
        case 0x2b8d5cu: goto label_2b8d5c;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d64u: goto label_2b8d64;
        case 0x2b8d68u: goto label_2b8d68;
        case 0x2b8d6cu: goto label_2b8d6c;
        case 0x2b8d70u: goto label_2b8d70;
        case 0x2b8d74u: goto label_2b8d74;
        case 0x2b8d78u: goto label_2b8d78;
        case 0x2b8d7cu: goto label_2b8d7c;
        case 0x2b8d80u: goto label_2b8d80;
        case 0x2b8d84u: goto label_2b8d84;
        case 0x2b8d88u: goto label_2b8d88;
        case 0x2b8d8cu: goto label_2b8d8c;
        case 0x2b8d90u: goto label_2b8d90;
        case 0x2b8d94u: goto label_2b8d94;
        case 0x2b8d98u: goto label_2b8d98;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8da0u: goto label_2b8da0;
        case 0x2b8da4u: goto label_2b8da4;
        case 0x2b8da8u: goto label_2b8da8;
        case 0x2b8dacu: goto label_2b8dac;
        case 0x2b8db0u: goto label_2b8db0;
        case 0x2b8db4u: goto label_2b8db4;
        case 0x2b8db8u: goto label_2b8db8;
        case 0x2b8dbcu: goto label_2b8dbc;
        case 0x2b8dc0u: goto label_2b8dc0;
        case 0x2b8dc4u: goto label_2b8dc4;
        case 0x2b8dc8u: goto label_2b8dc8;
        case 0x2b8dccu: goto label_2b8dcc;
        case 0x2b8dd0u: goto label_2b8dd0;
        case 0x2b8dd4u: goto label_2b8dd4;
        case 0x2b8dd8u: goto label_2b8dd8;
        case 0x2b8ddcu: goto label_2b8ddc;
        case 0x2b8de0u: goto label_2b8de0;
        case 0x2b8de4u: goto label_2b8de4;
        case 0x2b8de8u: goto label_2b8de8;
        case 0x2b8decu: goto label_2b8dec;
        case 0x2b8df0u: goto label_2b8df0;
        case 0x2b8df4u: goto label_2b8df4;
        case 0x2b8df8u: goto label_2b8df8;
        case 0x2b8dfcu: goto label_2b8dfc;
        case 0x2b8e00u: goto label_2b8e00;
        case 0x2b8e04u: goto label_2b8e04;
        case 0x2b8e08u: goto label_2b8e08;
        case 0x2b8e0cu: goto label_2b8e0c;
        case 0x2b8e10u: goto label_2b8e10;
        case 0x2b8e14u: goto label_2b8e14;
        case 0x2b8e18u: goto label_2b8e18;
        case 0x2b8e1cu: goto label_2b8e1c;
        case 0x2b8e20u: goto label_2b8e20;
        case 0x2b8e24u: goto label_2b8e24;
        case 0x2b8e28u: goto label_2b8e28;
        case 0x2b8e2cu: goto label_2b8e2c;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e34u: goto label_2b8e34;
        case 0x2b8e38u: goto label_2b8e38;
        case 0x2b8e3cu: goto label_2b8e3c;
        case 0x2b8e40u: goto label_2b8e40;
        case 0x2b8e44u: goto label_2b8e44;
        case 0x2b8e48u: goto label_2b8e48;
        case 0x2b8e4cu: goto label_2b8e4c;
        case 0x2b8e50u: goto label_2b8e50;
        case 0x2b8e54u: goto label_2b8e54;
        case 0x2b8e58u: goto label_2b8e58;
        case 0x2b8e5cu: goto label_2b8e5c;
        case 0x2b8e60u: goto label_2b8e60;
        case 0x2b8e64u: goto label_2b8e64;
        case 0x2b8e68u: goto label_2b8e68;
        case 0x2b8e6cu: goto label_2b8e6c;
        case 0x2b8e70u: goto label_2b8e70;
        case 0x2b8e74u: goto label_2b8e74;
        case 0x2b8e78u: goto label_2b8e78;
        case 0x2b8e7cu: goto label_2b8e7c;
        case 0x2b8e80u: goto label_2b8e80;
        case 0x2b8e84u: goto label_2b8e84;
        case 0x2b8e88u: goto label_2b8e88;
        case 0x2b8e8cu: goto label_2b8e8c;
        case 0x2b8e90u: goto label_2b8e90;
        case 0x2b8e94u: goto label_2b8e94;
        case 0x2b8e98u: goto label_2b8e98;
        case 0x2b8e9cu: goto label_2b8e9c;
        case 0x2b8ea0u: goto label_2b8ea0;
        case 0x2b8ea4u: goto label_2b8ea4;
        default: return;
    }

label_2b86d8:
    // 0x2b86d8: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b86d8u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b86dc:
    // 0x2b86dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86e0:
    // 0x2b86e0: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b86e0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b86e4:
    // 0x2b86e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86e8:
    // 0x2b86e8: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b86e8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b86ec:
    // 0x2b86ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86f0:
    // 0x2b86f0: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b86f0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b86f4:
    // 0x2b86f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86f8:
    // 0x2b86f8: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2b86f8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b86fc:
    // 0x2b86fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8700:
    // 0x2b8700: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b8704:
    if (ctx->pc == 0x2B8704u) {
        ctx->pc = 0x2B8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8700u;
        // 0x2b8704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8708u;
        goto label_2b8708;
    }
    ctx->pc = 0x2B8700u;
    {
        const bool branch_taken_0x2b8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8700u;
        // 0x2b8704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8700) {
            ctx->pc = 0x2D4708u;
            return;
        }
    }
    ctx->pc = 0x2B8708u;
label_2b8708:
    // 0x2b8708: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2b8708u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b870c:
    // 0x2b870c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b870cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8710:
    // 0x2b8710: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2b8710u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b8714:
    // 0x2b8714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8718:
    // 0x2b8718: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b871c:
    // 0x2b871c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b871cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8720:
    // 0x2b8720: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b8724:
    // 0x2b8724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8728:
    // 0x2b8728: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b872c:
    if (ctx->pc == 0x2B872Cu) {
        ctx->pc = 0x2B872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8728u;
        // 0x2b872c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8730u;
        goto label_2b8730;
    }
    ctx->pc = 0x2B8728u;
    {
        const bool branch_taken_0x2b8728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8728u;
        // 0x2b872c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8728) {
            ctx->pc = 0x2D4730u;
            return;
        }
    }
    ctx->pc = 0x2B8730u;
label_2b8730:
    // 0x2b8730: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b8734:
    // 0x2b8734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8738:
    // 0x2b8738: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2b8738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b873c:
    // 0x2b873c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b873cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8740:
    // 0x2b8740: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2b8740u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b8744:
    // 0x2b8744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8748:
    // 0x2b8748: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2b8748u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b874c:
    // 0x2b874c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b874cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8750:
    // 0x2b8750: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b8754:
    if (ctx->pc == 0x2B8754u) {
        ctx->pc = 0x2B8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8750u;
        // 0x2b8754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8758u;
        goto label_2b8758;
    }
    ctx->pc = 0x2B8750u;
    {
        const bool branch_taken_0x2b8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8750u;
        // 0x2b8754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8750) {
            ctx->pc = 0x2D4758u;
            return;
        }
    }
    ctx->pc = 0x2B8758u;
label_2b8758:
    // 0x2b8758: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2b8758u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b875c:
    // 0x2b875c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b875cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8760:
    // 0x2b8760: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2b8760u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b8764:
    // 0x2b8764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8768:
    // 0x2b8768: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2b8768u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b876c:
    // 0x2b876c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b876cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8770:
    // 0x2b8770: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b8774:
    // 0x2b8774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8778:
    // 0x2b8778: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2b8778u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b877c:
    // 0x2b877c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b877cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8780:
    // 0x2b8780: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8780u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8780 raw=0x48000800");
 /* MITIGATED */
label_2b8784:
    // 0x2b8784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8788:
    // 0x2b8788: 0x0  nop
    ctx->pc = 0x2b8788u;
    // NOP
label_2b878c:
    // 0x2b878c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2b878cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2b8790:
    // 0x2b8790: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8790u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8794:
    // 0x2b8794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8798:
    // 0x2b8798: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b879c:
    if (ctx->pc == 0x2B879Cu) {
        ctx->pc = 0x2B879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8798u;
        // 0x2b879c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87A0u;
        goto label_2b87a0;
    }
    ctx->pc = 0x2B8798u;
    {
        const bool branch_taken_0x2b8798 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8798u;
        // 0x2b879c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8798) {
            ctx->pc = 0x2BA798u;
            { ctx->pc = 0x2ba798; return; }
        }
    }
    ctx->pc = 0x2B87A0u;
label_2b87a0:
    // 0x2b87a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b87a4:
    if (ctx->pc == 0x2B87A4u) {
        ctx->pc = 0x2B87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87A0u;
        // 0x2b87a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87A8u;
        goto label_2b87a8;
    }
    ctx->pc = 0x2B87A0u;
    {
        const bool branch_taken_0x2b87a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87A0u;
        // 0x2b87a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87a0) {
            ctx->pc = 0x2CE7A8u;
            return;
        }
    }
    ctx->pc = 0x2B87A8u;
label_2b87a8:
    // 0x2b87a8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b87a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b87ac:
    // 0x2b87ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87b0:
    // 0x2b87b0: 0x10050004  beq         $zero, $a1, . + 4 + (0x4 << 2)
label_2b87b4:
    if (ctx->pc == 0x2B87B4u) {
        ctx->pc = 0x2B87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87B0u;
        // 0x2b87b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87B8u;
        goto label_2b87b8;
    }
    ctx->pc = 0x2B87B0u;
    {
        const bool branch_taken_0x2b87b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87B0u;
        // 0x2b87b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87b0) {
            ctx->pc = 0x2B87C4u;
            goto label_2b87c4;
        }
    }
    ctx->pc = 0x2B87B8u;
label_2b87b8:
    // 0x2b87b8: 0x800b2af0  lb          $t3, 0x2AF0($zero)
    ctx->pc = 0x2b87b8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2AF0u));
label_2b87bc:
    // 0x2b87bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87c0:
    // 0x2b87c0: 0xb0b1000  j           func_C2C4000
label_2b87c4:
    if (ctx->pc == 0x2B87C4u) {
        ctx->pc = 0x2B87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87C0u;
        // 0x2b87c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87C8u;
        goto label_2b87c8;
    }
    ctx->pc = 0x2B87C0u;
    ctx->pc = 0x2B87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87C0u;
    // 0x2b87c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B87C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B87C8u;
label_2b87c8:
    // 0x2b87c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87cc:
    // 0x2b87cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87d0:
    // 0x2b87d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87d4:
    // 0x2b87d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87d8:
    // 0x2b87d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87dc:
    // 0x2b87dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87e0:
    // 0x2b87e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b87e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b87e4:
    // 0x2b87e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87e8:
    // 0x2b87e8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b87e8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B87E8 raw=0x48000800");
 /* MITIGATED */
label_2b87ec:
    // 0x2b87ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87f0:
    // 0x2b87f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87f4:
    // 0x2b87f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87f8:
    // 0x2b87f8: 0x420107f3  .word       0x420107F3                   # INVALID     $s0, $at, 0x7F3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b87f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x33 at 0x2B87F8 raw=0x420107F3"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b87fc:
    // 0x2b87fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8800:
    // 0x2b8800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8804:
    // 0x2b8804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8808:
    // 0x2b8808: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2b880c:
    // 0x2b880c: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b880cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b8810:
    // 0x2b8810: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8810u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2b8814:
    // 0x2b8814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8818:
    // 0x2b8818: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2b881c:
    // 0x2b881c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b881cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8820:
    // 0x2b8820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8824:
    // 0x2b8824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8828:
    // 0x2b8828: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b8828u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b882c:
    // 0x2b882c: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b882cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2b8830:
    // 0x2b8830: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2b8834:
    if (ctx->pc == 0x2B8834u) {
        ctx->pc = 0x2B8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8830u;
        // 0x2b8834: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8838u;
        goto label_2b8838;
    }
    ctx->pc = 0x2B8830u;
    {
        const bool branch_taken_0x2b8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8830u;
        // 0x2b8834: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8830) {
            ctx->pc = 0x2B89CCu;
            goto label_2b89cc;
        }
    }
    ctx->pc = 0x2B8838u;
label_2b8838:
    // 0x2b8838: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2b883c:
    if (ctx->pc == 0x2B883Cu) {
        ctx->pc = 0x2B883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8838u;
        // 0x2b883c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8840u;
        goto label_2b8840;
    }
    ctx->pc = 0x2B8838u;
    {
        const bool branch_taken_0x2b8838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8838u;
        // 0x2b883c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8838) {
            ctx->pc = 0x2B8A54u;
            goto label_2b8a54;
        }
    }
    ctx->pc = 0x2B8840u;
label_2b8840:
    // 0x2b8840: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B8840 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8844:
    // 0x2b8844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8848:
    // 0x2b8848: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b8848u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b884c:
    // 0x2b884c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b884cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8850:
    // 0x2b8850: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b8850u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b8854:
    // 0x2b8854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8858:
    // 0x2b8858: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b8858u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b885c:
    // 0x2b885c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b885cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8860:
    // 0x2b8860: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b8860u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b8864:
    // 0x2b8864: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b8864u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b8868:
    // 0x2b8868: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b886c:
    // 0x2b886c: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b886cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b8870:
    // 0x2b8870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8874:
    // 0x2b8874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8878:
    // 0x2b8878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b887c:
    // 0x2b887c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b887cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8880:
    // 0x2b8880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8884:
    // 0x2b8884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8888:
    // 0x2b8888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b888c:
    // 0x2b888c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b888cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B888C raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8890:
    // 0x2b8890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8894:
    // 0x2b8894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8898:
    // 0x2b8898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b889c:
    // 0x2b889c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b889cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b88a0:
    // 0x2b88a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88a4:
    // 0x2b88a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b88a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b88a8:
    // 0x2b88a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88ac:
    // 0x2b88ac: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b88b0:
    // 0x2b88b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88b4:
    // 0x2b88b4: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b88b8:
    // 0x2b88b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88bc:
    // 0x2b88bc: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b88c0:
    // 0x2b88c0: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b88c0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b88c4:
    // 0x2b88c4: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b88c4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b88c8:
    // 0x2b88c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88cc:
    // 0x2b88cc: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b88d0:
    // 0x2b88d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88d4:
    // 0x2b88d4: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88d4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b88d8:
    // 0x2b88d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88dc:
    // 0x2b88dc: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b88e0:
    // 0x2b88e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88e4:
    // 0x2b88e4: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88e4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b88e8:
    // 0x2b88e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88ec:
    // 0x2b88ec: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88ecu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b88f0:
    // 0x2b88f0: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b88f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B88F0 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b88f4:
    // 0x2b88f4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b88f4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b88f8:
    // 0x2b88f8: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b88fc:
    // 0x2b88fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b88fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8900:
    // 0x2b8900: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8900u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2b8904:
    // 0x2b8904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8908:
    // 0x2b8908: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2b8908u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b890c:
    // 0x2b890c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b890cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8910:
    // 0x2b8910: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b8914:
    if (ctx->pc == 0x2B8914u) {
        ctx->pc = 0x2B8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8910u;
        // 0x2b8914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8918u;
        goto label_2b8918;
    }
    ctx->pc = 0x2B8910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2B8918u);
        ctx->pc = 0x2B8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8910u;
        // 0x2b8914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8910u, 0x2B8918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B8918u;
label_2b8918:
    // 0x2b8918: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8918u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B8918 raw=0x01F637FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b891c:
    // 0x2b891c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b891cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8920:
    // 0x2b8920: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2b8924:
    // 0x2b8924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8928:
    // 0x2b8928: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8928u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2b892c:
    // 0x2b892c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b892cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8930:
    // 0x2b8930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8934:
    // 0x2b8934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8938:
    // 0x2b8938: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8938u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b893c:
    // 0x2b893c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b893cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8940:
    // 0x2b8940: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B8940 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8944:
    // 0x2b8944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8948:
    // 0x2b8948: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b894c:
    if (ctx->pc == 0x2B894Cu) {
        ctx->pc = 0x2B894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8948u;
        // 0x2b894c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8950u;
        goto label_2b8950;
    }
    ctx->pc = 0x2B8948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8948u;
        // 0x2b894c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8950u;
label_2b8950:
    // 0x2b8950: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2b8950u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2b8954:
    // 0x2b8954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8958:
    // 0x2b8958: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b8958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b895c:
    // 0x2b895c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b895cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8960:
    // 0x2b8960: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2b8964:
    if (ctx->pc == 0x2B8964u) {
        ctx->pc = 0x2B8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8960u;
        // 0x2b8964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8968u;
        goto label_2b8968;
    }
    ctx->pc = 0x2B8960u;
    {
        const bool branch_taken_0x2b8960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8960u;
        // 0x2b8964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8960) {
            ctx->pc = 0x2B8964u;
            goto label_2b8964;
        }
    }
    ctx->pc = 0x2B8968u;
label_2b8968:
    // 0x2b8968: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2b896c:
    if (ctx->pc == 0x2B896Cu) {
        ctx->pc = 0x2B896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8968u;
        // 0x2b896c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8970u;
        goto label_2b8970;
    }
    ctx->pc = 0x2B8968u;
    {
        const bool branch_taken_0x2b8968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8968u;
        // 0x2b896c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8968) {
            ctx->pc = 0x2B89ECu;
            goto label_2b89ec;
        }
    }
    ctx->pc = 0x2B8970u;
label_2b8970:
    // 0x2b8970: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2b8974:
    if (ctx->pc == 0x2B8974u) {
        ctx->pc = 0x2B8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8970u;
        // 0x2b8974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8978u;
        goto label_2b8978;
    }
    ctx->pc = 0x2B8970u;
    {
        const bool branch_taken_0x2b8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8970u;
        // 0x2b8974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8970) {
            ctx->pc = 0x2B897Cu;
            goto label_2b897c;
        }
    }
    ctx->pc = 0x2B8978u;
label_2b8978:
    // 0x2b8978: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b897c:
    if (ctx->pc == 0x2B897Cu) {
        ctx->pc = 0x2B897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8978u;
        // 0x2b897c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8980u;
        goto label_2b8980;
    }
    ctx->pc = 0x2B8978u;
    {
        const bool branch_taken_0x2b8978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8978u;
        // 0x2b897c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8978) {
            ctx->pc = 0x2BE97Cu;
            { ctx->pc = 0x2be97c; return; }
        }
    }
    ctx->pc = 0x2B8980u;
label_2b8980:
    // 0x2b8980: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b8984:
    if (ctx->pc == 0x2B8984u) {
        ctx->pc = 0x2B8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8980u;
        // 0x2b8984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8988u;
        goto label_2b8988;
    }
    ctx->pc = 0x2B8980u;
    {
        const bool branch_taken_0x2b8980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8980u;
        // 0x2b8984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8980) {
            ctx->pc = 0x2BEA04u;
            { ctx->pc = 0x2bea04; return; }
        }
    }
    ctx->pc = 0x2B8988u;
label_2b8988:
    // 0x2b8988: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2b898c:
    if (ctx->pc == 0x2B898Cu) {
        ctx->pc = 0x2B898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8988u;
        // 0x2b898c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8990u;
        goto label_2b8990;
    }
    ctx->pc = 0x2B8988u;
    {
        const bool branch_taken_0x2b8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8988u;
        // 0x2b898c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8988) {
            ctx->pc = 0x2B8998u;
            goto label_2b8998;
        }
    }
    ctx->pc = 0x2B8990u;
label_2b8990:
    // 0x2b8990: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8994:
    if (ctx->pc == 0x2B8994u) {
        ctx->pc = 0x2B8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8990u;
        // 0x2b8994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8998u;
        goto label_2b8998;
    }
    ctx->pc = 0x2B8990u;
    {
        const bool branch_taken_0x2b8990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8990u;
        // 0x2b8994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8990) {
            ctx->pc = 0x2B8994u;
            goto label_2b8994;
        }
    }
    ctx->pc = 0x2B8998u;
label_2b8998:
    // 0x2b8998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b899c:
    // 0x2b899c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b899cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b89a0:
    // 0x2b89a0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b89a0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b89a4:
    // 0x2b89a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89a8:
    // 0x2b89a8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b89a8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b89ac:
    // 0x2b89ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89b0:
    // 0x2b89b0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b89b0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b89b4:
    // 0x2b89b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89b8:
    // 0x2b89b8: 0x42020081  .word       0x42020081                   # tlbr # 00020080 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b89b8u;
    runtime->handleTLBR(rdram, ctx);
label_2b89bc:
    // 0x2b89bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89c0:
    // 0x2b89c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b89c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b89c4:
    // 0x2b89c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89c8:
    // 0x2b89c8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b89cc:
    if (ctx->pc == 0x2B89CCu) {
        ctx->pc = 0x2B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89C8u;
        // 0x2b89cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89D0u;
        goto label_2b89d0;
    }
    ctx->pc = 0x2B89C8u;
    {
        const bool branch_taken_0x2b89c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89C8u;
        // 0x2b89cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89c8) {
            ctx->pc = 0x2CC9D0u;
            return;
        }
    }
    ctx->pc = 0x2B89D0u;
label_2b89d0:
    // 0x2b89d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b89d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b89d4:
    // 0x2b89d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89d8:
    // 0x2b89d8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b89dc:
    if (ctx->pc == 0x2B89DCu) {
        ctx->pc = 0x2B89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89D8u;
        // 0x2b89dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89E0u;
        goto label_2b89e0;
    }
    ctx->pc = 0x2B89D8u;
    {
        const bool branch_taken_0x2b89d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b89d8) {
            ctx->pc = 0x2B89DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B89D8u;
            // 0x2b89dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA9C8u;
            { ctx->pc = 0x2ba9c8; return; }
        }
    }
    ctx->pc = 0x2B89E0u;
label_2b89e0:
    // 0x2b89e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b89e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b89e4:
    // 0x2b89e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89e8:
    // 0x2b89e8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b89ec:
    if (ctx->pc == 0x2B89ECu) {
        ctx->pc = 0x2B89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89E8u;
        // 0x2b89ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B89F0u;
        goto label_2b89f0;
    }
    ctx->pc = 0x2B89E8u;
    {
        const bool branch_taken_0x2b89e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B89E8u;
        // 0x2b89ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89e8) {
            ctx->pc = 0x2BEA6Cu;
            { ctx->pc = 0x2bea6c; return; }
        }
    }
    ctx->pc = 0x2B89F0u;
label_2b89f0:
    // 0x2b89f0: 0x42020071  .word       0x42020071                   # INVALID     $s0, $v0, 0x71 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b89f0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2B89F0 raw=0x42020071"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b89f4:
    // 0x2b89f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b89f8:
    // 0x2b89f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b89f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b89fc:
    // 0x2b89fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b89fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a00:
    // 0x2b8a00: 0x500b006d  beql        $zero, $t3, . + 4 + (0x6D << 2)
label_2b8a04:
    if (ctx->pc == 0x2B8A04u) {
        ctx->pc = 0x2B8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A00u;
        // 0x2b8a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A08u;
        goto label_2b8a08;
    }
    ctx->pc = 0x2B8A00u;
    {
        const bool branch_taken_0x2b8a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8a00) {
            ctx->pc = 0x2B8A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8A00u;
            // 0x2b8a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8BB8u;
            goto label_2b8bb8;
        }
    }
    ctx->pc = 0x2B8A08u;
label_2b8a08:
    // 0x2b8a08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a0c:
    // 0x2b8a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a10:
    // 0x2b8a10: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2b8a14:
    if (ctx->pc == 0x2B8A14u) {
        ctx->pc = 0x2B8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A10u;
        // 0x2b8a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A18u;
        goto label_2b8a18;
    }
    ctx->pc = 0x2B8A10u;
    {
        const bool branch_taken_0x2b8a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A10u;
        // 0x2b8a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a10) {
            ctx->pc = 0x2B8C14u;
            goto label_2b8c14;
        }
    }
    ctx->pc = 0x2B8A18u;
label_2b8a18:
    // 0x2b8a18: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2b8a1c:
    if (ctx->pc == 0x2B8A1Cu) {
        ctx->pc = 0x2B8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A18u;
        // 0x2b8a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A20u;
        goto label_2b8a20;
    }
    ctx->pc = 0x2B8A18u;
    {
        const bool branch_taken_0x2b8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A18u;
        // 0x2b8a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a18) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B8A20u;
label_2b8a20:
    // 0x2b8a20: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b8a24:
    if (ctx->pc == 0x2B8A24u) {
        ctx->pc = 0x2B8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A20u;
        // 0x2b8a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A28u;
        goto label_2b8a28;
    }
    ctx->pc = 0x2B8A20u;
    {
        const bool branch_taken_0x2b8a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A20u;
        // 0x2b8a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a20) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B8A28u;
label_2b8a28:
    // 0x2b8a28: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8a2c:
    if (ctx->pc == 0x2B8A2Cu) {
        ctx->pc = 0x2B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A28u;
        // 0x2b8a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A30u;
        goto label_2b8a30;
    }
    ctx->pc = 0x2B8A28u;
    {
        const bool branch_taken_0x2b8a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A28u;
        // 0x2b8a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a28) {
            ctx->pc = 0x2BEAACu;
            { ctx->pc = 0x2beaac; return; }
        }
    }
    ctx->pc = 0x2B8A30u;
label_2b8a30:
    // 0x2b8a30: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b8a34:
    if (ctx->pc == 0x2B8A34u) {
        ctx->pc = 0x2B8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A30u;
        // 0x2b8a34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A38u;
        goto label_2b8a38;
    }
    ctx->pc = 0x2B8A30u;
    {
        const bool branch_taken_0x2b8a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A30u;
        // 0x2b8a34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a30) {
            ctx->pc = 0x2BEA34u;
            { ctx->pc = 0x2bea34; return; }
        }
    }
    ctx->pc = 0x2B8A38u;
label_2b8a38:
    // 0x2b8a38: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8a38u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8a3c:
    // 0x2b8a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a40:
    // 0x2b8a40: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8a44:
    if (ctx->pc == 0x2B8A44u) {
        ctx->pc = 0x2B8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A40u;
        // 0x2b8a44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A48u;
        goto label_2b8a48;
    }
    ctx->pc = 0x2B8A40u;
    {
        const bool branch_taken_0x2b8a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A40u;
        // 0x2b8a44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a40) {
            ctx->pc = 0x2B8A44u;
            goto label_2b8a44;
        }
    }
    ctx->pc = 0x2B8A48u;
label_2b8a48:
    // 0x2b8a48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a4c:
    // 0x2b8a4c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8a4cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b8a50:
    // 0x2b8a50: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8a50u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8a54:
    // 0x2b8a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a58:
    // 0x2b8a58: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8a5c:
    // 0x2b8a5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a60:
    // 0x2b8a60: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8a60u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8a64:
    // 0x2b8a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a68:
    // 0x2b8a68: 0x4202006b  .word       0x4202006B                   # INVALID     $s0, $v0, 0x6B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8a68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2B8A68 raw=0x4202006B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8a6c:
    // 0x2b8a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a70:
    // 0x2b8a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a74:
    // 0x2b8a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a78:
    // 0x2b8a78: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8a7c:
    if (ctx->pc == 0x2B8A7Cu) {
        ctx->pc = 0x2B8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A78u;
        // 0x2b8a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A80u;
        goto label_2b8a80;
    }
    ctx->pc = 0x2B8A78u;
    {
        const bool branch_taken_0x2b8a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A78u;
        // 0x2b8a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a78) {
            ctx->pc = 0x2CCA80u;
            return;
        }
    }
    ctx->pc = 0x2B8A80u;
label_2b8a80:
    // 0x2b8a80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a84:
    // 0x2b8a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a88:
    // 0x2b8a88: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8a8c:
    if (ctx->pc == 0x2B8A8Cu) {
        ctx->pc = 0x2B8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A88u;
        // 0x2b8a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A90u;
        goto label_2b8a90;
    }
    ctx->pc = 0x2B8A88u;
    {
        const bool branch_taken_0x2b8a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8a88) {
            ctx->pc = 0x2B8A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8A88u;
            // 0x2b8a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA78u;
            { ctx->pc = 0x2baa78; return; }
        }
    }
    ctx->pc = 0x2B8A90u;
label_2b8a90:
    // 0x2b8a90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a94:
    // 0x2b8a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a98:
    // 0x2b8a98: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8a9c:
    if (ctx->pc == 0x2B8A9Cu) {
        ctx->pc = 0x2B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A98u;
        // 0x2b8a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AA0u;
        goto label_2b8aa0;
    }
    ctx->pc = 0x2B8A98u;
    {
        const bool branch_taken_0x2b8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A98u;
        // 0x2b8a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a98) {
            ctx->pc = 0x2BEA9Cu;
            { ctx->pc = 0x2bea9c; return; }
        }
    }
    ctx->pc = 0x2B8AA0u;
label_2b8aa0:
    // 0x2b8aa0: 0x4202005b  .word       0x4202005B                   # INVALID     $s0, $v0, 0x5B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8aa0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2B8AA0 raw=0x4202005B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8aa4:
    // 0x2b8aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8aa8:
    // 0x2b8aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8aac:
    // 0x2b8aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ab0:
    // 0x2b8ab0: 0x500b0057  beql        $zero, $t3, . + 4 + (0x57 << 2)
label_2b8ab4:
    if (ctx->pc == 0x2B8AB4u) {
        ctx->pc = 0x2B8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AB0u;
        // 0x2b8ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AB8u;
        goto label_2b8ab8;
    }
    ctx->pc = 0x2B8AB0u;
    {
        const bool branch_taken_0x2b8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8ab0) {
            ctx->pc = 0x2B8AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8AB0u;
            // 0x2b8ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8C10u;
            goto label_2b8c10;
        }
    }
    ctx->pc = 0x2B8AB8u;
label_2b8ab8:
    // 0x2b8ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8abc:
    // 0x2b8abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ac0:
    // 0x2b8ac0: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2b8ac4:
    if (ctx->pc == 0x2B8AC4u) {
        ctx->pc = 0x2B8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC0u;
        // 0x2b8ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AC8u;
        goto label_2b8ac8;
    }
    ctx->pc = 0x2B8AC0u;
    {
        const bool branch_taken_0x2b8ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC0u;
        // 0x2b8ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ac0) {
            ctx->pc = 0x2B8BC4u;
            goto label_2b8bc4;
        }
    }
    ctx->pc = 0x2B8AC8u;
label_2b8ac8:
    // 0x2b8ac8: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2b8acc:
    if (ctx->pc == 0x2B8ACCu) {
        ctx->pc = 0x2B8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC8u;
        // 0x2b8acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AD0u;
        goto label_2b8ad0;
    }
    ctx->pc = 0x2B8AC8u;
    {
        const bool branch_taken_0x2b8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC8u;
        // 0x2b8acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ac8) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B8AD0u;
label_2b8ad0:
    // 0x2b8ad0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b8ad4:
    if (ctx->pc == 0x2B8AD4u) {
        ctx->pc = 0x2B8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD0u;
        // 0x2b8ad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AD8u;
        goto label_2b8ad8;
    }
    ctx->pc = 0x2B8AD0u;
    {
        const bool branch_taken_0x2b8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD0u;
        // 0x2b8ad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ad0) {
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B8AD8u;
label_2b8ad8:
    // 0x2b8ad8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8adc:
    if (ctx->pc == 0x2B8ADCu) {
        ctx->pc = 0x2B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD8u;
        // 0x2b8adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AE0u;
        goto label_2b8ae0;
    }
    ctx->pc = 0x2B8AD8u;
    {
        const bool branch_taken_0x2b8ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD8u;
        // 0x2b8adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ad8) {
            ctx->pc = 0x2BEADCu;
            { ctx->pc = 0x2beadc; return; }
        }
    }
    ctx->pc = 0x2B8AE0u;
label_2b8ae0:
    // 0x2b8ae0: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b8ae4:
    if (ctx->pc == 0x2B8AE4u) {
        ctx->pc = 0x2B8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AE0u;
        // 0x2b8ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AE8u;
        goto label_2b8ae8;
    }
    ctx->pc = 0x2B8AE0u;
    {
        const bool branch_taken_0x2b8ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AE0u;
        // 0x2b8ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ae0) {
            ctx->pc = 0x2BEB64u;
            { ctx->pc = 0x2beb64; return; }
        }
    }
    ctx->pc = 0x2B8AE8u;
label_2b8ae8:
    // 0x2b8ae8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8aec:
    // 0x2b8aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8af0:
    // 0x2b8af0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8af4:
    if (ctx->pc == 0x2B8AF4u) {
        ctx->pc = 0x2B8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AF0u;
        // 0x2b8af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AF8u;
        goto label_2b8af8;
    }
    ctx->pc = 0x2B8AF0u;
    {
        const bool branch_taken_0x2b8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AF0u;
        // 0x2b8af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8af0) {
            ctx->pc = 0x2B8AF4u;
            goto label_2b8af4;
        }
    }
    ctx->pc = 0x2B8AF8u;
label_2b8af8:
    // 0x2b8af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8afc:
    // 0x2b8afc: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b8b00:
    // 0x2b8b00: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8b00u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8b04:
    // 0x2b8b04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b08:
    // 0x2b8b08: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8b08u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8b0c:
    // 0x2b8b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b10:
    // 0x2b8b10: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8b10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8b14:
    // 0x2b8b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b18:
    // 0x2b8b18: 0x42020055  .word       0x42020055                   # INVALID     $s0, $v0, 0x55 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8b18u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x15 at 0x2B8B18 raw=0x42020055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8b1c:
    // 0x2b8b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b20:
    // 0x2b8b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b24:
    // 0x2b8b24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b28:
    // 0x2b8b28: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8b2c:
    if (ctx->pc == 0x2B8B2Cu) {
        ctx->pc = 0x2B8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B28u;
        // 0x2b8b2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B30u;
        goto label_2b8b30;
    }
    ctx->pc = 0x2B8B28u;
    {
        const bool branch_taken_0x2b8b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B28u;
        // 0x2b8b2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b28) {
            ctx->pc = 0x2CCB30u;
            return;
        }
    }
    ctx->pc = 0x2B8B30u;
label_2b8b30:
    // 0x2b8b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b34:
    // 0x2b8b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b38:
    // 0x2b8b38: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8b3c:
    if (ctx->pc == 0x2B8B3Cu) {
        ctx->pc = 0x2B8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B38u;
        // 0x2b8b3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B40u;
        goto label_2b8b40;
    }
    ctx->pc = 0x2B8B38u;
    {
        const bool branch_taken_0x2b8b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8b38) {
            ctx->pc = 0x2B8B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8B38u;
            // 0x2b8b3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAB28u;
            { ctx->pc = 0x2bab28; return; }
        }
    }
    ctx->pc = 0x2B8B40u;
label_2b8b40:
    // 0x2b8b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b44:
    // 0x2b8b44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b48:
    // 0x2b8b48: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8b4c:
    if (ctx->pc == 0x2B8B4Cu) {
        ctx->pc = 0x2B8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B48u;
        // 0x2b8b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B50u;
        goto label_2b8b50;
    }
    ctx->pc = 0x2B8B48u;
    {
        const bool branch_taken_0x2b8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B48u;
        // 0x2b8b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b48) {
            ctx->pc = 0x2BEBCCu;
            { ctx->pc = 0x2bebcc; return; }
        }
    }
    ctx->pc = 0x2B8B50u;
label_2b8b50:
    // 0x2b8b50: 0x42020045  .word       0x42020045                   # INVALID     $s0, $v0, 0x45 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8b50u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2B8B50 raw=0x42020045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8b54:
    // 0x2b8b54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b58:
    // 0x2b8b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b5c:
    // 0x2b8b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b60:
    // 0x2b8b60: 0x500b0041  beql        $zero, $t3, . + 4 + (0x41 << 2)
label_2b8b64:
    if (ctx->pc == 0x2B8B64u) {
        ctx->pc = 0x2B8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B60u;
        // 0x2b8b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B68u;
        goto label_2b8b68;
    }
    ctx->pc = 0x2B8B60u;
    {
        const bool branch_taken_0x2b8b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8b60) {
            ctx->pc = 0x2B8B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8B60u;
            // 0x2b8b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8C68u;
            goto label_2b8c68;
        }
    }
    ctx->pc = 0x2B8B68u;
label_2b8b68:
    // 0x2b8b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b6c:
    // 0x2b8b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b70:
    // 0x2b8b70: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2b8b74:
    if (ctx->pc == 0x2B8B74u) {
        ctx->pc = 0x2B8B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B70u;
        // 0x2b8b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B78u;
        goto label_2b8b78;
    }
    ctx->pc = 0x2B8B70u;
    {
        const bool branch_taken_0x2b8b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B70u;
        // 0x2b8b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b70) {
            ctx->pc = 0x2B9374u;
            { ctx->pc = 0x2b9374; return; }
        }
    }
    ctx->pc = 0x2B8B78u;
label_2b8b78:
    // 0x2b8b78: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2b8b7c:
    if (ctx->pc == 0x2B8B7Cu) {
        ctx->pc = 0x2B8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B78u;
        // 0x2b8b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B80u;
        goto label_2b8b80;
    }
    ctx->pc = 0x2B8B78u;
    {
        const bool branch_taken_0x2b8b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B78u;
        // 0x2b8b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b78) {
            ctx->pc = 0x2B8B9Cu;
            goto label_2b8b9c;
        }
    }
    ctx->pc = 0x2B8B80u;
label_2b8b80:
    // 0x2b8b80: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b8b84:
    if (ctx->pc == 0x2B8B84u) {
        ctx->pc = 0x2B8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B80u;
        // 0x2b8b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B88u;
        goto label_2b8b88;
    }
    ctx->pc = 0x2B8B80u;
    {
        const bool branch_taken_0x2b8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B80u;
        // 0x2b8b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b80) {
            ctx->pc = 0x2B8B88u;
            goto label_2b8b88;
        }
    }
    ctx->pc = 0x2B8B88u;
label_2b8b88:
    // 0x2b8b88: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8b8c:
    if (ctx->pc == 0x2B8B8Cu) {
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B90u;
        goto label_2b8b90;
    }
    ctx->pc = 0x2B8B88u;
    {
        const bool branch_taken_0x2b8b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b88) {
            ctx->pc = 0x2BEC0Cu;
            { ctx->pc = 0x2bec0c; return; }
        }
    }
    ctx->pc = 0x2B8B90u;
label_2b8b90:
    // 0x2b8b90: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b8b94:
    if (ctx->pc == 0x2B8B94u) {
        ctx->pc = 0x2B8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B90u;
        // 0x2b8b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B98u;
        goto label_2b8b98;
    }
    ctx->pc = 0x2B8B90u;
    {
        const bool branch_taken_0x2b8b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B90u;
        // 0x2b8b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b90) {
            ctx->pc = 0x2BEB94u;
            { ctx->pc = 0x2beb94; return; }
        }
    }
    ctx->pc = 0x2B8B98u;
label_2b8b98:
    // 0x2b8b98: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8b98u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8b9c:
    // 0x2b8b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ba0:
    // 0x2b8ba0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8ba4:
    if (ctx->pc == 0x2B8BA4u) {
        ctx->pc = 0x2B8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA0u;
        // 0x2b8ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BA8u;
        goto label_2b8ba8;
    }
    ctx->pc = 0x2B8BA0u;
    {
        const bool branch_taken_0x2b8ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA0u;
        // 0x2b8ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ba0) {
            ctx->pc = 0x2B8BA4u;
            goto label_2b8ba4;
        }
    }
    ctx->pc = 0x2B8BA8u;
label_2b8ba8:
    // 0x2b8ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8bac:
    // 0x2b8bac: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b8bb0:
    // 0x2b8bb0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8bb4:
    // 0x2b8bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bb8:
    // 0x2b8bb8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8bb8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8bbc:
    // 0x2b8bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bc0:
    // 0x2b8bc0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8bc0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8bc4:
    // 0x2b8bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bc8:
    // 0x2b8bc8: 0x4202003f  .word       0x4202003F                   # INVALID     $s0, $v0, 0x3F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8bc8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B8BC8 raw=0x4202003F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8bcc:
    // 0x2b8bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bd0:
    // 0x2b8bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8bd4:
    // 0x2b8bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bd8:
    // 0x2b8bd8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8bdc:
    if (ctx->pc == 0x2B8BDCu) {
        ctx->pc = 0x2B8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD8u;
        // 0x2b8bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BE0u;
        goto label_2b8be0;
    }
    ctx->pc = 0x2B8BD8u;
    {
        const bool branch_taken_0x2b8bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD8u;
        // 0x2b8bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bd8) {
            ctx->pc = 0x2CCBE0u;
            return;
        }
    }
    ctx->pc = 0x2B8BE0u;
label_2b8be0:
    // 0x2b8be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8be4:
    // 0x2b8be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8be8:
    // 0x2b8be8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8bec:
    if (ctx->pc == 0x2B8BECu) {
        ctx->pc = 0x2B8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BE8u;
        // 0x2b8bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BF0u;
        goto label_2b8bf0;
    }
    ctx->pc = 0x2B8BE8u;
    {
        const bool branch_taken_0x2b8be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8be8) {
            ctx->pc = 0x2B8BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8BE8u;
            // 0x2b8bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BABD8u;
            { ctx->pc = 0x2babd8; return; }
        }
    }
    ctx->pc = 0x2B8BF0u;
label_2b8bf0:
    // 0x2b8bf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8bf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8bf4:
    // 0x2b8bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bf8:
    // 0x2b8bf8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8bfc:
    if (ctx->pc == 0x2B8BFCu) {
        ctx->pc = 0x2B8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF8u;
        // 0x2b8bfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C00u;
        goto label_2b8c00;
    }
    ctx->pc = 0x2B8BF8u;
    {
        const bool branch_taken_0x2b8bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF8u;
        // 0x2b8bfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bf8) {
            ctx->pc = 0x2BEBFCu;
            { ctx->pc = 0x2bebfc; return; }
        }
    }
    ctx->pc = 0x2B8C00u;
label_2b8c00:
    // 0x2b8c00: 0x4202002f  .word       0x4202002F                   # INVALID     $s0, $v0, 0x2F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8c00u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2F at 0x2B8C00 raw=0x4202002F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8c04:
    // 0x2b8c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c08:
    // 0x2b8c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c0c:
    // 0x2b8c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c10:
    // 0x2b8c10: 0x500b002b  beql        $zero, $t3, . + 4 + (0x2B << 2)
label_2b8c14:
    if (ctx->pc == 0x2B8C14u) {
        ctx->pc = 0x2B8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C10u;
        // 0x2b8c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C18u;
        goto label_2b8c18;
    }
    ctx->pc = 0x2B8C10u;
    {
        const bool branch_taken_0x2b8c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8c10) {
            ctx->pc = 0x2B8C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8C10u;
            // 0x2b8c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8CC0u;
            goto label_2b8cc0;
        }
    }
    ctx->pc = 0x2B8C18u;
label_2b8c18:
    // 0x2b8c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c1c:
    // 0x2b8c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c20:
    // 0x2b8c20: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2b8c24:
    if (ctx->pc == 0x2B8C24u) {
        ctx->pc = 0x2B8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C20u;
        // 0x2b8c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C28u;
        goto label_2b8c28;
    }
    ctx->pc = 0x2B8C20u;
    {
        const bool branch_taken_0x2b8c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C20u;
        // 0x2b8c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c20) {
            ctx->pc = 0x2B9024u;
            { ctx->pc = 0x2b9024; return; }
        }
    }
    ctx->pc = 0x2B8C28u;
label_2b8c28:
    // 0x2b8c28: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2b8c2c:
    if (ctx->pc == 0x2B8C2Cu) {
        ctx->pc = 0x2B8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C28u;
        // 0x2b8c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C30u;
        goto label_2b8c30;
    }
    ctx->pc = 0x2B8C28u;
    {
        const bool branch_taken_0x2b8c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C28u;
        // 0x2b8c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c28) {
            ctx->pc = 0x2B8C3Cu;
            goto label_2b8c3c;
        }
    }
    ctx->pc = 0x2B8C30u;
label_2b8c30:
    // 0x2b8c30: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b8c34:
    if (ctx->pc == 0x2B8C34u) {
        ctx->pc = 0x2B8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C30u;
        // 0x2b8c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C38u;
        goto label_2b8c38;
    }
    ctx->pc = 0x2B8C30u;
    {
        const bool branch_taken_0x2b8c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C30u;
        // 0x2b8c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c30) {
            ctx->pc = 0x2B8C38u;
            goto label_2b8c38;
        }
    }
    ctx->pc = 0x2B8C38u;
label_2b8c38:
    // 0x2b8c38: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8c3c:
    if (ctx->pc == 0x2B8C3Cu) {
        ctx->pc = 0x2B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C38u;
        // 0x2b8c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C40u;
        goto label_2b8c40;
    }
    ctx->pc = 0x2B8C38u;
    {
        const bool branch_taken_0x2b8c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C38u;
        // 0x2b8c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c38) {
            ctx->pc = 0x2BEC3Cu;
            { ctx->pc = 0x2bec3c; return; }
        }
    }
    ctx->pc = 0x2B8C40u;
label_2b8c40:
    // 0x2b8c40: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b8c44:
    if (ctx->pc == 0x2B8C44u) {
        ctx->pc = 0x2B8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C40u;
        // 0x2b8c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C48u;
        goto label_2b8c48;
    }
    ctx->pc = 0x2B8C40u;
    {
        const bool branch_taken_0x2b8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C40u;
        // 0x2b8c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c40) {
            ctx->pc = 0x2BECC4u;
            { ctx->pc = 0x2becc4; return; }
        }
    }
    ctx->pc = 0x2B8C48u;
label_2b8c48:
    // 0x2b8c48: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8c4c:
    // 0x2b8c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c50:
    // 0x2b8c50: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8c54:
    if (ctx->pc == 0x2B8C54u) {
        ctx->pc = 0x2B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C50u;
        // 0x2b8c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C58u;
        goto label_2b8c58;
    }
    ctx->pc = 0x2B8C50u;
    {
        const bool branch_taken_0x2b8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C50u;
        // 0x2b8c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c50) {
            ctx->pc = 0x2B8C54u;
            goto label_2b8c54;
        }
    }
    ctx->pc = 0x2B8C58u;
label_2b8c58:
    // 0x2b8c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c5c:
    // 0x2b8c5c: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8c5cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b8c60:
    // 0x2b8c60: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8c60u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8c64:
    // 0x2b8c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c68:
    // 0x2b8c68: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8c68u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8c6c:
    // 0x2b8c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c70:
    // 0x2b8c70: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8c70u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8c74:
    // 0x2b8c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c78:
    // 0x2b8c78: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8c78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2B8C78 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8c7c:
    // 0x2b8c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c80:
    // 0x2b8c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c84:
    // 0x2b8c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c88:
    // 0x2b8c88: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8c8c:
    if (ctx->pc == 0x2B8C8Cu) {
        ctx->pc = 0x2B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C88u;
        // 0x2b8c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C90u;
        goto label_2b8c90;
    }
    ctx->pc = 0x2B8C88u;
    {
        const bool branch_taken_0x2b8c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C88u;
        // 0x2b8c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c88) {
            ctx->pc = 0x2CCC90u;
            return;
        }
    }
    ctx->pc = 0x2B8C90u;
label_2b8c90:
    // 0x2b8c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c94:
    // 0x2b8c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c98:
    // 0x2b8c98: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8c9c:
    if (ctx->pc == 0x2B8C9Cu) {
        ctx->pc = 0x2B8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C98u;
        // 0x2b8c9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CA0u;
        goto label_2b8ca0;
    }
    ctx->pc = 0x2B8C98u;
    {
        const bool branch_taken_0x2b8c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8c98) {
            ctx->pc = 0x2B8C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8C98u;
            // 0x2b8c9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC88u;
            { ctx->pc = 0x2bac88; return; }
        }
    }
    ctx->pc = 0x2B8CA0u;
label_2b8ca0:
    // 0x2b8ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ca4:
    // 0x2b8ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ca8:
    // 0x2b8ca8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8cac:
    if (ctx->pc == 0x2B8CACu) {
        ctx->pc = 0x2B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA8u;
        // 0x2b8cac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CB0u;
        goto label_2b8cb0;
    }
    ctx->pc = 0x2B8CA8u;
    {
        const bool branch_taken_0x2b8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA8u;
        // 0x2b8cac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ca8) {
            ctx->pc = 0x2BED2Cu;
            { ctx->pc = 0x2bed2c; return; }
        }
    }
    ctx->pc = 0x2B8CB0u;
label_2b8cb0:
    // 0x2b8cb0: 0x42020019  .word       0x42020019                   # INVALID     $s0, $v0, 0x19 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8cb0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x19 at 0x2B8CB0 raw=0x42020019"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8cb4:
    // 0x2b8cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cb8:
    // 0x2b8cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8cbc:
    // 0x2b8cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cc0:
    // 0x2b8cc0: 0x500b0015  beql        $zero, $t3, . + 4 + (0x15 << 2)
label_2b8cc4:
    if (ctx->pc == 0x2B8CC4u) {
        ctx->pc = 0x2B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CC0u;
        // 0x2b8cc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CC8u;
        goto label_2b8cc8;
    }
    ctx->pc = 0x2B8CC0u;
    {
        const bool branch_taken_0x2b8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8cc0) {
            ctx->pc = 0x2B8CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8CC0u;
            // 0x2b8cc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8D18u;
            goto label_2b8d18;
        }
    }
    ctx->pc = 0x2B8CC8u;
label_2b8cc8:
    // 0x2b8cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ccc:
    // 0x2b8ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cd0:
    // 0x2b8cd0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8cd0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8cd4:
    // 0x2b8cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cd8:
    // 0x2b8cd8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b8cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b8cdc:
    // 0x2b8cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ce0:
    // 0x2b8ce0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8ce4:
    if (ctx->pc == 0x2B8CE4u) {
        ctx->pc = 0x2B8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE0u;
        // 0x2b8ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CE8u;
        goto label_2b8ce8;
    }
    ctx->pc = 0x2B8CE0u;
    {
        const bool branch_taken_0x2b8ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE0u;
        // 0x2b8ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ce0) {
            ctx->pc = 0x2B8CE4u;
            goto label_2b8ce4;
        }
    }
    ctx->pc = 0x2B8CE8u;
label_2b8ce8:
    // 0x2b8ce8: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2b8cec:
    if (ctx->pc == 0x2B8CECu) {
        ctx->pc = 0x2B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE8u;
        // 0x2b8cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CF0u;
        goto label_2b8cf0;
    }
    ctx->pc = 0x2B8CE8u;
    {
        const bool branch_taken_0x2b8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE8u;
        // 0x2b8cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ce8) {
            ctx->pc = 0x2B8E84u;
            goto label_2b8e84;
        }
    }
    ctx->pc = 0x2B8CF0u;
label_2b8cf0:
    // 0x2b8cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8cf4:
    // 0x2b8cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cf8:
    // 0x2b8cf8: 0x5203080e  beql        $s0, $v1, . + 4 + (0x80E << 2)
label_2b8cfc:
    if (ctx->pc == 0x2B8CFCu) {
        ctx->pc = 0x2B8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CF8u;
        // 0x2b8cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D00u;
        goto label_2b8d00;
    }
    ctx->pc = 0x2B8CF8u;
    {
        const bool branch_taken_0x2b8cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b8cf8) {
            ctx->pc = 0x2B8CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8CF8u;
            // 0x2b8cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAD34u;
            { ctx->pc = 0x2bad34; return; }
        }
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d04:
    // 0x2b8d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d08:
    // 0x2b8d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d0c:
    // 0x2b8d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d10:
    // 0x2b8d10: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b8d14:
    if (ctx->pc == 0x2B8D14u) {
        ctx->pc = 0x2B8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D10u;
        // 0x2b8d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D18u;
        goto label_2b8d18;
    }
    ctx->pc = 0x2B8D10u;
    {
        const bool branch_taken_0x2b8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D10u;
        // 0x2b8d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d10) {
            ctx->pc = 0x2BEE14u;
            { ctx->pc = 0x2bee14; return; }
        }
    }
    ctx->pc = 0x2B8D18u;
label_2b8d18:
    // 0x2b8d18: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b8d1c:
    // 0x2b8d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d20:
    // 0x2b8d20: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B8D20 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8d24:
    // 0x2b8d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d28:
    // 0x2b8d28: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2b8d2c:
    if (ctx->pc == 0x2B8D2Cu) {
        ctx->pc = 0x2B8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D28u;
        // 0x2b8d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D30u;
        goto label_2b8d30;
    }
    ctx->pc = 0x2B8D28u;
    {
        const bool branch_taken_0x2b8d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D28u;
        // 0x2b8d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d28) {
            ctx->pc = 0x2BCD30u;
            { ctx->pc = 0x2bcd30; return; }
        }
    }
    ctx->pc = 0x2B8D30u;
label_2b8d30:
    // 0x2b8d30: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8d34:
    if (ctx->pc == 0x2B8D34u) {
        ctx->pc = 0x2B8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D30u;
        // 0x2b8d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D38u;
        goto label_2b8d38;
    }
    ctx->pc = 0x2B8D30u;
    {
        const bool branch_taken_0x2b8d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D30u;
        // 0x2b8d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d30) {
            ctx->pc = 0x2BEDB4u;
            { ctx->pc = 0x2bedb4; return; }
        }
    }
    ctx->pc = 0x2B8D38u;
label_2b8d38:
    // 0x2b8d38: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b8d3c:
    if (ctx->pc == 0x2B8D3Cu) {
        ctx->pc = 0x2B8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D38u;
        // 0x2b8d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D40u;
        goto label_2b8d40;
    }
    ctx->pc = 0x2B8D38u;
    {
        const bool branch_taken_0x2b8d38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D38u;
        // 0x2b8d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d38) {
            ctx->pc = 0x2CED38u;
            return;
        }
    }
    ctx->pc = 0x2B8D40u;
label_2b8d40:
    // 0x2b8d40: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b8d44:
    if (ctx->pc == 0x2B8D44u) {
        ctx->pc = 0x2B8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D40u;
        // 0x2b8d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D48u;
        goto label_2b8d48;
    }
    ctx->pc = 0x2B8D40u;
    {
        const bool branch_taken_0x2b8d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D40u;
        // 0x2b8d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d40) {
            ctx->pc = 0x2CED48u;
            return;
        }
    }
    ctx->pc = 0x2B8D48u;
label_2b8d48:
    // 0x2b8d48: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b8d4c:
    // 0x2b8d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d50:
    // 0x2b8d50: 0xb0b1000  j           func_C2C4000
label_2b8d54:
    if (ctx->pc == 0x2B8D54u) {
        ctx->pc = 0x2B8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D50u;
        // 0x2b8d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D58u;
        goto label_2b8d58;
    }
    ctx->pc = 0x2B8D50u;
    ctx->pc = 0x2B8D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D50u;
    // 0x2b8d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B8D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8D58u;
label_2b8d58:
    // 0x2b8d58: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8d58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2B8D58 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8d5c:
    // 0x2b8d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d60:
    // 0x2b8d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d64:
    // 0x2b8d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d68:
    // 0x2b8d68: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b8d6c:
    // 0x2b8d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d70:
    // 0x2b8d70: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8d70u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8D70 raw=0x48007800");
 /* MITIGATED */
label_2b8d74:
    // 0x2b8d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d78:
    // 0x2b8d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d7c:
    // 0x2b8d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d80:
    // 0x2b8d80: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b8d84:
    // 0x2b8d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d88:
    // 0x2b8d88: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B8D88 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8d8c:
    // 0x2b8d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d90:
    // 0x2b8d90: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2b8d94:
    // 0x2b8d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d98:
    // 0x2b8d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d9c:
    // 0x2b8d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8da0:
    // 0x2b8da0: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2b8da0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b8da4:
    // 0x2b8da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8da8:
    // 0x2b8da8: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2b8da8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b8dac:
    // 0x2b8dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8db0:
    // 0x2b8db0: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2b8db0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b8db4:
    // 0x2b8db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8db8:
    // 0x2b8db8: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8db8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8DB8 raw=0x48001000");
 /* MITIGATED */
label_2b8dbc:
    // 0x2b8dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8dc0:
    // 0x2b8dc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8dc4:
    // 0x2b8dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8dc8:
    // 0x2b8dc8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8dc8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8dcc:
    // 0x2b8dcc: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8dccu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b8dd0:
    // 0x2b8dd0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8dd0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8dd4:
    // 0x2b8dd4: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8dd4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b8dd8:
    // 0x2b8dd8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8ddc:
    // 0x2b8ddc: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8ddcu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b8de0:
    // 0x2b8de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8de4:
    // 0x2b8de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8de8:
    // 0x2b8de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8dec:
    // 0x2b8dec: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8decu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b8df0:
    // 0x2b8df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8df4:
    // 0x2b8df4: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8df4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2b8df8:
    // 0x2b8df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8dfc:
    // 0x2b8dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e00:
    // 0x2b8e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e04:
    // 0x2b8e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e08:
    // 0x2b8e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e0c:
    // 0x2b8e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e10:
    // 0x2b8e10: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2b8e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2b8e14:
    // 0x2b8e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e18:
    // 0x2b8e18: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2b8e18u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2b8e1c:
    // 0x2b8e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e20:
    // 0x2b8e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e24:
    // 0x2b8e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e28:
    // 0x2b8e28: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2b8e2c:
    if (ctx->pc == 0x2B8E2Cu) {
        ctx->pc = 0x2B8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E28u;
        // 0x2b8e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E30u;
        goto label_2b8e30;
    }
    ctx->pc = 0x2B8E28u;
    {
        const bool branch_taken_0x2b8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8e28) {
            ctx->pc = 0x2B8E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E28u;
            // 0x2b8e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E68u;
            goto label_2b8e68;
        }
    }
    ctx->pc = 0x2B8E30u;
label_2b8e30:
    // 0x2b8e30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e34:
    // 0x2b8e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e38:
    // 0x2b8e38: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b8e38u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b8e3c:
    // 0x2b8e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e40:
    // 0x2b8e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e44:
    // 0x2b8e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e48:
    // 0x2b8e48: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2b8e4c:
    if (ctx->pc == 0x2B8E4Cu) {
        ctx->pc = 0x2B8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E48u;
        // 0x2b8e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E50u;
        goto label_2b8e50;
    }
    ctx->pc = 0x2B8E48u;
    {
        const bool branch_taken_0x2b8e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8e48) {
            ctx->pc = 0x2B8E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E48u;
            // 0x2b8e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E58u;
            goto label_2b8e58;
        }
    }
    ctx->pc = 0x2B8E50u;
label_2b8e50:
    // 0x2b8e50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e54:
    // 0x2b8e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e58:
    // 0x2b8e58: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8e58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8e5c:
    // 0x2b8e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e60:
    // 0x2b8e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e64:
    // 0x2b8e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e68:
    // 0x2b8e68: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8e68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2B8E68 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8e6c:
    // 0x2b8e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e70:
    // 0x2b8e70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e74:
    // 0x2b8e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e78:
    // 0x2b8e78: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b8e78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b8e7c:
    // 0x2b8e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e80:
    // 0x2b8e80: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b8e80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b8e84:
    // 0x2b8e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e88:
    // 0x2b8e88: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b8e88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b8e8c:
    // 0x2b8e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e90:
    // 0x2b8e90: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b8e94:
    if (ctx->pc == 0x2B8E94u) {
        ctx->pc = 0x2B8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E90u;
        // 0x2b8e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E98u;
        goto label_2b8e98;
    }
    ctx->pc = 0x2B8E90u;
    {
        const bool branch_taken_0x2b8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E90u;
        // 0x2b8e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e90) {
            ctx->pc = 0x2CEE98u;
            return;
        }
    }
    ctx->pc = 0x2B8E98u;
label_2b8e98:
    // 0x2b8e98: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8e98u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8e9c:
    // 0x2b8e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ea0:
    // 0x2b8ea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ea4:
    // 0x2b8ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b8ea8u;
    return;
}
