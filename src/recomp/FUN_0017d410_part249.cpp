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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part249(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f6590u: goto label_1f6590;
        case 0x1f6594u: goto label_1f6594;
        case 0x1f6598u: goto label_1f6598;
        case 0x1f659cu: goto label_1f659c;
        case 0x1f65a0u: goto label_1f65a0;
        case 0x1f65a4u: goto label_1f65a4;
        case 0x1f65a8u: goto label_1f65a8;
        case 0x1f65acu: goto label_1f65ac;
        case 0x1f65b0u: goto label_1f65b0;
        case 0x1f65b4u: goto label_1f65b4;
        case 0x1f65b8u: goto label_1f65b8;
        case 0x1f65bcu: goto label_1f65bc;
        case 0x1f65c0u: goto label_1f65c0;
        case 0x1f65c4u: goto label_1f65c4;
        case 0x1f65c8u: goto label_1f65c8;
        case 0x1f65ccu: goto label_1f65cc;
        case 0x1f65d0u: goto label_1f65d0;
        case 0x1f65d4u: goto label_1f65d4;
        case 0x1f65d8u: goto label_1f65d8;
        case 0x1f65dcu: goto label_1f65dc;
        case 0x1f65e0u: goto label_1f65e0;
        case 0x1f65e4u: goto label_1f65e4;
        case 0x1f65e8u: goto label_1f65e8;
        case 0x1f65ecu: goto label_1f65ec;
        case 0x1f65f0u: goto label_1f65f0;
        case 0x1f65f4u: goto label_1f65f4;
        case 0x1f65f8u: goto label_1f65f8;
        case 0x1f65fcu: goto label_1f65fc;
        case 0x1f6600u: goto label_1f6600;
        case 0x1f6604u: goto label_1f6604;
        case 0x1f6608u: goto label_1f6608;
        case 0x1f660cu: goto label_1f660c;
        case 0x1f6610u: goto label_1f6610;
        case 0x1f6614u: goto label_1f6614;
        case 0x1f6618u: goto label_1f6618;
        case 0x1f661cu: goto label_1f661c;
        case 0x1f6620u: goto label_1f6620;
        case 0x1f6624u: goto label_1f6624;
        case 0x1f6628u: goto label_1f6628;
        case 0x1f662cu: goto label_1f662c;
        case 0x1f6630u: goto label_1f6630;
        case 0x1f6634u: goto label_1f6634;
        case 0x1f6638u: goto label_1f6638;
        case 0x1f663cu: goto label_1f663c;
        case 0x1f6640u: goto label_1f6640;
        case 0x1f6644u: goto label_1f6644;
        case 0x1f6648u: goto label_1f6648;
        case 0x1f664cu: goto label_1f664c;
        case 0x1f6650u: goto label_1f6650;
        case 0x1f6654u: goto label_1f6654;
        case 0x1f6658u: goto label_1f6658;
        case 0x1f665cu: goto label_1f665c;
        case 0x1f6660u: goto label_1f6660;
        case 0x1f6664u: goto label_1f6664;
        case 0x1f6668u: goto label_1f6668;
        case 0x1f666cu: goto label_1f666c;
        case 0x1f6670u: goto label_1f6670;
        case 0x1f6674u: goto label_1f6674;
        case 0x1f6678u: goto label_1f6678;
        case 0x1f667cu: goto label_1f667c;
        case 0x1f6680u: goto label_1f6680;
        case 0x1f6684u: goto label_1f6684;
        case 0x1f6688u: goto label_1f6688;
        case 0x1f668cu: goto label_1f668c;
        case 0x1f6690u: goto label_1f6690;
        case 0x1f6694u: goto label_1f6694;
        case 0x1f6698u: goto label_1f6698;
        case 0x1f669cu: goto label_1f669c;
        case 0x1f66a0u: goto label_1f66a0;
        case 0x1f66a4u: goto label_1f66a4;
        case 0x1f66a8u: goto label_1f66a8;
        case 0x1f66acu: goto label_1f66ac;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66b4u: goto label_1f66b4;
        case 0x1f66b8u: goto label_1f66b8;
        case 0x1f66bcu: goto label_1f66bc;
        case 0x1f66c0u: goto label_1f66c0;
        case 0x1f66c4u: goto label_1f66c4;
        case 0x1f66c8u: goto label_1f66c8;
        case 0x1f66ccu: goto label_1f66cc;
        case 0x1f66d0u: goto label_1f66d0;
        case 0x1f66d4u: goto label_1f66d4;
        case 0x1f66d8u: goto label_1f66d8;
        case 0x1f66dcu: goto label_1f66dc;
        case 0x1f66e0u: goto label_1f66e0;
        case 0x1f66e4u: goto label_1f66e4;
        case 0x1f66e8u: goto label_1f66e8;
        case 0x1f66ecu: goto label_1f66ec;
        case 0x1f66f0u: goto label_1f66f0;
        case 0x1f66f4u: goto label_1f66f4;
        case 0x1f66f8u: goto label_1f66f8;
        case 0x1f66fcu: goto label_1f66fc;
        case 0x1f6700u: goto label_1f6700;
        case 0x1f6704u: goto label_1f6704;
        case 0x1f6708u: goto label_1f6708;
        case 0x1f670cu: goto label_1f670c;
        case 0x1f6710u: goto label_1f6710;
        case 0x1f6714u: goto label_1f6714;
        case 0x1f6718u: goto label_1f6718;
        case 0x1f671cu: goto label_1f671c;
        case 0x1f6720u: goto label_1f6720;
        case 0x1f6724u: goto label_1f6724;
        case 0x1f6728u: goto label_1f6728;
        case 0x1f672cu: goto label_1f672c;
        case 0x1f6730u: goto label_1f6730;
        case 0x1f6734u: goto label_1f6734;
        case 0x1f6738u: goto label_1f6738;
        case 0x1f673cu: goto label_1f673c;
        case 0x1f6740u: goto label_1f6740;
        case 0x1f6744u: goto label_1f6744;
        case 0x1f6748u: goto label_1f6748;
        case 0x1f674cu: goto label_1f674c;
        case 0x1f6750u: goto label_1f6750;
        case 0x1f6754u: goto label_1f6754;
        case 0x1f6758u: goto label_1f6758;
        case 0x1f675cu: goto label_1f675c;
        case 0x1f6760u: goto label_1f6760;
        case 0x1f6764u: goto label_1f6764;
        case 0x1f6768u: goto label_1f6768;
        case 0x1f676cu: goto label_1f676c;
        case 0x1f6770u: goto label_1f6770;
        case 0x1f6774u: goto label_1f6774;
        case 0x1f6778u: goto label_1f6778;
        case 0x1f677cu: goto label_1f677c;
        case 0x1f6780u: goto label_1f6780;
        case 0x1f6784u: goto label_1f6784;
        case 0x1f6788u: goto label_1f6788;
        case 0x1f678cu: goto label_1f678c;
        case 0x1f6790u: goto label_1f6790;
        case 0x1f6794u: goto label_1f6794;
        case 0x1f6798u: goto label_1f6798;
        case 0x1f679cu: goto label_1f679c;
        case 0x1f67a0u: goto label_1f67a0;
        case 0x1f67a4u: goto label_1f67a4;
        case 0x1f67a8u: goto label_1f67a8;
        case 0x1f67acu: goto label_1f67ac;
        case 0x1f67b0u: goto label_1f67b0;
        case 0x1f67b4u: goto label_1f67b4;
        case 0x1f67b8u: goto label_1f67b8;
        case 0x1f67bcu: goto label_1f67bc;
        case 0x1f67c0u: goto label_1f67c0;
        case 0x1f67c4u: goto label_1f67c4;
        case 0x1f67c8u: goto label_1f67c8;
        case 0x1f67ccu: goto label_1f67cc;
        case 0x1f67d0u: goto label_1f67d0;
        case 0x1f67d4u: goto label_1f67d4;
        case 0x1f67d8u: goto label_1f67d8;
        case 0x1f67dcu: goto label_1f67dc;
        case 0x1f67e0u: goto label_1f67e0;
        case 0x1f67e4u: goto label_1f67e4;
        case 0x1f67e8u: goto label_1f67e8;
        case 0x1f67ecu: goto label_1f67ec;
        case 0x1f67f0u: goto label_1f67f0;
        case 0x1f67f4u: goto label_1f67f4;
        case 0x1f67f8u: goto label_1f67f8;
        case 0x1f67fcu: goto label_1f67fc;
        case 0x1f6800u: goto label_1f6800;
        case 0x1f6804u: goto label_1f6804;
        case 0x1f6808u: goto label_1f6808;
        case 0x1f680cu: goto label_1f680c;
        case 0x1f6810u: goto label_1f6810;
        case 0x1f6814u: goto label_1f6814;
        case 0x1f6818u: goto label_1f6818;
        case 0x1f681cu: goto label_1f681c;
        case 0x1f6820u: goto label_1f6820;
        case 0x1f6824u: goto label_1f6824;
        case 0x1f6828u: goto label_1f6828;
        case 0x1f682cu: goto label_1f682c;
        case 0x1f6830u: goto label_1f6830;
        case 0x1f6834u: goto label_1f6834;
        case 0x1f6838u: goto label_1f6838;
        case 0x1f683cu: goto label_1f683c;
        case 0x1f6840u: goto label_1f6840;
        case 0x1f6844u: goto label_1f6844;
        case 0x1f6848u: goto label_1f6848;
        case 0x1f684cu: goto label_1f684c;
        case 0x1f6850u: goto label_1f6850;
        case 0x1f6854u: goto label_1f6854;
        case 0x1f6858u: goto label_1f6858;
        case 0x1f685cu: goto label_1f685c;
        case 0x1f6860u: goto label_1f6860;
        case 0x1f6864u: goto label_1f6864;
        case 0x1f6868u: goto label_1f6868;
        case 0x1f686cu: goto label_1f686c;
        case 0x1f6870u: goto label_1f6870;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6878u: goto label_1f6878;
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6880u: goto label_1f6880;
        case 0x1f6884u: goto label_1f6884;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f688cu: goto label_1f688c;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f6894u: goto label_1f6894;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f689cu: goto label_1f689c;
        case 0x1f68a0u: goto label_1f68a0;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68a8u: goto label_1f68a8;
        case 0x1f68acu: goto label_1f68ac;
        case 0x1f68b0u: goto label_1f68b0;
        case 0x1f68b4u: goto label_1f68b4;
        case 0x1f68b8u: goto label_1f68b8;
        case 0x1f68bcu: goto label_1f68bc;
        case 0x1f68c0u: goto label_1f68c0;
        case 0x1f68c4u: goto label_1f68c4;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68ccu: goto label_1f68cc;
        case 0x1f68d0u: goto label_1f68d0;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f68dcu: goto label_1f68dc;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68e4u: goto label_1f68e4;
        case 0x1f68e8u: goto label_1f68e8;
        case 0x1f68ecu: goto label_1f68ec;
        case 0x1f68f0u: goto label_1f68f0;
        case 0x1f68f4u: goto label_1f68f4;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f68fcu: goto label_1f68fc;
        case 0x1f6900u: goto label_1f6900;
        case 0x1f6904u: goto label_1f6904;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f690cu: goto label_1f690c;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f691cu: goto label_1f691c;
        case 0x1f6920u: goto label_1f6920;
        case 0x1f6924u: goto label_1f6924;
        case 0x1f6928u: goto label_1f6928;
        case 0x1f692cu: goto label_1f692c;
        case 0x1f6930u: goto label_1f6930;
        case 0x1f6934u: goto label_1f6934;
        case 0x1f6938u: goto label_1f6938;
        case 0x1f693cu: goto label_1f693c;
        case 0x1f6940u: goto label_1f6940;
        case 0x1f6944u: goto label_1f6944;
        case 0x1f6948u: goto label_1f6948;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6950u: goto label_1f6950;
        case 0x1f6954u: goto label_1f6954;
        case 0x1f6958u: goto label_1f6958;
        case 0x1f695cu: goto label_1f695c;
        case 0x1f6960u: goto label_1f6960;
        case 0x1f6964u: goto label_1f6964;
        case 0x1f6968u: goto label_1f6968;
        case 0x1f696cu: goto label_1f696c;
        case 0x1f6970u: goto label_1f6970;
        case 0x1f6974u: goto label_1f6974;
        case 0x1f6978u: goto label_1f6978;
        case 0x1f697cu: goto label_1f697c;
        case 0x1f6980u: goto label_1f6980;
        case 0x1f6984u: goto label_1f6984;
        case 0x1f6988u: goto label_1f6988;
        case 0x1f698cu: goto label_1f698c;
        case 0x1f6990u: goto label_1f6990;
        case 0x1f6994u: goto label_1f6994;
        case 0x1f6998u: goto label_1f6998;
        case 0x1f699cu: goto label_1f699c;
        case 0x1f69a0u: goto label_1f69a0;
        case 0x1f69a4u: goto label_1f69a4;
        case 0x1f69a8u: goto label_1f69a8;
        case 0x1f69acu: goto label_1f69ac;
        case 0x1f69b0u: goto label_1f69b0;
        case 0x1f69b4u: goto label_1f69b4;
        case 0x1f69b8u: goto label_1f69b8;
        case 0x1f69bcu: goto label_1f69bc;
        case 0x1f69c0u: goto label_1f69c0;
        case 0x1f69c4u: goto label_1f69c4;
        case 0x1f69c8u: goto label_1f69c8;
        case 0x1f69ccu: goto label_1f69cc;
        case 0x1f69d0u: goto label_1f69d0;
        case 0x1f69d4u: goto label_1f69d4;
        case 0x1f69d8u: goto label_1f69d8;
        case 0x1f69dcu: goto label_1f69dc;
        case 0x1f69e0u: goto label_1f69e0;
        case 0x1f69e4u: goto label_1f69e4;
        case 0x1f69e8u: goto label_1f69e8;
        case 0x1f69ecu: goto label_1f69ec;
        case 0x1f69f0u: goto label_1f69f0;
        case 0x1f69f4u: goto label_1f69f4;
        case 0x1f69f8u: goto label_1f69f8;
        case 0x1f69fcu: goto label_1f69fc;
        case 0x1f6a00u: goto label_1f6a00;
        case 0x1f6a04u: goto label_1f6a04;
        case 0x1f6a08u: goto label_1f6a08;
        case 0x1f6a0cu: goto label_1f6a0c;
        case 0x1f6a10u: goto label_1f6a10;
        case 0x1f6a14u: goto label_1f6a14;
        case 0x1f6a18u: goto label_1f6a18;
        case 0x1f6a1cu: goto label_1f6a1c;
        case 0x1f6a20u: goto label_1f6a20;
        case 0x1f6a24u: goto label_1f6a24;
        case 0x1f6a28u: goto label_1f6a28;
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6a30u: goto label_1f6a30;
        case 0x1f6a34u: goto label_1f6a34;
        case 0x1f6a38u: goto label_1f6a38;
        case 0x1f6a3cu: goto label_1f6a3c;
        case 0x1f6a40u: goto label_1f6a40;
        case 0x1f6a44u: goto label_1f6a44;
        case 0x1f6a48u: goto label_1f6a48;
        case 0x1f6a4cu: goto label_1f6a4c;
        case 0x1f6a50u: goto label_1f6a50;
        case 0x1f6a54u: goto label_1f6a54;
        case 0x1f6a58u: goto label_1f6a58;
        case 0x1f6a5cu: goto label_1f6a5c;
        case 0x1f6a60u: goto label_1f6a60;
        case 0x1f6a64u: goto label_1f6a64;
        case 0x1f6a68u: goto label_1f6a68;
        case 0x1f6a6cu: goto label_1f6a6c;
        case 0x1f6a70u: goto label_1f6a70;
        case 0x1f6a74u: goto label_1f6a74;
        case 0x1f6a78u: goto label_1f6a78;
        case 0x1f6a7cu: goto label_1f6a7c;
        case 0x1f6a80u: goto label_1f6a80;
        case 0x1f6a84u: goto label_1f6a84;
        case 0x1f6a88u: goto label_1f6a88;
        case 0x1f6a8cu: goto label_1f6a8c;
        case 0x1f6a90u: goto label_1f6a90;
        case 0x1f6a94u: goto label_1f6a94;
        case 0x1f6a98u: goto label_1f6a98;
        case 0x1f6a9cu: goto label_1f6a9c;
        case 0x1f6aa0u: goto label_1f6aa0;
        case 0x1f6aa4u: goto label_1f6aa4;
        case 0x1f6aa8u: goto label_1f6aa8;
        case 0x1f6aacu: goto label_1f6aac;
        case 0x1f6ab0u: goto label_1f6ab0;
        case 0x1f6ab4u: goto label_1f6ab4;
        case 0x1f6ab8u: goto label_1f6ab8;
        case 0x1f6abcu: goto label_1f6abc;
        case 0x1f6ac0u: goto label_1f6ac0;
        case 0x1f6ac4u: goto label_1f6ac4;
        case 0x1f6ac8u: goto label_1f6ac8;
        case 0x1f6accu: goto label_1f6acc;
        case 0x1f6ad0u: goto label_1f6ad0;
        case 0x1f6ad4u: goto label_1f6ad4;
        case 0x1f6ad8u: goto label_1f6ad8;
        case 0x1f6adcu: goto label_1f6adc;
        case 0x1f6ae0u: goto label_1f6ae0;
        case 0x1f6ae4u: goto label_1f6ae4;
        case 0x1f6ae8u: goto label_1f6ae8;
        case 0x1f6aecu: goto label_1f6aec;
        case 0x1f6af0u: goto label_1f6af0;
        case 0x1f6af4u: goto label_1f6af4;
        case 0x1f6af8u: goto label_1f6af8;
        case 0x1f6afcu: goto label_1f6afc;
        case 0x1f6b00u: goto label_1f6b00;
        case 0x1f6b04u: goto label_1f6b04;
        case 0x1f6b08u: goto label_1f6b08;
        case 0x1f6b0cu: goto label_1f6b0c;
        case 0x1f6b10u: goto label_1f6b10;
        case 0x1f6b14u: goto label_1f6b14;
        case 0x1f6b18u: goto label_1f6b18;
        case 0x1f6b1cu: goto label_1f6b1c;
        case 0x1f6b20u: goto label_1f6b20;
        case 0x1f6b24u: goto label_1f6b24;
        case 0x1f6b28u: goto label_1f6b28;
        case 0x1f6b2cu: goto label_1f6b2c;
        case 0x1f6b30u: goto label_1f6b30;
        case 0x1f6b34u: goto label_1f6b34;
        case 0x1f6b38u: goto label_1f6b38;
        case 0x1f6b3cu: goto label_1f6b3c;
        case 0x1f6b40u: goto label_1f6b40;
        case 0x1f6b44u: goto label_1f6b44;
        case 0x1f6b48u: goto label_1f6b48;
        case 0x1f6b4cu: goto label_1f6b4c;
        case 0x1f6b50u: goto label_1f6b50;
        case 0x1f6b54u: goto label_1f6b54;
        case 0x1f6b58u: goto label_1f6b58;
        case 0x1f6b5cu: goto label_1f6b5c;
        case 0x1f6b60u: goto label_1f6b60;
        case 0x1f6b64u: goto label_1f6b64;
        case 0x1f6b68u: goto label_1f6b68;
        case 0x1f6b6cu: goto label_1f6b6c;
        case 0x1f6b70u: goto label_1f6b70;
        case 0x1f6b74u: goto label_1f6b74;
        case 0x1f6b78u: goto label_1f6b78;
        case 0x1f6b7cu: goto label_1f6b7c;
        case 0x1f6b80u: goto label_1f6b80;
        case 0x1f6b84u: goto label_1f6b84;
        case 0x1f6b88u: goto label_1f6b88;
        case 0x1f6b8cu: goto label_1f6b8c;
        case 0x1f6b90u: goto label_1f6b90;
        case 0x1f6b94u: goto label_1f6b94;
        case 0x1f6b98u: goto label_1f6b98;
        case 0x1f6b9cu: goto label_1f6b9c;
        case 0x1f6ba0u: goto label_1f6ba0;
        case 0x1f6ba4u: goto label_1f6ba4;
        case 0x1f6ba8u: goto label_1f6ba8;
        case 0x1f6bacu: goto label_1f6bac;
        case 0x1f6bb0u: goto label_1f6bb0;
        case 0x1f6bb4u: goto label_1f6bb4;
        case 0x1f6bb8u: goto label_1f6bb8;
        case 0x1f6bbcu: goto label_1f6bbc;
        case 0x1f6bc0u: goto label_1f6bc0;
        case 0x1f6bc4u: goto label_1f6bc4;
        case 0x1f6bc8u: goto label_1f6bc8;
        case 0x1f6bccu: goto label_1f6bcc;
        case 0x1f6bd0u: goto label_1f6bd0;
        case 0x1f6bd4u: goto label_1f6bd4;
        case 0x1f6bd8u: goto label_1f6bd8;
        case 0x1f6bdcu: goto label_1f6bdc;
        case 0x1f6be0u: goto label_1f6be0;
        case 0x1f6be4u: goto label_1f6be4;
        case 0x1f6be8u: goto label_1f6be8;
        case 0x1f6becu: goto label_1f6bec;
        case 0x1f6bf0u: goto label_1f6bf0;
        case 0x1f6bf4u: goto label_1f6bf4;
        case 0x1f6bf8u: goto label_1f6bf8;
        case 0x1f6bfcu: goto label_1f6bfc;
        case 0x1f6c00u: goto label_1f6c00;
        case 0x1f6c04u: goto label_1f6c04;
        case 0x1f6c08u: goto label_1f6c08;
        case 0x1f6c0cu: goto label_1f6c0c;
        case 0x1f6c10u: goto label_1f6c10;
        case 0x1f6c14u: goto label_1f6c14;
        case 0x1f6c18u: goto label_1f6c18;
        case 0x1f6c1cu: goto label_1f6c1c;
        case 0x1f6c20u: goto label_1f6c20;
        case 0x1f6c24u: goto label_1f6c24;
        case 0x1f6c28u: goto label_1f6c28;
        case 0x1f6c2cu: goto label_1f6c2c;
        case 0x1f6c30u: goto label_1f6c30;
        case 0x1f6c34u: goto label_1f6c34;
        case 0x1f6c38u: goto label_1f6c38;
        case 0x1f6c3cu: goto label_1f6c3c;
        case 0x1f6c40u: goto label_1f6c40;
        case 0x1f6c44u: goto label_1f6c44;
        case 0x1f6c48u: goto label_1f6c48;
        case 0x1f6c4cu: goto label_1f6c4c;
        case 0x1f6c50u: goto label_1f6c50;
        case 0x1f6c54u: goto label_1f6c54;
        case 0x1f6c58u: goto label_1f6c58;
        case 0x1f6c5cu: goto label_1f6c5c;
        case 0x1f6c60u: goto label_1f6c60;
        case 0x1f6c64u: goto label_1f6c64;
        case 0x1f6c68u: goto label_1f6c68;
        case 0x1f6c6cu: goto label_1f6c6c;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c74u: goto label_1f6c74;
        case 0x1f6c78u: goto label_1f6c78;
        case 0x1f6c7cu: goto label_1f6c7c;
        case 0x1f6c80u: goto label_1f6c80;
        case 0x1f6c84u: goto label_1f6c84;
        case 0x1f6c88u: goto label_1f6c88;
        case 0x1f6c8cu: goto label_1f6c8c;
        case 0x1f6c90u: goto label_1f6c90;
        case 0x1f6c94u: goto label_1f6c94;
        case 0x1f6c98u: goto label_1f6c98;
        case 0x1f6c9cu: goto label_1f6c9c;
        case 0x1f6ca0u: goto label_1f6ca0;
        case 0x1f6ca4u: goto label_1f6ca4;
        case 0x1f6ca8u: goto label_1f6ca8;
        case 0x1f6cacu: goto label_1f6cac;
        case 0x1f6cb0u: goto label_1f6cb0;
        case 0x1f6cb4u: goto label_1f6cb4;
        case 0x1f6cb8u: goto label_1f6cb8;
        case 0x1f6cbcu: goto label_1f6cbc;
        case 0x1f6cc0u: goto label_1f6cc0;
        case 0x1f6cc4u: goto label_1f6cc4;
        case 0x1f6cc8u: goto label_1f6cc8;
        case 0x1f6cccu: goto label_1f6ccc;
        case 0x1f6cd0u: goto label_1f6cd0;
        case 0x1f6cd4u: goto label_1f6cd4;
        case 0x1f6cd8u: goto label_1f6cd8;
        case 0x1f6cdcu: goto label_1f6cdc;
        case 0x1f6ce0u: goto label_1f6ce0;
        case 0x1f6ce4u: goto label_1f6ce4;
        case 0x1f6ce8u: goto label_1f6ce8;
        case 0x1f6cecu: goto label_1f6cec;
        case 0x1f6cf0u: goto label_1f6cf0;
        case 0x1f6cf4u: goto label_1f6cf4;
        case 0x1f6cf8u: goto label_1f6cf8;
        case 0x1f6cfcu: goto label_1f6cfc;
        case 0x1f6d00u: goto label_1f6d00;
        case 0x1f6d04u: goto label_1f6d04;
        case 0x1f6d08u: goto label_1f6d08;
        case 0x1f6d0cu: goto label_1f6d0c;
        case 0x1f6d10u: goto label_1f6d10;
        case 0x1f6d14u: goto label_1f6d14;
        case 0x1f6d18u: goto label_1f6d18;
        case 0x1f6d1cu: goto label_1f6d1c;
        case 0x1f6d20u: goto label_1f6d20;
        case 0x1f6d24u: goto label_1f6d24;
        case 0x1f6d28u: goto label_1f6d28;
        case 0x1f6d2cu: goto label_1f6d2c;
        case 0x1f6d30u: goto label_1f6d30;
        case 0x1f6d34u: goto label_1f6d34;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d3cu: goto label_1f6d3c;
        case 0x1f6d40u: goto label_1f6d40;
        case 0x1f6d44u: goto label_1f6d44;
        case 0x1f6d48u: goto label_1f6d48;
        case 0x1f6d4cu: goto label_1f6d4c;
        case 0x1f6d50u: goto label_1f6d50;
        case 0x1f6d54u: goto label_1f6d54;
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6d5cu: goto label_1f6d5c;
        default: return;
    }

