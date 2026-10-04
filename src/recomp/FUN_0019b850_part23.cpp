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


void FUN_0019b850_part23(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a6430u: goto label_1a6430;
        case 0x1a6434u: goto label_1a6434;
        case 0x1a6438u: goto label_1a6438;
        case 0x1a643cu: goto label_1a643c;
        case 0x1a6440u: goto label_1a6440;
        case 0x1a6444u: goto label_1a6444;
        case 0x1a6448u: goto label_1a6448;
        case 0x1a644cu: goto label_1a644c;
        case 0x1a6450u: goto label_1a6450;
        case 0x1a6454u: goto label_1a6454;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a645cu: goto label_1a645c;
        case 0x1a6460u: goto label_1a6460;
        case 0x1a6464u: goto label_1a6464;
        case 0x1a6468u: goto label_1a6468;
        case 0x1a646cu: goto label_1a646c;
        case 0x1a6470u: goto label_1a6470;
        case 0x1a6474u: goto label_1a6474;
        case 0x1a6478u: goto label_1a6478;
        case 0x1a647cu: goto label_1a647c;
        case 0x1a6480u: goto label_1a6480;
        case 0x1a6484u: goto label_1a6484;
        case 0x1a6488u: goto label_1a6488;
        case 0x1a648cu: goto label_1a648c;
        case 0x1a6490u: goto label_1a6490;
        case 0x1a6494u: goto label_1a6494;
        case 0x1a6498u: goto label_1a6498;
        case 0x1a649cu: goto label_1a649c;
        case 0x1a64a0u: goto label_1a64a0;
        case 0x1a64a4u: goto label_1a64a4;
        case 0x1a64a8u: goto label_1a64a8;
        case 0x1a64acu: goto label_1a64ac;
        case 0x1a64b0u: goto label_1a64b0;
        case 0x1a64b4u: goto label_1a64b4;
        case 0x1a64b8u: goto label_1a64b8;
        case 0x1a64bcu: goto label_1a64bc;
        case 0x1a64c0u: goto label_1a64c0;
        case 0x1a64c4u: goto label_1a64c4;
        case 0x1a64c8u: goto label_1a64c8;
        case 0x1a64ccu: goto label_1a64cc;
        case 0x1a64d0u: goto label_1a64d0;
        case 0x1a64d4u: goto label_1a64d4;
        case 0x1a64d8u: goto label_1a64d8;
        case 0x1a64dcu: goto label_1a64dc;
        case 0x1a64e0u: goto label_1a64e0;
        case 0x1a64e4u: goto label_1a64e4;
        case 0x1a64e8u: goto label_1a64e8;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a64f0u: goto label_1a64f0;
        case 0x1a64f4u: goto label_1a64f4;
        case 0x1a64f8u: goto label_1a64f8;
        case 0x1a64fcu: goto label_1a64fc;
        case 0x1a6500u: goto label_1a6500;
        case 0x1a6504u: goto label_1a6504;
        case 0x1a6508u: goto label_1a6508;
        case 0x1a650cu: goto label_1a650c;
        case 0x1a6510u: goto label_1a6510;
        case 0x1a6514u: goto label_1a6514;
        case 0x1a6518u: goto label_1a6518;
        case 0x1a651cu: goto label_1a651c;
        case 0x1a6520u: goto label_1a6520;
        case 0x1a6524u: goto label_1a6524;
        case 0x1a6528u: goto label_1a6528;
        case 0x1a652cu: goto label_1a652c;
        case 0x1a6530u: goto label_1a6530;
        case 0x1a6534u: goto label_1a6534;
        case 0x1a6538u: goto label_1a6538;
        case 0x1a653cu: goto label_1a653c;
        case 0x1a6540u: goto label_1a6540;
        case 0x1a6544u: goto label_1a6544;
        case 0x1a6548u: goto label_1a6548;
        case 0x1a654cu: goto label_1a654c;
        case 0x1a6550u: goto label_1a6550;
        case 0x1a6554u: goto label_1a6554;
        case 0x1a6558u: goto label_1a6558;
        case 0x1a655cu: goto label_1a655c;
        case 0x1a6560u: goto label_1a6560;
        case 0x1a6564u: goto label_1a6564;
        case 0x1a6568u: goto label_1a6568;
        case 0x1a656cu: goto label_1a656c;
        case 0x1a6570u: goto label_1a6570;
        case 0x1a6574u: goto label_1a6574;
        case 0x1a6578u: goto label_1a6578;
        case 0x1a657cu: goto label_1a657c;
        case 0x1a6580u: goto label_1a6580;
        case 0x1a6584u: goto label_1a6584;
        case 0x1a6588u: goto label_1a6588;
        case 0x1a658cu: goto label_1a658c;
        case 0x1a6590u: goto label_1a6590;
        case 0x1a6594u: goto label_1a6594;
        case 0x1a6598u: goto label_1a6598;
        case 0x1a659cu: goto label_1a659c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65a4u: goto label_1a65a4;
        case 0x1a65a8u: goto label_1a65a8;
        case 0x1a65acu: goto label_1a65ac;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65b4u: goto label_1a65b4;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a65bcu: goto label_1a65bc;
        case 0x1a65c0u: goto label_1a65c0;
        case 0x1a65c4u: goto label_1a65c4;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65d4u: goto label_1a65d4;
        case 0x1a65d8u: goto label_1a65d8;
        case 0x1a65dcu: goto label_1a65dc;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65e4u: goto label_1a65e4;
        case 0x1a65e8u: goto label_1a65e8;
        case 0x1a65ecu: goto label_1a65ec;
        case 0x1a65f0u: goto label_1a65f0;
        case 0x1a65f4u: goto label_1a65f4;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a65fcu: goto label_1a65fc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6604u: goto label_1a6604;
        case 0x1a6608u: goto label_1a6608;
        case 0x1a660cu: goto label_1a660c;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66e8u: goto label_1a66e8;
        case 0x1a66ecu: goto label_1a66ec;
        case 0x1a66f0u: goto label_1a66f0;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a66f8u: goto label_1a66f8;
        case 0x1a66fcu: goto label_1a66fc;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a6708u: goto label_1a6708;
        case 0x1a670cu: goto label_1a670c;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6714u: goto label_1a6714;
        case 0x1a6718u: goto label_1a6718;
        case 0x1a671cu: goto label_1a671c;
        case 0x1a6720u: goto label_1a6720;
        case 0x1a6724u: goto label_1a6724;
        case 0x1a6728u: goto label_1a6728;
        case 0x1a672cu: goto label_1a672c;
        case 0x1a6730u: goto label_1a6730;
        case 0x1a6734u: goto label_1a6734;
        case 0x1a6738u: goto label_1a6738;
        case 0x1a673cu: goto label_1a673c;
        case 0x1a6740u: goto label_1a6740;
        case 0x1a6744u: goto label_1a6744;
        case 0x1a6748u: goto label_1a6748;
        case 0x1a674cu: goto label_1a674c;
        case 0x1a6750u: goto label_1a6750;
        case 0x1a6754u: goto label_1a6754;
        case 0x1a6758u: goto label_1a6758;
        case 0x1a675cu: goto label_1a675c;
        case 0x1a6760u: goto label_1a6760;
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6768u: goto label_1a6768;
        case 0x1a676cu: goto label_1a676c;
        case 0x1a6770u: goto label_1a6770;
        case 0x1a6774u: goto label_1a6774;
        case 0x1a6778u: goto label_1a6778;
        case 0x1a677cu: goto label_1a677c;
        case 0x1a6780u: goto label_1a6780;
        case 0x1a6784u: goto label_1a6784;
        case 0x1a6788u: goto label_1a6788;
        case 0x1a678cu: goto label_1a678c;
        case 0x1a6790u: goto label_1a6790;
        case 0x1a6794u: goto label_1a6794;
        case 0x1a6798u: goto label_1a6798;
        case 0x1a679cu: goto label_1a679c;
        case 0x1a67a0u: goto label_1a67a0;
        case 0x1a67a4u: goto label_1a67a4;
        case 0x1a67a8u: goto label_1a67a8;
        case 0x1a67acu: goto label_1a67ac;
        case 0x1a67b0u: goto label_1a67b0;
        case 0x1a67b4u: goto label_1a67b4;
        case 0x1a67b8u: goto label_1a67b8;
        case 0x1a67bcu: goto label_1a67bc;
        case 0x1a67c0u: goto label_1a67c0;
        case 0x1a67c4u: goto label_1a67c4;
        case 0x1a67c8u: goto label_1a67c8;
        case 0x1a67ccu: goto label_1a67cc;
        case 0x1a67d0u: goto label_1a67d0;
        case 0x1a67d4u: goto label_1a67d4;
        case 0x1a67d8u: goto label_1a67d8;
        case 0x1a67dcu: goto label_1a67dc;
        case 0x1a67e0u: goto label_1a67e0;
        case 0x1a67e4u: goto label_1a67e4;
        case 0x1a67e8u: goto label_1a67e8;
        case 0x1a67ecu: goto label_1a67ec;
        case 0x1a67f0u: goto label_1a67f0;
        case 0x1a67f4u: goto label_1a67f4;
        case 0x1a67f8u: goto label_1a67f8;
        case 0x1a67fcu: goto label_1a67fc;
        case 0x1a6800u: goto label_1a6800;
        case 0x1a6804u: goto label_1a6804;
        case 0x1a6808u: goto label_1a6808;
        case 0x1a680cu: goto label_1a680c;
        case 0x1a6810u: goto label_1a6810;
        case 0x1a6814u: goto label_1a6814;
        case 0x1a6818u: goto label_1a6818;
        case 0x1a681cu: goto label_1a681c;
        case 0x1a6820u: goto label_1a6820;
        case 0x1a6824u: goto label_1a6824;
        case 0x1a6828u: goto label_1a6828;
        case 0x1a682cu: goto label_1a682c;
        case 0x1a6830u: goto label_1a6830;
        case 0x1a6834u: goto label_1a6834;
        case 0x1a6838u: goto label_1a6838;
        case 0x1a683cu: goto label_1a683c;
        case 0x1a6840u: goto label_1a6840;
        case 0x1a6844u: goto label_1a6844;
        case 0x1a6848u: goto label_1a6848;
        case 0x1a684cu: goto label_1a684c;
        case 0x1a6850u: goto label_1a6850;
        case 0x1a6854u: goto label_1a6854;
        case 0x1a6858u: goto label_1a6858;
        case 0x1a685cu: goto label_1a685c;
        case 0x1a6860u: goto label_1a6860;
        case 0x1a6864u: goto label_1a6864;
        case 0x1a6868u: goto label_1a6868;
        case 0x1a686cu: goto label_1a686c;
        case 0x1a6870u: goto label_1a6870;
        case 0x1a6874u: goto label_1a6874;
        case 0x1a6878u: goto label_1a6878;
        case 0x1a687cu: goto label_1a687c;
        case 0x1a6880u: goto label_1a6880;
        case 0x1a6884u: goto label_1a6884;
        case 0x1a6888u: goto label_1a6888;
        case 0x1a688cu: goto label_1a688c;
        case 0x1a6890u: goto label_1a6890;
        case 0x1a6894u: goto label_1a6894;
        case 0x1a6898u: goto label_1a6898;
        case 0x1a689cu: goto label_1a689c;
        case 0x1a68a0u: goto label_1a68a0;
        case 0x1a68a4u: goto label_1a68a4;
        case 0x1a68a8u: goto label_1a68a8;
        case 0x1a68acu: goto label_1a68ac;
        case 0x1a68b0u: goto label_1a68b0;
        case 0x1a68b4u: goto label_1a68b4;
        case 0x1a68b8u: goto label_1a68b8;
        case 0x1a68bcu: goto label_1a68bc;
        case 0x1a68c0u: goto label_1a68c0;
        case 0x1a68c4u: goto label_1a68c4;
        case 0x1a68c8u: goto label_1a68c8;
        case 0x1a68ccu: goto label_1a68cc;
        case 0x1a68d0u: goto label_1a68d0;
        case 0x1a68d4u: goto label_1a68d4;
        case 0x1a68d8u: goto label_1a68d8;
        case 0x1a68dcu: goto label_1a68dc;
        case 0x1a68e0u: goto label_1a68e0;
        case 0x1a68e4u: goto label_1a68e4;
        case 0x1a68e8u: goto label_1a68e8;
        case 0x1a68ecu: goto label_1a68ec;
        case 0x1a68f0u: goto label_1a68f0;
        case 0x1a68f4u: goto label_1a68f4;
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a68fcu: goto label_1a68fc;
        case 0x1a6900u: goto label_1a6900;
        case 0x1a6904u: goto label_1a6904;
        case 0x1a6908u: goto label_1a6908;
        case 0x1a690cu: goto label_1a690c;
        case 0x1a6910u: goto label_1a6910;
        case 0x1a6914u: goto label_1a6914;
        case 0x1a6918u: goto label_1a6918;
        case 0x1a691cu: goto label_1a691c;
        case 0x1a6920u: goto label_1a6920;
        case 0x1a6924u: goto label_1a6924;
        case 0x1a6928u: goto label_1a6928;
        case 0x1a692cu: goto label_1a692c;
        case 0x1a6930u: goto label_1a6930;
        case 0x1a6934u: goto label_1a6934;
        case 0x1a6938u: goto label_1a6938;
        case 0x1a693cu: goto label_1a693c;
        case 0x1a6940u: goto label_1a6940;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6948u: goto label_1a6948;
        case 0x1a694cu: goto label_1a694c;
        case 0x1a6950u: goto label_1a6950;
        case 0x1a6954u: goto label_1a6954;
        case 0x1a6958u: goto label_1a6958;
        case 0x1a695cu: goto label_1a695c;
        case 0x1a6960u: goto label_1a6960;
        case 0x1a6964u: goto label_1a6964;
        case 0x1a6968u: goto label_1a6968;
        case 0x1a696cu: goto label_1a696c;
        case 0x1a6970u: goto label_1a6970;
        case 0x1a6974u: goto label_1a6974;
        case 0x1a6978u: goto label_1a6978;
        case 0x1a697cu: goto label_1a697c;
        case 0x1a6980u: goto label_1a6980;
        case 0x1a6984u: goto label_1a6984;
        case 0x1a6988u: goto label_1a6988;
        case 0x1a698cu: goto label_1a698c;
        case 0x1a6990u: goto label_1a6990;
        case 0x1a6994u: goto label_1a6994;
        case 0x1a6998u: goto label_1a6998;
        case 0x1a699cu: goto label_1a699c;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69a8u: goto label_1a69a8;
        case 0x1a69acu: goto label_1a69ac;
        case 0x1a69b0u: goto label_1a69b0;
        case 0x1a69b4u: goto label_1a69b4;
        case 0x1a69b8u: goto label_1a69b8;
        case 0x1a69bcu: goto label_1a69bc;
        case 0x1a69c0u: goto label_1a69c0;
        case 0x1a69c4u: goto label_1a69c4;
        case 0x1a69c8u: goto label_1a69c8;
        case 0x1a69ccu: goto label_1a69cc;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69d8u: goto label_1a69d8;
        case 0x1a69dcu: goto label_1a69dc;
        case 0x1a69e0u: goto label_1a69e0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69e8u: goto label_1a69e8;
        case 0x1a69ecu: goto label_1a69ec;
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a69f4u: goto label_1a69f4;
        case 0x1a69f8u: goto label_1a69f8;
        case 0x1a69fcu: goto label_1a69fc;
        case 0x1a6a00u: goto label_1a6a00;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a08u: goto label_1a6a08;
        case 0x1a6a0cu: goto label_1a6a0c;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a14u: goto label_1a6a14;
        case 0x1a6a18u: goto label_1a6a18;
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a24u: goto label_1a6a24;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a2cu: goto label_1a6a2c;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a34u: goto label_1a6a34;
        case 0x1a6a38u: goto label_1a6a38;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a44u: goto label_1a6a44;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a4cu: goto label_1a6a4c;
        case 0x1a6a50u: goto label_1a6a50;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6a5cu: goto label_1a6a5c;
        case 0x1a6a60u: goto label_1a6a60;
        case 0x1a6a64u: goto label_1a6a64;
        case 0x1a6a68u: goto label_1a6a68;
        case 0x1a6a6cu: goto label_1a6a6c;
        case 0x1a6a70u: goto label_1a6a70;
        case 0x1a6a74u: goto label_1a6a74;
        case 0x1a6a78u: goto label_1a6a78;
        case 0x1a6a7cu: goto label_1a6a7c;
        case 0x1a6a80u: goto label_1a6a80;
        case 0x1a6a84u: goto label_1a6a84;
        case 0x1a6a88u: goto label_1a6a88;
        case 0x1a6a8cu: goto label_1a6a8c;
        case 0x1a6a90u: goto label_1a6a90;
        case 0x1a6a94u: goto label_1a6a94;
        case 0x1a6a98u: goto label_1a6a98;
        case 0x1a6a9cu: goto label_1a6a9c;
        case 0x1a6aa0u: goto label_1a6aa0;
        case 0x1a6aa4u: goto label_1a6aa4;
        case 0x1a6aa8u: goto label_1a6aa8;
        case 0x1a6aacu: goto label_1a6aac;
        case 0x1a6ab0u: goto label_1a6ab0;
        case 0x1a6ab4u: goto label_1a6ab4;
        case 0x1a6ab8u: goto label_1a6ab8;
        case 0x1a6abcu: goto label_1a6abc;
        case 0x1a6ac0u: goto label_1a6ac0;
        case 0x1a6ac4u: goto label_1a6ac4;
        case 0x1a6ac8u: goto label_1a6ac8;
        case 0x1a6accu: goto label_1a6acc;
        case 0x1a6ad0u: goto label_1a6ad0;
        case 0x1a6ad4u: goto label_1a6ad4;
        case 0x1a6ad8u: goto label_1a6ad8;
        case 0x1a6adcu: goto label_1a6adc;
        case 0x1a6ae0u: goto label_1a6ae0;
        case 0x1a6ae4u: goto label_1a6ae4;
        case 0x1a6ae8u: goto label_1a6ae8;
        case 0x1a6aecu: goto label_1a6aec;
        case 0x1a6af0u: goto label_1a6af0;
        case 0x1a6af4u: goto label_1a6af4;
        case 0x1a6af8u: goto label_1a6af8;
        case 0x1a6afcu: goto label_1a6afc;
        case 0x1a6b00u: goto label_1a6b00;
        case 0x1a6b04u: goto label_1a6b04;
        case 0x1a6b08u: goto label_1a6b08;
        case 0x1a6b0cu: goto label_1a6b0c;
        case 0x1a6b10u: goto label_1a6b10;
        case 0x1a6b14u: goto label_1a6b14;
        case 0x1a6b18u: goto label_1a6b18;
        case 0x1a6b1cu: goto label_1a6b1c;
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b24u: goto label_1a6b24;
        case 0x1a6b28u: goto label_1a6b28;
        case 0x1a6b2cu: goto label_1a6b2c;
        case 0x1a6b30u: goto label_1a6b30;
        case 0x1a6b34u: goto label_1a6b34;
        case 0x1a6b38u: goto label_1a6b38;
        case 0x1a6b3cu: goto label_1a6b3c;
        case 0x1a6b40u: goto label_1a6b40;
        case 0x1a6b44u: goto label_1a6b44;
        case 0x1a6b48u: goto label_1a6b48;
        case 0x1a6b4cu: goto label_1a6b4c;
        case 0x1a6b50u: goto label_1a6b50;
        case 0x1a6b54u: goto label_1a6b54;
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6b5cu: goto label_1a6b5c;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b64u: goto label_1a6b64;
        case 0x1a6b68u: goto label_1a6b68;
        case 0x1a6b6cu: goto label_1a6b6c;
        case 0x1a6b70u: goto label_1a6b70;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b78u: goto label_1a6b78;
        case 0x1a6b7cu: goto label_1a6b7c;
        case 0x1a6b80u: goto label_1a6b80;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6b88u: goto label_1a6b88;
        case 0x1a6b8cu: goto label_1a6b8c;
        case 0x1a6b90u: goto label_1a6b90;
        case 0x1a6b94u: goto label_1a6b94;
        case 0x1a6b98u: goto label_1a6b98;
        case 0x1a6b9cu: goto label_1a6b9c;
        case 0x1a6ba0u: goto label_1a6ba0;
        case 0x1a6ba4u: goto label_1a6ba4;
        case 0x1a6ba8u: goto label_1a6ba8;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6bb4u: goto label_1a6bb4;
        case 0x1a6bb8u: goto label_1a6bb8;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6bc0u: goto label_1a6bc0;
        case 0x1a6bc4u: goto label_1a6bc4;
        case 0x1a6bc8u: goto label_1a6bc8;
        case 0x1a6bccu: goto label_1a6bcc;
        case 0x1a6bd0u: goto label_1a6bd0;
        case 0x1a6bd4u: goto label_1a6bd4;
        case 0x1a6bd8u: goto label_1a6bd8;
        case 0x1a6bdcu: goto label_1a6bdc;
        case 0x1a6be0u: goto label_1a6be0;
        case 0x1a6be4u: goto label_1a6be4;
        case 0x1a6be8u: goto label_1a6be8;
        case 0x1a6becu: goto label_1a6bec;
        case 0x1a6bf0u: goto label_1a6bf0;
        case 0x1a6bf4u: goto label_1a6bf4;
        case 0x1a6bf8u: goto label_1a6bf8;
        case 0x1a6bfcu: goto label_1a6bfc;
        default: return;
    }

