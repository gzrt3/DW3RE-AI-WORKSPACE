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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part56(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b66c0u: goto label_1b66c0;
        case 0x1b66c4u: goto label_1b66c4;
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66ccu: goto label_1b66cc;
        case 0x1b66d0u: goto label_1b66d0;
        case 0x1b66d4u: goto label_1b66d4;
        case 0x1b66d8u: goto label_1b66d8;
        case 0x1b66dcu: goto label_1b66dc;
        case 0x1b66e0u: goto label_1b66e0;
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66ecu: goto label_1b66ec;
        case 0x1b66f0u: goto label_1b66f0;
        case 0x1b66f4u: goto label_1b66f4;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b66fcu: goto label_1b66fc;
        case 0x1b6700u: goto label_1b6700;
        case 0x1b6704u: goto label_1b6704;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b670cu: goto label_1b670c;
        case 0x1b6710u: goto label_1b6710;
        case 0x1b6714u: goto label_1b6714;
        case 0x1b6718u: goto label_1b6718;
        case 0x1b671cu: goto label_1b671c;
        case 0x1b6720u: goto label_1b6720;
        case 0x1b6724u: goto label_1b6724;
        case 0x1b6728u: goto label_1b6728;
        case 0x1b672cu: goto label_1b672c;
        case 0x1b6730u: goto label_1b6730;
        case 0x1b6734u: goto label_1b6734;
        case 0x1b6738u: goto label_1b6738;
        case 0x1b673cu: goto label_1b673c;
        case 0x1b6740u: goto label_1b6740;
        case 0x1b6744u: goto label_1b6744;
        case 0x1b6748u: goto label_1b6748;
        case 0x1b674cu: goto label_1b674c;
        case 0x1b6750u: goto label_1b6750;
        case 0x1b6754u: goto label_1b6754;
        case 0x1b6758u: goto label_1b6758;
        case 0x1b675cu: goto label_1b675c;
        case 0x1b6760u: goto label_1b6760;
        case 0x1b6764u: goto label_1b6764;
        case 0x1b6768u: goto label_1b6768;
        case 0x1b676cu: goto label_1b676c;
        case 0x1b6770u: goto label_1b6770;
        case 0x1b6774u: goto label_1b6774;
        case 0x1b6778u: goto label_1b6778;
        case 0x1b677cu: goto label_1b677c;
        case 0x1b6780u: goto label_1b6780;
        case 0x1b6784u: goto label_1b6784;
        case 0x1b6788u: goto label_1b6788;
        case 0x1b678cu: goto label_1b678c;
        case 0x1b6790u: goto label_1b6790;
        case 0x1b6794u: goto label_1b6794;
        case 0x1b6798u: goto label_1b6798;
        case 0x1b679cu: goto label_1b679c;
        case 0x1b67a0u: goto label_1b67a0;
        case 0x1b67a4u: goto label_1b67a4;
        case 0x1b67a8u: goto label_1b67a8;
        case 0x1b67acu: goto label_1b67ac;
        case 0x1b67b0u: goto label_1b67b0;
        case 0x1b67b4u: goto label_1b67b4;
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b67bcu: goto label_1b67bc;
        case 0x1b67c0u: goto label_1b67c0;
        case 0x1b67c4u: goto label_1b67c4;
        case 0x1b67c8u: goto label_1b67c8;
        case 0x1b67ccu: goto label_1b67cc;
        case 0x1b67d0u: goto label_1b67d0;
        case 0x1b67d4u: goto label_1b67d4;
        case 0x1b67d8u: goto label_1b67d8;
        case 0x1b67dcu: goto label_1b67dc;
        case 0x1b67e0u: goto label_1b67e0;
        case 0x1b67e4u: goto label_1b67e4;
        case 0x1b67e8u: goto label_1b67e8;
        case 0x1b67ecu: goto label_1b67ec;
        case 0x1b67f0u: goto label_1b67f0;
        case 0x1b67f4u: goto label_1b67f4;
        case 0x1b67f8u: goto label_1b67f8;
        case 0x1b67fcu: goto label_1b67fc;
        case 0x1b6800u: goto label_1b6800;
        case 0x1b6804u: goto label_1b6804;
        case 0x1b6808u: goto label_1b6808;
        case 0x1b680cu: goto label_1b680c;
        case 0x1b6810u: goto label_1b6810;
        case 0x1b6814u: goto label_1b6814;
        case 0x1b6818u: goto label_1b6818;
        case 0x1b681cu: goto label_1b681c;
        case 0x1b6820u: goto label_1b6820;
        case 0x1b6824u: goto label_1b6824;
        case 0x1b6828u: goto label_1b6828;
        case 0x1b682cu: goto label_1b682c;
        case 0x1b6830u: goto label_1b6830;
        case 0x1b6834u: goto label_1b6834;
        case 0x1b6838u: goto label_1b6838;
        case 0x1b683cu: goto label_1b683c;
        case 0x1b6840u: goto label_1b6840;
        case 0x1b6844u: goto label_1b6844;
        case 0x1b6848u: goto label_1b6848;
        case 0x1b684cu: goto label_1b684c;
        case 0x1b6850u: goto label_1b6850;
        case 0x1b6854u: goto label_1b6854;
        case 0x1b6858u: goto label_1b6858;
        case 0x1b685cu: goto label_1b685c;
        case 0x1b6860u: goto label_1b6860;
        case 0x1b6864u: goto label_1b6864;
        case 0x1b6868u: goto label_1b6868;
        case 0x1b686cu: goto label_1b686c;
        case 0x1b6870u: goto label_1b6870;
        case 0x1b6874u: goto label_1b6874;
        case 0x1b6878u: goto label_1b6878;
        case 0x1b687cu: goto label_1b687c;
        case 0x1b6880u: goto label_1b6880;
        case 0x1b6884u: goto label_1b6884;
        case 0x1b6888u: goto label_1b6888;
        case 0x1b688cu: goto label_1b688c;
        case 0x1b6890u: goto label_1b6890;
        case 0x1b6894u: goto label_1b6894;
        case 0x1b6898u: goto label_1b6898;
        case 0x1b689cu: goto label_1b689c;
        case 0x1b68a0u: goto label_1b68a0;
        case 0x1b68a4u: goto label_1b68a4;
        case 0x1b68a8u: goto label_1b68a8;
        case 0x1b68acu: goto label_1b68ac;
        case 0x1b68b0u: goto label_1b68b0;
        case 0x1b68b4u: goto label_1b68b4;
        case 0x1b68b8u: goto label_1b68b8;
        case 0x1b68bcu: goto label_1b68bc;
        case 0x1b68c0u: goto label_1b68c0;
        case 0x1b68c4u: goto label_1b68c4;
        case 0x1b68c8u: goto label_1b68c8;
        case 0x1b68ccu: goto label_1b68cc;
        case 0x1b68d0u: goto label_1b68d0;
        case 0x1b68d4u: goto label_1b68d4;
        case 0x1b68d8u: goto label_1b68d8;
        case 0x1b68dcu: goto label_1b68dc;
        case 0x1b68e0u: goto label_1b68e0;
        case 0x1b68e4u: goto label_1b68e4;
        case 0x1b68e8u: goto label_1b68e8;
        case 0x1b68ecu: goto label_1b68ec;
        case 0x1b68f0u: goto label_1b68f0;
        case 0x1b68f4u: goto label_1b68f4;
        case 0x1b68f8u: goto label_1b68f8;
        case 0x1b68fcu: goto label_1b68fc;
        case 0x1b6900u: goto label_1b6900;
        case 0x1b6904u: goto label_1b6904;
        case 0x1b6908u: goto label_1b6908;
        case 0x1b690cu: goto label_1b690c;
        case 0x1b6910u: goto label_1b6910;
        case 0x1b6914u: goto label_1b6914;
        case 0x1b6918u: goto label_1b6918;
        case 0x1b691cu: goto label_1b691c;
        case 0x1b6920u: goto label_1b6920;
        case 0x1b6924u: goto label_1b6924;
        case 0x1b6928u: goto label_1b6928;
        case 0x1b692cu: goto label_1b692c;
        case 0x1b6930u: goto label_1b6930;
        case 0x1b6934u: goto label_1b6934;
        case 0x1b6938u: goto label_1b6938;
        case 0x1b693cu: goto label_1b693c;
        case 0x1b6940u: goto label_1b6940;
        case 0x1b6944u: goto label_1b6944;
        case 0x1b6948u: goto label_1b6948;
        case 0x1b694cu: goto label_1b694c;
        case 0x1b6950u: goto label_1b6950;
        case 0x1b6954u: goto label_1b6954;
        case 0x1b6958u: goto label_1b6958;
        case 0x1b695cu: goto label_1b695c;
        case 0x1b6960u: goto label_1b6960;
        case 0x1b6964u: goto label_1b6964;
        case 0x1b6968u: goto label_1b6968;
        case 0x1b696cu: goto label_1b696c;
        case 0x1b6970u: goto label_1b6970;
        case 0x1b6974u: goto label_1b6974;
        case 0x1b6978u: goto label_1b6978;
        case 0x1b697cu: goto label_1b697c;
        case 0x1b6980u: goto label_1b6980;
        case 0x1b6984u: goto label_1b6984;
        case 0x1b6988u: goto label_1b6988;
        case 0x1b698cu: goto label_1b698c;
        case 0x1b6990u: goto label_1b6990;
        case 0x1b6994u: goto label_1b6994;
        case 0x1b6998u: goto label_1b6998;
        case 0x1b699cu: goto label_1b699c;
        case 0x1b69a0u: goto label_1b69a0;
        case 0x1b69a4u: goto label_1b69a4;
        case 0x1b69a8u: goto label_1b69a8;
        case 0x1b69acu: goto label_1b69ac;
        case 0x1b69b0u: goto label_1b69b0;
        case 0x1b69b4u: goto label_1b69b4;
        case 0x1b69b8u: goto label_1b69b8;
        case 0x1b69bcu: goto label_1b69bc;
        case 0x1b69c0u: goto label_1b69c0;
        case 0x1b69c4u: goto label_1b69c4;
        case 0x1b69c8u: goto label_1b69c8;
        case 0x1b69ccu: goto label_1b69cc;
        case 0x1b69d0u: goto label_1b69d0;
        case 0x1b69d4u: goto label_1b69d4;
        case 0x1b69d8u: goto label_1b69d8;
        case 0x1b69dcu: goto label_1b69dc;
        case 0x1b69e0u: goto label_1b69e0;
        case 0x1b69e4u: goto label_1b69e4;
        case 0x1b69e8u: goto label_1b69e8;
        case 0x1b69ecu: goto label_1b69ec;
        case 0x1b69f0u: goto label_1b69f0;
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b69f8u: goto label_1b69f8;
        case 0x1b69fcu: goto label_1b69fc;
        case 0x1b6a00u: goto label_1b6a00;
        case 0x1b6a04u: goto label_1b6a04;
        case 0x1b6a08u: goto label_1b6a08;
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a10u: goto label_1b6a10;
        case 0x1b6a14u: goto label_1b6a14;
        case 0x1b6a18u: goto label_1b6a18;
        case 0x1b6a1cu: goto label_1b6a1c;
        case 0x1b6a20u: goto label_1b6a20;
        case 0x1b6a24u: goto label_1b6a24;
        case 0x1b6a28u: goto label_1b6a28;
        case 0x1b6a2cu: goto label_1b6a2c;
        case 0x1b6a30u: goto label_1b6a30;
        case 0x1b6a34u: goto label_1b6a34;
        case 0x1b6a38u: goto label_1b6a38;
        case 0x1b6a3cu: goto label_1b6a3c;
        case 0x1b6a40u: goto label_1b6a40;
        case 0x1b6a44u: goto label_1b6a44;
        case 0x1b6a48u: goto label_1b6a48;
        case 0x1b6a4cu: goto label_1b6a4c;
        case 0x1b6a50u: goto label_1b6a50;
        case 0x1b6a54u: goto label_1b6a54;
        case 0x1b6a58u: goto label_1b6a58;
        case 0x1b6a5cu: goto label_1b6a5c;
        case 0x1b6a60u: goto label_1b6a60;
        case 0x1b6a64u: goto label_1b6a64;
        case 0x1b6a68u: goto label_1b6a68;
        case 0x1b6a6cu: goto label_1b6a6c;
        case 0x1b6a70u: goto label_1b6a70;
        case 0x1b6a74u: goto label_1b6a74;
        case 0x1b6a78u: goto label_1b6a78;
        case 0x1b6a7cu: goto label_1b6a7c;
        case 0x1b6a80u: goto label_1b6a80;
        case 0x1b6a84u: goto label_1b6a84;
        case 0x1b6a88u: goto label_1b6a88;
        case 0x1b6a8cu: goto label_1b6a8c;
        case 0x1b6a90u: goto label_1b6a90;
        case 0x1b6a94u: goto label_1b6a94;
        case 0x1b6a98u: goto label_1b6a98;
        case 0x1b6a9cu: goto label_1b6a9c;
        case 0x1b6aa0u: goto label_1b6aa0;
        case 0x1b6aa4u: goto label_1b6aa4;
        case 0x1b6aa8u: goto label_1b6aa8;
        case 0x1b6aacu: goto label_1b6aac;
        case 0x1b6ab0u: goto label_1b6ab0;
        case 0x1b6ab4u: goto label_1b6ab4;
        case 0x1b6ab8u: goto label_1b6ab8;
        case 0x1b6abcu: goto label_1b6abc;
        case 0x1b6ac0u: goto label_1b6ac0;
        case 0x1b6ac4u: goto label_1b6ac4;
        case 0x1b6ac8u: goto label_1b6ac8;
        case 0x1b6accu: goto label_1b6acc;
        case 0x1b6ad0u: goto label_1b6ad0;
        case 0x1b6ad4u: goto label_1b6ad4;
        case 0x1b6ad8u: goto label_1b6ad8;
        case 0x1b6adcu: goto label_1b6adc;
        case 0x1b6ae0u: goto label_1b6ae0;
        case 0x1b6ae4u: goto label_1b6ae4;
        case 0x1b6ae8u: goto label_1b6ae8;
        case 0x1b6aecu: goto label_1b6aec;
        case 0x1b6af0u: goto label_1b6af0;
        case 0x1b6af4u: goto label_1b6af4;
        case 0x1b6af8u: goto label_1b6af8;
        case 0x1b6afcu: goto label_1b6afc;
        case 0x1b6b00u: goto label_1b6b00;
        case 0x1b6b04u: goto label_1b6b04;
        case 0x1b6b08u: goto label_1b6b08;
        case 0x1b6b0cu: goto label_1b6b0c;
        case 0x1b6b10u: goto label_1b6b10;
        case 0x1b6b14u: goto label_1b6b14;
        case 0x1b6b18u: goto label_1b6b18;
        case 0x1b6b1cu: goto label_1b6b1c;
        case 0x1b6b20u: goto label_1b6b20;
        case 0x1b6b24u: goto label_1b6b24;
        case 0x1b6b28u: goto label_1b6b28;
        case 0x1b6b2cu: goto label_1b6b2c;
        case 0x1b6b30u: goto label_1b6b30;
        case 0x1b6b34u: goto label_1b6b34;
        case 0x1b6b38u: goto label_1b6b38;
        case 0x1b6b3cu: goto label_1b6b3c;
        case 0x1b6b40u: goto label_1b6b40;
        case 0x1b6b44u: goto label_1b6b44;
        case 0x1b6b48u: goto label_1b6b48;
        case 0x1b6b4cu: goto label_1b6b4c;
        case 0x1b6b50u: goto label_1b6b50;
        case 0x1b6b54u: goto label_1b6b54;
        case 0x1b6b58u: goto label_1b6b58;
        case 0x1b6b5cu: goto label_1b6b5c;
        case 0x1b6b60u: goto label_1b6b60;
        case 0x1b6b64u: goto label_1b6b64;
        case 0x1b6b68u: goto label_1b6b68;
        case 0x1b6b6cu: goto label_1b6b6c;
        case 0x1b6b70u: goto label_1b6b70;
        case 0x1b6b74u: goto label_1b6b74;
        case 0x1b6b78u: goto label_1b6b78;
        case 0x1b6b7cu: goto label_1b6b7c;
        case 0x1b6b80u: goto label_1b6b80;
        case 0x1b6b84u: goto label_1b6b84;
        case 0x1b6b88u: goto label_1b6b88;
        case 0x1b6b8cu: goto label_1b6b8c;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6b94u: goto label_1b6b94;
        case 0x1b6b98u: goto label_1b6b98;
        case 0x1b6b9cu: goto label_1b6b9c;
        case 0x1b6ba0u: goto label_1b6ba0;
        case 0x1b6ba4u: goto label_1b6ba4;
        case 0x1b6ba8u: goto label_1b6ba8;
        case 0x1b6bacu: goto label_1b6bac;
        case 0x1b6bb0u: goto label_1b6bb0;
        case 0x1b6bb4u: goto label_1b6bb4;
        case 0x1b6bb8u: goto label_1b6bb8;
        case 0x1b6bbcu: goto label_1b6bbc;
        case 0x1b6bc0u: goto label_1b6bc0;
        case 0x1b6bc4u: goto label_1b6bc4;
        case 0x1b6bc8u: goto label_1b6bc8;
        case 0x1b6bccu: goto label_1b6bcc;
        case 0x1b6bd0u: goto label_1b6bd0;
        case 0x1b6bd4u: goto label_1b6bd4;
        case 0x1b6bd8u: goto label_1b6bd8;
        case 0x1b6bdcu: goto label_1b6bdc;
        case 0x1b6be0u: goto label_1b6be0;
        case 0x1b6be4u: goto label_1b6be4;
        case 0x1b6be8u: goto label_1b6be8;
        case 0x1b6becu: goto label_1b6bec;
        case 0x1b6bf0u: goto label_1b6bf0;
        case 0x1b6bf4u: goto label_1b6bf4;
        case 0x1b6bf8u: goto label_1b6bf8;
        case 0x1b6bfcu: goto label_1b6bfc;
        case 0x1b6c00u: goto label_1b6c00;
        case 0x1b6c04u: goto label_1b6c04;
        case 0x1b6c08u: goto label_1b6c08;
        case 0x1b6c0cu: goto label_1b6c0c;
        case 0x1b6c10u: goto label_1b6c10;
        case 0x1b6c14u: goto label_1b6c14;
        case 0x1b6c18u: goto label_1b6c18;
        case 0x1b6c1cu: goto label_1b6c1c;
        case 0x1b6c20u: goto label_1b6c20;
        case 0x1b6c24u: goto label_1b6c24;
        case 0x1b6c28u: goto label_1b6c28;
        case 0x1b6c2cu: goto label_1b6c2c;
        case 0x1b6c30u: goto label_1b6c30;
        case 0x1b6c34u: goto label_1b6c34;
        case 0x1b6c38u: goto label_1b6c38;
        case 0x1b6c3cu: goto label_1b6c3c;
        case 0x1b6c40u: goto label_1b6c40;
        case 0x1b6c44u: goto label_1b6c44;
        case 0x1b6c48u: goto label_1b6c48;
        case 0x1b6c4cu: goto label_1b6c4c;
        case 0x1b6c50u: goto label_1b6c50;
        case 0x1b6c54u: goto label_1b6c54;
        case 0x1b6c58u: goto label_1b6c58;
        case 0x1b6c5cu: goto label_1b6c5c;
        case 0x1b6c60u: goto label_1b6c60;
        case 0x1b6c64u: goto label_1b6c64;
        case 0x1b6c68u: goto label_1b6c68;
        case 0x1b6c6cu: goto label_1b6c6c;
        case 0x1b6c70u: goto label_1b6c70;
        case 0x1b6c74u: goto label_1b6c74;
        case 0x1b6c78u: goto label_1b6c78;
        case 0x1b6c7cu: goto label_1b6c7c;
        case 0x1b6c80u: goto label_1b6c80;
        case 0x1b6c84u: goto label_1b6c84;
        case 0x1b6c88u: goto label_1b6c88;
        case 0x1b6c8cu: goto label_1b6c8c;
        case 0x1b6c90u: goto label_1b6c90;
        case 0x1b6c94u: goto label_1b6c94;
        case 0x1b6c98u: goto label_1b6c98;
        case 0x1b6c9cu: goto label_1b6c9c;
        case 0x1b6ca0u: goto label_1b6ca0;
        case 0x1b6ca4u: goto label_1b6ca4;
        case 0x1b6ca8u: goto label_1b6ca8;
        case 0x1b6cacu: goto label_1b6cac;
        case 0x1b6cb0u: goto label_1b6cb0;
        case 0x1b6cb4u: goto label_1b6cb4;
        case 0x1b6cb8u: goto label_1b6cb8;
        case 0x1b6cbcu: goto label_1b6cbc;
        case 0x1b6cc0u: goto label_1b6cc0;
        case 0x1b6cc4u: goto label_1b6cc4;
        case 0x1b6cc8u: goto label_1b6cc8;
        case 0x1b6cccu: goto label_1b6ccc;
        case 0x1b6cd0u: goto label_1b6cd0;
        case 0x1b6cd4u: goto label_1b6cd4;
        case 0x1b6cd8u: goto label_1b6cd8;
        case 0x1b6cdcu: goto label_1b6cdc;
        case 0x1b6ce0u: goto label_1b6ce0;
        case 0x1b6ce4u: goto label_1b6ce4;
        case 0x1b6ce8u: goto label_1b6ce8;
        case 0x1b6cecu: goto label_1b6cec;
        case 0x1b6cf0u: goto label_1b6cf0;
        case 0x1b6cf4u: goto label_1b6cf4;
        case 0x1b6cf8u: goto label_1b6cf8;
        case 0x1b6cfcu: goto label_1b6cfc;
        case 0x1b6d00u: goto label_1b6d00;
        case 0x1b6d04u: goto label_1b6d04;
        case 0x1b6d08u: goto label_1b6d08;
        case 0x1b6d0cu: goto label_1b6d0c;
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d14u: goto label_1b6d14;
        case 0x1b6d18u: goto label_1b6d18;
        case 0x1b6d1cu: goto label_1b6d1c;
        case 0x1b6d20u: goto label_1b6d20;
        case 0x1b6d24u: goto label_1b6d24;
        case 0x1b6d28u: goto label_1b6d28;
        case 0x1b6d2cu: goto label_1b6d2c;
        case 0x1b6d30u: goto label_1b6d30;
        case 0x1b6d34u: goto label_1b6d34;
        case 0x1b6d38u: goto label_1b6d38;
        case 0x1b6d3cu: goto label_1b6d3c;
        case 0x1b6d40u: goto label_1b6d40;
        case 0x1b6d44u: goto label_1b6d44;
        case 0x1b6d48u: goto label_1b6d48;
        case 0x1b6d4cu: goto label_1b6d4c;
        case 0x1b6d50u: goto label_1b6d50;
        case 0x1b6d54u: goto label_1b6d54;
        case 0x1b6d58u: goto label_1b6d58;
        case 0x1b6d5cu: goto label_1b6d5c;
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d64u: goto label_1b6d64;
        case 0x1b6d68u: goto label_1b6d68;
        case 0x1b6d6cu: goto label_1b6d6c;
        case 0x1b6d70u: goto label_1b6d70;
        case 0x1b6d74u: goto label_1b6d74;
        case 0x1b6d78u: goto label_1b6d78;
        case 0x1b6d7cu: goto label_1b6d7c;
        case 0x1b6d80u: goto label_1b6d80;
        case 0x1b6d84u: goto label_1b6d84;
        case 0x1b6d88u: goto label_1b6d88;
        case 0x1b6d8cu: goto label_1b6d8c;
        case 0x1b6d90u: goto label_1b6d90;
        case 0x1b6d94u: goto label_1b6d94;
        case 0x1b6d98u: goto label_1b6d98;
        case 0x1b6d9cu: goto label_1b6d9c;
        case 0x1b6da0u: goto label_1b6da0;
        case 0x1b6da4u: goto label_1b6da4;
        case 0x1b6da8u: goto label_1b6da8;
        case 0x1b6dacu: goto label_1b6dac;
        case 0x1b6db0u: goto label_1b6db0;
        case 0x1b6db4u: goto label_1b6db4;
        case 0x1b6db8u: goto label_1b6db8;
        case 0x1b6dbcu: goto label_1b6dbc;
        case 0x1b6dc0u: goto label_1b6dc0;
        case 0x1b6dc4u: goto label_1b6dc4;
        case 0x1b6dc8u: goto label_1b6dc8;
        case 0x1b6dccu: goto label_1b6dcc;
        case 0x1b6dd0u: goto label_1b6dd0;
        case 0x1b6dd4u: goto label_1b6dd4;
        case 0x1b6dd8u: goto label_1b6dd8;
        case 0x1b6ddcu: goto label_1b6ddc;
        case 0x1b6de0u: goto label_1b6de0;
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6de8u: goto label_1b6de8;
        case 0x1b6decu: goto label_1b6dec;
        case 0x1b6df0u: goto label_1b6df0;
        case 0x1b6df4u: goto label_1b6df4;
        case 0x1b6df8u: goto label_1b6df8;
        case 0x1b6dfcu: goto label_1b6dfc;
        case 0x1b6e00u: goto label_1b6e00;
        case 0x1b6e04u: goto label_1b6e04;
        case 0x1b6e08u: goto label_1b6e08;
        case 0x1b6e0cu: goto label_1b6e0c;
        case 0x1b6e10u: goto label_1b6e10;
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e18u: goto label_1b6e18;
        case 0x1b6e1cu: goto label_1b6e1c;
        case 0x1b6e20u: goto label_1b6e20;
        case 0x1b6e24u: goto label_1b6e24;
        case 0x1b6e28u: goto label_1b6e28;
        case 0x1b6e2cu: goto label_1b6e2c;
        case 0x1b6e30u: goto label_1b6e30;
        case 0x1b6e34u: goto label_1b6e34;
        case 0x1b6e38u: goto label_1b6e38;
        case 0x1b6e3cu: goto label_1b6e3c;
        case 0x1b6e40u: goto label_1b6e40;
        case 0x1b6e44u: goto label_1b6e44;
        case 0x1b6e48u: goto label_1b6e48;
        case 0x1b6e4cu: goto label_1b6e4c;
        case 0x1b6e50u: goto label_1b6e50;
        case 0x1b6e54u: goto label_1b6e54;
        case 0x1b6e58u: goto label_1b6e58;
        case 0x1b6e5cu: goto label_1b6e5c;
        case 0x1b6e60u: goto label_1b6e60;
        case 0x1b6e64u: goto label_1b6e64;
        case 0x1b6e68u: goto label_1b6e68;
        case 0x1b6e6cu: goto label_1b6e6c;
        case 0x1b6e70u: goto label_1b6e70;
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e78u: goto label_1b6e78;
        case 0x1b6e7cu: goto label_1b6e7c;
        case 0x1b6e80u: goto label_1b6e80;
        case 0x1b6e84u: goto label_1b6e84;
        case 0x1b6e88u: goto label_1b6e88;
        case 0x1b6e8cu: goto label_1b6e8c;
        default: return;
    }

