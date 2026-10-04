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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part637(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b6360u: goto label_2b6360;
        case 0x2b6364u: goto label_2b6364;
        case 0x2b6368u: goto label_2b6368;
        case 0x2b636cu: goto label_2b636c;
        case 0x2b6370u: goto label_2b6370;
        case 0x2b6374u: goto label_2b6374;
        case 0x2b6378u: goto label_2b6378;
        case 0x2b637cu: goto label_2b637c;
        case 0x2b6380u: goto label_2b6380;
        case 0x2b6384u: goto label_2b6384;
        case 0x2b6388u: goto label_2b6388;
        case 0x2b638cu: goto label_2b638c;
        case 0x2b6390u: goto label_2b6390;
        case 0x2b6394u: goto label_2b6394;
        case 0x2b6398u: goto label_2b6398;
        case 0x2b639cu: goto label_2b639c;
        case 0x2b63a0u: goto label_2b63a0;
        case 0x2b63a4u: goto label_2b63a4;
        case 0x2b63a8u: goto label_2b63a8;
        case 0x2b63acu: goto label_2b63ac;
        case 0x2b63b0u: goto label_2b63b0;
        case 0x2b63b4u: goto label_2b63b4;
        case 0x2b63b8u: goto label_2b63b8;
        case 0x2b63bcu: goto label_2b63bc;
        case 0x2b63c0u: goto label_2b63c0;
        case 0x2b63c4u: goto label_2b63c4;
        case 0x2b63c8u: goto label_2b63c8;
        case 0x2b63ccu: goto label_2b63cc;
        case 0x2b63d0u: goto label_2b63d0;
        case 0x2b63d4u: goto label_2b63d4;
        case 0x2b63d8u: goto label_2b63d8;
        case 0x2b63dcu: goto label_2b63dc;
        case 0x2b63e0u: goto label_2b63e0;
        case 0x2b63e4u: goto label_2b63e4;
        case 0x2b63e8u: goto label_2b63e8;
        case 0x2b63ecu: goto label_2b63ec;
        case 0x2b63f0u: goto label_2b63f0;
        case 0x2b63f4u: goto label_2b63f4;
        case 0x2b63f8u: goto label_2b63f8;
        case 0x2b63fcu: goto label_2b63fc;
        case 0x2b6400u: goto label_2b6400;
        case 0x2b6404u: goto label_2b6404;
        case 0x2b6408u: goto label_2b6408;
        case 0x2b640cu: goto label_2b640c;
        case 0x2b6410u: goto label_2b6410;
        case 0x2b6414u: goto label_2b6414;
        case 0x2b6418u: goto label_2b6418;
        case 0x2b641cu: goto label_2b641c;
        case 0x2b6420u: goto label_2b6420;
        case 0x2b6424u: goto label_2b6424;
        case 0x2b6428u: goto label_2b6428;
        case 0x2b642cu: goto label_2b642c;
        case 0x2b6430u: goto label_2b6430;
        case 0x2b6434u: goto label_2b6434;
        case 0x2b6438u: goto label_2b6438;
        case 0x2b643cu: goto label_2b643c;
        case 0x2b6440u: goto label_2b6440;
        case 0x2b6444u: goto label_2b6444;
        case 0x2b6448u: goto label_2b6448;
        case 0x2b644cu: goto label_2b644c;
        case 0x2b6450u: goto label_2b6450;
        case 0x2b6454u: goto label_2b6454;
        case 0x2b6458u: goto label_2b6458;
        case 0x2b645cu: goto label_2b645c;
        case 0x2b6460u: goto label_2b6460;
        case 0x2b6464u: goto label_2b6464;
        case 0x2b6468u: goto label_2b6468;
        case 0x2b646cu: goto label_2b646c;
        case 0x2b6470u: goto label_2b6470;
        case 0x2b6474u: goto label_2b6474;
        case 0x2b6478u: goto label_2b6478;
        case 0x2b647cu: goto label_2b647c;
        case 0x2b6480u: goto label_2b6480;
        case 0x2b6484u: goto label_2b6484;
        case 0x2b6488u: goto label_2b6488;
        case 0x2b648cu: goto label_2b648c;
        case 0x2b6490u: goto label_2b6490;
        case 0x2b6494u: goto label_2b6494;
        case 0x2b6498u: goto label_2b6498;
        case 0x2b649cu: goto label_2b649c;
        case 0x2b64a0u: goto label_2b64a0;
        case 0x2b64a4u: goto label_2b64a4;
        case 0x2b64a8u: goto label_2b64a8;
        case 0x2b64acu: goto label_2b64ac;
        case 0x2b64b0u: goto label_2b64b0;
        case 0x2b64b4u: goto label_2b64b4;
        case 0x2b64b8u: goto label_2b64b8;
        case 0x2b64bcu: goto label_2b64bc;
        case 0x2b64c0u: goto label_2b64c0;
        case 0x2b64c4u: goto label_2b64c4;
        case 0x2b64c8u: goto label_2b64c8;
        case 0x2b64ccu: goto label_2b64cc;
        case 0x2b64d0u: goto label_2b64d0;
        case 0x2b64d4u: goto label_2b64d4;
        case 0x2b64d8u: goto label_2b64d8;
        case 0x2b64dcu: goto label_2b64dc;
        case 0x2b64e0u: goto label_2b64e0;
        case 0x2b64e4u: goto label_2b64e4;
        case 0x2b64e8u: goto label_2b64e8;
        case 0x2b64ecu: goto label_2b64ec;
        case 0x2b64f0u: goto label_2b64f0;
        case 0x2b64f4u: goto label_2b64f4;
        case 0x2b64f8u: goto label_2b64f8;
        case 0x2b64fcu: goto label_2b64fc;
        case 0x2b6500u: goto label_2b6500;
        case 0x2b6504u: goto label_2b6504;
        case 0x2b6508u: goto label_2b6508;
        case 0x2b650cu: goto label_2b650c;
        case 0x2b6510u: goto label_2b6510;
        case 0x2b6514u: goto label_2b6514;
        case 0x2b6518u: goto label_2b6518;
        case 0x2b651cu: goto label_2b651c;
        case 0x2b6520u: goto label_2b6520;
        case 0x2b6524u: goto label_2b6524;
        case 0x2b6528u: goto label_2b6528;
        case 0x2b652cu: goto label_2b652c;
        case 0x2b6530u: goto label_2b6530;
        case 0x2b6534u: goto label_2b6534;
        case 0x2b6538u: goto label_2b6538;
        case 0x2b653cu: goto label_2b653c;
        case 0x2b6540u: goto label_2b6540;
        case 0x2b6544u: goto label_2b6544;
        case 0x2b6548u: goto label_2b6548;
        case 0x2b654cu: goto label_2b654c;
        case 0x2b6550u: goto label_2b6550;
        case 0x2b6554u: goto label_2b6554;
        case 0x2b6558u: goto label_2b6558;
        case 0x2b655cu: goto label_2b655c;
        case 0x2b6560u: goto label_2b6560;
        case 0x2b6564u: goto label_2b6564;
        case 0x2b6568u: goto label_2b6568;
        case 0x2b656cu: goto label_2b656c;
        case 0x2b6570u: goto label_2b6570;
        case 0x2b6574u: goto label_2b6574;
        case 0x2b6578u: goto label_2b6578;
        case 0x2b657cu: goto label_2b657c;
        case 0x2b6580u: goto label_2b6580;
        case 0x2b6584u: goto label_2b6584;
        case 0x2b6588u: goto label_2b6588;
        case 0x2b658cu: goto label_2b658c;
        case 0x2b6590u: goto label_2b6590;
        case 0x2b6594u: goto label_2b6594;
        case 0x2b6598u: goto label_2b6598;
        case 0x2b659cu: goto label_2b659c;
        case 0x2b65a0u: goto label_2b65a0;
        case 0x2b65a4u: goto label_2b65a4;
        case 0x2b65a8u: goto label_2b65a8;
        case 0x2b65acu: goto label_2b65ac;
        case 0x2b65b0u: goto label_2b65b0;
        case 0x2b65b4u: goto label_2b65b4;
        case 0x2b65b8u: goto label_2b65b8;
        case 0x2b65bcu: goto label_2b65bc;
        case 0x2b65c0u: goto label_2b65c0;
        case 0x2b65c4u: goto label_2b65c4;
        case 0x2b65c8u: goto label_2b65c8;
        case 0x2b65ccu: goto label_2b65cc;
        case 0x2b65d0u: goto label_2b65d0;
        case 0x2b65d4u: goto label_2b65d4;
        case 0x2b65d8u: goto label_2b65d8;
        case 0x2b65dcu: goto label_2b65dc;
        case 0x2b65e0u: goto label_2b65e0;
        case 0x2b65e4u: goto label_2b65e4;
        case 0x2b65e8u: goto label_2b65e8;
        case 0x2b65ecu: goto label_2b65ec;
        case 0x2b65f0u: goto label_2b65f0;
        case 0x2b65f4u: goto label_2b65f4;
        case 0x2b65f8u: goto label_2b65f8;
        case 0x2b65fcu: goto label_2b65fc;
        case 0x2b6600u: goto label_2b6600;
        case 0x2b6604u: goto label_2b6604;
        case 0x2b6608u: goto label_2b6608;
        case 0x2b660cu: goto label_2b660c;
        case 0x2b6610u: goto label_2b6610;
        case 0x2b6614u: goto label_2b6614;
        case 0x2b6618u: goto label_2b6618;
        case 0x2b661cu: goto label_2b661c;
        case 0x2b6620u: goto label_2b6620;
        case 0x2b6624u: goto label_2b6624;
        case 0x2b6628u: goto label_2b6628;
        case 0x2b662cu: goto label_2b662c;
        case 0x2b6630u: goto label_2b6630;
        case 0x2b6634u: goto label_2b6634;
        case 0x2b6638u: goto label_2b6638;
        case 0x2b663cu: goto label_2b663c;
        case 0x2b6640u: goto label_2b6640;
        case 0x2b6644u: goto label_2b6644;
        case 0x2b6648u: goto label_2b6648;
        case 0x2b664cu: goto label_2b664c;
        case 0x2b6650u: goto label_2b6650;
        case 0x2b6654u: goto label_2b6654;
        case 0x2b6658u: goto label_2b6658;
        case 0x2b665cu: goto label_2b665c;
        case 0x2b6660u: goto label_2b6660;
        case 0x2b6664u: goto label_2b6664;
        case 0x2b6668u: goto label_2b6668;
        case 0x2b666cu: goto label_2b666c;
        case 0x2b6670u: goto label_2b6670;
        case 0x2b6674u: goto label_2b6674;
        case 0x2b6678u: goto label_2b6678;
        case 0x2b667cu: goto label_2b667c;
        case 0x2b6680u: goto label_2b6680;
        case 0x2b6684u: goto label_2b6684;
        case 0x2b6688u: goto label_2b6688;
        case 0x2b668cu: goto label_2b668c;
        case 0x2b6690u: goto label_2b6690;
        case 0x2b6694u: goto label_2b6694;
        case 0x2b6698u: goto label_2b6698;
        case 0x2b669cu: goto label_2b669c;
        case 0x2b66a0u: goto label_2b66a0;
        case 0x2b66a4u: goto label_2b66a4;
        case 0x2b66a8u: goto label_2b66a8;
        case 0x2b66acu: goto label_2b66ac;
        case 0x2b66b0u: goto label_2b66b0;
        case 0x2b66b4u: goto label_2b66b4;
        case 0x2b66b8u: goto label_2b66b8;
        case 0x2b66bcu: goto label_2b66bc;
        case 0x2b66c0u: goto label_2b66c0;
        case 0x2b66c4u: goto label_2b66c4;
        case 0x2b66c8u: goto label_2b66c8;
        case 0x2b66ccu: goto label_2b66cc;
        case 0x2b66d0u: goto label_2b66d0;
        case 0x2b66d4u: goto label_2b66d4;
        case 0x2b66d8u: goto label_2b66d8;
        case 0x2b66dcu: goto label_2b66dc;
        case 0x2b66e0u: goto label_2b66e0;
        case 0x2b66e4u: goto label_2b66e4;
        case 0x2b66e8u: goto label_2b66e8;
        case 0x2b66ecu: goto label_2b66ec;
        case 0x2b66f0u: goto label_2b66f0;
        case 0x2b66f4u: goto label_2b66f4;
        case 0x2b66f8u: goto label_2b66f8;
        case 0x2b66fcu: goto label_2b66fc;
        case 0x2b6700u: goto label_2b6700;
        case 0x2b6704u: goto label_2b6704;
        case 0x2b6708u: goto label_2b6708;
        case 0x2b670cu: goto label_2b670c;
        case 0x2b6710u: goto label_2b6710;
        case 0x2b6714u: goto label_2b6714;
        case 0x2b6718u: goto label_2b6718;
        case 0x2b671cu: goto label_2b671c;
        case 0x2b6720u: goto label_2b6720;
        case 0x2b6724u: goto label_2b6724;
        case 0x2b6728u: goto label_2b6728;
        case 0x2b672cu: goto label_2b672c;
        case 0x2b6730u: goto label_2b6730;
        case 0x2b6734u: goto label_2b6734;
        case 0x2b6738u: goto label_2b6738;
        case 0x2b673cu: goto label_2b673c;
        case 0x2b6740u: goto label_2b6740;
        case 0x2b6744u: goto label_2b6744;
        case 0x2b6748u: goto label_2b6748;
        case 0x2b674cu: goto label_2b674c;
        case 0x2b6750u: goto label_2b6750;
        case 0x2b6754u: goto label_2b6754;
        case 0x2b6758u: goto label_2b6758;
        case 0x2b675cu: goto label_2b675c;
        case 0x2b6760u: goto label_2b6760;
        case 0x2b6764u: goto label_2b6764;
        case 0x2b6768u: goto label_2b6768;
        case 0x2b676cu: goto label_2b676c;
        case 0x2b6770u: goto label_2b6770;
        case 0x2b6774u: goto label_2b6774;
        case 0x2b6778u: goto label_2b6778;
        case 0x2b677cu: goto label_2b677c;
        case 0x2b6780u: goto label_2b6780;
        case 0x2b6784u: goto label_2b6784;
        case 0x2b6788u: goto label_2b6788;
        case 0x2b678cu: goto label_2b678c;
        case 0x2b6790u: goto label_2b6790;
        case 0x2b6794u: goto label_2b6794;
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
        default: return;
    }

