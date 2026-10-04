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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part213(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b63e4u: goto label_1b63e4;
        case 0x1b63e8u: goto label_1b63e8;
        case 0x1b63ecu: goto label_1b63ec;
        case 0x1b63f0u: goto label_1b63f0;
        case 0x1b63f4u: goto label_1b63f4;
        case 0x1b63f8u: goto label_1b63f8;
        case 0x1b63fcu: goto label_1b63fc;
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6404u: goto label_1b6404;
        case 0x1b6408u: goto label_1b6408;
        case 0x1b640cu: goto label_1b640c;
        case 0x1b6410u: goto label_1b6410;
        case 0x1b6414u: goto label_1b6414;
        case 0x1b6418u: goto label_1b6418;
        case 0x1b641cu: goto label_1b641c;
        case 0x1b6420u: goto label_1b6420;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b6428u: goto label_1b6428;
        case 0x1b642cu: goto label_1b642c;
        case 0x1b6430u: goto label_1b6430;
        case 0x1b6434u: goto label_1b6434;
        case 0x1b6438u: goto label_1b6438;
        case 0x1b643cu: goto label_1b643c;
        case 0x1b6440u: goto label_1b6440;
        case 0x1b6444u: goto label_1b6444;
        case 0x1b6448u: goto label_1b6448;
        case 0x1b644cu: goto label_1b644c;
        case 0x1b6450u: goto label_1b6450;
        case 0x1b6454u: goto label_1b6454;
        case 0x1b6458u: goto label_1b6458;
        case 0x1b645cu: goto label_1b645c;
        case 0x1b6460u: goto label_1b6460;
        case 0x1b6464u: goto label_1b6464;
        case 0x1b6468u: goto label_1b6468;
        case 0x1b646cu: goto label_1b646c;
        case 0x1b6470u: goto label_1b6470;
        case 0x1b6474u: goto label_1b6474;
        case 0x1b6478u: goto label_1b6478;
        case 0x1b647cu: goto label_1b647c;
        case 0x1b6480u: goto label_1b6480;
        case 0x1b6484u: goto label_1b6484;
        case 0x1b6488u: goto label_1b6488;
        case 0x1b648cu: goto label_1b648c;
        case 0x1b6490u: goto label_1b6490;
        case 0x1b6494u: goto label_1b6494;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b649cu: goto label_1b649c;
        case 0x1b64a0u: goto label_1b64a0;
        case 0x1b64a4u: goto label_1b64a4;
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64acu: goto label_1b64ac;
        case 0x1b64b0u: goto label_1b64b0;
        case 0x1b64b4u: goto label_1b64b4;
        case 0x1b64b8u: goto label_1b64b8;
        case 0x1b64bcu: goto label_1b64bc;
        case 0x1b64c0u: goto label_1b64c0;
        case 0x1b64c4u: goto label_1b64c4;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64ccu: goto label_1b64cc;
        case 0x1b64d0u: goto label_1b64d0;
        case 0x1b64d4u: goto label_1b64d4;
        case 0x1b64d8u: goto label_1b64d8;
        case 0x1b64dcu: goto label_1b64dc;
        case 0x1b64e0u: goto label_1b64e0;
        case 0x1b64e4u: goto label_1b64e4;
        case 0x1b64e8u: goto label_1b64e8;
        case 0x1b64ecu: goto label_1b64ec;
        case 0x1b64f0u: goto label_1b64f0;
        case 0x1b64f4u: goto label_1b64f4;
        case 0x1b64f8u: goto label_1b64f8;
        case 0x1b64fcu: goto label_1b64fc;
        case 0x1b6500u: goto label_1b6500;
        case 0x1b6504u: goto label_1b6504;
        case 0x1b6508u: goto label_1b6508;
        case 0x1b650cu: goto label_1b650c;
        case 0x1b6510u: goto label_1b6510;
        case 0x1b6514u: goto label_1b6514;
        case 0x1b6518u: goto label_1b6518;
        case 0x1b651cu: goto label_1b651c;
        case 0x1b6520u: goto label_1b6520;
        case 0x1b6524u: goto label_1b6524;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b652cu: goto label_1b652c;
        case 0x1b6530u: goto label_1b6530;
        case 0x1b6534u: goto label_1b6534;
        case 0x1b6538u: goto label_1b6538;
        case 0x1b653cu: goto label_1b653c;
        case 0x1b6540u: goto label_1b6540;
        case 0x1b6544u: goto label_1b6544;
        case 0x1b6548u: goto label_1b6548;
        case 0x1b654cu: goto label_1b654c;
        case 0x1b6550u: goto label_1b6550;
        case 0x1b6554u: goto label_1b6554;
        case 0x1b6558u: goto label_1b6558;
        case 0x1b655cu: goto label_1b655c;
        case 0x1b6560u: goto label_1b6560;
        case 0x1b6564u: goto label_1b6564;
        case 0x1b6568u: goto label_1b6568;
        case 0x1b656cu: goto label_1b656c;
        case 0x1b6570u: goto label_1b6570;
        case 0x1b6574u: goto label_1b6574;
        case 0x1b6578u: goto label_1b6578;
        case 0x1b657cu: goto label_1b657c;
        case 0x1b6580u: goto label_1b6580;
        case 0x1b6584u: goto label_1b6584;
        case 0x1b6588u: goto label_1b6588;
        case 0x1b658cu: goto label_1b658c;
        case 0x1b6590u: goto label_1b6590;
        case 0x1b6594u: goto label_1b6594;
        case 0x1b6598u: goto label_1b6598;
        case 0x1b659cu: goto label_1b659c;
        case 0x1b65a0u: goto label_1b65a0;
        case 0x1b65a4u: goto label_1b65a4;
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65acu: goto label_1b65ac;
        case 0x1b65b0u: goto label_1b65b0;
        case 0x1b65b4u: goto label_1b65b4;
        case 0x1b65b8u: goto label_1b65b8;
        case 0x1b65bcu: goto label_1b65bc;
        case 0x1b65c0u: goto label_1b65c0;
        case 0x1b65c4u: goto label_1b65c4;
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b65ccu: goto label_1b65cc;
        case 0x1b65d0u: goto label_1b65d0;
        case 0x1b65d4u: goto label_1b65d4;
        case 0x1b65d8u: goto label_1b65d8;
        case 0x1b65dcu: goto label_1b65dc;
        case 0x1b65e0u: goto label_1b65e0;
        case 0x1b65e4u: goto label_1b65e4;
        case 0x1b65e8u: goto label_1b65e8;
        case 0x1b65ecu: goto label_1b65ec;
        case 0x1b65f0u: goto label_1b65f0;
        case 0x1b65f4u: goto label_1b65f4;
        case 0x1b65f8u: goto label_1b65f8;
        case 0x1b65fcu: goto label_1b65fc;
        case 0x1b6600u: goto label_1b6600;
        case 0x1b6604u: goto label_1b6604;
        case 0x1b6608u: goto label_1b6608;
        case 0x1b660cu: goto label_1b660c;
        case 0x1b6610u: goto label_1b6610;
        case 0x1b6614u: goto label_1b6614;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b661cu: goto label_1b661c;
        case 0x1b6620u: goto label_1b6620;
        case 0x1b6624u: goto label_1b6624;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b662cu: goto label_1b662c;
        case 0x1b6630u: goto label_1b6630;
        case 0x1b6634u: goto label_1b6634;
        case 0x1b6638u: goto label_1b6638;
        case 0x1b663cu: goto label_1b663c;
        case 0x1b6640u: goto label_1b6640;
        case 0x1b6644u: goto label_1b6644;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b664cu: goto label_1b664c;
        case 0x1b6650u: goto label_1b6650;
        case 0x1b6654u: goto label_1b6654;
        case 0x1b6658u: goto label_1b6658;
        case 0x1b665cu: goto label_1b665c;
        case 0x1b6660u: goto label_1b6660;
        case 0x1b6664u: goto label_1b6664;
        case 0x1b6668u: goto label_1b6668;
        case 0x1b666cu: goto label_1b666c;
        case 0x1b6670u: goto label_1b6670;
        case 0x1b6674u: goto label_1b6674;
        case 0x1b6678u: goto label_1b6678;
        case 0x1b667cu: goto label_1b667c;
        case 0x1b6680u: goto label_1b6680;
        case 0x1b6684u: goto label_1b6684;
        case 0x1b6688u: goto label_1b6688;
        case 0x1b668cu: goto label_1b668c;
        case 0x1b6690u: goto label_1b6690;
        case 0x1b6694u: goto label_1b6694;
        case 0x1b6698u: goto label_1b6698;
        case 0x1b669cu: goto label_1b669c;
        case 0x1b66a0u: goto label_1b66a0;
        case 0x1b66a4u: goto label_1b66a4;
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66acu: goto label_1b66ac;
        case 0x1b66b0u: goto label_1b66b0;
        case 0x1b66b4u: goto label_1b66b4;
        case 0x1b66b8u: goto label_1b66b8;
        case 0x1b66bcu: goto label_1b66bc;
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
        default: return;
    }