label_1f6590:
    // 0x1f6590: 0x0  nop
    ctx->pc = 0x1f6590u;
    // NOP
label_1f6594:
    // 0x1f6594: 0x0  nop
    ctx->pc = 0x1f6594u;
    // NOP
label_1f6598:
    // 0x1f6598: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f659c:
    // 0x1f659c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f659cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f65a0:
    // 0x1f65a0: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
label_1f65a4:
    if (ctx->pc == 0x1F65A4u) {
        ctx->pc = 0x1F65A8u;
        goto label_1f65a8;
    }
    ctx->pc = 0x1F65A0u;
    {
        const bool branch_taken_0x1f65a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f65a0) {
            ctx->pc = 0x1F6628u;
            goto label_1f6628;
        }
    }
    ctx->pc = 0x1F65A8u;
label_1f65a8:
    // 0x1f65a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f65ac:
    // 0x1f65ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f65acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f65b0:
    // 0x1f65b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f65b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f65b4:
    // 0x1f65b4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1f65b8:
    // 0x1f65b8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1f65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1f65bc:
    // 0x1f65bc: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_1f65c0:
    // 0x1f65c0: 0x0  nop
    ctx->pc = 0x1f65c0u;
    // NOP
label_1f65c4:
    // 0x1f65c4: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f65c8:
    // 0x1f65c8: 0x9102367c  lbu         $v0, 0x367C($t0)
    ctx->pc = 0x1f65c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f65cc:
    // 0x1f65cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f65d0:
    if (ctx->pc == 0x1F65D0u) {
        ctx->pc = 0x1F65D4u;
        goto label_1f65d4;
    }
    ctx->pc = 0x1F65CCu;
    {
        const bool branch_taken_0x1f65cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f65cc) {
            ctx->pc = 0x1F65E8u;
            goto label_1f65e8;
        }
    }
    ctx->pc = 0x1F65D4u;
