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


void FUN_0019b618_part126(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d86a8u: goto label_1d86a8;
        case 0x1d86acu: goto label_1d86ac;
        case 0x1d86b0u: goto label_1d86b0;
        case 0x1d86b4u: goto label_1d86b4;
        case 0x1d86b8u: goto label_1d86b8;
        case 0x1d86bcu: goto label_1d86bc;
        case 0x1d86c0u: goto label_1d86c0;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86c8u: goto label_1d86c8;
        case 0x1d86ccu: goto label_1d86cc;
        case 0x1d86d0u: goto label_1d86d0;
        case 0x1d86d4u: goto label_1d86d4;
        case 0x1d86d8u: goto label_1d86d8;
        case 0x1d86dcu: goto label_1d86dc;
        case 0x1d86e0u: goto label_1d86e0;
        case 0x1d86e4u: goto label_1d86e4;
        case 0x1d86e8u: goto label_1d86e8;
        case 0x1d86ecu: goto label_1d86ec;
        case 0x1d86f0u: goto label_1d86f0;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d86f8u: goto label_1d86f8;
        case 0x1d86fcu: goto label_1d86fc;
        case 0x1d8700u: goto label_1d8700;
        case 0x1d8704u: goto label_1d8704;
        case 0x1d8708u: goto label_1d8708;
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8710u: goto label_1d8710;
        case 0x1d8714u: goto label_1d8714;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d871cu: goto label_1d871c;
        case 0x1d8720u: goto label_1d8720;
        case 0x1d8724u: goto label_1d8724;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d872cu: goto label_1d872c;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8734u: goto label_1d8734;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d873cu: goto label_1d873c;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8744u: goto label_1d8744;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d874cu: goto label_1d874c;
        case 0x1d8750u: goto label_1d8750;
        case 0x1d8754u: goto label_1d8754;
        case 0x1d8758u: goto label_1d8758;
        case 0x1d875cu: goto label_1d875c;
        case 0x1d8760u: goto label_1d8760;
        case 0x1d8764u: goto label_1d8764;
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        case 0x1d878cu: goto label_1d878c;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d8794u: goto label_1d8794;
        case 0x1d8798u: goto label_1d8798;
        case 0x1d879cu: goto label_1d879c;
        case 0x1d87a0u: goto label_1d87a0;
        case 0x1d87a4u: goto label_1d87a4;
        case 0x1d87a8u: goto label_1d87a8;
        case 0x1d87acu: goto label_1d87ac;
        case 0x1d87b0u: goto label_1d87b0;
        case 0x1d87b4u: goto label_1d87b4;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87bcu: goto label_1d87bc;
        case 0x1d87c0u: goto label_1d87c0;
        case 0x1d87c4u: goto label_1d87c4;
        case 0x1d87c8u: goto label_1d87c8;
        case 0x1d87ccu: goto label_1d87cc;
        case 0x1d87d0u: goto label_1d87d0;
        case 0x1d87d4u: goto label_1d87d4;
        case 0x1d87d8u: goto label_1d87d8;
        case 0x1d87dcu: goto label_1d87dc;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d87e8u: goto label_1d87e8;
        case 0x1d87ecu: goto label_1d87ec;
        case 0x1d87f0u: goto label_1d87f0;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d87f8u: goto label_1d87f8;
        case 0x1d87fcu: goto label_1d87fc;
        case 0x1d8800u: goto label_1d8800;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8810u: goto label_1d8810;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8824u: goto label_1d8824;
        case 0x1d8828u: goto label_1d8828;
        case 0x1d882cu: goto label_1d882c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8834u: goto label_1d8834;
        case 0x1d8838u: goto label_1d8838;
        case 0x1d883cu: goto label_1d883c;
        case 0x1d8840u: goto label_1d8840;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8848u: goto label_1d8848;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8850u: goto label_1d8850;
        case 0x1d8854u: goto label_1d8854;
        case 0x1d8858u: goto label_1d8858;
        case 0x1d885cu: goto label_1d885c;
        case 0x1d8860u: goto label_1d8860;
        case 0x1d8864u: goto label_1d8864;
        case 0x1d8868u: goto label_1d8868;
        case 0x1d886cu: goto label_1d886c;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d8874u: goto label_1d8874;
        case 0x1d8878u: goto label_1d8878;
        case 0x1d887cu: goto label_1d887c;
        case 0x1d8880u: goto label_1d8880;
        case 0x1d8884u: goto label_1d8884;
        case 0x1d8888u: goto label_1d8888;
        case 0x1d888cu: goto label_1d888c;
        case 0x1d8890u: goto label_1d8890;
        case 0x1d8894u: goto label_1d8894;
        case 0x1d8898u: goto label_1d8898;
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88a0u: goto label_1d88a0;
        case 0x1d88a4u: goto label_1d88a4;
        case 0x1d88a8u: goto label_1d88a8;
        case 0x1d88acu: goto label_1d88ac;
        case 0x1d88b0u: goto label_1d88b0;
        case 0x1d88b4u: goto label_1d88b4;
        case 0x1d88b8u: goto label_1d88b8;
        case 0x1d88bcu: goto label_1d88bc;
        case 0x1d88c0u: goto label_1d88c0;
        case 0x1d88c4u: goto label_1d88c4;
        case 0x1d88c8u: goto label_1d88c8;
        case 0x1d88ccu: goto label_1d88cc;
        case 0x1d88d0u: goto label_1d88d0;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d88d8u: goto label_1d88d8;
        case 0x1d88dcu: goto label_1d88dc;
        case 0x1d88e0u: goto label_1d88e0;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d88e8u: goto label_1d88e8;
        case 0x1d88ecu: goto label_1d88ec;
        case 0x1d88f0u: goto label_1d88f0;
        case 0x1d88f4u: goto label_1d88f4;
        case 0x1d88f8u: goto label_1d88f8;
        case 0x1d88fcu: goto label_1d88fc;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8964u: goto label_1d8964;
        case 0x1d8968u: goto label_1d8968;
        case 0x1d896cu: goto label_1d896c;
        case 0x1d8970u: goto label_1d8970;
        case 0x1d8974u: goto label_1d8974;
        case 0x1d8978u: goto label_1d8978;
        case 0x1d897cu: goto label_1d897c;
        case 0x1d8980u: goto label_1d8980;
        case 0x1d8984u: goto label_1d8984;
        case 0x1d8988u: goto label_1d8988;
        case 0x1d898cu: goto label_1d898c;
        case 0x1d8990u: goto label_1d8990;
        case 0x1d8994u: goto label_1d8994;
        case 0x1d8998u: goto label_1d8998;
        case 0x1d899cu: goto label_1d899c;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89a4u: goto label_1d89a4;
        case 0x1d89a8u: goto label_1d89a8;
        case 0x1d89acu: goto label_1d89ac;
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89b4u: goto label_1d89b4;
        case 0x1d89b8u: goto label_1d89b8;
        case 0x1d89bcu: goto label_1d89bc;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89ccu: goto label_1d89cc;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89d8u: goto label_1d89d8;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e0u: goto label_1d89e0;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89ecu: goto label_1d89ec;
        case 0x1d89f0u: goto label_1d89f0;
        case 0x1d89f4u: goto label_1d89f4;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a00u: goto label_1d8a00;
        case 0x1d8a04u: goto label_1d8a04;
        case 0x1d8a08u: goto label_1d8a08;
        case 0x1d8a0cu: goto label_1d8a0c;
        case 0x1d8a10u: goto label_1d8a10;
        case 0x1d8a14u: goto label_1d8a14;
        case 0x1d8a18u: goto label_1d8a18;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a20u: goto label_1d8a20;
        case 0x1d8a24u: goto label_1d8a24;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a2cu: goto label_1d8a2c;
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a34u: goto label_1d8a34;
        case 0x1d8a38u: goto label_1d8a38;
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a40u: goto label_1d8a40;
        case 0x1d8a44u: goto label_1d8a44;
        case 0x1d8a48u: goto label_1d8a48;
        case 0x1d8a4cu: goto label_1d8a4c;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a54u: goto label_1d8a54;
        case 0x1d8a58u: goto label_1d8a58;
        case 0x1d8a5cu: goto label_1d8a5c;
        case 0x1d8a60u: goto label_1d8a60;
        case 0x1d8a64u: goto label_1d8a64;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a6cu: goto label_1d8a6c;
        case 0x1d8a70u: goto label_1d8a70;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a78u: goto label_1d8a78;
        case 0x1d8a7cu: goto label_1d8a7c;
        case 0x1d8a80u: goto label_1d8a80;
        case 0x1d8a84u: goto label_1d8a84;
        case 0x1d8a88u: goto label_1d8a88;
        case 0x1d8a8cu: goto label_1d8a8c;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8a94u: goto label_1d8a94;
        case 0x1d8a98u: goto label_1d8a98;
        case 0x1d8a9cu: goto label_1d8a9c;
        case 0x1d8aa0u: goto label_1d8aa0;
        case 0x1d8aa4u: goto label_1d8aa4;
        case 0x1d8aa8u: goto label_1d8aa8;
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ab0u: goto label_1d8ab0;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ab8u: goto label_1d8ab8;
        case 0x1d8abcu: goto label_1d8abc;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ac4u: goto label_1d8ac4;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8accu: goto label_1d8acc;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8ad4u: goto label_1d8ad4;
        case 0x1d8ad8u: goto label_1d8ad8;
        case 0x1d8adcu: goto label_1d8adc;
        case 0x1d8ae0u: goto label_1d8ae0;
        case 0x1d8ae4u: goto label_1d8ae4;
        case 0x1d8ae8u: goto label_1d8ae8;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8af0u: goto label_1d8af0;
        case 0x1d8af4u: goto label_1d8af4;
        case 0x1d8af8u: goto label_1d8af8;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b00u: goto label_1d8b00;
        case 0x1d8b04u: goto label_1d8b04;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b0cu: goto label_1d8b0c;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b14u: goto label_1d8b14;
        case 0x1d8b18u: goto label_1d8b18;
        case 0x1d8b1cu: goto label_1d8b1c;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b24u: goto label_1d8b24;
        case 0x1d8b28u: goto label_1d8b28;
        case 0x1d8b2cu: goto label_1d8b2c;
        case 0x1d8b30u: goto label_1d8b30;
        case 0x1d8b34u: goto label_1d8b34;
        case 0x1d8b38u: goto label_1d8b38;
        case 0x1d8b3cu: goto label_1d8b3c;
        case 0x1d8b40u: goto label_1d8b40;
        case 0x1d8b44u: goto label_1d8b44;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b4cu: goto label_1d8b4c;
        case 0x1d8b50u: goto label_1d8b50;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b58u: goto label_1d8b58;
        case 0x1d8b5cu: goto label_1d8b5c;
        case 0x1d8b60u: goto label_1d8b60;
        case 0x1d8b64u: goto label_1d8b64;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b6cu: goto label_1d8b6c;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b74u: goto label_1d8b74;
        case 0x1d8b78u: goto label_1d8b78;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8b80u: goto label_1d8b80;
        case 0x1d8b84u: goto label_1d8b84;
        case 0x1d8b88u: goto label_1d8b88;
        case 0x1d8b8cu: goto label_1d8b8c;
        case 0x1d8b90u: goto label_1d8b90;
        case 0x1d8b94u: goto label_1d8b94;
        case 0x1d8b98u: goto label_1d8b98;
        case 0x1d8b9cu: goto label_1d8b9c;
        case 0x1d8ba0u: goto label_1d8ba0;
        case 0x1d8ba4u: goto label_1d8ba4;
        case 0x1d8ba8u: goto label_1d8ba8;
        case 0x1d8bacu: goto label_1d8bac;
        case 0x1d8bb0u: goto label_1d8bb0;
        case 0x1d8bb4u: goto label_1d8bb4;
        case 0x1d8bb8u: goto label_1d8bb8;
        case 0x1d8bbcu: goto label_1d8bbc;
        case 0x1d8bc0u: goto label_1d8bc0;
        case 0x1d8bc4u: goto label_1d8bc4;
        case 0x1d8bc8u: goto label_1d8bc8;
        case 0x1d8bccu: goto label_1d8bcc;
        case 0x1d8bd0u: goto label_1d8bd0;
        case 0x1d8bd4u: goto label_1d8bd4;
        case 0x1d8bd8u: goto label_1d8bd8;
        case 0x1d8bdcu: goto label_1d8bdc;
        case 0x1d8be0u: goto label_1d8be0;
        case 0x1d8be4u: goto label_1d8be4;
        case 0x1d8be8u: goto label_1d8be8;
        case 0x1d8becu: goto label_1d8bec;
        case 0x1d8bf0u: goto label_1d8bf0;
        case 0x1d8bf4u: goto label_1d8bf4;
        case 0x1d8bf8u: goto label_1d8bf8;
        case 0x1d8bfcu: goto label_1d8bfc;
        case 0x1d8c00u: goto label_1d8c00;
        case 0x1d8c04u: goto label_1d8c04;
        case 0x1d8c08u: goto label_1d8c08;
        case 0x1d8c0cu: goto label_1d8c0c;
        case 0x1d8c10u: goto label_1d8c10;
        case 0x1d8c14u: goto label_1d8c14;
        case 0x1d8c18u: goto label_1d8c18;
        case 0x1d8c1cu: goto label_1d8c1c;
        case 0x1d8c20u: goto label_1d8c20;
        case 0x1d8c24u: goto label_1d8c24;
        case 0x1d8c28u: goto label_1d8c28;
        case 0x1d8c2cu: goto label_1d8c2c;
        case 0x1d8c30u: goto label_1d8c30;
        case 0x1d8c34u: goto label_1d8c34;
        case 0x1d8c38u: goto label_1d8c38;
        case 0x1d8c3cu: goto label_1d8c3c;
        case 0x1d8c40u: goto label_1d8c40;
        case 0x1d8c44u: goto label_1d8c44;
        case 0x1d8c48u: goto label_1d8c48;
        case 0x1d8c4cu: goto label_1d8c4c;
        case 0x1d8c50u: goto label_1d8c50;
        case 0x1d8c54u: goto label_1d8c54;
        case 0x1d8c58u: goto label_1d8c58;
        case 0x1d8c5cu: goto label_1d8c5c;
        case 0x1d8c60u: goto label_1d8c60;
        case 0x1d8c64u: goto label_1d8c64;
        case 0x1d8c68u: goto label_1d8c68;
        case 0x1d8c6cu: goto label_1d8c6c;
        case 0x1d8c70u: goto label_1d8c70;
        case 0x1d8c74u: goto label_1d8c74;
        case 0x1d8c78u: goto label_1d8c78;
        case 0x1d8c7cu: goto label_1d8c7c;
        case 0x1d8c80u: goto label_1d8c80;
        case 0x1d8c84u: goto label_1d8c84;
        case 0x1d8c88u: goto label_1d8c88;
        case 0x1d8c8cu: goto label_1d8c8c;
        case 0x1d8c90u: goto label_1d8c90;
        case 0x1d8c94u: goto label_1d8c94;
        case 0x1d8c98u: goto label_1d8c98;
        case 0x1d8c9cu: goto label_1d8c9c;
        case 0x1d8ca0u: goto label_1d8ca0;
        case 0x1d8ca4u: goto label_1d8ca4;
        case 0x1d8ca8u: goto label_1d8ca8;
        case 0x1d8cacu: goto label_1d8cac;
        case 0x1d8cb0u: goto label_1d8cb0;
        case 0x1d8cb4u: goto label_1d8cb4;
        case 0x1d8cb8u: goto label_1d8cb8;
        case 0x1d8cbcu: goto label_1d8cbc;
        case 0x1d8cc0u: goto label_1d8cc0;
        case 0x1d8cc4u: goto label_1d8cc4;
        case 0x1d8cc8u: goto label_1d8cc8;
        case 0x1d8cccu: goto label_1d8ccc;
        case 0x1d8cd0u: goto label_1d8cd0;
        case 0x1d8cd4u: goto label_1d8cd4;
        case 0x1d8cd8u: goto label_1d8cd8;
        case 0x1d8cdcu: goto label_1d8cdc;
        case 0x1d8ce0u: goto label_1d8ce0;
        case 0x1d8ce4u: goto label_1d8ce4;
        case 0x1d8ce8u: goto label_1d8ce8;
        case 0x1d8cecu: goto label_1d8cec;
        case 0x1d8cf0u: goto label_1d8cf0;
        case 0x1d8cf4u: goto label_1d8cf4;
        case 0x1d8cf8u: goto label_1d8cf8;
        case 0x1d8cfcu: goto label_1d8cfc;
        case 0x1d8d00u: goto label_1d8d00;
        case 0x1d8d04u: goto label_1d8d04;
        case 0x1d8d08u: goto label_1d8d08;
        case 0x1d8d0cu: goto label_1d8d0c;
        case 0x1d8d10u: goto label_1d8d10;
        case 0x1d8d14u: goto label_1d8d14;
        case 0x1d8d18u: goto label_1d8d18;
        case 0x1d8d1cu: goto label_1d8d1c;
        case 0x1d8d20u: goto label_1d8d20;
        case 0x1d8d24u: goto label_1d8d24;
        case 0x1d8d28u: goto label_1d8d28;
        case 0x1d8d2cu: goto label_1d8d2c;
        case 0x1d8d30u: goto label_1d8d30;
        case 0x1d8d34u: goto label_1d8d34;
        case 0x1d8d38u: goto label_1d8d38;
        case 0x1d8d3cu: goto label_1d8d3c;
        case 0x1d8d40u: goto label_1d8d40;
        case 0x1d8d44u: goto label_1d8d44;
        case 0x1d8d48u: goto label_1d8d48;
        case 0x1d8d4cu: goto label_1d8d4c;
        case 0x1d8d50u: goto label_1d8d50;
        case 0x1d8d54u: goto label_1d8d54;
        case 0x1d8d58u: goto label_1d8d58;
        case 0x1d8d5cu: goto label_1d8d5c;
        case 0x1d8d60u: goto label_1d8d60;
        case 0x1d8d64u: goto label_1d8d64;
        case 0x1d8d68u: goto label_1d8d68;
        case 0x1d8d6cu: goto label_1d8d6c;
        case 0x1d8d70u: goto label_1d8d70;
        case 0x1d8d74u: goto label_1d8d74;
        case 0x1d8d78u: goto label_1d8d78;
        case 0x1d8d7cu: goto label_1d8d7c;
        case 0x1d8d80u: goto label_1d8d80;
        case 0x1d8d84u: goto label_1d8d84;
        case 0x1d8d88u: goto label_1d8d88;
        case 0x1d8d8cu: goto label_1d8d8c;
        case 0x1d8d90u: goto label_1d8d90;
        case 0x1d8d94u: goto label_1d8d94;
        case 0x1d8d98u: goto label_1d8d98;
        case 0x1d8d9cu: goto label_1d8d9c;
        case 0x1d8da0u: goto label_1d8da0;
        case 0x1d8da4u: goto label_1d8da4;
        case 0x1d8da8u: goto label_1d8da8;
        case 0x1d8dacu: goto label_1d8dac;
        case 0x1d8db0u: goto label_1d8db0;
        case 0x1d8db4u: goto label_1d8db4;
        case 0x1d8db8u: goto label_1d8db8;
        case 0x1d8dbcu: goto label_1d8dbc;
        case 0x1d8dc0u: goto label_1d8dc0;
        case 0x1d8dc4u: goto label_1d8dc4;
        case 0x1d8dc8u: goto label_1d8dc8;
        case 0x1d8dccu: goto label_1d8dcc;
        case 0x1d8dd0u: goto label_1d8dd0;
        case 0x1d8dd4u: goto label_1d8dd4;
        case 0x1d8dd8u: goto label_1d8dd8;
        case 0x1d8ddcu: goto label_1d8ddc;
        case 0x1d8de0u: goto label_1d8de0;
        case 0x1d8de4u: goto label_1d8de4;
        case 0x1d8de8u: goto label_1d8de8;
        case 0x1d8decu: goto label_1d8dec;
        case 0x1d8df0u: goto label_1d8df0;
        case 0x1d8df4u: goto label_1d8df4;
        case 0x1d8df8u: goto label_1d8df8;
        case 0x1d8dfcu: goto label_1d8dfc;
        case 0x1d8e00u: goto label_1d8e00;
        case 0x1d8e04u: goto label_1d8e04;
        case 0x1d8e08u: goto label_1d8e08;
        case 0x1d8e0cu: goto label_1d8e0c;
        case 0x1d8e10u: goto label_1d8e10;
        case 0x1d8e14u: goto label_1d8e14;
        case 0x1d8e18u: goto label_1d8e18;
        case 0x1d8e1cu: goto label_1d8e1c;
        case 0x1d8e20u: goto label_1d8e20;
        case 0x1d8e24u: goto label_1d8e24;
        case 0x1d8e28u: goto label_1d8e28;
        case 0x1d8e2cu: goto label_1d8e2c;
        case 0x1d8e30u: goto label_1d8e30;
        case 0x1d8e34u: goto label_1d8e34;
        case 0x1d8e38u: goto label_1d8e38;
        case 0x1d8e3cu: goto label_1d8e3c;
        case 0x1d8e40u: goto label_1d8e40;
        case 0x1d8e44u: goto label_1d8e44;
        case 0x1d8e48u: goto label_1d8e48;
        case 0x1d8e4cu: goto label_1d8e4c;
        case 0x1d8e50u: goto label_1d8e50;
        case 0x1d8e54u: goto label_1d8e54;
        case 0x1d8e58u: goto label_1d8e58;
        case 0x1d8e5cu: goto label_1d8e5c;
        case 0x1d8e60u: goto label_1d8e60;
        case 0x1d8e64u: goto label_1d8e64;
        case 0x1d8e68u: goto label_1d8e68;
        case 0x1d8e6cu: goto label_1d8e6c;
        case 0x1d8e70u: goto label_1d8e70;
        case 0x1d8e74u: goto label_1d8e74;
        default: return;
    }

