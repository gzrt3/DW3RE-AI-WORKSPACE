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


void FUN_0019b618_part122(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d6768u: goto label_1d6768;
        case 0x1d676cu: goto label_1d676c;
        case 0x1d6770u: goto label_1d6770;
        case 0x1d6774u: goto label_1d6774;
        case 0x1d6778u: goto label_1d6778;
        case 0x1d677cu: goto label_1d677c;
        case 0x1d6780u: goto label_1d6780;
        case 0x1d6784u: goto label_1d6784;
        case 0x1d6788u: goto label_1d6788;
        case 0x1d678cu: goto label_1d678c;
        case 0x1d6790u: goto label_1d6790;
        case 0x1d6794u: goto label_1d6794;
        case 0x1d6798u: goto label_1d6798;
        case 0x1d679cu: goto label_1d679c;
        case 0x1d67a0u: goto label_1d67a0;
        case 0x1d67a4u: goto label_1d67a4;
        case 0x1d67a8u: goto label_1d67a8;
        case 0x1d67acu: goto label_1d67ac;
        case 0x1d67b0u: goto label_1d67b0;
        case 0x1d67b4u: goto label_1d67b4;
        case 0x1d67b8u: goto label_1d67b8;
        case 0x1d67bcu: goto label_1d67bc;
        case 0x1d67c0u: goto label_1d67c0;
        case 0x1d67c4u: goto label_1d67c4;
        case 0x1d67c8u: goto label_1d67c8;
        case 0x1d67ccu: goto label_1d67cc;
        case 0x1d67d0u: goto label_1d67d0;
        case 0x1d67d4u: goto label_1d67d4;
        case 0x1d67d8u: goto label_1d67d8;
        case 0x1d67dcu: goto label_1d67dc;
        case 0x1d67e0u: goto label_1d67e0;
        case 0x1d67e4u: goto label_1d67e4;
        case 0x1d67e8u: goto label_1d67e8;
        case 0x1d67ecu: goto label_1d67ec;
        case 0x1d67f0u: goto label_1d67f0;
        case 0x1d67f4u: goto label_1d67f4;
        case 0x1d67f8u: goto label_1d67f8;
        case 0x1d67fcu: goto label_1d67fc;
        case 0x1d6800u: goto label_1d6800;
        case 0x1d6804u: goto label_1d6804;
        case 0x1d6808u: goto label_1d6808;
        case 0x1d680cu: goto label_1d680c;
        case 0x1d6810u: goto label_1d6810;
        case 0x1d6814u: goto label_1d6814;
        case 0x1d6818u: goto label_1d6818;
        case 0x1d681cu: goto label_1d681c;
        case 0x1d6820u: goto label_1d6820;
        case 0x1d6824u: goto label_1d6824;
        case 0x1d6828u: goto label_1d6828;
        case 0x1d682cu: goto label_1d682c;
        case 0x1d6830u: goto label_1d6830;
        case 0x1d6834u: goto label_1d6834;
        case 0x1d6838u: goto label_1d6838;
        case 0x1d683cu: goto label_1d683c;
        case 0x1d6840u: goto label_1d6840;
        case 0x1d6844u: goto label_1d6844;
        case 0x1d6848u: goto label_1d6848;
        case 0x1d684cu: goto label_1d684c;
        case 0x1d6850u: goto label_1d6850;
        case 0x1d6854u: goto label_1d6854;
        case 0x1d6858u: goto label_1d6858;
        case 0x1d685cu: goto label_1d685c;
        case 0x1d6860u: goto label_1d6860;
        case 0x1d6864u: goto label_1d6864;
        case 0x1d6868u: goto label_1d6868;
        case 0x1d686cu: goto label_1d686c;
        case 0x1d6870u: goto label_1d6870;
        case 0x1d6874u: goto label_1d6874;
        case 0x1d6878u: goto label_1d6878;
        case 0x1d687cu: goto label_1d687c;
        case 0x1d6880u: goto label_1d6880;
        case 0x1d6884u: goto label_1d6884;
        case 0x1d6888u: goto label_1d6888;
        case 0x1d688cu: goto label_1d688c;
        case 0x1d6890u: goto label_1d6890;
        case 0x1d6894u: goto label_1d6894;
        case 0x1d6898u: goto label_1d6898;
        case 0x1d689cu: goto label_1d689c;
        case 0x1d68a0u: goto label_1d68a0;
        case 0x1d68a4u: goto label_1d68a4;
        case 0x1d68a8u: goto label_1d68a8;
        case 0x1d68acu: goto label_1d68ac;
        case 0x1d68b0u: goto label_1d68b0;
        case 0x1d68b4u: goto label_1d68b4;
        case 0x1d68b8u: goto label_1d68b8;
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68c0u: goto label_1d68c0;
        case 0x1d68c4u: goto label_1d68c4;
        case 0x1d68c8u: goto label_1d68c8;
        case 0x1d68ccu: goto label_1d68cc;
        case 0x1d68d0u: goto label_1d68d0;
        case 0x1d68d4u: goto label_1d68d4;
        case 0x1d68d8u: goto label_1d68d8;
        case 0x1d68dcu: goto label_1d68dc;
        case 0x1d68e0u: goto label_1d68e0;
        case 0x1d68e4u: goto label_1d68e4;
        case 0x1d68e8u: goto label_1d68e8;
        case 0x1d68ecu: goto label_1d68ec;
        case 0x1d68f0u: goto label_1d68f0;
        case 0x1d68f4u: goto label_1d68f4;
        case 0x1d68f8u: goto label_1d68f8;
        case 0x1d68fcu: goto label_1d68fc;
        case 0x1d6900u: goto label_1d6900;
        case 0x1d6904u: goto label_1d6904;
        case 0x1d6908u: goto label_1d6908;
        case 0x1d690cu: goto label_1d690c;
        case 0x1d6910u: goto label_1d6910;
        case 0x1d6914u: goto label_1d6914;
        case 0x1d6918u: goto label_1d6918;
        case 0x1d691cu: goto label_1d691c;
        case 0x1d6920u: goto label_1d6920;
        case 0x1d6924u: goto label_1d6924;
        case 0x1d6928u: goto label_1d6928;
        case 0x1d692cu: goto label_1d692c;
        case 0x1d6930u: goto label_1d6930;
        case 0x1d6934u: goto label_1d6934;
        case 0x1d6938u: goto label_1d6938;
        case 0x1d693cu: goto label_1d693c;
        case 0x1d6940u: goto label_1d6940;
        case 0x1d6944u: goto label_1d6944;
        case 0x1d6948u: goto label_1d6948;
        case 0x1d694cu: goto label_1d694c;
        case 0x1d6950u: goto label_1d6950;
        case 0x1d6954u: goto label_1d6954;
        case 0x1d6958u: goto label_1d6958;
        case 0x1d695cu: goto label_1d695c;
        case 0x1d6960u: goto label_1d6960;
        case 0x1d6964u: goto label_1d6964;
        case 0x1d6968u: goto label_1d6968;
        case 0x1d696cu: goto label_1d696c;
        case 0x1d6970u: goto label_1d6970;
        case 0x1d6974u: goto label_1d6974;
        case 0x1d6978u: goto label_1d6978;
        case 0x1d697cu: goto label_1d697c;
        case 0x1d6980u: goto label_1d6980;
        case 0x1d6984u: goto label_1d6984;
        case 0x1d6988u: goto label_1d6988;
        case 0x1d698cu: goto label_1d698c;
        case 0x1d6990u: goto label_1d6990;
        case 0x1d6994u: goto label_1d6994;
        case 0x1d6998u: goto label_1d6998;
        case 0x1d699cu: goto label_1d699c;
        case 0x1d69a0u: goto label_1d69a0;
        case 0x1d69a4u: goto label_1d69a4;
        case 0x1d69a8u: goto label_1d69a8;
        case 0x1d69acu: goto label_1d69ac;
        case 0x1d69b0u: goto label_1d69b0;
        case 0x1d69b4u: goto label_1d69b4;
        case 0x1d69b8u: goto label_1d69b8;
        case 0x1d69bcu: goto label_1d69bc;
        case 0x1d69c0u: goto label_1d69c0;
        case 0x1d69c4u: goto label_1d69c4;
        case 0x1d69c8u: goto label_1d69c8;
        case 0x1d69ccu: goto label_1d69cc;
        case 0x1d69d0u: goto label_1d69d0;
        case 0x1d69d4u: goto label_1d69d4;
        case 0x1d69d8u: goto label_1d69d8;
        case 0x1d69dcu: goto label_1d69dc;
        case 0x1d69e0u: goto label_1d69e0;
        case 0x1d69e4u: goto label_1d69e4;
        case 0x1d69e8u: goto label_1d69e8;
        case 0x1d69ecu: goto label_1d69ec;
        case 0x1d69f0u: goto label_1d69f0;
        case 0x1d69f4u: goto label_1d69f4;
        case 0x1d69f8u: goto label_1d69f8;
        case 0x1d69fcu: goto label_1d69fc;
        case 0x1d6a00u: goto label_1d6a00;
        case 0x1d6a04u: goto label_1d6a04;
        case 0x1d6a08u: goto label_1d6a08;
        case 0x1d6a0cu: goto label_1d6a0c;
        case 0x1d6a10u: goto label_1d6a10;
        case 0x1d6a14u: goto label_1d6a14;
        case 0x1d6a18u: goto label_1d6a18;
        case 0x1d6a1cu: goto label_1d6a1c;
        case 0x1d6a20u: goto label_1d6a20;
        case 0x1d6a24u: goto label_1d6a24;
        case 0x1d6a28u: goto label_1d6a28;
        case 0x1d6a2cu: goto label_1d6a2c;
        case 0x1d6a30u: goto label_1d6a30;
        case 0x1d6a34u: goto label_1d6a34;
        case 0x1d6a38u: goto label_1d6a38;
        case 0x1d6a3cu: goto label_1d6a3c;
        case 0x1d6a40u: goto label_1d6a40;
        case 0x1d6a44u: goto label_1d6a44;
        case 0x1d6a48u: goto label_1d6a48;
        case 0x1d6a4cu: goto label_1d6a4c;
        case 0x1d6a50u: goto label_1d6a50;
        case 0x1d6a54u: goto label_1d6a54;
        case 0x1d6a58u: goto label_1d6a58;
        case 0x1d6a5cu: goto label_1d6a5c;
        case 0x1d6a60u: goto label_1d6a60;
        case 0x1d6a64u: goto label_1d6a64;
        case 0x1d6a68u: goto label_1d6a68;
        case 0x1d6a6cu: goto label_1d6a6c;
        case 0x1d6a70u: goto label_1d6a70;
        case 0x1d6a74u: goto label_1d6a74;
        case 0x1d6a78u: goto label_1d6a78;
        case 0x1d6a7cu: goto label_1d6a7c;
        case 0x1d6a80u: goto label_1d6a80;
        case 0x1d6a84u: goto label_1d6a84;
        case 0x1d6a88u: goto label_1d6a88;
        case 0x1d6a8cu: goto label_1d6a8c;
        case 0x1d6a90u: goto label_1d6a90;
        case 0x1d6a94u: goto label_1d6a94;
        case 0x1d6a98u: goto label_1d6a98;
        case 0x1d6a9cu: goto label_1d6a9c;
        case 0x1d6aa0u: goto label_1d6aa0;
        case 0x1d6aa4u: goto label_1d6aa4;
        case 0x1d6aa8u: goto label_1d6aa8;
        case 0x1d6aacu: goto label_1d6aac;
        case 0x1d6ab0u: goto label_1d6ab0;
        case 0x1d6ab4u: goto label_1d6ab4;
        case 0x1d6ab8u: goto label_1d6ab8;
        case 0x1d6abcu: goto label_1d6abc;
        case 0x1d6ac0u: goto label_1d6ac0;
        case 0x1d6ac4u: goto label_1d6ac4;
        case 0x1d6ac8u: goto label_1d6ac8;
        case 0x1d6accu: goto label_1d6acc;
        case 0x1d6ad0u: goto label_1d6ad0;
        case 0x1d6ad4u: goto label_1d6ad4;
        case 0x1d6ad8u: goto label_1d6ad8;
        case 0x1d6adcu: goto label_1d6adc;
        case 0x1d6ae0u: goto label_1d6ae0;
        case 0x1d6ae4u: goto label_1d6ae4;
        case 0x1d6ae8u: goto label_1d6ae8;
        case 0x1d6aecu: goto label_1d6aec;
        case 0x1d6af0u: goto label_1d6af0;
        case 0x1d6af4u: goto label_1d6af4;
        case 0x1d6af8u: goto label_1d6af8;
        case 0x1d6afcu: goto label_1d6afc;
        case 0x1d6b00u: goto label_1d6b00;
        case 0x1d6b04u: goto label_1d6b04;
        case 0x1d6b08u: goto label_1d6b08;
        case 0x1d6b0cu: goto label_1d6b0c;
        case 0x1d6b10u: goto label_1d6b10;
        case 0x1d6b14u: goto label_1d6b14;
        case 0x1d6b18u: goto label_1d6b18;
        case 0x1d6b1cu: goto label_1d6b1c;
        case 0x1d6b20u: goto label_1d6b20;
        case 0x1d6b24u: goto label_1d6b24;
        case 0x1d6b28u: goto label_1d6b28;
        case 0x1d6b2cu: goto label_1d6b2c;
        case 0x1d6b30u: goto label_1d6b30;
        case 0x1d6b34u: goto label_1d6b34;
        case 0x1d6b38u: goto label_1d6b38;
        case 0x1d6b3cu: goto label_1d6b3c;
        case 0x1d6b40u: goto label_1d6b40;
        case 0x1d6b44u: goto label_1d6b44;
        case 0x1d6b48u: goto label_1d6b48;
        case 0x1d6b4cu: goto label_1d6b4c;
        case 0x1d6b50u: goto label_1d6b50;
        case 0x1d6b54u: goto label_1d6b54;
        case 0x1d6b58u: goto label_1d6b58;
        case 0x1d6b5cu: goto label_1d6b5c;
        case 0x1d6b60u: goto label_1d6b60;
        case 0x1d6b64u: goto label_1d6b64;
        case 0x1d6b68u: goto label_1d6b68;
        case 0x1d6b6cu: goto label_1d6b6c;
        case 0x1d6b70u: goto label_1d6b70;
        case 0x1d6b74u: goto label_1d6b74;
        case 0x1d6b78u: goto label_1d6b78;
        case 0x1d6b7cu: goto label_1d6b7c;
        case 0x1d6b80u: goto label_1d6b80;
        case 0x1d6b84u: goto label_1d6b84;
        case 0x1d6b88u: goto label_1d6b88;
        case 0x1d6b8cu: goto label_1d6b8c;
        case 0x1d6b90u: goto label_1d6b90;
        case 0x1d6b94u: goto label_1d6b94;
        case 0x1d6b98u: goto label_1d6b98;
        case 0x1d6b9cu: goto label_1d6b9c;
        case 0x1d6ba0u: goto label_1d6ba0;
        case 0x1d6ba4u: goto label_1d6ba4;
        case 0x1d6ba8u: goto label_1d6ba8;
        case 0x1d6bacu: goto label_1d6bac;
        case 0x1d6bb0u: goto label_1d6bb0;
        case 0x1d6bb4u: goto label_1d6bb4;
        case 0x1d6bb8u: goto label_1d6bb8;
        case 0x1d6bbcu: goto label_1d6bbc;
        case 0x1d6bc0u: goto label_1d6bc0;
        case 0x1d6bc4u: goto label_1d6bc4;
        case 0x1d6bc8u: goto label_1d6bc8;
        case 0x1d6bccu: goto label_1d6bcc;
        case 0x1d6bd0u: goto label_1d6bd0;
        case 0x1d6bd4u: goto label_1d6bd4;
        case 0x1d6bd8u: goto label_1d6bd8;
        case 0x1d6bdcu: goto label_1d6bdc;
        case 0x1d6be0u: goto label_1d6be0;
        case 0x1d6be4u: goto label_1d6be4;
        case 0x1d6be8u: goto label_1d6be8;
        case 0x1d6becu: goto label_1d6bec;
        case 0x1d6bf0u: goto label_1d6bf0;
        case 0x1d6bf4u: goto label_1d6bf4;
        case 0x1d6bf8u: goto label_1d6bf8;
        case 0x1d6bfcu: goto label_1d6bfc;
        case 0x1d6c00u: goto label_1d6c00;
        case 0x1d6c04u: goto label_1d6c04;
        case 0x1d6c08u: goto label_1d6c08;
        case 0x1d6c0cu: goto label_1d6c0c;
        case 0x1d6c10u: goto label_1d6c10;
        case 0x1d6c14u: goto label_1d6c14;
        case 0x1d6c18u: goto label_1d6c18;
        case 0x1d6c1cu: goto label_1d6c1c;
        case 0x1d6c20u: goto label_1d6c20;
        case 0x1d6c24u: goto label_1d6c24;
        case 0x1d6c28u: goto label_1d6c28;
        case 0x1d6c2cu: goto label_1d6c2c;
        case 0x1d6c30u: goto label_1d6c30;
        case 0x1d6c34u: goto label_1d6c34;
        case 0x1d6c38u: goto label_1d6c38;
        case 0x1d6c3cu: goto label_1d6c3c;
        case 0x1d6c40u: goto label_1d6c40;
        case 0x1d6c44u: goto label_1d6c44;
        case 0x1d6c48u: goto label_1d6c48;
        case 0x1d6c4cu: goto label_1d6c4c;
        case 0x1d6c50u: goto label_1d6c50;
        case 0x1d6c54u: goto label_1d6c54;
        case 0x1d6c58u: goto label_1d6c58;
        case 0x1d6c5cu: goto label_1d6c5c;
        case 0x1d6c60u: goto label_1d6c60;
        case 0x1d6c64u: goto label_1d6c64;
        case 0x1d6c68u: goto label_1d6c68;
        case 0x1d6c6cu: goto label_1d6c6c;
        case 0x1d6c70u: goto label_1d6c70;
        case 0x1d6c74u: goto label_1d6c74;
        case 0x1d6c78u: goto label_1d6c78;
        case 0x1d6c7cu: goto label_1d6c7c;
        case 0x1d6c80u: goto label_1d6c80;
        case 0x1d6c84u: goto label_1d6c84;
        case 0x1d6c88u: goto label_1d6c88;
        case 0x1d6c8cu: goto label_1d6c8c;
        case 0x1d6c90u: goto label_1d6c90;
        case 0x1d6c94u: goto label_1d6c94;
        case 0x1d6c98u: goto label_1d6c98;
        case 0x1d6c9cu: goto label_1d6c9c;
        case 0x1d6ca0u: goto label_1d6ca0;
        case 0x1d6ca4u: goto label_1d6ca4;
        case 0x1d6ca8u: goto label_1d6ca8;
        case 0x1d6cacu: goto label_1d6cac;
        case 0x1d6cb0u: goto label_1d6cb0;
        case 0x1d6cb4u: goto label_1d6cb4;
        case 0x1d6cb8u: goto label_1d6cb8;
        case 0x1d6cbcu: goto label_1d6cbc;
        case 0x1d6cc0u: goto label_1d6cc0;
        case 0x1d6cc4u: goto label_1d6cc4;
        case 0x1d6cc8u: goto label_1d6cc8;
        case 0x1d6cccu: goto label_1d6ccc;
        case 0x1d6cd0u: goto label_1d6cd0;
        case 0x1d6cd4u: goto label_1d6cd4;
        case 0x1d6cd8u: goto label_1d6cd8;
        case 0x1d6cdcu: goto label_1d6cdc;
        case 0x1d6ce0u: goto label_1d6ce0;
        case 0x1d6ce4u: goto label_1d6ce4;
        case 0x1d6ce8u: goto label_1d6ce8;
        case 0x1d6cecu: goto label_1d6cec;
        case 0x1d6cf0u: goto label_1d6cf0;
        case 0x1d6cf4u: goto label_1d6cf4;
        case 0x1d6cf8u: goto label_1d6cf8;
        case 0x1d6cfcu: goto label_1d6cfc;
        case 0x1d6d00u: goto label_1d6d00;
        case 0x1d6d04u: goto label_1d6d04;
        case 0x1d6d08u: goto label_1d6d08;
        case 0x1d6d0cu: goto label_1d6d0c;
        case 0x1d6d10u: goto label_1d6d10;
        case 0x1d6d14u: goto label_1d6d14;
        case 0x1d6d18u: goto label_1d6d18;
        case 0x1d6d1cu: goto label_1d6d1c;
        case 0x1d6d20u: goto label_1d6d20;
        case 0x1d6d24u: goto label_1d6d24;
        case 0x1d6d28u: goto label_1d6d28;
        case 0x1d6d2cu: goto label_1d6d2c;
        case 0x1d6d30u: goto label_1d6d30;
        case 0x1d6d34u: goto label_1d6d34;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d3cu: goto label_1d6d3c;
        case 0x1d6d40u: goto label_1d6d40;
        case 0x1d6d44u: goto label_1d6d44;
        case 0x1d6d48u: goto label_1d6d48;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d50u: goto label_1d6d50;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d58u: goto label_1d6d58;
        case 0x1d6d5cu: goto label_1d6d5c;
        case 0x1d6d60u: goto label_1d6d60;
        case 0x1d6d64u: goto label_1d6d64;
        case 0x1d6d68u: goto label_1d6d68;
        case 0x1d6d6cu: goto label_1d6d6c;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6d80u: goto label_1d6d80;
        case 0x1d6d84u: goto label_1d6d84;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6d8cu: goto label_1d6d8c;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6d98u: goto label_1d6d98;
        case 0x1d6d9cu: goto label_1d6d9c;
        case 0x1d6da0u: goto label_1d6da0;
        case 0x1d6da4u: goto label_1d6da4;
        case 0x1d6da8u: goto label_1d6da8;
        case 0x1d6dacu: goto label_1d6dac;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6db8u: goto label_1d6db8;
        case 0x1d6dbcu: goto label_1d6dbc;
        case 0x1d6dc0u: goto label_1d6dc0;
        case 0x1d6dc4u: goto label_1d6dc4;
        case 0x1d6dc8u: goto label_1d6dc8;
        case 0x1d6dccu: goto label_1d6dcc;
        case 0x1d6dd0u: goto label_1d6dd0;
        case 0x1d6dd4u: goto label_1d6dd4;
        case 0x1d6dd8u: goto label_1d6dd8;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6de0u: goto label_1d6de0;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6de8u: goto label_1d6de8;
        case 0x1d6decu: goto label_1d6dec;
        case 0x1d6df0u: goto label_1d6df0;
        case 0x1d6df4u: goto label_1d6df4;
        case 0x1d6df8u: goto label_1d6df8;
        case 0x1d6dfcu: goto label_1d6dfc;
        case 0x1d6e00u: goto label_1d6e00;
        case 0x1d6e04u: goto label_1d6e04;
        case 0x1d6e08u: goto label_1d6e08;
        case 0x1d6e0cu: goto label_1d6e0c;
        case 0x1d6e10u: goto label_1d6e10;
        case 0x1d6e14u: goto label_1d6e14;
        case 0x1d6e18u: goto label_1d6e18;
        case 0x1d6e1cu: goto label_1d6e1c;
        case 0x1d6e20u: goto label_1d6e20;
        case 0x1d6e24u: goto label_1d6e24;
        case 0x1d6e28u: goto label_1d6e28;
        case 0x1d6e2cu: goto label_1d6e2c;
        case 0x1d6e30u: goto label_1d6e30;
        case 0x1d6e34u: goto label_1d6e34;
        case 0x1d6e38u: goto label_1d6e38;
        case 0x1d6e3cu: goto label_1d6e3c;
        case 0x1d6e40u: goto label_1d6e40;
        case 0x1d6e44u: goto label_1d6e44;
        case 0x1d6e48u: goto label_1d6e48;
        case 0x1d6e4cu: goto label_1d6e4c;
        case 0x1d6e50u: goto label_1d6e50;
        case 0x1d6e54u: goto label_1d6e54;
        case 0x1d6e58u: goto label_1d6e58;
        case 0x1d6e5cu: goto label_1d6e5c;
        case 0x1d6e60u: goto label_1d6e60;
        case 0x1d6e64u: goto label_1d6e64;
        case 0x1d6e68u: goto label_1d6e68;
        case 0x1d6e6cu: goto label_1d6e6c;
        case 0x1d6e70u: goto label_1d6e70;
        case 0x1d6e74u: goto label_1d6e74;
        case 0x1d6e78u: goto label_1d6e78;
        case 0x1d6e7cu: goto label_1d6e7c;
        case 0x1d6e80u: goto label_1d6e80;
        case 0x1d6e84u: goto label_1d6e84;
        case 0x1d6e88u: goto label_1d6e88;
        case 0x1d6e8cu: goto label_1d6e8c;
        case 0x1d6e90u: goto label_1d6e90;
        case 0x1d6e94u: goto label_1d6e94;
        case 0x1d6e98u: goto label_1d6e98;
        case 0x1d6e9cu: goto label_1d6e9c;
        case 0x1d6ea0u: goto label_1d6ea0;
        case 0x1d6ea4u: goto label_1d6ea4;
        case 0x1d6ea8u: goto label_1d6ea8;
        case 0x1d6eacu: goto label_1d6eac;
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6eb4u: goto label_1d6eb4;
        case 0x1d6eb8u: goto label_1d6eb8;
        case 0x1d6ebcu: goto label_1d6ebc;
        case 0x1d6ec0u: goto label_1d6ec0;
        case 0x1d6ec4u: goto label_1d6ec4;
        case 0x1d6ec8u: goto label_1d6ec8;
        case 0x1d6eccu: goto label_1d6ecc;
        case 0x1d6ed0u: goto label_1d6ed0;
        case 0x1d6ed4u: goto label_1d6ed4;
        case 0x1d6ed8u: goto label_1d6ed8;
        case 0x1d6edcu: goto label_1d6edc;
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6ee4u: goto label_1d6ee4;
        case 0x1d6ee8u: goto label_1d6ee8;
        case 0x1d6eecu: goto label_1d6eec;
        case 0x1d6ef0u: goto label_1d6ef0;
        case 0x1d6ef4u: goto label_1d6ef4;
        case 0x1d6ef8u: goto label_1d6ef8;
        case 0x1d6efcu: goto label_1d6efc;
        case 0x1d6f00u: goto label_1d6f00;
        case 0x1d6f04u: goto label_1d6f04;
        case 0x1d6f08u: goto label_1d6f08;
        case 0x1d6f0cu: goto label_1d6f0c;
        case 0x1d6f10u: goto label_1d6f10;
        case 0x1d6f14u: goto label_1d6f14;
        case 0x1d6f18u: goto label_1d6f18;
        case 0x1d6f1cu: goto label_1d6f1c;
        case 0x1d6f20u: goto label_1d6f20;
        case 0x1d6f24u: goto label_1d6f24;
        case 0x1d6f28u: goto label_1d6f28;
        case 0x1d6f2cu: goto label_1d6f2c;
        case 0x1d6f30u: goto label_1d6f30;
        case 0x1d6f34u: goto label_1d6f34;
        default: return;
    }