label_1f65d4:
    // 0x1f65d4: 0x8d023670  lw          $v0, 0x3670($t0)
    ctx->pc = 0x1f65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13936)));
label_1f65d8:
    // 0x1f65d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f65dc:
    if (ctx->pc == 0x1F65DCu) {
        ctx->pc = 0x1F65E0u;
        goto label_1f65e0;
    }
    ctx->pc = 0x1F65D8u;
    {
        const bool branch_taken_0x1f65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f65d8) {
            ctx->pc = 0x1F65E8u;
            goto label_1f65e8;
        }
    }
    ctx->pc = 0x1F65E0u;
label_1f65e0:
    // 0x1f65e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f65e4:
    if (ctx->pc == 0x1F65E4u) {
        ctx->pc = 0x1F65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65E0u;
        // 0x1f65e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F65E8u;
        goto label_1f65e8;
    }
    ctx->pc = 0x1F65E0u;
    {
        const bool branch_taken_0x1f65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65E0u;
        // 0x1f65e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65e0) {
            ctx->pc = 0x1F65F8u;
            goto label_1f65f8;
        }
    }
    ctx->pc = 0x1F65E8u;
label_1f65e8:
    // 0x1f65e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f65e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f65ec:
    // 0x1f65ec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f65ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f65f0:
    // 0x1f65f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f65f4:
    if (ctx->pc == 0x1F65F4u) {
        ctx->pc = 0x1F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F0u;
        // 0x1f65f4: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F65F8u;
        goto label_1f65f8;
    }
    ctx->pc = 0x1F65F0u;
    {
        const bool branch_taken_0x1f65f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F0u;
        // 0x1f65f4: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65f0) {
            ctx->pc = 0x1F65C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f65c0;
        }
    }
    ctx->pc = 0x1F65F8u;
label_1f65f8:
    // 0x1f65f8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f65fc:
    if (ctx->pc == 0x1F65FCu) {
        ctx->pc = 0x1F65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F8u;
        // 0x1f65fc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6600u;
        goto label_1f6600;
    }
    ctx->pc = 0x1F65F8u;
    {
        const bool branch_taken_0x1f65f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F65F8u;
        // 0x1f65fc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f65f8) {
            ctx->pc = 0x1F6610u;
            goto label_1f6610;
        }
    }
    ctx->pc = 0x1F6600u;
label_1f6600:
    // 0x1f6600: 0xc084af4  jal         func_212BD0
label_1f6604:
    if (ctx->pc == 0x1F6604u) {
        ctx->pc = 0x1F6608u;
        goto label_1f6608;
    }
    ctx->pc = 0x1F6600u;
    SET_GPR_U32(ctx, 31, 0x1F6608u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x1F6608u;
label_1f6608:
    // 0x1f6608: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f660c:
    if (ctx->pc == 0x1F660Cu) {
        ctx->pc = 0x1F6610u;
        goto label_1f6610;
    }
    ctx->pc = 0x1F6608u;
    {
        const bool branch_taken_0x1f6608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6608) {
            ctx->pc = 0x1F6638u;
            goto label_1f6638;
        }
    }
    ctx->pc = 0x1F6610u;
label_1f6610:
    // 0x1f6610: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1f6614:
    // 0x1f6614: 0x27828230  addiu       $v0, $gp, -0x7DD0
    ctx->pc = 0x1f6614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935088));
label_1f6618:
    // 0x1f6618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f661c:
    // 0x1f661c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1f661cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1f6620:
    // 0x1f6620: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f6624:
    if (ctx->pc == 0x1F6624u) {
        ctx->pc = 0x1F6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6620u;
        // 0x1f6624: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6628u;
        goto label_1f6628;
    }
    ctx->pc = 0x1F6620u;
    {
        const bool branch_taken_0x1f6620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6620u;
        // 0x1f6624: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6620) {
            ctx->pc = 0x1F6638u;
            goto label_1f6638;
        }
    }
    ctx->pc = 0x1F6628u;
label_1f6628:
    // 0x1f6628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f662c:
    // 0x1f662c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1f662cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f6630:
    // 0x1f6630: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_1f6634:
    if (ctx->pc == 0x1F6634u) {
        ctx->pc = 0x1F6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6630u;
        // 0x1f6634: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6638u;
        goto label_1f6638;
    }
    ctx->pc = 0x1F6630u;
    {
        const bool branch_taken_0x1f6630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6630u;
        // 0x1f6634: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6630) {
            ctx->pc = 0x1F6594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6594;
        }
    }
    ctx->pc = 0x1F6638u;
label_1f6638:
    // 0x1f6638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f663c:
    // 0x1f663c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f663cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6640:
    // 0x1f6640: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f6640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f6644:
    // 0x1f6644: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f6648:
    // 0x1f6648: 0x2463c440  addiu       $v1, $v1, -0x3BC0
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952000));
label_1f664c:
    // 0x1f664c: 0x0  nop
    ctx->pc = 0x1f664cu;
    // NOP
label_1f6650:
    // 0x1f6650: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f6654:
    // 0x1f6654: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f6654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6658:
    // 0x1f6658: 0x14820045  bne         $a0, $v0, . + 4 + (0x45 << 2)
label_1f665c:
    if (ctx->pc == 0x1F665Cu) {
        ctx->pc = 0x1F6660u;
        goto label_1f6660;
    }
    ctx->pc = 0x1F6658u;
    {
        const bool branch_taken_0x1f6658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6658) {
            ctx->pc = 0x1F6770u;
            goto label_1f6770;
        }
    }
    ctx->pc = 0x1F6660u;
label_1f6660:
    // 0x1f6660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6664:
    // 0x1f6664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6668:
    // 0x1f6668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f666c:
    // 0x1f666c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f666cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1f6670:
    // 0x1f6670: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1f6670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1f6674:
    // 0x1f6674: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1f6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_1f6678:
    // 0x1f6678: 0x0  nop
    ctx->pc = 0x1f6678u;
    // NOP
label_1f667c:
    // 0x1f667c: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1f667cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f6680:
    // 0x1f6680: 0x9102367c  lbu         $v0, 0x367C($t0)
    ctx->pc = 0x1f6680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f6684:
    // 0x1f6684: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f6688:
    if (ctx->pc == 0x1F6688u) {
        ctx->pc = 0x1F668Cu;
        goto label_1f668c;
    }
    ctx->pc = 0x1F6684u;
    {
        const bool branch_taken_0x1f6684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6684) {
            ctx->pc = 0x1F66A0u;
            goto label_1f66a0;
        }
    }
    ctx->pc = 0x1F668Cu;
label_1f668c:
    // 0x1f668c: 0x8d023670  lw          $v0, 0x3670($t0)
    ctx->pc = 0x1f668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13936)));
label_1f6690:
    // 0x1f6690: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f6694:
    if (ctx->pc == 0x1F6694u) {
        ctx->pc = 0x1F6698u;
        goto label_1f6698;
    }
    ctx->pc = 0x1F6690u;
    {
        const bool branch_taken_0x1f6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f6690) {
            ctx->pc = 0x1F66A0u;
            goto label_1f66a0;
        }
    }
    ctx->pc = 0x1F6698u;
label_1f6698:
    // 0x1f6698: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f669c:
    if (ctx->pc == 0x1F669Cu) {
        ctx->pc = 0x1F669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6698u;
        // 0x1f669c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F66A0u;
        goto label_1f66a0;
    }
    ctx->pc = 0x1F6698u;
    {
        const bool branch_taken_0x1f6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6698u;
        // 0x1f669c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6698) {
            ctx->pc = 0x1F66B0u;
            goto label_1f66b0;
        }
    }
    ctx->pc = 0x1F66A0u;
label_1f66a0:
    // 0x1f66a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f66a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f66a4:
    // 0x1f66a4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f66a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f66a8:
    // 0x1f66a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f66ac:
    if (ctx->pc == 0x1F66ACu) {
        ctx->pc = 0x1F66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66A8u;
        // 0x1f66ac: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F66B0u;
        goto label_1f66b0;
    }
    ctx->pc = 0x1F66A8u;
    {
        const bool branch_taken_0x1f66a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66A8u;
        // 0x1f66ac: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66a8) {
            ctx->pc = 0x1F6678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6678;
        }
    }
    ctx->pc = 0x1F66B0u;
label_1f66b0:
    // 0x1f66b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f66b4:
    if (ctx->pc == 0x1F66B4u) {
        ctx->pc = 0x1F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66B0u;
        // 0x1f66b4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F66B8u;
        goto label_1f66b8;
    }
    ctx->pc = 0x1F66B0u;
    {
        const bool branch_taken_0x1f66b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66B0u;
        // 0x1f66b4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66b0) {
            ctx->pc = 0x1F66C8u;
            goto label_1f66c8;
        }
    }
    ctx->pc = 0x1F66B8u;