label_1b66c0:
    // 0x1b66c0: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x1b66c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1b66c4:
    // 0x1b66c4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x1b66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
label_1b66c8:
    // 0x1b66c8: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b66c8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b66cc:
    // 0x1b66cc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_1b66d0:
    // 0x1b66d0: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x1b66d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1b66d4:
    // 0x1b66d4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1b66d8:
    if (ctx->pc == 0x1B66D8u) {
        ctx->pc = 0x1B66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66D4u;
        // 0x1b66d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B66DCu;
        goto label_1b66dc;
    }
    ctx->pc = 0x1B66D4u;
    {
        const bool branch_taken_0x1b66d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66d4) {
            ctx->pc = 0x1B66D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B66D4u;
            // 0x1b66d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B66DCu;
            goto label_1b66dc;
        }
    }
    ctx->pc = 0x1B66DCu;
label_1b66dc:
    // 0x1b66dc: 0x1012  mflo        $v0
    ctx->pc = 0x1b66dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b66e0:
    // 0x1b66e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1b66e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b66e4:
    // 0x1b66e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b66e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b66e8:
    // 0x1b66e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b66ec:
    // 0x1b66ec: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x1b66ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1b66f0:
    // 0x1b66f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b66f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b66f4:
    // 0x1b66f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b66f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b66f8:
    // 0x1b66f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b66fc:
    if (ctx->pc == 0x1B66FCu) {
        ctx->pc = 0x1B66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66F8u;
        // 0x1b66fc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6700u;
        goto label_1b6700;
    }
    ctx->pc = 0x1B66F8u;
    {
        const bool branch_taken_0x1b66f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b66f8) {
            ctx->pc = 0x1B66FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B66F8u;
            // 0x1b66fc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B672Cu;
            goto label_1b672c;
        }
    }
    ctx->pc = 0x1B6700u;