label_1d86a8:
    if (ctx->pc == 0x1D86A8u) {
        ctx->pc = 0x1D86ACu;
        goto label_1d86ac;
    }
    ctx->pc = 0x1D86A4u;
    {
        const bool branch_taken_0x1d86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d86a4) {
            ctx->pc = 0x1D86BCu;
            goto label_1d86bc;
        }
    }
    ctx->pc = 0x1D86ACu;
label_1d86ac:
    // 0x1d86ac: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1d86acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1d86b0:
    // 0x1d86b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d86b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1d86b4:
    // 0x1d86b4: 0x1040042e  beqz        $v0, . + 4 + (0x42E << 2)
label_1d86b8:
    if (ctx->pc == 0x1D86B8u) {
        ctx->pc = 0x1D86BCu;
        goto label_1d86bc;
    }
    ctx->pc = 0x1D86B4u;
    {
        const bool branch_taken_0x1d86b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d86b4) {
            ctx->pc = 0x1D9770u;
            { ctx->pc = 0x1d9770; return; }
        }
    }
    ctx->pc = 0x1D86BCu;
label_1d86bc:
    // 0x1d86bc: 0x0  nop
    ctx->pc = 0x1d86bcu;
    // NOP
label_1d86c0:
    // 0x1d86c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d86c4:
    // 0x1d86c4: 0xc05b420  jal         func_16D080