label_1f66b8:
    // 0x1f66b8: 0xc084af4  jal         func_212BD0
label_1f66bc:
    if (ctx->pc == 0x1F66BCu) {
        ctx->pc = 0x1F66C0u;
        goto label_1f66c0;
    }
    ctx->pc = 0x1F66B8u;
    SET_GPR_U32(ctx, 31, 0x1F66C0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x1F66C0u;
label_1f66c0:
    // 0x1f66c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f66c4:
    if (ctx->pc == 0x1F66C4u) {
        ctx->pc = 0x1F66C8u;
        goto label_1f66c8;
    }
    ctx->pc = 0x1F66C0u;
    {
        const bool branch_taken_0x1f66c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f66c0) {
            ctx->pc = 0x1F66E8u;
            goto label_1f66e8;
        }
    }
    ctx->pc = 0x1F66C8u;
label_1f66c8:
    // 0x1f66c8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1f66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1f66cc:
    // 0x1f66cc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1f66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f66d0:
    // 0x1f66d0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f66d4:
    // 0x1f66d4: 0x2442c440  addiu       $v0, $v0, -0x3BC0
    ctx->pc = 0x1f66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
label_1f66d8:
    // 0x1f66d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f66dc:
    // 0x1f66dc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1f66dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1f66e0:
    // 0x1f66e0: 0x10000027  b           . + 4 + (0x27 << 2)
label_1f66e4:
    if (ctx->pc == 0x1F66E4u) {
        ctx->pc = 0x1F66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66E0u;
        // 0x1f66e4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F66E8u;
        goto label_1f66e8;
    }
    ctx->pc = 0x1F66E0u;
    {
        const bool branch_taken_0x1f66e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66E0u;
        // 0x1f66e4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66e0) {
            ctx->pc = 0x1F6780u;
            goto label_1f6780;
        }
    }
    ctx->pc = 0x1F66E8u;
label_1f66e8:
    // 0x1f66e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f66ec:
    // 0x1f66ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f66ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f66f0:
    // 0x1f66f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f66f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f66f4:
    // 0x1f66f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1f66f8:
    // 0x1f66f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1f66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f66fc:
    // 0x1f66fc: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1f66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_1f6700:
    // 0x1f6700: 0x0  nop
    ctx->pc = 0x1f6700u;
    // NOP
label_1f6704:
    // 0x1f6704: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1f6704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f6708:
    // 0x1f6708: 0x9102367c  lbu         $v0, 0x367C($t0)
    ctx->pc = 0x1f6708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f670c:
    // 0x1f670c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f6710:
    if (ctx->pc == 0x1F6710u) {
        ctx->pc = 0x1F6714u;
        goto label_1f6714;
    }
    ctx->pc = 0x1F670Cu;
    {
        const bool branch_taken_0x1f670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f670c) {
            ctx->pc = 0x1F6728u;
            goto label_1f6728;
        }
    }
    ctx->pc = 0x1F6714u;
label_1f6714:
    // 0x1f6714: 0x8d023670  lw          $v0, 0x3670($t0)
    ctx->pc = 0x1f6714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13936)));
label_1f6718:
    // 0x1f6718: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f671c:
    if (ctx->pc == 0x1F671Cu) {
        ctx->pc = 0x1F6720u;
        goto label_1f6720;
    }
    ctx->pc = 0x1F6718u;
    {
        const bool branch_taken_0x1f6718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f6718) {
            ctx->pc = 0x1F6728u;
            goto label_1f6728;
        }
    }
    ctx->pc = 0x1F6720u;
label_1f6720:
    // 0x1f6720: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f6724:
    if (ctx->pc == 0x1F6724u) {
        ctx->pc = 0x1F6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6720u;
        // 0x1f6724: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6728u;
        goto label_1f6728;
    }
    ctx->pc = 0x1F6720u;
    {
        const bool branch_taken_0x1f6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6720u;
        // 0x1f6724: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6720) {
            ctx->pc = 0x1F6738u;
            goto label_1f6738;
        }
    }
    ctx->pc = 0x1F6728u;
label_1f6728:
    // 0x1f6728: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f672c:
    // 0x1f672c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f672cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6730:
    // 0x1f6730: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f6734:
    if (ctx->pc == 0x1F6734u) {
        ctx->pc = 0x1F6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6730u;
        // 0x1f6734: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6738u;
        goto label_1f6738;
    }
    ctx->pc = 0x1F6730u;
    {
        const bool branch_taken_0x1f6730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6730u;
        // 0x1f6734: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6730) {
            ctx->pc = 0x1F6700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6700;
        }
    }
    ctx->pc = 0x1F6738u;
label_1f6738:
    // 0x1f6738: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f673c:
    if (ctx->pc == 0x1F673Cu) {
        ctx->pc = 0x1F673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6738u;
        // 0x1f673c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6740u;
        goto label_1f6740;
    }
    ctx->pc = 0x1F6738u;
    {
        const bool branch_taken_0x1f6738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6738u;
        // 0x1f673c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6738) {
            ctx->pc = 0x1F6750u;
            goto label_1f6750;
        }
    }
    ctx->pc = 0x1F6740u;
label_1f6740:
    // 0x1f6740: 0xc084af4  jal         func_212BD0
label_1f6744:
    if (ctx->pc == 0x1F6744u) {
        ctx->pc = 0x1F6748u;
        goto label_1f6748;
    }
    ctx->pc = 0x1F6740u;
    SET_GPR_U32(ctx, 31, 0x1F6748u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x1F6748u;
label_1f6748:
    // 0x1f6748: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f674c:
    if (ctx->pc == 0x1F674Cu) {
        ctx->pc = 0x1F6750u;
        goto label_1f6750;
    }
    ctx->pc = 0x1F6748u;
    {
        const bool branch_taken_0x1f6748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6748) {
            ctx->pc = 0x1F6780u;
            goto label_1f6780;
        }
    }
    ctx->pc = 0x1F6750u;
label_1f6750:
    // 0x1f6750: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1f6750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1f6754:
    // 0x1f6754: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1f6754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f6758:
    // 0x1f6758: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f6758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f675c:
    // 0x1f675c: 0x2442c440  addiu       $v0, $v0, -0x3BC0
    ctx->pc = 0x1f675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
label_1f6760:
    // 0x1f6760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f6764:
    // 0x1f6764: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1f6764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1f6768:
    // 0x1f6768: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f676c:
    if (ctx->pc == 0x1F676Cu) {
        ctx->pc = 0x1F676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6768u;
        // 0x1f676c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6770u;
        goto label_1f6770;
    }
    ctx->pc = 0x1F6768u;
    {
        const bool branch_taken_0x1f6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6768u;
        // 0x1f676c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6768) {
            ctx->pc = 0x1F6780u;
            goto label_1f6780;
        }
    }
    ctx->pc = 0x1F6770u;
label_1f6770:
    // 0x1f6770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f6774:
    // 0x1f6774: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1f6774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1f6778:
    // 0x1f6778: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_1f677c:
    if (ctx->pc == 0x1F677Cu) {
        ctx->pc = 0x1F677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6778u;
        // 0x1f677c: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6780u;
        goto label_1f6780;
    }
    ctx->pc = 0x1F6778u;
    {
        const bool branch_taken_0x1f6778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6778u;
        // 0x1f677c: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6778) {
            ctx->pc = 0x1F664Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f664c;
        }
    }
    ctx->pc = 0x1F6780u;
label_1f6780:
    // 0x1f6780: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6784:
    // 0x1f6784: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f6784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6788:
    // 0x1f6788: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
label_1f678c:
    if (ctx->pc == 0x1F678Cu) {
        ctx->pc = 0x1F678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6788u;
        // 0x1f678c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6790u;
        goto label_1f6790;
    }
    ctx->pc = 0x1F6788u;
    {
        const bool branch_taken_0x1f6788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6788u;
        // 0x1f678c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6788) {
            ctx->pc = 0x1F6578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f6578; return; }
        }
    }
    ctx->pc = 0x1F6790u;
label_1f6790:
    // 0x1f6790: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1f6794:
    if (ctx->pc == 0x1F6794u) {
        ctx->pc = 0x1F6798u;
        goto label_1f6798;
    }
    ctx->pc = 0x1F6790u;
    {
        const bool branch_taken_0x1f6790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6790) {
            ctx->pc = 0x1F67FCu;
            goto label_1f67fc;
        }
    }
    ctx->pc = 0x1F6798u;
label_1f6798:
    // 0x1f6798: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1f679c:
    if (ctx->pc == 0x1F679Cu) {
        ctx->pc = 0x1F679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6798u;
        // 0x1f679c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67A0u;
        goto label_1f67a0;
    }
    ctx->pc = 0x1F6798u;
    {
        const bool branch_taken_0x1f6798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6798u;
        // 0x1f679c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6798) {
            ctx->pc = 0x1F67FCu;
            goto label_1f67fc;
        }
    }
    ctx->pc = 0x1F67A0u;
label_1f67a0:
    // 0x1f67a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f67a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f67a4:
    // 0x1f67a4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1f67a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1f67a8:
    // 0x1f67a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f67a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f67ac:
    // 0x1f67ac: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f67acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f67b0:
    // 0x1f67b0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f67b4:
    // 0x1f67b4: 0x2463c360  addiu       $v1, $v1, -0x3CA0
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951776));
label_1f67b8:
    // 0x1f67b8: 0x2442c3d0  addiu       $v0, $v0, -0x3C30
    ctx->pc = 0x1f67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951888));
label_1f67bc:
    // 0x1f67bc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1f67bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f67c0:
    // 0x1f67c0: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1f67c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f67c4:
    // 0x1f67c4: 0x27839018  addiu       $v1, $gp, -0x6FE8
    ctx->pc = 0x1f67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938648));
label_1f67c8:
    // 0x1f67c8: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_1f67cc:
    if (ctx->pc == 0x1F67CCu) {
        ctx->pc = 0x1F67D0u;
        goto label_1f67d0;
    }
    ctx->pc = 0x1F67C8u;
    {
        const bool branch_taken_0x1f67c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f67c8) {
            ctx->pc = 0x1F67D8u;
            goto label_1f67d8;
        }
    }
    ctx->pc = 0x1F67D0u;
label_1f67d0:
    // 0x1f67d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f67d4:
    if (ctx->pc == 0x1F67D4u) {
        ctx->pc = 0x1F67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67D0u;
        // 0x1f67d4: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67D8u;
        goto label_1f67d8;
    }
    ctx->pc = 0x1F67D0u;
    {
        const bool branch_taken_0x1f67d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67D0u;
        // 0x1f67d4: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67d0) {
            ctx->pc = 0x1F67E0u;
            goto label_1f67e0;
        }
    }
    ctx->pc = 0x1F67D8u;
label_1f67d8:
    // 0x1f67d8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1f67d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f67dc:
    // 0x1f67dc: 0x0  nop
    ctx->pc = 0x1f67dcu;
    // NOP
label_1f67e0:
    // 0x1f67e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f67e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f67e4:
    // 0x1f67e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f67e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f67e8:
    // 0x1f67e8: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x1f67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f67ec:
    // 0x1f67ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f67f0:
    // 0x1f67f0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f67f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f67f4:
    // 0x1f67f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1f67f8:
    if (ctx->pc == 0x1F67F8u) {
        ctx->pc = 0x1F67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67F4u;
        // 0x1f67f8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F67FCu;
        goto label_1f67fc;
    }
    ctx->pc = 0x1F67F4u;
    {
        const bool branch_taken_0x1f67f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67F4u;
        // 0x1f67f8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67f4) {
            ctx->pc = 0x1F67C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f67c8;
        }
    }
    ctx->pc = 0x1F67FCu;
label_1f67fc:
    // 0x1f67fc: 0x0  nop
    ctx->pc = 0x1f67fcu;
    // NOP
label_1f6800:
    // 0x1f6800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6804:
    // 0x1f6804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6808:
    // 0x1f6808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f680c:
    // 0x1f680c: 0x27849018  addiu       $a0, $gp, -0x6FE8
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938648));
label_1f6810:
    // 0x1f6810: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f6810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f6814:
    // 0x1f6814: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1f6814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1f6818:
    // 0x1f6818: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f681c:
    // 0x1f681c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1f6820:
    if (ctx->pc == 0x1F6820u) {
        ctx->pc = 0x1F6824u;
        goto label_1f6824;
    }
    ctx->pc = 0x1F681Cu;
    {
        const bool branch_taken_0x1f681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f681c) {
            ctx->pc = 0x1F682Cu;
            goto label_1f682c;
        }
    }
    ctx->pc = 0x1F6824u;