label_1a6430:
    // 0x1a6430: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1a6434:
    if (ctx->pc == 0x1A6434u) {
        ctx->pc = 0x1A6438u;
        goto label_1a6438;
    }
    ctx->pc = 0x1A6430u;
    {
        const bool branch_taken_0x1a6430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6430) {
            ctx->pc = 0x1A6418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a6418; return; }
        }
    }
    ctx->pc = 0x1A6438u;
label_1a6438:
    // 0x1a6438: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1a643c:
    if (ctx->pc == 0x1A643Cu) {
        ctx->pc = 0x1A643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6438u;
        // 0x1a643c: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6440u;
        goto label_1a6440;
    }
    ctx->pc = 0x1A6438u;
    {
        const bool branch_taken_0x1a6438 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6438u;
        // 0x1a643c: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6438) {
            ctx->pc = 0x1A6444u;
            goto label_1a6444;
        }
    }
    ctx->pc = 0x1A6440u;
label_1a6440:
    // 0x1a6440: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1a6440u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1a6444:
    // 0x1a6444: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a6444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6448:
    // 0x1a6448: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
label_1a644c:
    if (ctx->pc == 0x1A644Cu) {
        ctx->pc = 0x1A644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6448u;
        // 0x1a644c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6450u;
        goto label_1a6450;
    }
    ctx->pc = 0x1A6448u;
    {
        const bool branch_taken_0x1a6448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6448u;
        // 0x1a644c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6448) {
            ctx->pc = 0x1A683Cu;
            goto label_1a683c;
        }
    }
    ctx->pc = 0x1A6450u;