label_1b6700:
    // 0x1b6700: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b6700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6704:
    // 0x1b6704: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6708:
    // 0x1b6708: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b670c:
    if (ctx->pc == 0x1B670Cu) {
        ctx->pc = 0x1B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6708u;
        // 0x1b670c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6710u;
        goto label_1b6710;
    }
    ctx->pc = 0x1B6708u;
    {
        const bool branch_taken_0x1b6708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6708u;
        // 0x1b670c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6708) {
            ctx->pc = 0x1B6728u;
            goto label_1b6728;
        }
    }
    ctx->pc = 0x1B6710u;
label_1b6710:
    // 0x1b6710: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b6710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b6714:
    // 0x1b6714: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b6718:
    if (ctx->pc == 0x1B6718u) {
        ctx->pc = 0x1B6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6714u;
        // 0x1b6718: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B671Cu;
        goto label_1b671c;
    }
    ctx->pc = 0x1B6714u;
    {
        const bool branch_taken_0x1b6714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6714) {
            ctx->pc = 0x1B6718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6714u;
            // 0x1b6718: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B672Cu;
            goto label_1b672c;
        }
    }
    ctx->pc = 0x1B671Cu;
label_1b671c:
    // 0x1b671c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b671cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b6720:
    // 0x1b6720: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b6720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6724:
    // 0x1b6724: 0x0  nop
    ctx->pc = 0x1b6724u;
    // NOP