label_2b6360:
    // 0x2b6360: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b6364:
    if (ctx->pc == 0x2B6364u) {
        ctx->pc = 0x2B6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6360u;
        // 0x2b6364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6368u;
        goto label_2b6368;
    }
    ctx->pc = 0x2B6360u;
    {
        const bool branch_taken_0x2b6360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6360u;
        // 0x2b6364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6360) {
            ctx->pc = 0x2B6364u;
            goto label_2b6364;
        }
    }
    ctx->pc = 0x2B6368u;
label_2b6368:
    // 0x2b6368: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b636c:
    // 0x2b636c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b636cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b6370:
    // 0x2b6370: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6370u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6374:
    // 0x2b6374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6378:
    // 0x2b6378: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b637c:
    // 0x2b637c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b637cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6380:
    // 0x2b6380: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6380u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6384:
    // 0x2b6384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6388:
    // 0x2b6388: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6388u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b638c:
    // 0x2b638c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b638cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6390:
    // 0x2b6390: 0x42020051  .word       0x42020051                   # INVALID     $s0, $v0, 0x51 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6390u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x11 at 0x2B6390 raw=0x42020051"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6394:
    // 0x2b6394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6398:
    // 0x2b6398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b639c:
    // 0x2b639c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b639cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b63a0:
    // 0x2b63a0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b63a4:
    if (ctx->pc == 0x2B63A4u) {
        ctx->pc = 0x2B63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63A0u;
        // 0x2b63a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63A8u;
        goto label_2b63a8;
    }
    ctx->pc = 0x2B63A0u;
    {
        const bool branch_taken_0x2b63a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63A0u;
        // 0x2b63a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63a0) {
            ctx->pc = 0x2CA3A8u;
            return;
        }
    }
    ctx->pc = 0x2B63A8u;