label_1a6450:
    // 0x1a6450: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a6450u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a6454:
    // 0x1a6454: 0x0  nop
    ctx->pc = 0x1a6454u;
    // NOP
label_1a6458:
    // 0x1a6458: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1a6458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a645c:
    // 0x1a645c: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6460:
    // 0x1a6460: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1a6460u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1a6464:
    // 0x1a6464: 0x40f809  jalr        $v0
label_1a6468:
    if (ctx->pc == 0x1A6468u) {
        ctx->pc = 0x1A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6464u;
        // 0x1a6468: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A646Cu;
        goto label_1a646c;
    }
    ctx->pc = 0x1A6464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A646Cu);
        ctx->pc = 0x1A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6464u;
        // 0x1a6468: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6464u, 0x1A646Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A646Cu;
label_1a646c:
    // 0x1a646c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a646cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6470:
    // 0x1a6470: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a6474:
    if (ctx->pc == 0x1A6474u) {
        ctx->pc = 0x1A6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6470u;
        // 0x1a6474: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6478u;
        goto label_1a6478;
    }
    ctx->pc = 0x1A6470u;
    {
        const bool branch_taken_0x1a6470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6470u;
        // 0x1a6474: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6470) {
            ctx->pc = 0x1A6458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6458;
        }
    }
    ctx->pc = 0x1A6478u;
label_1a6478:
    // 0x1a6478: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1a647c:
    if (ctx->pc == 0x1A647Cu) {
        ctx->pc = 0x1A647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6478u;
        // 0x1a647c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6480u;
        goto label_1a6480;
    }
    ctx->pc = 0x1A6478u;
    {
        const bool branch_taken_0x1a6478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6478u;
        // 0x1a647c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6478) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6480u;
label_1a6480:
    // 0x1a6480: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a6484:
    // 0x1a6484: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1a6488:
    if (ctx->pc == 0x1A6488u) {
        ctx->pc = 0x1A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6484u;
        // 0x1a6488: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A648Cu;
        goto label_1a648c;
    }
    ctx->pc = 0x1A6484u;
    {
        const bool branch_taken_0x1a6484 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6484u;
        // 0x1a6488: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6484) {
            ctx->pc = 0x1A6498u;
            goto label_1a6498;
        }
    }
    ctx->pc = 0x1A648Cu;
label_1a648c:
    // 0x1a648c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a648cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a6490:
    // 0x1a6490: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a6494:
    if (ctx->pc == 0x1A6494u) {
        ctx->pc = 0x1A6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6490u;
        // 0x1a6494: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6498u;
        goto label_1a6498;
    }
    ctx->pc = 0x1A6490u;
    {
        const bool branch_taken_0x1a6490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6490u;
        // 0x1a6494: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6490) {
            ctx->pc = 0x1A64ACu;
            goto label_1a64ac;
        }
    }
    ctx->pc = 0x1A6498u;
label_1a6498:
    // 0x1a6498: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1a649c:
    if (ctx->pc == 0x1A649Cu) {
        ctx->pc = 0x1A649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6498u;
        // 0x1a649c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64A0u;
        goto label_1a64a0;
    }
    ctx->pc = 0x1A6498u;
    {
        const bool branch_taken_0x1a6498 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6498u;
        // 0x1a649c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6498) {
            ctx->pc = 0x1A64A8u;
            goto label_1a64a8;
        }
    }
    ctx->pc = 0x1A64A0u;
label_1a64a0:
    // 0x1a64a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a64a4:
    if (ctx->pc == 0x1A64A4u) {
        ctx->pc = 0x1A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64A0u;
        // 0x1a64a4: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64A8u;
        goto label_1a64a8;
    }
    ctx->pc = 0x1A64A0u;
    {
        const bool branch_taken_0x1a64a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64A0u;
        // 0x1a64a4: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64a0) {
            ctx->pc = 0x1A64ACu;
            goto label_1a64ac;
        }
    }
    ctx->pc = 0x1A64A8u;
label_1a64a8:
    // 0x1a64a8: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1a64a8u;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a64ac:
    // 0x1a64ac: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1a64acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a64b0:
    // 0x1a64b0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1a64b4:
    if (ctx->pc == 0x1A64B4u) {
        ctx->pc = 0x1A64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64B0u;
        // 0x1a64b4: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64B8u;
        goto label_1a64b8;
    }
    ctx->pc = 0x1A64B0u;
    {
        const bool branch_taken_0x1a64b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64B0u;
        // 0x1a64b4: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64b0) {
            ctx->pc = 0x1A64CCu;
            goto label_1a64cc;
        }
    }
    ctx->pc = 0x1A64B8u;
label_1a64b8:
    // 0x1a64b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a64bc:
    // 0x1a64bc: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1a64bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1a64c0:
    // 0x1a64c0: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1a64c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1a64c4:
    // 0x1a64c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a64c8:
    if (ctx->pc == 0x1A64C8u) {
        ctx->pc = 0x1A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64C4u;
        // 0x1a64c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64CCu;
        goto label_1a64cc;
    }
    ctx->pc = 0x1A64C4u;
    {
        const bool branch_taken_0x1a64c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64C4u;
        // 0x1a64c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64c4) {
            ctx->pc = 0x1A64F8u;
            goto label_1a64f8;
        }
    }
    ctx->pc = 0x1A64CCu;
label_1a64cc:
    // 0x1a64cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a64ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a64d0:
    // 0x1a64d0: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x1a64d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
label_1a64d4:
    // 0x1a64d4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1a64d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a64d8:
    // 0x1a64d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a64dc:
    if (ctx->pc == 0x1A64DCu) {
        ctx->pc = 0x1A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D8u;
        // 0x1a64dc: 0x64620030  daddiu      $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64E0u;
        goto label_1a64e0;
    }
    ctx->pc = 0x1A64D8u;
    {
        const bool branch_taken_0x1a64d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D8u;
        // 0x1a64dc: 0x64620030  daddiu      $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64d8) {
            ctx->pc = 0x1A64E4u;
            goto label_1a64e4;
        }
    }
    ctx->pc = 0x1A64E0u;
label_1a64e0:
    // 0x1a64e0: 0x64620057  daddiu      $v0, $v1, 0x57
    ctx->pc = 0x1a64e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)87);
label_1a64e4:
    // 0x1a64e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a64e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a64e8:
    // 0x1a64e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a64e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a64ec:
    // 0x1a64ec: 0x11893a  dsrl        $s1, $s1, 4
    ctx->pc = 0x1a64ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 4);
label_1a64f0:
    // 0x1a64f0: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
label_1a64f4:
    if (ctx->pc == 0x1A64F4u) {
        ctx->pc = 0x1A64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64F0u;
        // 0x1a64f4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64F8u;
        goto label_1a64f8;
    }
    ctx->pc = 0x1A64F0u;
    {
        const bool branch_taken_0x1a64f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64F0u;
        // 0x1a64f4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64f0) {
            ctx->pc = 0x1A64D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a64d0;
        }
    }
    ctx->pc = 0x1A64F8u;
label_1a64f8:
    // 0x1a64f8: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1a64fc:
    if (ctx->pc == 0x1A64FCu) {
        ctx->pc = 0x1A64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64F8u;
        // 0x1a64fc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6500u;
        goto label_1a6500;
    }
    ctx->pc = 0x1A64F8u;
    {
        const bool branch_taken_0x1a64f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64F8u;
        // 0x1a64fc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64f8) {
            ctx->pc = 0x1A6504u;
            goto label_1a6504;
        }
    }
    ctx->pc = 0x1A6500u;
label_1a6500:
    // 0x1a6500: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1a6500u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1a6504:
    // 0x1a6504: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a6504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6508:
    // 0x1a6508: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_1a650c:
    if (ctx->pc == 0x1A650Cu) {
        ctx->pc = 0x1A650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6508u;
        // 0x1a650c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6510u;
        goto label_1a6510;
    }
    ctx->pc = 0x1A6508u;
    {
        const bool branch_taken_0x1a6508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6508u;
        // 0x1a650c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6508) {
            ctx->pc = 0x1A683Cu;
            goto label_1a683c;
        }
    }
    ctx->pc = 0x1A6510u;
label_1a6510:
    // 0x1a6510: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a6510u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a6514:
    // 0x1a6514: 0x0  nop
    ctx->pc = 0x1a6514u;
    // NOP
label_1a6518:
    // 0x1a6518: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1a6518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a651c:
    // 0x1a651c: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6520:
    // 0x1a6520: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1a6524:
    // 0x1a6524: 0x40f809  jalr        $v0
label_1a6528:
    if (ctx->pc == 0x1A6528u) {
        ctx->pc = 0x1A6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6524u;
        // 0x1a6528: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A652Cu;
        goto label_1a652c;
    }
    ctx->pc = 0x1A6524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A652Cu);
        ctx->pc = 0x1A6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6524u;
        // 0x1a6528: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6524u, 0x1A652Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A652Cu;
label_1a652c:
    // 0x1a652c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6530:
    // 0x1a6530: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a6534:
    if (ctx->pc == 0x1A6534u) {
        ctx->pc = 0x1A6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6530u;
        // 0x1a6534: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6538u;
        goto label_1a6538;
    }
    ctx->pc = 0x1A6530u;
    {
        const bool branch_taken_0x1a6530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6530u;
        // 0x1a6534: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6530) {
            ctx->pc = 0x1A6518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6518;
        }
    }
    ctx->pc = 0x1A6538u;
label_1a6538:
    // 0x1a6538: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1a653c:
    if (ctx->pc == 0x1A653Cu) {
        ctx->pc = 0x1A653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6538u;
        // 0x1a653c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6540u;
        goto label_1a6540;
    }
    ctx->pc = 0x1A6538u;
    {
        const bool branch_taken_0x1a6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6538u;
        // 0x1a653c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6538) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6540u;
label_1a6540:
    // 0x1a6540: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a6540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a6544:
    // 0x1a6544: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1a6548:
    if (ctx->pc == 0x1A6548u) {
        ctx->pc = 0x1A6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6544u;
        // 0x1a6548: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A654Cu;
        goto label_1a654c;
    }
    ctx->pc = 0x1A6544u;
    {
        const bool branch_taken_0x1a6544 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6544u;
        // 0x1a6548: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6544) {
            ctx->pc = 0x1A6558u;
            goto label_1a6558;
        }
    }
    ctx->pc = 0x1A654Cu;
label_1a654c:
    // 0x1a654c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a654cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a6550:
    // 0x1a6550: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a6554:
    if (ctx->pc == 0x1A6554u) {
        ctx->pc = 0x1A6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6550u;
        // 0x1a6554: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6558u;
        goto label_1a6558;
    }
    ctx->pc = 0x1A6550u;
    {
        const bool branch_taken_0x1a6550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6550u;
        // 0x1a6554: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6550) {
            ctx->pc = 0x1A656Cu;
            goto label_1a656c;
        }
    }
    ctx->pc = 0x1A6558u;
label_1a6558:
    // 0x1a6558: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1a655c:
    if (ctx->pc == 0x1A655Cu) {
        ctx->pc = 0x1A655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6558u;
        // 0x1a655c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6560u;
        goto label_1a6560;
    }
    ctx->pc = 0x1A6558u;
    {
        const bool branch_taken_0x1a6558 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6558u;
        // 0x1a655c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6558) {
            ctx->pc = 0x1A6568u;
            goto label_1a6568;
        }
    }
    ctx->pc = 0x1A6560u;