label_1b6728:
    // 0x1b6728: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b6728u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b672c:
    // 0x1b672c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1b6730:
    if (ctx->pc == 0x1B6730u) {
        ctx->pc = 0x1B6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B672Cu;
        // 0x1b6730: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6734u;
        goto label_1b6734;
    }
    ctx->pc = 0x1B672Cu;
    {
        const bool branch_taken_0x1b672c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b672c) {
            ctx->pc = 0x1B6730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B672Cu;
            // 0x1b6730: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6734u;
            goto label_1b6734;
        }
    }
    ctx->pc = 0x1B6734u;
label_1b6734:
    // 0x1b6734: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1b6734u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1b6738:
    // 0x1b6738: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b6738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1b673c:
    // 0x1b673c: 0x1012  mflo        $v0
    ctx->pc = 0x1b673cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6740:
    // 0x1b6740: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6740u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6744:
    // 0x1b6744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6748:
    // 0x1b6748: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b674c:
    // 0x1b674c: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x1b674cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1b6750:
    // 0x1b6750: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6754:
    // 0x1b6754: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b6754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b6758:
    // 0x1b6758: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b675c:
    if (ctx->pc == 0x1B675Cu) {
        ctx->pc = 0x1B675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6758u;
        // 0x1b675c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6760u;
        goto label_1b6760;
    }
    ctx->pc = 0x1B6758u;
    {
        const bool branch_taken_0x1b6758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6758u;
        // 0x1b675c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6758) {
            ctx->pc = 0x1B6788u;
            goto label_1b6788;
        }
    }
    ctx->pc = 0x1B6760u;
label_1b6760:
    // 0x1b6760: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b6760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6764:
    // 0x1b6764: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6768:
    // 0x1b6768: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b676c:
    if (ctx->pc == 0x1B676Cu) {
        ctx->pc = 0x1B676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6768u;
        // 0x1b676c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6770u;
        goto label_1b6770;
    }
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6768u;
        // 0x1b676c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B6784u;
            goto label_1b6784;
        }
    }
    ctx->pc = 0x1B6770u;
label_1b6770:
    // 0x1b6770: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b6770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b6774:
    // 0x1b6774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b6778:
    if (ctx->pc == 0x1B6778u) {
        ctx->pc = 0x1B6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6774u;
        // 0x1b6778: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B677Cu;
        goto label_1b677c;
    }
    ctx->pc = 0x1B6774u;
    {
        const bool branch_taken_0x1b6774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6774u;
        // 0x1b6778: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6774) {
            ctx->pc = 0x1B6788u;
            goto label_1b6788;
        }
    }
    ctx->pc = 0x1B677Cu;
label_1b677c:
    // 0x1b677c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6780:
    // 0x1b6780: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b6780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b6784:
    // 0x1b6784: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b6784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b6788:
    // 0x1b6788: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b6788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b678c:
    // 0x1b678c: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b678cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1b6790:
    // 0x1b6790: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1b6790u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b6794:
    // 0x1b6794: 0x3810  mfhi        $a3
    ctx->pc = 0x1b6794u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1b6798:
    // 0x1b6798: 0x2012  mflo        $a0
    ctx->pc = 0x1b6798u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1b679c:
    // 0x1b679c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1b679cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b67a0:
    // 0x1b67a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b67a4:
    if (ctx->pc == 0x1B67A4u) {
        ctx->pc = 0x1B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67A0u;
        // 0x1b67a4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B67A8u;
        goto label_1b67a8;
    }
    ctx->pc = 0x1B67A0u;
    {
        const bool branch_taken_0x1b67a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b67a0) {
            ctx->pc = 0x1B67A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B67A0u;
            // 0x1b67a4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B67C0u;
            goto label_1b67c0;
        }
    }
    ctx->pc = 0x1B67A8u;
label_1b67a8:
    // 0x1b67a8: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
label_1b67ac:
    if (ctx->pc == 0x1B67ACu) {
        ctx->pc = 0x1B67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67A8u;
        // 0x1b67ac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B67B0u;
        goto label_1b67b0;
    }
    ctx->pc = 0x1B67A8u;
    {
        const bool branch_taken_0x1b67a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67A8u;
        // 0x1b67ac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67a8) {
            ctx->pc = 0x1B67C4u;
            goto label_1b67c4;
        }
    }
    ctx->pc = 0x1B67B0u;
label_1b67b0:
    // 0x1b67b0: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x1b67b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b67b4:
    // 0x1b67b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b67b8:
    if (ctx->pc == 0x1B67B8u) {
        ctx->pc = 0x1B67BCu;
        goto label_1b67bc;
    }
    ctx->pc = 0x1B67B4u;
    {
        const bool branch_taken_0x1b67b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67b4) {
            ctx->pc = 0x1B67C4u;
            goto label_1b67c4;
        }
    }
    ctx->pc = 0x1B67BCu;
label_1b67bc:
    // 0x1b67bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b67bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b67c0:
    // 0x1b67c0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1b67c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b67c4:
    // 0x1b67c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b67c8:
    // 0x1b67c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b67c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b67cc:
    // 0x1b67cc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1b67ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1b67d0:
    // 0x1b67d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b67d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b67d4:
    // 0x1b67d4: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1b67d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
label_1b67d8:
    // 0x1b67d8: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x1b67d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
label_1b67dc:
    // 0x1b67dc: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1b67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
label_1b67e0:
    // 0x1b67e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b67e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b67e4:
    // 0x1b67e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b67e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b67e8:
    // 0x1b67e8: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1b67e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
label_1b67ec:
    // 0x1b67ec: 0x3e00008  jr          $ra
label_1b67f0:
    if (ctx->pc == 0x1B67F0u) {
        ctx->pc = 0x1B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67ECu;
        // 0x1b67f0: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B67F4u;
        goto label_1b67f4;
    }
    ctx->pc = 0x1B67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67ECu;
        // 0x1b67f0: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B67F4u;
label_1b67f4:
    // 0x1b67f4: 0x0  nop
    ctx->pc = 0x1b67f4u;
    // NOP
label_1b67f8:
    // 0x1b67f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b67fc:
    // 0x1b67fc: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1b67fcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
label_1b6800:
    // 0x1b6800: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1b6800u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
label_1b6804:
    // 0x1b6804: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1b6804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
label_1b6808:
    // 0x1b6808: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1b6808u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_1b680c:
    // 0x1b680c: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x1b680cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
label_1b6810:
    // 0x1b6810: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1b6810u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_1b6814:
    // 0x1b6814: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
label_1b6818:
    if (ctx->pc == 0x1B6818u) {
        ctx->pc = 0x1B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6814u;
        // 0x1b6818: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B681Cu;
        goto label_1b681c;
    }
    ctx->pc = 0x1B6814u;
    {
        const bool branch_taken_0x1b6814 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6814u;
        // 0x1b6818: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6814) {
            ctx->pc = 0x1B6AD8u;
            goto label_1b6ad8;
        }
    }
    ctx->pc = 0x1B681Cu;
label_1b681c:
    // 0x1b681c: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1b681cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6820:
    // 0x1b6820: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1b6824:
    if (ctx->pc == 0x1B6824u) {
        ctx->pc = 0x1B6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6820u;
        // 0x1b6824: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6828u;
        goto label_1b6828;
    }
    ctx->pc = 0x1B6820u;
    {
        const bool branch_taken_0x1b6820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6820u;
        // 0x1b6824: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6820) {
            ctx->pc = 0x1B68A0u;
            goto label_1b68a0;
        }
    }
    ctx->pc = 0x1B6828u;
label_1b6828:
    // 0x1b6828: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b6828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b682c:
    // 0x1b682c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b6830:
    if (ctx->pc == 0x1B6830u) {
        ctx->pc = 0x1B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B682Cu;
        // 0x1b6830: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6834u;
        goto label_1b6834;
    }
    ctx->pc = 0x1B682Cu;
    {
        const bool branch_taken_0x1b682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B682Cu;
        // 0x1b6830: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b682c) {
            ctx->pc = 0x1B6848u;
            goto label_1b6848;
        }
    }
    ctx->pc = 0x1B6834u;
label_1b6834:
    // 0x1b6834: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b6834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b6838:
    // 0x1b6838: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b683c:
    // 0x1b683c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b6840:
    if (ctx->pc == 0x1B6840u) {
        ctx->pc = 0x1B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B683Cu;
        // 0x1b6840: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6844u;
        goto label_1b6844;
    }
    ctx->pc = 0x1B683Cu;
    {
        const bool branch_taken_0x1b683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B683Cu;
        // 0x1b6840: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b683c) {
            ctx->pc = 0x1B685Cu;
            goto label_1b685c;
        }
    }
    ctx->pc = 0x1B6844u;
label_1b6844:
    // 0x1b6844: 0x0  nop
    ctx->pc = 0x1b6844u;
    // NOP
label_1b6848:
    // 0x1b6848: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b6848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b684c:
    // 0x1b684c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6850:
    // 0x1b6850: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b6854:
    // 0x1b6854: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b6854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6858:
    // 0x1b6858: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6858u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b685c:
    // 0x1b685c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_1b6860:
    // 0x1b6860: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b6864:
    // 0x1b6864: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b6868:
    // 0x1b6868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b686c:
    // 0x1b686c: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b686cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
label_1b6870:
    // 0x1b6870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b6874:
    // 0x1b6874: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b6874u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b6878:
    // 0x1b6878: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
label_1b687c:
    if (ctx->pc == 0x1B687Cu) {
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6880u;
        goto label_1b6880;
    }
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6878u;
        // 0x1b687c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6894u;
            goto label_1b6894;
        }
    }
    ctx->pc = 0x1B6880u;
label_1b6880:
    // 0x1b6880: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b6884:
    // 0x1b6884: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1b6884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
label_1b6888:
    // 0x1b6888: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6888u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b688c:
    // 0x1b688c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b6890:
    // 0x1b6890: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b6890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b6894:
    // 0x1b6894: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1b6894u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1b6898:
    // 0x1b6898: 0x10000059  b           . + 4 + (0x59 << 2)
label_1b689c:
    if (ctx->pc == 0x1B689Cu) {
        ctx->pc = 0x1B689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6898u;
        // 0x1b689c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68A0u;
        goto label_1b68a0;
    }
    ctx->pc = 0x1B6898u;
    {
        const bool branch_taken_0x1b6898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6898u;
        // 0x1b689c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6898) {
            ctx->pc = 0x1B6A00u;
            goto label_1b6a00;
        }
    }
    ctx->pc = 0x1B68A0u;