label_1b63e0:
    // 0x1b63e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b63e4:
    // 0x1b63e4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_1b63e8:
    if (ctx->pc == 0x1B63E8u) {
        ctx->pc = 0x1B63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63E4u;
        // 0x1b63e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63ECu;
        goto label_1b63ec;
    }
    ctx->pc = 0x1B63E4u;
    {
        const bool branch_taken_0x1b63e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b63e4) {
            ctx->pc = 0x1B63E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B63E4u;
            // 0x1b63e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B63ECu;
            goto label_1b63ec;
        }
    }
    ctx->pc = 0x1B63ECu;
label_1b63ec:
    // 0x1b63ec: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1b63ecu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b63f0:
    // 0x1b63f0: 0x1012  mflo        $v0
    ctx->pc = 0x1b63f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b63f4:
    // 0x1b63f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b63f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b63f8:
    // 0x1b63f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b63f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1b63fc:
    // 0x1b63fc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b63fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6400:
    // 0x1b6400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b6404:
    if (ctx->pc == 0x1B6404u) {
        ctx->pc = 0x1B6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6400u;
        // 0x1b6404: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6408u;
        goto label_1b6408;
    }
    ctx->pc = 0x1B6400u;
    {
        const bool branch_taken_0x1b6400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6400u;
        // 0x1b6404: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6400) {
            ctx->pc = 0x1B6418u;
            goto label_1b6418;
        }
    }
    ctx->pc = 0x1B6408u;
