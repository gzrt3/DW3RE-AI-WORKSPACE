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


void entry_0029b9e8_part56(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b6798u: goto label_2b6798;
        case 0x2b679cu: goto label_2b679c;
        case 0x2b67a0u: goto label_2b67a0;
        case 0x2b67a4u: goto label_2b67a4;
        case 0x2b67a8u: goto label_2b67a8;
        case 0x2b67acu: goto label_2b67ac;
        case 0x2b67b0u: goto label_2b67b0;
        case 0x2b67b4u: goto label_2b67b4;
        case 0x2b67b8u: goto label_2b67b8;
        case 0x2b67bcu: goto label_2b67bc;
        case 0x2b67c0u: goto label_2b67c0;
        case 0x2b67c4u: goto label_2b67c4;
        case 0x2b67c8u: goto label_2b67c8;
        case 0x2b67ccu: goto label_2b67cc;
        case 0x2b67d0u: goto label_2b67d0;
        case 0x2b67d4u: goto label_2b67d4;
        case 0x2b67d8u: goto label_2b67d8;
        case 0x2b67dcu: goto label_2b67dc;
        case 0x2b67e0u: goto label_2b67e0;
        case 0x2b67e4u: goto label_2b67e4;
        case 0x2b67e8u: goto label_2b67e8;
        case 0x2b67ecu: goto label_2b67ec;
        case 0x2b67f0u: goto label_2b67f0;
        case 0x2b67f4u: goto label_2b67f4;
        case 0x2b67f8u: goto label_2b67f8;
        case 0x2b67fcu: goto label_2b67fc;
        case 0x2b6800u: goto label_2b6800;
        case 0x2b6804u: goto label_2b6804;
        case 0x2b6808u: goto label_2b6808;
        case 0x2b680cu: goto label_2b680c;
        case 0x2b6810u: goto label_2b6810;
        case 0x2b6814u: goto label_2b6814;
        case 0x2b6818u: goto label_2b6818;
        case 0x2b681cu: goto label_2b681c;
        case 0x2b6820u: goto label_2b6820;
        case 0x2b6824u: goto label_2b6824;
        case 0x2b6828u: goto label_2b6828;
        case 0x2b682cu: goto label_2b682c;
        case 0x2b6830u: goto label_2b6830;
        case 0x2b6834u: goto label_2b6834;
        case 0x2b6838u: goto label_2b6838;
        case 0x2b683cu: goto label_2b683c;
        case 0x2b6840u: goto label_2b6840;
        case 0x2b6844u: goto label_2b6844;
        case 0x2b6848u: goto label_2b6848;
        case 0x2b684cu: goto label_2b684c;
        case 0x2b6850u: goto label_2b6850;
        case 0x2b6854u: goto label_2b6854;
        case 0x2b6858u: goto label_2b6858;
        case 0x2b685cu: goto label_2b685c;
        case 0x2b6860u: goto label_2b6860;
        case 0x2b6864u: goto label_2b6864;
        case 0x2b6868u: goto label_2b6868;
        case 0x2b686cu: goto label_2b686c;
        case 0x2b6870u: goto label_2b6870;
        case 0x2b6874u: goto label_2b6874;
        case 0x2b6878u: goto label_2b6878;
        case 0x2b687cu: goto label_2b687c;
        case 0x2b6880u: goto label_2b6880;
        case 0x2b6884u: goto label_2b6884;
        case 0x2b6888u: goto label_2b6888;
        case 0x2b688cu: goto label_2b688c;
        case 0x2b6890u: goto label_2b6890;
        case 0x2b6894u: goto label_2b6894;
        case 0x2b6898u: goto label_2b6898;
        case 0x2b689cu: goto label_2b689c;
        case 0x2b68a0u: goto label_2b68a0;
        case 0x2b68a4u: goto label_2b68a4;
        case 0x2b68a8u: goto label_2b68a8;
        case 0x2b68acu: goto label_2b68ac;
        case 0x2b68b0u: goto label_2b68b0;
        case 0x2b68b4u: goto label_2b68b4;
        case 0x2b68b8u: goto label_2b68b8;
        case 0x2b68bcu: goto label_2b68bc;
        case 0x2b68c0u: goto label_2b68c0;
        case 0x2b68c4u: goto label_2b68c4;
        case 0x2b68c8u: goto label_2b68c8;
        case 0x2b68ccu: goto label_2b68cc;
        case 0x2b68d0u: goto label_2b68d0;
        case 0x2b68d4u: goto label_2b68d4;
        case 0x2b68d8u: goto label_2b68d8;
        case 0x2b68dcu: goto label_2b68dc;
        case 0x2b68e0u: goto label_2b68e0;
        case 0x2b68e4u: goto label_2b68e4;
        case 0x2b68e8u: goto label_2b68e8;
        case 0x2b68ecu: goto label_2b68ec;
        case 0x2b68f0u: goto label_2b68f0;
        case 0x2b68f4u: goto label_2b68f4;
        case 0x2b68f8u: goto label_2b68f8;
        case 0x2b68fcu: goto label_2b68fc;
        case 0x2b6900u: goto label_2b6900;
        case 0x2b6904u: goto label_2b6904;
        case 0x2b6908u: goto label_2b6908;
        case 0x2b690cu: goto label_2b690c;
        case 0x2b6910u: goto label_2b6910;
        case 0x2b6914u: goto label_2b6914;
        case 0x2b6918u: goto label_2b6918;
        case 0x2b691cu: goto label_2b691c;
        case 0x2b6920u: goto label_2b6920;
        case 0x2b6924u: goto label_2b6924;
        case 0x2b6928u: goto label_2b6928;
        case 0x2b692cu: goto label_2b692c;
        case 0x2b6930u: goto label_2b6930;
        case 0x2b6934u: goto label_2b6934;
        case 0x2b6938u: goto label_2b6938;
        case 0x2b693cu: goto label_2b693c;
        case 0x2b6940u: goto label_2b6940;
        case 0x2b6944u: goto label_2b6944;
        case 0x2b6948u: goto label_2b6948;
        case 0x2b694cu: goto label_2b694c;
        case 0x2b6950u: goto label_2b6950;
        case 0x2b6954u: goto label_2b6954;
        case 0x2b6958u: goto label_2b6958;
        case 0x2b695cu: goto label_2b695c;
        case 0x2b6960u: goto label_2b6960;
        case 0x2b6964u: goto label_2b6964;
        case 0x2b6968u: goto label_2b6968;
        case 0x2b696cu: goto label_2b696c;
        case 0x2b6970u: goto label_2b6970;
        case 0x2b6974u: goto label_2b6974;
        case 0x2b6978u: goto label_2b6978;
        case 0x2b697cu: goto label_2b697c;
        case 0x2b6980u: goto label_2b6980;
        case 0x2b6984u: goto label_2b6984;
        case 0x2b6988u: goto label_2b6988;
        case 0x2b698cu: goto label_2b698c;
        case 0x2b6990u: goto label_2b6990;
        case 0x2b6994u: goto label_2b6994;
        case 0x2b6998u: goto label_2b6998;
        case 0x2b699cu: goto label_2b699c;
        case 0x2b69a0u: goto label_2b69a0;
        case 0x2b69a4u: goto label_2b69a4;
        case 0x2b69a8u: goto label_2b69a8;
        case 0x2b69acu: goto label_2b69ac;
        case 0x2b69b0u: goto label_2b69b0;
        case 0x2b69b4u: goto label_2b69b4;
        case 0x2b69b8u: goto label_2b69b8;
        case 0x2b69bcu: goto label_2b69bc;
        case 0x2b69c0u: goto label_2b69c0;
        case 0x2b69c4u: goto label_2b69c4;
        case 0x2b69c8u: goto label_2b69c8;
        case 0x2b69ccu: goto label_2b69cc;
        case 0x2b69d0u: goto label_2b69d0;
        case 0x2b69d4u: goto label_2b69d4;
        case 0x2b69d8u: goto label_2b69d8;
        case 0x2b69dcu: goto label_2b69dc;
        case 0x2b69e0u: goto label_2b69e0;
        case 0x2b69e4u: goto label_2b69e4;
        case 0x2b69e8u: goto label_2b69e8;
        case 0x2b69ecu: goto label_2b69ec;
        case 0x2b69f0u: goto label_2b69f0;
        case 0x2b69f4u: goto label_2b69f4;
        case 0x2b69f8u: goto label_2b69f8;
        case 0x2b69fcu: goto label_2b69fc;
        case 0x2b6a00u: goto label_2b6a00;
        case 0x2b6a04u: goto label_2b6a04;
        case 0x2b6a08u: goto label_2b6a08;
        case 0x2b6a0cu: goto label_2b6a0c;
        case 0x2b6a10u: goto label_2b6a10;
        case 0x2b6a14u: goto label_2b6a14;
        case 0x2b6a18u: goto label_2b6a18;
        case 0x2b6a1cu: goto label_2b6a1c;
        case 0x2b6a20u: goto label_2b6a20;
        case 0x2b6a24u: goto label_2b6a24;
        case 0x2b6a28u: goto label_2b6a28;
        case 0x2b6a2cu: goto label_2b6a2c;
        case 0x2b6a30u: goto label_2b6a30;
        case 0x2b6a34u: goto label_2b6a34;
        case 0x2b6a38u: goto label_2b6a38;
        case 0x2b6a3cu: goto label_2b6a3c;
        case 0x2b6a40u: goto label_2b6a40;
        case 0x2b6a44u: goto label_2b6a44;
        case 0x2b6a48u: goto label_2b6a48;
        case 0x2b6a4cu: goto label_2b6a4c;
        case 0x2b6a50u: goto label_2b6a50;
        case 0x2b6a54u: goto label_2b6a54;
        case 0x2b6a58u: goto label_2b6a58;
        case 0x2b6a5cu: goto label_2b6a5c;
        case 0x2b6a60u: goto label_2b6a60;
        case 0x2b6a64u: goto label_2b6a64;
        case 0x2b6a68u: goto label_2b6a68;
        case 0x2b6a6cu: goto label_2b6a6c;
        case 0x2b6a70u: goto label_2b6a70;
        case 0x2b6a74u: goto label_2b6a74;
        case 0x2b6a78u: goto label_2b6a78;
        case 0x2b6a7cu: goto label_2b6a7c;
        case 0x2b6a80u: goto label_2b6a80;
        case 0x2b6a84u: goto label_2b6a84;
        case 0x2b6a88u: goto label_2b6a88;
        case 0x2b6a8cu: goto label_2b6a8c;
        case 0x2b6a90u: goto label_2b6a90;
        case 0x2b6a94u: goto label_2b6a94;
        case 0x2b6a98u: goto label_2b6a98;
        case 0x2b6a9cu: goto label_2b6a9c;
        case 0x2b6aa0u: goto label_2b6aa0;
        case 0x2b6aa4u: goto label_2b6aa4;
        case 0x2b6aa8u: goto label_2b6aa8;
        case 0x2b6aacu: goto label_2b6aac;
        case 0x2b6ab0u: goto label_2b6ab0;
        case 0x2b6ab4u: goto label_2b6ab4;
        case 0x2b6ab8u: goto label_2b6ab8;
        case 0x2b6abcu: goto label_2b6abc;
        case 0x2b6ac0u: goto label_2b6ac0;
        case 0x2b6ac4u: goto label_2b6ac4;
        case 0x2b6ac8u: goto label_2b6ac8;
        case 0x2b6accu: goto label_2b6acc;
        case 0x2b6ad0u: goto label_2b6ad0;
        case 0x2b6ad4u: goto label_2b6ad4;
        case 0x2b6ad8u: goto label_2b6ad8;
        case 0x2b6adcu: goto label_2b6adc;
        case 0x2b6ae0u: goto label_2b6ae0;
        case 0x2b6ae4u: goto label_2b6ae4;
        case 0x2b6ae8u: goto label_2b6ae8;
        case 0x2b6aecu: goto label_2b6aec;
        case 0x2b6af0u: goto label_2b6af0;
        case 0x2b6af4u: goto label_2b6af4;
        case 0x2b6af8u: goto label_2b6af8;
        case 0x2b6afcu: goto label_2b6afc;
        case 0x2b6b00u: goto label_2b6b00;
        case 0x2b6b04u: goto label_2b6b04;
        case 0x2b6b08u: goto label_2b6b08;
        case 0x2b6b0cu: goto label_2b6b0c;
        case 0x2b6b10u: goto label_2b6b10;
        case 0x2b6b14u: goto label_2b6b14;
        case 0x2b6b18u: goto label_2b6b18;
        case 0x2b6b1cu: goto label_2b6b1c;
        case 0x2b6b20u: goto label_2b6b20;
        case 0x2b6b24u: goto label_2b6b24;
        case 0x2b6b28u: goto label_2b6b28;
        case 0x2b6b2cu: goto label_2b6b2c;
        case 0x2b6b30u: goto label_2b6b30;
        case 0x2b6b34u: goto label_2b6b34;
        case 0x2b6b38u: goto label_2b6b38;
        case 0x2b6b3cu: goto label_2b6b3c;
        case 0x2b6b40u: goto label_2b6b40;
        case 0x2b6b44u: goto label_2b6b44;
        case 0x2b6b48u: goto label_2b6b48;
        case 0x2b6b4cu: goto label_2b6b4c;
        case 0x2b6b50u: goto label_2b6b50;
        case 0x2b6b54u: goto label_2b6b54;
        case 0x2b6b58u: goto label_2b6b58;
        case 0x2b6b5cu: goto label_2b6b5c;
        case 0x2b6b60u: goto label_2b6b60;
        case 0x2b6b64u: goto label_2b6b64;
        case 0x2b6b68u: goto label_2b6b68;
        case 0x2b6b6cu: goto label_2b6b6c;
        case 0x2b6b70u: goto label_2b6b70;
        case 0x2b6b74u: goto label_2b6b74;
        case 0x2b6b78u: goto label_2b6b78;
        case 0x2b6b7cu: goto label_2b6b7c;
        case 0x2b6b80u: goto label_2b6b80;
        case 0x2b6b84u: goto label_2b6b84;
        case 0x2b6b88u: goto label_2b6b88;
        case 0x2b6b8cu: goto label_2b6b8c;
        case 0x2b6b90u: goto label_2b6b90;
        case 0x2b6b94u: goto label_2b6b94;
        case 0x2b6b98u: goto label_2b6b98;
        case 0x2b6b9cu: goto label_2b6b9c;
        case 0x2b6ba0u: goto label_2b6ba0;
        case 0x2b6ba4u: goto label_2b6ba4;
        case 0x2b6ba8u: goto label_2b6ba8;
        case 0x2b6bacu: goto label_2b6bac;
        case 0x2b6bb0u: goto label_2b6bb0;
        case 0x2b6bb4u: goto label_2b6bb4;
        case 0x2b6bb8u: goto label_2b6bb8;
        case 0x2b6bbcu: goto label_2b6bbc;
        case 0x2b6bc0u: goto label_2b6bc0;
        case 0x2b6bc4u: goto label_2b6bc4;
        case 0x2b6bc8u: goto label_2b6bc8;
        case 0x2b6bccu: goto label_2b6bcc;
        case 0x2b6bd0u: goto label_2b6bd0;
        case 0x2b6bd4u: goto label_2b6bd4;
        case 0x2b6bd8u: goto label_2b6bd8;
        case 0x2b6bdcu: goto label_2b6bdc;
        case 0x2b6be0u: goto label_2b6be0;
        case 0x2b6be4u: goto label_2b6be4;
        case 0x2b6be8u: goto label_2b6be8;
        case 0x2b6becu: goto label_2b6bec;
        case 0x2b6bf0u: goto label_2b6bf0;
        case 0x2b6bf4u: goto label_2b6bf4;
        case 0x2b6bf8u: goto label_2b6bf8;
        case 0x2b6bfcu: goto label_2b6bfc;
        case 0x2b6c00u: goto label_2b6c00;
        case 0x2b6c04u: goto label_2b6c04;
        case 0x2b6c08u: goto label_2b6c08;
        case 0x2b6c0cu: goto label_2b6c0c;
        case 0x2b6c10u: goto label_2b6c10;
        case 0x2b6c14u: goto label_2b6c14;
        case 0x2b6c18u: goto label_2b6c18;
        case 0x2b6c1cu: goto label_2b6c1c;
        case 0x2b6c20u: goto label_2b6c20;
        case 0x2b6c24u: goto label_2b6c24;
        case 0x2b6c28u: goto label_2b6c28;
        case 0x2b6c2cu: goto label_2b6c2c;
        case 0x2b6c30u: goto label_2b6c30;
        case 0x2b6c34u: goto label_2b6c34;
        case 0x2b6c38u: goto label_2b6c38;
        case 0x2b6c3cu: goto label_2b6c3c;
        case 0x2b6c40u: goto label_2b6c40;
        case 0x2b6c44u: goto label_2b6c44;
        case 0x2b6c48u: goto label_2b6c48;
        case 0x2b6c4cu: goto label_2b6c4c;
        case 0x2b6c50u: goto label_2b6c50;
        case 0x2b6c54u: goto label_2b6c54;
        case 0x2b6c58u: goto label_2b6c58;
        case 0x2b6c5cu: goto label_2b6c5c;
        case 0x2b6c60u: goto label_2b6c60;
        case 0x2b6c64u: goto label_2b6c64;
        case 0x2b6c68u: goto label_2b6c68;
        case 0x2b6c6cu: goto label_2b6c6c;
        case 0x2b6c70u: goto label_2b6c70;
        case 0x2b6c74u: goto label_2b6c74;
        case 0x2b6c78u: goto label_2b6c78;
        case 0x2b6c7cu: goto label_2b6c7c;
        case 0x2b6c80u: goto label_2b6c80;
        case 0x2b6c84u: goto label_2b6c84;
        case 0x2b6c88u: goto label_2b6c88;
        case 0x2b6c8cu: goto label_2b6c8c;
        case 0x2b6c90u: goto label_2b6c90;
        case 0x2b6c94u: goto label_2b6c94;
        case 0x2b6c98u: goto label_2b6c98;
        case 0x2b6c9cu: goto label_2b6c9c;
        case 0x2b6ca0u: goto label_2b6ca0;
        case 0x2b6ca4u: goto label_2b6ca4;
        case 0x2b6ca8u: goto label_2b6ca8;
        case 0x2b6cacu: goto label_2b6cac;
        case 0x2b6cb0u: goto label_2b6cb0;
        case 0x2b6cb4u: goto label_2b6cb4;
        case 0x2b6cb8u: goto label_2b6cb8;
        case 0x2b6cbcu: goto label_2b6cbc;
        case 0x2b6cc0u: goto label_2b6cc0;
        case 0x2b6cc4u: goto label_2b6cc4;
        case 0x2b6cc8u: goto label_2b6cc8;
        case 0x2b6cccu: goto label_2b6ccc;
        case 0x2b6cd0u: goto label_2b6cd0;
        case 0x2b6cd4u: goto label_2b6cd4;
        case 0x2b6cd8u: goto label_2b6cd8;
        case 0x2b6cdcu: goto label_2b6cdc;
        case 0x2b6ce0u: goto label_2b6ce0;
        case 0x2b6ce4u: goto label_2b6ce4;
        case 0x2b6ce8u: goto label_2b6ce8;
        case 0x2b6cecu: goto label_2b6cec;
        case 0x2b6cf0u: goto label_2b6cf0;
        case 0x2b6cf4u: goto label_2b6cf4;
        case 0x2b6cf8u: goto label_2b6cf8;
        case 0x2b6cfcu: goto label_2b6cfc;
        case 0x2b6d00u: goto label_2b6d00;
        case 0x2b6d04u: goto label_2b6d04;
        case 0x2b6d08u: goto label_2b6d08;
        case 0x2b6d0cu: goto label_2b6d0c;
        case 0x2b6d10u: goto label_2b6d10;
        case 0x2b6d14u: goto label_2b6d14;
        case 0x2b6d18u: goto label_2b6d18;
        case 0x2b6d1cu: goto label_2b6d1c;
        case 0x2b6d20u: goto label_2b6d20;
        case 0x2b6d24u: goto label_2b6d24;
        case 0x2b6d28u: goto label_2b6d28;
        case 0x2b6d2cu: goto label_2b6d2c;
        case 0x2b6d30u: goto label_2b6d30;
        case 0x2b6d34u: goto label_2b6d34;
        case 0x2b6d38u: goto label_2b6d38;
        case 0x2b6d3cu: goto label_2b6d3c;
        case 0x2b6d40u: goto label_2b6d40;
        case 0x2b6d44u: goto label_2b6d44;
        case 0x2b6d48u: goto label_2b6d48;
        case 0x2b6d4cu: goto label_2b6d4c;
        case 0x2b6d50u: goto label_2b6d50;
        case 0x2b6d54u: goto label_2b6d54;
        case 0x2b6d58u: goto label_2b6d58;
        case 0x2b6d5cu: goto label_2b6d5c;
        case 0x2b6d60u: goto label_2b6d60;
        case 0x2b6d64u: goto label_2b6d64;
        case 0x2b6d68u: goto label_2b6d68;
        case 0x2b6d6cu: goto label_2b6d6c;
        case 0x2b6d70u: goto label_2b6d70;
        case 0x2b6d74u: goto label_2b6d74;
        case 0x2b6d78u: goto label_2b6d78;
        case 0x2b6d7cu: goto label_2b6d7c;
        case 0x2b6d80u: goto label_2b6d80;
        case 0x2b6d84u: goto label_2b6d84;
        case 0x2b6d88u: goto label_2b6d88;
        case 0x2b6d8cu: goto label_2b6d8c;
        case 0x2b6d90u: goto label_2b6d90;
        case 0x2b6d94u: goto label_2b6d94;
        case 0x2b6d98u: goto label_2b6d98;
        case 0x2b6d9cu: goto label_2b6d9c;
        case 0x2b6da0u: goto label_2b6da0;
        case 0x2b6da4u: goto label_2b6da4;
        case 0x2b6da8u: goto label_2b6da8;
        case 0x2b6dacu: goto label_2b6dac;
        case 0x2b6db0u: goto label_2b6db0;
        case 0x2b6db4u: goto label_2b6db4;
        case 0x2b6db8u: goto label_2b6db8;
        case 0x2b6dbcu: goto label_2b6dbc;
        case 0x2b6dc0u: goto label_2b6dc0;
        case 0x2b6dc4u: goto label_2b6dc4;
        case 0x2b6dc8u: goto label_2b6dc8;
        case 0x2b6dccu: goto label_2b6dcc;
        case 0x2b6dd0u: goto label_2b6dd0;
        case 0x2b6dd4u: goto label_2b6dd4;
        case 0x2b6dd8u: goto label_2b6dd8;
        case 0x2b6ddcu: goto label_2b6ddc;
        case 0x2b6de0u: goto label_2b6de0;
        case 0x2b6de4u: goto label_2b6de4;
        case 0x2b6de8u: goto label_2b6de8;
        case 0x2b6decu: goto label_2b6dec;
        case 0x2b6df0u: goto label_2b6df0;
        case 0x2b6df4u: goto label_2b6df4;
        case 0x2b6df8u: goto label_2b6df8;
        case 0x2b6dfcu: goto label_2b6dfc;
        case 0x2b6e00u: goto label_2b6e00;
        case 0x2b6e04u: goto label_2b6e04;
        case 0x2b6e08u: goto label_2b6e08;
        case 0x2b6e0cu: goto label_2b6e0c;
        case 0x2b6e10u: goto label_2b6e10;
        case 0x2b6e14u: goto label_2b6e14;
        case 0x2b6e18u: goto label_2b6e18;
        case 0x2b6e1cu: goto label_2b6e1c;
        case 0x2b6e20u: goto label_2b6e20;
        case 0x2b6e24u: goto label_2b6e24;
        case 0x2b6e28u: goto label_2b6e28;
        case 0x2b6e2cu: goto label_2b6e2c;
        case 0x2b6e30u: goto label_2b6e30;
        case 0x2b6e34u: goto label_2b6e34;
        case 0x2b6e38u: goto label_2b6e38;
        case 0x2b6e3cu: goto label_2b6e3c;
        case 0x2b6e40u: goto label_2b6e40;
        case 0x2b6e44u: goto label_2b6e44;
        case 0x2b6e48u: goto label_2b6e48;
        case 0x2b6e4cu: goto label_2b6e4c;
        case 0x2b6e50u: goto label_2b6e50;
        case 0x2b6e54u: goto label_2b6e54;
        case 0x2b6e58u: goto label_2b6e58;
        case 0x2b6e5cu: goto label_2b6e5c;
        case 0x2b6e60u: goto label_2b6e60;
        case 0x2b6e64u: goto label_2b6e64;
        case 0x2b6e68u: goto label_2b6e68;
        case 0x2b6e6cu: goto label_2b6e6c;
        case 0x2b6e70u: goto label_2b6e70;
        case 0x2b6e74u: goto label_2b6e74;
        case 0x2b6e78u: goto label_2b6e78;
        case 0x2b6e7cu: goto label_2b6e7c;
        case 0x2b6e80u: goto label_2b6e80;
        case 0x2b6e84u: goto label_2b6e84;
        case 0x2b6e88u: goto label_2b6e88;
        case 0x2b6e8cu: goto label_2b6e8c;
        case 0x2b6e90u: goto label_2b6e90;
        case 0x2b6e94u: goto label_2b6e94;
        case 0x2b6e98u: goto label_2b6e98;
        case 0x2b6e9cu: goto label_2b6e9c;
        case 0x2b6ea0u: goto label_2b6ea0;
        case 0x2b6ea4u: goto label_2b6ea4;
        case 0x2b6ea8u: goto label_2b6ea8;
        case 0x2b6eacu: goto label_2b6eac;
        case 0x2b6eb0u: goto label_2b6eb0;
        case 0x2b6eb4u: goto label_2b6eb4;
        case 0x2b6eb8u: goto label_2b6eb8;
        case 0x2b6ebcu: goto label_2b6ebc;
        case 0x2b6ec0u: goto label_2b6ec0;
        case 0x2b6ec4u: goto label_2b6ec4;
        case 0x2b6ec8u: goto label_2b6ec8;
        case 0x2b6eccu: goto label_2b6ecc;
        case 0x2b6ed0u: goto label_2b6ed0;
        case 0x2b6ed4u: goto label_2b6ed4;
        case 0x2b6ed8u: goto label_2b6ed8;
        case 0x2b6edcu: goto label_2b6edc;
        case 0x2b6ee0u: goto label_2b6ee0;
        case 0x2b6ee4u: goto label_2b6ee4;
        case 0x2b6ee8u: goto label_2b6ee8;
        case 0x2b6eecu: goto label_2b6eec;
        case 0x2b6ef0u: goto label_2b6ef0;
        case 0x2b6ef4u: goto label_2b6ef4;
        case 0x2b6ef8u: goto label_2b6ef8;
        case 0x2b6efcu: goto label_2b6efc;
        case 0x2b6f00u: goto label_2b6f00;
        case 0x2b6f04u: goto label_2b6f04;
        case 0x2b6f08u: goto label_2b6f08;
        case 0x2b6f0cu: goto label_2b6f0c;
        case 0x2b6f10u: goto label_2b6f10;
        case 0x2b6f14u: goto label_2b6f14;
        case 0x2b6f18u: goto label_2b6f18;
        case 0x2b6f1cu: goto label_2b6f1c;
        case 0x2b6f20u: goto label_2b6f20;
        case 0x2b6f24u: goto label_2b6f24;
        case 0x2b6f28u: goto label_2b6f28;
        case 0x2b6f2cu: goto label_2b6f2c;
        case 0x2b6f30u: goto label_2b6f30;
        case 0x2b6f34u: goto label_2b6f34;
        case 0x2b6f38u: goto label_2b6f38;
        case 0x2b6f3cu: goto label_2b6f3c;
        case 0x2b6f40u: goto label_2b6f40;
        case 0x2b6f44u: goto label_2b6f44;
        case 0x2b6f48u: goto label_2b6f48;
        case 0x2b6f4cu: goto label_2b6f4c;
        case 0x2b6f50u: goto label_2b6f50;
        case 0x2b6f54u: goto label_2b6f54;
        case 0x2b6f58u: goto label_2b6f58;
        case 0x2b6f5cu: goto label_2b6f5c;
        case 0x2b6f60u: goto label_2b6f60;
        case 0x2b6f64u: goto label_2b6f64;
        default: return;
    }