label_1d86c8:
    if (ctx->pc == 0x1D86C8u) {
        ctx->pc = 0x1D86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86C4u;
        // 0x1d86c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86CCu;
        goto label_1d86cc;
    }
    ctx->pc = 0x1D86C4u;
    SET_GPR_U32(ctx, 31, 0x1D86CCu);
    ctx->pc = 0x1D86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86C4u;
    // 0x1d86c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1D86C4u, 0x1D86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86CCu;
label_1d86cc:
    // 0x1d86cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d86d0:
    // 0x1d86d0: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_1d86d4:
    if (ctx->pc == 0x1D86D4u) {
        ctx->pc = 0x1D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D0u;
        // 0x1d86d4: 0x3223000f  andi        $v1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86D8u;
        goto label_1d86d8;
    }
    ctx->pc = 0x1D86D0u;
    {
        const bool branch_taken_0x1d86d0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D0u;
        // 0x1d86d4: 0x3223000f  andi        $v1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86d0) {
            ctx->pc = 0x1D86E4u;
            goto label_1d86e4;
        }
    }
    ctx->pc = 0x1D86D8u;
label_1d86d8:
    // 0x1d86d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d86dc:
    if (ctx->pc == 0x1D86DCu) {
        ctx->pc = 0x1D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D8u;
        // 0x1d86dc: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86E0u;
        goto label_1d86e0;
    }
    ctx->pc = 0x1D86D8u;
    {
        const bool branch_taken_0x1d86d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D8u;
        // 0x1d86dc: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86d8) {
            ctx->pc = 0x1D86E8u;
            goto label_1d86e8;
        }
    }
    ctx->pc = 0x1D86E0u;
label_1d86e0:
    // 0x1d86e0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1d86e4:
    // 0x1d86e4: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1d86e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d86e8:
    // 0x1d86e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d86ec:
    if (ctx->pc == 0x1D86ECu) {
        ctx->pc = 0x1D86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86E8u;
        // 0x1d86ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86F0u;
        goto label_1d86f0;
    }
    ctx->pc = 0x1D86E8u;
    {
        const bool branch_taken_0x1d86e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86E8u;
        // 0x1d86ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86e8) {
            ctx->pc = 0x1D8710u;
            goto label_1d8710;
        }
    }
    ctx->pc = 0x1D86F0u;
label_1d86f0:
    // 0x1d86f0: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1d86f4:
    // 0x1d86f4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_1d86f8:
    if (ctx->pc == 0x1D86F8u) {
        ctx->pc = 0x1D86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86F4u;
        // 0x1d86f8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86FCu;
        goto label_1d86fc;
    }
    ctx->pc = 0x1D86F4u;
    {
        const bool branch_taken_0x1d86f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86F4u;
        // 0x1d86f8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86f4) {
            ctx->pc = 0x1D8728u;
            goto label_1d8728;
        }
    }
    ctx->pc = 0x1D86FCu;
label_1d86fc:
    // 0x1d86fc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1d8700:
    // 0x1d8700: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1d8700u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1d8704:
    // 0x1d8704: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d8708:
    if (ctx->pc == 0x1D8708u) {
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8704u;
        // 0x1d8708: 0xdf8287d0  ld          $v0, -0x7830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D870Cu;
        goto label_1d870c;
    }
    ctx->pc = 0x1D8704u;
    {
        const bool branch_taken_0x1d8704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8704u;
        // 0x1d8708: 0xdf8287d0  ld          $v0, -0x7830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8704) {
            ctx->pc = 0x1D872Cu;
            goto label_1d872c;
        }
    }
    ctx->pc = 0x1D870Cu;
label_1d870c:
    // 0x1d870c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d8710:
    // 0x1d8710: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8714:
    // 0x1d8714: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1d8718:
    // 0x1d8718: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d871c:
    if (ctx->pc == 0x1D871Cu) {
        ctx->pc = 0x1D871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8718u;
        // 0x1d871c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8720u;
        goto label_1d8720;
    }
    ctx->pc = 0x1D8718u;
    {
        const bool branch_taken_0x1d8718 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8718u;
        // 0x1d871c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8718) {
            ctx->pc = 0x1D8728u;
            goto label_1d8728;
        }
    }
    ctx->pc = 0x1D8720u;
label_1d8720:
    // 0x1d8720: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1d8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1d8724:
    // 0x1d8724: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1d8724u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1d8728:
    // 0x1d8728: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d8728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d872c:
    // 0x1d872c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8730:
    if (ctx->pc == 0x1D8730u) {
        ctx->pc = 0x1D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D872Cu;
        // 0x1d8730: 0xaf838cbc  sw          $v1, -0x7344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8734u;
        goto label_1d8734;
    }
    ctx->pc = 0x1D872Cu;
    {
        const bool branch_taken_0x1d872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D872Cu;
        // 0x1d8730: 0xaf838cbc  sw          $v1, -0x7344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d872c) {
            ctx->pc = 0x1D873Cu;
            goto label_1d873c;
        }
    }
    ctx->pc = 0x1D8734u;
label_1d8734:
    // 0x1d8734: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d8738:
    if (ctx->pc == 0x1D8738u) {
        ctx->pc = 0x1D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8734u;
        // 0x1d8738: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D873Cu;
        goto label_1d873c;
    }
    ctx->pc = 0x1D8734u;
    {
        const bool branch_taken_0x1d8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8734u;
        // 0x1d8738: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8734) {
            ctx->pc = 0x1D874Cu;
            goto label_1d874c;
        }
    }
    ctx->pc = 0x1D873Cu;
label_1d873c:
    // 0x1d873c: 0x0  nop
    ctx->pc = 0x1d873cu;
    // NOP
label_1d8740:
    // 0x1d8740: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8744:
    // 0x1d8744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8748:
    // 0x1d8748: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d874c:
    // 0x1d874c: 0x0  nop
    ctx->pc = 0x1d874cu;
    // NOP
label_1d8750:
    // 0x1d8750: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d8754:
    // 0x1d8754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d8758:
    if (ctx->pc == 0x1D8758u) {
        ctx->pc = 0x1D875Cu;
        goto label_1d875c;
    }
    ctx->pc = 0x1D8754u;
    {
        const bool branch_taken_0x1d8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8754) {
            ctx->pc = 0x1D8768u;
            goto label_1d8768;
        }
    }
    ctx->pc = 0x1D875Cu;
label_1d875c:
    // 0x1d875c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d8760:
    // 0x1d8760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8764:
    // 0x1d8764: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d8768:
    // 0x1d8768: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d876c:
    // 0x1d876c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8770:
    if (ctx->pc == 0x1D8770u) {
        ctx->pc = 0x1D8774u;
        goto label_1d8774;
    }
    ctx->pc = 0x1D876Cu;
    {
        const bool branch_taken_0x1d876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d876c) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D8774u;
label_1d8774:
    // 0x1d8774: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d8778:
    // 0x1d8778: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d877c:
    // 0x1d877c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d8780:
    if (ctx->pc == 0x1D8780u) {
        ctx->pc = 0x1D8784u;
        goto label_1d8784;
    }
    ctx->pc = 0x1D877Cu;
    {
        const bool branch_taken_0x1d877c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d877c) {
            ctx->pc = 0x1D87A4u;
            goto label_1d87a4;
        }
    }
    ctx->pc = 0x1D8784u;
label_1d8784:
    // 0x1d8784: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d8788:
    // 0x1d8788: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d878c:
    // 0x1d878c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d8790:
    if (ctx->pc == 0x1D8790u) {
        ctx->pc = 0x1D8794u;
        goto label_1d8794;
    }
    ctx->pc = 0x1D878Cu;
    {
        const bool branch_taken_0x1d878c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d878c) {
            ctx->pc = 0x1D879Cu;
            goto label_1d879c;
        }
    }
    ctx->pc = 0x1D8794u;
label_1d8794:
    // 0x1d8794: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8798:
    if (ctx->pc == 0x1D8798u) {
        ctx->pc = 0x1D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8794u;
        // 0x1d8798: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D879Cu;
        goto label_1d879c;
    }
    ctx->pc = 0x1D8794u;
    {
        const bool branch_taken_0x1d8794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8794u;
        // 0x1d8798: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8794) {
            ctx->pc = 0x1D87A4u;
            goto label_1d87a4;
        }
    }
    ctx->pc = 0x1D879Cu;
label_1d879c:
    // 0x1d879c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d87a0:
    // 0x1d87a0: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d87a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d87a4:
    // 0x1d87a4: 0x0  nop
    ctx->pc = 0x1d87a4u;
    // NOP