label_1d6768:
    if (ctx->pc == 0x1D6768u) {
        ctx->pc = 0x1D676Cu;
        goto label_1d676c;
    }
    ctx->pc = 0x1D6764u;
    {
        const bool branch_taken_0x1d6764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6764) {
            ctx->pc = 0x1D7210u;
            { ctx->pc = 0x1d7210; return; }
        }
    }
    ctx->pc = 0x1D676Cu;
label_1d676c:
    // 0x1d676c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d676cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6770:
    // 0x1d6770: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1d6774:
    // 0x1d6774: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1d6774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1d6778:
    // 0x1d6778: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d6778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d677c:
    // 0x1d677c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d6780:
    // 0x1d6780: 0x106002a3  beqz        $v1, . + 4 + (0x2A3 << 2)
label_1d6784:
    if (ctx->pc == 0x1D6784u) {
        ctx->pc = 0x1D6788u;
        goto label_1d6788;
    }
    ctx->pc = 0x1D6780u;
    {
        const bool branch_taken_0x1d6780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6780) {
            ctx->pc = 0x1D7210u;
            { ctx->pc = 0x1d7210; return; }
        }
    }
    ctx->pc = 0x1D6788u;
label_1d6788:
    // 0x1d6788: 0x8263021f  lb          $v1, 0x21F($s3)
    ctx->pc = 0x1d6788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_1d678c:
    // 0x1d678c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6790:
    // 0x1d6790: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1d6794:
    if (ctx->pc == 0x1D6794u) {
        ctx->pc = 0x1D6798u;
        goto label_1d6798;
    }
    ctx->pc = 0x1D6790u;
    {
        const bool branch_taken_0x1d6790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6790) {
            ctx->pc = 0x1D67BCu;
            goto label_1d67bc;
        }
    }
    ctx->pc = 0x1D6798u;