label_1f6824:
    // 0x1f6824: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f6828:
    if (ctx->pc == 0x1F6828u) {
        ctx->pc = 0x1F6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6824u;
        // 0x1f6828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F682Cu;
        goto label_1f682c;
    }
    ctx->pc = 0x1F6824u;
    {
        const bool branch_taken_0x1f6824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6824u;
        // 0x1f6828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6824) {
            ctx->pc = 0x1F683Cu;
            goto label_1f683c;
        }
    }
    ctx->pc = 0x1F682Cu;
label_1f682c:
    // 0x1f682c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f682cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f6830:
    // 0x1f6830: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f6830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6834:
    // 0x1f6834: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1f6838:
    if (ctx->pc == 0x1F6838u) {
        ctx->pc = 0x1F6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6834u;
        // 0x1f6838: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F683Cu;
        goto label_1f683c;
    }
    ctx->pc = 0x1F6834u;
    {
        const bool branch_taken_0x1f6834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6834u;
        // 0x1f6838: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6834) {
            ctx->pc = 0x1F6814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6814;
        }
    }
    ctx->pc = 0x1F683Cu;
label_1f683c:
    // 0x1f683c: 0x0  nop
    ctx->pc = 0x1f683cu;
    // NOP
label_1f6840:
    // 0x1f6840: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_1f6844:
    if (ctx->pc == 0x1F6844u) {
        ctx->pc = 0x1F6848u;
        goto label_1f6848;
    }
    ctx->pc = 0x1F6840u;
    {
        const bool branch_taken_0x1f6840 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6840) {
            ctx->pc = 0x1F684Cu;
            goto label_1f684c;
        }
    }
    ctx->pc = 0x1F6848u;
label_1f6848:
    // 0x1f6848: 0xaf809018  sw          $zero, -0x6FE8($gp)
    ctx->pc = 0x1f6848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938648), GPR_U32(ctx, 0));
label_1f684c:
    // 0x1f684c: 0xaf809010  sw          $zero, -0x6FF0($gp)
    ctx->pc = 0x1f684cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938640), GPR_U32(ctx, 0));
label_1f6850:
    // 0x1f6850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f6850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6854:
    // 0x1f6854: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6858:
    // 0x1f6858: 0x27839018  addiu       $v1, $gp, -0x6FE8
    ctx->pc = 0x1f6858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938648));
label_1f685c:
    // 0x1f685c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f6860:
    // 0x1f6860: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f6860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f6864:
    // 0x1f6864: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f6864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6868:
    // 0x1f6868: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_1f686c:
    if (ctx->pc == 0x1F686Cu) {
        ctx->pc = 0x1F6870u;
        goto label_1f6870;
    }
    ctx->pc = 0x1F6868u;
    {
        const bool branch_taken_0x1f6868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6868) {
            ctx->pc = 0x1F6904u;
            goto label_1f6904;
        }
    }
    ctx->pc = 0x1F6870u;
label_1f6870:
    // 0x1f6870: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1f6870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f6874:
    // 0x1f6874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f6878:
    if (ctx->pc == 0x1F6878u) {
        ctx->pc = 0x1F6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6874u;
        // 0x1f6878: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F687Cu;
        goto label_1f687c;
    }
    ctx->pc = 0x1F6874u;
    {
        const bool branch_taken_0x1f6874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6874u;
        // 0x1f6878: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6874) {
            ctx->pc = 0x1F6890u;
            goto label_1f6890;
        }
    }
    ctx->pc = 0x1F687Cu;
label_1f687c:
    // 0x1f687c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f6880:
    // 0x1f6880: 0x2442bf60  addiu       $v0, $v0, -0x40A0
    ctx->pc = 0x1f6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950752));
label_1f6884:
    // 0x1f6884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f6888:
    // 0x1f6888: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f688c:
    if (ctx->pc == 0x1F688Cu) {
        ctx->pc = 0x1F688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6888u;
        // 0x1f688c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6890u;
        goto label_1f6890;
    }
    ctx->pc = 0x1F6888u;
    {
        const bool branch_taken_0x1f6888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6888u;
        // 0x1f688c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6888) {
            ctx->pc = 0x1F68A0u;
            goto label_1f68a0;
        }
    }
    ctx->pc = 0x1F6890u;
label_1f6890:
    // 0x1f6890: 0x2442be60  addiu       $v0, $v0, -0x41A0
    ctx->pc = 0x1f6890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950496));
label_1f6894:
    // 0x1f6894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f6898:
    // 0x1f6898: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f6898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f689c:
    // 0x1f689c: 0x0  nop
    ctx->pc = 0x1f689cu;
    // NOP
label_1f68a0:
    // 0x1f68a0: 0x8f839010  lw          $v1, -0x6FF0($gp)
    ctx->pc = 0x1f68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f68a4:
    // 0x1f68a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1f68a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f68a8:
    // 0x1f68a8: 0x27829008  addiu       $v0, $gp, -0x6FF8
    ctx->pc = 0x1f68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_1f68ac:
    // 0x1f68ac: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1f68acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1f68b0:
    // 0x1f68b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f68b4:
    // 0x1f68b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f68b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f68b8:
    // 0x1f68b8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1f68bc:
    if (ctx->pc == 0x1F68BCu) {
        ctx->pc = 0x1F68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68B8u;
        // 0x1f68bc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68C0u;
        goto label_1f68c0;
    }
    ctx->pc = 0x1F68B8u;
    {
        const bool branch_taken_0x1f68b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68B8u;
        // 0x1f68bc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68b8) {
            ctx->pc = 0x1F6918u;
            goto label_1f6918;
        }
    }
    ctx->pc = 0x1F68C0u;
label_1f68c0:
    // 0x1f68c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f68c4:
    // 0x1f68c4: 0xc07da58  jal         func_1F6960
label_1f68c8:
    if (ctx->pc == 0x1F68C8u) {
        ctx->pc = 0x1F68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68C4u;
        // 0x1f68c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68CCu;
        goto label_1f68cc;
    }
    ctx->pc = 0x1F68C4u;
    SET_GPR_U32(ctx, 31, 0x1F68CCu);
    ctx->pc = 0x1F68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68C4u;
    // 0x1f68c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6960u;
    goto label_1f6960;
    ctx->pc = 0x1F68CCu;
label_1f68cc:
    // 0x1f68cc: 0x8f859010  lw          $a1, -0x6FF0($gp)
    ctx->pc = 0x1f68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f68d0:
    // 0x1f68d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1f68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1f68d4:
    // 0x1f68d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f68d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f68d8:
    // 0x1f68d8: 0x24843c50  addiu       $a0, $a0, 0x3C50
    ctx->pc = 0x1f68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
label_1f68dc:
    // 0x1f68dc: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x1f68dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1f68e0:
    // 0x1f68e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f68e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f68e4:
    // 0x1f68e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f68e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f68e8:
    // 0x1f68e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f68ec:
    // 0x1f68ec: 0x8f829010  lw          $v0, -0x6FF0($gp)
    ctx->pc = 0x1f68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f68f0:
    // 0x1f68f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f68f4:
    // 0x1f68f4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1f68f8:
    if (ctx->pc == 0x1F68F8u) {
        ctx->pc = 0x1F68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68F4u;
        // 0x1f68f8: 0xaf829010  sw          $v0, -0x6FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68FCu;
        goto label_1f68fc;
    }
    ctx->pc = 0x1F68F4u;
    {
        const bool branch_taken_0x1f68f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68F4u;
        // 0x1f68f8: 0xaf829010  sw          $v0, -0x6FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68f4) {
            ctx->pc = 0x1F68C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f68c0;
        }
    }
    ctx->pc = 0x1F68FCu;
label_1f68fc:
    // 0x1f68fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f6900:
    if (ctx->pc == 0x1F6900u) {
        ctx->pc = 0x1F6904u;
        goto label_1f6904;
    }
    ctx->pc = 0x1F68FCu;
    {
        const bool branch_taken_0x1f68fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f68fc) {
            ctx->pc = 0x1F6918u;
            goto label_1f6918;
        }
    }
    ctx->pc = 0x1F6904u;
label_1f6904:
    // 0x1f6904: 0x0  nop
    ctx->pc = 0x1f6904u;
    // NOP
label_1f6908:
    // 0x1f6908: 0x27829008  addiu       $v0, $gp, -0x6FF8
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_1f690c:
    // 0x1f690c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6910:
    // 0x1f6910: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f6910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f6914:
    // 0x1f6914: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6918:
    // 0x1f6918: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f6918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f691c:
    // 0x1f691c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1f691cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6920:
    // 0x1f6920: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1f6924:
    if (ctx->pc == 0x1F6924u) {
        ctx->pc = 0x1F6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6920u;
        // 0x1f6924: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6928u;
        goto label_1f6928;
    }
    ctx->pc = 0x1F6920u;
    {
        const bool branch_taken_0x1f6920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6920u;
        // 0x1f6924: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6920) {
            ctx->pc = 0x1F6858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6858;
        }
    }
    ctx->pc = 0x1F6928u;
label_1f6928:
    // 0x1f6928: 0x8f849010  lw          $a0, -0x6FF0($gp)
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f692c:
    // 0x1f692c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1f692cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1f6930:
    // 0x1f6930: 0xc05b8a4  jal         func_16E290
label_1f6934:
    if (ctx->pc == 0x1F6934u) {
        ctx->pc = 0x1F6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6930u;
        // 0x1f6934: 0x24a53c50  addiu       $a1, $a1, 0x3C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6938u;
        goto label_1f6938;
    }
    ctx->pc = 0x1F6930u;
    SET_GPR_U32(ctx, 31, 0x1F6938u);
    ctx->pc = 0x1F6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6930u;
    // 0x1f6934: 0x24a53c50  addiu       $a1, $a1, 0x3C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E290u, 0x1F6930u, 0x1F6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6938u;
label_1f6938:
    // 0x1f6938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f693c:
    // 0x1f693c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f693cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6940:
    // 0x1f6940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6944:
    // 0x1f6944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f6944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6948:
    // 0x1f6948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f694c:
    // 0x1f694c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f694cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6950:
    // 0x1f6950: 0x3e00008  jr          $ra
label_1f6954:
    if (ctx->pc == 0x1F6954u) {
        ctx->pc = 0x1F6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6950u;
        // 0x1f6954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6958u;
        goto label_1f6958;
    }
    ctx->pc = 0x1F6950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6950u;
        // 0x1f6954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6958u;
label_1f6958:
    // 0x1f6958: 0x0  nop
    ctx->pc = 0x1f6958u;
    // NOP
label_1f695c:
    // 0x1f695c: 0x0  nop
    ctx->pc = 0x1f695cu;
    // NOP
label_1f6960:
    // 0x1f6960: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1f6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f6964:
    // 0x1f6964: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1f6968:
    if (ctx->pc == 0x1F6968u) {
        ctx->pc = 0x1F6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6964u;
        // 0x1f6968: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F696Cu;
        goto label_1f696c;
    }
    ctx->pc = 0x1F6964u;
    {
        const bool branch_taken_0x1f6964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6964u;
        // 0x1f6968: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6964) {
            ctx->pc = 0x1F6A18u;
            goto label_1f6a18;
        }
    }
    ctx->pc = 0x1F696Cu;
label_1f696c:
    // 0x1f696c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1f696cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f6970:
    // 0x1f6970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6974:
    // 0x1f6974: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_1f6978:
    if (ctx->pc == 0x1F6978u) {
        ctx->pc = 0x1F6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6974u;
        // 0x1f6978: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F697Cu;
        goto label_1f697c;
    }
    ctx->pc = 0x1F6974u;
    {
        const bool branch_taken_0x1f6974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6974u;
        // 0x1f6978: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6974) {
            ctx->pc = 0x1F6A10u;
            goto label_1f6a10;
        }
    }
    ctx->pc = 0x1F697Cu;
label_1f697c:
    // 0x1f697c: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1f697cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_1f6980:
    // 0x1f6980: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_1f6984:
    if (ctx->pc == 0x1F6984u) {
        ctx->pc = 0x1F6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6980u;
        // 0x1f6984: 0x248efff8  addiu       $t6, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6988u;
        goto label_1f6988;
    }
    ctx->pc = 0x1F6980u;
    {
        const bool branch_taken_0x1f6980 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6980u;
        // 0x1f6984: 0x248efff8  addiu       $t6, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6980) {
            ctx->pc = 0x1F69E0u;
            goto label_1f69e0;
        }
    }
    ctx->pc = 0x1F6988u;