label_2b63a8:
    // 0x2b63a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b63a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b63ac:
    // 0x2b63ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b63acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b63b0:
    // 0x2b63b0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b63b4:
    if (ctx->pc == 0x2B63B4u) {
        ctx->pc = 0x2B63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63B0u;
        // 0x2b63b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63B8u;
        goto label_2b63b8;
    }
    ctx->pc = 0x2B63B0u;
    {
        const bool branch_taken_0x2b63b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b63b0) {
            ctx->pc = 0x2B63B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B63B0u;
            // 0x2b63b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B83A0u;
            { ctx->pc = 0x2b83a0; return; }
        }
    }
    ctx->pc = 0x2B63B8u;
label_2b63b8:
    // 0x2b63b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b63b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b63bc:
    // 0x2b63bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b63bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b63c0:
    // 0x2b63c0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b63c4:
    if (ctx->pc == 0x2B63C4u) {
        ctx->pc = 0x2B63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63C0u;
        // 0x2b63c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63C8u;
        goto label_2b63c8;
    }
    ctx->pc = 0x2B63C0u;
    {
        const bool branch_taken_0x2b63c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63C0u;
        // 0x2b63c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63c0) {
            ctx->pc = 0x2BC3C4u;
            { ctx->pc = 0x2bc3c4; return; }
        }
    }
    ctx->pc = 0x2B63C8u;