label_1d6798:
    // 0x1d6798: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x1d6798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_1d679c:
    // 0x1d679c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d67a0:
    // 0x1d67a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d67a4:
    if (ctx->pc == 0x1D67A4u) {
        ctx->pc = 0x1D67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67A0u;
        // 0x1d67a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D67A8u;
        goto label_1d67a8;
    }
    ctx->pc = 0x1D67A0u;
    {
        const bool branch_taken_0x1d67a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67A0u;
        // 0x1d67a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67a0) {
            ctx->pc = 0x1D67B0u;
            goto label_1d67b0;
        }
    }
    ctx->pc = 0x1D67A8u;
label_1d67a8:
    // 0x1d67a8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d67ac:
    if (ctx->pc == 0x1D67ACu) {
        ctx->pc = 0x1D67B0u;
        goto label_1d67b0;
    }
    ctx->pc = 0x1D67A8u;
    {
        const bool branch_taken_0x1d67a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d67a8) {
            ctx->pc = 0x1D67BCu;
            goto label_1d67bc;
        }
    }
    ctx->pc = 0x1D67B0u;
label_1d67b0:
    // 0x1d67b0: 0x24023070  addiu       $v0, $zero, 0x3070
    ctx->pc = 0x1d67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12400));
label_1d67b4:
    // 0x1d67b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d67b8:
    if (ctx->pc == 0x1D67B8u) {
        ctx->pc = 0x1D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B4u;
        // 0x1d67b8: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D67BCu;
        goto label_1d67bc;
    }
    ctx->pc = 0x1D67B4u;
    {
        const bool branch_taken_0x1d67b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B4u;
        // 0x1d67b8: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b4) {
            ctx->pc = 0x1D67D4u;
            goto label_1d67d4;
        }
    }
    ctx->pc = 0x1D67BCu;
label_1d67bc:
    // 0x1d67bc: 0x0  nop
    ctx->pc = 0x1d67bcu;
    // NOP
label_1d67c0:
    // 0x1d67c0: 0x8e630200  lw          $v1, 0x200($s3)
    ctx->pc = 0x1d67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d67c4:
    // 0x1d67c4: 0x8662021c  lh          $v0, 0x21C($s3)
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 540)));
label_1d67c8:
    // 0x1d67c8: 0x9063024e  lbu         $v1, 0x24E($v1)
    ctx->pc = 0x1d67c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 590)));
label_1d67cc:
    // 0x1d67cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d67ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d67d0:
    // 0x1d67d0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1d67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1d67d4:
    // 0x1d67d4: 0x0  nop
    ctx->pc = 0x1d67d4u;
    // NOP
label_1d67d8:
    // 0x1d67d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d67dc:
    // 0x1d67dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d67dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d67e0:
    // 0x1d67e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d67e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d67e4:
    // 0x1d67e4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d67e8:
    // 0x1d67e8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d67ec:
    // 0x1d67ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d67ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d67f0:
    // 0x1d67f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d67f4:
    // 0x1d67f4: 0x24a201a0  addiu       $v0, $a1, 0x1A0
    ctx->pc = 0x1d67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
label_1d67f8:
    // 0x1d67f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d67fc:
    // 0x1d67fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6800:
    // 0x1d6800: 0xc06704c  jal         func_19C130
label_1d6804:
    if (ctx->pc == 0x1D6804u) {
        ctx->pc = 0x1D6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6800u;
        // 0x1d6804: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6808u;
        goto label_1d6808;
    }
    ctx->pc = 0x1D6800u;
    SET_GPR_U32(ctx, 31, 0x1D6808u);
    ctx->pc = 0x1D6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6800u;
    // 0x1d6804: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C130u;
    { ctx->pc = 0x19c130; return; }
    ctx->pc = 0x1D6808u;
label_1d6808:
    // 0x1d6808: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d680c:
    // 0x1d680c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6810:
    // 0x1d6810: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x1d6810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6814:
    // 0x1d6814: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1d6814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1d6818:
    // 0x1d6818: 0x8204002a  lb          $a0, 0x2A($s0)
    ctx->pc = 0x1d6818u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1d681c:
    // 0x1d681c: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_1d6820:
    if (ctx->pc == 0x1D6820u) {
        ctx->pc = 0x1D6824u;
        goto label_1d6824;
    }
    ctx->pc = 0x1D681Cu;
    {
        const bool branch_taken_0x1d681c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d681c) {
            ctx->pc = 0x1D6864u;
            goto label_1d6864;
        }
    }
    ctx->pc = 0x1D6824u;
label_1d6824:
    // 0x1d6824: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6828:
    // 0x1d6828: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1d6828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1d682c:
    // 0x1d682c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d682cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6830:
    // 0x1d6830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6834:
    // 0x1d6834: 0xc49401bc  lwc1        $f20, 0x1BC($a0)
    ctx->pc = 0x1d6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d6838:
    // 0x1d6838: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1d6838u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d683c:
    // 0x1d683c: 0x0  nop
    ctx->pc = 0x1d683cu;
    // NOP
label_1d6840:
    // 0x1d6840: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1d6844:
    if (ctx->pc == 0x1D6844u) {
        ctx->pc = 0x1D6848u;
        goto label_1d6848;
    }
    ctx->pc = 0x1D6840u;
    {
        const bool branch_taken_0x1d6840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6840) {
            ctx->pc = 0x1D6864u;
            goto label_1d6864;
        }
    }
    ctx->pc = 0x1D6848u;
label_1d6848:
    // 0x1d6848: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d6848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d684c:
    // 0x1d684c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6850:
    // 0x1d6850: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1d6850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1d6854:
    // 0x1d6854: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d6858:
    if (ctx->pc == 0x1D6858u) {
        ctx->pc = 0x1D685Cu;
        goto label_1d685c;
    }
    ctx->pc = 0x1D6854u;
    {
        const bool branch_taken_0x1d6854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6854) {
            ctx->pc = 0x1D6864u;
            goto label_1d6864;
        }
    }
    ctx->pc = 0x1D685Cu;
label_1d685c:
    // 0x1d685c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d6860:
    if (ctx->pc == 0x1D6860u) {
        ctx->pc = 0x1D6864u;
        goto label_1d6864;
    }
    ctx->pc = 0x1D685Cu;
    {
        const bool branch_taken_0x1d685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d685c) {
            ctx->pc = 0x1D6874u;
            goto label_1d6874;
        }
    }
    ctx->pc = 0x1D6864u;
label_1d6864:
    // 0x1d6864: 0x0  nop
    ctx->pc = 0x1d6864u;
    // NOP