label_1a6560:
    // 0x1a6560: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6564:
    if (ctx->pc == 0x1A6564u) {
        ctx->pc = 0x1A6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6560u;
        // 0x1a6564: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6568u;
        goto label_1a6568;
    }
    ctx->pc = 0x1A6560u;
    {
        const bool branch_taken_0x1a6560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6560u;
        // 0x1a6564: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6560) {
            ctx->pc = 0x1A656Cu;
            goto label_1a656c;
        }
    }
    ctx->pc = 0x1A6568u;
label_1a6568:
    // 0x1a6568: 0x8e71fff8  lw          $s1, -0x8($s3)
    ctx->pc = 0x1a6568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a656c:
    // 0x1a656c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a6570:
    // 0x1a6570: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1a6574:
    if (ctx->pc == 0x1A6574u) {
        ctx->pc = 0x1A6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6570u;
        // 0x1a6574: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6578u;
        goto label_1a6578;
    }
    ctx->pc = 0x1A6570u;
    {
        const bool branch_taken_0x1a6570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6570u;
        // 0x1a6574: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6570) {
            ctx->pc = 0x1A6588u;
            goto label_1a6588;
        }
    }
    ctx->pc = 0x1A6578u;
label_1a6578:
    // 0x1a6578: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a6578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a657c:
    // 0x1a657c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1a657cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1a6580:
    // 0x1a6580: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a6584:
    if (ctx->pc == 0x1A6584u) {
        ctx->pc = 0x1A6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6580u;
        // 0x1a6584: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6588u;
        goto label_1a6588;
    }
    ctx->pc = 0x1A6580u;
    {
        const bool branch_taken_0x1a6580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6580u;
        // 0x1a6584: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6580) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A6588u;
label_1a6588:
    // 0x1a6588: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_1a658c:
    if (ctx->pc == 0x1A658Cu) {
        ctx->pc = 0x1A658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6588u;
        // 0x1a658c: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6590u;
        goto label_1a6590;
    }
    ctx->pc = 0x1A6588u;
    {
        const bool branch_taken_0x1a6588 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6588u;
        // 0x1a658c: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6588) {
            ctx->pc = 0x1A65A0u;
            goto label_1a65a0;
        }
    }
    ctx->pc = 0x1A6590u;
label_1a6590:
    // 0x1a6590: 0x11882f  dsubu       $s1, $zero, $s1
    ctx->pc = 0x1a6590u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
label_1a6594:
    // 0x1a6594: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a6594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6598:
    // 0x1a6598: 0x40f809  jalr        $v0
label_1a659c:
    if (ctx->pc == 0x1A659Cu) {
        ctx->pc = 0x1A659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6598u;
        // 0x1a659c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65A0u;
        goto label_1a65a0;
    }
    ctx->pc = 0x1A6598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A65A0u);
        ctx->pc = 0x1A659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6598u;
        // 0x1a659c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6598u, 0x1A65A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A65A0u;
label_1a65a0:
    // 0x1a65a0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_1a65a4:
    if (ctx->pc == 0x1A65A4u) {
        ctx->pc = 0x1A65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65A0u;
        // 0x1a65a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65A8u;
        goto label_1a65a8;
    }
    ctx->pc = 0x1A65A0u;
    {
        const bool branch_taken_0x1a65a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65A0u;
        // 0x1a65a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65a0) {
            ctx->pc = 0x1A65ECu;
            goto label_1a65ec;
        }
    }
    ctx->pc = 0x1A65A8u;
label_1a65a8:
    // 0x1a65a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a65a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a65ac:
    // 0x1a65ac: 0x0  nop
    ctx->pc = 0x1a65acu;
    // NOP
label_1a65b0:
    // 0x1a65b0: 0xc06d6fa  jal         func_1B5BE8
label_1a65b4:
    if (ctx->pc == 0x1A65B4u) {
        ctx->pc = 0x1A65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65B0u;
        // 0x1a65b4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65B8u;
        goto label_1a65b8;
    }
    ctx->pc = 0x1A65B0u;
    SET_GPR_U32(ctx, 31, 0x1A65B8u);
    ctx->pc = 0x1A65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65B0u;
    // 0x1a65b4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5BE8u;
    { ctx->pc = 0x1b5be8; return; }
    ctx->pc = 0x1A65B8u;
label_1a65b8:
    // 0x1a65b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a65bc:
    // 0x1a65bc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1a65bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1a65c0:
    // 0x1a65c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a65c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a65c4:
    // 0x1a65c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a65c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a65c8:
    // 0x1a65c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a65c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a65cc:
    // 0x1a65cc: 0xc06d554  jal         func_1B5550
label_1a65d0:
    if (ctx->pc == 0x1A65D0u) {
        ctx->pc = 0x1A65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65CCu;
        // 0x1a65d0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65D4u;
        goto label_1a65d4;
    }
    ctx->pc = 0x1A65CCu;
    SET_GPR_U32(ctx, 31, 0x1A65D4u);
    ctx->pc = 0x1A65D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65CCu;
    // 0x1a65d0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x1A65D4u;
label_1a65d4:
    // 0x1a65d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a65d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a65d8:
    // 0x1a65d8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_1a65dc:
    if (ctx->pc == 0x1A65DCu) {
        ctx->pc = 0x1A65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65D8u;
        // 0x1a65dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65E0u;
        goto label_1a65e0;
    }
    ctx->pc = 0x1A65D8u;
    {
        const bool branch_taken_0x1a65d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65D8u;
        // 0x1a65dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65d8) {
            ctx->pc = 0x1A65B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a65b0;
        }
    }
    ctx->pc = 0x1A65E0u;
label_1a65e0:
    // 0x1a65e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a65e4:
    if (ctx->pc == 0x1A65E4u) {
        ctx->pc = 0x1A65E8u;
        goto label_1a65e8;
    }
    ctx->pc = 0x1A65E0u;
    {
        const bool branch_taken_0x1a65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a65e0) {
            ctx->pc = 0x1A65ECu;
            goto label_1a65ec;
        }
    }
    ctx->pc = 0x1A65E8u;
label_1a65e8:
    // 0x1a65e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a65e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a65ec:
    // 0x1a65ec: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1a65f0:
    if (ctx->pc == 0x1A65F0u) {
        ctx->pc = 0x1A65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65ECu;
        // 0x1a65f0: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65F4u;
        goto label_1a65f4;
    }
    ctx->pc = 0x1A65ECu;
    {
        const bool branch_taken_0x1a65ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65ECu;
        // 0x1a65f0: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65ec) {
            ctx->pc = 0x1A65F8u;
            goto label_1a65f8;
        }
    }
    ctx->pc = 0x1A65F4u;
label_1a65f4:
    // 0x1a65f4: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1a65f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1a65f8:
    // 0x1a65f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a65f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a65fc:
    // 0x1a65fc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_1a6600:
    if (ctx->pc == 0x1A6600u) {
        ctx->pc = 0x1A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65FCu;
        // 0x1a6600: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6604u;
        goto label_1a6604;
    }
    ctx->pc = 0x1A65FCu;
    {
        const bool branch_taken_0x1a65fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65FCu;
        // 0x1a6600: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65fc) {
            ctx->pc = 0x1A683Cu;
            goto label_1a683c;
        }
    }
    ctx->pc = 0x1A6604u;
label_1a6604:
    // 0x1a6604: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a6608:
    // 0x1a6608: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a660c:
    // 0x1a660c: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6610:
    // 0x1a6610: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1a6610u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1a6614:
    // 0x1a6614: 0x40f809  jalr        $v0
label_1a6618:
    if (ctx->pc == 0x1A6618u) {
        ctx->pc = 0x1A6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6614u;
        // 0x1a6618: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A661Cu;
        goto label_1a661c;
    }
    ctx->pc = 0x1A6614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A661Cu);
        ctx->pc = 0x1A6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6614u;
        // 0x1a6618: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6614u, 0x1A661Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A661Cu;
label_1a661c:
    // 0x1a661c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6620:
    // 0x1a6620: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a6624:
    if (ctx->pc == 0x1A6624u) {
        ctx->pc = 0x1A6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6620u;
        // 0x1a6624: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6628u;
        goto label_1a6628;
    }
    ctx->pc = 0x1A6620u;
    {
        const bool branch_taken_0x1a6620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6620u;
        // 0x1a6624: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6620) {
            ctx->pc = 0x1A6608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6608;
        }
    }
    ctx->pc = 0x1A6628u;
label_1a6628:
    // 0x1a6628: 0x10000085  b           . + 4 + (0x85 << 2)
label_1a662c:
    if (ctx->pc == 0x1A662Cu) {
        ctx->pc = 0x1A662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6628u;
        // 0x1a662c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6630u;
        goto label_1a6630;
    }
    ctx->pc = 0x1A6628u;
    {
        const bool branch_taken_0x1a6628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6628u;
        // 0x1a662c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6628) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6630u;
label_1a6630:
    // 0x1a6630: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a6634:
    // 0x1a6634: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1a6638:
    if (ctx->pc == 0x1A6638u) {
        ctx->pc = 0x1A6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6634u;
        // 0x1a6638: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A663Cu;
        goto label_1a663c;
    }
    ctx->pc = 0x1A6634u;
    {
        const bool branch_taken_0x1a6634 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6634u;
        // 0x1a6638: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6634) {
            ctx->pc = 0x1A6648u;
            goto label_1a6648;
        }
    }
    ctx->pc = 0x1A663Cu;
label_1a663c:
    // 0x1a663c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a663cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a6640:
    // 0x1a6640: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a6644:
    if (ctx->pc == 0x1A6644u) {
        ctx->pc = 0x1A6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6640u;
        // 0x1a6644: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6648u;
        goto label_1a6648;
    }
    ctx->pc = 0x1A6640u;
    {
        const bool branch_taken_0x1a6640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6640u;
        // 0x1a6644: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6640) {
            ctx->pc = 0x1A665Cu;
            goto label_1a665c;
        }
    }
    ctx->pc = 0x1A6648u;
label_1a6648:
    // 0x1a6648: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1a664c:
    if (ctx->pc == 0x1A664Cu) {
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6650u;
        goto label_1a6650;
    }
    ctx->pc = 0x1A6648u;
    {
        const bool branch_taken_0x1a6648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6648) {
            ctx->pc = 0x1A6658u;
            goto label_1a6658;
        }
    }
    ctx->pc = 0x1A6650u;
label_1a6650:
    // 0x1a6650: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6654:
    if (ctx->pc == 0x1A6654u) {
        ctx->pc = 0x1A6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6650u;
        // 0x1a6654: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6658u;
        goto label_1a6658;
    }
    ctx->pc = 0x1A6650u;
    {
        const bool branch_taken_0x1a6650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6650u;
        // 0x1a6654: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6650) {
            ctx->pc = 0x1A665Cu;
            goto label_1a665c;
        }
    }
    ctx->pc = 0x1A6658u;
label_1a6658:
    // 0x1a6658: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1a6658u;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a665c:
    // 0x1a665c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1a665cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a6660:
    // 0x1a6660: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1a6664:
    if (ctx->pc == 0x1A6664u) {
        ctx->pc = 0x1A6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6660u;
        // 0x1a6664: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6668u;
        goto label_1a6668;
    }
    ctx->pc = 0x1A6660u;
    {
        const bool branch_taken_0x1a6660 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6660u;
        // 0x1a6664: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6660) {
            ctx->pc = 0x1A667Cu;
            goto label_1a667c;
        }
    }
    ctx->pc = 0x1A6668u;