label_1b6408:
    // 0x1b6408: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b6408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b640c:
    // 0x1b640c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b6410:
    // 0x1b6410: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b6414:
    if (ctx->pc == 0x1B6414u) {
        ctx->pc = 0x1B6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6410u;
        // 0x1b6414: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6418u;
        goto label_1b6418;
    }
    ctx->pc = 0x1B6410u;
    {
        const bool branch_taken_0x1b6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6410u;
        // 0x1b6414: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6410) {
            ctx->pc = 0x1B642Cu;
            goto label_1b642c;
        }
    }
    ctx->pc = 0x1B6418u;
label_1b6418:
    // 0x1b6418: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b6418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b641c:
    // 0x1b641c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6420:
    // 0x1b6420: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b6420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b6424:
    // 0x1b6424: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b6424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6428:
    // 0x1b6428: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6428u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b642c:
    // 0x1b642c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b642cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
label_1b6430:
    // 0x1b6430: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b6434:
    // 0x1b6434: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b6438:
    // 0x1b6438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b643c:
    // 0x1b643c: 0x9042b4b0  lbu         $v0, -0x4B50($v0)
    ctx->pc = 0x1b643cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948016)));
label_1b6440:
    // 0x1b6440: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b6444:
    // 0x1b6444: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b6444u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b6448:
    // 0x1b6448: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_1b644c:
    if (ctx->pc == 0x1B644Cu) {
        ctx->pc = 0x1B644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6448u;
        // 0x1b644c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6450u;
        goto label_1b6450;
    }
    ctx->pc = 0x1B6448u;
    {
        const bool branch_taken_0x1b6448 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6448u;
        // 0x1b644c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6448) {
            ctx->pc = 0x1B6468u;
            goto label_1b6468;
        }
    }
    ctx->pc = 0x1B6450u;