label_1d6868:
    // 0x1d6868: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d686c:
    // 0x1d686c: 0xc4740044  lwc1        $f20, 0x44($v1)
    ctx->pc = 0x1d686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d6870:
    // 0x1d6870: 0x0  nop
    ctx->pc = 0x1d6870u;
    // NOP
label_1d6874:
    // 0x1d6874: 0x0  nop
    ctx->pc = 0x1d6874u;
    // NOP
label_1d6878:
    // 0x1d6878: 0x8204002a  lb          $a0, 0x2A($s0)
    ctx->pc = 0x1d6878u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1d687c:
    // 0x1d687c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6880:
    // 0x1d6880: 0x148300d4  bne         $a0, $v1, . + 4 + (0xD4 << 2)
label_1d6884:
    if (ctx->pc == 0x1D6884u) {
        ctx->pc = 0x1D6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6880u;
        // 0x1d6884: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6888u;
        goto label_1d6888;
    }
    ctx->pc = 0x1D6880u;
    {
        const bool branch_taken_0x1d6880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6880u;
        // 0x1d6884: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6880) {
            ctx->pc = 0x1D6BD4u;
            goto label_1d6bd4;
        }
    }
    ctx->pc = 0x1D6888u;
label_1d6888:
    // 0x1d6888: 0x18c0  sll         $v1, $zero, 3
    ctx->pc = 0x1d6888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_1d688c:
    // 0x1d688c: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1d688cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1d6890:
    // 0x1d6890: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d6890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d6894:
    // 0x1d6894: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1d6894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_1d6898:
    // 0x1d6898: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1d689c:
    if (ctx->pc == 0x1D689Cu) {
        ctx->pc = 0x1D689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6898u;
        // 0x1d689c: 0x24720c40  addiu       $s2, $v1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68A0u;
        goto label_1d68a0;
    }
    ctx->pc = 0x1D6898u;
    {
        const bool branch_taken_0x1d6898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6898u;
        // 0x1d689c: 0x24720c40  addiu       $s2, $v1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6898) {
            ctx->pc = 0x1D6BC8u;
            goto label_1d6bc8;
        }
    }
    ctx->pc = 0x1D68A0u;
label_1d68a0:
    // 0x1d68a0: 0x129500c7  beq         $s4, $s5, . + 4 + (0xC7 << 2)
label_1d68a4:
    if (ctx->pc == 0x1D68A4u) {
        ctx->pc = 0x1D68A8u;
        goto label_1d68a8;
    }
    ctx->pc = 0x1D68A0u;
    {
        const bool branch_taken_0x1d68a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x1d68a0) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D68A8u;
label_1d68a8:
    // 0x1d68a8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1d68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d68ac:
    // 0x1d68ac: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_1d68b0:
    if (ctx->pc == 0x1D68B0u) {
        ctx->pc = 0x1D68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68ACu;
        // 0x1d68b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68B4u;
        goto label_1d68b4;
    }
    ctx->pc = 0x1D68ACu;
    {
        const bool branch_taken_0x1d68ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68ACu;
        // 0x1d68b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68ac) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D68B4u;
label_1d68b4:
    // 0x1d68b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d68b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d68b8:
    // 0x1d68b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d68bc:
    if (ctx->pc == 0x1D68BCu) {
        ctx->pc = 0x1D68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68B8u;
        // 0x1d68bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68C0u;
        goto label_1d68c0;
    }
    ctx->pc = 0x1D68B8u;
    {
        const bool branch_taken_0x1d68b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68B8u;
        // 0x1d68bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68b8) {
            ctx->pc = 0x1D68ECu;
            goto label_1d68ec;
        }
    }
    ctx->pc = 0x1D68C0u;
label_1d68c0:
    // 0x1d68c0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d68c4:
    // 0x1d68c4: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_1d68c8:
    // 0x1d68c8: 0x90e601a2  lbu         $a2, 0x1A2($a3)
    ctx->pc = 0x1d68c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
label_1d68cc:
    // 0x1d68cc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d68ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1d68d0:
    // 0x1d68d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d68d4:
    if (ctx->pc == 0x1D68D4u) {
        ctx->pc = 0x1D68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68D0u;
        // 0x1d68d4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68D8u;
        goto label_1d68d8;
    }
    ctx->pc = 0x1D68D0u;
    {
        const bool branch_taken_0x1d68d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68D0u;
        // 0x1d68d4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68d0) {
            ctx->pc = 0x1D68E8u;
            goto label_1d68e8;
        }
    }
    ctx->pc = 0x1D68D8u;
label_1d68d8:
    // 0x1d68d8: 0x24e301b0  addiu       $v1, $a3, 0x1B0
    ctx->pc = 0x1d68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_1d68dc:
    // 0x1d68dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d68e0:
    // 0x1d68e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d68e4:
    if (ctx->pc == 0x1D68E4u) {
        ctx->pc = 0x1D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E0u;
        // 0x1d68e4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68E8u;
        goto label_1d68e8;
    }
    ctx->pc = 0x1D68E0u;
    {
        const bool branch_taken_0x1d68e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E0u;
        // 0x1d68e4: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68e0) {
            ctx->pc = 0x1D68FCu;
            goto label_1d68fc;
        }
    }
    ctx->pc = 0x1D68E8u;
label_1d68e8:
    // 0x1d68e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d68ec:
    // 0x1d68ec: 0x0  nop
    ctx->pc = 0x1d68ecu;
    // NOP
label_1d68f0:
    // 0x1d68f0: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1d68f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d68f4:
    // 0x1d68f4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1d68f8:
    if (ctx->pc == 0x1D68F8u) {
        ctx->pc = 0x1D68FCu;
        goto label_1d68fc;
    }
    ctx->pc = 0x1D68F4u;
    {
        const bool branch_taken_0x1d68f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d68f4) {
            ctx->pc = 0x1D68C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d68c0;
        }
    }
    ctx->pc = 0x1D68FCu;
label_1d68fc:
    // 0x1d68fc: 0x0  nop
    ctx->pc = 0x1d68fcu;
    // NOP
label_1d6900:
    // 0x1d6900: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x1d6900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_1d6904:
    // 0x1d6904: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
label_1d6908:
    if (ctx->pc == 0x1D6908u) {
        ctx->pc = 0x1D690Cu;
        goto label_1d690c;
    }
    ctx->pc = 0x1D6904u;
    {
        const bool branch_taken_0x1d6904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6904) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D690Cu;
label_1d690c:
    // 0x1d690c: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x1d690cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1d6910:
    // 0x1d6910: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1d6910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d6914:
    // 0x1d6914: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
label_1d6918:
    if (ctx->pc == 0x1D6918u) {
        ctx->pc = 0x1D691Cu;
        goto label_1d691c;
    }
    ctx->pc = 0x1D6914u;
    {
        const bool branch_taken_0x1d6914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6914) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D691Cu;
label_1d691c:
    // 0x1d691c: 0x8224002a  lb          $a0, 0x2A($s1)
    ctx->pc = 0x1d691cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1d6920:
    // 0x1d6920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6924:
    // 0x1d6924: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
label_1d6928:
    if (ctx->pc == 0x1D6928u) {
        ctx->pc = 0x1D692Cu;
        goto label_1d692c;
    }
    ctx->pc = 0x1D6924u;
    {
        const bool branch_taken_0x1d6924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6924) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D692Cu;
label_1d692c:
    // 0x1d692c: 0x8e370010  lw          $s7, 0x10($s1)
    ctx->pc = 0x1d692cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d6930:
    // 0x1d6930: 0x8ee30200  lw          $v1, 0x200($s7)
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 512)));
label_1d6934:
    // 0x1d6934: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_1d6938:
    if (ctx->pc == 0x1D6938u) {
        ctx->pc = 0x1D693Cu;
        goto label_1d693c;
    }
    ctx->pc = 0x1D6934u;
    {
        const bool branch_taken_0x1d6934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6934) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D693Cu;
label_1d693c:
    // 0x1d693c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6940:
    // 0x1d6940: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1d6944:
    // 0x1d6944: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1d6944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d6948:
    // 0x1d6948: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d694c:
    // 0x1d694c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d694cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d6950:
    // 0x1d6950: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_1d6954:
    if (ctx->pc == 0x1D6954u) {
        ctx->pc = 0x1D6958u;
        goto label_1d6958;
    }
    ctx->pc = 0x1D6950u;
    {
        const bool branch_taken_0x1d6950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6950) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D6958u;
label_1d6958:
    // 0x1d6958: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d695c:
    // 0x1d695c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d695cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d6960:
    // 0x1d6960: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d6964:
    // 0x1d6964: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d6964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6968:
    // 0x1d6968: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d696c:
    // 0x1d696c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d696cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d6970:
    // 0x1d6970: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d6974:
    // 0x1d6974: 0x24a201a0  addiu       $v0, $a1, 0x1A0
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
label_1d6978:
    // 0x1d6978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d697c:
    // 0x1d697c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6980:
    // 0x1d6980: 0xc06704c  jal         func_19C130
label_1d6984:
    if (ctx->pc == 0x1D6984u) {
        ctx->pc = 0x1D6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6980u;
        // 0x1d6984: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6988u;
        goto label_1d6988;
    }
    ctx->pc = 0x1D6980u;
    SET_GPR_U32(ctx, 31, 0x1D6988u);
    ctx->pc = 0x1D6984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6980u;
    // 0x1d6984: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C130u;
    { ctx->pc = 0x19c130; return; }
    ctx->pc = 0x1D6988u;
label_1d6988:
    // 0x1d6988: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d698c:
    // 0x1d698c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d698cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d6990:
    // 0x1d6990: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6994:
    // 0x1d6994: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1d6994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d6998:
    // 0x1d6998: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1d6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d699c:
    // 0x1d699c: 0xc066e08  jal         func_19B820
label_1d69a0:
    if (ctx->pc == 0x1D69A0u) {
        ctx->pc = 0x1D69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D699Cu;
        // 0x1d69a0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69A4u;
        goto label_1d69a4;
    }
    ctx->pc = 0x1D699Cu;
    SET_GPR_U32(ctx, 31, 0x1D69A4u);
    ctx->pc = 0x1D69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D699Cu;
    // 0x1d69a0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1D69A4u;
label_1d69a4:
    // 0x1d69a4: 0xc06d448  jal         func_1B5120
label_1d69a8:
    if (ctx->pc == 0x1D69A8u) {
        ctx->pc = 0x1D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69A4u;
        // 0x1d69a8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69ACu;
        goto label_1d69ac;
    }
    ctx->pc = 0x1D69A4u;
    SET_GPR_U32(ctx, 31, 0x1D69ACu);
    ctx->pc = 0x1D69A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69A4u;
    // 0x1d69a8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D69ACu;
label_1d69ac:
    // 0x1d69ac: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1d69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d69b0:
    // 0x1d69b0: 0xc06d448  jal         func_1B5120
label_1d69b4:
    if (ctx->pc == 0x1D69B4u) {
        ctx->pc = 0x1D69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69B0u;
        // 0x1d69b4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69B8u;
        goto label_1d69b8;
    }
    ctx->pc = 0x1D69B0u;
    SET_GPR_U32(ctx, 31, 0x1D69B8u);
    ctx->pc = 0x1D69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69B0u;
    // 0x1d69b4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D69B8u;
label_1d69b8:
    // 0x1d69b8: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1d69b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1d69bc:
    // 0x1d69bc: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1d69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_1d69c0:
    // 0x1d69c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d69c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d69c4:
    // 0x1d69c4: 0x0  nop
    ctx->pc = 0x1d69c4u;
    // NOP
label_1d69c8:
    // 0x1d69c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d69c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d69cc:
    // 0x1d69cc: 0x0  nop
    ctx->pc = 0x1d69ccu;
    // NOP
label_1d69d0:
    // 0x1d69d0: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
label_1d69d4:
    if (ctx->pc == 0x1D69D4u) {
        ctx->pc = 0x1D69D8u;
        goto label_1d69d8;
    }
    ctx->pc = 0x1D69D0u;
    {
        const bool branch_taken_0x1d69d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d69d0) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D69D8u;