label_2b6798:
    // 0x2b6798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b679c:
    // 0x2b679c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b679cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67a0:
    // 0x2b67a0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2b67a0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b67a4:
    // 0x2b67a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67a8:
    // 0x2b67a8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2b67a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b67ac:
    // 0x2b67ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67b0:
    // 0x2b67b0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2b67b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b67b4:
    // 0x2b67b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67b8:
    // 0x2b67b8: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2b67b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b67bc:
    // 0x2b67bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67c0:
    // 0x2b67c0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b67c4:
    if (ctx->pc == 0x2B67C4u) {
        ctx->pc = 0x2B67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C0u;
        // 0x2b67c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B67C8u;
        goto label_2b67c8;
    }
    ctx->pc = 0x2B67C0u;
    {
        const bool branch_taken_0x2b67c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67C0u;
        // 0x2b67c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67c0) {
            ctx->pc = 0x2CC7C8u;
            return;
        }
    }
    ctx->pc = 0x2B67C8u;
label_2b67c8:
    // 0x2b67c8: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b67c8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B67C8 raw=0x48001000");
 /* MITIGATED */
label_2b67cc:
    // 0x2b67cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67d0:
    // 0x2b67d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b67d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b67d4:
    // 0x2b67d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67d8:
    // 0x2b67d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b67d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b67dc:
    // 0x2b67dc: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b67dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2b67e0:
    // 0x2b67e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b67e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b67e4:
    // 0x2b67e4: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b67e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2b67e8:
    // 0x2b67e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b67e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b67ec:
    // 0x2b67ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67f0:
    // 0x2b67f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b67f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b67f4:
    // 0x2b67f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b67f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b67f8:
    // 0x2b67f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b67f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b67fc:
    // 0x2b67fc: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b67fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2b6800:
    // 0x2b6800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6804:
    // 0x2b6804: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6804u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2b6808:
    // 0x2b6808: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2b6808u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2b680c:
    // 0x2b680c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b680cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6810:
    // 0x2b6810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6814:
    // 0x2b6814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6818:
    // 0x2b6818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b681c:
    // 0x2b681c: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b681cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B681C raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6820:
    // 0x2b6820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6824:
    // 0x2b6824: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B6824 raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6828:
    // 0x2b6828: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2b682c:
    if (ctx->pc == 0x2B682Cu) {
        ctx->pc = 0x2B682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6828u;
        // 0x2b682c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6830u;
        goto label_2b6830;
    }
    ctx->pc = 0x2B6828u;
    {
        const bool branch_taken_0x2b6828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b6828) {
            ctx->pc = 0x2B682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6828u;
            // 0x2b682c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B683Cu;
            goto label_2b683c;
        }
    }
    ctx->pc = 0x2B6830u;