label_1b6450:
    // 0x1b6450: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x1b6450u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1b6454:
    // 0x1b6454: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1b6454u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6458:
    // 0x1b6458: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1b645c:
    // 0x1b645c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1b6460:
    if (ctx->pc == 0x1B6460u) {
        ctx->pc = 0x1B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B645Cu;
        // 0x1b6460: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6464u;
        goto label_1b6464;
    }
    ctx->pc = 0x1B645Cu;
    {
        const bool branch_taken_0x1b645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B645Cu;
        // 0x1b6460: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b645c) {
            ctx->pc = 0x1B6550u;
            goto label_1b6550;
        }
    }
    ctx->pc = 0x1B6464u;
label_1b6464:
    // 0x1b6464: 0x0  nop
    ctx->pc = 0x1b6464u;
    // NOP
label_1b6468:
    // 0x1b6468: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
label_1b646c:
    // 0x1b646c: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x1b646cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
label_1b6470:
    // 0x1b6470: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
label_1b6474:
    // 0x1b6474: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1b6474u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
label_1b6478:
    // 0x1b6478: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b6478u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b647c:
    // 0x1b647c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b647cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_1b6480:
    // 0x1b6480: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1b6480u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1b6484:
    // 0x1b6484: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x1b6484u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b6488:
    // 0x1b6488: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6488u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_1b648c:
    // 0x1b648c: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x1b648cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1b6490:
    // 0x1b6490: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b6490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b6494:
    // 0x1b6494: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6498:
    if (ctx->pc == 0x1B6498u) {
        ctx->pc = 0x1B6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6494u;
        // 0x1b6498: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B649Cu;
        goto label_1b649c;
    }
    ctx->pc = 0x1B6494u;
    {
        const bool branch_taken_0x1b6494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6494) {
            ctx->pc = 0x1B6498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6494u;
            // 0x1b6498: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B649Cu;
            goto label_1b649c;
        }
    }
    ctx->pc = 0x1B649Cu;
label_1b649c:
    // 0x1b649c: 0x1012  mflo        $v0
    ctx->pc = 0x1b649cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b64a0:
    // 0x1b64a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1b64a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b64a4:
    // 0x1b64a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b64a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b64a8:
    // 0x1b64a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b64ac:
    // 0x1b64ac: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x1b64acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b64b0:
    // 0x1b64b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b64b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b64b4:
    // 0x1b64b4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b64b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b64b8:
    // 0x1b64b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b64bc:
    if (ctx->pc == 0x1B64BCu) {
        ctx->pc = 0x1B64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64B8u;
        // 0x1b64bc: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B64C0u;
        goto label_1b64c0;
    }
    ctx->pc = 0x1B64B8u;
    {
        const bool branch_taken_0x1b64b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64B8u;
        // 0x1b64bc: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64b8) {
            ctx->pc = 0x1B64E8u;
            goto label_1b64e8;
        }
    }
    ctx->pc = 0x1B64C0u;
label_1b64c0:
    // 0x1b64c0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b64c4:
    // 0x1b64c4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b64c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b64c8:
    // 0x1b64c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b64cc:
    if (ctx->pc == 0x1B64CCu) {
        ctx->pc = 0x1B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64C8u;
        // 0x1b64cc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B64D0u;
        goto label_1b64d0;
    }
    ctx->pc = 0x1B64C8u;
    {
        const bool branch_taken_0x1b64c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64C8u;
        // 0x1b64cc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64c8) {
            ctx->pc = 0x1B64E8u;
            goto label_1b64e8;
        }
    }
    ctx->pc = 0x1B64D0u;