label_1f6988:
    // 0x1f6988: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x1f6988u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
label_1f698c:
    // 0x1f698c: 0x258cbf60  addiu       $t4, $t4, -0x40A0
    ctx->pc = 0x1f698cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294950752));
label_1f6990:
    // 0x1f6990: 0x18d7821  addu        $t7, $t4, $t5
    ctx->pc = 0x1f6990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1f6994:
    // 0x1f6994: 0x91e70000  lbu         $a3, 0x0($t7)
    ctx->pc = 0x1f6994u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_1f6998:
    // 0x1f6998: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1f6998u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1f699c:
    // 0x1f699c: 0x91e60001  lbu         $a2, 0x1($t7)
    ctx->pc = 0x1f699cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
label_1f69a0:
    // 0x1f69a0: 0x1ae182a  slt         $v1, $t5, $t6
    ctx->pc = 0x1f69a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_1f69a4:
    // 0x1f69a4: 0x91eb0002  lbu         $t3, 0x2($t7)
    ctx->pc = 0x1f69a4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
label_1f69a8:
    // 0x1f69a8: 0x91ea0003  lbu         $t2, 0x3($t7)
    ctx->pc = 0x1f69a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
label_1f69ac:
    // 0x1f69ac: 0x91e90004  lbu         $t1, 0x4($t7)
    ctx->pc = 0x1f69acu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4)));
label_1f69b0:
    // 0x1f69b0: 0x91e80005  lbu         $t0, 0x5($t7)
    ctx->pc = 0x1f69b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 5)));
label_1f69b4:
    // 0x1f69b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f69b8:
    // 0x1f69b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f69bc:
    // 0x1f69bc: 0x91e70006  lbu         $a3, 0x6($t7)
    ctx->pc = 0x1f69bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 6)));
label_1f69c0:
    // 0x1f69c0: 0x91e60007  lbu         $a2, 0x7($t7)
    ctx->pc = 0x1f69c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 7)));
label_1f69c4:
    // 0x1f69c4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1f69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f69c8:
    // 0x1f69c8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1f69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1f69cc:
    // 0x1f69cc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1f69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1f69d0:
    // 0x1f69d0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1f69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f69d4:
    // 0x1f69d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f69d8:
    // 0x1f69d8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1f69dc:
    if (ctx->pc == 0x1F69DCu) {
        ctx->pc = 0x1F69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69D8u;
        // 0x1f69dc: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F69E0u;
        goto label_1f69e0;
    }
    ctx->pc = 0x1F69D8u;
    {
        const bool branch_taken_0x1f69d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69D8u;
        // 0x1f69dc: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69d8) {
            ctx->pc = 0x1F6990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6990;
        }
    }
    ctx->pc = 0x1F69E0u;
label_1f69e0:
    // 0x1f69e0: 0x1a4082a  slt         $at, $t5, $a0
    ctx->pc = 0x1f69e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f69e4:
    // 0x1f69e4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1f69e8:
    if (ctx->pc == 0x1F69E8u) {
        ctx->pc = 0x1F69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69E4u;
        // 0x1f69e8: 0x3c070029  lui         $a3, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F69ECu;
        goto label_1f69ec;
    }
    ctx->pc = 0x1F69E4u;
    {
        const bool branch_taken_0x1f69e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69E4u;
        // 0x1f69e8: 0x3c070029  lui         $a3, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69e4) {
            ctx->pc = 0x1F6A10u;
            goto label_1f6a10;
        }
    }
    ctx->pc = 0x1F69ECu;
label_1f69ec:
    // 0x1f69ec: 0x24e7bf60  addiu       $a3, $a3, -0x40A0
    ctx->pc = 0x1f69ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950752));
label_1f69f0:
    // 0x1f69f0: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x1f69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_1f69f4:
    // 0x1f69f4: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f69f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f69f8:
    // 0x1f69f8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1f69f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1f69fc:
    // 0x1f69fc: 0x1a4182a  slt         $v1, $t5, $a0
    ctx->pc = 0x1f69fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f6a00:
    // 0x1f6a00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f6a04:
    // 0x1f6a04: 0x0  nop
    ctx->pc = 0x1f6a04u;
    // NOP
label_1f6a08:
    // 0x1f6a08: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1f6a0c:
    if (ctx->pc == 0x1F6A0Cu) {
        ctx->pc = 0x1F6A10u;
        goto label_1f6a10;
    }
    ctx->pc = 0x1F6A08u;
    {
        const bool branch_taken_0x1f6a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a08) {
            ctx->pc = 0x1F69F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f69f0;
        }
    }
    ctx->pc = 0x1F6A10u;
label_1f6a10:
    // 0x1f6a10: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f6a14:
    if (ctx->pc == 0x1F6A14u) {
        ctx->pc = 0x1F6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A10u;
        // 0x1f6a14: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A18u;
        goto label_1f6a18;
    }
    ctx->pc = 0x1F6A10u;
    {
        const bool branch_taken_0x1f6a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A10u;
        // 0x1f6a14: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a10) {
            ctx->pc = 0x1F6ABCu;
            goto label_1f6abc;
        }
    }
    ctx->pc = 0x1F6A18u;
label_1f6a18:
    // 0x1f6a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a1c:
    // 0x1f6a1c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_1f6a20:
    if (ctx->pc == 0x1F6A20u) {
        ctx->pc = 0x1F6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A1Cu;
        // 0x1f6a20: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A24u;
        goto label_1f6a24;
    }
    ctx->pc = 0x1F6A1Cu;
    {
        const bool branch_taken_0x1f6a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A1Cu;
        // 0x1f6a20: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a1c) {
            ctx->pc = 0x1F6AB8u;
            goto label_1f6ab8;
        }
    }
    ctx->pc = 0x1F6A24u;
label_1f6a24:
    // 0x1f6a24: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1f6a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_1f6a28:
    // 0x1f6a28: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_1f6a2c:
    if (ctx->pc == 0x1F6A2Cu) {
        ctx->pc = 0x1F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A28u;
        // 0x1f6a2c: 0x248dfff8  addiu       $t5, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A30u;
        goto label_1f6a30;
    }
    ctx->pc = 0x1F6A28u;
    {
        const bool branch_taken_0x1f6a28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A28u;
        // 0x1f6a2c: 0x248dfff8  addiu       $t5, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a28) {
            ctx->pc = 0x1F6A88u;
            goto label_1f6a88;
        }
    }
    ctx->pc = 0x1F6A30u;
label_1f6a30:
    // 0x1f6a30: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x1f6a30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
label_1f6a34:
    // 0x1f6a34: 0x258cbe60  addiu       $t4, $t4, -0x41A0
    ctx->pc = 0x1f6a34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294950496));
label_1f6a38:
    // 0x1f6a38: 0x18f7021  addu        $t6, $t4, $t7
    ctx->pc = 0x1f6a38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_1f6a3c:
    // 0x1f6a3c: 0x91c70000  lbu         $a3, 0x0($t6)
    ctx->pc = 0x1f6a3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_1f6a40:
    // 0x1f6a40: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x1f6a40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_1f6a44:
    // 0x1f6a44: 0x91c60001  lbu         $a2, 0x1($t6)
    ctx->pc = 0x1f6a44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
label_1f6a48:
    // 0x1f6a48: 0x1ed182a  slt         $v1, $t7, $t5
    ctx->pc = 0x1f6a48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_1f6a4c:
    // 0x1f6a4c: 0x91cb0002  lbu         $t3, 0x2($t6)
    ctx->pc = 0x1f6a4cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
label_1f6a50:
    // 0x1f6a50: 0x91ca0003  lbu         $t2, 0x3($t6)
    ctx->pc = 0x1f6a50u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
label_1f6a54:
    // 0x1f6a54: 0x91c90004  lbu         $t1, 0x4($t6)
    ctx->pc = 0x1f6a54u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
label_1f6a58:
    // 0x1f6a58: 0x91c80005  lbu         $t0, 0x5($t6)
    ctx->pc = 0x1f6a58u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
label_1f6a5c:
    // 0x1f6a5c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f6a60:
    // 0x1f6a60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f6a64:
    // 0x1f6a64: 0x91c70006  lbu         $a3, 0x6($t6)
    ctx->pc = 0x1f6a64u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
label_1f6a68:
    // 0x1f6a68: 0x91c60007  lbu         $a2, 0x7($t6)
    ctx->pc = 0x1f6a68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
label_1f6a6c:
    // 0x1f6a6c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1f6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f6a70:
    // 0x1f6a70: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1f6a74:
    // 0x1f6a74: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1f6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1f6a78:
    // 0x1f6a78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1f6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f6a7c:
    // 0x1f6a7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f6a80:
    // 0x1f6a80: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1f6a84:
    if (ctx->pc == 0x1F6A84u) {
        ctx->pc = 0x1F6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A80u;
        // 0x1f6a84: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A88u;
        goto label_1f6a88;
    }
    ctx->pc = 0x1F6A80u;
    {
        const bool branch_taken_0x1f6a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A80u;
        // 0x1f6a84: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a80) {
            ctx->pc = 0x1F6A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6a38;
        }
    }
    ctx->pc = 0x1F6A88u;
label_1f6a88:
    // 0x1f6a88: 0x1e4082a  slt         $at, $t7, $a0
    ctx->pc = 0x1f6a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f6a8c:
    // 0x1f6a8c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1f6a90:
    if (ctx->pc == 0x1F6A90u) {
        ctx->pc = 0x1F6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A8Cu;
        // 0x1f6a90: 0x3c070029  lui         $a3, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6A94u;
        goto label_1f6a94;
    }
    ctx->pc = 0x1F6A8Cu;
    {
        const bool branch_taken_0x1f6a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A8Cu;
        // 0x1f6a90: 0x3c070029  lui         $a3, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a8c) {
            ctx->pc = 0x1F6AB8u;
            goto label_1f6ab8;
        }
    }
    ctx->pc = 0x1F6A94u;
label_1f6a94:
    // 0x1f6a94: 0x24e7be60  addiu       $a3, $a3, -0x41A0
    ctx->pc = 0x1f6a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950496));
label_1f6a98:
    // 0x1f6a98: 0xef1821  addu        $v1, $a3, $t7
    ctx->pc = 0x1f6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
label_1f6a9c:
    // 0x1f6a9c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f6a9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f6aa0:
    // 0x1f6aa0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1f6aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1f6aa4:
    // 0x1f6aa4: 0x1e4182a  slt         $v1, $t7, $a0
    ctx->pc = 0x1f6aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f6aa8:
    // 0x1f6aa8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f6aac:
    // 0x1f6aac: 0x0  nop
    ctx->pc = 0x1f6aacu;
    // NOP
label_1f6ab0:
    // 0x1f6ab0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1f6ab4:
    if (ctx->pc == 0x1F6AB4u) {
        ctx->pc = 0x1F6AB8u;
        goto label_1f6ab8;
    }
    ctx->pc = 0x1F6AB0u;
    {
        const bool branch_taken_0x1f6ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ab0) {
            ctx->pc = 0x1F6A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6a98;
        }
    }
    ctx->pc = 0x1F6AB8u;
label_1f6ab8:
    // 0x1f6ab8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f6abc:
    // 0x1f6abc: 0x3e00008  jr          $ra
label_1f6ac0:
    if (ctx->pc == 0x1F6AC0u) {
        ctx->pc = 0x1F6AC4u;
        goto label_1f6ac4;
    }
    ctx->pc = 0x1F6ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AC4u;
label_1f6ac4:
    // 0x1f6ac4: 0x0  nop
    ctx->pc = 0x1f6ac4u;
    // NOP
label_1f6ac8:
    // 0x1f6ac8: 0x0  nop
    ctx->pc = 0x1f6ac8u;
    // NOP
label_1f6acc:
    // 0x1f6acc: 0x0  nop
    ctx->pc = 0x1f6accu;
    // NOP