label_2b6830:
    // 0x2b6830: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2b6834:
    if (ctx->pc == 0x2B6834u) {
        ctx->pc = 0x2B6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6830u;
        // 0x2b6834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6838u;
        goto label_2b6838;
    }
    ctx->pc = 0x2B6830u;
    {
        const bool branch_taken_0x2b6830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6830u;
        // 0x2b6834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6830) {
            ctx->pc = 0x2CE838u;
            return;
        }
    }
    ctx->pc = 0x2B6838u;
label_2b6838:
    // 0x2b6838: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2b683c:
    // 0x2b683c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b683cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6840:
    // 0x2b6840: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b6840u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b6844:
    // 0x2b6844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6848:
    // 0x2b6848: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2b6848u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2b684c:
    // 0x2b684c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b684cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6850:
    // 0x2b6850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6854:
    // 0x2b6854: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b6854u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2b6858:
    // 0x2b6858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b685c:
    // 0x2b685c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b685cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6860:
    // 0x2b6860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6864:
    // 0x2b6864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6868:
    // 0x2b6868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b686c:
    // 0x2b686c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b686cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6870:
    // 0x2b6870: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2b6870u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2b6874:
    // 0x2b6874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6878:
    // 0x2b6878: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2b6878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2b687c:
    // 0x2b687c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b687cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6880:
    // 0x2b6880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6884:
    // 0x2b6884: 0x800720  .word       0x00800720                   # add         $zero, $a0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6884u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b6888:
    // 0x2b6888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b688c:
    // 0x2b688c: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b688cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2b6890:
    // 0x2b6890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6894:
    // 0x2b6894: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6894u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2b6898:
    // 0x2b6898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b689c:
    // 0x2b689c: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b689cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2b68a0:
    // 0x2b68a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68a4:
    // 0x2b68a4: 0x1f42f6c  .word       0x01F42F6C                   # dadd        $a1, $t7, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b68a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2b68a8:
    // 0x2b68a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68ac:
    // 0x2b68ac: 0x1fcce59  .word       0x01FCCE59                   # multu       $t7, $gp # 0000CE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b68acu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2b68b0:
    // 0x2b68b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68b4:
    // 0x2b68b4: 0x1fcd699  .word       0x01FCD699                   # multu       $t7, $gp # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b68b4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2b68b8:
    // 0x2b68b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68bc:
    // 0x2b68bc: 0x1fcded9  .word       0x01FCDED9                   # multu       $t7, $gp # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b68bcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2b68c0:
    // 0x2b68c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68c4:
    // 0x2b68c4: 0x1fcef59  .word       0x01FCEF59                   # multu       $t7, $gp # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b68c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2b68c8:
    // 0x2b68c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68cc:
    // 0x2b68cc: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b68ccu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2b68d0:
    // 0x2b68d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68d4:
    // 0x2b68d4: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b68d4u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2b68d8:
    // 0x2b68d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68dc:
    // 0x2b68dc: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b68dcu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2b68e0:
    // 0x2b68e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68e4:
    // 0x2b68e4: 0x1f4ef68  .word       0x01F4EF68                   # mfsa        $sp # 01F40740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b68e4u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2b68e8:
    // 0x2b68e8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b68e8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B68E8 raw=0x48000800");
 /* MITIGATED */