label_1b64d0:
    // 0x1b64d0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b64d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b64d4:
    // 0x1b64d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b64d8:
    if (ctx->pc == 0x1B64D8u) {
        ctx->pc = 0x1B64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64D4u;
        // 0x1b64d8: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B64DCu;
        goto label_1b64dc;
    }
    ctx->pc = 0x1B64D4u;
    {
        const bool branch_taken_0x1b64d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64d4) {
            ctx->pc = 0x1B64D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B64D4u;
            // 0x1b64d8: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B64ECu;
            goto label_1b64ec;
        }
    }
    ctx->pc = 0x1B64DCu;
label_1b64dc:
    // 0x1b64dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b64dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b64e0:
    // 0x1b64e0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b64e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b64e4:
    // 0x1b64e4: 0x0  nop
    ctx->pc = 0x1b64e4u;
    // NOP
label_1b64e8:
    // 0x1b64e8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b64ec:
    // 0x1b64ec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b64f0:
    if (ctx->pc == 0x1B64F0u) {
        ctx->pc = 0x1B64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64ECu;
        // 0x1b64f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B64F4u;
        goto label_1b64f4;
    }
    ctx->pc = 0x1B64ECu;
    {
        const bool branch_taken_0x1b64ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64ec) {
            ctx->pc = 0x1B64F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B64ECu;
            // 0x1b64f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B64F4u;
            goto label_1b64f4;
        }
    }
    ctx->pc = 0x1B64F4u;
label_1b64f4:
    // 0x1b64f4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b64f4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1b64f8:
    // 0x1b64f8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b64f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1b64fc:
    // 0x1b64fc: 0x1012  mflo        $v0
    ctx->pc = 0x1b64fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6500:
    // 0x1b6500: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6500u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6504:
    // 0x1b6504: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b6504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6508:
    // 0x1b6508: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b650c:
    // 0x1b650c: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x1b650cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b6510:
    // 0x1b6510: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6514:
    // 0x1b6514: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b6514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b6518:
    // 0x1b6518: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b651c:
    if (ctx->pc == 0x1B651Cu) {
        ctx->pc = 0x1B651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6518u;
        // 0x1b651c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6520u;
        goto label_1b6520;
    }
    ctx->pc = 0x1B6518u;
    {
        const bool branch_taken_0x1b6518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6518u;
        // 0x1b651c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6518) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B6520u;
label_1b6520:
    // 0x1b6520: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b6524:
    // 0x1b6524: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b6524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6528:
    // 0x1b6528: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b652c:
    if (ctx->pc == 0x1B652Cu) {
        ctx->pc = 0x1B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6528u;
        // 0x1b652c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6530u;
        goto label_1b6530;
    }
    ctx->pc = 0x1B6528u;
    {
        const bool branch_taken_0x1b6528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6528u;
        // 0x1b652c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6528) {
            ctx->pc = 0x1B6544u;
            goto label_1b6544;
        }
    }
    ctx->pc = 0x1B6530u;
label_1b6530:
    // 0x1b6530: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b6530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b6534:
    // 0x1b6534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b6538:
    if (ctx->pc == 0x1B6538u) {
        ctx->pc = 0x1B6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6534u;
        // 0x1b6538: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B653Cu;
        goto label_1b653c;
    }
    ctx->pc = 0x1B6534u;
    {
        const bool branch_taken_0x1b6534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6534u;
        // 0x1b6538: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6534) {
            ctx->pc = 0x1B6548u;
            goto label_1b6548;
        }
    }
    ctx->pc = 0x1B653Cu;