label_1d69d8:
    // 0x1d69d8: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1d69d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d69dc:
    // 0x1d69dc: 0xc06d51e  jal         func_1B5478
label_1d69e0:
    if (ctx->pc == 0x1D69E0u) {
        ctx->pc = 0x1D69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69DCu;
        // 0x1d69e0: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69E4u;
        goto label_1d69e4;
    }
    ctx->pc = 0x1D69DCu;
    SET_GPR_U32(ctx, 31, 0x1D69E4u);
    ctx->pc = 0x1D69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69DCu;
    // 0x1d69e0: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1D69E4u;
label_1d69e4:
    // 0x1d69e4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d69e8:
    // 0x1d69e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d69ec:
    // 0x1d69ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d69ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d69f0:
    // 0x1d69f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d69f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d69f4:
    // 0x1d69f4: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x1d69f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d69f8:
    // 0x1d69f8: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x1d69f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d69fc:
    // 0x1d69fc: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d69fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6a00:
    // 0x1d6a00: 0x0  nop
    ctx->pc = 0x1d6a00u;
    // NOP
label_1d6a04:
    // 0x1d6a04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d6a08:
    if (ctx->pc == 0x1D6A08u) {
        ctx->pc = 0x1D6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A04u;
        // 0x1d6a08: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A0Cu;
        goto label_1d6a0c;
    }
    ctx->pc = 0x1D6A04u;
    {
        const bool branch_taken_0x1d6a04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A04u;
        // 0x1d6a08: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a04) {
            ctx->pc = 0x1D6A20u;
            goto label_1d6a20;
        }
    }
    ctx->pc = 0x1D6A0Cu;
label_1d6a0c:
    // 0x1d6a0c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d6a10:
    // 0x1d6a10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6a14:
    // 0x1d6a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6a18:
    // 0x1d6a18: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d6a1c:
    if (ctx->pc == 0x1D6A1Cu) {
        ctx->pc = 0x1D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A18u;
        // 0x1d6a1c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A20u;
        goto label_1d6a20;
    }
    ctx->pc = 0x1D6A18u;
    {
        const bool branch_taken_0x1d6a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A18u;
        // 0x1d6a1c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a18) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A20u;
label_1d6a20:
    // 0x1d6a20: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d6a24:
    // 0x1d6a24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6a28:
    // 0x1d6a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6a2c:
    // 0x1d6a2c: 0x0  nop
    ctx->pc = 0x1d6a2cu;
    // NOP
label_1d6a30:
    // 0x1d6a30: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1d6a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6a34:
    // 0x1d6a34: 0x0  nop
    ctx->pc = 0x1d6a34u;
    // NOP
label_1d6a38:
    // 0x1d6a38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6a3c:
    if (ctx->pc == 0x1D6A3Cu) {
        ctx->pc = 0x1D6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A38u;
        // 0x1d6a3c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A40u;
        goto label_1d6a40;
    }
    ctx->pc = 0x1D6A38u;
    {
        const bool branch_taken_0x1d6a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A38u;
        // 0x1d6a3c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a38) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A40u;
label_1d6a40:
    // 0x1d6a40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6a44:
    // 0x1d6a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6a48:
    // 0x1d6a48: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d6a4c:
    if (ctx->pc == 0x1D6A4Cu) {
        ctx->pc = 0x1D6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A48u;
        // 0x1d6a4c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A50u;
        goto label_1d6a50;
    }
    ctx->pc = 0x1D6A48u;
    {
        const bool branch_taken_0x1d6a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A48u;
        // 0x1d6a4c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a48) {
            ctx->pc = 0x1D6A50u;
            goto label_1d6a50;
        }
    }
    ctx->pc = 0x1D6A50u;
label_1d6a50:
    // 0x1d6a50: 0xc054560  jal         func_151580
label_1d6a54:
    if (ctx->pc == 0x1D6A54u) {
        ctx->pc = 0x1D6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A50u;
        // 0x1d6a54: 0x8264021f  lb          $a0, 0x21F($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A58u;
        goto label_1d6a58;
    }
    ctx->pc = 0x1D6A50u;
    SET_GPR_U32(ctx, 31, 0x1D6A58u);
    ctx->pc = 0x1D6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A50u;
    // 0x1d6a54: 0x8264021f  lb          $a0, 0x21F($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151580u, 0x1D6A50u, 0x1D6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A58u;
label_1d6a58:
    // 0x1d6a58: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6a5c:
    // 0x1d6a5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d6a60:
    // 0x1d6a60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6a64:
    // 0x1d6a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6a68:
    // 0x1d6a68: 0x0  nop
    ctx->pc = 0x1d6a68u;
    // NOP
label_1d6a6c:
    // 0x1d6a6c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1d6a6cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1d6a70:
    // 0x1d6a70: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x1d6a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_1d6a74:
    // 0x1d6a74: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x1d6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6a78:
    // 0x1d6a78: 0x46020301  sub.s       $f12, $f0, $f2
    ctx->pc = 0x1d6a78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d6a7c:
    // 0x1d6a7c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d6a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6a80:
    // 0x1d6a80: 0x0  nop
    ctx->pc = 0x1d6a80u;
    // NOP
label_1d6a84:
    // 0x1d6a84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d6a88:
    if (ctx->pc == 0x1D6A88u) {
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A8Cu;
        goto label_1d6a8c;
    }
    ctx->pc = 0x1D6A84u;
    {
        const bool branch_taken_0x1d6a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a84) {
            ctx->pc = 0x1D6A9Cu;
            goto label_1d6a9c;
        }
    }
    ctx->pc = 0x1D6A8Cu;
label_1d6a8c:
    // 0x1d6a8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6a90:
    // 0x1d6a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6a94:
    // 0x1d6a94: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d6a98:
    if (ctx->pc == 0x1D6A98u) {
        ctx->pc = 0x1D6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A94u;
        // 0x1d6a98: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A9Cu;
        goto label_1d6a9c;
    }
    ctx->pc = 0x1D6A94u;
    {
        const bool branch_taken_0x1d6a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A94u;
        // 0x1d6a98: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a94) {
            ctx->pc = 0x1D6AD0u;
            goto label_1d6ad0;
        }
    }
    ctx->pc = 0x1D6A9Cu;
label_1d6a9c:
    // 0x1d6a9c: 0x0  nop
    ctx->pc = 0x1d6a9cu;
    // NOP
label_1d6aa0:
    // 0x1d6aa0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d6aa4:
    // 0x1d6aa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6aa8:
    // 0x1d6aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6aac:
    // 0x1d6aac: 0x0  nop
    ctx->pc = 0x1d6aacu;
    // NOP
label_1d6ab0:
    // 0x1d6ab0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1d6ab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6ab4:
    // 0x1d6ab4: 0x0  nop
    ctx->pc = 0x1d6ab4u;
    // NOP
label_1d6ab8:
    // 0x1d6ab8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6abc:
    if (ctx->pc == 0x1D6ABCu) {
        ctx->pc = 0x1D6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AB8u;
        // 0x1d6abc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AC0u;
        goto label_1d6ac0;
    }
    ctx->pc = 0x1D6AB8u;
    {
        const bool branch_taken_0x1d6ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AB8u;
        // 0x1d6abc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ab8) {
            ctx->pc = 0x1D6AD0u;
            goto label_1d6ad0;
        }
    }
    ctx->pc = 0x1D6AC0u;
label_1d6ac0:
    // 0x1d6ac0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6ac4:
    // 0x1d6ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6ac8:
    // 0x1d6ac8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d6acc:
    if (ctx->pc == 0x1D6ACCu) {
        ctx->pc = 0x1D6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC8u;
        // 0x1d6acc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AD0u;
        goto label_1d6ad0;
    }
    ctx->pc = 0x1D6AC8u;
    {
        const bool branch_taken_0x1d6ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC8u;
        // 0x1d6acc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ac8) {
            ctx->pc = 0x1D6AD0u;
            goto label_1d6ad0;
        }
    }
    ctx->pc = 0x1D6AD0u;
label_1d6ad0:
    // 0x1d6ad0: 0xc054560  jal         func_151580
label_1d6ad4:
    if (ctx->pc == 0x1D6AD4u) {
        ctx->pc = 0x1D6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AD0u;
        // 0x1d6ad4: 0x82e4021f  lb          $a0, 0x21F($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 543)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AD8u;
        goto label_1d6ad8;
    }
    ctx->pc = 0x1D6AD0u;
    SET_GPR_U32(ctx, 31, 0x1D6AD8u);
    ctx->pc = 0x1D6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AD0u;
    // 0x1d6ad4: 0x82e4021f  lb          $a0, 0x21F($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 543)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151580u, 0x1D6AD0u, 0x1D6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AD8u;
label_1d6ad8:
    // 0x1d6ad8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d6adc:
    // 0x1d6adc: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6ae0:
    // 0x1d6ae0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d6ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6ae4:
    // 0x1d6ae4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d6ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6ae8:
    // 0x1d6ae8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d6ae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1d6aec:
    // 0x1d6aec: 0x4a0002ff  vnop
    ctx->pc = 0x1d6aecu;
    // NOP operation, no action needed for VU0
label_1d6af0:
    // 0x1d6af0: 0x4a0002ff  vnop
    ctx->pc = 0x1d6af0u;
    // NOP operation, no action needed for VU0
label_1d6af4:
    // 0x1d6af4: 0x4a0002ff  vnop
    ctx->pc = 0x1d6af4u;
    // NOP operation, no action needed for VU0
label_1d6af8:
    // 0x1d6af8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d6af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1d6afc:
    // 0x1d6afc: 0x4a0002ff  vnop
    ctx->pc = 0x1d6afcu;
    // NOP operation, no action needed for VU0
label_1d6b00:
    // 0x1d6b00: 0x4a0002ff  vnop
    ctx->pc = 0x1d6b00u;
    // NOP operation, no action needed for VU0
label_1d6b04:
    // 0x1d6b04: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d6b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d6b08:
    // 0x1d6b08: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d6b08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1d6b0c:
    // 0x1d6b0c: 0x4a0002ff  vnop
    ctx->pc = 0x1d6b0cu;
    // NOP operation, no action needed for VU0
label_1d6b10:
    // 0x1d6b10: 0x4a0002ff  vnop
    ctx->pc = 0x1d6b10u;
    // NOP operation, no action needed for VU0
label_1d6b14:
    // 0x1d6b14: 0x4a0002ff  vnop
    ctx->pc = 0x1d6b14u;
    // NOP operation, no action needed for VU0
label_1d6b18:
    // 0x1d6b18: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d6b18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1d6b1c:
    // 0x1d6b1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d6b1cu;
    // VWAITQ (Q already resolved in this runtime)
label_1d6b20:
    // 0x1d6b20: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d6b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1d6b24:
    // 0x1d6b24: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d6b24u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6b28:
    // 0x1d6b28: 0x0  nop
    ctx->pc = 0x1d6b28u;
    // NOP
label_1d6b2c:
    // 0x1d6b2c: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x1d6b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_1d6b30:
    // 0x1d6b30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6b34:
    // 0x1d6b34: 0x0  nop
    ctx->pc = 0x1d6b34u;
    // NOP
label_1d6b38:
    // 0x1d6b38: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1d6b3c:
    if (ctx->pc == 0x1D6B3Cu) {
        ctx->pc = 0x1D6B40u;
        goto label_1d6b40;
    }
    ctx->pc = 0x1D6B38u;
    {
        const bool branch_taken_0x1d6b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6b38) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D6B40u;
label_1d6b40:
    // 0x1d6b40: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1d6b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6b44:
    // 0x1d6b44: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1d6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6b48:
    // 0x1d6b48: 0xc06d448  jal         func_1B5120