label_2b68ec:
    // 0x2b68ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b68ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b68f0:
    // 0x2b68f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b68f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b68f4:
    // 0x2b68f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b68f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b68f8:
    // 0x2b68f8: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2b68f8u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2b68fc:
    // 0x2b68fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b68fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6900:
    // 0x2b6900: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2b6900u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2b6904:
    // 0x2b6904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6908:
    // 0x2b6908: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6908u;
    ctx->pc = 0x2B690Cu;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2b690c:
    // 0x2b690c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b690cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6910:
    // 0x2b6910: 0x1f4000d  break       500
    ctx->pc = 0x2b6910u;
    runtime->handleBreak(rdram, ctx);
label_2b6914:
    // 0x2b6914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6918:
    // 0x2b6918: 0x10072801  beq         $zero, $a3, . + 4 + (0x2801 << 2)
label_2b691c:
    if (ctx->pc == 0x2B691Cu) {
        ctx->pc = 0x2B691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6918u;
        // 0x2b691c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6920u;
        goto label_2b6920;
    }
    ctx->pc = 0x2B6918u;
    {
        const bool branch_taken_0x2b6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6918u;
        // 0x2b691c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6918) {
            ctx->pc = 0x2C0920u;
            return;
        }
    }
    ctx->pc = 0x2B6920u;
label_2b6920:
    // 0x2b6920: 0x10093001  beq         $zero, $t1, . + 4 + (0x3001 << 2)
label_2b6924:
    if (ctx->pc == 0x2B6924u) {
        ctx->pc = 0x2B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6920u;
        // 0x2b6924: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6928u;
        goto label_2b6928;
    }
    ctx->pc = 0x2B6920u;
    {
        const bool branch_taken_0x2b6920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6920u;
        // 0x2b6924: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6920) {
            ctx->pc = 0x2C2928u;
            return;
        }
    }
    ctx->pc = 0x2B6928u;