label_1b653c:
    // 0x1b653c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b6540:
    // 0x1b6540: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b6544:
    // 0x1b6544: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b6544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b6548:
    // 0x1b6548: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x1b6548u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b654c:
    // 0x1b654c: 0x466825  or          $t5, $v0, $a2
    ctx->pc = 0x1b654cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1b6550:
    // 0x1b6550: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b6550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b6554:
    // 0x1b6554: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1b6554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1b6558:
    // 0x1b6558: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b6558u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1b655c:
    // 0x1b655c: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1b655cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1b6560:
    // 0x1b6560: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6564:
    if (ctx->pc == 0x1B6564u) {
        ctx->pc = 0x1B6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6560u;
        // 0x1b6564: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6568u;
        goto label_1b6568;
    }
    ctx->pc = 0x1B6560u;
    {
        const bool branch_taken_0x1b6560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6560) {
            ctx->pc = 0x1B6564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6560u;
            // 0x1b6564: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B6568u;
label_1b6568:
    // 0x1b6568: 0x1012  mflo        $v0
    ctx->pc = 0x1b6568u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b656c:
    // 0x1b656c: 0x1810  mfhi        $v1
    ctx->pc = 0x1b656cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6570:
    // 0x1b6570: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b6570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6574:
    // 0x1b6574: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6578:
    // 0x1b6578: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1b6578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b657c:
    // 0x1b657c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b6580:
    // 0x1b6580: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b6580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b6584:
    // 0x1b6584: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1b6588:
    if (ctx->pc == 0x1B6588u) {
        ctx->pc = 0x1B6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6584u;
        // 0x1b6588: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B658Cu;
        goto label_1b658c;
    }
    ctx->pc = 0x1B6584u;
    {
        const bool branch_taken_0x1b6584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6584) {
            ctx->pc = 0x1B6588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6584u;
            // 0x1b6588: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B65B4u;
            goto label_1b65b4;
        }
    }
    ctx->pc = 0x1B658Cu;
label_1b658c:
    // 0x1b658c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b6590:
    // 0x1b6590: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b6590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6594:
    // 0x1b6594: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b6598:
    if (ctx->pc == 0x1B6598u) {
        ctx->pc = 0x1B6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6594u;
        // 0x1b6598: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B659Cu;
        goto label_1b659c;
    }
    ctx->pc = 0x1B6594u;
    {
        const bool branch_taken_0x1b6594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6594u;
        // 0x1b6598: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6594) {
            ctx->pc = 0x1B65B0u;
            goto label_1b65b0;
        }
    }
    ctx->pc = 0x1B659Cu;
label_1b659c:
    // 0x1b659c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b659cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b65a0:
    // 0x1b65a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b65a4:
    if (ctx->pc == 0x1B65A4u) {
        ctx->pc = 0x1B65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65A0u;
        // 0x1b65a4: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B65A8u;
        goto label_1b65a8;
    }
    ctx->pc = 0x1B65A0u;
    {
        const bool branch_taken_0x1b65a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65a0) {
            ctx->pc = 0x1B65A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B65A0u;
            // 0x1b65a4: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B65B4u;
            goto label_1b65b4;
        }
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b65a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b65ac:
    // 0x1b65ac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b65b0:
    // 0x1b65b0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b65b4:
    // 0x1b65b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b65b8:
    if (ctx->pc == 0x1B65B8u) {
        ctx->pc = 0x1B65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65B4u;
        // 0x1b65b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B65BCu;
        goto label_1b65bc;
    }
    ctx->pc = 0x1B65B4u;
    {
        const bool branch_taken_0x1b65b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65b4) {
            ctx->pc = 0x1B65B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B65B4u;
            // 0x1b65b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B65BCu;
            goto label_1b65bc;
        }
    }
    ctx->pc = 0x1B65BCu;
label_1b65bc:
    // 0x1b65bc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b65bcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1b65c0:
    // 0x1b65c0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1b65c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_1b65c4:
    // 0x1b65c4: 0x1012  mflo        $v0
    ctx->pc = 0x1b65c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b65c8:
    // 0x1b65c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b65c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b65cc:
    // 0x1b65cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b65ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b65d0:
    // 0x1b65d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b65d4:
    // 0x1b65d4: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1b65d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b65d8:
    // 0x1b65d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b65d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b65dc:
    // 0x1b65dc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b65dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b65e0:
    // 0x1b65e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b65e4:
    if (ctx->pc == 0x1B65E4u) {
        ctx->pc = 0x1B65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65E0u;
        // 0x1b65e4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B65E8u;
        goto label_1b65e8;
    }
    ctx->pc = 0x1B65E0u;
    {
        const bool branch_taken_0x1b65e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65E0u;
        // 0x1b65e4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65e0) {
            ctx->pc = 0x1B660Cu;
            goto label_1b660c;
        }
    }
    ctx->pc = 0x1B65E8u;