label_2b63c8:
    // 0x2b63c8: 0x4202003f  .word       0x4202003F                   # INVALID     $s0, $v0, 0x3F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b63c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B63C8 raw=0x4202003F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b63cc:
    // 0x2b63cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b63ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b63d0:
    // 0x2b63d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b63d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b63d4:
    // 0x2b63d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b63d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b63d8:
    // 0x2b63d8: 0x500b003b  beql        $zero, $t3, . + 4 + (0x3B << 2)
label_2b63dc:
    if (ctx->pc == 0x2B63DCu) {
        ctx->pc = 0x2B63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63D8u;
        // 0x2b63dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63E0u;
        goto label_2b63e0;
    }
    ctx->pc = 0x2B63D8u;
    {
        const bool branch_taken_0x2b63d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b63d8) {
            ctx->pc = 0x2B63DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B63D8u;
            // 0x2b63dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B64C8u;
            goto label_2b64c8;
        }
    }
    ctx->pc = 0x2B63E0u;
label_2b63e0:
    // 0x2b63e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b63e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b63e4:
    // 0x2b63e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b63e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b63e8:
    // 0x2b63e8: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2b63ec:
    if (ctx->pc == 0x2B63ECu) {
        ctx->pc = 0x2B63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63E8u;
        // 0x2b63ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63F0u;
        goto label_2b63f0;
    }
    ctx->pc = 0x2B63E8u;
    {
        const bool branch_taken_0x2b63e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63E8u;
        // 0x2b63ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63e8) {
            ctx->pc = 0x2B67ECu;
            goto label_2b67ec;
        }
    }
    ctx->pc = 0x2B63F0u;
label_2b63f0:
    // 0x2b63f0: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2b63f4:
    if (ctx->pc == 0x2B63F4u) {
        ctx->pc = 0x2B63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63F0u;
        // 0x2b63f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B63F8u;
        goto label_2b63f8;
    }
    ctx->pc = 0x2B63F0u;
    {
        const bool branch_taken_0x2b63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63F0u;
        // 0x2b63f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63f0) {
            ctx->pc = 0x2B6404u;
            goto label_2b6404;
        }
    }
    ctx->pc = 0x2B63F8u;
label_2b63f8:
    // 0x2b63f8: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b63fc:
    if (ctx->pc == 0x2B63FCu) {
        ctx->pc = 0x2B63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63F8u;
        // 0x2b63fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6400u;
        goto label_2b6400;
    }
    ctx->pc = 0x2B63F8u;
    {
        const bool branch_taken_0x2b63f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63F8u;
        // 0x2b63fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63f8) {
            ctx->pc = 0x2B6400u;
            goto label_2b6400;
        }
    }
    ctx->pc = 0x2B6400u;
label_2b6400:
    // 0x2b6400: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6404:
    if (ctx->pc == 0x2B6404u) {
        ctx->pc = 0x2B6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6400u;
        // 0x2b6404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6408u;
        goto label_2b6408;
    }
    ctx->pc = 0x2B6400u;
    {
        const bool branch_taken_0x2b6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6400u;
        // 0x2b6404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6400) {
            ctx->pc = 0x2BC404u;
            { ctx->pc = 0x2bc404; return; }
        }
    }
    ctx->pc = 0x2B6408u;
label_2b6408:
    // 0x2b6408: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b640c:
    if (ctx->pc == 0x2B640Cu) {
        ctx->pc = 0x2B640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6408u;
        // 0x2b640c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6410u;
        goto label_2b6410;
    }
    ctx->pc = 0x2B6408u;
    {
        const bool branch_taken_0x2b6408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6408u;
        // 0x2b640c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6408) {
            ctx->pc = 0x2BC48Cu;
            { ctx->pc = 0x2bc48c; return; }
        }
    }
    ctx->pc = 0x2B6410u;
label_2b6410:
    // 0x2b6410: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b6410u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b6414:
    // 0x2b6414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6418:
    // 0x2b6418: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b641c:
    if (ctx->pc == 0x2B641Cu) {
        ctx->pc = 0x2B641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6418u;
        // 0x2b641c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6420u;
        goto label_2b6420;
    }
    ctx->pc = 0x2B6418u;
    {
        const bool branch_taken_0x2b6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6418u;
        // 0x2b641c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6418) {
            ctx->pc = 0x2B641Cu;
            goto label_2b641c;
        }
    }
    ctx->pc = 0x2B6420u;