label_2b6928:
    // 0x2b6928: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6928u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b692c:
    // 0x2b692c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b692cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6930:
    // 0x2b6930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6934:
    // 0x2b6934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6938:
    // 0x2b6938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b693c:
    // 0x2b693c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b693cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6940:
    // 0x2b6940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6944:
    // 0x2b6944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6948:
    // 0x2b6948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b694c:
    // 0x2b694c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b694cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2b6950:
    // 0x2b6950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6954:
    // 0x2b6954: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6954u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B6954 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6958:
    // 0x2b6958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b695c:
    // 0x2b695c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b695cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2b6960:
    // 0x2b6960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6964:
    // 0x2b6964: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6964u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2b6968:
    // 0x2b6968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b696c:
    // 0x2b696c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b696cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6970:
    // 0x2b6970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6974:
    // 0x2b6974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6978:
    // 0x2b6978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b697c:
    // 0x2b697c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b697cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6980:
    // 0x2b6980: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2b6980u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b6984:
    // 0x2b6984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6988:
    // 0x2b6988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b698c:
    // 0x2b698c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b698cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6990:
    // 0x2b6990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6994:
    // 0x2b6994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6998:
    // 0x2b6998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b699c:
    // 0x2b699c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b699cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69a0:
    // 0x2b69a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69a4:
    // 0x2b69a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69a8:
    // 0x2b69a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69ac:
    // 0x2b69ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69b0:
    // 0x2b69b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69b4:
    // 0x2b69b4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b69b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b69b8:
    // 0x2b69b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69bc:
    // 0x2b69bc: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b69c0:
    // 0x2b69c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69c4:
    // 0x2b69c4: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b69c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B69C4 raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b69c8:
    // 0x2b69c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69cc:
    // 0x2b69cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69d0:
    // 0x2b69d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69d4:
    // 0x2b69d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69d8:
    // 0x2b69d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69dc:
    // 0x2b69dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69e0:
    // 0x2b69e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69e4:
    // 0x2b69e4: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b69e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B69E4 raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b69e8:
    // 0x2b69e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69ec:
    // 0x2b69ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69f0:
    // 0x2b69f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69f4:
    // 0x2b69f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b69f8:
    // 0x2b69f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b69f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b69fc:
    // 0x2b69fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b69fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a00:
    // 0x2b6a00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a04:
    // 0x2b6a04: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a04u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2b6a08:
    // 0x2b6a08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a0c:
    // 0x2b6a0c: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B6A0C raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6a10:
    // 0x2b6a10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a14:
    // 0x2b6a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a18:
    // 0x2b6a18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a1c:
    // 0x2b6a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a20:
    // 0x2b6a20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a24:
    // 0x2b6a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a28:
    // 0x2b6a28: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a28u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b6a2c:
    // 0x2b6a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a30:
    // 0x2b6a30: 0x3e9d002  .word       0x03E9D002                   # srl         $k0, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a30u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_2b6a34:
    // 0x2b6a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a38:
    // 0x2b6a38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a3c:
    // 0x2b6a3c: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a3cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b6a40:
    // 0x2b6a40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a44:
    // 0x2b6a44: 0x400183  .word       0x00400183                   # sra         $zero, $zero, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_2b6a48:
    // 0x2b6a48: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a48u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2b6a4c:
    // 0x2b6a4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a50:
    // 0x2b6a50: 0x1864003  .word       0x01864003                   # sra         $t0, $a2, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a50u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 0));
label_2b6a54:
    // 0x2b6a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a58:
    // 0x2b6a58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a5c:
    // 0x2b6a5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a60:
    // 0x2b6a60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a64:
    // 0x2b6a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a68:
    // 0x2b6a68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a6c:
    // 0x2b6a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a70:
    // 0x2b6a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a74:
    // 0x2b6a74: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B6A74 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6a78:
    // 0x2b6a78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a7c:
    // 0x2b6a7c: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a7cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B6A7C raw=0x01C0319C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6a80:
    // 0x2b6a80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a84:
    // 0x2b6a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a88:
    // 0x2b6a88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a8c:
    // 0x2b6a8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a90:
    // 0x2b6a90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6a90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6a94:
    // 0x2b6a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6a98:
    // 0x2b6a98: 0x3e7b000  .word       0x03E7B000                   # sll         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6a98u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b6a9c:
    // 0x2b6a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6aa0:
    // 0x2b6aa0: 0x3e93000  .word       0x03E93000                   # sll         $a2, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_2b6aa4:
    // 0x2b6aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6aa8:
    // 0x2b6aa8: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6aa8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6AA8 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6aac:
    // 0x2b6aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ab0:
    // 0x2b6ab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6ab4:
    // 0x2b6ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ab8:
    // 0x2b6ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6abc:
    // 0x2b6abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ac0:
    // 0x2b6ac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6ac4:
    // 0x2b6ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ac8:
    // 0x2b6ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6acc:
    // 0x2b6acc: 0x1fdd97c  .word       0x01FDD97C                   # dsll32      $k1, $sp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6accu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << (32 + 5));
label_2b6ad0:
    // 0x2b6ad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6ad4:
    // 0x2b6ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ad8:
    // 0x2b6ad8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6adc:
    // 0x2b6adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ae0:
    // 0x2b6ae0: 0x2275001  .word       0x02275001                   # INVALID     $s1, $a3, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6ae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6AE0 raw=0x02275001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6ae4:
    // 0x2b6ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ae8:
    // 0x2b6ae8: 0x3c7e801  .word       0x03C7E801                   # INVALID     $fp, $a3, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6ae8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6AE8 raw=0x03C7E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6aec:
    // 0x2b6aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6af0:
    // 0x2b6af0: 0x3e9e801  .word       0x03E9E801                   # INVALID     $ra, $t1, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6AF0 raw=0x03E9E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6af4:
    // 0x2b6af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6af8:
    // 0x2b6af8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b6afc:
    if (ctx->pc == 0x2B6AFCu) {
        ctx->pc = 0x2B6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AF8u;
        // 0x2b6afc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B00u;
        goto label_2b6b00;
    }
    ctx->pc = 0x2B6AF8u;
    {
        const bool branch_taken_0x2b6af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AF8u;
        // 0x2b6afc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6af8) {
            ctx->pc = 0x2C4B08u;
            return;
        }
    }
    ctx->pc = 0x2B6B00u;
label_2b6b00:
    // 0x2b6b00: 0x10094803  beq         $zero, $t1, . + 4 + (0x4803 << 2)
label_2b6b04:
    if (ctx->pc == 0x2B6B04u) {
        ctx->pc = 0x2B6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B00u;
        // 0x2b6b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B08u;
        goto label_2b6b08;
    }
    ctx->pc = 0x2B6B00u;
    {
        const bool branch_taken_0x2b6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B00u;
        // 0x2b6b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b00) {
            ctx->pc = 0x2C8B10u;
            return;
        }
    }
    ctx->pc = 0x2B6B08u;
label_2b6b08:
    // 0x2b6b08: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_2b6b0c:
    if (ctx->pc == 0x2B6B0Cu) {
        ctx->pc = 0x2B6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B08u;
        // 0x2b6b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B10u;
        goto label_2b6b10;
    }
    ctx->pc = 0x2B6B08u;
    {
        const bool branch_taken_0x2b6b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B08u;
        // 0x2b6b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b08) {
            ctx->pc = 0x2C6B1Cu;
            return;
        }
    }
    ctx->pc = 0x2B6B10u;
label_2b6b10:
    // 0x2b6b10: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2b6b10u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2b6b14:
    // 0x2b6b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b18:
    // 0x2b6b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6b1c:
    // 0x2b6b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b20:
    // 0x2b6b20: 0x520a07c0  beql        $s0, $t2, . + 4 + (0x7C0 << 2)
label_2b6b24:
    if (ctx->pc == 0x2B6B24u) {
        ctx->pc = 0x2B6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B20u;
        // 0x2b6b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B28u;
        goto label_2b6b28;
    }
    ctx->pc = 0x2B6B20u;
    {
        const bool branch_taken_0x2b6b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6b20) {
            ctx->pc = 0x2B6B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B20u;
            // 0x2b6b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8A24u;
            { ctx->pc = 0x2b8a24; return; }
        }
    }
    ctx->pc = 0x2B6B28u;
label_2b6b28:
    // 0x2b6b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6b2c:
    // 0x2b6b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b30:
    // 0x2b6b30: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b6b30u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B6B30 raw=0x48000800");
 /* MITIGATED */
label_2b6b34:
    // 0x2b6b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b38:
    // 0x2b6b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6b3c:
    // 0x2b6b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b40:
    // 0x2b6b40: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b6b44:
    // 0x2b6b44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b48:
    // 0x2b6b48: 0x1001100b  beq         $zero, $at, . + 4 + (0x100B << 2)
label_2b6b4c:
    if (ctx->pc == 0x2B6B4Cu) {
        ctx->pc = 0x2B6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B48u;
        // 0x2b6b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B50u;
        goto label_2b6b50;
    }
    ctx->pc = 0x2B6B48u;
    {
        const bool branch_taken_0x2b6b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B48u;
        // 0x2b6b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b48) {
            ctx->pc = 0x2BAB78u;
            { ctx->pc = 0x2bab78; return; }
        }
    }
    ctx->pc = 0x2B6B50u;
label_2b6b50:
    // 0x2b6b50: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2b6b54:
    if (ctx->pc == 0x2B6B54u) {
        ctx->pc = 0x2B6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B50u;
        // 0x2b6b54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B58u;
        goto label_2b6b58;
    }
    ctx->pc = 0x2B6B50u;
    {
        const bool branch_taken_0x2b6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B50u;
        // 0x2b6b54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b50) {
            ctx->pc = 0x2B6CECu;
            goto label_2b6cec;
        }
    }
    ctx->pc = 0x2B6B58u;
label_2b6b58:
    // 0x2b6b58: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6b58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B6B58 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6b5c:
    // 0x2b6b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b60:
    // 0x2b6b60: 0x1002104b  beq         $zero, $v0, . + 4 + (0x104B << 2)
label_2b6b64:
    if (ctx->pc == 0x2B6B64u) {
        ctx->pc = 0x2B6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B60u;
        // 0x2b6b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B68u;
        goto label_2b6b68;
    }
    ctx->pc = 0x2B6B60u;
    {
        const bool branch_taken_0x2b6b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B60u;
        // 0x2b6b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b60) {
            ctx->pc = 0x2BAC90u;
            { ctx->pc = 0x2bac90; return; }
        }
    }
    ctx->pc = 0x2B6B68u;