label_1b68a0:
    // 0x1b68a0: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_1b68a4:
    if (ctx->pc == 0x1B68A4u) {
        ctx->pc = 0x1B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68A0u;
        // 0x1b68a4: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68A8u;
        goto label_1b68a8;
    }
    ctx->pc = 0x1B68A0u;
    {
        const bool branch_taken_0x1b68a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68A0u;
        // 0x1b68a4: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68a0) {
            ctx->pc = 0x1B68C8u;
            goto label_1b68c8;
        }
    }
    ctx->pc = 0x1B68A8u;
label_1b68a8:
    // 0x1b68a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b68ac:
    // 0x1b68ac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_1b68b0:
    if (ctx->pc == 0x1B68B0u) {
        ctx->pc = 0x1B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68ACu;
        // 0x1b68b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68B4u;
        goto label_1b68b4;
    }
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B68B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68ACu;
            // 0x1b68b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68B4u;
            goto label_1b68b4;
        }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1b68b4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b68b8:
    // 0x1b68b8: 0x1012  mflo        $v0
    ctx->pc = 0x1b68b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b68bc:
    // 0x1b68bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b68bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b68c0:
    // 0x1b68c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1b68c4:
    // 0x1b68c4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b68c8:
    // 0x1b68c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b68cc:
    if (ctx->pc == 0x1B68CCu) {
        ctx->pc = 0x1B68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68C8u;
        // 0x1b68cc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68D0u;
        goto label_1b68d0;
    }
    ctx->pc = 0x1B68C8u;
    {
        const bool branch_taken_0x1b68c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68C8u;
        // 0x1b68cc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68c8) {
            ctx->pc = 0x1B68E0u;
            goto label_1b68e0;
        }
    }
    ctx->pc = 0x1B68D0u;
label_1b68d0:
    // 0x1b68d0: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b68d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b68d4:
    // 0x1b68d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b68d8:
    // 0x1b68d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b68dc:
    if (ctx->pc == 0x1B68DCu) {
        ctx->pc = 0x1B68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68D8u;
        // 0x1b68dc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B68E0u;
        goto label_1b68e0;
    }
    ctx->pc = 0x1B68D8u;
    {
        const bool branch_taken_0x1b68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68D8u;
        // 0x1b68dc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68d8) {
            ctx->pc = 0x1B68F4u;
            goto label_1b68f4;
        }
    }
    ctx->pc = 0x1B68E0u;
label_1b68e0:
    // 0x1b68e0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b68e4:
    // 0x1b68e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b68e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b68e8:
    // 0x1b68e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b68ec:
    // 0x1b68ec: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b68ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b68f0:
    // 0x1b68f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b68f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b68f4:
    // 0x1b68f4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_1b68f8:
    // 0x1b68f8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b68f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b68fc:
    // 0x1b68fc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b6900:
    // 0x1b6900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b6904:
    // 0x1b6904: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b6904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
label_1b6908:
    // 0x1b6908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b690c:
    // 0x1b690c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b690cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b6910:
    // 0x1b6910: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
label_1b6914:
    if (ctx->pc == 0x1B6914u) {
        ctx->pc = 0x1B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6910u;
        // 0x1b6914: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6918u;
        goto label_1b6918;
    }
    ctx->pc = 0x1B6910u;
    {
        const bool branch_taken_0x1b6910 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6910u;
        // 0x1b6914: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6910) {
            ctx->pc = 0x1B6928u;
            goto label_1b6928;
        }
    }
    ctx->pc = 0x1B6918u;
label_1b6918:
    // 0x1b6918: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1b691c:
    // 0x1b691c: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b691cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1b6920:
    // 0x1b6920: 0x10000035  b           . + 4 + (0x35 << 2)
label_1b6924:
    if (ctx->pc == 0x1B6924u) {
        ctx->pc = 0x1B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6920u;
        // 0x1b6924: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6928u;
        goto label_1b6928;
    }
    ctx->pc = 0x1B6920u;
    {
        const bool branch_taken_0x1b6920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6920u;
        // 0x1b6924: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6920) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B6928u;
label_1b6928:
    // 0x1b6928: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b692c:
    // 0x1b692c: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
label_1b6930:
    // 0x1b6930: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b6934:
    // 0x1b6934: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
label_1b6938:
    // 0x1b6938: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b6938u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b693c:
    // 0x1b693c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b6940:
    // 0x1b6940: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1b6944:
    // 0x1b6944: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b6944u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b6948:
    // 0x1b6948: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_1b694c:
    // 0x1b694c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1b6950:
    // 0x1b6950: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1b6950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6954:
    // 0x1b6954: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_1b6958:
    if (ctx->pc == 0x1B6958u) {
        ctx->pc = 0x1B6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6954u;
        // 0x1b6958: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B695Cu;
        goto label_1b695c;
    }
    ctx->pc = 0x1B6954u;
    {
        const bool branch_taken_0x1b6954 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6954) {
            ctx->pc = 0x1B6958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6954u;
            // 0x1b6958: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B695Cu;
            goto label_1b695c;
        }
    }
    ctx->pc = 0x1B695Cu;
label_1b695c:
    // 0x1b695c: 0x1012  mflo        $v0
    ctx->pc = 0x1b695cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6960:
    // 0x1b6960: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6960u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6964:
    // 0x1b6964: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1b6964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b6968:
    // 0x1b6968: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b696c:
    // 0x1b696c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6970:
    // 0x1b6970: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6974:
    // 0x1b6974: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b6978:
    if (ctx->pc == 0x1B6978u) {
        ctx->pc = 0x1B6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6974u;
        // 0x1b6978: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B697Cu;
        goto label_1b697c;
    }
    ctx->pc = 0x1B6974u;
    {
        const bool branch_taken_0x1b6974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6974u;
        // 0x1b6978: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6974) {
            ctx->pc = 0x1B69A0u;
            goto label_1b69a0;
        }
    }
    ctx->pc = 0x1B697Cu;
label_1b697c:
    // 0x1b697c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1b697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1b6980:
    // 0x1b6980: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1b6980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6984:
    // 0x1b6984: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b6988:
    if (ctx->pc == 0x1B6988u) {
        ctx->pc = 0x1B6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6984u;
        // 0x1b6988: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B698Cu;
        goto label_1b698c;
    }
    ctx->pc = 0x1B6984u;
    {
        const bool branch_taken_0x1b6984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6984) {
            ctx->pc = 0x1B6988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6984u;
            // 0x1b6988: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B69A4u;
            goto label_1b69a4;
        }
    }
    ctx->pc = 0x1B698Cu;
label_1b698c:
    // 0x1b698c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6990:
    // 0x1b6990: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1b6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1b6994:
    // 0x1b6994: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b6998:
    // 0x1b6998: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b6998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1b699c:
    // 0x1b699c: 0x0  nop
    ctx->pc = 0x1b699cu;
    // NOP
label_1b69a0:
    // 0x1b69a0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1b69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1b69a4:
    // 0x1b69a4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b69a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1b69a8:
    // 0x1b69a8: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1b69a8u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1b69ac:
    // 0x1b69ac: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_1b69b0:
    if (ctx->pc == 0x1B69B0u) {
        ctx->pc = 0x1B69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69ACu;
        // 0x1b69b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69B4u;
        goto label_1b69b4;
    }
    ctx->pc = 0x1B69ACu;
    {
        const bool branch_taken_0x1b69ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69ac) {
            ctx->pc = 0x1B69B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B69ACu;
            // 0x1b69b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B69B4u;
            goto label_1b69b4;
        }
    }
    ctx->pc = 0x1B69B4u;
label_1b69b4:
    // 0x1b69b4: 0x1012  mflo        $v0
    ctx->pc = 0x1b69b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b69b8:
    // 0x1b69b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b69bc:
    // 0x1b69bc: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1b69bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b69c0:
    // 0x1b69c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b69c4:
    // 0x1b69c4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b69c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b69c8:
    // 0x1b69c8: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b69c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b69cc:
    // 0x1b69cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b69d0:
    if (ctx->pc == 0x1B69D0u) {
        ctx->pc = 0x1B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69CCu;
        // 0x1b69d0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69D4u;
        goto label_1b69d4;
    }
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69CCu;
        // 0x1b69d0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69D4u;
label_1b69d4:
    // 0x1b69d4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b69d8:
    // 0x1b69d8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b69d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b69dc:
    // 0x1b69dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b69e0:
    if (ctx->pc == 0x1B69E0u) {
        ctx->pc = 0x1B69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69DCu;
        // 0x1b69e0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B69E4u;
        goto label_1b69e4;
    }
    ctx->pc = 0x1B69DCu;
    {
        const bool branch_taken_0x1b69dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69DCu;
        // 0x1b69e0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69dc) {
            ctx->pc = 0x1B69F8u;
            goto label_1b69f8;
        }
    }
    ctx->pc = 0x1B69E4u;
label_1b69e4:
    // 0x1b69e4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b69e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b69e8:
    // 0x1b69e8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b69ec:
    // 0x1b69ec: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b69ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b69f0:
    // 0x1b69f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b69f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b69f4:
    // 0x1b69f4: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1b69f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1b69f8:
    // 0x1b69f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b69f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b69fc:
    // 0x1b69fc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a00:
    // 0x1b6a00: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b6a00u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1b6a04:
    // 0x1b6a04: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1b6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_1b6a08:
    // 0x1b6a08: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6a0c:
    if (ctx->pc == 0x1B6A0Cu) {
        ctx->pc = 0x1B6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A08u;
        // 0x1b6a0c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A10u;
        goto label_1b6a10;
    }
    ctx->pc = 0x1B6A08u;
    {
        const bool branch_taken_0x1b6a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a08) {
            ctx->pc = 0x1B6A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A08u;
            // 0x1b6a0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A10u;
            goto label_1b6a10;
        }
    }
    ctx->pc = 0x1B6A10u;