label_2b6420:
    // 0x2b6420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6424:
    // 0x2b6424: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6424u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b6428:
    // 0x2b6428: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6428u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b642c:
    // 0x2b642c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b642cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6430:
    // 0x2b6430: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6430u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6434:
    // 0x2b6434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6438:
    // 0x2b6438: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6438u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b643c:
    // 0x2b643c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b643cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6440:
    // 0x2b6440: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6440u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6444:
    // 0x2b6444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6448:
    // 0x2b6448: 0x4202003a  .word       0x4202003A                   # INVALID     $s0, $v0, 0x3A # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6448u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3A at 0x2B6448 raw=0x4202003A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b644c:
    // 0x2b644c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b644cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6450:
    // 0x2b6450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6454:
    // 0x2b6454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6458:
    // 0x2b6458: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b645c:
    if (ctx->pc == 0x2B645Cu) {
        ctx->pc = 0x2B645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6458u;
        // 0x2b645c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6460u;
        goto label_2b6460;
    }
    ctx->pc = 0x2B6458u;
    {
        const bool branch_taken_0x2b6458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6458u;
        // 0x2b645c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6458) {
            ctx->pc = 0x2CA460u;
            return;
        }
    }
    ctx->pc = 0x2B6460u;
label_2b6460:
    // 0x2b6460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6464:
    // 0x2b6464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6468:
    // 0x2b6468: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b646c:
    if (ctx->pc == 0x2B646Cu) {
        ctx->pc = 0x2B646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6468u;
        // 0x2b646c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6470u;
        goto label_2b6470;
    }
    ctx->pc = 0x2B6468u;
    {
        const bool branch_taken_0x2b6468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6468) {
            ctx->pc = 0x2B646Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6468u;
            // 0x2b646c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8458u;
            { ctx->pc = 0x2b8458; return; }
        }
    }
    ctx->pc = 0x2B6470u;
label_2b6470:
    // 0x2b6470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6474:
    // 0x2b6474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6478:
    // 0x2b6478: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b647c:
    if (ctx->pc == 0x2B647Cu) {
        ctx->pc = 0x2B647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6478u;
        // 0x2b647c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6480u;
        goto label_2b6480;
    }
    ctx->pc = 0x2B6478u;
    {
        const bool branch_taken_0x2b6478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6478u;
        // 0x2b647c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6478) {
            ctx->pc = 0x2BC4FCu;
            { ctx->pc = 0x2bc4fc; return; }
        }
    }
    ctx->pc = 0x2B6480u;
label_2b6480:
    // 0x2b6480: 0x42020028  .word       0x42020028                   # INVALID     $s0, $v0, 0x28 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6480u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x28 at 0x2B6480 raw=0x42020028"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6484:
    // 0x2b6484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6488:
    // 0x2b6488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b648c:
    // 0x2b648c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b648cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6490:
    // 0x2b6490: 0x500b0024  beql        $zero, $t3, . + 4 + (0x24 << 2)
label_2b6494:
    if (ctx->pc == 0x2B6494u) {
        ctx->pc = 0x2B6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6490u;
        // 0x2b6494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6498u;
        goto label_2b6498;
    }
    ctx->pc = 0x2B6490u;
    {
        const bool branch_taken_0x2b6490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b6490) {
            ctx->pc = 0x2B6494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6490u;
            // 0x2b6494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6524u;
            goto label_2b6524;
        }
    }
    ctx->pc = 0x2B6498u;
label_2b6498:
    // 0x2b6498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b649c:
    // 0x2b649c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b649cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b64a0:
    // 0x2b64a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b64a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b64a4:
    // 0x2b64a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b64a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b64a8:
    // 0x2b64a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b64ac:
    if (ctx->pc == 0x2B64ACu) {
        ctx->pc = 0x2B64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64A8u;
        // 0x2b64ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B64B0u;
        goto label_2b64b0;
    }
    ctx->pc = 0x2B64A8u;
    {
        const bool branch_taken_0x2b64a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64A8u;
        // 0x2b64ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64a8) {
            ctx->pc = 0x2B64ACu;
            goto label_2b64ac;
        }
    }
    ctx->pc = 0x2B64B0u;
label_2b64b0:
    // 0x2b64b0: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2b64b4:
    if (ctx->pc == 0x2B64B4u) {
        ctx->pc = 0x2B64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64B0u;
        // 0x2b64b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B64B8u;
        goto label_2b64b8;
    }
    ctx->pc = 0x2B64B0u;
    {
        const bool branch_taken_0x2b64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64B0u;
        // 0x2b64b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64b0) {
            ctx->pc = 0x2B664Cu;
            goto label_2b664c;
        }
    }
    ctx->pc = 0x2B64B8u;
label_2b64b8:
    // 0x2b64b8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b64b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B64B8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b64bc:
    // 0x2b64bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b64bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b64c0:
    // 0x2b64c0: 0x5203081e  beql        $s0, $v1, . + 4 + (0x81E << 2)
label_2b64c4:
    if (ctx->pc == 0x2B64C4u) {
        ctx->pc = 0x2B64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64C0u;
        // 0x2b64c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B64C8u;
        goto label_2b64c8;
    }
    ctx->pc = 0x2B64C0u;
    {
        const bool branch_taken_0x2b64c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b64c0) {
            ctx->pc = 0x2B64C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B64C0u;
            // 0x2b64c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B853Cu;
            { ctx->pc = 0x2b853c; return; }
        }
    }
    ctx->pc = 0x2B64C8u;