label_1a6668:
    // 0x1a6668: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a6668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a666c:
    // 0x1a666c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1a666cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1a6670:
    // 0x1a6670: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1a6670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1a6674:
    // 0x1a6674: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a6678:
    if (ctx->pc == 0x1A6678u) {
        ctx->pc = 0x1A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6674u;
        // 0x1a6678: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A667Cu;
        goto label_1a667c;
    }
    ctx->pc = 0x1A6674u;
    {
        const bool branch_taken_0x1a6674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6674u;
        // 0x1a6678: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6674) {
            ctx->pc = 0x1A66B8u;
            goto label_1a66b8;
        }
    }
    ctx->pc = 0x1A667Cu;
label_1a667c:
    // 0x1a667c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a667cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a6680:
    // 0x1a6680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6684:
    // 0x1a6684: 0x0  nop
    ctx->pc = 0x1a6684u;
    // NOP
label_1a6688:
    // 0x1a6688: 0xc06d9fe  jal         func_1B67F8
label_1a668c:
    if (ctx->pc == 0x1A668Cu) {
        ctx->pc = 0x1A668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6688u;
        // 0x1a668c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6690u;
        goto label_1a6690;
    }
    ctx->pc = 0x1A6688u;
    SET_GPR_U32(ctx, 31, 0x1A6690u);
    ctx->pc = 0x1A668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6688u;
    // 0x1a668c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x1A6690u;
label_1a6690:
    // 0x1a6690: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a6690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6694:
    // 0x1a6694: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1a6694u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1a6698:
    // 0x1a6698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a669c:
    // 0x1a669c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a66a0:
    // 0x1a66a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a66a4:
    // 0x1a66a4: 0xc06d89e  jal         func_1B6278
label_1a66a8:
    if (ctx->pc == 0x1A66A8u) {
        ctx->pc = 0x1A66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66A4u;
        // 0x1a66a8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66ACu;
        goto label_1a66ac;
    }
    ctx->pc = 0x1A66A4u;
    SET_GPR_U32(ctx, 31, 0x1A66ACu);
    ctx->pc = 0x1A66A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66A4u;
    // 0x1a66a8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x1A66ACu;
label_1a66ac:
    // 0x1a66ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a66acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a66b0:
    // 0x1a66b0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_1a66b4:
    if (ctx->pc == 0x1A66B4u) {
        ctx->pc = 0x1A66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66B0u;
        // 0x1a66b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66B8u;
        goto label_1a66b8;
    }
    ctx->pc = 0x1A66B0u;
    {
        const bool branch_taken_0x1a66b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66B0u;
        // 0x1a66b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66b0) {
            ctx->pc = 0x1A6688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6688;
        }
    }
    ctx->pc = 0x1A66B8u;
label_1a66b8:
    // 0x1a66b8: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1a66bc:
    if (ctx->pc == 0x1A66BCu) {
        ctx->pc = 0x1A66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66B8u;
        // 0x1a66bc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66C0u;
        goto label_1a66c0;
    }
    ctx->pc = 0x1A66B8u;
    {
        const bool branch_taken_0x1a66b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66B8u;
        // 0x1a66bc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66b8) {
            ctx->pc = 0x1A66C4u;
            goto label_1a66c4;
        }
    }
    ctx->pc = 0x1A66C0u;
label_1a66c0:
    // 0x1a66c0: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1a66c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1a66c4:
    // 0x1a66c4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a66c8:
    // 0x1a66c8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_1a66cc:
    if (ctx->pc == 0x1A66CCu) {
        ctx->pc = 0x1A66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66C8u;
        // 0x1a66cc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66D0u;
        goto label_1a66d0;
    }
    ctx->pc = 0x1A66C8u;
    {
        const bool branch_taken_0x1a66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66C8u;
        // 0x1a66cc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66c8) {
            ctx->pc = 0x1A683Cu;
            goto label_1a683c;
        }
    }
    ctx->pc = 0x1A66D0u;
label_1a66d0:
    // 0x1a66d0: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a66d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a66d4:
    // 0x1a66d4: 0x0  nop
    ctx->pc = 0x1a66d4u;
    // NOP
label_1a66d8:
    // 0x1a66d8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1a66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a66dc:
    // 0x1a66dc: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a66e0:
    // 0x1a66e0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1a66e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1a66e4:
    // 0x1a66e4: 0x40f809  jalr        $v0
label_1a66e8:
    if (ctx->pc == 0x1A66E8u) {
        ctx->pc = 0x1A66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66E4u;
        // 0x1a66e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66ECu;
        goto label_1a66ec;
    }
    ctx->pc = 0x1A66E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A66ECu);
        ctx->pc = 0x1A66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66E4u;
        // 0x1a66e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A66E4u, 0x1A66ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A66ECu;
label_1a66ec:
    // 0x1a66ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a66f0:
    // 0x1a66f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a66f4:
    if (ctx->pc == 0x1A66F4u) {
        ctx->pc = 0x1A66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66F0u;
        // 0x1a66f4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66F8u;
        goto label_1a66f8;
    }
    ctx->pc = 0x1A66F0u;
    {
        const bool branch_taken_0x1a66f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66F0u;
        // 0x1a66f4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66f0) {
            ctx->pc = 0x1A66D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a66d8;
        }
    }
    ctx->pc = 0x1A66F8u;
label_1a66f8:
    // 0x1a66f8: 0x10000051  b           . + 4 + (0x51 << 2)
label_1a66fc:
    if (ctx->pc == 0x1A66FCu) {
        ctx->pc = 0x1A66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66F8u;
        // 0x1a66fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6700u;
        goto label_1a6700;
    }
    ctx->pc = 0x1A66F8u;
    {
        const bool branch_taken_0x1a66f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66F8u;
        // 0x1a66fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66f8) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6700u;
label_1a6700:
    // 0x1a6700: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a6700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a6704:
    // 0x1a6704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6708:
    // 0x1a6708: 0xc66cfff8  lwc1        $f12, -0x8($s3)
    ctx->pc = 0x1a6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a670c:
    // 0x1a670c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1a670cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6710:
    // 0x1a6710: 0x0  nop
    ctx->pc = 0x1a6710u;
    // NOP
label_1a6714:
    // 0x1a6714: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a6718:
    if (ctx->pc == 0x1A6718u) {
        ctx->pc = 0x1A6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6714u;
        // 0x1a6718: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A671Cu;
        goto label_1a671c;
    }
    ctx->pc = 0x1A6714u;
    {
        const bool branch_taken_0x1a6714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6714u;
        // 0x1a6718: 0x3c150028  lui         $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6714) {
            ctx->pc = 0x1A6734u;
            goto label_1a6734;
        }
    }
    ctx->pc = 0x1A671Cu;
label_1a671c:
    // 0x1a671c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1a671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a6720:
    // 0x1a6720: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6724:
    // 0x1a6724: 0x40f809  jalr        $v0
label_1a6728:
    if (ctx->pc == 0x1A6728u) {
        ctx->pc = 0x1A6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6724u;
        // 0x1a6728: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A672Cu;
        goto label_1a672c;
    }
    ctx->pc = 0x1A6724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A672Cu);
        ctx->pc = 0x1A6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6724u;
        // 0x1a6728: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6724u, 0x1A672Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A672Cu;
label_1a672c:
    // 0x1a672c: 0x10000044  b           . + 4 + (0x44 << 2)
label_1a6730:
    if (ctx->pc == 0x1A6730u) {
        ctx->pc = 0x1A6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A672Cu;
        // 0x1a6730: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6734u;
        goto label_1a6734;
    }
    ctx->pc = 0x1A672Cu;
    {
        const bool branch_taken_0x1a672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A672Cu;
        // 0x1a6730: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a672c) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6734u;
label_1a6734:
    // 0x1a6734: 0xc06dc5a  jal         func_1B7168
label_1a6738:
    if (ctx->pc == 0x1A6738u) {
        ctx->pc = 0x1A6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6734u;
        // 0x1a6738: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A673Cu;
        goto label_1a673c;
    }
    ctx->pc = 0x1A6734u;
    SET_GPR_U32(ctx, 31, 0x1A673Cu);
    ctx->pc = 0x1A6738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6734u;
    // 0x1a6738: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7168u;
    { ctx->pc = 0x1b7168; return; }
    ctx->pc = 0x1A673Cu;
label_1a673c:
    // 0x1a673c: 0xc06984c  jal         func_1A6130
label_1a6740:
    if (ctx->pc == 0x1A6740u) {
        ctx->pc = 0x1A6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A673Cu;
        // 0x1a6740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6744u;
        goto label_1a6744;
    }
    ctx->pc = 0x1A673Cu;
    SET_GPR_U32(ctx, 31, 0x1A6744u);
    ctx->pc = 0x1A6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A673Cu;
    // 0x1a6740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6130u;
    { ctx->pc = 0x1a6130; return; }
    ctx->pc = 0x1A6744u;
label_1a6744:
    // 0x1a6744: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a6748:
    if (ctx->pc == 0x1A6748u) {
        ctx->pc = 0x1A6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6744u;
        // 0x1a6748: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A674Cu;
        goto label_1a674c;
    }
    ctx->pc = 0x1A6744u;
    {
        const bool branch_taken_0x1a6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6744u;
        // 0x1a6748: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6744) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A674Cu;
label_1a674c:
    // 0x1a674c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a674cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a6750:
    // 0x1a6750: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a6754:
    // 0x1a6754: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a6758:
    // 0x1a6758: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1a675c:
    if (ctx->pc == 0x1A675Cu) {
        ctx->pc = 0x1A675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6758u;
        // 0x1a675c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6760u;
        goto label_1a6760;
    }
    ctx->pc = 0x1A6758u;
    {
        const bool branch_taken_0x1a6758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6758u;
        // 0x1a675c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6758) {
            ctx->pc = 0x1A67B8u;
            goto label_1a67b8;
        }
    }
    ctx->pc = 0x1A6760u;
label_1a6760:
    // 0x1a6760: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a6764:
    // 0x1a6764: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a6768:
    // 0x1a6768: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a676c:
    // 0x1a676c: 0x40f809  jalr        $v0
label_1a6770:
    if (ctx->pc == 0x1A6770u) {
        ctx->pc = 0x1A6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A676Cu;
        // 0x1a6770: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6774u;
        goto label_1a6774;
    }
    ctx->pc = 0x1A676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6774u);
        ctx->pc = 0x1A6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A676Cu;
        // 0x1a6770: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A676Cu, 0x1A6774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6774u;
label_1a6774:
    // 0x1a6774: 0x8ea35b64  lw          $v1, 0x5B64($s5)
    ctx->pc = 0x1a6774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6778:
    // 0x1a6778: 0x60f809  jalr        $v1
label_1a677c:
    if (ctx->pc == 0x1A677Cu) {
        ctx->pc = 0x1A677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6778u;
        // 0x1a677c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6780u;
        goto label_1a6780;
    }
    ctx->pc = 0x1A6778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6780u);
        ctx->pc = 0x1A677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6778u;
        // 0x1a677c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6778u, 0x1A6780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6780u;
label_1a6780:
    // 0x1a6780: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a6780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6784:
    // 0x1a6784: 0x40f809  jalr        $v0