label_2b6b68:
    // 0x2b6b68: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b6b6c:
    if (ctx->pc == 0x2B6B6Cu) {
        ctx->pc = 0x2B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B68u;
        // 0x2b6b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B70u;
        goto label_2b6b70;
    }
    ctx->pc = 0x2B6B68u;
    {
        const bool branch_taken_0x2b6b68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B68u;
        // 0x2b6b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b68) {
            ctx->pc = 0x2B8B68u;
            { ctx->pc = 0x2b8b68; return; }
        }
    }
    ctx->pc = 0x2B6B70u;
label_2b6b70:
    // 0x2b6b70: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b6b74:
    if (ctx->pc == 0x2B6B74u) {
        ctx->pc = 0x2B6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B70u;
        // 0x2b6b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B78u;
        goto label_2b6b78;
    }
    ctx->pc = 0x2B6B70u;
    {
        const bool branch_taken_0x2b6b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B70u;
        // 0x2b6b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b70) {
            ctx->pc = 0x2CCB78u;
            return;
        }
    }
    ctx->pc = 0x2B6B78u;
label_2b6b78:
    // 0x2b6b78: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6b78u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b6b7c:
    // 0x2b6b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b80:
    // 0x2b6b80: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6b80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6B80 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6b84:
    // 0x2b6b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6b88:
    // 0x2b6b88: 0xb0b1000  j           func_C2C4000
label_2b6b8c:
    if (ctx->pc == 0x2B6B8Cu) {
        ctx->pc = 0x2B6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B88u;
        // 0x2b6b8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B90u;
        goto label_2b6b90;
    }
    ctx->pc = 0x2B6B88u;
    ctx->pc = 0x2B6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B88u;
    // 0x2b6b8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B6B88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6B90u;
label_2b6b90:
    // 0x2b6b90: 0xa800fff  j           func_A003FFC
label_2b6b94:
    if (ctx->pc == 0x2B6B94u) {
        ctx->pc = 0x2B6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B90u;
        // 0x2b6b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6B98u;
        goto label_2b6b98;
    }
    ctx->pc = 0x2B6B90u;
    ctx->pc = 0x2B6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B90u;
    // 0x2b6b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2B6B90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6B98u;
label_2b6b98:
    // 0x2b6b98: 0xb030fff  j           func_C0C3FFC
label_2b6b9c:
    if (ctx->pc == 0x2B6B9Cu) {
        ctx->pc = 0x2B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B98u;
        // 0x2b6b9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BA0u;
        goto label_2b6ba0;
    }
    ctx->pc = 0x2B6B98u;
    ctx->pc = 0x2B6B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B98u;
    // 0x2b6b9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2B6B98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6BA0u;
label_2b6ba0:
    // 0x2b6ba0: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b6ba4:
    if (ctx->pc == 0x2B6BA4u) {
        ctx->pc = 0x2B6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BA0u;
        // 0x2b6ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6BA8u;
        goto label_2b6ba8;
    }
    ctx->pc = 0x2B6BA0u;
    {
        const bool branch_taken_0x2b6ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BA0u;
        // 0x2b6ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ba0) {
            ctx->pc = 0x2D2BECu;
            return;
        }
    }
    ctx->pc = 0x2B6BA8u;
label_2b6ba8:
    // 0x2b6ba8: 0x1f67ff6  tne         $t7, $s6, 511
    ctx->pc = 0x2b6ba8u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2b6bac:
    // 0x2b6bac: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b6bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b6bb0:
    // 0x2b6bb0: 0x1f77ffa  .word       0x01F77FFA                   # dsrl        $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) >> 31);
label_2b6bb4:
    // 0x2b6bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bb8:
    // 0x2b6bb8: 0x1f87ffe  .word       0x01F87FFE                   # dsrl32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) >> (32 + 31));
label_2b6bbc:
    // 0x2b6bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bc0:
    // 0x2b6bc0: 0x1f57ff5  .word       0x01F57FF5                   # INVALID     $t7, $s5, 0x7FF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2B6BC0 raw=0x01F57FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6bc4:
    // 0x2b6bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bc8:
    // 0x2b6bc8: 0x1f37ff9  .word       0x01F37FF9                   # INVALID     $t7, $s3, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2B6BC8 raw=0x01F37FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6bcc:
    // 0x2b6bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bd0:
    // 0x2b6bd0: 0x1f47ffd  .word       0x01F47FFD                   # INVALID     $t7, $s4, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B6BD0 raw=0x01F47FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6bd4:
    // 0x2b6bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bd8:
    // 0x2b6bd8: 0x1f07ff4  teq         $t7, $s0, 511
    ctx->pc = 0x2b6bd8u;
    if (GPR_U64(ctx, 15) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_2b6bdc:
    // 0x2b6bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6be0:
    // 0x2b6be0: 0x1f17ff8  .word       0x01F17FF8                   # dsll        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6be0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 31);
label_2b6be4:
    // 0x2b6be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6be8:
    // 0x2b6be8: 0x1f27ffc  .word       0x01F27FFC                   # dsll32      $t7, $s2, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6be8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 31));
label_2b6bec:
    // 0x2b6bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bf0:
    // 0x2b6bf0: 0x1f97ff7  .word       0x01F97FF7                   # INVALID     $t7, $t9, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B6BF0 raw=0x01F97FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6bf4:
    // 0x2b6bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6bf8:
    // 0x2b6bf8: 0x1fa7ffb  .word       0x01FA7FFB                   # dsra        $t7, $k0, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6bf8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 26) >> 31);
label_2b6bfc:
    // 0x2b6bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c00:
    // 0x2b6c00: 0x1fb7fff  .word       0x01FB7FFF                   # dsra32      $t7, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c00u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 27) >> (32 + 31));
label_2b6c04:
    // 0x2b6c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c08:
    // 0x2b6c08: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b6c0c:
    // 0x2b6c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c10:
    // 0x2b6c10: 0x1008100b  beq         $zero, $t0, . + 4 + (0x100B << 2)
label_2b6c14:
    if (ctx->pc == 0x2B6C14u) {
        ctx->pc = 0x2B6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C10u;
        // 0x2b6c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C18u;
        goto label_2b6c18;
    }
    ctx->pc = 0x2B6C10u;
    {
        const bool branch_taken_0x2b6c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C10u;
        // 0x2b6c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c10) {
            ctx->pc = 0x2BAC40u;
            { ctx->pc = 0x2bac40; return; }
        }
    }
    ctx->pc = 0x2B6C18u;
label_2b6c18:
    // 0x2b6c18: 0x1009102b  beq         $zero, $t1, . + 4 + (0x102B << 2)
label_2b6c1c:
    if (ctx->pc == 0x2B6C1Cu) {
        ctx->pc = 0x2B6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C18u;
        // 0x2b6c1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C20u;
        goto label_2b6c20;
    }
    ctx->pc = 0x2B6C18u;
    {
        const bool branch_taken_0x2b6c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C18u;
        // 0x2b6c1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c18) {
            ctx->pc = 0x2BACC8u;
            { ctx->pc = 0x2bacc8; return; }
        }
    }
    ctx->pc = 0x2B6C20u;
label_2b6c20:
    // 0x2b6c20: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6C20 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6c24:
    // 0x2b6c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c28:
    // 0x2b6c28: 0x3e89805  .word       0x03E89805                   # INVALID     $ra, $t0, -0x67FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B6C28 raw=0x03E89805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6c2c:
    // 0x2b6c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c30:
    // 0x2b6c30: 0x3e8a009  .word       0x03E8A009                   # jalr        $s4, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b6c34:
    if (ctx->pc == 0x2B6C34u) {
        ctx->pc = 0x2B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C30u;
        // 0x2b6c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6C38u;
        goto label_2b6c38;
    }
    ctx->pc = 0x2B6C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 20, 0x2B6C38u);
        ctx->pc = 0x2B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C30u;
        // 0x2b6c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C30u, 0x2B6C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6C38u;
label_2b6c38:
    // 0x2b6c38: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2b6c38u;
    runtime->handleBreak(rdram, ctx);