label_2b64c8:
    // 0x2b64c8: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b64cc:
    if (ctx->pc == 0x2B64CCu) {
        ctx->pc = 0x2B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64C8u;
        // 0x2b64cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B64D0u;
        goto label_2b64d0;
    }
    ctx->pc = 0x2B64C8u;
    {
        const bool branch_taken_0x2b64c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64C8u;
        // 0x2b64cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64c8) {
            ctx->pc = 0x2BC5CCu;
            { ctx->pc = 0x2bc5cc; return; }
        }
    }
    ctx->pc = 0x2B64D0u;
label_2b64d0:
    // 0x2b64d0: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2b64d4:
    if (ctx->pc == 0x2B64D4u) {
        ctx->pc = 0x2B64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64D0u;
        // 0x2b64d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B64D8u;
        goto label_2b64d8;
    }
    ctx->pc = 0x2B64D0u;
    {
        const bool branch_taken_0x2b64d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64D0u;
        // 0x2b64d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64d0) {
            ctx->pc = 0x2CA4F0u;
            return;
        }
    }
    ctx->pc = 0x2B64D8u;
label_2b64d8:
    // 0x2b64d8: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b64d8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b64dc:
    // 0x2b64dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b64dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b64e0:
    // 0x2b64e0: 0x5a00081a  blezl       $s0, . + 4 + (0x81A << 2)
label_2b64e4:
    if (ctx->pc == 0x2B64E4u) {
        ctx->pc = 0x2B64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64E0u;
        // 0x2b64e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B64E8u;
        goto label_2b64e8;
    }
    ctx->pc = 0x2B64E0u;
    {
        const bool branch_taken_0x2b64e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b64e0) {
            ctx->pc = 0x2B64E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B64E0u;
            // 0x2b64e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B854Cu;
            { ctx->pc = 0x2b854c; return; }
        }
    }
    ctx->pc = 0x2B64E8u;
label_2b64e8:
    // 0x2b64e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b64e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b64ec:
    // 0x2b64ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b64ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b64f0:
    // 0x2b64f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b64f4:
    // 0x2b64f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b64f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b64f8:
    // 0x2b64f8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b64f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b64fc:
    // 0x2b64fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b64fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6500:
    // 0x2b6500: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B6500 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6504:
    // 0x2b6504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6508:
    // 0x2b6508: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2b650c:
    if (ctx->pc == 0x2B650Cu) {
        ctx->pc = 0x2B650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6508u;
        // 0x2b650c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6510u;
        goto label_2b6510;
    }
    ctx->pc = 0x2B6508u;
    {
        const bool branch_taken_0x2b6508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6508u;
        // 0x2b650c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6508) {
            ctx->pc = 0x2BA510u;
            { ctx->pc = 0x2ba510; return; }
        }
    }
    ctx->pc = 0x2B6510u;
label_2b6510:
    // 0x2b6510: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2b6510u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2b6514:
    // 0x2b6514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6518:
    // 0x2b6518: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2b6518u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2b651c:
    // 0x2b651c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b651cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6520:
    // 0x2b6520: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2b6524:
    // 0x2b6524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6528:
    // 0x2b6528: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b652c:
    if (ctx->pc == 0x2B652Cu) {
        ctx->pc = 0x2B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6528u;
        // 0x2b652c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6530u;
        goto label_2b6530;
    }
    ctx->pc = 0x2B6528u;
    {
        const bool branch_taken_0x2b6528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6528u;
        // 0x2b652c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6528) {
            ctx->pc = 0x2B8530u;
            { ctx->pc = 0x2b8530; return; }
        }
    }
    ctx->pc = 0x2B6530u;
label_2b6530:
    // 0x2b6530: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b6534:
    if (ctx->pc == 0x2B6534u) {
        ctx->pc = 0x2B6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6530u;
        // 0x2b6534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6538u;
        goto label_2b6538;
    }
    ctx->pc = 0x2B6530u;
    {
        const bool branch_taken_0x2b6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6530u;
        // 0x2b6534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6530) {
            ctx->pc = 0x2BC5B4u;
            { ctx->pc = 0x2bc5b4; return; }
        }
    }
    ctx->pc = 0x2B6538u;
label_2b6538:
    // 0x2b6538: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b653c:
    if (ctx->pc == 0x2B653Cu) {
        ctx->pc = 0x2B653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6538u;
        // 0x2b653c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6540u;
        goto label_2b6540;
    }
    ctx->pc = 0x2B6538u;
    {
        const bool branch_taken_0x2b6538 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6538u;
        // 0x2b653c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6538) {
            ctx->pc = 0x2CC538u;
            return;
        }
    }
    ctx->pc = 0x2B6540u;
label_2b6540:
    // 0x2b6540: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b6544:
    if (ctx->pc == 0x2B6544u) {
        ctx->pc = 0x2B6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6540u;
        // 0x2b6544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6548u;
        goto label_2b6548;
    }
    ctx->pc = 0x2B6540u;
    {
        const bool branch_taken_0x2b6540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6540u;
        // 0x2b6544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6540) {
            ctx->pc = 0x2CC548u;
            return;
        }
    }
    ctx->pc = 0x2B6548u;
label_2b6548:
    // 0x2b6548: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6548u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2b654c:
    // 0x2b654c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b654cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6550:
    // 0x2b6550: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6550u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2b6554:
    // 0x2b6554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6558:
    // 0x2b6558: 0xb0b2800  j           func_C2CA000