label_1d6b4c:
    if (ctx->pc == 0x1D6B4Cu) {
        ctx->pc = 0x1D6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B48u;
        // 0x1d6b4c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B50u;
        goto label_1d6b50;
    }
    ctx->pc = 0x1D6B48u;
    SET_GPR_U32(ctx, 31, 0x1D6B50u);
    ctx->pc = 0x1D6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B48u;
    // 0x1d6b4c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D6B50u;
label_1d6b50:
    // 0x1d6b50: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1d6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1d6b54:
    // 0x1d6b54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6b58:
    // 0x1d6b58: 0x0  nop
    ctx->pc = 0x1d6b58u;
    // NOP
label_1d6b5c:
    // 0x1d6b5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d6b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6b60:
    // 0x1d6b60: 0x0  nop
    ctx->pc = 0x1d6b60u;
    // NOP
label_1d6b64:
    // 0x1d6b64: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1d6b68:
    if (ctx->pc == 0x1D6B68u) {
        ctx->pc = 0x1D6B6Cu;
        goto label_1d6b6c;
    }
    ctx->pc = 0x1D6B64u;
    {
        const bool branch_taken_0x1d6b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6b64) {
            ctx->pc = 0x1D6BC0u;
            goto label_1d6bc0;
        }
    }
    ctx->pc = 0x1D6B6Cu;
label_1d6b6c:
    // 0x1d6b6c: 0x8223002a  lb          $v1, 0x2A($s1)
    ctx->pc = 0x1d6b6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1d6b70:
    // 0x1d6b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6b74:
    // 0x1d6b74: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1d6b78:
    if (ctx->pc == 0x1D6B78u) {
        ctx->pc = 0x1D6B7Cu;
        goto label_1d6b7c;
    }
    ctx->pc = 0x1D6B74u;
    {
        const bool branch_taken_0x1d6b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6b74) {
            ctx->pc = 0x1D6B94u;
            goto label_1d6b94;
        }
    }
    ctx->pc = 0x1D6B7Cu;
label_1d6b7c:
    // 0x1d6b7c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1d6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6b80:
    // 0x1d6b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6b84:
    // 0x1d6b84: 0xc050f08  jal         func_143C20
label_1d6b88:
    if (ctx->pc == 0x1D6B88u) {
        ctx->pc = 0x1D6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B84u;
        // 0x1d6b88: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B8Cu;
        goto label_1d6b8c;
    }
    ctx->pc = 0x1D6B84u;
    SET_GPR_U32(ctx, 31, 0x1D6B8Cu);
    ctx->pc = 0x1D6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B84u;
    // 0x1d6b88: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D6B84u, 0x1D6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B8Cu;
label_1d6b8c:
    // 0x1d6b8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d6b90:
    if (ctx->pc == 0x1D6B90u) {
        ctx->pc = 0x1D6B94u;
        goto label_1d6b94;
    }
    ctx->pc = 0x1D6B8Cu;
    {
        const bool branch_taken_0x1d6b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b8c) {
            ctx->pc = 0x1D6BA8u;
            goto label_1d6ba8;
        }
    }
    ctx->pc = 0x1D6B94u;
label_1d6b94:
    // 0x1d6b94: 0x0  nop
    ctx->pc = 0x1d6b94u;
    // NOP
label_1d6b98:
    // 0x1d6b98: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1d6b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6b9c:
    // 0x1d6b9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6ba0:
    // 0x1d6ba0: 0xc050f08  jal         func_143C20
label_1d6ba4:
    if (ctx->pc == 0x1D6BA4u) {
        ctx->pc = 0x1D6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BA0u;
        // 0x1d6ba4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BA8u;
        goto label_1d6ba8;
    }
    ctx->pc = 0x1D6BA0u;
    SET_GPR_U32(ctx, 31, 0x1D6BA8u);
    ctx->pc = 0x1D6BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BA0u;
    // 0x1d6ba4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D6BA0u, 0x1D6BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BA8u;
label_1d6ba8:
    // 0x1d6ba8: 0x8ee50200  lw          $a1, 0x200($s7)
    ctx->pc = 0x1d6ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 512)));
label_1d6bac:
    // 0x1d6bac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6bb0:
    // 0x1d6bb0: 0xc050f08  jal         func_143C20
label_1d6bb4:
    if (ctx->pc == 0x1D6BB4u) {
        ctx->pc = 0x1D6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BB0u;
        // 0x1d6bb4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BB8u;
        goto label_1d6bb8;
    }
    ctx->pc = 0x1D6BB0u;
    SET_GPR_U32(ctx, 31, 0x1D6BB8u);
    ctx->pc = 0x1D6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BB0u;
    // 0x1d6bb4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D6BB0u, 0x1D6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BB8u;
label_1d6bb8:
    // 0x1d6bb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d6bbc:
    if (ctx->pc == 0x1D6BBCu) {
        ctx->pc = 0x1D6BC0u;
        goto label_1d6bc0;
    }
    ctx->pc = 0x1D6BB8u;
    {
        const bool branch_taken_0x1d6bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6bb8) {
            ctx->pc = 0x1D6BD4u;
            goto label_1d6bd4;
        }
    }
    ctx->pc = 0x1D6BC0u;
label_1d6bc0:
    // 0x1d6bc0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1d6bc4:
    // 0x1d6bc4: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x1d6bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1d6bc8:
    // 0x1d6bc8: 0x2aa30013  slti        $v1, $s5, 0x13
    ctx->pc = 0x1d6bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)19) ? 1 : 0);
label_1d6bcc:
    // 0x1d6bcc: 0x1460ff34  bnez        $v1, . + 4 + (-0xCC << 2)
label_1d6bd0:
    if (ctx->pc == 0x1D6BD0u) {
        ctx->pc = 0x1D6BD4u;
        goto label_1d6bd4;
    }
    ctx->pc = 0x1D6BCCu;
    {
        const bool branch_taken_0x1d6bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6bcc) {
            ctx->pc = 0x1D68A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d68a0;
        }
    }
    ctx->pc = 0x1D6BD4u;
label_1d6bd4:
    // 0x1d6bd4: 0x0  nop
    ctx->pc = 0x1d6bd4u;
    // NOP
label_1d6bd8:
    // 0x1d6bd8: 0x2415001b  addiu       $s5, $zero, 0x1B
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1d6bdc:
    // 0x1d6bdc: 0x640300d8  daddiu      $v1, $zero, 0xD8
    ctx->pc = 0x1d6bdcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)216);
label_1d6be0:
    // 0x1d6be0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1d6be4:
    // 0x1d6be4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d6be8:
    // 0x1d6be8: 0x10000187  b           . + 4 + (0x187 << 2)
label_1d6bec:
    if (ctx->pc == 0x1D6BECu) {
        ctx->pc = 0x1D6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BE8u;
        // 0x1d6bec: 0x3c39021  addu        $s2, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BF0u;
        goto label_1d6bf0;
    }
    ctx->pc = 0x1D6BE8u;
    {
        const bool branch_taken_0x1d6be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BE8u;
        // 0x1d6bec: 0x3c39021  addu        $s2, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6be8) {
            ctx->pc = 0x1D7208u;
            { ctx->pc = 0x1d7208; return; }
        }
    }
    ctx->pc = 0x1D6BF0u;
label_1d6bf0:
    // 0x1d6bf0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d6bf4:
    // 0x1d6bf4: 0x10600182  beqz        $v1, . + 4 + (0x182 << 2)
label_1d6bf8:
    if (ctx->pc == 0x1D6BF8u) {
        ctx->pc = 0x1D6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BF4u;
        // 0x1d6bf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BFCu;
        goto label_1d6bfc;
    }
    ctx->pc = 0x1D6BF4u;
    {
        const bool branch_taken_0x1d6bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BF4u;
        // 0x1d6bf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bf4) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6BFCu;
label_1d6bfc:
    // 0x1d6bfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d6bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6c00:
    // 0x1d6c00: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d6c04:
    if (ctx->pc == 0x1D6C04u) {
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C00u;
        // 0x1d6c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C08u;
        goto label_1d6c08;
    }
    ctx->pc = 0x1D6C00u;
    {
        const bool branch_taken_0x1d6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C00u;
        // 0x1d6c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c00) {
            ctx->pc = 0x1D6C34u;
            goto label_1d6c34;
        }
    }
    ctx->pc = 0x1D6C08u;
label_1d6c08:
    // 0x1d6c08: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x1d6c08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d6c0c:
    // 0x1d6c0c: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x1d6c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_1d6c10:
    // 0x1d6c10: 0x90e601a2  lbu         $a2, 0x1A2($a3)
    ctx->pc = 0x1d6c10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
label_1d6c14:
    // 0x1d6c14: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d6c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1d6c18:
    // 0x1d6c18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d6c1c:
    if (ctx->pc == 0x1D6C1Cu) {
        ctx->pc = 0x1D6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C18u;
        // 0x1d6c1c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C20u;
        goto label_1d6c20;
    }
    ctx->pc = 0x1D6C18u;
    {
        const bool branch_taken_0x1d6c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C18u;
        // 0x1d6c1c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c18) {
            ctx->pc = 0x1D6C30u;
            goto label_1d6c30;
        }
    }
    ctx->pc = 0x1D6C20u;
label_1d6c20:
    // 0x1d6c20: 0x24e301b0  addiu       $v1, $a3, 0x1B0
    ctx->pc = 0x1d6c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_1d6c24:
    // 0x1d6c24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6c28:
    // 0x1d6c28: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d6c2c:
    if (ctx->pc == 0x1D6C2Cu) {
        ctx->pc = 0x1D6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C28u;
        // 0x1d6c2c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C30u;
        goto label_1d6c30;
    }
    ctx->pc = 0x1D6C28u;
    {
        const bool branch_taken_0x1d6c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C28u;
        // 0x1d6c2c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c28) {
            ctx->pc = 0x1D6C44u;
            goto label_1d6c44;
        }
    }
    ctx->pc = 0x1D6C30u;
label_1d6c30:
    // 0x1d6c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d6c34:
    // 0x1d6c34: 0x0  nop
    ctx->pc = 0x1d6c34u;
    // NOP
label_1d6c38:
    // 0x1d6c38: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1d6c38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d6c3c:
    // 0x1d6c3c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1d6c40:
    if (ctx->pc == 0x1D6C40u) {
        ctx->pc = 0x1D6C44u;
        goto label_1d6c44;
    }
    ctx->pc = 0x1D6C3Cu;
    {
        const bool branch_taken_0x1d6c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c3c) {
            ctx->pc = 0x1D6C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6c08;
        }
    }
    ctx->pc = 0x1D6C44u;
label_1d6c44:
    // 0x1d6c44: 0x0  nop
    ctx->pc = 0x1d6c44u;
    // NOP
label_1d6c48:
    // 0x1d6c48: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x1d6c48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_1d6c4c:
    // 0x1d6c4c: 0x1060016c  beqz        $v1, . + 4 + (0x16C << 2)
label_1d6c50:
    if (ctx->pc == 0x1D6C50u) {
        ctx->pc = 0x1D6C54u;
        goto label_1d6c54;
    }
    ctx->pc = 0x1D6C4Cu;
    {
        const bool branch_taken_0x1d6c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c4c) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6C54u;
label_1d6c54:
    // 0x1d6c54: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x1d6c54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1d6c58:
    // 0x1d6c58: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1d6c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d6c5c:
    // 0x1d6c5c: 0x14600168  bnez        $v1, . + 4 + (0x168 << 2)
label_1d6c60:
    if (ctx->pc == 0x1D6C60u) {
        ctx->pc = 0x1D6C64u;
        goto label_1d6c64;
    }
    ctx->pc = 0x1D6C5Cu;
    {
        const bool branch_taken_0x1d6c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c5c) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6C64u;
label_1d6c64:
    // 0x1d6c64: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d6c68:
    // 0x1d6c68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d6c6c:
    // 0x1d6c6c: 0x90840246  lbu         $a0, 0x246($a0)
    ctx->pc = 0x1d6c6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 582)));