label_1d87a8:
    // 0x1d87a8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d87ac:
    // 0x1d87ac: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d87b0:
    if (ctx->pc == 0x1D87B0u) {
        ctx->pc = 0x1D87B4u;
        goto label_1d87b4;
    }
    ctx->pc = 0x1D87ACu;
    {
        const bool branch_taken_0x1d87ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d87ac) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D87B4u;
label_1d87b4:
    // 0x1d87b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d87b8:
    // 0x1d87b8: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d87bc:
    // 0x1d87bc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d87c0:
    // 0x1d87c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d87c4:
    if (ctx->pc == 0x1D87C4u) {
        ctx->pc = 0x1D87C8u;
        goto label_1d87c8;
    }
    ctx->pc = 0x1D87C0u;
    {
        const bool branch_taken_0x1d87c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87c0) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D87C8u;
label_1d87c8:
    // 0x1d87c8: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d87cc:
    // 0x1d87cc: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d87d0:
    // 0x1d87d0: 0xc077a7c  jal         func_1DE9F0
label_1d87d4:
    if (ctx->pc == 0x1D87D4u) {
        ctx->pc = 0x1D87D8u;
        goto label_1d87d8;
    }
    ctx->pc = 0x1D87D0u;
    SET_GPR_U32(ctx, 31, 0x1D87D8u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D87D8u;
label_1d87d8:
    // 0x1d87d8: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d87dc:
    // 0x1d87dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d87e0:
    // 0x1d87e0: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d87e4:
    if (ctx->pc == 0x1D87E4u) {
        ctx->pc = 0x1D87E8u;
        goto label_1d87e8;
    }
    ctx->pc = 0x1D87E0u;
    {
        const bool branch_taken_0x1d87e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d87e0) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D87E8u;
label_1d87e8:
    // 0x1d87e8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d87ec:
    // 0x1d87ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d87f0:
    // 0x1d87f0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d87f4:
    if (ctx->pc == 0x1D87F4u) {
        ctx->pc = 0x1D87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87F0u;
        // 0x1d87f4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D87F8u;
        goto label_1d87f8;
    }
    ctx->pc = 0x1D87F0u;
    {
        const bool branch_taken_0x1d87f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87F0u;
        // 0x1d87f4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87f0) {
            ctx->pc = 0x1D8818u;
            goto label_1d8818;
        }
    }
    ctx->pc = 0x1D87F8u;
label_1d87f8:
    // 0x1d87f8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d87fc:
    // 0x1d87fc: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d87fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d8800:
    // 0x1d8800: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d8804:
    if (ctx->pc == 0x1D8804u) {
        ctx->pc = 0x1D8808u;
        goto label_1d8808;
    }
    ctx->pc = 0x1D8800u;
    {
        const bool branch_taken_0x1d8800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8800) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8808u;
label_1d8808:
    // 0x1d8808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d880c:
    // 0x1d880c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d880cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8810:
    // 0x1d8810: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d8814:
    if (ctx->pc == 0x1D8814u) {
        ctx->pc = 0x1D8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8810u;
        // 0x1d8814: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8818u;
        goto label_1d8818;
    }
    ctx->pc = 0x1D8810u;
    {
        const bool branch_taken_0x1d8810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8810u;
        // 0x1d8814: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8810) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8818u;
label_1d8818:
    // 0x1d8818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d881c:
    // 0x1d881c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d8820:
    if (ctx->pc == 0x1D8820u) {
        ctx->pc = 0x1D8824u;
        goto label_1d8824;
    }
    ctx->pc = 0x1D881Cu;
    {
        const bool branch_taken_0x1d881c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d881c) {
            ctx->pc = 0x1D8844u;
            goto label_1d8844;
        }
    }
    ctx->pc = 0x1D8824u;