label_1b65e8:
    // 0x1b65e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b65ec:
    // 0x1b65ec: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b65ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b65f0:
    // 0x1b65f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b65f4:
    if (ctx->pc == 0x1B65F4u) {
        ctx->pc = 0x1B65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65F0u;
        // 0x1b65f4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B65F8u;
        goto label_1b65f8;
    }
    ctx->pc = 0x1B65F0u;
    {
        const bool branch_taken_0x1b65f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65F0u;
        // 0x1b65f4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65f0) {
            ctx->pc = 0x1B6608u;
            goto label_1b6608;
        }
    }
    ctx->pc = 0x1B65F8u;
label_1b65f8:
    // 0x1b65f8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b65f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b65fc:
    // 0x1b65fc: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1b65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b6600:
    // 0x1b6600: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b6604:
    // 0x1b6604: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b6604u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1b6608:
    // 0x1b6608: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b6608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b660c:
    // 0x1b660c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1b6610:
    if (ctx->pc == 0x1B6610u) {
        ctx->pc = 0x1B6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B660Cu;
        // 0x1b6610: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6614u;
        goto label_1b6614;
    }
    ctx->pc = 0x1B660Cu;
    {
        const bool branch_taken_0x1b660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B660Cu;
        // 0x1b6610: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b660c) {
            ctx->pc = 0x1B67C4u;
            goto label_1b67c4;
        }
    }
    ctx->pc = 0x1B6614u;
label_1b6614:
    // 0x1b6614: 0x0  nop
    ctx->pc = 0x1b6614u;
    // NOP
label_1b6618:
    // 0x1b6618: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1b661c:
    if (ctx->pc == 0x1B661Cu) {
        ctx->pc = 0x1B661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6618u;
        // 0x1b661c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6620u;
        goto label_1b6620;
    }
    ctx->pc = 0x1B6618u;
    {
        const bool branch_taken_0x1b6618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6618) {
            ctx->pc = 0x1B661Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6618u;
            // 0x1b661c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6628u;
            goto label_1b6628;
        }
    }
    ctx->pc = 0x1B6620u;
label_1b6620:
    // 0x1b6620: 0x10000067  b           . + 4 + (0x67 << 2)
label_1b6624:
    if (ctx->pc == 0x1B6624u) {
        ctx->pc = 0x1B6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6620u;
        // 0x1b6624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6628u;
        goto label_1b6628;
    }
    ctx->pc = 0x1B6620u;
    {
        const bool branch_taken_0x1b6620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6620u;
        // 0x1b6624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6620) {
            ctx->pc = 0x1B67C0u;
            goto label_1b67c0;
        }
    }
    ctx->pc = 0x1B6628u;
label_1b6628:
    // 0x1b6628: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1b6628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b662c:
    // 0x1b662c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b6630:
    if (ctx->pc == 0x1B6630u) {
        ctx->pc = 0x1B6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B662Cu;
        // 0x1b6630: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6634u;
        goto label_1b6634;
    }
    ctx->pc = 0x1B662Cu;
    {
        const bool branch_taken_0x1b662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B662Cu;
        // 0x1b6630: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b662c) {
            ctx->pc = 0x1B6648u;
            goto label_1b6648;
        }
    }
    ctx->pc = 0x1B6634u;
label_1b6634:
    // 0x1b6634: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1b6634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b6638:
    // 0x1b6638: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b663c:
    // 0x1b663c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b6640:
    if (ctx->pc == 0x1B6640u) {
        ctx->pc = 0x1B6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B663Cu;
        // 0x1b6640: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6644u;
        goto label_1b6644;
    }
    ctx->pc = 0x1B663Cu;
    {
        const bool branch_taken_0x1b663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B663Cu;
        // 0x1b6640: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b663c) {
            ctx->pc = 0x1B665Cu;
            goto label_1b665c;
        }
    }
    ctx->pc = 0x1B6644u;