label_1a6788:
    if (ctx->pc == 0x1A6788u) {
        ctx->pc = 0x1A6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6784u;
        // 0x1a6788: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A678Cu;
        goto label_1a678c;
    }
    ctx->pc = 0x1A6784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A678Cu);
        ctx->pc = 0x1A6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6784u;
        // 0x1a6788: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6784u, 0x1A678Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A678Cu;
label_1a678c:
    // 0x1a678c: 0x8ea35b64  lw          $v1, 0x5B64($s5)
    ctx->pc = 0x1a678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6790:
    // 0x1a6790: 0x60f809  jalr        $v1
label_1a6794:
    if (ctx->pc == 0x1A6794u) {
        ctx->pc = 0x1A6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6790u;
        // 0x1a6794: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6798u;
        goto label_1a6798;
    }
    ctx->pc = 0x1A6790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6798u);
        ctx->pc = 0x1A6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6790u;
        // 0x1a6794: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6790u, 0x1A6798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6798u;
label_1a6798:
    // 0x1a6798: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a6798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a679c:
    // 0x1a679c: 0x40f809  jalr        $v0
label_1a67a0:
    if (ctx->pc == 0x1A67A0u) {
        ctx->pc = 0x1A67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A679Cu;
        // 0x1a67a0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67A4u;
        goto label_1a67a4;
    }
    ctx->pc = 0x1A679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A67A4u);
        ctx->pc = 0x1A67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A679Cu;
        // 0x1a67a0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A679Cu, 0x1A67A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A67A4u;
label_1a67a4:
    // 0x1a67a4: 0x8ea35b64  lw          $v1, 0x5B64($s5)
    ctx->pc = 0x1a67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a67a8:
    // 0x1a67a8: 0x60f809  jalr        $v1
label_1a67ac:
    if (ctx->pc == 0x1A67ACu) {
        ctx->pc = 0x1A67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67A8u;
        // 0x1a67ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67B0u;
        goto label_1a67b0;
    }
    ctx->pc = 0x1A67A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A67B0u);
        ctx->pc = 0x1A67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67A8u;
        // 0x1a67ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A67A8u, 0x1A67B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A67B0u;
label_1a67b0:
    // 0x1a67b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a67b4:
    if (ctx->pc == 0x1A67B4u) {
        ctx->pc = 0x1A67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67B0u;
        // 0x1a67b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67B8u;
        goto label_1a67b8;
    }
    ctx->pc = 0x1A67B0u;
    {
        const bool branch_taken_0x1a67b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67B0u;
        // 0x1a67b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67b0) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A67B8u;
label_1a67b8:
    // 0x1a67b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1a67b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a67bc:
    // 0x1a67bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a67bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a67c0:
    // 0x1a67c0: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a67c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a67c4:
    // 0x1a67c4: 0x0  nop
    ctx->pc = 0x1a67c4u;
    // NOP
label_1a67c8:
    // 0x1a67c8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1a67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1a67cc:
    // 0x1a67cc: 0x8ea35b64  lw          $v1, 0x5B64($s5)
    ctx->pc = 0x1a67ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a67d0:
    // 0x1a67d0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1a67d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1a67d4:
    // 0x1a67d4: 0x60f809  jalr        $v1
label_1a67d8:
    if (ctx->pc == 0x1A67D8u) {
        ctx->pc = 0x1A67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67D4u;
        // 0x1a67d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67DCu;
        goto label_1a67dc;
    }
    ctx->pc = 0x1A67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A67DCu);
        ctx->pc = 0x1A67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67D4u;
        // 0x1a67d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A67D4u, 0x1A67DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A67DCu;
label_1a67dc:
    // 0x1a67dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a67dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a67e0:
    // 0x1a67e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a67e4:
    if (ctx->pc == 0x1A67E4u) {
        ctx->pc = 0x1A67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67E0u;
        // 0x1a67e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67E8u;
        goto label_1a67e8;
    }
    ctx->pc = 0x1A67E0u;
    {
        const bool branch_taken_0x1a67e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67E0u;
        // 0x1a67e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67e0) {
            ctx->pc = 0x1A67C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a67c8;
        }
    }
    ctx->pc = 0x1A67E8u;
label_1a67e8:
    // 0x1a67e8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a67ec:
    if (ctx->pc == 0x1A67ECu) {
        ctx->pc = 0x1A67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67E8u;
        // 0x1a67ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67F0u;
        goto label_1a67f0;
    }
    ctx->pc = 0x1A67E8u;
    {
        const bool branch_taken_0x1a67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67E8u;
        // 0x1a67ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67e8) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A67F0u;
label_1a67f0:
    // 0x1a67f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a67f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a67f4:
    // 0x1a67f4: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1a67f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1a67f8:
    // 0x1a67f8: 0x8271fff8  lb          $s1, -0x8($s3)
    ctx->pc = 0x1a67f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a67fc:
    // 0x1a67fc: 0x8ea25b64  lw          $v0, 0x5B64($s5)
    ctx->pc = 0x1a67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23396)));
label_1a6800:
    // 0x1a6800: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1a6800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_1a6804:
    // 0x1a6804: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a6804u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1a6808:
    // 0x1a6808: 0x40f809  jalr        $v0
label_1a680c:
    if (ctx->pc == 0x1A680Cu) {
        ctx->pc = 0x1A680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6808u;
        // 0x1a680c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6810u;
        goto label_1a6810;
    }
    ctx->pc = 0x1A6808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6810u);
        ctx->pc = 0x1A680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6808u;
        // 0x1a680c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6808u, 0x1A6810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6810u;
label_1a6810:
    // 0x1a6810: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a6814:
    if (ctx->pc == 0x1A6814u) {
        ctx->pc = 0x1A6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6810u;
        // 0x1a6814: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6818u;
        goto label_1a6818;
    }
    ctx->pc = 0x1A6810u;
    {
        const bool branch_taken_0x1a6810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6810u;
        // 0x1a6814: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6810) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6818u;
label_1a6818:
    // 0x1a6818: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a681c:
    // 0x1a681c: 0x8c435b64  lw          $v1, 0x5B64($v0)
    ctx->pc = 0x1a681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23396)));
label_1a6820:
    // 0x1a6820: 0x60f809  jalr        $v1
label_1a6824:
    if (ctx->pc == 0x1A6824u) {
        ctx->pc = 0x1A6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6820u;
        // 0x1a6824: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6828u;
        goto label_1a6828;
    }
    ctx->pc = 0x1A6820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6828u);
        ctx->pc = 0x1A6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6820u;
        // 0x1a6824: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6820u, 0x1A6828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6828u;
label_1a6828:
    // 0x1a6828: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a682c:
    if (ctx->pc == 0x1A682Cu) {
        ctx->pc = 0x1A682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6828u;
        // 0x1a682c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6830u;
        goto label_1a6830;
    }
    ctx->pc = 0x1A6828u;
    {
        const bool branch_taken_0x1a6828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6828u;
        // 0x1a682c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6828) {
            ctx->pc = 0x1A6840u;
            goto label_1a6840;
        }
    }
    ctx->pc = 0x1A6830u;
label_1a6830:
    // 0x1a6830: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6834:
    if (ctx->pc == 0x1A6834u) {
        ctx->pc = 0x1A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6830u;
        // 0x1a6834: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6838u;
        goto label_1a6838;
    }
    ctx->pc = 0x1A6830u;
    {
        const bool branch_taken_0x1a6830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6830u;
        // 0x1a6834: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6830) {
            ctx->pc = 0x1A683Cu;
            goto label_1a683c;
        }
    }
    ctx->pc = 0x1A6838u;
label_1a6838:
    // 0x1a6838: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a6838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a683c:
    // 0x1a683c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a683cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6840:
    // 0x1a6840: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6844:
    // 0x1a6844: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
label_1a6848:
    if (ctx->pc == 0x1A6848u) {
        ctx->pc = 0x1A6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6844u;
        // 0x1a6848: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A684Cu;
        goto label_1a684c;
    }
    ctx->pc = 0x1A6844u;
    {
        const bool branch_taken_0x1a6844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6844u;
        // 0x1a6848: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6844) {
            ctx->pc = 0x1A62D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a62d8; return; }
        }
    }
    ctx->pc = 0x1A684Cu;
label_1a684c:
    // 0x1a684c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1a6850:
    if (ctx->pc == 0x1A6850u) {
        ctx->pc = 0x1A6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A684Cu;
        // 0x1a6850: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6854u;
        goto label_1a6854;
    }
    ctx->pc = 0x1A684Cu;
    {
        const bool branch_taken_0x1a684c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A684Cu;
        // 0x1a6850: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a684c) {
            ctx->pc = 0x1A6860u;
            goto label_1a6860;
        }
    }
    ctx->pc = 0x1A6854u;
label_1a6854:
    // 0x1a6854: 0xc06b52a  jal         func_1AD4A8
label_1a6858:
    if (ctx->pc == 0x1A6858u) {
        ctx->pc = 0x1A685Cu;
        goto label_1a685c;
    }
    ctx->pc = 0x1A6854u;
    SET_GPR_U32(ctx, 31, 0x1A685Cu);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A685Cu;
label_1a685c:
    // 0x1a685c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a6860:
    // 0x1a6860: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a6860u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6864:
    // 0x1a6864: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a6864u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6868:
    // 0x1a6868: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a6868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a686c:
    // 0x1a686c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a686cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6870:
    // 0x1a6870: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a6870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6874:
    // 0x1a6874: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a6874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6878:
    // 0x1a6878: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a6878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a687c:
    // 0x1a687c: 0x3e00008  jr          $ra
label_1a6880:
    if (ctx->pc == 0x1A6880u) {
        ctx->pc = 0x1A6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A687Cu;
        // 0x1a6880: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6884u;
        goto label_1a6884;
    }
    ctx->pc = 0x1A687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A687Cu;
        // 0x1a6880: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A687Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6884u;
label_1a6884:
    // 0x1a6884: 0x0  nop
    ctx->pc = 0x1a6884u;
    // NOP
label_1a6888:
    // 0x1a6888: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a688c:
    // 0x1a688c: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x1a688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
label_1a6890:
    // 0x1a6890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6894:
    // 0x1a6894: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1a6898:
    // 0x1a6898: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x1a6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
label_1a689c:
    // 0x1a689c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x1a689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
label_1a68a0:
    // 0x1a68a0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x1a68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
label_1a68a4:
    // 0x1a68a4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x1a68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
label_1a68a8:
    // 0x1a68a8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x1a68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
label_1a68ac:
    // 0x1a68ac: 0xc0698a6  jal         func_1A6298
label_1a68b0:
    if (ctx->pc == 0x1A68B0u) {
        ctx->pc = 0x1A68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68ACu;
        // 0x1a68b0: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68B4u;
        goto label_1a68b4;
    }
    ctx->pc = 0x1A68ACu;
    SET_GPR_U32(ctx, 31, 0x1A68B4u);
    ctx->pc = 0x1A68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68ACu;
    // 0x1a68b0: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6298u;
    { ctx->pc = 0x1a6298; return; }
    ctx->pc = 0x1A68B4u;
label_1a68b4:
    // 0x1a68b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a68b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a68b8:
    // 0x1a68b8: 0x3e00008  jr          $ra
label_1a68bc:
    if (ctx->pc == 0x1A68BCu) {
        ctx->pc = 0x1A68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68B8u;
        // 0x1a68bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68C0u;
        goto label_1a68c0;
    }
    ctx->pc = 0x1A68B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68B8u;
        // 0x1a68bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A68B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A68C0u;