label_1d8824:
    // 0x1d8824: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8828:
    // 0x1d8828: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d882c:
    // 0x1d882c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8830:
    if (ctx->pc == 0x1D8830u) {
        ctx->pc = 0x1D8834u;
        goto label_1d8834;
    }
    ctx->pc = 0x1D882Cu;
    {
        const bool branch_taken_0x1d882c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d882c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8834u;
label_1d8834:
    // 0x1d8834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8838:
    // 0x1d8838: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d883c:
    // 0x1d883c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8840:
    if (ctx->pc == 0x1D8840u) {
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8844u;
        goto label_1d8844;
    }
    ctx->pc = 0x1D883Cu;
    {
        const bool branch_taken_0x1d883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d883c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0x0  nop
    ctx->pc = 0x1d8844u;
    // NOP
label_1d8848:
    // 0x1d8848: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d884c:
    // 0x1d884c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d8850:
    if (ctx->pc == 0x1D8850u) {
        ctx->pc = 0x1D8854u;
        goto label_1d8854;
    }
    ctx->pc = 0x1D884Cu;
    {
        const bool branch_taken_0x1d884c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d884c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8854u;
label_1d8854:
    // 0x1d8854: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8858:
    // 0x1d8858: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d885c:
    // 0x1d885c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8860:
    if (ctx->pc == 0x1D8860u) {
        ctx->pc = 0x1D8864u;
        goto label_1d8864;
    }
    ctx->pc = 0x1D885Cu;
    {
        const bool branch_taken_0x1d885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d885c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8864u;
label_1d8864:
    // 0x1d8864: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d8864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d8868:
    // 0x1d8868: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d886c:
    // 0x1d886c: 0x0  nop
    ctx->pc = 0x1d886cu;
    // NOP
label_1d8870:
    // 0x1d8870: 0xc07a9d8  jal         func_1EA760
label_1d8874:
    if (ctx->pc == 0x1D8874u) {
        ctx->pc = 0x1D8878u;
        goto label_1d8878;
    }
    ctx->pc = 0x1D8870u;
    SET_GPR_U32(ctx, 31, 0x1D8878u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D8878u;
label_1d8878:
    // 0x1d8878: 0xc04e168  jal         func_1385A0
label_1d887c:
    if (ctx->pc == 0x1D887Cu) {
        ctx->pc = 0x1D8880u;
        goto label_1d8880;
    }
    ctx->pc = 0x1D8878u;
    SET_GPR_U32(ctx, 31, 0x1D8880u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D8878u, 0x1D8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8880u;
label_1d8880:
    // 0x1d8880: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1d8884:
    // 0x1d8884: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8888:
    // 0x1d8888: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d8888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1d888c:
    // 0x1d888c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8890:
    // 0x1d8890: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8894:
    // 0x1d8894: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8898:
    // 0x1d8898: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d889c:
    // 0x1d889c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d889cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88a0:
    // 0x1d88a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d88a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88a4:
    // 0x1d88a4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d88a8:
    // 0x1d88a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d88ac:
    // 0x1d88ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d88b0:
    // 0x1d88b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d88b4:
    // 0x1d88b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d88b8:
    // 0x1d88b8: 0xc066c72  jal         func_19B1C8
label_1d88bc:
    if (ctx->pc == 0x1D88BCu) {
        ctx->pc = 0x1D88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88B8u;
        // 0x1d88bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D88C0u;
        goto label_1d88c0;
    }
    ctx->pc = 0x1D88B8u;
    SET_GPR_U32(ctx, 31, 0x1D88C0u);
    ctx->pc = 0x1D88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88B8u;
    // 0x1d88bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D88B8u, 0x1D88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88C0u;
label_1d88c0:
    // 0x1d88c0: 0xc077e84  jal         func_1DFA10
label_1d88c4:
    if (ctx->pc == 0x1D88C4u) {
        ctx->pc = 0x1D88C8u;
        goto label_1d88c8;
    }
    ctx->pc = 0x1D88C0u;
    SET_GPR_U32(ctx, 31, 0x1D88C8u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D88C8u;
label_1d88c8:
    // 0x1d88c8: 0xc077d90  jal         func_1DF640
label_1d88cc:
    if (ctx->pc == 0x1D88CCu) {
        ctx->pc = 0x1D88D0u;
        goto label_1d88d0;
    }
    ctx->pc = 0x1D88C8u;
    SET_GPR_U32(ctx, 31, 0x1D88D0u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D88D0u;
label_1d88d0:
    // 0x1d88d0: 0xc077ab4  jal         func_1DEAD0
label_1d88d4:
    if (ctx->pc == 0x1D88D4u) {
        ctx->pc = 0x1D88D8u;
        goto label_1d88d8;
    }
    ctx->pc = 0x1D88D0u;
    SET_GPR_U32(ctx, 31, 0x1D88D8u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D88D8u;
label_1d88d8:
    // 0x1d88d8: 0xc077880  jal         func_1DE200
label_1d88dc:
    if (ctx->pc == 0x1D88DCu) {
        ctx->pc = 0x1D88E0u;
        goto label_1d88e0;
    }
    ctx->pc = 0x1D88D8u;
    SET_GPR_U32(ctx, 31, 0x1D88E0u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D88E0u;
label_1d88e0:
    // 0x1d88e0: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d88e4:
    // 0x1d88e4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d88e8:
    if (ctx->pc == 0x1D88E8u) {
        ctx->pc = 0x1D88ECu;
        goto label_1d88ec;
    }
    ctx->pc = 0x1D88E4u;
    {
        const bool branch_taken_0x1d88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d88e4) {
            ctx->pc = 0x1D89C0u;
            goto label_1d89c0;
        }
    }
    ctx->pc = 0x1D88ECu;
label_1d88ec:
    // 0x1d88ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d88f0:
    // 0x1d88f0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d88f4:
    // 0x1d88f4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d88f8:
    // 0x1d88f8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d88fc:
    // 0x1d88fc: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d8900:
    // 0x1d8900: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8904:
    // 0x1d8904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8908:
    // 0x1d8908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d890c:
    // 0x1d890c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d890cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8910:
    // 0x1d8910: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8914:
    // 0x1d8914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8918:
    // 0x1d8918: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1d8918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d891c:
    // 0x1d891c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8920:
    // 0x1d8920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8924:
    // 0x1d8924: 0xc066c72  jal         func_19B1C8
label_1d8928:
    if (ctx->pc == 0x1D8928u) {
        ctx->pc = 0x1D8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8924u;
        // 0x1d8928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D892Cu;
        goto label_1d892c;
    }
    ctx->pc = 0x1D8924u;
    SET_GPR_U32(ctx, 31, 0x1D892Cu);
    ctx->pc = 0x1D8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8924u;
    // 0x1d8928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8924u, 0x1D892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D892Cu;
label_1d892c:
    // 0x1d892c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8930:
    // 0x1d8930: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8934:
    // 0x1d8934: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8938:
    // 0x1d8938: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d893c:
    // 0x1d893c: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8940:
    // 0x1d8940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8944:
    // 0x1d8944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8948:
    // 0x1d8948: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d894c:
    // 0x1d894c: 0xc070e2c  jal         func_1C38B0
label_1d8950:
    if (ctx->pc == 0x1D8950u) {
        ctx->pc = 0x1D8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D894Cu;
        // 0x1d8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8954u;
        goto label_1d8954;
    }
    ctx->pc = 0x1D894Cu;
    SET_GPR_U32(ctx, 31, 0x1D8954u);
    ctx->pc = 0x1D8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894Cu;
    // 0x1d8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8954u;
label_1d8954:
    // 0x1d8954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8958:
    // 0x1d8958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d895c:
    // 0x1d895c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8960:
    // 0x1d8960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8964:
    // 0x1d8964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8968:
    // 0x1d8968: 0xc066c72  jal         func_19B1C8
label_1d896c:
    if (ctx->pc == 0x1D896Cu) {
        ctx->pc = 0x1D896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8968u;
        // 0x1d896c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8970u;
        goto label_1d8970;
    }
    ctx->pc = 0x1D8968u;
    SET_GPR_U32(ctx, 31, 0x1D8970u);
    ctx->pc = 0x1D896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8968u;
    // 0x1d896c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8968u, 0x1D8970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8970u;
label_1d8970:
    // 0x1d8970: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d8974:
    // 0x1d8974: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d8978:
    if (ctx->pc == 0x1D8978u) {
        ctx->pc = 0x1D897Cu;
        goto label_1d897c;
    }
    ctx->pc = 0x1D8974u;
    {
        const bool branch_taken_0x1d8974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8974) {
            ctx->pc = 0x1D89C0u;
            goto label_1d89c0;
        }
    }
    ctx->pc = 0x1D897Cu;
label_1d897c:
    // 0x1d897c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d897cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8980:
    // 0x1d8980: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8984:
    // 0x1d8984: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8988:
    // 0x1d8988: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d898c:
    // 0x1d898c: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d8990:
    // 0x1d8990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8994:
    // 0x1d8994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8998:
    // 0x1d8998: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1d8998u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d899c:
    // 0x1d899c: 0xc070e2c  jal         func_1C38B0
label_1d89a0:
    if (ctx->pc == 0x1D89A0u) {
        ctx->pc = 0x1D89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D899Cu;
        // 0x1d89a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89A4u;
        goto label_1d89a4;
    }
    ctx->pc = 0x1D899Cu;
    SET_GPR_U32(ctx, 31, 0x1D89A4u);
    ctx->pc = 0x1D89A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D899Cu;
    // 0x1d89a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D89A4u;
label_1d89a4:
    // 0x1d89a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d89a8:
    // 0x1d89a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d89a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d89ac:
    // 0x1d89ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d89acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d89b0:
    // 0x1d89b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d89b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b4:
    // 0x1d89b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d89b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b8:
    // 0x1d89b8: 0xc066c72  jal         func_19B1C8
label_1d89bc:
    if (ctx->pc == 0x1D89BCu) {
        ctx->pc = 0x1D89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89B8u;
        // 0x1d89bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89C0u;
        goto label_1d89c0;
    }
    ctx->pc = 0x1D89B8u;
    SET_GPR_U32(ctx, 31, 0x1D89C0u);
    ctx->pc = 0x1D89BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89B8u;
    // 0x1d89bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D89B8u, 0x1D89C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89C0u;
label_1d89c0:
    // 0x1d89c0: 0xc07a86c  jal         func_1EA1B0
label_1d89c4:
    if (ctx->pc == 0x1D89C4u) {
        ctx->pc = 0x1D89C8u;
        goto label_1d89c8;
    }
    ctx->pc = 0x1D89C0u;
    SET_GPR_U32(ctx, 31, 0x1D89C8u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D89C8u;
label_1d89c8:
    // 0x1d89c8: 0xc04e120  jal         func_138480
label_1d89cc:
    if (ctx->pc == 0x1D89CCu) {
        ctx->pc = 0x1D89D0u;
        goto label_1d89d0;
    }
    ctx->pc = 0x1D89C8u;
    SET_GPR_U32(ctx, 31, 0x1D89D0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D89C8u, 0x1D89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D0u;
label_1d89d0:
    // 0x1d89d0: 0xc05b578  jal         func_16D5E0
label_1d89d4:
    if (ctx->pc == 0x1D89D4u) {
        ctx->pc = 0x1D89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89D0u;
        // 0x1d89d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89D8u;
        goto label_1d89d8;
    }
    ctx->pc = 0x1D89D0u;
    SET_GPR_U32(ctx, 31, 0x1D89D8u);
    ctx->pc = 0x1D89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89D0u;
    // 0x1d89d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D89D0u, 0x1D89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D8u;
label_1d89d8:
    // 0x1d89d8: 0xc060258  jal         func_180960
label_1d89dc:
    if (ctx->pc == 0x1D89DCu) {
        ctx->pc = 0x1D89E0u;
        goto label_1d89e0;
    }
    ctx->pc = 0x1D89D8u;
    SET_GPR_U32(ctx, 31, 0x1D89E0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D89D8u, 0x1D89E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89E0u;
label_1d89e0:
    // 0x1d89e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d89e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d89e4:
    // 0x1d89e4: 0x2a210031  slti        $at, $s1, 0x31
    ctx->pc = 0x1d89e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1d89e8:
    // 0x1d89e8: 0x1420ff39  bnez        $at, . + 4 + (-0xC7 << 2)
label_1d89ec:
    if (ctx->pc == 0x1D89ECu) {
        ctx->pc = 0x1D89F0u;
        goto label_1d89f0;
    }
    ctx->pc = 0x1D89E8u;
    {
        const bool branch_taken_0x1d89e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d89e8) {
            ctx->pc = 0x1D86D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d86d0;
        }
    }
    ctx->pc = 0x1D89F0u;
label_1d89f0:
    // 0x1d89f0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d89f4:
    // 0x1d89f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1d89f8:
    // 0x1d89f8: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1d89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1d89fc:
    // 0x1d89fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8a00:
    // 0x1d8a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8a04:
    // 0x1d8a04: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d8a08:
    // 0x1d8a08: 0x2463b680  addiu       $v1, $v1, -0x4980
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948480));
label_1d8a0c:
    // 0x1d8a0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d8a10:
    // 0x1d8a10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8a14:
    // 0x1d8a14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d8a18:
    // 0x1d8a18: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1d8a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8a1c:
    // 0x1d8a1c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1d8a20:
    if (ctx->pc == 0x1D8A20u) {
        ctx->pc = 0x1D8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A1Cu;
        // 0x1d8a20: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A24u;
        goto label_1d8a24;
    }
    ctx->pc = 0x1D8A1Cu;
    {
        const bool branch_taken_0x1d8a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A1Cu;
        // 0x1d8a20: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a1c) {
            ctx->pc = 0x1D8A30u;
            goto label_1d8a30;
        }
    }
    ctx->pc = 0x1D8A24u;
label_1d8a24:
    // 0x1d8a24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d8a28:
    // 0x1d8a28: 0x16220177  bne         $s1, $v0, . + 4 + (0x177 << 2)
label_1d8a2c:
    if (ctx->pc == 0x1D8A2Cu) {
        ctx->pc = 0x1D8A30u;
        goto label_1d8a30;
    }
    ctx->pc = 0x1D8A28u;
    {
        const bool branch_taken_0x1d8a28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8a28) {
            ctx->pc = 0x1D9008u;
            { ctx->pc = 0x1d9008; return; }
        }
    }
    ctx->pc = 0x1D8A30u;
label_1d8a30:
    // 0x1d8a30: 0xc084900  jal         func_212400
label_1d8a34:
    if (ctx->pc == 0x1D8A34u) {
        ctx->pc = 0x1D8A38u;
        goto label_1d8a38;
    }
    ctx->pc = 0x1D8A30u;
    SET_GPR_U32(ctx, 31, 0x1D8A38u);
    ctx->pc = 0x212400u;
    { ctx->pc = 0x212400; return; }
    ctx->pc = 0x1D8A38u;
label_1d8a38:
    // 0x1d8a38: 0x14400169  bnez        $v0, . + 4 + (0x169 << 2)
label_1d8a3c:
    if (ctx->pc == 0x1D8A3Cu) {
        ctx->pc = 0x1D8A40u;
        goto label_1d8a40;
    }
    ctx->pc = 0x1D8A38u;
    {
        const bool branch_taken_0x1d8a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a38) {
            ctx->pc = 0x1D8FE0u;
            { ctx->pc = 0x1d8fe0; return; }
        }
    }
    ctx->pc = 0x1D8A40u;
label_1d8a40:
    // 0x1d8a40: 0xc04439c  jal         func_110E70
label_1d8a44:
    if (ctx->pc == 0x1D8A44u) {
        ctx->pc = 0x1D8A48u;
        goto label_1d8a48;
    }
    ctx->pc = 0x1D8A40u;
    SET_GPR_U32(ctx, 31, 0x1D8A48u);
    ctx->pc = 0x110E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E70u, 0x1D8A40u, 0x1D8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A48u;
label_1d8a48:
    // 0x1d8a48: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
label_1d8a4c:
    if (ctx->pc == 0x1D8A4Cu) {
        ctx->pc = 0x1D8A50u;
        goto label_1d8a50;
    }
    ctx->pc = 0x1D8A48u;
    {
        const bool branch_taken_0x1d8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a48) {
            ctx->pc = 0x1D8FE0u;
            { ctx->pc = 0x1d8fe0; return; }
        }
    }
    ctx->pc = 0x1D8A50u;
label_1d8a50:
    // 0x1d8a50: 0xc08fec8  jal         func_23FB20
label_1d8a54:
    if (ctx->pc == 0x1D8A54u) {
        ctx->pc = 0x1D8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A50u;
        // 0x1d8a54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A58u;
        goto label_1d8a58;
    }
    ctx->pc = 0x1D8A50u;
    SET_GPR_U32(ctx, 31, 0x1D8A58u);
    ctx->pc = 0x1D8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A50u;
    // 0x1d8a54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    { ctx->pc = 0x23fb20; return; }
    ctx->pc = 0x1D8A58u;
label_1d8a58:
    // 0x1d8a58: 0xc08fee8  jal         func_23FBA0
label_1d8a5c:
    if (ctx->pc == 0x1D8A5Cu) {
        ctx->pc = 0x1D8A60u;
        goto label_1d8a60;
    }
    ctx->pc = 0x1D8A58u;
    SET_GPR_U32(ctx, 31, 0x1D8A60u);
    ctx->pc = 0x23FBA0u;
    { ctx->pc = 0x23fba0; return; }
    ctx->pc = 0x1D8A60u;
label_1d8a60:
    // 0x1d8a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8a64:
    // 0x1d8a64: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d8a64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d8a68:
    // 0x1d8a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8a6c:
    if (ctx->pc == 0x1D8A6Cu) {
        ctx->pc = 0x1D8A70u;
        goto label_1d8a70;
    }
    ctx->pc = 0x1D8A68u;
    {
        const bool branch_taken_0x1d8a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a68) {
            ctx->pc = 0x1D8A78u;
            goto label_1d8a78;
        }
    }
    ctx->pc = 0x1D8A70u;
label_1d8a70:
    // 0x1d8a70: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d8a74:
    if (ctx->pc == 0x1D8A74u) {
        ctx->pc = 0x1D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70u;
        // 0x1d8a74: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A78u;
        goto label_1d8a78;
    }
    ctx->pc = 0x1D8A70u;
    {
        const bool branch_taken_0x1d8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70u;
        // 0x1d8a74: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a70) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D8A78u;
label_1d8a78:
    // 0x1d8a78: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8a7c:
    // 0x1d8a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8a80:
    // 0x1d8a80: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d8a84:
    // 0x1d8a84: 0x0  nop
    ctx->pc = 0x1d8a84u;
    // NOP
label_1d8a88:
    // 0x1d8a88: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d8a8c:
    // 0x1d8a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d8a90:
    if (ctx->pc == 0x1D8A90u) {
        ctx->pc = 0x1D8A94u;
        goto label_1d8a94;
    }
    ctx->pc = 0x1D8A8Cu;
    {
        const bool branch_taken_0x1d8a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a8c) {
            ctx->pc = 0x1D8AA0u;
            goto label_1d8aa0;
        }
    }
    ctx->pc = 0x1D8A94u;
label_1d8a94:
    // 0x1d8a94: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d8a98:
    // 0x1d8a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8a9c:
    // 0x1d8a9c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d8aa0:
    // 0x1d8aa0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d8aa4:
    // 0x1d8aa4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8aa8:
    if (ctx->pc == 0x1D8AA8u) {
        ctx->pc = 0x1D8AACu;
        goto label_1d8aac;
    }
    ctx->pc = 0x1D8AA4u;
    {
        const bool branch_taken_0x1d8aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8aa4) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8AACu;
label_1d8aac:
    // 0x1d8aac: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d8ab0:
    // 0x1d8ab0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8ab4:
    // 0x1d8ab4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d8ab8:
    if (ctx->pc == 0x1D8AB8u) {
        ctx->pc = 0x1D8ABCu;
        goto label_1d8abc;
    }
    ctx->pc = 0x1D8AB4u;
    {
        const bool branch_taken_0x1d8ab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ab4) {
            ctx->pc = 0x1D8ADCu;
            goto label_1d8adc;
        }
    }
    ctx->pc = 0x1D8ABCu;
label_1d8abc:
    // 0x1d8abc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d8ac0:
    // 0x1d8ac0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8ac4:
    // 0x1d8ac4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d8ac8:
    if (ctx->pc == 0x1D8AC8u) {
        ctx->pc = 0x1D8ACCu;
        goto label_1d8acc;
    }
    ctx->pc = 0x1D8AC4u;
    {
        const bool branch_taken_0x1d8ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ac4) {
            ctx->pc = 0x1D8AD4u;
            goto label_1d8ad4;
        }
    }
    ctx->pc = 0x1D8ACCu;
label_1d8acc:
    // 0x1d8acc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8ad0:
    if (ctx->pc == 0x1D8AD0u) {
        ctx->pc = 0x1D8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACCu;
        // 0x1d8ad0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AD4u;
        goto label_1d8ad4;
    }
    ctx->pc = 0x1D8ACCu;
    {
        const bool branch_taken_0x1d8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACCu;
        // 0x1d8ad0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8acc) {
            ctx->pc = 0x1D8ADCu;
            goto label_1d8adc;
        }
    }
    ctx->pc = 0x1D8AD4u;