label_1f6ad0:
    // 0x1f6ad0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f6ad4:
    // 0x1f6ad4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1f6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1f6ad8:
    // 0x1f6ad8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1f6adc:
    // 0x1f6adc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1f6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f6ae0:
    // 0x1f6ae0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1f6ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1f6ae4:
    // 0x1f6ae4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f6ae8:
    // 0x1f6ae8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1f6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1f6aec:
    // 0x1f6aec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1f6aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1f6af0:
    // 0x1f6af0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f6af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1f6af4:
    // 0x1f6af4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f6af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1f6af8:
    // 0x1f6af8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1f6afc:
    // 0x1f6afc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f6afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1f6b00:
    // 0x1f6b00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f6b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1f6b04:
    // 0x1f6b04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f6b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f6b08:
    // 0x1f6b08: 0xaf809024  sw          $zero, -0x6FDC($gp)
    ctx->pc = 0x1f6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 0));
label_1f6b0c:
    // 0x1f6b0c: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1f6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
label_1f6b10:
    // 0x1f6b10: 0xaf809000  sw          $zero, -0x7000($gp)
    ctx->pc = 0x1f6b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938624), GPR_U32(ctx, 0));
label_1f6b14:
    // 0x1f6b14: 0xaf808ff8  sw          $zero, -0x7008($gp)
    ctx->pc = 0x1f6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938616), GPR_U32(ctx, 0));
label_1f6b18:
    // 0x1f6b18: 0xaf809004  sw          $zero, -0x6FFC($gp)
    ctx->pc = 0x1f6b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 0));
label_1f6b1c:
    // 0x1f6b1c: 0xaf808ffc  sw          $zero, -0x7004($gp)
    ctx->pc = 0x1f6b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938620), GPR_U32(ctx, 0));
label_1f6b20:
    // 0x1f6b20: 0xc07091c  jal         func_1C2470
label_1f6b24:
    if (ctx->pc == 0x1F6B24u) {
        ctx->pc = 0x1F6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B20u;
        // 0x1f6b24: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6B28u;
        goto label_1f6b28;
    }
    ctx->pc = 0x1F6B20u;
    SET_GPR_U32(ctx, 31, 0x1F6B28u);
    ctx->pc = 0x1F6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B20u;
    // 0x1f6b24: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1F6B28u;
label_1f6b28:
    // 0x1f6b28: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f6b28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b2c:
    // 0x1f6b2c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1f6b30:
    // 0x1f6b30: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f6b30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b34:
    // 0x1f6b34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f6b34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b38:
    // 0x1f6b38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f6b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b3c:
    // 0x1f6b3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f6b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b40:
    // 0x1f6b40: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f6b44:
    // 0x1f6b44: 0x24425e90  addiu       $v0, $v0, 0x5E90
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
label_1f6b48:
    // 0x1f6b48: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1f6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1f6b4c:
    // 0x1f6b4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f6b50:
    // 0x1f6b50: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f6b54:
    // 0x1f6b54: 0x5e9021  addu        $s2, $v0, $fp
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1f6b58:
    // 0x1f6b58: 0xc05e234  jal         func_1788D0
label_1f6b5c:
    if (ctx->pc == 0x1F6B5Cu) {
        ctx->pc = 0x1F6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B58u;
        // 0x1f6b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6B60u;
        goto label_1f6b60;
    }
    ctx->pc = 0x1F6B58u;
    SET_GPR_U32(ctx, 31, 0x1F6B60u);
    ctx->pc = 0x1F6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B58u;
    // 0x1f6b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F6B58u, 0x1F6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B60u;
label_1f6b60:
    // 0x1f6b60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b64:
    // 0x1f6b64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f6b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b68:
    // 0x1f6b68: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1f6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f6b6c:
    // 0x1f6b6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f6b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f6b70:
    // 0x1f6b70: 0x253a821  addu        $s5, $s2, $s3
    ctx->pc = 0x1f6b70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1f6b74:
    // 0x1f6b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6b78:
    // 0x1f6b78: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f6b78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f6b7c:
    // 0x1f6b7c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f6b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f6b80:
    // 0x1f6b80: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1f6b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1f6b84:
    // 0x1f6b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6b88:
    // 0x1f6b88: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f6b8c:
    // 0x1f6b8c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f6b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f6b90:
    // 0x1f6b90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f6b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b94:
    // 0x1f6b94: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1f6b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f6b98:
    // 0x1f6b98: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1f6b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f6b9c:
    // 0x1f6b9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ba0:
    // 0x1f6ba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ba4:
    // 0x1f6ba4: 0xc05df9c  jal         func_177E70
label_1f6ba8:
    if (ctx->pc == 0x1F6BA8u) {
        ctx->pc = 0x1F6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BA4u;
        // 0x1f6ba8: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6BACu;
        goto label_1f6bac;
    }
    ctx->pc = 0x1F6BA4u;
    SET_GPR_U32(ctx, 31, 0x1F6BACu);
    ctx->pc = 0x1F6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BA4u;
    // 0x1f6ba8: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1F6BA4u, 0x1F6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BACu;
label_1f6bac:
    // 0x1f6bac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f6bb0:
    // 0x1f6bb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f6bb4:
    // 0x1f6bb4: 0xa2a40080  sb          $a0, 0x80($s5)
    ctx->pc = 0x1f6bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 4));
label_1f6bb8:
    // 0x1f6bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f6bbc:
    // 0x1f6bbc: 0xa2a40081  sb          $a0, 0x81($s5)
    ctx->pc = 0x1f6bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 4));
label_1f6bc0:
    // 0x1f6bc0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1f6bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1f6bc4:
    // 0x1f6bc4: 0xa2a40082  sb          $a0, 0x82($s5)
    ctx->pc = 0x1f6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 4));
label_1f6bc8:
    // 0x1f6bc8: 0x267300d0  addiu       $s3, $s3, 0xD0
    ctx->pc = 0x1f6bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_1f6bcc:
    // 0x1f6bcc: 0xa2a40083  sb          $a0, 0x83($s5)
    ctx->pc = 0x1f6bccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 4));
label_1f6bd0:
    // 0x1f6bd0: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x1f6bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_1f6bd4:
    // 0x1f6bd4: 0xa2a40098  sb          $a0, 0x98($s5)
    ctx->pc = 0x1f6bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 152), (uint8_t)GPR_U32(ctx, 4));
label_1f6bd8:
    // 0x1f6bd8: 0xa2a40099  sb          $a0, 0x99($s5)
    ctx->pc = 0x1f6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 153), (uint8_t)GPR_U32(ctx, 4));
label_1f6bdc:
    // 0x1f6bdc: 0xa2a4009a  sb          $a0, 0x9A($s5)
    ctx->pc = 0x1f6bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 154), (uint8_t)GPR_U32(ctx, 4));
label_1f6be0:
    // 0x1f6be0: 0xa2a4009b  sb          $a0, 0x9B($s5)
    ctx->pc = 0x1f6be0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 155), (uint8_t)GPR_U32(ctx, 4));
label_1f6be4:
    // 0x1f6be4: 0xaea3009c  sw          $v1, 0x9C($s5)
    ctx->pc = 0x1f6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 3));
label_1f6be8:
    // 0x1f6be8: 0xa2a400b0  sb          $a0, 0xB0($s5)
    ctx->pc = 0x1f6be8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 176), (uint8_t)GPR_U32(ctx, 4));
label_1f6bec:
    // 0x1f6bec: 0xa2a400b1  sb          $a0, 0xB1($s5)
    ctx->pc = 0x1f6becu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 177), (uint8_t)GPR_U32(ctx, 4));
label_1f6bf0:
    // 0x1f6bf0: 0xa2a400b2  sb          $a0, 0xB2($s5)
    ctx->pc = 0x1f6bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 178), (uint8_t)GPR_U32(ctx, 4));
label_1f6bf4:
    // 0x1f6bf4: 0xa2a400b3  sb          $a0, 0xB3($s5)
    ctx->pc = 0x1f6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 179), (uint8_t)GPR_U32(ctx, 4));
label_1f6bf8:
    // 0x1f6bf8: 0xaea300b4  sw          $v1, 0xB4($s5)
    ctx->pc = 0x1f6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 3));
label_1f6bfc:
    // 0x1f6bfc: 0xa2a400c8  sb          $a0, 0xC8($s5)
    ctx->pc = 0x1f6bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 200), (uint8_t)GPR_U32(ctx, 4));
label_1f6c00:
    // 0x1f6c00: 0xa2a400c9  sb          $a0, 0xC9($s5)
    ctx->pc = 0x1f6c00u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 201), (uint8_t)GPR_U32(ctx, 4));
label_1f6c04:
    // 0x1f6c04: 0xa2a400ca  sb          $a0, 0xCA($s5)
    ctx->pc = 0x1f6c04u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 202), (uint8_t)GPR_U32(ctx, 4));
label_1f6c08:
    // 0x1f6c08: 0xa2a400cb  sb          $a0, 0xCB($s5)
    ctx->pc = 0x1f6c08u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 203), (uint8_t)GPR_U32(ctx, 4));
label_1f6c0c:
    // 0x1f6c0c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_1f6c10:
    if (ctx->pc == 0x1F6C10u) {
        ctx->pc = 0x1F6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C0Cu;
        // 0x1f6c10: 0xaea300cc  sw          $v1, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C14u;
        goto label_1f6c14;
    }
    ctx->pc = 0x1F6C0Cu;
    {
        const bool branch_taken_0x1f6c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C0Cu;
        // 0x1f6c10: 0xaea300cc  sw          $v1, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c0c) {
            ctx->pc = 0x1F6B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6b68;
        }
    }
    ctx->pc = 0x1F6C14u;
label_1f6c14:
    // 0x1f6c14: 0x24097600  addiu       $t1, $zero, 0x7600
    ctx->pc = 0x1f6c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30208));
label_1f6c18:
    // 0x1f6c18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6c1c:
    // 0x1f6c1c: 0x24087d00  addiu       $t0, $zero, 0x7D00
    ctx->pc = 0x1f6c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_1f6c20:
    // 0x1f6c20: 0xa6490090  sh          $t1, 0x90($s2)
    ctx->pc = 0x1f6c20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 9));
label_1f6c24:
    // 0x1f6c24: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1f6c24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f6c28:
    // 0x1f6c28: 0xa6480092  sh          $t0, 0x92($s2)
    ctx->pc = 0x1f6c28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 8));
label_1f6c2c:
    // 0x1f6c2c: 0x34078a00  ori         $a3, $zero, 0x8A00
    ctx->pc = 0x1f6c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35328);
label_1f6c30:
    // 0x1f6c30: 0xae4a0094  sw          $t2, 0x94($s2)
    ctx->pc = 0x1f6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 10));
label_1f6c34:
    // 0x1f6c34: 0xa64700a8  sh          $a3, 0xA8($s2)
    ctx->pc = 0x1f6c34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 168), (uint16_t)GPR_U32(ctx, 7));
label_1f6c38:
    // 0x1f6c38: 0x24067f00  addiu       $a2, $zero, 0x7F00
    ctx->pc = 0x1f6c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
label_1f6c3c:
    // 0x1f6c3c: 0xa64800aa  sh          $t0, 0xAA($s2)
    ctx->pc = 0x1f6c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 170), (uint16_t)GPR_U32(ctx, 8));
label_1f6c40:
    // 0x1f6c40: 0x24050608  addiu       $a1, $zero, 0x608
    ctx->pc = 0x1f6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1f6c44:
    // 0x1f6c44: 0xae4a00ac  sw          $t2, 0xAC($s2)
    ctx->pc = 0x1f6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 10));
label_1f6c48:
    // 0x1f6c48: 0x24041a08  addiu       $a0, $zero, 0x1A08
    ctx->pc = 0x1f6c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6664));
label_1f6c4c:
    // 0x1f6c4c: 0xa64900c0  sh          $t1, 0xC0($s2)
    ctx->pc = 0x1f6c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 9));
label_1f6c50:
    // 0x1f6c50: 0x24030a08  addiu       $v1, $zero, 0xA08
    ctx->pc = 0x1f6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
label_1f6c54:
    // 0x1f6c54: 0xa64600c2  sh          $a2, 0xC2($s2)
    ctx->pc = 0x1f6c54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 6));
label_1f6c58:
    // 0x1f6c58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f6c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6c5c:
    // 0x1f6c5c: 0xae4a00c4  sw          $t2, 0xC4($s2)
    ctx->pc = 0x1f6c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 10));
label_1f6c60:
    // 0x1f6c60: 0x26940840  addiu       $s4, $s4, 0x840
    ctx->pc = 0x1f6c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