label_1b6a10:
    // 0x1b6a10: 0x1012  mflo        $v0
    ctx->pc = 0x1b6a10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6a14:
    // 0x1b6a14: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6a14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6a18:
    // 0x1b6a18: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b6a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b6a1c:
    // 0x1b6a1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6a20:
    // 0x1b6a20: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6a24:
    // 0x1b6a24: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6a28:
    // 0x1b6a28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1b6a2c:
    if (ctx->pc == 0x1B6A2Cu) {
        ctx->pc = 0x1B6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A28u;
        // 0x1b6a2c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A30u;
        goto label_1b6a30;
    }
    ctx->pc = 0x1B6A28u;
    {
        const bool branch_taken_0x1b6a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a28) {
            ctx->pc = 0x1B6A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A28u;
            // 0x1b6a2c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A30u;
label_1b6a30:
    // 0x1b6a30: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1b6a34:
    // 0x1b6a34: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6a38:
    // 0x1b6a38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1b6a3c:
    if (ctx->pc == 0x1B6A3Cu) {
        ctx->pc = 0x1B6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A38u;
        // 0x1b6a3c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A40u;
        goto label_1b6a40;
    }
    ctx->pc = 0x1B6A38u;
    {
        const bool branch_taken_0x1b6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a38) {
            ctx->pc = 0x1B6A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A38u;
            // 0x1b6a3c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A40u;
label_1b6a40:
    // 0x1b6a40: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6a44:
    // 0x1b6a44: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1b6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1b6a48:
    // 0x1b6a48: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b6a4c:
    // 0x1b6a4c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1b6a4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1b6a50:
    // 0x1b6a50: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6a54:
    // 0x1b6a54: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1b6a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_1b6a58:
    // 0x1b6a58: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1b6a58u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_1b6a5c:
    // 0x1b6a5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6a60:
    if (ctx->pc == 0x1B6A60u) {
        ctx->pc = 0x1B6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A5Cu;
        // 0x1b6a60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A64u;
        goto label_1b6a64;
    }
    ctx->pc = 0x1B6A5Cu;
    {
        const bool branch_taken_0x1b6a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a5c) {
            ctx->pc = 0x1B6A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A5Cu;
            // 0x1b6a60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A64u;
            goto label_1b6a64;
        }
    }
    ctx->pc = 0x1B6A64u;
label_1b6a64:
    // 0x1b6a64: 0x1012  mflo        $v0
    ctx->pc = 0x1b6a64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6a68:
    // 0x1b6a68: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6a6c:
    // 0x1b6a6c: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b6a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b6a70:
    // 0x1b6a70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6a74:
    // 0x1b6a74: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6a78:
    // 0x1b6a78: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b6a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6a7c:
    // 0x1b6a7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b6a80:
    if (ctx->pc == 0x1B6A80u) {
        ctx->pc = 0x1B6A84u;
        goto label_1b6a84;
    }
    ctx->pc = 0x1B6A7Cu;
    {
        const bool branch_taken_0x1b6a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a7c) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A84u;
label_1b6a84:
    // 0x1b6a84: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b6a88:
    // 0x1b6a88: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b6a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6a8c:
    // 0x1b6a8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b6a90:
    if (ctx->pc == 0x1B6A90u) {
        ctx->pc = 0x1B6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A8Cu;
        // 0x1b6a90: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6A94u;
        goto label_1b6a94;
    }
    ctx->pc = 0x1B6A8Cu;
    {
        const bool branch_taken_0x1b6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A8Cu;
        // 0x1b6a90: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a8c) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A94u;
label_1b6a94:
    // 0x1b6a94: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b6a98:
    // 0x1b6a98: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b6a9c:
    // 0x1b6a9c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6a9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b6aa0:
    // 0x1b6aa0: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
label_1b6aa4:
    if (ctx->pc == 0x1B6AA4u) {
        ctx->pc = 0x1B6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AA0u;
        // 0x1b6aa4: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AA8u;
        goto label_1b6aa8;
    }
    ctx->pc = 0x1B6AA0u;
    {
        const bool branch_taken_0x1b6aa0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AA0u;
        // 0x1b6aa4: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aa0) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6AA8u;
label_1b6aa8:
    // 0x1b6aa8: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b6aac:
    // 0x1b6aac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6ab0:
    // 0x1b6ab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6ab4:
    // 0x1b6ab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b6ab8:
    // 0x1b6ab8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6ab8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6abc:
    // 0x1b6abc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6ac0:
    // 0x1b6ac0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b6ac4:
    // 0x1b6ac4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b6ac8:
    // 0x1b6ac8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6ac8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b6acc:
    // 0x1b6acc: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1b6ad0:
    if (ctx->pc == 0x1B6AD0u) {
        ctx->pc = 0x1B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ACCu;
        // 0x1b6ad0: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AD4u;
        goto label_1b6ad4;
    }
    ctx->pc = 0x1B6ACCu;
    {
        const bool branch_taken_0x1b6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ACCu;
        // 0x1b6ad0: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6acc) {
            ctx->pc = 0x1B6D50u;
            goto label_1b6d50;
        }
    }
    ctx->pc = 0x1B6AD4u;
label_1b6ad4:
    // 0x1b6ad4: 0x0  nop
    ctx->pc = 0x1b6ad4u;
    // NOP
label_1b6ad8:
    // 0x1b6ad8: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b6ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6adc:
    // 0x1b6adc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b6ae0:
    if (ctx->pc == 0x1B6AE0u) {
        ctx->pc = 0x1B6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ADCu;
        // 0x1b6ae0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6AE4u;
        goto label_1b6ae4;
    }
    ctx->pc = 0x1B6ADCu;
    {
        const bool branch_taken_0x1b6adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ADCu;
        // 0x1b6ae0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6adc) {
            ctx->pc = 0x1B6B18u;
            goto label_1b6b18;
        }
    }
    ctx->pc = 0x1B6AE4u;
label_1b6ae4:
    // 0x1b6ae4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6ae8:
    // 0x1b6ae8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6aec:
    // 0x1b6aec: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1b6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
label_1b6af0:
    // 0x1b6af0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6af4:
    // 0x1b6af4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6af4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6af8:
    // 0x1b6af8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b6afc:
    // 0x1b6afc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1b6b00:
    // 0x1b6b00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b6b04:
    // 0x1b6b04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b6b08:
    // 0x1b6b08: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6b08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6b0c:
    // 0x1b6b0c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6b0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b6b10:
    // 0x1b6b10: 0x10000090  b           . + 4 + (0x90 << 2)
label_1b6b14:
    if (ctx->pc == 0x1B6B14u) {
        ctx->pc = 0x1B6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B10u;
        // 0x1b6b14: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B18u;
        goto label_1b6b18;
    }
    ctx->pc = 0x1B6B10u;
    {
        const bool branch_taken_0x1b6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B10u;
        // 0x1b6b14: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b10) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6B18u;
label_1b6b18:
    // 0x1b6b18: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b6b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6b1c:
    // 0x1b6b1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b6b20:
    if (ctx->pc == 0x1B6B20u) {
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B24u;
        goto label_1b6b24;
    }
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B38u;
            goto label_1b6b38;
        }
    }
    ctx->pc = 0x1B6B24u;
label_1b6b24:
    // 0x1b6b24: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b6b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b6b28:
    // 0x1b6b28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b6b2c:
    // 0x1b6b2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b6b30:
    if (ctx->pc == 0x1B6B30u) {
        ctx->pc = 0x1B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B2Cu;
        // 0x1b6b30: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B34u;
        goto label_1b6b34;
    }
    ctx->pc = 0x1B6B2Cu;
    {
        const bool branch_taken_0x1b6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B2Cu;
        // 0x1b6b30: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b2c) {
            ctx->pc = 0x1B6B4Cu;
            goto label_1b6b4c;
        }
    }
    ctx->pc = 0x1B6B34u;
label_1b6b34:
    // 0x1b6b34: 0x0  nop
    ctx->pc = 0x1b6b34u;
    // NOP
label_1b6b38:
    // 0x1b6b38: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b6b3c:
    // 0x1b6b3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6b40:
    // 0x1b6b40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b6b44:
    // 0x1b6b44: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b6b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6b48:
    // 0x1b6b48: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6b48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b6b4c:
    // 0x1b6b4c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
label_1b6b50:
    // 0x1b6b50: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b6b54:
    // 0x1b6b54: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b6b58:
    // 0x1b6b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b6b5c:
    // 0x1b6b5c: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
label_1b6b60:
    // 0x1b6b60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b6b64:
    // 0x1b6b64: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b6b64u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b6b68:
    // 0x1b6b68: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
label_1b6b6c:
    if (ctx->pc == 0x1B6B6Cu) {
        ctx->pc = 0x1B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B68u;
        // 0x1b6b6c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B70u;
        goto label_1b6b70;
    }
    ctx->pc = 0x1B6B68u;
    {
        const bool branch_taken_0x1b6b68 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B68u;
        // 0x1b6b6c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b68) {
            ctx->pc = 0x1B6BD0u;
            goto label_1b6bd0;
        }
    }
    ctx->pc = 0x1B6B70u;
label_1b6b70:
    // 0x1b6b70: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1b6b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_1b6b74:
    // 0x1b6b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b6b78:
    if (ctx->pc == 0x1B6B78u) {
        ctx->pc = 0x1B6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B74u;
        // 0x1b6b78: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B7Cu;
        goto label_1b6b7c;
    }
    ctx->pc = 0x1B6B74u;
    {
        const bool branch_taken_0x1b6b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B74u;
        // 0x1b6b78: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b74) {
            ctx->pc = 0x1B6B88u;
            goto label_1b6b88;
        }
    }
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1b6b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6b80:
    // 0x1b6b80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b6b84:
    if (ctx->pc == 0x1B6B84u) {
        ctx->pc = 0x1B6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B80u;
        // 0x1b6b84: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6B88u;
        goto label_1b6b88;
    }
    ctx->pc = 0x1B6B80u;
    {
        const bool branch_taken_0x1b6b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B80u;
        // 0x1b6b84: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b80) {
            ctx->pc = 0x1B6B98u;
            goto label_1b6b98;
        }
    }
    ctx->pc = 0x1B6B88u;
label_1b6b88:
    // 0x1b6b88: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1b6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1b6b8c:
    // 0x1b6b8c: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1b6b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b6b90:
    // 0x1b6b90: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1b6b90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b94:
    // 0x1b6b94: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1b6b94u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b6b98:
    // 0x1b6b98: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