label_1d8ad4:
    // 0x1d8ad4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d8ad8:
    // 0x1d8ad8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d8adc:
    // 0x1d8adc: 0x0  nop
    ctx->pc = 0x1d8adcu;
    // NOP
label_1d8ae0:
    // 0x1d8ae0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8ae4:
    // 0x1d8ae4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d8ae8:
    if (ctx->pc == 0x1D8AE8u) {
        ctx->pc = 0x1D8AECu;
        goto label_1d8aec;
    }
    ctx->pc = 0x1D8AE4u;
    {
        const bool branch_taken_0x1d8ae4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8ae4) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8AECu;
label_1d8aec:
    // 0x1d8aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d8af0:
    // 0x1d8af0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d8af4:
    // 0x1d8af4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8af8:
    // 0x1d8af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8afc:
    if (ctx->pc == 0x1D8AFCu) {
        ctx->pc = 0x1D8B00u;
        goto label_1d8b00;
    }
    ctx->pc = 0x1D8AF8u;
    {
        const bool branch_taken_0x1d8af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8af8) {
            ctx->pc = 0x1D8B08u;
            goto label_1d8b08;
        }
    }
    ctx->pc = 0x1D8B00u;
label_1d8b00:
    // 0x1d8b00: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d8b04:
    // 0x1d8b04: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d8b08:
    // 0x1d8b08: 0xc077a7c  jal         func_1DE9F0
label_1d8b0c:
    if (ctx->pc == 0x1D8B0Cu) {
        ctx->pc = 0x1D8B10u;
        goto label_1d8b10;
    }
    ctx->pc = 0x1D8B08u;
    SET_GPR_U32(ctx, 31, 0x1D8B10u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D8B10u;
label_1d8b10:
    // 0x1d8b10: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d8b14:
    // 0x1d8b14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8b18:
    // 0x1d8b18: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d8b1c:
    if (ctx->pc == 0x1D8B1Cu) {
        ctx->pc = 0x1D8B20u;
        goto label_1d8b20;
    }
    ctx->pc = 0x1D8B18u;
    {
        const bool branch_taken_0x1d8b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8b18) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b24:
    // 0x1d8b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8b28:
    // 0x1d8b28: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d8b2c:
    if (ctx->pc == 0x1D8B2Cu) {
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B30u;
        goto label_1d8b30;
    }
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8B50u;
            goto label_1d8b50;
        }
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b34:
    // 0x1d8b34: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d8b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d8b38:
    // 0x1d8b38: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d8b3c:
    if (ctx->pc == 0x1D8B3Cu) {
        ctx->pc = 0x1D8B40u;
        goto label_1d8b40;
    }
    ctx->pc = 0x1D8B38u;
    {
        const bool branch_taken_0x1d8b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b38) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B40u;
label_1d8b40:
    // 0x1d8b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8b44:
    // 0x1d8b44: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8b48:
    // 0x1d8b48: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d8b4c:
    if (ctx->pc == 0x1D8B4Cu) {
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B48u;
        // 0x1d8b4c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B50u;
        goto label_1d8b50;
    }
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B48u;
        // 0x1d8b4c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B50u;
label_1d8b50:
    // 0x1d8b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8b54:
    // 0x1d8b54: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d8b58:
    if (ctx->pc == 0x1D8B58u) {
        ctx->pc = 0x1D8B5Cu;
        goto label_1d8b5c;
    }
    ctx->pc = 0x1D8B54u;
    {
        const bool branch_taken_0x1d8b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b54) {
            ctx->pc = 0x1D8B7Cu;
            goto label_1d8b7c;
        }
    }
    ctx->pc = 0x1D8B5Cu;
label_1d8b5c:
    // 0x1d8b5c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b60:
    // 0x1d8b60: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d8b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d8b64:
    // 0x1d8b64: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8b68:
    if (ctx->pc == 0x1D8B68u) {
        ctx->pc = 0x1D8B6Cu;
        goto label_1d8b6c;
    }
    ctx->pc = 0x1D8B64u;
    {
        const bool branch_taken_0x1d8b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b64) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B6Cu;
label_1d8b6c:
    // 0x1d8b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8b70:
    // 0x1d8b70: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8b74:
    // 0x1d8b74: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8b78:
    if (ctx->pc == 0x1D8B78u) {
        ctx->pc = 0x1D8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B74u;
        // 0x1d8b78: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B7Cu;
        goto label_1d8b7c;
    }
    ctx->pc = 0x1D8B74u;
    {
        const bool branch_taken_0x1d8b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B74u;
        // 0x1d8b78: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b74) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0x0  nop
    ctx->pc = 0x1d8b7cu;
    // NOP
label_1d8b80:
    // 0x1d8b80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8b84:
    // 0x1d8b84: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d8b88:
    if (ctx->pc == 0x1D8B88u) {
        ctx->pc = 0x1D8B8Cu;
        goto label_1d8b8c;
    }
    ctx->pc = 0x1D8B84u;
    {
        const bool branch_taken_0x1d8b84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b84) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B8Cu;
label_1d8b8c:
    // 0x1d8b8c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8b90:
    // 0x1d8b90: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d8b94:
    // 0x1d8b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8b98:
    if (ctx->pc == 0x1D8B98u) {
        ctx->pc = 0x1D8B9Cu;
        goto label_1d8b9c;
    }
    ctx->pc = 0x1D8B94u;
    {
        const bool branch_taken_0x1d8b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b94) {
            ctx->pc = 0x1D8BA4u;
            goto label_1d8ba4;
        }
    }
    ctx->pc = 0x1D8B9Cu;
label_1d8b9c:
    // 0x1d8b9c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d8ba0:
    // 0x1d8ba0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8ba4:
    // 0x1d8ba4: 0x0  nop
    ctx->pc = 0x1d8ba4u;
    // NOP
label_1d8ba8:
    // 0x1d8ba8: 0xc07a9d8  jal         func_1EA760