label_1d6c70:
    // 0x1d6c70: 0x10830163  beq         $a0, $v1, . + 4 + (0x163 << 2)
label_1d6c74:
    if (ctx->pc == 0x1D6C74u) {
        ctx->pc = 0x1D6C78u;
        goto label_1d6c78;
    }
    ctx->pc = 0x1D6C70u;
    {
        const bool branch_taken_0x1d6c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6c70) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6C78u;
label_1d6c78:
    // 0x1d6c78: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6c7c:
    // 0x1d6c7c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1d6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1d6c80:
    // 0x1d6c80: 0x1460015f  bnez        $v1, . + 4 + (0x15F << 2)
label_1d6c84:
    if (ctx->pc == 0x1D6C84u) {
        ctx->pc = 0x1D6C88u;
        goto label_1d6c88;
    }
    ctx->pc = 0x1D6C80u;
    {
        const bool branch_taken_0x1d6c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c80) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6C88u;
label_1d6c88:
    // 0x1d6c88: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d6c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d6c8c:
    // 0x1d6c8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6c90:
    // 0x1d6c90: 0x30632c60  andi        $v1, $v1, 0x2C60
    ctx->pc = 0x1d6c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)11360);
label_1d6c94:
    // 0x1d6c94: 0x1460015a  bnez        $v1, . + 4 + (0x15A << 2)
label_1d6c98:
    if (ctx->pc == 0x1D6C98u) {
        ctx->pc = 0x1D6C9Cu;
        goto label_1d6c9c;
    }
    ctx->pc = 0x1D6C94u;
    {
        const bool branch_taken_0x1d6c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c94) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6C9Cu;
label_1d6c9c:
    // 0x1d6c9c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1d6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d6ca0:
    // 0x1d6ca0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d6ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d6ca4:
    // 0x1d6ca4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d6ca8:
    // 0x1d6ca8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6cac:
    // 0x1d6cac: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d6cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d6cb0:
    // 0x1d6cb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d6cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d6cb4:
    // 0x1d6cb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d6cb8:
    // 0x1d6cb8: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d6cbc:
    // 0x1d6cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6cc0:
    // 0x1d6cc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6cc4:
    // 0x1d6cc4: 0xc06704c  jal         func_19C130
label_1d6cc8:
    if (ctx->pc == 0x1D6CC8u) {
        ctx->pc = 0x1D6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CC4u;
        // 0x1d6cc8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CCCu;
        goto label_1d6ccc;
    }
    ctx->pc = 0x1D6CC4u;
    SET_GPR_U32(ctx, 31, 0x1D6CCCu);
    ctx->pc = 0x1D6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CC4u;
    // 0x1d6cc8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C130u;
    { ctx->pc = 0x19c130; return; }
    ctx->pc = 0x1D6CCCu;
label_1d6ccc:
    // 0x1d6ccc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6cd0:
    // 0x1d6cd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d6cd4:
    // 0x1d6cd4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6cd8:
    // 0x1d6cd8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d6cdc:
    // 0x1d6cdc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1d6cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6ce0:
    // 0x1d6ce0: 0xc066e08  jal         func_19B820
label_1d6ce4:
    if (ctx->pc == 0x1D6CE4u) {
        ctx->pc = 0x1D6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CE0u;
        // 0x1d6ce4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CE8u;
        goto label_1d6ce8;
    }
    ctx->pc = 0x1D6CE0u;
    SET_GPR_U32(ctx, 31, 0x1D6CE8u);
    ctx->pc = 0x1D6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE0u;
    // 0x1d6ce4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1D6CE8u;
label_1d6ce8:
    // 0x1d6ce8: 0xc06d448  jal         func_1B5120
label_1d6cec:
    if (ctx->pc == 0x1D6CECu) {
        ctx->pc = 0x1D6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CE8u;
        // 0x1d6cec: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CF0u;
        goto label_1d6cf0;
    }
    ctx->pc = 0x1D6CE8u;
    SET_GPR_U32(ctx, 31, 0x1D6CF0u);
    ctx->pc = 0x1D6CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE8u;
    // 0x1d6cec: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D6CF0u;
label_1d6cf0:
    // 0x1d6cf0: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1d6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6cf4:
    // 0x1d6cf4: 0xc06d448  jal         func_1B5120
label_1d6cf8:
    if (ctx->pc == 0x1D6CF8u) {
        ctx->pc = 0x1D6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CF4u;
        // 0x1d6cf8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6CFCu;
        goto label_1d6cfc;
    }
    ctx->pc = 0x1D6CF4u;
    SET_GPR_U32(ctx, 31, 0x1D6CFCu);
    ctx->pc = 0x1D6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CF4u;
    // 0x1d6cf8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D6CFCu;
label_1d6cfc:
    // 0x1d6cfc: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1d6cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1d6d00:
    // 0x1d6d00: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_1d6d04:
    // 0x1d6d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6d08:
    // 0x1d6d08: 0x0  nop
    ctx->pc = 0x1d6d08u;
    // NOP
label_1d6d0c:
    // 0x1d6d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6d10:
    // 0x1d6d10: 0x0  nop
    ctx->pc = 0x1d6d10u;
    // NOP
label_1d6d14:
    // 0x1d6d14: 0x4500013a  bc1f        . + 4 + (0x13A << 2)
label_1d6d18:
    if (ctx->pc == 0x1D6D18u) {
        ctx->pc = 0x1D6D1Cu;
        goto label_1d6d1c;
    }
    ctx->pc = 0x1D6D14u;
    {
        const bool branch_taken_0x1d6d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6d14) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6D1Cu;
label_1d6d1c:
    // 0x1d6d1c: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1d6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d6d20:
    // 0x1d6d20: 0xc06d51e  jal         func_1B5478
label_1d6d24:
    if (ctx->pc == 0x1D6D24u) {
        ctx->pc = 0x1D6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D20u;
        // 0x1d6d24: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D28u;
        goto label_1d6d28;
    }
    ctx->pc = 0x1D6D20u;
    SET_GPR_U32(ctx, 31, 0x1D6D28u);
    ctx->pc = 0x1D6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D20u;
    // 0x1d6d24: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1D6D28u;
label_1d6d28:
    // 0x1d6d28: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x1d6d28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1d6d2c:
    // 0x1d6d2c: 0xc06d448  jal         func_1B5120
label_1d6d30:
    if (ctx->pc == 0x1D6D30u) {
        ctx->pc = 0x1D6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D2Cu;
        // 0x1d6d30: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D34u;
        goto label_1d6d34;
    }
    ctx->pc = 0x1D6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D34u);
    ctx->pc = 0x1D6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D2Cu;
    // 0x1d6d30: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D6D34u;
label_1d6d34:
    // 0x1d6d34: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1d6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_1d6d38:
    // 0x1d6d38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6d3c:
    // 0x1d6d3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6d40:
    // 0x1d6d40: 0x0  nop
    ctx->pc = 0x1d6d40u;
    // NOP
label_1d6d44:
    // 0x1d6d44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d6d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6d48:
    // 0x1d6d48: 0x0  nop
    ctx->pc = 0x1d6d48u;
    // NOP
label_1d6d4c:
    // 0x1d6d4c: 0x4500012c  bc1f        . + 4 + (0x12C << 2)
label_1d6d50:
    if (ctx->pc == 0x1D6D50u) {
        ctx->pc = 0x1D6D54u;
        goto label_1d6d54;
    }
    ctx->pc = 0x1D6D4Cu;
    {
        const bool branch_taken_0x1d6d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6d4c) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6D54u;
label_1d6d54:
    // 0x1d6d54: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6d58:
    // 0x1d6d58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d6d5c:
    // 0x1d6d5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6d60:
    // 0x1d6d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6d64:
    // 0x1d6d64: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1d6d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6d68:
    // 0x1d6d68: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x1d6d68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_1d6d6c:
    // 0x1d6d6c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1d6d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6d70:
    // 0x1d6d70: 0x0  nop
    ctx->pc = 0x1d6d70u;
    // NOP
label_1d6d74:
    // 0x1d6d74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d6d78:
    if (ctx->pc == 0x1D6D78u) {
        ctx->pc = 0x1D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D74u;
        // 0x1d6d78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D7Cu;
        goto label_1d6d7c;
    }
    ctx->pc = 0x1D6D74u;
    {
        const bool branch_taken_0x1d6d74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D74u;
        // 0x1d6d78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d74) {
            ctx->pc = 0x1D6D8Cu;
            goto label_1d6d8c;
        }
    }
    ctx->pc = 0x1D6D7Cu;
label_1d6d7c:
    // 0x1d6d7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6d80:
    // 0x1d6d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6d84:
    // 0x1d6d84: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d6d88:
    if (ctx->pc == 0x1D6D88u) {
        ctx->pc = 0x1D6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D84u;
        // 0x1d6d88: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6D8Cu;
        goto label_1d6d8c;
    }
    ctx->pc = 0x1D6D84u;
    {
        const bool branch_taken_0x1d6d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D84u;
        // 0x1d6d88: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d84) {
            ctx->pc = 0x1D6DC0u;
            goto label_1d6dc0;
        }
    }
    ctx->pc = 0x1D6D8Cu;
label_1d6d8c:
    // 0x1d6d8c: 0x0  nop
    ctx->pc = 0x1d6d8cu;
    // NOP
label_1d6d90:
    // 0x1d6d90: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d6d94:
    // 0x1d6d94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6d98:
    // 0x1d6d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6d9c:
    // 0x1d6d9c: 0x0  nop
    ctx->pc = 0x1d6d9cu;
    // NOP
label_1d6da0:
    // 0x1d6da0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1d6da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6da4:
    // 0x1d6da4: 0x0  nop
    ctx->pc = 0x1d6da4u;
    // NOP
label_1d6da8:
    // 0x1d6da8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6dac:
    if (ctx->pc == 0x1D6DACu) {
        ctx->pc = 0x1D6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA8u;
        // 0x1d6dac: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DB0u;
        goto label_1d6db0;
    }
    ctx->pc = 0x1D6DA8u;
    {
        const bool branch_taken_0x1d6da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA8u;
        // 0x1d6dac: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6da8) {
            ctx->pc = 0x1D6DC0u;
            goto label_1d6dc0;
        }
    }
    ctx->pc = 0x1D6DB0u;
label_1d6db0:
    // 0x1d6db0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d6db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d6db4:
    // 0x1d6db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6db8:
    // 0x1d6db8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d6dbc:
    if (ctx->pc == 0x1D6DBCu) {
        ctx->pc = 0x1D6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB8u;
        // 0x1d6dbc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DC0u;
        goto label_1d6dc0;
    }
    ctx->pc = 0x1D6DB8u;
    {
        const bool branch_taken_0x1d6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB8u;
        // 0x1d6dbc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6db8) {
            ctx->pc = 0x1D6DC0u;
            goto label_1d6dc0;
        }
    }
    ctx->pc = 0x1D6DC0u;
label_1d6dc0:
    // 0x1d6dc0: 0xc054560  jal         func_151580
label_1d6dc4:
    if (ctx->pc == 0x1D6DC4u) {
        ctx->pc = 0x1D6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DC0u;
        // 0x1d6dc4: 0x8264021f  lb          $a0, 0x21F($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6DC8u;
        goto label_1d6dc8;
    }
    ctx->pc = 0x1D6DC0u;
    SET_GPR_U32(ctx, 31, 0x1D6DC8u);
    ctx->pc = 0x1D6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DC0u;
    // 0x1d6dc4: 0x8264021f  lb          $a0, 0x21F($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151580u, 0x1D6DC0u, 0x1D6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DC8u;
label_1d6dc8:
    // 0x1d6dc8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1d6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1d6dcc:
    // 0x1d6dcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d6dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d6dd0:
    // 0x1d6dd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6dd4:
    // 0x1d6dd4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1d6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6dd8:
    // 0x1d6dd8: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x1d6dd8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d6ddc:
    // 0x1d6ddc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d6ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6de0:
    // 0x1d6de0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d6de0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6de4:
    // 0x1d6de4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d6de4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1d6de8:
    // 0x1d6de8: 0x4a0002ff  vnop
    ctx->pc = 0x1d6de8u;
    // NOP operation, no action needed for VU0