label_1f6c64:
    // 0x1f6c64: 0xa64700d8  sh          $a3, 0xD8($s2)
    ctx->pc = 0x1f6c64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 7));
label_1f6c68:
    // 0x1f6c68: 0xa64600da  sh          $a2, 0xDA($s2)
    ctx->pc = 0x1f6c68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 6));
label_1f6c6c:
    // 0x1f6c6c: 0xae4a00dc  sw          $t2, 0xDC($s2)
    ctx->pc = 0x1f6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 10));
label_1f6c70:
    // 0x1f6c70: 0xa6450088  sh          $a1, 0x88($s2)
    ctx->pc = 0x1f6c70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 5));
label_1f6c74:
    // 0x1f6c74: 0xa645008a  sh          $a1, 0x8A($s2)
    ctx->pc = 0x1f6c74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 5));
label_1f6c78:
    // 0x1f6c78: 0xa64400a0  sh          $a0, 0xA0($s2)
    ctx->pc = 0x1f6c78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 4));
label_1f6c7c:
    // 0x1f6c7c: 0xa64500a2  sh          $a1, 0xA2($s2)
    ctx->pc = 0x1f6c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 5));
label_1f6c80:
    // 0x1f6c80: 0xa64500b8  sh          $a1, 0xB8($s2)
    ctx->pc = 0x1f6c80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 5));
label_1f6c84:
    // 0x1f6c84: 0xa64300ba  sh          $v1, 0xBA($s2)
    ctx->pc = 0x1f6c84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 186), (uint16_t)GPR_U32(ctx, 3));
label_1f6c88:
    // 0x1f6c88: 0xa64400d0  sh          $a0, 0xD0($s2)
    ctx->pc = 0x1f6c88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 208), (uint16_t)GPR_U32(ctx, 4));
label_1f6c8c:
    // 0x1f6c8c: 0xa64300d2  sh          $v1, 0xD2($s2)
    ctx->pc = 0x1f6c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 210), (uint16_t)GPR_U32(ctx, 3));
label_1f6c90:
    // 0x1f6c90: 0xa6490190  sh          $t1, 0x190($s2)
    ctx->pc = 0x1f6c90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 400), (uint16_t)GPR_U32(ctx, 9));
label_1f6c94:
    // 0x1f6c94: 0xa6480192  sh          $t0, 0x192($s2)
    ctx->pc = 0x1f6c94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 402), (uint16_t)GPR_U32(ctx, 8));
label_1f6c98:
    // 0x1f6c98: 0xae4a0194  sw          $t2, 0x194($s2)
    ctx->pc = 0x1f6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 10));
label_1f6c9c:
    // 0x1f6c9c: 0xa64701a8  sh          $a3, 0x1A8($s2)
    ctx->pc = 0x1f6c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 424), (uint16_t)GPR_U32(ctx, 7));
label_1f6ca0:
    // 0x1f6ca0: 0xa64801aa  sh          $t0, 0x1AA($s2)
    ctx->pc = 0x1f6ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 426), (uint16_t)GPR_U32(ctx, 8));
label_1f6ca4:
    // 0x1f6ca4: 0xae4a01ac  sw          $t2, 0x1AC($s2)
    ctx->pc = 0x1f6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 10));
label_1f6ca8:
    // 0x1f6ca8: 0xa6450188  sh          $a1, 0x188($s2)
    ctx->pc = 0x1f6ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 392), (uint16_t)GPR_U32(ctx, 5));
label_1f6cac:
    // 0x1f6cac: 0xa645018a  sh          $a1, 0x18A($s2)
    ctx->pc = 0x1f6cacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 5));
label_1f6cb0:
    // 0x1f6cb0: 0xa64401a0  sh          $a0, 0x1A0($s2)
    ctx->pc = 0x1f6cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 416), (uint16_t)GPR_U32(ctx, 4));
label_1f6cb4:
    // 0x1f6cb4: 0xa64501a2  sh          $a1, 0x1A2($s2)
    ctx->pc = 0x1f6cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 418), (uint16_t)GPR_U32(ctx, 5));
label_1f6cb8:
    // 0x1f6cb8: 0xa240016b  sb          $zero, 0x16B($s2)
    ctx->pc = 0x1f6cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 363), (uint8_t)GPR_U32(ctx, 0));
label_1f6cbc:
    // 0x1f6cbc: 0xa2400153  sb          $zero, 0x153($s2)
    ctx->pc = 0x1f6cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 339), (uint8_t)GPR_U32(ctx, 0));
label_1f6cc0:
    // 0x1f6cc0: 0xa6490248  sh          $t1, 0x248($s2)
    ctx->pc = 0x1f6cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 584), (uint16_t)GPR_U32(ctx, 9));
label_1f6cc4:
    // 0x1f6cc4: 0xa648024a  sh          $t0, 0x24A($s2)
    ctx->pc = 0x1f6cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 586), (uint16_t)GPR_U32(ctx, 8));
label_1f6cc8:
    // 0x1f6cc8: 0xae4a024c  sw          $t2, 0x24C($s2)
    ctx->pc = 0x1f6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 10));
label_1f6ccc:
    // 0x1f6ccc: 0xa6490278  sh          $t1, 0x278($s2)
    ctx->pc = 0x1f6cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 632), (uint16_t)GPR_U32(ctx, 9));
label_1f6cd0:
    // 0x1f6cd0: 0xa646027a  sh          $a2, 0x27A($s2)
    ctx->pc = 0x1f6cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 634), (uint16_t)GPR_U32(ctx, 6));
label_1f6cd4:
    // 0x1f6cd4: 0xae4a027c  sw          $t2, 0x27C($s2)
    ctx->pc = 0x1f6cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 10));
label_1f6cd8:
    // 0x1f6cd8: 0xa6450240  sh          $a1, 0x240($s2)
    ctx->pc = 0x1f6cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 576), (uint16_t)GPR_U32(ctx, 5));
label_1f6cdc:
    // 0x1f6cdc: 0xa6450242  sh          $a1, 0x242($s2)
    ctx->pc = 0x1f6cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 578), (uint16_t)GPR_U32(ctx, 5));
label_1f6ce0:
    // 0x1f6ce0: 0xa6450270  sh          $a1, 0x270($s2)
    ctx->pc = 0x1f6ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 624), (uint16_t)GPR_U32(ctx, 5));
label_1f6ce4:
    // 0x1f6ce4: 0xa6430272  sh          $v1, 0x272($s2)
    ctx->pc = 0x1f6ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 626), (uint16_t)GPR_U32(ctx, 3));
label_1f6ce8:
    // 0x1f6ce8: 0xa2400253  sb          $zero, 0x253($s2)
    ctx->pc = 0x1f6ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 595), (uint8_t)GPR_U32(ctx, 0));
label_1f6cec:
    // 0x1f6cec: 0xa2400223  sb          $zero, 0x223($s2)
    ctx->pc = 0x1f6cecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
label_1f6cf0:
    // 0x1f6cf0: 0xa6490300  sh          $t1, 0x300($s2)
    ctx->pc = 0x1f6cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 768), (uint16_t)GPR_U32(ctx, 9));
label_1f6cf4:
    // 0x1f6cf4: 0xa6460302  sh          $a2, 0x302($s2)
    ctx->pc = 0x1f6cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 770), (uint16_t)GPR_U32(ctx, 6));
label_1f6cf8:
    // 0x1f6cf8: 0xae4a0304  sw          $t2, 0x304($s2)
    ctx->pc = 0x1f6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 10));
label_1f6cfc:
    // 0x1f6cfc: 0xa6470318  sh          $a3, 0x318($s2)
    ctx->pc = 0x1f6cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 792), (uint16_t)GPR_U32(ctx, 7));
label_1f6d00:
    // 0x1f6d00: 0xa646031a  sh          $a2, 0x31A($s2)
    ctx->pc = 0x1f6d00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 794), (uint16_t)GPR_U32(ctx, 6));
label_1f6d04:
    // 0x1f6d04: 0xae4a031c  sw          $t2, 0x31C($s2)
    ctx->pc = 0x1f6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 10));
label_1f6d08:
    // 0x1f6d08: 0xa64502f8  sh          $a1, 0x2F8($s2)
    ctx->pc = 0x1f6d08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 760), (uint16_t)GPR_U32(ctx, 5));
label_1f6d0c:
    // 0x1f6d0c: 0xa64302fa  sh          $v1, 0x2FA($s2)
    ctx->pc = 0x1f6d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 762), (uint16_t)GPR_U32(ctx, 3));
label_1f6d10:
    // 0x1f6d10: 0xa6440310  sh          $a0, 0x310($s2)
    ctx->pc = 0x1f6d10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 784), (uint16_t)GPR_U32(ctx, 4));
label_1f6d14:
    // 0x1f6d14: 0xa6430312  sh          $v1, 0x312($s2)
    ctx->pc = 0x1f6d14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 786), (uint16_t)GPR_U32(ctx, 3));
label_1f6d18:
    // 0x1f6d18: 0xa240033b  sb          $zero, 0x33B($s2)
    ctx->pc = 0x1f6d18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 827), (uint8_t)GPR_U32(ctx, 0));
label_1f6d1c:
    // 0x1f6d1c: 0xa2400323  sb          $zero, 0x323($s2)
    ctx->pc = 0x1f6d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 803), (uint8_t)GPR_U32(ctx, 0));
label_1f6d20:
    // 0x1f6d20: 0xa64703d0  sh          $a3, 0x3D0($s2)
    ctx->pc = 0x1f6d20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 976), (uint16_t)GPR_U32(ctx, 7));
label_1f6d24:
    // 0x1f6d24: 0xa64803d2  sh          $t0, 0x3D2($s2)
    ctx->pc = 0x1f6d24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 978), (uint16_t)GPR_U32(ctx, 8));
label_1f6d28:
    // 0x1f6d28: 0xae4a03d4  sw          $t2, 0x3D4($s2)
    ctx->pc = 0x1f6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 980), GPR_U32(ctx, 10));
label_1f6d2c:
    // 0x1f6d2c: 0xa6470400  sh          $a3, 0x400($s2)
    ctx->pc = 0x1f6d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1024), (uint16_t)GPR_U32(ctx, 7));
label_1f6d30:
    // 0x1f6d30: 0xa6460402  sh          $a2, 0x402($s2)
    ctx->pc = 0x1f6d30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1026), (uint16_t)GPR_U32(ctx, 6));
label_1f6d34:
    // 0x1f6d34: 0xae4a0404  sw          $t2, 0x404($s2)
    ctx->pc = 0x1f6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 10));
label_1f6d38:
    // 0x1f6d38: 0xa64403c8  sh          $a0, 0x3C8($s2)
    ctx->pc = 0x1f6d38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 968), (uint16_t)GPR_U32(ctx, 4));
label_1f6d3c:
    // 0x1f6d3c: 0xa64503ca  sh          $a1, 0x3CA($s2)
    ctx->pc = 0x1f6d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 970), (uint16_t)GPR_U32(ctx, 5));
label_1f6d40:
    // 0x1f6d40: 0xa64403f8  sh          $a0, 0x3F8($s2)
    ctx->pc = 0x1f6d40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1016), (uint16_t)GPR_U32(ctx, 4));
label_1f6d44:
    // 0x1f6d44: 0xa64303fa  sh          $v1, 0x3FA($s2)
    ctx->pc = 0x1f6d44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1018), (uint16_t)GPR_U32(ctx, 3));
label_1f6d48:
    // 0x1f6d48: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1f6d48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
label_1f6d4c:
    // 0x1f6d4c: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_1f6d50:
    if (ctx->pc == 0x1F6D50u) {
        ctx->pc = 0x1F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D4Cu;
        // 0x1f6d50: 0xa24003db  sb          $zero, 0x3DB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 987), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D54u;
        goto label_1f6d54;
    }
    ctx->pc = 0x1F6D4Cu;
    {
        const bool branch_taken_0x1f6d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D4Cu;
        // 0x1f6d50: 0xa24003db  sb          $zero, 0x3DB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 987), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d4c) {
            ctx->pc = 0x1F6B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6b40;
        }
    }
    ctx->pc = 0x1F6D54u;
label_1f6d54:
    // 0x1f6d54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f6d58:
    // 0x1f6d58: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
label_1f6d5c:
    // 0x1f6d5c: 0x24423c70  addiu       $v0, $v0, 0x3C70
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15472));
    ctx->pc = 0x1f6d60u;
    return;
}