label_2b655c:
    if (ctx->pc == 0x2B655Cu) {
        ctx->pc = 0x2B655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6558u;
        // 0x2b655c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6560u;
        goto label_2b6560;
    }
    ctx->pc = 0x2B6558u;
    ctx->pc = 0x2B655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6558u;
    // 0x2b655c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2B6558u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6560u;
label_2b6560:
    // 0x2b6560: 0xb0b3000  j           func_C2CC000
label_2b6564:
    if (ctx->pc == 0x2B6564u) {
        ctx->pc = 0x2B6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6560u;
        // 0x2b6564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6568u;
        goto label_2b6568;
    }
    ctx->pc = 0x2B6560u;
    ctx->pc = 0x2B6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6560u;
    // 0x2b6564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2B6560u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6568u;
label_2b6568:
    // 0x2b6568: 0x42010070  .word       0x42010070                   # INVALID     $s0, $at, 0x70 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6568u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x30 at 0x2B6568 raw=0x42010070"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b656c:
    // 0x2b656c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b656cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6570:
    // 0x2b6570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6574:
    // 0x2b6574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6578:
    // 0x2b6578: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b6578u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b657c:
    // 0x2b657c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b657cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6580:
    // 0x2b6580: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b6580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b6584:
    // 0x2b6584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6588:
    // 0x2b6588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b658c:
    // 0x2b658c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b658cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6590:
    // 0x2b6590: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2b6590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2b6594:
    // 0x2b6594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6598:
    // 0x2b6598: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2b659c:
    if (ctx->pc == 0x2B659Cu) {
        ctx->pc = 0x2B659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6598u;
        // 0x2b659c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B65A0u;
        goto label_2b65a0;
    }
    ctx->pc = 0x2B6598u;
    {
        const bool branch_taken_0x2b6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6598u;
        // 0x2b659c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6598) {
            ctx->pc = 0x2BA5B0u;
            { ctx->pc = 0x2ba5b0; return; }
        }
    }
    ctx->pc = 0x2B65A0u;
label_2b65a0:
    // 0x2b65a0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b65a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b65a4:
    // 0x2b65a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65a8:
    // 0x2b65a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b65a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b65ac:
    // 0x2b65ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65b0:
    // 0x2b65b0: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2b65b4:
    // 0x2b65b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65b8:
    // 0x2b65b8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b65b8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B65B8 raw=0x48007800");
 /* MITIGATED */
label_2b65bc:
    // 0x2b65bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65c0:
    // 0x2b65c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b65c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b65c4:
    // 0x2b65c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65c8:
    // 0x2b65c8: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b65cc:
    // 0x2b65cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65d0:
    // 0x2b65d0: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b65d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B65D0 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b65d4:
    // 0x2b65d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65d8:
    // 0x2b65d8: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b65d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2b65dc:
    // 0x2b65dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65e0:
    // 0x2b65e0: 0x0  nop
    ctx->pc = 0x2b65e0u;
    // NOP
label_2b65e4:
    // 0x2b65e4: 0x4a000200  vaddx       $vf8, $vf0, $vf0x
    ctx->pc = 0x2b65e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2b65e8:
    // 0x2b65e8: 0x1f84003  .word       0x01F84003                   # sra         $t0, $t8, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b65e8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 0));
label_2b65ec:
    // 0x2b65ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65f0:
    // 0x2b65f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b65f4:
    // 0x2b65f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b65f8:
    // 0x2b65f8: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2b65f8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b65fc:
    // 0x2b65fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b65fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6600:
    // 0x2b6600: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b6604:
    // 0x2b6604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6608:
    // 0x2b6608: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2b6608u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b660c:
    // 0x2b660c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b660cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6610:
    // 0x2b6610: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2b6610u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b6614:
    // 0x2b6614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6618:
    // 0x2b6618: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b6618u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B6618 raw=0x48001000");
 /* MITIGATED */
label_2b661c:
    // 0x2b661c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b661cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6620:
    // 0x2b6620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6624:
    // 0x2b6624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6628:
    // 0x2b6628: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6628u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b662c:
    // 0x2b662c: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b662cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b6630:
    // 0x2b6630: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6634:
    // 0x2b6634: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b6634u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b6638:
    // 0x2b6638: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6638u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b663c:
    // 0x2b663c: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b663cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b6640:
    // 0x2b6640: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6640u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6644:
    // 0x2b6644: 0x1e5fd28  .word       0x01E5FD28                   # mfsa        $ra # 01E50500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b6644u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b6648:
    // 0x2b6648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b664c:
    // 0x2b664c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b664cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6650:
    // 0x2b6650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6654:
    // 0x2b6654: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6654u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b6658:
    // 0x2b6658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b665c:
    // 0x2b665c: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b665cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2b6660:
    // 0x2b6660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6664:
    // 0x2b6664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6668:
    // 0x2b6668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b666c:
    // 0x2b666c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b666cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6670:
    // 0x2b6670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6674:
    // 0x2b6674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6678:
    // 0x2b6678: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2b6678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2b667c:
    // 0x2b667c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b667cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6680:
    // 0x2b6680: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2b6680u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2b6684:
    // 0x2b6684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6688:
    // 0x2b6688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b668c:
    // 0x2b668c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b668cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6690:
    // 0x2b6690: 0x50040010  beql        $zero, $a0, . + 4 + (0x10 << 2)
label_2b6694:
    if (ctx->pc == 0x2B6694u) {
        ctx->pc = 0x2B6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6690u;
        // 0x2b6694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6698u;
        goto label_2b6698;
    }
    ctx->pc = 0x2B6690u;
    {
        const bool branch_taken_0x2b6690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b6690) {
            ctx->pc = 0x2B6694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6690u;
            // 0x2b6694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B66D4u;
            goto label_2b66d4;
        }
    }
    ctx->pc = 0x2B6698u;