label_1d6dec:
    // 0x1d6dec: 0x4a0002ff  vnop
    ctx->pc = 0x1d6decu;
    // NOP operation, no action needed for VU0
label_1d6df0:
    // 0x1d6df0: 0x4a0002ff  vnop
    ctx->pc = 0x1d6df0u;
    // NOP operation, no action needed for VU0
label_1d6df4:
    // 0x1d6df4: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d6df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1d6df8:
    // 0x1d6df8: 0x4a0002ff  vnop
    ctx->pc = 0x1d6df8u;
    // NOP operation, no action needed for VU0
label_1d6dfc:
    // 0x1d6dfc: 0x4a0002ff  vnop
    ctx->pc = 0x1d6dfcu;
    // NOP operation, no action needed for VU0
label_1d6e00:
    // 0x1d6e00: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d6e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d6e04:
    // 0x1d6e04: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d6e04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1d6e08:
    // 0x1d6e08: 0x4a0002ff  vnop
    ctx->pc = 0x1d6e08u;
    // NOP operation, no action needed for VU0
label_1d6e0c:
    // 0x1d6e0c: 0x4a0002ff  vnop
    ctx->pc = 0x1d6e0cu;
    // NOP operation, no action needed for VU0
label_1d6e10:
    // 0x1d6e10: 0x4a0002ff  vnop
    ctx->pc = 0x1d6e10u;
    // NOP operation, no action needed for VU0
label_1d6e14:
    // 0x1d6e14: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d6e14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1d6e18:
    // 0x1d6e18: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d6e18u;
    // VWAITQ (Q already resolved in this runtime)
label_1d6e1c:
    // 0x1d6e1c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d6e1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1d6e20:
    // 0x1d6e20: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d6e20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6e24:
    // 0x1d6e24: 0x0  nop
    ctx->pc = 0x1d6e24u;
    // NOP
label_1d6e28:
    // 0x1d6e28: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x1d6e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6e2c:
    // 0x1d6e2c: 0x0  nop
    ctx->pc = 0x1d6e2cu;
    // NOP
label_1d6e30:
    // 0x1d6e30: 0x450000f3  bc1f        . + 4 + (0xF3 << 2)
label_1d6e34:
    if (ctx->pc == 0x1D6E34u) {
        ctx->pc = 0x1D6E38u;
        goto label_1d6e38;
    }
    ctx->pc = 0x1D6E30u;
    {
        const bool branch_taken_0x1d6e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6e30) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6E38u;
label_1d6e38:
    // 0x1d6e38: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1d6e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6e3c:
    // 0x1d6e3c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1d6e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6e40:
    // 0x1d6e40: 0xc06d448  jal         func_1B5120
label_1d6e44:
    if (ctx->pc == 0x1D6E44u) {
        ctx->pc = 0x1D6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E40u;
        // 0x1d6e44: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6E48u;
        goto label_1d6e48;
    }
    ctx->pc = 0x1D6E40u;
    SET_GPR_U32(ctx, 31, 0x1D6E48u);
    ctx->pc = 0x1D6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E40u;
    // 0x1d6e44: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D6E48u;
label_1d6e48:
    // 0x1d6e48: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_1d6e4c:
    // 0x1d6e4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6e50:
    // 0x1d6e50: 0x0  nop
    ctx->pc = 0x1d6e50u;
    // NOP
label_1d6e54:
    // 0x1d6e54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d6e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6e58:
    // 0x1d6e58: 0x0  nop
    ctx->pc = 0x1d6e58u;
    // NOP
label_1d6e5c:
    // 0x1d6e5c: 0x450000e8  bc1f        . + 4 + (0xE8 << 2)
label_1d6e60:
    if (ctx->pc == 0x1D6E60u) {
        ctx->pc = 0x1D6E64u;
        goto label_1d6e64;
    }
    ctx->pc = 0x1D6E5Cu;
    {
        const bool branch_taken_0x1d6e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6e5c) {
            ctx->pc = 0x1D7200u;
            { ctx->pc = 0x1d7200; return; }
        }
    }
    ctx->pc = 0x1D6E64u;
label_1d6e64:
    // 0x1d6e64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d6e68:
    // 0x1d6e68: 0x86620212  lh          $v0, 0x212($s3)
    ctx->pc = 0x1d6e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 530)));
label_1d6e6c:
    // 0x1d6e6c: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x1d6e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
label_1d6e70:
    // 0x1d6e70: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d6e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6e74:
    // 0x1d6e74: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1d6e78:
    if (ctx->pc == 0x1D6E78u) {
        ctx->pc = 0x1D6E7Cu;
        goto label_1d6e7c;
    }
    ctx->pc = 0x1D6E74u;
    {
        const bool branch_taken_0x1d6e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e74) {
            ctx->pc = 0x1D6E94u;
            goto label_1d6e94;
        }
    }
    ctx->pc = 0x1D6E7Cu;
label_1d6e7c:
    // 0x1d6e7c: 0x8e630200  lw          $v1, 0x200($s3)
    ctx->pc = 0x1d6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d6e80:
    // 0x1d6e80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d6e84:
    // 0x1d6e84: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x1d6e84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_1d6e88:
    // 0x1d6e88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d6e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d6e8c:
    // 0x1d6e8c: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_1d6e90:
    if (ctx->pc == 0x1D6E90u) {
        ctx->pc = 0x1D6E94u;
        goto label_1d6e94;
    }
    ctx->pc = 0x1D6E8Cu;
    {
        const bool branch_taken_0x1d6e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e8c) {
            ctx->pc = 0x1D71D8u;
            { ctx->pc = 0x1d71d8; return; }
        }
    }
    ctx->pc = 0x1D6E94u;
label_1d6e94:
    // 0x1d6e94: 0x0  nop
    ctx->pc = 0x1d6e94u;
    // NOP
label_1d6e98:
    // 0x1d6e98: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1d6e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d6e9c:
    // 0x1d6e9c: 0x8e640200  lw          $a0, 0x200($s3)
    ctx->pc = 0x1d6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d6ea0:
    // 0x1d6ea0: 0x90a30234  lbu         $v1, 0x234($a1)
    ctx->pc = 0x1d6ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 564)));
label_1d6ea4:
    // 0x1d6ea4: 0x90820234  lbu         $v0, 0x234($a0)
    ctx->pc = 0x1d6ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1d6ea8:
    // 0x1d6ea8: 0x14620068  bne         $v1, $v0, . + 4 + (0x68 << 2)
label_1d6eac:
    if (ctx->pc == 0x1D6EACu) {
        ctx->pc = 0x1D6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EA8u;
        // 0x1d6eac: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6EB0u;
        goto label_1d6eb0;
    }
    ctx->pc = 0x1D6EA8u;
    {
        const bool branch_taken_0x1d6ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EA8u;
        // 0x1d6eac: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ea8) {
            ctx->pc = 0x1D704Cu;
            { ctx->pc = 0x1d704c; return; }
        }
    }
    ctx->pc = 0x1D6EB0u;
label_1d6eb0:
    // 0x1d6eb0: 0xc040928  jal         func_1024A0
label_1d6eb4:
    if (ctx->pc == 0x1D6EB4u) {
        ctx->pc = 0x1D6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EB0u;
        // 0x1d6eb4: 0x24c6b640  addiu       $a2, $a2, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6EB8u;
        goto label_1d6eb8;
    }
    ctx->pc = 0x1D6EB0u;
    SET_GPR_U32(ctx, 31, 0x1D6EB8u);
    ctx->pc = 0x1D6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EB0u;
    // 0x1d6eb4: 0x24c6b640  addiu       $a2, $a2, -0x49C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024A0u, 0x1D6EB0u, 0x1D6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EB8u;
label_1d6eb8:
    // 0x1d6eb8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1d6ebc:
    // 0x1d6ebc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6ec0:
    // 0x1d6ec0: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x1d6ec0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d6ec4:
    // 0x1d6ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6ec8:
    // 0x1d6ec8: 0x0  nop
    ctx->pc = 0x1d6ec8u;
    // NOP
label_1d6ecc:
    // 0x1d6ecc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6ed0:
    // 0x1d6ed0: 0x0  nop
    ctx->pc = 0x1d6ed0u;
    // NOP
label_1d6ed4:
    // 0x1d6ed4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d6ed8:
    if (ctx->pc == 0x1D6ED8u) {
        ctx->pc = 0x1D6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ED4u;
        // 0x1d6ed8: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6EDCu;
        goto label_1d6edc;
    }
    ctx->pc = 0x1D6ED4u;
    {
        const bool branch_taken_0x1d6ed4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ED4u;
        // 0x1d6ed8: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ed4) {
            ctx->pc = 0x1D6EECu;
            goto label_1d6eec;
        }
    }
    ctx->pc = 0x1D6EDCu;
label_1d6edc:
    // 0x1d6edc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6ee0:
    // 0x1d6ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6ee4:
    // 0x1d6ee4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d6ee8:
    if (ctx->pc == 0x1D6EE8u) {
        ctx->pc = 0x1D6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EE4u;
        // 0x1d6ee8: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6EECu;
        goto label_1d6eec;
    }
    ctx->pc = 0x1D6EE4u;
    {
        const bool branch_taken_0x1d6ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EE4u;
        // 0x1d6ee8: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ee4) {
            ctx->pc = 0x1D6F28u;
            goto label_1d6f28;
        }
    }
    ctx->pc = 0x1D6EECu;
label_1d6eec:
    // 0x1d6eec: 0x0  nop
    ctx->pc = 0x1d6eecu;
    // NOP
label_1d6ef0:
    // 0x1d6ef0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1d6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1d6ef4:
    // 0x1d6ef4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6ef8:
    // 0x1d6ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6efc:
    // 0x1d6efc: 0x0  nop
    ctx->pc = 0x1d6efcu;
    // NOP
label_1d6f00:
    // 0x1d6f00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6f04:
    // 0x1d6f04: 0x0  nop
    ctx->pc = 0x1d6f04u;
    // NOP
label_1d6f08:
    // 0x1d6f08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6f0c:
    if (ctx->pc == 0x1D6F0Cu) {
        ctx->pc = 0x1D6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F08u;
        // 0x1d6f0c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F10u;
        goto label_1d6f10;
    }
    ctx->pc = 0x1D6F08u;
    {
        const bool branch_taken_0x1d6f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F08u;
        // 0x1d6f0c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f08) {
            ctx->pc = 0x1D6F20u;
            goto label_1d6f20;
        }
    }
    ctx->pc = 0x1D6F10u;
label_1d6f10:
    // 0x1d6f10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6f14:
    // 0x1d6f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f18:
    // 0x1d6f18: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d6f1c:
    if (ctx->pc == 0x1D6F1Cu) {
        ctx->pc = 0x1D6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F18u;
        // 0x1d6f1c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F20u;
        goto label_1d6f20;
    }
    ctx->pc = 0x1D6F18u;
    {
        const bool branch_taken_0x1d6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F18u;
        // 0x1d6f1c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f18) {
            ctx->pc = 0x1D6F24u;
            goto label_1d6f24;
        }
    }
    ctx->pc = 0x1D6F20u;
label_1d6f20:
    // 0x1d6f20: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x1d6f20u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d6f24:
    // 0x1d6f24: 0x0  nop
    ctx->pc = 0x1d6f24u;
    // NOP
label_1d6f28:
    // 0x1d6f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f2c:
    // 0x1d6f2c: 0x0  nop
    ctx->pc = 0x1d6f2cu;
    // NOP
label_1d6f30:
    // 0x1d6f30: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1d6f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6f34:
    // 0x1d6f34: 0x0  nop
    ctx->pc = 0x1d6f34u;
    // NOP
    ctx->pc = 0x1d6f38u;
    return;
}