label_2b6c3c:
    // 0x2b6c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c40:
    // 0x2b6c40: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c40u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b6c44:
    // 0x2b6c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c48:
    // 0x2b6c48: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2b6c48u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6c4c:
    // 0x2b6c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c50:
    // 0x2b6c50: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2b6c50u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2b6c54:
    // 0x2b6c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c58:
    // 0x2b6c58: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2B6C58 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6c5c:
    // 0x2b6c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c60:
    // 0x2b6c60: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c60u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2b6c64:
    // 0x2b6c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c68:
    // 0x2b6c68: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2b6c68u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6c6c:
    // 0x2b6c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c70:
    // 0x2b6c70: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2b6c70u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2b6c74:
    // 0x2b6c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c78:
    // 0x2b6c78: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6c78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b6c7c:
    // 0x2b6c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c80:
    // 0x2b6c80: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6c80u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b6c84:
    // 0x2b6c84: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b6c84u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b6c88:
    // 0x2b6c88: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6c88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b6c8c:
    // 0x2b6c8c: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b6c8cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b6c90:
    // 0x2b6c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6c94:
    // 0x2b6c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6c98:
    // 0x2b6c98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6c98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6c9c:
    // 0x2b6c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ca0:
    // 0x2b6ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6ca4:
    // 0x2b6ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ca8:
    // 0x2b6ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cac:
    // 0x2b6cac: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B6CAC raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6cb0:
    // 0x2b6cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cb4:
    // 0x2b6cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6cb8:
    // 0x2b6cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cbc:
    // 0x2b6cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6cc0:
    // 0x2b6cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cc4:
    // 0x2b6cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6cc8:
    // 0x2b6cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6ccc:
    // 0x2b6ccc: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b6cd0:
    // 0x2b6cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cd4:
    // 0x2b6cd4: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b6cd8:
    // 0x2b6cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cdc:
    // 0x2b6cdc: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cdcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b6ce0:
    // 0x2b6ce0: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6ce0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b6ce4:
    // 0x2b6ce4: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b6ce4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b6ce8:
    // 0x2b6ce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6ce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cec:
    // 0x2b6cec: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cecu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b6cf0:
    // 0x2b6cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cf4:
    // 0x2b6cf4: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cf4u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b6cf8:
    // 0x2b6cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6cfc:
    // 0x2b6cfc: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6cfcu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b6d00:
    // 0x2b6d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6d04:
    // 0x2b6d04: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6d04u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b6d08:
    // 0x2b6d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6d0c:
    // 0x2b6d0c: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6d0cu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b6d10:
    // 0x2b6d10: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b6d10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B6D10 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6d14:
    // 0x2b6d14: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b6d14u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b6d18:
    // 0x2b6d18: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6d18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b6d1c:
    // 0x2b6d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d20:
    // 0x2b6d20: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2b6d20u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6d24:
    // 0x2b6d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d28:
    // 0x2b6d28: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b6d2c:
    if (ctx->pc == 0x2B6D2Cu) {
        ctx->pc = 0x2B6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D28u;
        // 0x2b6d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D30u;
        goto label_2b6d30;
    }
    ctx->pc = 0x2B6D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D28u;
        // 0x2b6d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6D30u;
label_2b6d30:
    // 0x2b6d30: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6d30u;
    ctx->pc = 0x2B6D34u;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2b6d34:
    // 0x2b6d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d38:
    // 0x2b6d38: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b6d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b6d3c:
    // 0x2b6d3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d40:
    // 0x2b6d40: 0x420f0679  .word       0x420F0679                   # di # 000F0640 <InstrIdType: R5900_COP0_TLB>
    ctx->pc = 0x2b6d40u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_2b6d44:
    // 0x2b6d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d48:
    // 0x2b6d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6d4c:
    // 0x2b6d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d50:
    // 0x2b6d50: 0x500a001e  beql        $zero, $t2, . + 4 + (0x1E << 2)
label_2b6d54:
    if (ctx->pc == 0x2B6D54u) {
        ctx->pc = 0x2B6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D50u;
        // 0x2b6d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D58u;
        goto label_2b6d58;
    }
    ctx->pc = 0x2B6D50u;
    {
        const bool branch_taken_0x2b6d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6d50) {
            ctx->pc = 0x2B6D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D50u;
            // 0x2b6d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6DCCu;
            goto label_2b6dcc;
        }
    }
    ctx->pc = 0x2B6D58u;
label_2b6d58:
    // 0x2b6d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6d5c:
    // 0x2b6d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d60:
    // 0x2b6d60: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2b6d64:
    if (ctx->pc == 0x2B6D64u) {
        ctx->pc = 0x2B6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D60u;
        // 0x2b6d64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D68u;
        goto label_2b6d68;
    }
    ctx->pc = 0x2B6D60u;
    {
        const bool branch_taken_0x2b6d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D60u;
        // 0x2b6d64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d60) {
            ctx->pc = 0x2CAD80u;
            return;
        }
    }
    ctx->pc = 0x2B6D68u;
label_2b6d68:
    // 0x2b6d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6d6c:
    // 0x2b6d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d70:
    // 0x2b6d70: 0x5a00081e  blezl       $s0, . + 4 + (0x81E << 2)
label_2b6d74:
    if (ctx->pc == 0x2B6D74u) {
        ctx->pc = 0x2B6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D70u;
        // 0x2b6d74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D78u;
        goto label_2b6d78;
    }
    ctx->pc = 0x2B6D70u;
    {
        const bool branch_taken_0x2b6d70 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b6d70) {
            ctx->pc = 0x2B6D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D70u;
            // 0x2b6d74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8DECu;
            { ctx->pc = 0x2b8dec; return; }
        }
    }
    ctx->pc = 0x2B6D78u;
label_2b6d78:
    // 0x2b6d78: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b6d7c:
    if (ctx->pc == 0x2B6D7Cu) {
        ctx->pc = 0x2B6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D78u;
        // 0x2b6d7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D80u;
        goto label_2b6d80;
    }
    ctx->pc = 0x2B6D78u;
    {
        const bool branch_taken_0x2b6d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D78u;
        // 0x2b6d7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d78) {
            ctx->pc = 0x2BCE7Cu;
            { ctx->pc = 0x2bce7c; return; }
        }
    }
    ctx->pc = 0x2B6D80u;
label_2b6d80:
    // 0x2b6d80: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b6d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b6d84:
    // 0x2b6d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d88:
    // 0x2b6d88: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6d88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B6D88 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6d8c:
    // 0x2b6d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6d90:
    // 0x2b6d90: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2b6d94:
    if (ctx->pc == 0x2B6D94u) {
        ctx->pc = 0x2B6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D90u;
        // 0x2b6d94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D98u;
        goto label_2b6d98;
    }
    ctx->pc = 0x2B6D90u;
    {
        const bool branch_taken_0x2b6d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D90u;
        // 0x2b6d94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d90) {
            ctx->pc = 0x2BAD98u;
            { ctx->pc = 0x2bad98; return; }
        }
    }
    ctx->pc = 0x2B6D98u;
label_2b6d98:
    // 0x2b6d98: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2b6d98u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2b6d9c:
    // 0x2b6d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6da0:
    // 0x2b6da0: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2b6da0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2b6da4:
    // 0x2b6da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6da8:
    // 0x2b6da8: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2b6da8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2b6dac:
    // 0x2b6dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6db0:
    // 0x2b6db0: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b6db4:
    if (ctx->pc == 0x2B6DB4u) {
        ctx->pc = 0x2B6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DB0u;
        // 0x2b6db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DB8u;
        goto label_2b6db8;
    }
    ctx->pc = 0x2B6DB0u;
    {
        const bool branch_taken_0x2b6db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DB0u;
        // 0x2b6db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6db0) {
            ctx->pc = 0x2B8DB8u;
            { ctx->pc = 0x2b8db8; return; }
        }
    }
    ctx->pc = 0x2B6DB8u;
label_2b6db8:
    // 0x2b6db8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b6dbc:
    if (ctx->pc == 0x2B6DBCu) {
        ctx->pc = 0x2B6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DB8u;
        // 0x2b6dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DC0u;
        goto label_2b6dc0;
    }
    ctx->pc = 0x2B6DB8u;
    {
        const bool branch_taken_0x2b6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DB8u;
        // 0x2b6dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6db8) {
            ctx->pc = 0x2BCE3Cu;
            { ctx->pc = 0x2bce3c; return; }
        }
    }
    ctx->pc = 0x2B6DC0u;
label_2b6dc0:
    // 0x2b6dc0: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b6dc4:
    if (ctx->pc == 0x2B6DC4u) {
        ctx->pc = 0x2B6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DC0u;
        // 0x2b6dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DC8u;
        goto label_2b6dc8;
    }
    ctx->pc = 0x2B6DC0u;
    {
        const bool branch_taken_0x2b6dc0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DC0u;
        // 0x2b6dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dc0) {
            ctx->pc = 0x2CCDC0u;
            return;
        }
    }
    ctx->pc = 0x2B6DC8u;
label_2b6dc8:
    // 0x2b6dc8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b6dcc:
    if (ctx->pc == 0x2B6DCCu) {
        ctx->pc = 0x2B6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DC8u;
        // 0x2b6dcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DD0u;
        goto label_2b6dd0;
    }
    ctx->pc = 0x2B6DC8u;
    {
        const bool branch_taken_0x2b6dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DC8u;
        // 0x2b6dcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dc8) {
            ctx->pc = 0x2CCDD0u;
            return;
        }
    }
    ctx->pc = 0x2B6DD0u;
label_2b6dd0:
    // 0x2b6dd0: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6dd0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2b6dd4:
    // 0x2b6dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6dd8:
    // 0x2b6dd8: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6dd8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2b6ddc:
    // 0x2b6ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6de0:
    // 0x2b6de0: 0xb0b2800  j           func_C2CA000
label_2b6de4:
    if (ctx->pc == 0x2B6DE4u) {
        ctx->pc = 0x2B6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DE0u;
        // 0x2b6de4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DE8u;
        goto label_2b6de8;
    }
    ctx->pc = 0x2B6DE0u;
    ctx->pc = 0x2B6DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6DE0u;
    // 0x2b6de4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2B6DE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6DE8u;
label_2b6de8:
    // 0x2b6de8: 0x0  nop
    ctx->pc = 0x2b6de8u;
    // NOP
label_2b6dec:
    // 0x2b6dec: 0x4a160300  vaddx       $vf12, $vf0, $vf22x
    ctx->pc = 0x2b6decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2b6df0:
    // 0x2b6df0: 0xb0b3000  j           func_C2CC000
label_2b6df4:
    if (ctx->pc == 0x2B6DF4u) {
        ctx->pc = 0x2B6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DF0u;
        // 0x2b6df4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DF8u;
        goto label_2b6df8;
    }
    ctx->pc = 0x2B6DF0u;
    ctx->pc = 0x2B6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6DF0u;
    // 0x2b6df4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2B6DF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6DF8u;