label_1b6644:
    // 0x1b6644: 0x0  nop
    ctx->pc = 0x1b6644u;
    // NOP
label_1b6648:
    // 0x1b6648: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b6648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b664c:
    // 0x1b664c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6650:
    // 0x1b6650: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b6654:
    // 0x1b6654: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1b6654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6658:
    // 0x1b6658: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6658u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b665c:
    // 0x1b665c: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1b665cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_1b6660:
    // 0x1b6660: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b6664:
    // 0x1b6664: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b6664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b6668:
    // 0x1b6668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b666c:
    // 0x1b666c: 0x9042b4b0  lbu         $v0, -0x4B50($v0)
    ctx->pc = 0x1b666cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948016)));
label_1b6670:
    // 0x1b6670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b6674:
    // 0x1b6674: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b6674u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b6678:
    // 0x1b6678: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_1b667c:
    if (ctx->pc == 0x1B667Cu) {
        ctx->pc = 0x1B667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6678u;
        // 0x1b667c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6680u;
        goto label_1b6680;
    }
    ctx->pc = 0x1B6678u;
    {
        const bool branch_taken_0x1b6678 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6678u;
        // 0x1b667c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6678) {
            ctx->pc = 0x1B66A0u;
            goto label_1b66a0;
        }
    }
    ctx->pc = 0x1B6680u;
label_1b6680:
    // 0x1b6680: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1b6680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_1b6684:
    // 0x1b6684: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_1b6688:
    if (ctx->pc == 0x1B6688u) {
        ctx->pc = 0x1B6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6684u;
        // 0x1b6688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B668Cu;
        goto label_1b668c;
    }
    ctx->pc = 0x1B6684u;
    {
        const bool branch_taken_0x1b6684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6684u;
        // 0x1b6688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6684) {
            ctx->pc = 0x1B67C0u;
            goto label_1b67c0;
        }
    }
    ctx->pc = 0x1B668Cu;
label_1b668c:
    // 0x1b668c: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1b668cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6690:
    // 0x1b6690: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_1b6694:
    if (ctx->pc == 0x1B6694u) {
        ctx->pc = 0x1B6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6690u;
        // 0x1b6694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6698u;
        goto label_1b6698;
    }
    ctx->pc = 0x1B6690u;
    {
        const bool branch_taken_0x1b6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6690u;
        // 0x1b6694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6690) {
            ctx->pc = 0x1B67C0u;
            goto label_1b67c0;
        }
    }
    ctx->pc = 0x1B6698u;
label_1b6698:
    // 0x1b6698: 0x10000049  b           . + 4 + (0x49 << 2)
label_1b669c:
    if (ctx->pc == 0x1B669Cu) {
        ctx->pc = 0x1B669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6698u;
        // 0x1b669c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B66A0u;
        goto label_1b66a0;
    }
    ctx->pc = 0x1B6698u;
    {
        const bool branch_taken_0x1b6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6698u;
        // 0x1b669c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6698) {
            ctx->pc = 0x1B67C0u;
            goto label_1b67c0;
        }
    }
    ctx->pc = 0x1B66A0u;
label_1b66a0:
    // 0x1b66a0: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1b66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
label_1b66a4:
    // 0x1b66a4: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1b66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
label_1b66a8:
    // 0x1b66a8: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b66a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
label_1b66ac:
    // 0x1b66ac: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1b66acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
label_1b66b0:
    // 0x1b66b0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b66b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_1b66b4:
    // 0x1b66b4: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
label_1b66b8:
    // 0x1b66b8: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x1b66b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b66bc:
    // 0x1b66bc: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1b66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
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
            { ctx->pc = 0x1b6d54; return; }
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
            { ctx->pc = 0x1b6d50; return; }
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
            { ctx->pc = 0x1b6d54; return; }
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
            { ctx->pc = 0x1b6bd0; return; }
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
            { ctx->pc = 0x1b6d54; return; }
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
    ctx->pc = 0x1b6bb0u;
    return;
}