label_1d8bac:
    if (ctx->pc == 0x1D8BACu) {
        ctx->pc = 0x1D8BB0u;
        goto label_1d8bb0;
    }
    ctx->pc = 0x1D8BA8u;
    SET_GPR_U32(ctx, 31, 0x1D8BB0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D8BB0u;
label_1d8bb0:
    // 0x1d8bb0: 0xc04e168  jal         func_1385A0
label_1d8bb4:
    if (ctx->pc == 0x1D8BB4u) {
        ctx->pc = 0x1D8BB8u;
        goto label_1d8bb8;
    }
    ctx->pc = 0x1D8BB0u;
    SET_GPR_U32(ctx, 31, 0x1D8BB8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D8BB0u, 0x1D8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BB8u;
label_1d8bb8:
    // 0x1d8bb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8bbc:
    // 0x1d8bbc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8bc0:
    // 0x1d8bc0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8bc4:
    // 0x1d8bc4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8bc8:
    // 0x1d8bc8: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8bcc:
    // 0x1d8bcc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8bd0:
    // 0x1d8bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8bd4:
    // 0x1d8bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8bd8:
    // 0x1d8bd8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8bdc:
    // 0x1d8bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8be0:
    // 0x1d8be0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8be4:
    // 0x1d8be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8be8:
    // 0x1d8be8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8bec:
    // 0x1d8bec: 0xc066c72  jal         func_19B1C8
label_1d8bf0:
    if (ctx->pc == 0x1D8BF0u) {
        ctx->pc = 0x1D8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BECu;
        // 0x1d8bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BF4u;
        goto label_1d8bf4;
    }
    ctx->pc = 0x1D8BECu;
    SET_GPR_U32(ctx, 31, 0x1D8BF4u);
    ctx->pc = 0x1D8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BECu;
    // 0x1d8bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8BECu, 0x1D8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BF4u;
label_1d8bf4:
    // 0x1d8bf4: 0xc077e84  jal         func_1DFA10
label_1d8bf8:
    if (ctx->pc == 0x1D8BF8u) {
        ctx->pc = 0x1D8BFCu;
        goto label_1d8bfc;
    }
    ctx->pc = 0x1D8BF4u;
    SET_GPR_U32(ctx, 31, 0x1D8BFCu);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D8BFCu;
label_1d8bfc:
    // 0x1d8bfc: 0xc077d90  jal         func_1DF640
label_1d8c00:
    if (ctx->pc == 0x1D8C00u) {
        ctx->pc = 0x1D8C04u;
        goto label_1d8c04;
    }
    ctx->pc = 0x1D8BFCu;
    SET_GPR_U32(ctx, 31, 0x1D8C04u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D8C04u;
label_1d8c04:
    // 0x1d8c04: 0xc077ab4  jal         func_1DEAD0
label_1d8c08:
    if (ctx->pc == 0x1D8C08u) {
        ctx->pc = 0x1D8C0Cu;
        goto label_1d8c0c;
    }
    ctx->pc = 0x1D8C04u;
    SET_GPR_U32(ctx, 31, 0x1D8C0Cu);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D8C0Cu;
label_1d8c0c:
    // 0x1d8c0c: 0xc077880  jal         func_1DE200
label_1d8c10:
    if (ctx->pc == 0x1D8C10u) {
        ctx->pc = 0x1D8C14u;
        goto label_1d8c14;
    }
    ctx->pc = 0x1D8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C14u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D8C14u;
label_1d8c14:
    // 0x1d8c14: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d8c18:
    // 0x1d8c18: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d8c1c:
    if (ctx->pc == 0x1D8C1Cu) {
        ctx->pc = 0x1D8C20u;
        goto label_1d8c20;
    }
    ctx->pc = 0x1D8C18u;
    {
        const bool branch_taken_0x1d8c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c18) {
            ctx->pc = 0x1D8CF4u;
            goto label_1d8cf4;
        }
    }
    ctx->pc = 0x1D8C20u;
label_1d8c20:
    // 0x1d8c20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8c24:
    // 0x1d8c24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8c28:
    // 0x1d8c28: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8c2c:
    // 0x1d8c2c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8c30:
    // 0x1d8c30: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d8c34:
    // 0x1d8c34: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8c38:
    // 0x1d8c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c3c:
    // 0x1d8c3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c40:
    // 0x1d8c40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c44:
    // 0x1d8c44: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8c48:
    // 0x1d8c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8c4c:
    // 0x1d8c4c: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1d8c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8c50:
    // 0x1d8c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8c54:
    // 0x1d8c54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8c58:
    // 0x1d8c58: 0xc066c72  jal         func_19B1C8
label_1d8c5c:
    if (ctx->pc == 0x1D8C5Cu) {
        ctx->pc = 0x1D8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C58u;
        // 0x1d8c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8C60u;
        goto label_1d8c60;
    }
    ctx->pc = 0x1D8C58u;
    SET_GPR_U32(ctx, 31, 0x1D8C60u);
    ctx->pc = 0x1D8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C58u;
    // 0x1d8c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8C58u, 0x1D8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C60u;
label_1d8c60:
    // 0x1d8c60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8c64:
    // 0x1d8c64: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8c68:
    // 0x1d8c68: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8c6c:
    // 0x1d8c6c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8c70:
    // 0x1d8c70: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d8c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8c74:
    // 0x1d8c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8c78:
    // 0x1d8c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8c7c:
    // 0x1d8c7c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8c80:
    // 0x1d8c80: 0xc070e2c  jal         func_1C38B0
label_1d8c84:
    if (ctx->pc == 0x1D8C84u) {
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C80u;
        // 0x1d8c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8C88u;
        goto label_1d8c88;
    }
    ctx->pc = 0x1D8C80u;
    SET_GPR_U32(ctx, 31, 0x1D8C88u);
    ctx->pc = 0x1D8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C80u;
    // 0x1d8c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8C88u;
label_1d8c88:
    // 0x1d8c88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c8c:
    // 0x1d8c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c90:
    // 0x1d8c90: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8c94:
    // 0x1d8c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c98:
    // 0x1d8c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c9c:
    // 0x1d8c9c: 0xc066c72  jal         func_19B1C8
label_1d8ca0:
    if (ctx->pc == 0x1D8CA0u) {
        ctx->pc = 0x1D8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C9Cu;
        // 0x1d8ca0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CA4u;
        goto label_1d8ca4;
    }
    ctx->pc = 0x1D8C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8CA4u);
    ctx->pc = 0x1D8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C9Cu;
    // 0x1d8ca0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8C9Cu, 0x1D8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CA4u;
label_1d8ca4:
    // 0x1d8ca4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1d8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1d8ca8:
    // 0x1d8ca8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d8cac:
    if (ctx->pc == 0x1D8CACu) {
        ctx->pc = 0x1D8CB0u;
        goto label_1d8cb0;
    }
    ctx->pc = 0x1D8CA8u;
    {
        const bool branch_taken_0x1d8ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ca8) {
            ctx->pc = 0x1D8CF4u;
            goto label_1d8cf4;
        }
    }
    ctx->pc = 0x1D8CB0u;
label_1d8cb0:
    // 0x1d8cb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8cb4:
    // 0x1d8cb4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8cb8:
    // 0x1d8cb8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8cbc:
    // 0x1d8cbc: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d8cc0:
    // 0x1d8cc0: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1d8cc4:
    // 0x1d8cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8cc8:
    // 0x1d8cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8ccc:
    // 0x1d8ccc: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d8cd0:
    // 0x1d8cd0: 0xc070e2c  jal         func_1C38B0
label_1d8cd4:
    if (ctx->pc == 0x1D8CD4u) {
        ctx->pc = 0x1D8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CD0u;
        // 0x1d8cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CD8u;
        goto label_1d8cd8;
    }
    ctx->pc = 0x1D8CD0u;
    SET_GPR_U32(ctx, 31, 0x1D8CD8u);
    ctx->pc = 0x1D8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CD0u;
    // 0x1d8cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8CD8u;
label_1d8cd8:
    // 0x1d8cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8cdc:
    // 0x1d8cdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ce0:
    // 0x1d8ce0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8ce4:
    // 0x1d8ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ce8:
    // 0x1d8ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8cec:
    // 0x1d8cec: 0xc066c72  jal         func_19B1C8
label_1d8cf0:
    if (ctx->pc == 0x1D8CF0u) {
        ctx->pc = 0x1D8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CECu;
        // 0x1d8cf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CF4u;
        goto label_1d8cf4;
    }
    ctx->pc = 0x1D8CECu;
    SET_GPR_U32(ctx, 31, 0x1D8CF4u);
    ctx->pc = 0x1D8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CECu;
    // 0x1d8cf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8CECu, 0x1D8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CF4u;
label_1d8cf4:
    // 0x1d8cf4: 0x0  nop
    ctx->pc = 0x1d8cf4u;
    // NOP
label_1d8cf8:
    // 0x1d8cf8: 0xc07a86c  jal         func_1EA1B0
label_1d8cfc:
    if (ctx->pc == 0x1D8CFCu) {
        ctx->pc = 0x1D8D00u;
        goto label_1d8d00;
    }
    ctx->pc = 0x1D8CF8u;
    SET_GPR_U32(ctx, 31, 0x1D8D00u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1D8D00u;
label_1d8d00:
    // 0x1d8d00: 0xc04e120  jal         func_138480
label_1d8d04:
    if (ctx->pc == 0x1D8D04u) {
        ctx->pc = 0x1D8D08u;
        goto label_1d8d08;
    }
    ctx->pc = 0x1D8D00u;
    SET_GPR_U32(ctx, 31, 0x1D8D08u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D8D00u, 0x1D8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D08u;
label_1d8d08:
    // 0x1d8d08: 0xc05b578  jal         func_16D5E0
label_1d8d0c:
    if (ctx->pc == 0x1D8D0Cu) {
        ctx->pc = 0x1D8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D08u;
        // 0x1d8d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D10u;
        goto label_1d8d10;
    }
    ctx->pc = 0x1D8D08u;
    SET_GPR_U32(ctx, 31, 0x1D8D10u);
    ctx->pc = 0x1D8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D08u;
    // 0x1d8d0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D8D08u, 0x1D8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D10u;
label_1d8d10:
    // 0x1d8d10: 0xc060258  jal         func_180960
label_1d8d14:
    if (ctx->pc == 0x1D8D14u) {
        ctx->pc = 0x1D8D18u;
        goto label_1d8d18;
    }
    ctx->pc = 0x1D8D10u;
    SET_GPR_U32(ctx, 31, 0x1D8D18u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D8D10u, 0x1D8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D18u;
label_1d8d18:
    // 0x1d8d18: 0x1220ff4f  beqz        $s1, . + 4 + (-0xB1 << 2)
label_1d8d1c:
    if (ctx->pc == 0x1D8D1Cu) {
        ctx->pc = 0x1D8D20u;
        goto label_1d8d20;
    }
    ctx->pc = 0x1D8D18u;
    {
        const bool branch_taken_0x1d8d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d18) {
            ctx->pc = 0x1D8A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a58;
        }
    }
    ctx->pc = 0x1D8D20u;
label_1d8d20:
    // 0x1d8d20: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d8d24:
    // 0x1d8d24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8d28:
    if (ctx->pc == 0x1D8D28u) {
        ctx->pc = 0x1D8D2Cu;
        goto label_1d8d2c;
    }
    ctx->pc = 0x1D8D24u;
    {
        const bool branch_taken_0x1d8d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d24) {
            ctx->pc = 0x1D8D34u;
            goto label_1d8d34;
        }
    }
    ctx->pc = 0x1D8D2Cu;
label_1d8d2c:
    // 0x1d8d2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d8d30:
    if (ctx->pc == 0x1D8D30u) {
        ctx->pc = 0x1D8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D2Cu;
        // 0x1d8d30: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D34u;
        goto label_1d8d34;
    }
    ctx->pc = 0x1D8D2Cu;
    {
        const bool branch_taken_0x1d8d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D2Cu;
        // 0x1d8d30: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d2c) {
            ctx->pc = 0x1D8D44u;
            goto label_1d8d44;
        }
    }
    ctx->pc = 0x1D8D34u;