label_2b6df8:
    // 0x2b6df8: 0x42010760  .word       0x42010760                   # INVALID     $s0, $at, 0x760 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6df8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x2B6DF8 raw=0x42010760"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6dfc:
    // 0x2b6dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e00:
    // 0x2b6e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e04:
    // 0x2b6e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e08:
    // 0x2b6e08: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b6e08u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b6e0c:
    // 0x2b6e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e10:
    // 0x2b6e10: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b6e10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b6e14:
    // 0x2b6e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e18:
    // 0x2b6e18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e1c:
    // 0x2b6e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e20:
    // 0x2b6e20: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2b6e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2b6e24:
    // 0x2b6e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e28:
    // 0x2b6e28: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2b6e2c:
    if (ctx->pc == 0x2B6E2Cu) {
        ctx->pc = 0x2B6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E28u;
        // 0x2b6e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6E30u;
        goto label_2b6e30;
    }
    ctx->pc = 0x2B6E28u;
    {
        const bool branch_taken_0x2b6e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E28u;
        // 0x2b6e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e28) {
            ctx->pc = 0x2BAE40u;
            { ctx->pc = 0x2bae40; return; }
        }
    }
    ctx->pc = 0x2B6E30u;
label_2b6e30:
    // 0x2b6e30: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b6e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b6e34:
    // 0x2b6e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e38:
    // 0x2b6e38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e3c:
    // 0x2b6e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e40:
    // 0x2b6e40: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2b6e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2b6e44:
    // 0x2b6e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e48:
    // 0x2b6e48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e4c:
    // 0x2b6e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e50:
    // 0x2b6e50: 0x120e700c  beq         $s0, $t6, . + 4 + (0x700C << 2)
label_2b6e54:
    if (ctx->pc == 0x2B6E54u) {
        ctx->pc = 0x2B6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E50u;
        // 0x2b6e54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6E58u;
        goto label_2b6e58;
    }
    ctx->pc = 0x2B6E50u;
    {
        const bool branch_taken_0x2b6e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E50u;
        // 0x2b6e54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e50) {
            ctx->pc = 0x2D2E84u;
            return;
        }
    }
    ctx->pc = 0x2B6E58u;
label_2b6e58:
    // 0x2b6e58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e5c:
    // 0x2b6e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e60:
    // 0x2b6e60: 0x5a0077a8  blezl       $s0, . + 4 + (0x77A8 << 2)
label_2b6e64:
    if (ctx->pc == 0x2B6E64u) {
        ctx->pc = 0x2B6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E60u;
        // 0x2b6e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6E68u;
        goto label_2b6e68;
    }
    ctx->pc = 0x2B6E60u;
    {
        const bool branch_taken_0x2b6e60 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b6e60) {
            ctx->pc = 0x2B6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6E60u;
            // 0x2b6e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D04u;
            return;
        }
    }
    ctx->pc = 0x2B6E68u;
label_2b6e68:
    // 0x2b6e68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e6c:
    // 0x2b6e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e70:
    // 0x2b6e70: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b6e70u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b6e74:
    // 0x2b6e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e78:
    // 0x2b6e78: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2b6e7c:
    if (ctx->pc == 0x2B6E7Cu) {
        ctx->pc = 0x2B6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E78u;
        // 0x2b6e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6E80u;
        goto label_2b6e80;
    }
    ctx->pc = 0x2B6E78u;
    {
        const bool branch_taken_0x2b6e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E78u;
        // 0x2b6e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e78) {
            ctx->pc = 0x2B91A4u;
            { ctx->pc = 0x2b91a4; return; }
        }
    }
    ctx->pc = 0x2B6E80u;
label_2b6e80:
    // 0x2b6e80: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2b6e80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2b6e84:
    // 0x2b6e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e88:
    // 0x2b6e88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e8c:
    // 0x2b6e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6e90:
    // 0x2b6e90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e94:
    // 0x2b6e94: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b6e94u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b6e98:
    // 0x2b6e98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6e98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6e9c:
    // 0x2b6e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ea0:
    // 0x2b6ea0: 0x0  nop
    ctx->pc = 0x2b6ea0u;
    // NOP
label_2b6ea4:
    // 0x2b6ea4: 0x4a510450  vmaxx.z     $vf17, $vf0, $vf17x
    ctx->pc = 0x2b6ea4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b6ea8:
    // 0x2b6ea8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b6ea8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b6eac:
    // 0x2b6eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6eb0:
    // 0x2b6eb0: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b6eb4:
    if (ctx->pc == 0x2B6EB4u) {
        ctx->pc = 0x2B6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EB0u;
        // 0x2b6eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6EB8u;
        goto label_2b6eb8;
    }
    ctx->pc = 0x2B6EB0u;
    {
        const bool branch_taken_0x2b6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EB0u;
        // 0x2b6eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6eb0) {
            ctx->pc = 0x2B91DCu;
            { ctx->pc = 0x2b91dc; return; }
        }
    }
    ctx->pc = 0x2B6EB8u;
label_2b6eb8:
    // 0x2b6eb8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b6eb8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b6ebc:
    // 0x2b6ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ec0:
    // 0x2b6ec0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b6ec0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b6ec4:
    // 0x2b6ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ec8:
    // 0x2b6ec8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b6ec8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b6ecc:
    // 0x2b6ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ed0:
    // 0x2b6ed0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b6ed0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b6ed4:
    // 0x2b6ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ed8:
    // 0x2b6ed8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b6ed8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b6edc:
    // 0x2b6edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ee0:
    // 0x2b6ee0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b6ee0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b6ee4:
    // 0x2b6ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ee8:
    // 0x2b6ee8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b6ee8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b6eec:
    // 0x2b6eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ef0:
    // 0x2b6ef0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b6ef0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b6ef4:
    // 0x2b6ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6ef8:
    // 0x2b6ef8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b6efc:
    // 0x2b6efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f00:
    // 0x2b6f00: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b6f04:
    // 0x2b6f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f08:
    // 0x2b6f08: 0x80940b7c  lb          $s4, 0xB7C($a0)
    ctx->pc = 0x2b6f08u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2940)));
label_2b6f0c:
    // 0x2b6f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f10:
    // 0x2b6f10: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b6f10u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b6f14:
    // 0x2b6f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f18:
    // 0x2b6f18: 0x10040005  beq         $zero, $a0, . + 4 + (0x5 << 2)
label_2b6f1c:
    if (ctx->pc == 0x2B6F1Cu) {
        ctx->pc = 0x2B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F18u;
        // 0x2b6f1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F20u;
        goto label_2b6f20;
    }
    ctx->pc = 0x2B6F18u;
    {
        const bool branch_taken_0x2b6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F18u;
        // 0x2b6f1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f18) {
            ctx->pc = 0x2B6F30u;
            goto label_2b6f30;
        }
    }
    ctx->pc = 0x2B6F20u;
label_2b6f20:
    // 0x2b6f20: 0xa241000  j           func_8904000
label_2b6f24:
    if (ctx->pc == 0x2B6F24u) {
        ctx->pc = 0x2B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F20u;
        // 0x2b6f24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F28u;
        goto label_2b6f28;
    }
    ctx->pc = 0x2B6F20u;
    ctx->pc = 0x2B6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F20u;
    // 0x2b6f24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8904000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8904000u, 0x2B6F20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6F28u;
label_2b6f28:
    // 0x2b6f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6f2c:
    // 0x2b6f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f30:
    // 0x2b6f30: 0x800008f0  lb          $zero, 0x8F0($zero)
    ctx->pc = 0x2b6f30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x8F0u));
label_2b6f34:
    // 0x2b6f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f38:
    // 0x2b6f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6f3c:
    // 0x2b6f3c: 0x540541  .word       0x00540541                   # INVALID     $v0, $s4, 0x541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B6F3C raw=0x00540541"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6f40:
    // 0x2b6f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6f44:
    // 0x2b6f44: 0x1140545  .word       0x01140545                   # INVALID     $t0, $s4, 0x545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B6F44 raw=0x01140545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6f48:
    // 0x2b6f48: 0x10031801  beq         $zero, $v1, . + 4 + (0x1801 << 2)
label_2b6f4c:
    if (ctx->pc == 0x2B6F4Cu) {
        ctx->pc = 0x2B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F48u;
        // 0x2b6f4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F50u;
        goto label_2b6f50;
    }
    ctx->pc = 0x2B6F48u;
    {
        const bool branch_taken_0x2b6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F48u;
        // 0x2b6f4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f48) {
            ctx->pc = 0x2BCF50u;
            { ctx->pc = 0x2bcf50; return; }
        }
    }
    ctx->pc = 0x2B6F50u;
label_2b6f50:
    // 0x2b6f50: 0x81f01b7c  lb          $s0, 0x1B7C($t7)
    ctx->pc = 0x2b6f50u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b6f54:
    // 0x2b6f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f58:
    // 0x2b6f58: 0x901800  .word       0x00901800                   # sll         $v1, $s0, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_2b6f5c:
    // 0x2b6f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6f60:
    // 0x2b6f60: 0x90c1ffe  j           func_4307FF8
label_2b6f64:
    if (ctx->pc == 0x2B6F64u) {
        ctx->pc = 0x2B6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F60u;
        // 0x2b6f64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F68u;
        { ctx->pc = 0x2b6f68; return; }
    }
    ctx->pc = 0x2B6F60u;
    ctx->pc = 0x2B6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F60u;
    // 0x2b6f64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307FF8u, 0x2B6F60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6F68u;
    ctx->pc = 0x2b6f68u;
    return;
}