label_2b6698:
    // 0x2b6698: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6698u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b669c:
    // 0x2b669c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b669cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66a0:
    // 0x2b66a0: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b66a0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b66a4:
    // 0x2b66a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66a8:
    // 0x2b66a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b66a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b66ac:
    // 0x2b66ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66b0:
    // 0x2b66b0: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2b66b4:
    if (ctx->pc == 0x2B66B4u) {
        ctx->pc = 0x2B66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66B0u;
        // 0x2b66b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B66B8u;
        goto label_2b66b8;
    }
    ctx->pc = 0x2B66B0u;
    {
        const bool branch_taken_0x2b66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b66b0) {
            ctx->pc = 0x2B66B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B66B0u;
            // 0x2b66b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B66C0u;
            goto label_2b66c0;
        }
    }
    ctx->pc = 0x2B66B8u;
label_2b66b8:
    // 0x2b66b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b66b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b66bc:
    // 0x2b66bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66c0:
    // 0x2b66c0: 0x40000020  .word       0x40000020                   # mfc0        $zero, Index # 00000020 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b66c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b66c4:
    // 0x2b66c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66c8:
    // 0x2b66c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b66c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b66cc:
    // 0x2b66cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66d0:
    // 0x2b66d0: 0x42010020  .word       0x42010020                   # INVALID     $s0, $at, 0x20 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b66d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x2B66D0 raw=0x42010020"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b66d4:
    // 0x2b66d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66d8:
    // 0x2b66d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b66d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b66dc:
    // 0x2b66dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66e0:
    // 0x2b66e0: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b66e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b66e4:
    // 0x2b66e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66e8:
    // 0x2b66e8: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b66e8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b66ec:
    // 0x2b66ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66f0:
    // 0x2b66f0: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b66f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b66f4:
    // 0x2b66f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b66f8:
    // 0x2b66f8: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2b66f8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2b66fc:
    // 0x2b66fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b66fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6700:
    // 0x2b6700: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b6704:
    if (ctx->pc == 0x2B6704u) {
        ctx->pc = 0x2B6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6700u;
        // 0x2b6704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6708u;
        goto label_2b6708;
    }
    ctx->pc = 0x2B6700u;
    {
        const bool branch_taken_0x2b6700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6700u;
        // 0x2b6704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6700) {
            ctx->pc = 0x2CC708u;
            return;
        }
    }
    ctx->pc = 0x2B6708u;
label_2b6708:
    // 0x2b6708: 0x40000017  .word       0x40000017                   # mfc0        $zero, Index # 00000017 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b6708u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b670c:
    // 0x2b670c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b670cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6710:
    // 0x2b6710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6714:
    // 0x2b6714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6718:
    // 0x2b6718: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b6718u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b671c:
    // 0x2b671c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b671cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6720:
    // 0x2b6720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6724:
    // 0x2b6724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6728:
    // 0x2b6728: 0x5004000e  beql        $zero, $a0, . + 4 + (0xE << 2)
label_2b672c:
    if (ctx->pc == 0x2B672Cu) {
        ctx->pc = 0x2B672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6728u;
        // 0x2b672c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6730u;
        goto label_2b6730;
    }
    ctx->pc = 0x2B6728u;
    {
        const bool branch_taken_0x2b6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b6728) {
            ctx->pc = 0x2B672Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6728u;
            // 0x2b672c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6764u;
            goto label_2b6764;
        }
    }
    ctx->pc = 0x2B6730u;
label_2b6730:
    // 0x2b6730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6734:
    // 0x2b6734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6738:
    // 0x2b6738: 0x42010013  .word       0x42010013                   # INVALID     $s0, $at, 0x13 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6738u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x13 at 0x2B6738 raw=0x42010013"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b673c:
    // 0x2b673c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b673cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6740:
    // 0x2b6740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6744:
    // 0x2b6744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6748:
    // 0x2b6748: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2b6748u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b674c:
    // 0x2b674c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b674cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6750:
    // 0x2b6750: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2b6750u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b6754:
    // 0x2b6754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6758:
    // 0x2b6758: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2b6758u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b675c:
    // 0x2b675c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b675cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6760:
    // 0x2b6760: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2b6760u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b6764:
    // 0x2b6764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6768:
    // 0x2b6768: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b6768u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b676c:
    // 0x2b676c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b676cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6770:
    // 0x2b6770: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b6770u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b6774:
    // 0x2b6774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6778:
    // 0x2b6778: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b6778u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b677c:
    // 0x2b677c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b677cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6780:
    // 0x2b6780: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2b6780u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2b6784:
    // 0x2b6784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6788:
    // 0x2b6788: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2b678c:
    if (ctx->pc == 0x2B678Cu) {
        ctx->pc = 0x2B678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6788u;
        // 0x2b678c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6790u;
        goto label_2b6790;
    }
    ctx->pc = 0x2B6788u;
    {
        const bool branch_taken_0x2b6788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6788u;
        // 0x2b678c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6788) {
            ctx->pc = 0x2CC794u;
            return;
        }
    }
    ctx->pc = 0x2B6790u;
label_2b6790:
    // 0x2b6790: 0x40000006  .word       0x40000006                   # mfc0        $zero, Index # 00000006 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b6794:
    // 0x2b6794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
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
    ctx->pc = 0x2b6b30u;
    return;
}