label_1d8d34:
    // 0x1d8d34: 0x0  nop
    ctx->pc = 0x1d8d34u;
    // NOP
label_1d8d38:
    // 0x1d8d38: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8d3c:
    // 0x1d8d3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8d40:
    // 0x1d8d40: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d8d44:
    // 0x1d8d44: 0x0  nop
    ctx->pc = 0x1d8d44u;
    // NOP
label_1d8d48:
    // 0x1d8d48: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d8d4c:
    // 0x1d8d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d8d50:
    if (ctx->pc == 0x1D8D50u) {
        ctx->pc = 0x1D8D54u;
        goto label_1d8d54;
    }
    ctx->pc = 0x1D8D4Cu;
    {
        const bool branch_taken_0x1d8d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d4c) {
            ctx->pc = 0x1D8D60u;
            goto label_1d8d60;
        }
    }
    ctx->pc = 0x1D8D54u;
label_1d8d54:
    // 0x1d8d54: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d8d58:
    // 0x1d8d58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8d5c:
    // 0x1d8d5c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d8d60:
    // 0x1d8d60: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d8d64:
    // 0x1d8d64: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8d68:
    if (ctx->pc == 0x1D8D68u) {
        ctx->pc = 0x1D8D6Cu;
        goto label_1d8d6c;
    }
    ctx->pc = 0x1D8D64u;
    {
        const bool branch_taken_0x1d8d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d64) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8D6Cu;
label_1d8d6c:
    // 0x1d8d6c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d8d70:
    // 0x1d8d70: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8d74:
    // 0x1d8d74: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d8d78:
    if (ctx->pc == 0x1D8D78u) {
        ctx->pc = 0x1D8D7Cu;
        goto label_1d8d7c;
    }
    ctx->pc = 0x1D8D74u;
    {
        const bool branch_taken_0x1d8d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d74) {
            ctx->pc = 0x1D8D9Cu;
            goto label_1d8d9c;
        }
    }
    ctx->pc = 0x1D8D7Cu;
label_1d8d7c:
    // 0x1d8d7c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d8d80:
    // 0x1d8d80: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d8d84:
    // 0x1d8d84: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d8d88:
    if (ctx->pc == 0x1D8D88u) {
        ctx->pc = 0x1D8D8Cu;
        goto label_1d8d8c;
    }
    ctx->pc = 0x1D8D84u;
    {
        const bool branch_taken_0x1d8d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d84) {
            ctx->pc = 0x1D8D94u;
            goto label_1d8d94;
        }
    }
    ctx->pc = 0x1D8D8Cu;
label_1d8d8c:
    // 0x1d8d8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8d90:
    if (ctx->pc == 0x1D8D90u) {
        ctx->pc = 0x1D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D8Cu;
        // 0x1d8d90: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D94u;
        goto label_1d8d94;
    }
    ctx->pc = 0x1D8D8Cu;
    {
        const bool branch_taken_0x1d8d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D8Cu;
        // 0x1d8d90: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d8c) {
            ctx->pc = 0x1D8D9Cu;
            goto label_1d8d9c;
        }
    }
    ctx->pc = 0x1D8D94u;
label_1d8d94:
    // 0x1d8d94: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d8d98:
    // 0x1d8d98: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d8d9c:
    // 0x1d8d9c: 0x0  nop
    ctx->pc = 0x1d8d9cu;
    // NOP
label_1d8da0:
    // 0x1d8da0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8da4:
    // 0x1d8da4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d8da8:
    if (ctx->pc == 0x1D8DA8u) {
        ctx->pc = 0x1D8DACu;
        goto label_1d8dac;
    }
    ctx->pc = 0x1D8DA4u;
    {
        const bool branch_taken_0x1d8da4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8da4) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DACu;
label_1d8dac:
    // 0x1d8dac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d8db0:
    // 0x1d8db0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d8db4:
    // 0x1d8db4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d8db8:
    // 0x1d8db8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8dbc:
    if (ctx->pc == 0x1D8DBCu) {
        ctx->pc = 0x1D8DC0u;
        goto label_1d8dc0;
    }
    ctx->pc = 0x1D8DB8u;
    {
        const bool branch_taken_0x1d8db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8db8) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DC0u;
label_1d8dc0:
    // 0x1d8dc0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d8dc4:
    // 0x1d8dc4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d8dc8:
    // 0x1d8dc8: 0xc077a7c  jal         func_1DE9F0
label_1d8dcc:
    if (ctx->pc == 0x1D8DCCu) {
        ctx->pc = 0x1D8DD0u;
        goto label_1d8dd0;
    }
    ctx->pc = 0x1D8DC8u;
    SET_GPR_U32(ctx, 31, 0x1D8DD0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D8DD0u;
label_1d8dd0:
    // 0x1d8dd0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d8dd4:
    // 0x1d8dd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8dd8:
    // 0x1d8dd8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d8ddc:
    if (ctx->pc == 0x1D8DDCu) {
        ctx->pc = 0x1D8DE0u;
        goto label_1d8de0;
    }
    ctx->pc = 0x1D8DD8u;
    {
        const bool branch_taken_0x1d8dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8dd8) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8DE0u;
label_1d8de0:
    // 0x1d8de0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8de4:
    // 0x1d8de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8de8:
    // 0x1d8de8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d8dec:
    if (ctx->pc == 0x1D8DECu) {
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE8u;
        // 0x1d8dec: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8DF0u;
        goto label_1d8df0;
    }
    ctx->pc = 0x1D8DE8u;
    {
        const bool branch_taken_0x1d8de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE8u;
        // 0x1d8dec: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8de8) {
            ctx->pc = 0x1D8E10u;
            goto label_1d8e10;
        }
    }
    ctx->pc = 0x1D8DF0u;
label_1d8df0:
    // 0x1d8df0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8df4:
    // 0x1d8df4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d8df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d8df8:
    // 0x1d8df8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d8dfc:
    if (ctx->pc == 0x1D8DFCu) {
        ctx->pc = 0x1D8E00u;
        goto label_1d8e00;
    }
    ctx->pc = 0x1D8DF8u;
    {
        const bool branch_taken_0x1d8df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8df8) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E00u;
label_1d8e00:
    // 0x1d8e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8e04:
    // 0x1d8e04: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8e08:
    // 0x1d8e08: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d8e0c:
    if (ctx->pc == 0x1D8E0Cu) {
        ctx->pc = 0x1D8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E08u;
        // 0x1d8e0c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E10u;
        goto label_1d8e10;
    }
    ctx->pc = 0x1D8E08u;
    {
        const bool branch_taken_0x1d8e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E08u;
        // 0x1d8e0c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e08) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E10u;
label_1d8e10:
    // 0x1d8e10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8e14:
    // 0x1d8e14: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d8e18:
    if (ctx->pc == 0x1D8E18u) {
        ctx->pc = 0x1D8E1Cu;
        goto label_1d8e1c;
    }
    ctx->pc = 0x1D8E14u;
    {
        const bool branch_taken_0x1d8e14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8e14) {
            ctx->pc = 0x1D8E3Cu;
            goto label_1d8e3c;
        }
    }
    ctx->pc = 0x1D8E1Cu;
label_1d8e1c:
    // 0x1d8e1c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8e20:
    // 0x1d8e20: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d8e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d8e24:
    // 0x1d8e24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8e28:
    if (ctx->pc == 0x1D8E28u) {
        ctx->pc = 0x1D8E2Cu;
        goto label_1d8e2c;
    }
    ctx->pc = 0x1D8E24u;
    {
        const bool branch_taken_0x1d8e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e24) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E2Cu;
label_1d8e2c:
    // 0x1d8e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8e30:
    // 0x1d8e30: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8e34:
    // 0x1d8e34: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8e38:
    if (ctx->pc == 0x1D8E38u) {
        ctx->pc = 0x1D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E34u;
        // 0x1d8e38: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E3Cu;
        goto label_1d8e3c;
    }
    ctx->pc = 0x1D8E34u;
    {
        const bool branch_taken_0x1d8e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E34u;
        // 0x1d8e38: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e34) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E3Cu;
label_1d8e3c:
    // 0x1d8e3c: 0x0  nop
    ctx->pc = 0x1d8e3cu;
    // NOP
label_1d8e40:
    // 0x1d8e40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8e44:
    // 0x1d8e44: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d8e48:
    if (ctx->pc == 0x1D8E48u) {
        ctx->pc = 0x1D8E4Cu;
        goto label_1d8e4c;
    }
    ctx->pc = 0x1D8E44u;
    {
        const bool branch_taken_0x1d8e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8e44) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E4Cu;
label_1d8e4c:
    // 0x1d8e4c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8e50:
    // 0x1d8e50: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d8e54:
    // 0x1d8e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8e58:
    if (ctx->pc == 0x1D8E58u) {
        ctx->pc = 0x1D8E5Cu;
        goto label_1d8e5c;
    }
    ctx->pc = 0x1D8E54u;
    {
        const bool branch_taken_0x1d8e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e54) {
            ctx->pc = 0x1D8E64u;
            goto label_1d8e64;
        }
    }
    ctx->pc = 0x1D8E5Cu;
label_1d8e5c:
    // 0x1d8e5c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d8e60:
    // 0x1d8e60: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8e64:
    // 0x1d8e64: 0x0  nop
    ctx->pc = 0x1d8e64u;
    // NOP
label_1d8e68:
    // 0x1d8e68: 0xc07a9d8  jal         func_1EA760
label_1d8e6c:
    if (ctx->pc == 0x1D8E6Cu) {
        ctx->pc = 0x1D8E70u;
        goto label_1d8e70;
    }
    ctx->pc = 0x1D8E68u;
    SET_GPR_U32(ctx, 31, 0x1D8E70u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D8E70u;
label_1d8e70:
    // 0x1d8e70: 0xc04e168  jal         func_1385A0
label_1d8e74:
    if (ctx->pc == 0x1D8E74u) {
        ctx->pc = 0x1D8E78u;
        { ctx->pc = 0x1d8e78; return; }
    }
    ctx->pc = 0x1D8E70u;
    SET_GPR_U32(ctx, 31, 0x1D8E78u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D8E70u, 0x1D8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E78u;
    ctx->pc = 0x1d8e78u;
    return;
}