label_1a68c0:
    // 0x1a68c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a68c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a68c4:
    // 0x1a68c4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a68c8:
    // 0x1a68c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a68cc:
    // 0x1a68cc: 0x24425fb8  addiu       $v0, $v0, 0x5FB8
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24504));
label_1a68d0:
    // 0x1a68d0: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a68d4:
    // 0x1a68d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a68d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a68d8:
    // 0x1a68d8: 0x8e115b64  lw          $s1, 0x5B64($s0)
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23396)));
label_1a68dc:
    // 0x1a68dc: 0xffa50078  sd          $a1, 0x78($sp)
    ctx->pc = 0x1a68dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
label_1a68e0:
    // 0x1a68e0: 0xae025b64  sw          $v0, 0x5B64($s0)
    ctx->pc = 0x1a68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23396), GPR_U32(ctx, 2));
label_1a68e4:
    // 0x1a68e4: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1a68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1a68e8:
    // 0x1a68e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a68e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a68ec:
    // 0x1a68ec: 0xffa60080  sd          $a2, 0x80($sp)
    ctx->pc = 0x1a68ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
label_1a68f0:
    // 0x1a68f0: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x1a68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
label_1a68f4:
    // 0x1a68f4: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x1a68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
label_1a68f8:
    // 0x1a68f8: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x1a68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
label_1a68fc:
    // 0x1a68fc: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x1a68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
label_1a6900:
    // 0x1a6900: 0xc0698a6  jal         func_1A6298
label_1a6904:
    if (ctx->pc == 0x1A6904u) {
        ctx->pc = 0x1A6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6900u;
        // 0x1a6904: 0xffab00a8  sd          $t3, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6908u;
        goto label_1a6908;
    }
    ctx->pc = 0x1A6900u;
    SET_GPR_U32(ctx, 31, 0x1A6908u);
    ctx->pc = 0x1A6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6900u;
    // 0x1a6904: 0xffab00a8  sd          $t3, 0xA8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6298u;
    { ctx->pc = 0x1a6298; return; }
    ctx->pc = 0x1A6908u;
label_1a6908:
    // 0x1a6908: 0xae115b64  sw          $s1, 0x5B64($s0)
    ctx->pc = 0x1a6908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23396), GPR_U32(ctx, 17));
label_1a690c:
    // 0x1a690c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6910:
    // 0x1a6910: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6914:
    // 0x1a6914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6918:
    // 0x1a6918: 0x3e00008  jr          $ra
label_1a691c:
    if (ctx->pc == 0x1A691Cu) {
        ctx->pc = 0x1A691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6918u;
        // 0x1a691c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6920u;
        goto label_1a6920;
    }
    ctx->pc = 0x1A6918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6918u;
        // 0x1a691c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6920u;
label_1a6920:
    // 0x1a6920: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a6924:
    // 0x1a6924: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1a6928:
    // 0x1a6928: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a692c:
    // 0x1a692c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a692cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a6930:
    // 0x1a6930: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a6930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a6934:
    // 0x1a6934: 0x3e00008  jr          $ra
label_1a6938:
    if (ctx->pc == 0x1A6938u) {
        ctx->pc = 0x1A6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6934u;
        // 0x1a6938: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A693Cu;
        goto label_1a693c;
    }
    ctx->pc = 0x1A6934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6934u;
        // 0x1a6938: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A693Cu;
label_1a693c:
    // 0x1a693c: 0x0  nop
    ctx->pc = 0x1a693cu;
    // NOP
label_1a6940:
    // 0x1a6940: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a6944:
    // 0x1a6944: 0x3e00008  jr          $ra
label_1a6948:
    if (ctx->pc == 0x1A6948u) {
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A694Cu;
        goto label_1a694c;
    }
    ctx->pc = 0x1A6944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A694Cu;
label_1a694c:
    // 0x1a694c: 0x0  nop
    ctx->pc = 0x1a694cu;
    // NOP
label_1a6950:
    // 0x1a6950: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6954:
    // 0x1a6954: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6958:
    // 0x1a6958: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x1a6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
label_1a695c:
    // 0x1a695c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a6960:
    // 0x1a6960: 0x3e00008  jr          $ra
label_1a6964:
    if (ctx->pc == 0x1A6964u) {
        ctx->pc = 0x1A6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6960u;
        // 0x1a6964: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6968u;
        goto label_1a6968;
    }
    ctx->pc = 0x1A6960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6960u;
        // 0x1a6964: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6968u;
label_1a6968:
    // 0x1a6968: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a696c:
    // 0x1a696c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a696cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6970:
    // 0x1a6970: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
label_1a6974:
    // 0x1a6974: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a6974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a6978:
    // 0x1a6978: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a6978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a697c:
    // 0x1a697c: 0x3e00008  jr          $ra
label_1a6980:
    if (ctx->pc == 0x1A6980u) {
        ctx->pc = 0x1A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A697Cu;
        // 0x1a6980: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6984u;
        goto label_1a6984;
    }
    ctx->pc = 0x1A697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A697Cu;
        // 0x1a6980: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6984u;
label_1a6984:
    // 0x1a6984: 0x0  nop
    ctx->pc = 0x1a6984u;
    // NOP
label_1a6988:
    // 0x1a6988: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a698c:
    // 0x1a698c: 0x3e00008  jr          $ra
label_1a6990:
    if (ctx->pc == 0x1A6990u) {
        ctx->pc = 0x1A6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A698Cu;
        // 0x1a6990: 0x24421818  addiu       $v0, $v0, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6994u;
        goto label_1a6994;
    }
    ctx->pc = 0x1A698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A698Cu;
        // 0x1a6990: 0x24421818  addiu       $v0, $v0, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6994u;
label_1a6994:
    // 0x1a6994: 0x0  nop
    ctx->pc = 0x1a6994u;
    // NOP
label_1a6998:
    // 0x1a6998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a699c:
    // 0x1a699c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a69a0:
    // 0x1a69a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a69a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a69a4:
    // 0x1a69a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a69a8:
    // 0x1a69a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a69a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a69ac:
    // 0x1a69ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a69acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a69b0:
    // 0x1a69b0: 0xc06b518  jal         func_1AD460
label_1a69b4:
    if (ctx->pc == 0x1A69B4u) {
        ctx->pc = 0x1A69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69B0u;
        // 0x1a69b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69B8u;
        goto label_1a69b8;
    }
    ctx->pc = 0x1A69B0u;
    SET_GPR_U32(ctx, 31, 0x1A69B8u);
    ctx->pc = 0x1A69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69B0u;
    // 0x1a69b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A69B8u;
label_1a69b8:
    // 0x1a69b8: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_1a69bc:
    // 0x1a69bc: 0x8d425b68  lw          $v0, 0x5B68($t2)
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 23400)));
label_1a69c0:
    // 0x1a69c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a69c4:
    if (ctx->pc == 0x1A69C4u) {
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69C8u;
        goto label_1a69c8;
    }
    ctx->pc = 0x1A69C0u;
    {
        const bool branch_taken_0x1a69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c0) {
            ctx->pc = 0x1A69E8u;
            goto label_1a69e8;
        }
    }
    ctx->pc = 0x1A69C8u;
label_1a69c8:
    // 0x1a69c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a69c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a69cc:
    // 0x1a69cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a69ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a69d0:
    // 0x1a69d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a69d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a69d4:
    // 0x1a69d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a69d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a69d8:
    // 0x1a69d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a69d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a69dc:
    // 0x1a69dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a69dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a69e0:
    // 0x1a69e0: 0x806b52a  j           func_1AD4A8
label_1a69e4:
    if (ctx->pc == 0x1A69E4u) {
        ctx->pc = 0x1A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69E0u;
        // 0x1a69e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69E8u;
        goto label_1a69e8;
    }
    ctx->pc = 0x1A69E0u;
    ctx->pc = 0x1A69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69E0u;
    // 0x1a69e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A69E8u;
label_1a69e8:
    // 0x1a69e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a69ec:
    // 0x1a69ec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1a69f0:
    // 0x1a69f0: 0x24a517c0  addiu       $a1, $a1, 0x17C0
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
label_1a69f4:
    // 0x1a69f4: 0x26661740  addiu       $a2, $s3, 0x1740
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
label_1a69f8:
    // 0x1a69f8: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a69fc:
    // 0x1a69fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1a69fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1a6a00:
    // 0x1a6a00: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1a6a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1a6a04:
    // 0x1a6a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a08:
    // 0x1a6a08: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1a6a0c:
    // 0x1a6a0c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a6a10:
    // 0x1a6a10: 0x26421818  addiu       $v0, $s2, 0x1818
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
label_1a6a14:
    // 0x1a6a14: 0xad435b68  sw          $v1, 0x5B68($t2)
    ctx->pc = 0x1a6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 23400), GPR_U32(ctx, 3));
label_1a6a18:
    // 0x1a6a18: 0x25281840  addiu       $t0, $t1, 0x1840
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 6208));
label_1a6a1c:
    // 0x1a6a1c: 0xae461818  sw          $a2, 0x1818($s2)
    ctx->pc = 0x1a6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6168), GPR_U32(ctx, 6));
label_1a6a20:
    // 0x1a6a20: 0x24841940  addiu       $a0, $a0, 0x1940
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6464));
label_1a6a24:
    // 0x1a6a24: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a6a28:
    // 0x1a6a28: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1a6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1a6a2c:
    // 0x1a6a2c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1a6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1a6a30:
    // 0x1a6a30: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1a6a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6a34:
    // 0x1a6a34: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1a6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
label_1a6a38:
    // 0x1a6a38: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a6a38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a6a3c:
    // 0x1a6a3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a6a40:
    // 0x1a6a40: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a6a44:
    // 0x1a6a44: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1a6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
label_1a6a48:
    // 0x1a6a48: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1a6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_1a6a4c:
    // 0x1a6a4c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1a6a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_1a6a50:
    // 0x1a6a50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1a6a54:
    // 0x1a6a54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6a58:
    // 0x1a6a58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a6a5c:
    // 0x1a6a5c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1a6a60:
    // 0x1a6a60: 0x0  nop
    ctx->pc = 0x1a6a60u;
    // NOP
label_1a6a64:
    // 0x1a6a64: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_1a6a68:
    if (ctx->pc == 0x1A6A68u) {
        ctx->pc = 0x1A6A6Cu;
        goto label_1a6a6c;
    }
    ctx->pc = 0x1A6A64u;
    {
        const bool branch_taken_0x1a6a64 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a6a64) {
            ctx->pc = 0x1A6A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6a50;
        }
    }
    ctx->pc = 0x1A6A6Cu;
label_1a6a6c:
    // 0x1a6a6c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6a70:
    // 0x1a6a70: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a6a74:
    // 0x1a6a74: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x1a6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
label_1a6a78:
    // 0x1a6a78: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_1a6a7c:
    // 0x1a6a7c: 0x0  nop
    ctx->pc = 0x1a6a7cu;
    // NOP
label_1a6a80:
    // 0x1a6a80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a6a84:
    // 0x1a6a84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a6a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6a88:
    // 0x1a6a88: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1a6a8c:
    // 0x1a6a8c: 0x0  nop
    ctx->pc = 0x1a6a8cu;
    // NOP
label_1a6a90:
    // 0x1a6a90: 0x0  nop
    ctx->pc = 0x1a6a90u;
    // NOP
label_1a6a94:
    // 0x1a6a94: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_1a6a98:
    if (ctx->pc == 0x1A6A98u) {
        ctx->pc = 0x1A6A9Cu;
        goto label_1a6a9c;
    }
    ctx->pc = 0x1A6A94u;
    {
        const bool branch_taken_0x1a6a94 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a6a94) {
            ctx->pc = 0x1A6A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6a80;
        }
    }
    ctx->pc = 0x1A6A9Cu;