label_1b6b9c:
    if (ctx->pc == 0x1B6B9Cu) {
        ctx->pc = 0x1B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B98u;
        // 0x1b6b9c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BA0u;
        goto label_1b6ba0;
    }
    ctx->pc = 0x1B6B98u;
    {
        const bool branch_taken_0x1b6b98 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B98u;
        // 0x1b6b9c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b98) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6BA0u;
label_1b6ba0:
    // 0x1b6ba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6ba4:
    // 0x1b6ba4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6ba8:
    // 0x1b6ba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6bac:
    // 0x1b6bac: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6bacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6bb0:
    // 0x1b6bb0: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b6bb4:
    // 0x1b6bb4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b6bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1b6bb8:
    // 0x1b6bb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b6bbc:
    // 0x1b6bbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b6bc0:
    // 0x1b6bc0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6bc4:
    // 0x1b6bc4: 0x10000062  b           . + 4 + (0x62 << 2)
label_1b6bc8:
    if (ctx->pc == 0x1B6BC8u) {
        ctx->pc = 0x1B6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC4u;
        // 0x1b6bc8: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6BCCu;
        goto label_1b6bcc;
    }
    ctx->pc = 0x1B6BC4u;
    {
        const bool branch_taken_0x1b6bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC4u;
        // 0x1b6bc8: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bc4) {
            ctx->pc = 0x1B6D50u;
            goto label_1b6d50;
        }
    }
    ctx->pc = 0x1B6BCCu;
label_1b6bcc:
    // 0x1b6bcc: 0x0  nop
    ctx->pc = 0x1b6bccu;
    // NOP
label_1b6bd0:
    // 0x1b6bd0: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b6bd4:
    // 0x1b6bd4: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
label_1b6bd8:
    // 0x1b6bd8: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1b6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
label_1b6bdc:
    // 0x1b6bdc: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1b6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
label_1b6be0:
    // 0x1b6be0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6be0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b6be4:
    // 0x1b6be4: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b6be8:
    // 0x1b6be8: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
label_1b6bec:
    // 0x1b6bec: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b6becu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b6bf0:
    // 0x1b6bf0: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1b6bf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1b6bf4:
    // 0x1b6bf4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1b6bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1b6bf8:
    // 0x1b6bf8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1b6bf8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b6bfc:
    // 0x1b6bfc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_1b6c00:
    // 0x1b6c00: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1b6c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1b6c04:
    // 0x1b6c04: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6c08:
    if (ctx->pc == 0x1B6C08u) {
        ctx->pc = 0x1B6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C04u;
        // 0x1b6c08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C0Cu;
        goto label_1b6c0c;
    }
    ctx->pc = 0x1B6C04u;
    {
        const bool branch_taken_0x1b6c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c04) {
            ctx->pc = 0x1B6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C04u;
            // 0x1b6c08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C0Cu;
            goto label_1b6c0c;
        }
    }
    ctx->pc = 0x1B6C0Cu;
label_1b6c0c:
    // 0x1b6c0c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6c10:
    // 0x1b6c10: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6c10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6c14:
    // 0x1b6c14: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1b6c14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c18:
    // 0x1b6c18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6c1c:
    // 0x1b6c1c: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1b6c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b6c20:
    // 0x1b6c20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6c24:
    // 0x1b6c24: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6c28:
    // 0x1b6c28: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b6c2c:
    if (ctx->pc == 0x1B6C2Cu) {
        ctx->pc = 0x1B6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C28u;
        // 0x1b6c2c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C30u;
        goto label_1b6c30;
    }
    ctx->pc = 0x1B6C28u;
    {
        const bool branch_taken_0x1b6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c28) {
            ctx->pc = 0x1B6C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C28u;
            // 0x1b6c2c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C5Cu;
            goto label_1b6c5c;
        }
    }
    ctx->pc = 0x1B6C30u;
label_1b6c30:
    // 0x1b6c30: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b6c34:
    // 0x1b6c34: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b6c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6c38:
    // 0x1b6c38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b6c3c:
    if (ctx->pc == 0x1B6C3Cu) {
        ctx->pc = 0x1B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C38u;
        // 0x1b6c3c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C40u;
        goto label_1b6c40;
    }
    ctx->pc = 0x1B6C38u;
    {
        const bool branch_taken_0x1b6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C38u;
        // 0x1b6c3c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c38) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B6C40u;
label_1b6c40:
    // 0x1b6c40: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6c44:
    // 0x1b6c44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b6c48:
    if (ctx->pc == 0x1B6C48u) {
        ctx->pc = 0x1B6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C44u;
        // 0x1b6c48: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C4Cu;
        goto label_1b6c4c;
    }
    ctx->pc = 0x1B6C44u;
    {
        const bool branch_taken_0x1b6c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c44) {
            ctx->pc = 0x1B6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C44u;
            // 0x1b6c48: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C5Cu;
            goto label_1b6c5c;
        }
    }
    ctx->pc = 0x1B6C4Cu;
label_1b6c4c:
    // 0x1b6c4c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_1b6c50:
    // 0x1b6c50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b6c54:
    // 0x1b6c54: 0x0  nop
    ctx->pc = 0x1b6c54u;
    // NOP
label_1b6c58:
    // 0x1b6c58: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1b6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6c5c:
    // 0x1b6c5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6c60:
    if (ctx->pc == 0x1B6C60u) {
        ctx->pc = 0x1B6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C5Cu;
        // 0x1b6c60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C64u;
        goto label_1b6c64;
    }
    ctx->pc = 0x1B6C5Cu;
    {
        const bool branch_taken_0x1b6c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c5c) {
            ctx->pc = 0x1B6C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C5Cu;
            // 0x1b6c60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C64u;
            goto label_1b6c64;
        }
    }
    ctx->pc = 0x1B6C64u;
label_1b6c64:
    // 0x1b6c64: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b6c64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1b6c68:
    // 0x1b6c68: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b6c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1b6c6c:
    // 0x1b6c6c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6c70:
    // 0x1b6c70: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6c70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6c74:
    // 0x1b6c74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b6c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c78:
    // 0x1b6c78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6c7c:
    // 0x1b6c7c: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1b6c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b6c80:
    // 0x1b6c80: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6c84:
    // 0x1b6c84: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6c88:
    // 0x1b6c88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1b6c8c:
    if (ctx->pc == 0x1B6C8Cu) {
        ctx->pc = 0x1B6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C88u;
        // 0x1b6c8c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6C90u;
        goto label_1b6c90;
    }
    ctx->pc = 0x1B6C88u;
    {
        const bool branch_taken_0x1b6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c88) {
            ctx->pc = 0x1B6C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C88u;
            // 0x1b6c8c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6C90u;
label_1b6c90:
    // 0x1b6c90: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1b6c94:
    // 0x1b6c94: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1b6c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6c98:
    // 0x1b6c98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b6c9c:
    if (ctx->pc == 0x1B6C9Cu) {
        ctx->pc = 0x1B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C98u;
        // 0x1b6c9c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CA0u;
        goto label_1b6ca0;
    }
    ctx->pc = 0x1B6C98u;
    {
        const bool branch_taken_0x1b6c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C98u;
        // 0x1b6c9c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c98) {
            ctx->pc = 0x1B6CB4u;
            goto label_1b6cb4;
        }
    }
    ctx->pc = 0x1B6CA0u;
label_1b6ca0:
    // 0x1b6ca0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6ca4:
    // 0x1b6ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b6ca8:
    if (ctx->pc == 0x1B6CA8u) {
        ctx->pc = 0x1B6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CA4u;
        // 0x1b6ca8: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CACu;
        goto label_1b6cac;
    }
    ctx->pc = 0x1B6CA4u;
    {
        const bool branch_taken_0x1b6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ca4) {
            ctx->pc = 0x1B6CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CA4u;
            // 0x1b6ca8: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6CACu;
label_1b6cac:
    // 0x1b6cac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b6cb0:
    // 0x1b6cb0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1b6cb4:
    // 0x1b6cb4: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6cb8:
    // 0x1b6cb8: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1b6cbc:
    // 0x1b6cbc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1b6cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1b6cc0:
    // 0x1b6cc0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1b6cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cc4:
    // 0x1b6cc4: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1b6cc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b6cc8:
    // 0x1b6cc8: 0x3010  mfhi        $a2
    ctx->pc = 0x1b6cc8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1b6ccc:
    // 0x1b6ccc: 0x4012  mflo        $t0
    ctx->pc = 0x1b6cccu;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_1b6cd0:
    // 0x1b6cd0: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1b6cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b6cd4:
    // 0x1b6cd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b6cd8:
    if (ctx->pc == 0x1B6CD8u) {
        ctx->pc = 0x1B6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CD4u;
        // 0x1b6cd8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CDCu;
        goto label_1b6cdc;
    }
    ctx->pc = 0x1B6CD4u;
    {
        const bool branch_taken_0x1b6cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CD4u;
        // 0x1b6cd8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cd4) {
            ctx->pc = 0x1B6CF0u;
            goto label_1b6cf0;
        }
    }
    ctx->pc = 0x1B6CDCu;
label_1b6cdc:
    // 0x1b6cdc: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
label_1b6ce0:
    if (ctx->pc == 0x1B6CE0u) {
        ctx->pc = 0x1B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CDCu;
        // 0x1b6ce0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CE4u;
        goto label_1b6ce4;
    }
    ctx->pc = 0x1B6CDCu;
    {
        const bool branch_taken_0x1b6cdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CDCu;
        // 0x1b6ce0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cdc) {
            ctx->pc = 0x1B6D00u;
            goto label_1b6d00;
        }
    }
    ctx->pc = 0x1B6CE4u;
label_1b6ce4:
    // 0x1b6ce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b6ce8:
    if (ctx->pc == 0x1B6CE8u) {
        ctx->pc = 0x1B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE4u;
        // 0x1b6ce8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CECu;
        goto label_1b6cec;
    }
    ctx->pc = 0x1B6CE4u;
    {
        const bool branch_taken_0x1b6ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE4u;
        // 0x1b6ce8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ce4) {
            ctx->pc = 0x1B6D00u;
            goto label_1b6d00;
        }
    }
    ctx->pc = 0x1B6CECu;
label_1b6cec:
    // 0x1b6cec: 0x0  nop
    ctx->pc = 0x1b6cecu;
    // NOP
label_1b6cf0:
    // 0x1b6cf0: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1b6cf4:
    // 0x1b6cf4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1b6cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b6cf8:
    // 0x1b6cf8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b6cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cfc:
    // 0x1b6cfc: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1b6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b6d00:
    // 0x1b6d00: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