label_1a6a9c:
    // 0x1a6a9c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a6aa0:
    // 0x1a6aa0: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
label_1a6aa4:
    // 0x1a6aa4: 0x24426940  addiu       $v0, $v0, 0x6940
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26944));
label_1a6aa8:
    // 0x1a6aa8: 0x25241840  addiu       $a0, $t1, 0x1840
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 6208));
label_1a6aac:
    // 0x1a6aac: 0x24636920  addiu       $v1, $v1, 0x6920
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26912));
label_1a6ab0:
    // 0x1a6ab0: 0x26511818  addiu       $s1, $s2, 0x1818
    ctx->pc = 0x1a6ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
label_1a6ab4:
    // 0x1a6ab4: 0xad221840  sw          $v0, 0x1840($t1)
    ctx->pc = 0x1a6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6208), GPR_U32(ctx, 2));
label_1a6ab8:
    // 0x1a6ab8: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a6abc:
    // 0x1a6abc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1a6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1a6ac0:
    // 0x1a6ac0: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x1a6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_1a6ac4:
    // 0x1a6ac4: 0xc06b52a  jal         func_1AD4A8
label_1a6ac8:
    if (ctx->pc == 0x1A6AC8u) {
        ctx->pc = 0x1A6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AC4u;
        // 0x1a6ac8: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6ACCu;
        goto label_1a6acc;
    }
    ctx->pc = 0x1A6AC4u;
    SET_GPR_U32(ctx, 31, 0x1A6ACCu);
    ctx->pc = 0x1A6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AC4u;
    // 0x1a6ac8: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A6ACCu;
label_1a6acc:
    // 0x1a6acc: 0xc0692a8  jal         func_1A4AA0
label_1a6ad0:
    if (ctx->pc == 0x1A6AD0u) {
        ctx->pc = 0x1A6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ACCu;
        // 0x1a6ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6AD4u;
        goto label_1a6ad4;
    }
    ctx->pc = 0x1A6ACCu;
    SET_GPR_U32(ctx, 31, 0x1A6AD4u);
    ctx->pc = 0x1A6AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6ACCu;
    // 0x1a6ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1A6AD4u;
label_1a6ad4:
    // 0x1a6ad4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a6ad8:
    // 0x1a6ad8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
label_1a6adc:
    // 0x1a6adc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6ae0:
    // 0x1a6ae0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1a6ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1a6ae4:
    // 0x1a6ae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a6ae8:
    if (ctx->pc == 0x1A6AE8u) {
        ctx->pc = 0x1A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AE4u;
        // 0x1a6ae8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6AECu;
        goto label_1a6aec;
    }
    ctx->pc = 0x1A6AE4u;
    {
        const bool branch_taken_0x1a6ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AE4u;
        // 0x1a6ae8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ae4) {
            ctx->pc = 0x1A6AF8u;
            goto label_1a6af8;
        }
    }
    ctx->pc = 0x1A6AECu;
label_1a6aec:
    // 0x1a6aec: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a6af0:
    // 0x1a6af0: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x1a6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 16));
label_1a6af4:
    // 0x1a6af4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a6af8:
    // 0x1a6af8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1a6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1a6afc:
    // 0x1a6afc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6b00:
    // 0x1a6b00: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1a6b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1a6b04:
    // 0x1a6b04: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a6b08:
    if (ctx->pc == 0x1A6B08u) {
        ctx->pc = 0x1A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B04u;
        // 0x1a6b08: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B0Cu;
        goto label_1a6b0c;
    }
    ctx->pc = 0x1A6B04u;
    {
        const bool branch_taken_0x1a6b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B04u;
        // 0x1a6b08: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b04) {
            ctx->pc = 0x1A6B18u;
            goto label_1a6b18;
        }
    }
    ctx->pc = 0x1A6B0Cu;
label_1a6b0c:
    // 0x1a6b0c: 0xc069300  jal         func_1A4C00
label_1a6b10:
    if (ctx->pc == 0x1A6B10u) {
        ctx->pc = 0x1A6B14u;
        goto label_1a6b14;
    }
    ctx->pc = 0x1A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B14u);
    ctx->pc = 0x1A4C00u;
    { ctx->pc = 0x1a4c00; return; }
    ctx->pc = 0x1A6B14u;
label_1a6b14:
    // 0x1a6b14: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a6b18:
    // 0x1a6b18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6b1c:
    // 0x1a6b1c: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
label_1a6b20:
    // 0x1a6b20: 0xc06914c  jal         func_1A4530
label_1a6b24:
    if (ctx->pc == 0x1A6B24u) {
        ctx->pc = 0x1A6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B20u;
        // 0x1a6b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B28u;
        goto label_1a6b28;
    }
    ctx->pc = 0x1A6B20u;
    SET_GPR_U32(ctx, 31, 0x1A6B28u);
    ctx->pc = 0x1A6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B20u;
    // 0x1a6b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4530u;
    { ctx->pc = 0x1a4530; return; }
    ctx->pc = 0x1A6B28u;
label_1a6b28:
    // 0x1a6b28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6b2c:
    // 0x1a6b2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6b30:
    // 0x1a6b30: 0xc06950e  jal         func_1A5438
label_1a6b34:
    if (ctx->pc == 0x1A6B34u) {
        ctx->pc = 0x1A6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B30u;
        // 0x1a6b34: 0xac621814  sw          $v0, 0x1814($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B38u;
        goto label_1a6b38;
    }
    ctx->pc = 0x1A6B30u;
    SET_GPR_U32(ctx, 31, 0x1A6B38u);
    ctx->pc = 0x1A6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B30u;
    // 0x1a6b34: 0xac621814  sw          $v0, 0x1814($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5438u;
    { ctx->pc = 0x1a5438; return; }
    ctx->pc = 0x1A6B38u;
label_1a6b38:
    // 0x1a6b38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6b3c:
    // 0x1a6b3c: 0xc06930c  jal         func_1A4C30
label_1a6b40:
    if (ctx->pc == 0x1A6B40u) {
        ctx->pc = 0x1A6B44u;
        goto label_1a6b44;
    }
    ctx->pc = 0x1A6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B44u);
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A6B44u;
label_1a6b44:
    // 0x1a6b44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1a6b48:
    if (ctx->pc == 0x1A6B48u) {
        ctx->pc = 0x1A6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B44u;
        // 0x1a6b48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B4Cu;
        goto label_1a6b4c;
    }
    ctx->pc = 0x1A6B44u;
    {
        const bool branch_taken_0x1a6b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B44u;
        // 0x1a6b48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b44) {
            ctx->pc = 0x1A6B8Cu;
            goto label_1a6b8c;
        }
    }
    ctx->pc = 0x1A6B4Cu;
label_1a6b4c:
    // 0x1a6b4c: 0x26851800  addiu       $a1, $s4, 0x1800
    ctx->pc = 0x1a6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6144));
label_1a6b50:
    // 0x1a6b50: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
label_1a6b54:
    // 0x1a6b54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6b58:
    // 0x1a6b58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6b5c:
    // 0x1a6b5c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6b60:
    // 0x1a6b60: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a6b64:
    // 0x1a6b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6b68:
    // 0x1a6b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b6c:
    // 0x1a6b6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6b70:
    // 0x1a6b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b74:
    // 0x1a6b74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6b78:
    // 0x1a6b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b7c:
    // 0x1a6b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6b80:
    // 0x1a6b80: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1a6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1a6b84:
    // 0x1a6b84: 0x8069b84  j           func_1A6E10
label_1a6b88:
    if (ctx->pc == 0x1A6B88u) {
        ctx->pc = 0x1A6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B84u;
        // 0x1a6b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B8Cu;
        goto label_1a6b8c;
    }
    ctx->pc = 0x1A6B84u;
    ctx->pc = 0x1A6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B84u;
    // 0x1a6b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A6B8Cu;
label_1a6b8c:
    // 0x1a6b8c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x1a6b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_1a6b90:
    // 0x1a6b90: 0xc06930c  jal         func_1A4C30
label_1a6b94:
    if (ctx->pc == 0x1A6B94u) {
        ctx->pc = 0x1A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B90u;
        // 0x1a6b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B98u;
        goto label_1a6b98;
    }
    ctx->pc = 0x1A6B90u;
    SET_GPR_U32(ctx, 31, 0x1A6B98u);
    ctx->pc = 0x1A6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B90u;
    // 0x1a6b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A6B98u;
label_1a6b98:
    // 0x1a6b98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1a6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_1a6b9c:
    // 0x1a6b9c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_1a6ba0:
    if (ctx->pc == 0x1A6BA0u) {
        ctx->pc = 0x1A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B9Cu;
        // 0x1a6ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BA4u;
        goto label_1a6ba4;
    }
    ctx->pc = 0x1A6B9Cu;
    {
        const bool branch_taken_0x1a6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B9Cu;
        // 0x1a6ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b9c) {
            ctx->pc = 0x1A6B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6b90;
        }
    }
    ctx->pc = 0x1A6BA4u;
label_1a6ba4:
    // 0x1a6ba4: 0xc06930c  jal         func_1A4C30
label_1a6ba8:
    if (ctx->pc == 0x1A6BA8u) {
        ctx->pc = 0x1A6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BA4u;
        // 0x1a6ba8: 0x26501818  addiu       $s0, $s2, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BACu;
        goto label_1a6bac;
    }
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x1A6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BA4u;
    // 0x1a6ba8: 0x26501818  addiu       $s0, $s2, 0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A6BACu;
label_1a6bac:
    // 0x1a6bac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a6bb0:
    // 0x1a6bb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6bb4:
    // 0x1a6bb4: 0xc069308  jal         func_1A4C20
label_1a6bb8:
    if (ctx->pc == 0x1A6BB8u) {
        ctx->pc = 0x1A6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BB4u;
        // 0x1a6bb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BBCu;
        goto label_1a6bbc;
    }
    ctx->pc = 0x1A6BB4u;
    SET_GPR_U32(ctx, 31, 0x1A6BBCu);
    ctx->pc = 0x1A6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BB4u;
    // 0x1a6bb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1A6BBCu;
label_1a6bbc:
    // 0x1a6bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6bc0:
    // 0x1a6bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bc4:
    // 0x1a6bc4: 0xc069308  jal         func_1A4C20
label_1a6bc8:
    if (ctx->pc == 0x1A6BC8u) {
        ctx->pc = 0x1A6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BC4u;
        // 0x1a6bc8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BCCu;
        goto label_1a6bcc;
    }
    ctx->pc = 0x1A6BC4u;
    SET_GPR_U32(ctx, 31, 0x1A6BCCu);
    ctx->pc = 0x1A6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BC4u;
    // 0x1a6bc8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1A6BCCu;
label_1a6bcc:
    // 0x1a6bcc: 0x26831800  addiu       $v1, $s4, 0x1800
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6144));
label_1a6bd0:
    // 0x1a6bd0: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
label_1a6bd4:
    // 0x1a6bd4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6bd8:
    // 0x1a6bd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6bdc:
    // 0x1a6bdc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6be0:
    // 0x1a6be0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a6be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6be4:
    // 0x1a6be4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a6be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6be8:
    // 0x1a6be8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1a6be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_1a6bec:
    // 0x1a6bec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6bf0:
    // 0x1a6bf0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a6bf4:
    // 0x1a6bf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6bf8:
    // 0x1a6bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bfc:
    // 0x1a6bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a6c00u;
    return;
}