label_1b6d04:
    if (ctx->pc == 0x1B6D04u) {
        ctx->pc = 0x1B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D00u;
        // 0x1b6d04: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6D08u;
        goto label_1b6d08;
    }
    ctx->pc = 0x1B6D00u;
    {
        const bool branch_taken_0x1b6d00 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D00u;
        // 0x1b6d04: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d00) {
            ctx->pc = 0x1B6D54u;
            goto label_1b6d54;
        }
    }
    ctx->pc = 0x1B6D08u;
label_1b6d08:
    // 0x1b6d08: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b6d0c:
    // 0x1b6d0c: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1b6d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b6d10:
    // 0x1b6d10: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b6d14:
    // 0x1b6d14: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
label_1b6d18:
    // 0x1b6d18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6d1c:
    // 0x1b6d1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6d20:
    // 0x1b6d20: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
label_1b6d24:
    // 0x1b6d24: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6d24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6d28:
    // 0x1b6d28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b6d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1b6d2c:
    // 0x1b6d2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1b6d30:
    // 0x1b6d30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1b6d34:
    // 0x1b6d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b6d38:
    // 0x1b6d38: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1b6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b6d3c:
    // 0x1b6d3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6d40:
    // 0x1b6d40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6d44:
    // 0x1b6d44: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6d44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b6d48:
    // 0x1b6d48: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1b6d48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
label_1b6d4c:
    // 0x1b6d4c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1b6d4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_1b6d50:
    // 0x1b6d50: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x1b6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
label_1b6d54:
    // 0x1b6d54: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1b6d54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6d58:
    // 0x1b6d58: 0x3e00008  jr          $ra
label_1b6d5c:
    if (ctx->pc == 0x1B6D5Cu) {
        ctx->pc = 0x1B6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D58u;
        // 0x1b6d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6D60u;
        goto label_1b6d60;
    }
    ctx->pc = 0x1B6D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D58u;
        // 0x1b6d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D60u;
label_1b6d60:
    // 0x1b6d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b6d64:
    // 0x1b6d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b6d68:
    // 0x1b6d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d6c:
    // 0x1b6d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b6d70:
    // 0x1b6d70: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1b6d70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
label_1b6d74:
    // 0x1b6d74: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x1b6d74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
label_1b6d78:
    // 0x1b6d78: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x1b6d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
label_1b6d7c:
    // 0x1b6d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b6d80:
    // 0x1b6d80: 0xc06df0a  jal         func_1B7C28
label_1b6d84:
    if (ctx->pc == 0x1B6D84u) {
        ctx->pc = 0x1B6D88u;
        goto label_1b6d88;
    }
    ctx->pc = 0x1B6D80u;
    SET_GPR_U32(ctx, 31, 0x1B6D88u);
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x1B6D88u;
label_1b6d88:
    // 0x1b6d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d8c:
    // 0x1b6d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d90:
    // 0x1b6d90: 0xc06dda4  jal         func_1B7690
label_1b6d94:
    if (ctx->pc == 0x1B6D94u) {
        ctx->pc = 0x1B6D98u;
        goto label_1b6d98;
    }
    ctx->pc = 0x1B6D90u;
    SET_GPR_U32(ctx, 31, 0x1B6D98u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6D98u;
label_1b6d98:
    // 0x1b6d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d9c:
    // 0x1b6d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6da0:
    // 0x1b6da0: 0xc06dda4  jal         func_1B7690
label_1b6da4:
    if (ctx->pc == 0x1B6DA4u) {
        ctx->pc = 0x1B6DA8u;
        goto label_1b6da8;
    }
    ctx->pc = 0x1B6DA0u;
    SET_GPR_U32(ctx, 31, 0x1B6DA8u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6DA8u;
label_1b6da8:
    // 0x1b6da8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6dac:
    // 0x1b6dac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b6db0:
    // 0x1b6db0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6db4:
    // 0x1b6db4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1b6db8:
    // 0x1b6db8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1b6db8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1b6dbc:
    // 0x1b6dbc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1b6dbcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1b6dc0:
    // 0x1b6dc0: 0xc06df0a  jal         func_1B7C28
label_1b6dc4:
    if (ctx->pc == 0x1B6DC4u) {
        ctx->pc = 0x1B6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DC0u;
        // 0x1b6dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6DC8u;
        goto label_1b6dc8;
    }
    ctx->pc = 0x1B6DC0u;
    SET_GPR_U32(ctx, 31, 0x1B6DC8u);
    ctx->pc = 0x1B6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DC0u;
    // 0x1b6dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x1B6DC8u;
label_1b6dc8:
    // 0x1b6dc8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1b6dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
label_1b6dcc:
    // 0x1b6dcc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b6dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1b6dd0:
    // 0x1b6dd0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1b6dd4:
    if (ctx->pc == 0x1B6DD4u) {
        ctx->pc = 0x1B6DD8u;
        goto label_1b6dd8;
    }
    ctx->pc = 0x1B6DD0u;
    {
        const bool branch_taken_0x1b6dd0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b6dd0) {
            ctx->pc = 0x1B6DE4u;
            goto label_1b6de4;
        }
    }
    ctx->pc = 0x1B6DD8u;
label_1b6dd8:
    // 0x1b6dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ddc:
    // 0x1b6ddc: 0xc06dd74  jal         func_1B75D0
label_1b6de0:
    if (ctx->pc == 0x1B6DE0u) {
        ctx->pc = 0x1B6DE4u;
        goto label_1b6de4;
    }
    ctx->pc = 0x1B6DDCu;
    SET_GPR_U32(ctx, 31, 0x1B6DE4u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x1B6DE4u;
label_1b6de4:
    // 0x1b6de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6de8:
    // 0x1b6de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6dec:
    // 0x1b6dec: 0xc06dd74  jal         func_1B75D0
label_1b6df0:
    if (ctx->pc == 0x1B6DF0u) {
        ctx->pc = 0x1B6DF4u;
        goto label_1b6df4;
    }
    ctx->pc = 0x1B6DECu;
    SET_GPR_U32(ctx, 31, 0x1B6DF4u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x1B6DF4u;
label_1b6df4:
    // 0x1b6df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6df8:
    // 0x1b6df8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b6dfc:
    // 0x1b6dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6e00:
    // 0x1b6e00: 0x3e00008  jr          $ra
label_1b6e04:
    if (ctx->pc == 0x1B6E04u) {
        ctx->pc = 0x1B6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E00u;
        // 0x1b6e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E08u;
        goto label_1b6e08;
    }
    ctx->pc = 0x1B6E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E00u;
        // 0x1b6e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E08u;
label_1b6e08:
    // 0x1b6e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b6e0c:
    // 0x1b6e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6e10:
    // 0x1b6e10: 0x212fa  dsrl        $v0, $v0, 11
    ctx->pc = 0x1b6e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 11);
label_1b6e14:
    // 0x1b6e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b6e18:
    // 0x1b6e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e1c:
    // 0x1b6e1c: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1b6e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_1b6e20:
    // 0x1b6e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6e24:
    // 0x1b6e24: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x1b6e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
label_1b6e28:
    // 0x1b6e28: 0x31aba  dsrl        $v1, $v1, 10
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 10);
label_1b6e2c:
    // 0x1b6e2c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1b6e2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b6e30:
    // 0x1b6e30: 0x322207ff  andi        $v0, $s1, 0x7FF
    ctx->pc = 0x1b6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2047);
label_1b6e34:
    // 0x1b6e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b6e38:
    // 0x1b6e38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b6e3c:
    // 0x1b6e3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b6e40:
    if (ctx->pc == 0x1B6E40u) {
        ctx->pc = 0x1B6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E3Cu;
        // 0x1b6e40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E44u;
        goto label_1b6e44;
    }
    ctx->pc = 0x1B6E3Cu;
    {
        const bool branch_taken_0x1b6e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E3Cu;
        // 0x1b6e40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e3c) {
            ctx->pc = 0x1B6E50u;
            goto label_1b6e50;
        }
    }
    ctx->pc = 0x1B6E44u;
label_1b6e44:
    // 0x1b6e44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b6e48:
    if (ctx->pc == 0x1B6E48u) {
        ctx->pc = 0x1B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E44u;
        // 0x1b6e48: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E4Cu;
        goto label_1b6e4c;
    }
    ctx->pc = 0x1B6E44u;
    {
        const bool branch_taken_0x1b6e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E44u;
        // 0x1b6e48: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e44) {
            ctx->pc = 0x1B6E50u;
            goto label_1b6e50;
        }
    }
    ctx->pc = 0x1B6E4Cu;
label_1b6e4c:
    // 0x1b6e4c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1b6e4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1b6e50:
    // 0x1b6e50: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x1b6e50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
label_1b6e54:
    // 0x1b6e54: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
label_1b6e58:
    // 0x1b6e58: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x1b6e58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
label_1b6e5c:
    // 0x1b6e5c: 0xc06df0a  jal         func_1B7C28
label_1b6e60:
    if (ctx->pc == 0x1B6E60u) {
        ctx->pc = 0x1B6E64u;
        goto label_1b6e64;
    }
    ctx->pc = 0x1B6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E64u);
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x1B6E64u;
label_1b6e64:
    // 0x1b6e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e68:
    // 0x1b6e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e6c:
    // 0x1b6e6c: 0xc06dda4  jal         func_1B7690
label_1b6e70:
    if (ctx->pc == 0x1B6E70u) {
        ctx->pc = 0x1B6E74u;
        goto label_1b6e74;
    }
    ctx->pc = 0x1B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E74u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6E74u;
label_1b6e74:
    // 0x1b6e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e78:
    // 0x1b6e78: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1b6e7c:
    // 0x1b6e7c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b6e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_1b6e80:
    // 0x1b6e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e84:
    // 0x1b6e84: 0xc06dda4  jal         func_1B7690
label_1b6e88:
    if (ctx->pc == 0x1B6E88u) {
        ctx->pc = 0x1B6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E84u;
        // 0x1b6e88: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E8Cu;
        goto label_1b6e8c;
    }
    ctx->pc = 0x1B6E84u;
    SET_GPR_U32(ctx, 31, 0x1B6E8Cu);
    ctx->pc = 0x1B6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E84u;
    // 0x1b6e88: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6E8Cu;
label_1b6e8c:
    // 0x1b6e8c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1b6e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    ctx->pc = 0x1b6e90u;
    return;
}
