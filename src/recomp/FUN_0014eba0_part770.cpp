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


void FUN_0014eba0_part770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c6370u: goto label_2c6370;
        case 0x2c6374u: goto label_2c6374;
        case 0x2c6378u: goto label_2c6378;
        case 0x2c637cu: goto label_2c637c;
        case 0x2c6380u: goto label_2c6380;
        case 0x2c6384u: goto label_2c6384;
        case 0x2c6388u: goto label_2c6388;
        case 0x2c638cu: goto label_2c638c;
        case 0x2c6390u: goto label_2c6390;
        case 0x2c6394u: goto label_2c6394;
        case 0x2c6398u: goto label_2c6398;
        case 0x2c639cu: goto label_2c639c;
        case 0x2c63a0u: goto label_2c63a0;
        case 0x2c63a4u: goto label_2c63a4;
        case 0x2c63a8u: goto label_2c63a8;
        case 0x2c63acu: goto label_2c63ac;
        case 0x2c63b0u: goto label_2c63b0;
        case 0x2c63b4u: goto label_2c63b4;
        case 0x2c63b8u: goto label_2c63b8;
        case 0x2c63bcu: goto label_2c63bc;
        case 0x2c63c0u: goto label_2c63c0;
        case 0x2c63c4u: goto label_2c63c4;
        case 0x2c63c8u: goto label_2c63c8;
        case 0x2c63ccu: goto label_2c63cc;
        case 0x2c63d0u: goto label_2c63d0;
        case 0x2c63d4u: goto label_2c63d4;
        case 0x2c63d8u: goto label_2c63d8;
        case 0x2c63dcu: goto label_2c63dc;
        case 0x2c63e0u: goto label_2c63e0;
        case 0x2c63e4u: goto label_2c63e4;
        case 0x2c63e8u: goto label_2c63e8;
        case 0x2c63ecu: goto label_2c63ec;
        case 0x2c63f0u: goto label_2c63f0;
        case 0x2c63f4u: goto label_2c63f4;
        case 0x2c63f8u: goto label_2c63f8;
        case 0x2c63fcu: goto label_2c63fc;
        case 0x2c6400u: goto label_2c6400;
        case 0x2c6404u: goto label_2c6404;
        case 0x2c6408u: goto label_2c6408;
        case 0x2c640cu: goto label_2c640c;
        case 0x2c6410u: goto label_2c6410;
        case 0x2c6414u: goto label_2c6414;
        case 0x2c6418u: goto label_2c6418;
        case 0x2c641cu: goto label_2c641c;
        case 0x2c6420u: goto label_2c6420;
        case 0x2c6424u: goto label_2c6424;
        case 0x2c6428u: goto label_2c6428;
        case 0x2c642cu: goto label_2c642c;
        case 0x2c6430u: goto label_2c6430;
        case 0x2c6434u: goto label_2c6434;
        case 0x2c6438u: goto label_2c6438;
        case 0x2c643cu: goto label_2c643c;
        case 0x2c6440u: goto label_2c6440;
        case 0x2c6444u: goto label_2c6444;
        case 0x2c6448u: goto label_2c6448;
        case 0x2c644cu: goto label_2c644c;
        case 0x2c6450u: goto label_2c6450;
        case 0x2c6454u: goto label_2c6454;
        case 0x2c6458u: goto label_2c6458;
        case 0x2c645cu: goto label_2c645c;
        case 0x2c6460u: goto label_2c6460;
        case 0x2c6464u: goto label_2c6464;
        case 0x2c6468u: goto label_2c6468;
        case 0x2c646cu: goto label_2c646c;
        case 0x2c6470u: goto label_2c6470;
        case 0x2c6474u: goto label_2c6474;
        case 0x2c6478u: goto label_2c6478;
        case 0x2c647cu: goto label_2c647c;
        case 0x2c6480u: goto label_2c6480;
        case 0x2c6484u: goto label_2c6484;
        case 0x2c6488u: goto label_2c6488;
        case 0x2c648cu: goto label_2c648c;
        case 0x2c6490u: goto label_2c6490;
        case 0x2c6494u: goto label_2c6494;
        case 0x2c6498u: goto label_2c6498;
        case 0x2c649cu: goto label_2c649c;
        case 0x2c64a0u: goto label_2c64a0;
        case 0x2c64a4u: goto label_2c64a4;
        case 0x2c64a8u: goto label_2c64a8;
        case 0x2c64acu: goto label_2c64ac;
        case 0x2c64b0u: goto label_2c64b0;
        case 0x2c64b4u: goto label_2c64b4;
        case 0x2c64b8u: goto label_2c64b8;
        case 0x2c64bcu: goto label_2c64bc;
        case 0x2c64c0u: goto label_2c64c0;
        case 0x2c64c4u: goto label_2c64c4;
        case 0x2c64c8u: goto label_2c64c8;
        case 0x2c64ccu: goto label_2c64cc;
        case 0x2c64d0u: goto label_2c64d0;
        case 0x2c64d4u: goto label_2c64d4;
        case 0x2c64d8u: goto label_2c64d8;
        case 0x2c64dcu: goto label_2c64dc;
        case 0x2c64e0u: goto label_2c64e0;
        case 0x2c64e4u: goto label_2c64e4;
        case 0x2c64e8u: goto label_2c64e8;
        case 0x2c64ecu: goto label_2c64ec;
        case 0x2c64f0u: goto label_2c64f0;
        case 0x2c64f4u: goto label_2c64f4;
        case 0x2c64f8u: goto label_2c64f8;
        case 0x2c64fcu: goto label_2c64fc;
        case 0x2c6500u: goto label_2c6500;
        case 0x2c6504u: goto label_2c6504;
        case 0x2c6508u: goto label_2c6508;
        case 0x2c650cu: goto label_2c650c;
        case 0x2c6510u: goto label_2c6510;
        case 0x2c6514u: goto label_2c6514;
        case 0x2c6518u: goto label_2c6518;
        case 0x2c651cu: goto label_2c651c;
        case 0x2c6520u: goto label_2c6520;
        case 0x2c6524u: goto label_2c6524;
        case 0x2c6528u: goto label_2c6528;
        case 0x2c652cu: goto label_2c652c;
        case 0x2c6530u: goto label_2c6530;
        case 0x2c6534u: goto label_2c6534;
        case 0x2c6538u: goto label_2c6538;
        case 0x2c653cu: goto label_2c653c;
        case 0x2c6540u: goto label_2c6540;
        case 0x2c6544u: goto label_2c6544;
        case 0x2c6548u: goto label_2c6548;
        case 0x2c654cu: goto label_2c654c;
        case 0x2c6550u: goto label_2c6550;
        case 0x2c6554u: goto label_2c6554;
        case 0x2c6558u: goto label_2c6558;
        case 0x2c655cu: goto label_2c655c;
        case 0x2c6560u: goto label_2c6560;
        case 0x2c6564u: goto label_2c6564;
        case 0x2c6568u: goto label_2c6568;
        case 0x2c656cu: goto label_2c656c;
        case 0x2c6570u: goto label_2c6570;
        case 0x2c6574u: goto label_2c6574;
        case 0x2c6578u: goto label_2c6578;
        case 0x2c657cu: goto label_2c657c;
        case 0x2c6580u: goto label_2c6580;
        case 0x2c6584u: goto label_2c6584;
        case 0x2c6588u: goto label_2c6588;
        case 0x2c658cu: goto label_2c658c;
        case 0x2c6590u: goto label_2c6590;
        case 0x2c6594u: goto label_2c6594;
        case 0x2c6598u: goto label_2c6598;
        case 0x2c659cu: goto label_2c659c;
        case 0x2c65a0u: goto label_2c65a0;
        case 0x2c65a4u: goto label_2c65a4;
        case 0x2c65a8u: goto label_2c65a8;
        case 0x2c65acu: goto label_2c65ac;
        case 0x2c65b0u: goto label_2c65b0;
        case 0x2c65b4u: goto label_2c65b4;
        case 0x2c65b8u: goto label_2c65b8;
        case 0x2c65bcu: goto label_2c65bc;
        case 0x2c65c0u: goto label_2c65c0;
        case 0x2c65c4u: goto label_2c65c4;
        case 0x2c65c8u: goto label_2c65c8;
        case 0x2c65ccu: goto label_2c65cc;
        case 0x2c65d0u: goto label_2c65d0;
        case 0x2c65d4u: goto label_2c65d4;
        case 0x2c65d8u: goto label_2c65d8;
        case 0x2c65dcu: goto label_2c65dc;
        case 0x2c65e0u: goto label_2c65e0;
        case 0x2c65e4u: goto label_2c65e4;
        case 0x2c65e8u: goto label_2c65e8;
        case 0x2c65ecu: goto label_2c65ec;
        case 0x2c65f0u: goto label_2c65f0;
        case 0x2c65f4u: goto label_2c65f4;
        case 0x2c65f8u: goto label_2c65f8;
        case 0x2c65fcu: goto label_2c65fc;
        case 0x2c6600u: goto label_2c6600;
        case 0x2c6604u: goto label_2c6604;
        case 0x2c6608u: goto label_2c6608;
        case 0x2c660cu: goto label_2c660c;
        case 0x2c6610u: goto label_2c6610;
        case 0x2c6614u: goto label_2c6614;
        case 0x2c6618u: goto label_2c6618;
        case 0x2c661cu: goto label_2c661c;
        case 0x2c6620u: goto label_2c6620;
        case 0x2c6624u: goto label_2c6624;
        case 0x2c6628u: goto label_2c6628;
        case 0x2c662cu: goto label_2c662c;
        case 0x2c6630u: goto label_2c6630;
        case 0x2c6634u: goto label_2c6634;
        case 0x2c6638u: goto label_2c6638;
        case 0x2c663cu: goto label_2c663c;
        case 0x2c6640u: goto label_2c6640;
        case 0x2c6644u: goto label_2c6644;
        case 0x2c6648u: goto label_2c6648;
        case 0x2c664cu: goto label_2c664c;
        case 0x2c6650u: goto label_2c6650;
        case 0x2c6654u: goto label_2c6654;
        case 0x2c6658u: goto label_2c6658;
        case 0x2c665cu: goto label_2c665c;
        case 0x2c6660u: goto label_2c6660;
        case 0x2c6664u: goto label_2c6664;
        case 0x2c6668u: goto label_2c6668;
        case 0x2c666cu: goto label_2c666c;
        case 0x2c6670u: goto label_2c6670;
        case 0x2c6674u: goto label_2c6674;
        case 0x2c6678u: goto label_2c6678;
        case 0x2c667cu: goto label_2c667c;
        case 0x2c6680u: goto label_2c6680;
        case 0x2c6684u: goto label_2c6684;
        case 0x2c6688u: goto label_2c6688;
        case 0x2c668cu: goto label_2c668c;
        case 0x2c6690u: goto label_2c6690;
        case 0x2c6694u: goto label_2c6694;
        case 0x2c6698u: goto label_2c6698;
        case 0x2c669cu: goto label_2c669c;
        case 0x2c66a0u: goto label_2c66a0;
        case 0x2c66a4u: goto label_2c66a4;
        case 0x2c66a8u: goto label_2c66a8;
        case 0x2c66acu: goto label_2c66ac;
        case 0x2c66b0u: goto label_2c66b0;
        case 0x2c66b4u: goto label_2c66b4;
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66bcu: goto label_2c66bc;
        case 0x2c66c0u: goto label_2c66c0;
        case 0x2c66c4u: goto label_2c66c4;
        case 0x2c66c8u: goto label_2c66c8;
        case 0x2c66ccu: goto label_2c66cc;
        case 0x2c66d0u: goto label_2c66d0;
        case 0x2c66d4u: goto label_2c66d4;
        case 0x2c66d8u: goto label_2c66d8;
        case 0x2c66dcu: goto label_2c66dc;
        case 0x2c66e0u: goto label_2c66e0;
        case 0x2c66e4u: goto label_2c66e4;
        case 0x2c66e8u: goto label_2c66e8;
        case 0x2c66ecu: goto label_2c66ec;
        case 0x2c66f0u: goto label_2c66f0;
        case 0x2c66f4u: goto label_2c66f4;
        case 0x2c66f8u: goto label_2c66f8;
        case 0x2c66fcu: goto label_2c66fc;
        case 0x2c6700u: goto label_2c6700;
        case 0x2c6704u: goto label_2c6704;
        case 0x2c6708u: goto label_2c6708;
        case 0x2c670cu: goto label_2c670c;
        case 0x2c6710u: goto label_2c6710;
        case 0x2c6714u: goto label_2c6714;
        case 0x2c6718u: goto label_2c6718;
        case 0x2c671cu: goto label_2c671c;
        case 0x2c6720u: goto label_2c6720;
        case 0x2c6724u: goto label_2c6724;
        case 0x2c6728u: goto label_2c6728;
        case 0x2c672cu: goto label_2c672c;
        case 0x2c6730u: goto label_2c6730;
        case 0x2c6734u: goto label_2c6734;
        case 0x2c6738u: goto label_2c6738;
        case 0x2c673cu: goto label_2c673c;
        case 0x2c6740u: goto label_2c6740;
        case 0x2c6744u: goto label_2c6744;
        case 0x2c6748u: goto label_2c6748;
        case 0x2c674cu: goto label_2c674c;
        case 0x2c6750u: goto label_2c6750;
        case 0x2c6754u: goto label_2c6754;
        case 0x2c6758u: goto label_2c6758;
        case 0x2c675cu: goto label_2c675c;
        case 0x2c6760u: goto label_2c6760;
        case 0x2c6764u: goto label_2c6764;
        case 0x2c6768u: goto label_2c6768;
        case 0x2c676cu: goto label_2c676c;
        case 0x2c6770u: goto label_2c6770;
        case 0x2c6774u: goto label_2c6774;
        case 0x2c6778u: goto label_2c6778;
        case 0x2c677cu: goto label_2c677c;
        case 0x2c6780u: goto label_2c6780;
        case 0x2c6784u: goto label_2c6784;
        case 0x2c6788u: goto label_2c6788;
        case 0x2c678cu: goto label_2c678c;
        case 0x2c6790u: goto label_2c6790;
        case 0x2c6794u: goto label_2c6794;
        case 0x2c6798u: goto label_2c6798;
        case 0x2c679cu: goto label_2c679c;
        case 0x2c67a0u: goto label_2c67a0;
        case 0x2c67a4u: goto label_2c67a4;
        case 0x2c67a8u: goto label_2c67a8;
        case 0x2c67acu: goto label_2c67ac;
        case 0x2c67b0u: goto label_2c67b0;
        case 0x2c67b4u: goto label_2c67b4;
        case 0x2c67b8u: goto label_2c67b8;
        case 0x2c67bcu: goto label_2c67bc;
        case 0x2c67c0u: goto label_2c67c0;
        case 0x2c67c4u: goto label_2c67c4;
        case 0x2c67c8u: goto label_2c67c8;
        case 0x2c67ccu: goto label_2c67cc;
        case 0x2c67d0u: goto label_2c67d0;
        case 0x2c67d4u: goto label_2c67d4;
        case 0x2c67d8u: goto label_2c67d8;
        case 0x2c67dcu: goto label_2c67dc;
        case 0x2c67e0u: goto label_2c67e0;
        case 0x2c67e4u: goto label_2c67e4;
        case 0x2c67e8u: goto label_2c67e8;
        case 0x2c67ecu: goto label_2c67ec;
        case 0x2c67f0u: goto label_2c67f0;
        case 0x2c67f4u: goto label_2c67f4;
        case 0x2c67f8u: goto label_2c67f8;
        case 0x2c67fcu: goto label_2c67fc;
        case 0x2c6800u: goto label_2c6800;
        case 0x2c6804u: goto label_2c6804;
        case 0x2c6808u: goto label_2c6808;
        case 0x2c680cu: goto label_2c680c;
        case 0x2c6810u: goto label_2c6810;
        case 0x2c6814u: goto label_2c6814;
        case 0x2c6818u: goto label_2c6818;
        case 0x2c681cu: goto label_2c681c;
        case 0x2c6820u: goto label_2c6820;
        case 0x2c6824u: goto label_2c6824;
        case 0x2c6828u: goto label_2c6828;
        case 0x2c682cu: goto label_2c682c;
        case 0x2c6830u: goto label_2c6830;
        case 0x2c6834u: goto label_2c6834;
        case 0x2c6838u: goto label_2c6838;
        case 0x2c683cu: goto label_2c683c;
        case 0x2c6840u: goto label_2c6840;
        case 0x2c6844u: goto label_2c6844;
        case 0x2c6848u: goto label_2c6848;
        case 0x2c684cu: goto label_2c684c;
        case 0x2c6850u: goto label_2c6850;
        case 0x2c6854u: goto label_2c6854;
        case 0x2c6858u: goto label_2c6858;
        case 0x2c685cu: goto label_2c685c;
        case 0x2c6860u: goto label_2c6860;
        case 0x2c6864u: goto label_2c6864;
        case 0x2c6868u: goto label_2c6868;
        case 0x2c686cu: goto label_2c686c;
        case 0x2c6870u: goto label_2c6870;
        case 0x2c6874u: goto label_2c6874;
        case 0x2c6878u: goto label_2c6878;
        case 0x2c687cu: goto label_2c687c;
        case 0x2c6880u: goto label_2c6880;
        case 0x2c6884u: goto label_2c6884;
        case 0x2c6888u: goto label_2c6888;
        case 0x2c688cu: goto label_2c688c;
        case 0x2c6890u: goto label_2c6890;
        case 0x2c6894u: goto label_2c6894;
        case 0x2c6898u: goto label_2c6898;
        case 0x2c689cu: goto label_2c689c;
        case 0x2c68a0u: goto label_2c68a0;
        case 0x2c68a4u: goto label_2c68a4;
        case 0x2c68a8u: goto label_2c68a8;
        case 0x2c68acu: goto label_2c68ac;
        case 0x2c68b0u: goto label_2c68b0;
        case 0x2c68b4u: goto label_2c68b4;
        case 0x2c68b8u: goto label_2c68b8;
        case 0x2c68bcu: goto label_2c68bc;
        case 0x2c68c0u: goto label_2c68c0;
        case 0x2c68c4u: goto label_2c68c4;
        case 0x2c68c8u: goto label_2c68c8;
        case 0x2c68ccu: goto label_2c68cc;
        case 0x2c68d0u: goto label_2c68d0;
        case 0x2c68d4u: goto label_2c68d4;
        case 0x2c68d8u: goto label_2c68d8;
        case 0x2c68dcu: goto label_2c68dc;
        case 0x2c68e0u: goto label_2c68e0;
        case 0x2c68e4u: goto label_2c68e4;
        case 0x2c68e8u: goto label_2c68e8;
        case 0x2c68ecu: goto label_2c68ec;
        case 0x2c68f0u: goto label_2c68f0;
        case 0x2c68f4u: goto label_2c68f4;
        case 0x2c68f8u: goto label_2c68f8;
        case 0x2c68fcu: goto label_2c68fc;
        case 0x2c6900u: goto label_2c6900;
        case 0x2c6904u: goto label_2c6904;
        case 0x2c6908u: goto label_2c6908;
        case 0x2c690cu: goto label_2c690c;
        case 0x2c6910u: goto label_2c6910;
        case 0x2c6914u: goto label_2c6914;
        case 0x2c6918u: goto label_2c6918;
        case 0x2c691cu: goto label_2c691c;
        case 0x2c6920u: goto label_2c6920;
        case 0x2c6924u: goto label_2c6924;
        case 0x2c6928u: goto label_2c6928;
        case 0x2c692cu: goto label_2c692c;
        case 0x2c6930u: goto label_2c6930;
        case 0x2c6934u: goto label_2c6934;
        case 0x2c6938u: goto label_2c6938;
        case 0x2c693cu: goto label_2c693c;
        case 0x2c6940u: goto label_2c6940;
        case 0x2c6944u: goto label_2c6944;
        case 0x2c6948u: goto label_2c6948;
        case 0x2c694cu: goto label_2c694c;
        case 0x2c6950u: goto label_2c6950;
        case 0x2c6954u: goto label_2c6954;
        case 0x2c6958u: goto label_2c6958;
        case 0x2c695cu: goto label_2c695c;
        case 0x2c6960u: goto label_2c6960;
        case 0x2c6964u: goto label_2c6964;
        case 0x2c6968u: goto label_2c6968;
        case 0x2c696cu: goto label_2c696c;
        case 0x2c6970u: goto label_2c6970;
        case 0x2c6974u: goto label_2c6974;
        case 0x2c6978u: goto label_2c6978;
        case 0x2c697cu: goto label_2c697c;
        case 0x2c6980u: goto label_2c6980;
        case 0x2c6984u: goto label_2c6984;
        case 0x2c6988u: goto label_2c6988;
        case 0x2c698cu: goto label_2c698c;
        case 0x2c6990u: goto label_2c6990;
        case 0x2c6994u: goto label_2c6994;
        case 0x2c6998u: goto label_2c6998;
        case 0x2c699cu: goto label_2c699c;
        case 0x2c69a0u: goto label_2c69a0;
        case 0x2c69a4u: goto label_2c69a4;
        case 0x2c69a8u: goto label_2c69a8;
        case 0x2c69acu: goto label_2c69ac;
        case 0x2c69b0u: goto label_2c69b0;
        case 0x2c69b4u: goto label_2c69b4;
        case 0x2c69b8u: goto label_2c69b8;
        case 0x2c69bcu: goto label_2c69bc;
        case 0x2c69c0u: goto label_2c69c0;
        case 0x2c69c4u: goto label_2c69c4;
        case 0x2c69c8u: goto label_2c69c8;
        case 0x2c69ccu: goto label_2c69cc;
        case 0x2c69d0u: goto label_2c69d0;
        case 0x2c69d4u: goto label_2c69d4;
        case 0x2c69d8u: goto label_2c69d8;
        case 0x2c69dcu: goto label_2c69dc;
        case 0x2c69e0u: goto label_2c69e0;
        case 0x2c69e4u: goto label_2c69e4;
        case 0x2c69e8u: goto label_2c69e8;
        case 0x2c69ecu: goto label_2c69ec;
        case 0x2c69f0u: goto label_2c69f0;
        case 0x2c69f4u: goto label_2c69f4;
        case 0x2c69f8u: goto label_2c69f8;
        case 0x2c69fcu: goto label_2c69fc;
        case 0x2c6a00u: goto label_2c6a00;
        case 0x2c6a04u: goto label_2c6a04;
        case 0x2c6a08u: goto label_2c6a08;
        case 0x2c6a0cu: goto label_2c6a0c;
        case 0x2c6a10u: goto label_2c6a10;
        case 0x2c6a14u: goto label_2c6a14;
        case 0x2c6a18u: goto label_2c6a18;
        case 0x2c6a1cu: goto label_2c6a1c;
        case 0x2c6a20u: goto label_2c6a20;
        case 0x2c6a24u: goto label_2c6a24;
        case 0x2c6a28u: goto label_2c6a28;
        case 0x2c6a2cu: goto label_2c6a2c;
        case 0x2c6a30u: goto label_2c6a30;
        case 0x2c6a34u: goto label_2c6a34;
        case 0x2c6a38u: goto label_2c6a38;
        case 0x2c6a3cu: goto label_2c6a3c;
        case 0x2c6a40u: goto label_2c6a40;
        case 0x2c6a44u: goto label_2c6a44;
        case 0x2c6a48u: goto label_2c6a48;
        case 0x2c6a4cu: goto label_2c6a4c;
        case 0x2c6a50u: goto label_2c6a50;
        case 0x2c6a54u: goto label_2c6a54;
        case 0x2c6a58u: goto label_2c6a58;
        case 0x2c6a5cu: goto label_2c6a5c;
        case 0x2c6a60u: goto label_2c6a60;
        case 0x2c6a64u: goto label_2c6a64;
        case 0x2c6a68u: goto label_2c6a68;
        case 0x2c6a6cu: goto label_2c6a6c;
        case 0x2c6a70u: goto label_2c6a70;
        case 0x2c6a74u: goto label_2c6a74;
        case 0x2c6a78u: goto label_2c6a78;
        case 0x2c6a7cu: goto label_2c6a7c;
        case 0x2c6a80u: goto label_2c6a80;
        case 0x2c6a84u: goto label_2c6a84;
        case 0x2c6a88u: goto label_2c6a88;
        case 0x2c6a8cu: goto label_2c6a8c;
        case 0x2c6a90u: goto label_2c6a90;
        case 0x2c6a94u: goto label_2c6a94;
        case 0x2c6a98u: goto label_2c6a98;
        case 0x2c6a9cu: goto label_2c6a9c;
        case 0x2c6aa0u: goto label_2c6aa0;
        case 0x2c6aa4u: goto label_2c6aa4;
        case 0x2c6aa8u: goto label_2c6aa8;
        case 0x2c6aacu: goto label_2c6aac;
        case 0x2c6ab0u: goto label_2c6ab0;
        case 0x2c6ab4u: goto label_2c6ab4;
        case 0x2c6ab8u: goto label_2c6ab8;
        case 0x2c6abcu: goto label_2c6abc;
        case 0x2c6ac0u: goto label_2c6ac0;
        case 0x2c6ac4u: goto label_2c6ac4;
        case 0x2c6ac8u: goto label_2c6ac8;
        case 0x2c6accu: goto label_2c6acc;
        case 0x2c6ad0u: goto label_2c6ad0;
        case 0x2c6ad4u: goto label_2c6ad4;
        case 0x2c6ad8u: goto label_2c6ad8;
        case 0x2c6adcu: goto label_2c6adc;
        case 0x2c6ae0u: goto label_2c6ae0;
        case 0x2c6ae4u: goto label_2c6ae4;
        case 0x2c6ae8u: goto label_2c6ae8;
        case 0x2c6aecu: goto label_2c6aec;
        case 0x2c6af0u: goto label_2c6af0;
        case 0x2c6af4u: goto label_2c6af4;
        case 0x2c6af8u: goto label_2c6af8;
        case 0x2c6afcu: goto label_2c6afc;
        case 0x2c6b00u: goto label_2c6b00;
        case 0x2c6b04u: goto label_2c6b04;
        case 0x2c6b08u: goto label_2c6b08;
        case 0x2c6b0cu: goto label_2c6b0c;
        case 0x2c6b10u: goto label_2c6b10;
        case 0x2c6b14u: goto label_2c6b14;
        case 0x2c6b18u: goto label_2c6b18;
        case 0x2c6b1cu: goto label_2c6b1c;
        case 0x2c6b20u: goto label_2c6b20;
        case 0x2c6b24u: goto label_2c6b24;
        case 0x2c6b28u: goto label_2c6b28;
        case 0x2c6b2cu: goto label_2c6b2c;
        case 0x2c6b30u: goto label_2c6b30;
        case 0x2c6b34u: goto label_2c6b34;
        case 0x2c6b38u: goto label_2c6b38;
        case 0x2c6b3cu: goto label_2c6b3c;
        default: return;
    }

label_2c6370:
    // 0x2c6370: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c6370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6374:
    // 0x2c6374: 0x6e615420  ldr         $at, 0x5420($s3)
    ctx->pc = 0x2c6374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6378:
    // 0x2c6378: 0x0  nop
    ctx->pc = 0x2c6378u;
    // NOP
label_2c637c:
    // 0x2c637c: 0x0  nop
    ctx->pc = 0x2c637cu;
    // NOP
label_2c6380:
    // 0x2c6380: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c6380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6384:
    // 0x2c6384: 0x695820  add         $t3, $v1, $t1
    ctx->pc = 0x2c6384u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2c6388:
    // 0x2c6388: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c6388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c638c:
    // 0x2c638c: 0x61685320  daddi       $t0, $t3, 0x5320
    ctx->pc = 0x2c638cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c6390:
    // 0x2c6390: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c6394:
    // 0x2c6394: 0x0  nop
    ctx->pc = 0x2c6394u;
    // NOP
label_2c6398:
    // 0x2c6398: 0x5320754a  beql        $t9, $zero, . + 4 + (0x754A << 2)
label_2c639c:
    if (ctx->pc == 0x2C639Cu) {
        ctx->pc = 0x2C639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6398u;
        // 0x2c639c: 0x756f68  .word       0x00756F68                   # mfsa        $t5 # 00750740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 13, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C63A0u;
        goto label_2c63a0;
    }
    ctx->pc = 0x2C6398u;
    {
        const bool branch_taken_0x2c6398 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6398) {
            ctx->pc = 0x2C639Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6398u;
            // 0x2c639c: 0x756f68  .word       0x00756F68                   # mfsa        $t5 # 00750740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            SET_GPR_U32(ctx, 13, ctx->sa);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E38C4u;
            return;
        }
    }
    ctx->pc = 0x2C63A0u;
label_2c63a0:
    // 0x2c63a0: 0x206f6147  addi        $t7, $v1, 0x6147
    ctx->pc = 0x2c63a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24903, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c63a4:
    // 0x2c63a4: 0x6e614c  .word       0x006E614C                   # syscall     389 # 006E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c63a4u;
    ctx->pc = 0x2C63A8u;
runtime->handleSyscall(rdram, ctx, 0x1B985u);
label_2c63a8:
    // 0x2c63a8: 0x6f61685a  ldr         $at, 0x685A($k1)
    ctx->pc = 0x2c63a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c63ac:
    // 0x2c63ac: 0x6e654320  ldr         $a1, 0x4320($s3)
    ctx->pc = 0x2c63acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c63b0:
    // 0x2c63b0: 0x0  nop
    ctx->pc = 0x2c63b0u;
    // NOP
label_2c63b4:
    // 0x2c63b4: 0x0  nop
    ctx->pc = 0x2c63b4u;
    // NOP
label_2c63b8:
    // 0x2c63b8: 0x756f694e  .word       0x756F694E                   # INVALID     $t3, $t7, 0x694E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c63b8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C63B8 raw=0x756F694E");
 /* MITIGATED */
label_2c63bc:
    // 0x2c63bc: 0x754620  .word       0x00754620                   # add         $t0, $v1, $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c63bcu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2c63c0:
    // 0x2c63c0: 0x206e6146  addi        $t6, $v1, 0x6146
    ctx->pc = 0x2c63c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24902, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c63c4:
    // 0x2c63c4: 0x756f6843  .word       0x756F6843                   # INVALID     $t3, $t7, 0x6843 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c63c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C63C4 raw=0x756F6843");
 /* MITIGATED */
label_2c63c8:
    // 0x2c63c8: 0x0  nop
    ctx->pc = 0x2c63c8u;
    // NOP
label_2c63cc:
    // 0x2c63cc: 0x0  nop
    ctx->pc = 0x2c63ccu;
    // NOP
label_2c63d0:
    // 0x2c63d0: 0x676e6157  daddiu      $t6, $k1, 0x6157
    ctx->pc = 0x2c63d0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24919);
label_2c63d4:
    // 0x2c63d4: 0x6e614620  ldr         $at, 0x4620($s3)
    ctx->pc = 0x2c63d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c63d8:
    // 0x2c63d8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c63d8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c63dc:
    // 0x2c63dc: 0x0  nop
    ctx->pc = 0x2c63dcu;
    // NOP
label_2c63e0:
    // 0x2c63e0: 0x4d20694c  .word       0x4D20694C                   # INVALID     $t1, $zero, 0x694C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c63e0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C63E0 raw=0x4D20694C");
 /* MITIGATED */
label_2c63e4:
    // 0x2c63e4: 0x676e65  .word       0x00676E65                   # or          $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c63e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_2c63e8:
    // 0x2c63e8: 0x4a206548  vmaddx.w    $vf21, $vf12, $vf0x
    ctx->pc = 0x2c63e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2c63ec:
    // 0x2c63ec: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c63ecu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c63f0:
    // 0x2c63f0: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c63f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c63f4:
    // 0x2c63f4: 0x6e754a  .word       0x006E754A                   # movz        $t6, $v1, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c63f4u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 3));
label_2c63f8:
    // 0x2c63f8: 0x5a20754c  blezl       $s1, . + 4 + (0x754C << 2)
label_2c63fc:
    if (ctx->pc == 0x2C63FCu) {
        ctx->pc = 0x2C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63F8u;
        // 0x2c63fc: 0x6968  .word       0x00006968                   # mfsa        $t5 # 00000140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 13, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6400u;
        goto label_2c6400;
    }
    ctx->pc = 0x2C63F8u;
    {
        const bool branch_taken_0x2c63f8 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c63f8) {
            ctx->pc = 0x2C63FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C63F8u;
            // 0x2c63fc: 0x6968  .word       0x00006968                   # mfsa        $t5 # 00000140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            SET_GPR_U32(ctx, 13, ctx->sa);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E392Cu;
            return;
        }
    }
    ctx->pc = 0x2C6400u;
label_2c6400:
    // 0x2c6400: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c6400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6404:
    // 0x2c6404: 0x20756667  addi        $s5, $v1, 0x6667
    ctx->pc = 0x2c6404u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26215, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6408:
    // 0x2c6408: 0x676e6f53  daddiu      $t6, $k1, 0x6F53
    ctx->pc = 0x2c6408u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28499);
label_2c640c:
    // 0x2c640c: 0x0  nop
    ctx->pc = 0x2c640cu;
    // NOP
label_2c6410:
    // 0x2c6410: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6414:
    // 0x2c6414: 0x68432067  ldl         $v1, 0x2067($v0)
    ctx->pc = 0x2c6414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c6418:
    // 0x2c6418: 0x6f61  .word       0x00006F61                   # addu        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6418u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c641c:
    // 0x2c641c: 0x0  nop
    ctx->pc = 0x2c641cu;
    // NOP
label_2c6420:
    // 0x2c6420: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6420u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6424:
    // 0x2c6424: 0x6e6159  .word       0x006E6159                   # multu       $v1, $t6 # 00006140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6424u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c6428:
    // 0x2c6428: 0x20756f5a  addi        $s5, $v1, 0x6F5A
    ctx->pc = 0x2c6428u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28506, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c642c:
    // 0x2c642c: 0x676e694a  daddiu      $t6, $k1, 0x694A
    ctx->pc = 0x2c642cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26954);
label_2c6430:
    // 0x2c6430: 0x0  nop
    ctx->pc = 0x2c6430u;
    // NOP
label_2c6434:
    // 0x2c6434: 0x0  nop
    ctx->pc = 0x2c6434u;
    // NOP
label_2c6438:
    // 0x2c6438: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c6438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c643c:
    // 0x2c643c: 0x75592067  .word       0x75592067                   # INVALID     $t2, $t9, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c643cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C643C raw=0x75592067");
 /* MITIGATED */
label_2c6440:
    // 0x2c6440: 0x687a6e61  ldl         $k0, 0x6E61($v1)
    ctx->pc = 0x2c6440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
label_2c6444:
    // 0x2c6444: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6444u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c6448:
    // 0x2c6448: 0x676e6544  daddiu      $t6, $k1, 0x6544
    ctx->pc = 0x2c6448u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25924);
label_2c644c:
    // 0x2c644c: 0x6f614d20  ldr         $at, 0x4D20($k1)
    ctx->pc = 0x2c644cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6450:
    // 0x2c6450: 0x0  nop
    ctx->pc = 0x2c6450u;
    // NOP
label_2c6454:
    // 0x2c6454: 0x0  nop
    ctx->pc = 0x2c6454u;
    // NOP
label_2c6458:
    // 0x2c6458: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c6458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c645c:
    // 0x2c645c: 0x69614820  ldl         $at, 0x4820($t3)
    ctx->pc = 0x2c645cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c6460:
    // 0x2c6460: 0x0  nop
    ctx->pc = 0x2c6460u;
    // NOP
label_2c6464:
    // 0x2c6464: 0x0  nop
    ctx->pc = 0x2c6464u;
    // NOP
label_2c6468:
    // 0x2c6468: 0x20696550  addi        $t1, $v1, 0x6550
    ctx->pc = 0x2c6468u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25936, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c646c:
    // 0x2c646c: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c646cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6470:
    // 0x2c6470: 0x61685320  daddi       $t0, $t3, 0x5320
    ctx->pc = 0x2c6470u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c6474:
    // 0x2c6474: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6474u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c6478:
    // 0x2c6478: 0x59206548  blezl       $t1, . + 4 + (0x6548 << 2)
label_2c647c:
    if (ctx->pc == 0x2C647Cu) {
        ctx->pc = 0x2C647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6478u;
        // 0x2c647c: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        ctx->sa = GPR_U32(ctx, 0) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6480u;
        goto label_2c6480;
    }
    ctx->pc = 0x2C6478u;
    {
        const bool branch_taken_0x2c6478 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2c6478) {
            ctx->pc = 0x2C647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6478u;
            // 0x2c647c: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            ctx->sa = GPR_U32(ctx, 0) & 0x7F;
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF99Cu;
            return;
        }
    }
    ctx->pc = 0x2C6480u;
label_2c6480:
    // 0x2c6480: 0x206e6159  addi        $t6, $v1, 0x6159
    ctx->pc = 0x2c6480u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24921, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6484:
    // 0x2c6484: 0x6e65685a  ldr         $a1, 0x685A($s3)
    ctx->pc = 0x2c6484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6488:
    // 0x2c6488: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6488u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c648c:
    // 0x2c648c: 0x0  nop
    ctx->pc = 0x2c648cu;
    // NOP
label_2c6490:
    // 0x2c6490: 0x206f6147  addi        $t7, $v1, 0x6147
    ctx->pc = 0x2c6490u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24903, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6494:
    // 0x2c6494: 0x6e656853  ldr         $a1, 0x6853($s3)
    ctx->pc = 0x2c6494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6498:
    // 0x2c6498: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6498u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c649c:
    // 0x2c649c: 0x0  nop
    ctx->pc = 0x2c649cu;
    // NOP
label_2c64a0:
    // 0x2c64a0: 0x676e6f53  daddiu      $t6, $k1, 0x6F53
    ctx->pc = 0x2c64a0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28499);
label_2c64a4:
    // 0x2c64a4: 0x61695820  daddi       $t1, $t3, 0x5820
    ctx->pc = 0x2c64a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)22560; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2c64a8:
    // 0x2c64a8: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c64a8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c64ac:
    // 0x2c64ac: 0x0  nop
    ctx->pc = 0x2c64acu;
    // NOP
label_2c64b0:
    // 0x2c64b0: 0x20696557  addi        $t1, $v1, 0x6557
    ctx->pc = 0x2c64b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c64b4:
    // 0x2c64b4: 0x7558  .word       0x00007558                   # mult        $t6, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c64b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c64b8:
    // 0x2c64b8: 0x20696853  addi        $t1, $v1, 0x6853
    ctx->pc = 0x2c64b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c64bc:
    // 0x2c64bc: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c64bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c64c0:
    // 0x2c64c0: 0x0  nop
    ctx->pc = 0x2c64c0u;
    // NOP
label_2c64c4:
    // 0x2c64c4: 0x0  nop
    ctx->pc = 0x2c64c4u;
    // NOP
label_2c64c8:
    // 0x2c64c8: 0x5720754c  bnel        $t9, $zero, . + 4 + (0x754C << 2)
label_2c64cc:
    if (ctx->pc == 0x2C64CCu) {
        ctx->pc = 0x2C64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64C8u;
        // 0x2c64cc: 0x4b206965  vmsubq.xw   $vf5, $vf13, $Q (Delay Slot)
        { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64D0u;
        goto label_2c64d0;
    }
    ctx->pc = 0x2C64C8u;
    {
        const bool branch_taken_0x2c64c8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c64c8) {
            ctx->pc = 0x2C64CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C64C8u;
            // 0x2c64cc: 0x4b206965  vmsubq.xw   $vf5, $vf13, $Q (Delay Slot)
            { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39FCu;
            return;
        }
    }
    ctx->pc = 0x2C64D0u;
label_2c64d0:
    // 0x2c64d0: 0x676e6175  daddiu      $t6, $k1, 0x6175
    ctx->pc = 0x2c64d0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24949);
label_2c64d4:
    // 0x2c64d4: 0x0  nop
    ctx->pc = 0x2c64d4u;
    // NOP
label_2c64d8:
    // 0x2c64d8: 0x206e7558  addi        $t6, $v1, 0x7558
    ctx->pc = 0x2c64d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30040, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c64dc:
    // 0x2c64dc: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c64dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c64e0:
    // 0x2c64e0: 0x0  nop
    ctx->pc = 0x2c64e0u;
    // NOP
label_2c64e4:
    // 0x2c64e4: 0x0  nop
    ctx->pc = 0x2c64e4u;
    // NOP
label_2c64e8:
    // 0x2c64e8: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c64e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c64ec:
    // 0x2c64ec: 0x676e654d  daddiu      $t6, $k1, 0x654D
    ctx->pc = 0x2c64ecu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25933);
label_2c64f0:
    // 0x2c64f0: 0x0  nop
    ctx->pc = 0x2c64f0u;
    // NOP
label_2c64f4:
    // 0x2c64f4: 0x0  nop
    ctx->pc = 0x2c64f4u;
    // NOP
label_2c64f8:
    // 0x2c64f8: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c64f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c64fc:
    // 0x2c64fc: 0x6e7558  .word       0x006E7558                   # mult        $t6, $v1, $t6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c64fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c6500:
    // 0x2c6500: 0x756f685a  .word       0x756F685A                   # INVALID     $t3, $t7, 0x685A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6500u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6500 raw=0x756F685A");
 /* MITIGATED */
label_2c6504:
    // 0x2c6504: 0x6e614320  ldr         $at, 0x4320($s3)
    ctx->pc = 0x2c6504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6508:
    // 0x2c6508: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6508u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c650c:
    // 0x2c650c: 0x0  nop
    ctx->pc = 0x2c650cu;
    // NOP
label_2c6510:
    // 0x2c6510: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c6510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6514:
    // 0x2c6514: 0x6e695020  ldr         $t1, 0x5020($s3)
    ctx->pc = 0x2c6514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c6518:
    // 0x2c6518: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6518u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c651c:
    // 0x2c651c: 0x0  nop
    ctx->pc = 0x2c651cu;
    // NOP
label_2c6520:
    // 0x2c6520: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c6520u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6524:
    // 0x2c6524: 0x6e616951  ldr         $at, 0x6951($s3)
    ctx->pc = 0x2c6524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26961); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6528:
    // 0x2c6528: 0x0  nop
    ctx->pc = 0x2c6528u;
    // NOP
label_2c652c:
    // 0x2c652c: 0x0  nop
    ctx->pc = 0x2c652cu;
    // NOP
label_2c6530:
    // 0x2c6530: 0x5a20694d  blezl       $s1, . + 4 + (0x694D << 2)
label_2c6534:
    if (ctx->pc == 0x2C6534u) {
        ctx->pc = 0x2C6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6530u;
        // 0x2c6534: 0x7568  .word       0x00007568                   # mfsa        $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 14, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6538u;
        goto label_2c6538;
    }
    ctx->pc = 0x2C6530u;
    {
        const bool branch_taken_0x2c6530 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c6530) {
            ctx->pc = 0x2C6534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6530u;
            // 0x2c6534: 0x7568  .word       0x00007568                   # mfsa        $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            SET_GPR_U32(ctx, 14, ctx->sa);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0A68u;
            return;
        }
    }
    ctx->pc = 0x2C6538u;
label_2c6538:
    // 0x2c6538: 0x4620694d  .word       0x4620694D                   # INVALID     $s1, $zero, 0x694D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6538u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0xD at 0x2C6538 raw=0x4620694D");
 /* MITIGATED */
label_2c653c:
    // 0x2c653c: 0x676e61  .word       0x00676E61                   # addu        $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c653cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c6540:
    // 0x2c6540: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6540u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6544:
    // 0x2c6544: 0x676e6546  daddiu      $t6, $k1, 0x6546
    ctx->pc = 0x2c6544u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25926);
label_2c6548:
    // 0x2c6548: 0x0  nop
    ctx->pc = 0x2c6548u;
    // NOP
label_2c654c:
    // 0x2c654c: 0x0  nop
    ctx->pc = 0x2c654cu;
    // NOP
label_2c6550:
    // 0x2c6550: 0x6f61694c  ldr         $at, 0x694C($k1)
    ctx->pc = 0x2c6550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6554:
    // 0x2c6554: 0x61754820  daddi       $s5, $t3, 0x4820
    ctx->pc = 0x2c6554u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18464; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c6558:
    // 0x2c6558: 0x0  nop
    ctx->pc = 0x2c6558u;
    // NOP
label_2c655c:
    // 0x2c655c: 0x0  nop
    ctx->pc = 0x2c655cu;
    // NOP
label_2c6560:
    // 0x2c6560: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6560u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6564:
    // 0x2c6564: 0x6951  .word       0x00006951                   # mthi        $zero # 00006940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6564u;
    ctx->hi = GPR_U64(ctx, 0);
label_2c6568:
    // 0x2c6568: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6568u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c656c:
    // 0x2c656c: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c656cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c6570:
    // 0x2c6570: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6570u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6574:
    // 0x2c6574: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6578:
    // 0x2c6578: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6578u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c657c:
    // 0x2c657c: 0x0  nop
    ctx->pc = 0x2c657cu;
    // NOP
label_2c6580:
    // 0x2c6580: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c6580u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6584:
    // 0x2c6584: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c6584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6588:
    // 0x2c6588: 0x0  nop
    ctx->pc = 0x2c6588u;
    // NOP
label_2c658c:
    // 0x2c658c: 0x0  nop
    ctx->pc = 0x2c658cu;
    // NOP
label_2c6590:
    // 0x2c6590: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c6590u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6594:
    // 0x2c6594: 0x6e6152  .word       0x006E6152                   # mflo        $t4 # 006E0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6594u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_2c6598:
    // 0x2c6598: 0x6e61694a  ldr         $at, 0x694A($s3)
    ctx->pc = 0x2c6598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c659c:
    // 0x2c659c: 0x69512067  ldl         $s1, 0x2067($t2)
    ctx->pc = 0x2c659cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
label_2c65a0:
    // 0x2c65a0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c65a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c65a4:
    // 0x2c65a4: 0x0  nop
    ctx->pc = 0x2c65a4u;
    // NOP
label_2c65a8:
    // 0x2c65a8: 0x676e6f44  daddiu      $t6, $k1, 0x6F44
    ctx->pc = 0x2c65a8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28484);
label_2c65ac:
    // 0x2c65ac: 0x695820  add         $t3, $v1, $t1
    ctx->pc = 0x2c65acu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2c65b0:
    // 0x2c65b0: 0x206e6150  addi        $t6, $v1, 0x6150
    ctx->pc = 0x2c65b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c65b4:
    // 0x2c65b4: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c65b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c65b8:
    // 0x2c65b8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c65b8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c65bc:
    // 0x2c65bc: 0x0  nop
    ctx->pc = 0x2c65bcu;
    // NOP
label_2c65c0:
    // 0x2c65c0: 0x206e6159  addi        $t6, $v1, 0x6159
    ctx->pc = 0x2c65c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24921, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c65c4:
    // 0x2c65c4: 0x6e6159  .word       0x006E6159                   # multu       $v1, $t6 # 00006140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c65c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c65c8:
    // 0x2c65c8: 0x4c207557  .word       0x4C207557                   # INVALID     $at, $zero, 0x7557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c65c8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C65C8 raw=0x4C207557");
 /* MITIGATED */
label_2c65cc:
    // 0x2c65cc: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c65ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c65d0:
    // 0x2c65d0: 0x2069654c  addi        $t1, $v1, 0x654C
    ctx->pc = 0x2c65d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25932, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c65d4:
    // 0x2c65d4: 0x676e6f54  daddiu      $t6, $k1, 0x6F54
    ctx->pc = 0x2c65d4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28500);
label_2c65d8:
    // 0x2c65d8: 0x0  nop
    ctx->pc = 0x2c65d8u;
    // NOP
label_2c65dc:
    // 0x2c65dc: 0x0  nop
    ctx->pc = 0x2c65dcu;
    // NOP
label_2c65e0:
    // 0x2c65e0: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c65e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c65e4:
    // 0x2c65e4: 0x694a2067  ldl         $t2, 0x2067($t2)
    ctx->pc = 0x2c65e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2c65e8:
    // 0x2c65e8: 0x0  nop
    ctx->pc = 0x2c65e8u;
    // NOP
label_2c65ec:
    // 0x2c65ec: 0x0  nop
    ctx->pc = 0x2c65ecu;
    // NOP
label_2c65f0:
    // 0x2c65f0: 0x5320614d  beql        $t9, $zero, . + 4 + (0x614D << 2)
label_2c65f4:
    if (ctx->pc == 0x2C65F4u) {
        ctx->pc = 0x2C65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65F0u;
        // 0x2c65f4: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C65F4 raw=0x00000075");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65F8u;
        goto label_2c65f8;
    }
    ctx->pc = 0x2C65F0u;
    {
        const bool branch_taken_0x2c65f0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65f0) {
            ctx->pc = 0x2C65F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C65F0u;
            // 0x2c65f4: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C65F4 raw=0x00000075");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB28u;
            return;
        }
    }
    ctx->pc = 0x2C65F8u;
label_2c65f8:
    // 0x2c65f8: 0x4c20614d  .word       0x4C20614D                   # INVALID     $at, $zero, 0x614D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c65f8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C65F8 raw=0x4C20614D");
 /* MITIGATED */
label_2c65fc:
    // 0x2c65fc: 0x676e6169  daddiu      $t6, $k1, 0x6169
    ctx->pc = 0x2c65fcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24937);
label_2c6600:
    // 0x2c6600: 0x0  nop
    ctx->pc = 0x2c6600u;
    // NOP
label_2c6604:
    // 0x2c6604: 0x0  nop
    ctx->pc = 0x2c6604u;
    // NOP
label_2c6608:
    // 0x2c6608: 0x4820694c  .word       0x4820694C                   # qmfc2.ni    $zero, $vf13 # 0000014C <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c6608u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[13]));
label_2c660c:
    // 0x2c660c: 0x6975  .word       0x00006975                   # INVALID     $zero, $zero, 0x6975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c660cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C660C raw=0x00006975");
 /* MITIGATED */
label_2c6610:
    // 0x2c6610: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6614:
    // 0x2c6614: 0x69592067  ldl         $t9, 0x2067($t2)
    ctx->pc = 0x2c6614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
label_2c6618:
    // 0x2c6618: 0x0  nop
    ctx->pc = 0x2c6618u;
    // NOP
label_2c661c:
    // 0x2c661c: 0x0  nop
    ctx->pc = 0x2c661cu;
    // NOP
label_2c6620:
    // 0x2c6620: 0x676e6157  daddiu      $t6, $k1, 0x6157
    ctx->pc = 0x2c6620u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24919);
label_2c6624:
    // 0x2c6624: 0x6e695020  ldr         $t1, 0x5020($s3)
    ctx->pc = 0x2c6624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c6628:
    // 0x2c6628: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6628u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c662c:
    // 0x2c662c: 0x0  nop
    ctx->pc = 0x2c662cu;
    // NOP
label_2c6630:
    // 0x2c6630: 0x676e6f59  daddiu      $t6, $k1, 0x6F59
    ctx->pc = 0x2c6630u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28505);
label_2c6634:
    // 0x2c6634: 0x69614b20  ldl         $at, 0x4B20($t3)
    ctx->pc = 0x2c6634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 19232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c6638:
    // 0x2c6638: 0x0  nop
    ctx->pc = 0x2c6638u;
    // NOP
label_2c663c:
    // 0x2c663c: 0x0  nop
    ctx->pc = 0x2c663cu;
    // NOP
label_2c6640:
    // 0x2c6640: 0x206f6147  addi        $t7, $v1, 0x6147
    ctx->pc = 0x2c6640u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24903, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6644:
    // 0x2c6644: 0x676e6944  daddiu      $t6, $k1, 0x6944
    ctx->pc = 0x2c6644u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26948);
label_2c6648:
    // 0x2c6648: 0x0  nop
    ctx->pc = 0x2c6648u;
    // NOP
label_2c664c:
    // 0x2c664c: 0x0  nop
    ctx->pc = 0x2c664cu;
    // NOP
label_2c6650:
    // 0x2c6650: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c6650u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6654:
    // 0x2c6654: 0x6f6142  .word       0x006F6142                   # srl         $t4, $t7, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6654u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 5));
label_2c6658:
    // 0x2c6658: 0x54207557  bnel        $at, $zero, . + 4 + (0x7557 << 2)
label_2c665c:
    if (ctx->pc == 0x2C665Cu) {
        ctx->pc = 0x2C665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6658u;
        // 0x2c665c: 0x756775  .word       0x00756775                   # INVALID     $v1, $s5, 0x6775 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C665C raw=0x00756775");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6660u;
        goto label_2c6660;
    }
    ctx->pc = 0x2C6658u;
    {
        const bool branch_taken_0x2c6658 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6658) {
            ctx->pc = 0x2C665Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6658u;
            // 0x2c665c: 0x756775  .word       0x00756775                   # INVALID     $v1, $s5, 0x6775 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C665C raw=0x00756775");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3BB8u;
            return;
        }
    }
    ctx->pc = 0x2C6660u;
label_2c6660:
    // 0x2c6660: 0x676e654d  daddiu      $t6, $k1, 0x654D
    ctx->pc = 0x2c6660u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25933);
label_2c6664:
    // 0x2c6664: 0x756f5920  .word       0x756F5920                   # INVALID     $t3, $t7, 0x5920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6664u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6664 raw=0x756F5920");
 /* MITIGATED */
label_2c6668:
    // 0x2c6668: 0x0  nop
    ctx->pc = 0x2c6668u;
    // NOP
label_2c666c:
    // 0x2c666c: 0x0  nop
    ctx->pc = 0x2c666cu;
    // NOP
label_2c6670:
    // 0x2c6670: 0x676e6f44  daddiu      $t6, $k1, 0x6F44
    ctx->pc = 0x2c6670u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28484);
label_2c6674:
    // 0x2c6674: 0x20755420  addi        $s5, $v1, 0x5420
    ctx->pc = 0x2c6674u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)21536, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6678:
    // 0x2c6678: 0x654e  .word       0x0000654E                   # INVALID     $zero, $zero, 0x654E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6678u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2C6678 raw=0x0000654E");
 /* MITIGATED */
label_2c667c:
    // 0x2c667c: 0x0  nop
    ctx->pc = 0x2c667cu;
    // NOP
label_2c6680:
    // 0x2c6680: 0x69756841  ldl         $s5, 0x6841($t3)
    ctx->pc = 0x2c6680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26689); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
label_2c6684:
    // 0x2c6684: 0x6e614e20  ldr         $at, 0x4E20($s3)
    ctx->pc = 0x2c6684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20000); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6688:
    // 0x2c6688: 0x0  nop
    ctx->pc = 0x2c6688u;
    // NOP
label_2c668c:
    // 0x2c668c: 0x0  nop
    ctx->pc = 0x2c668cu;
    // NOP
label_2c6690:
    // 0x2c6690: 0x676e694b  daddiu      $t6, $k1, 0x694B
    ctx->pc = 0x2c6690u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26955);
label_2c6694:
    // 0x2c6694: 0x6f754420  ldr         $s5, 0x4420($k1)
    ctx->pc = 0x2c6694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c6698:
    // 0x2c6698: 0x6973  tltu        $zero, $zero, 421
    ctx->pc = 0x2c6698u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c669c:
    // 0x2c669c: 0x0  nop
    ctx->pc = 0x2c669cu;
    // NOP
label_2c66a0:
    // 0x2c66a0: 0x6c696144  ldr         $t1, 0x6144($v1)
    ctx->pc = 0x2c66a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c66a4:
    // 0x2c66a4: 0x44206961  .word       0x44206961                   # dmfc1       $zero, $f13 # 00000161 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c66a4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x21 at 0x2C66A4 raw=0x44206961");
 /* MITIGATED */
label_2c66a8:
    // 0x2c66a8: 0x7a676e6f  lq          $a3, 0x6E6F($s3)
    ctx->pc = 0x2c66a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 28271)));
label_2c66ac:
    // 0x2c66ac: 0x7568  .word       0x00007568                   # mfsa        $t6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c66acu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c66b0:
    // 0x2c66b0: 0x676e694b  daddiu      $t6, $k1, 0x694B
    ctx->pc = 0x2c66b0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26955);
label_2c66b4:
    // 0x2c66b4: 0x6c754d20  ldr         $s5, 0x4D20($v1)
    ctx->pc = 0x2c66b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c66b8:
    // 0x2c66b8: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c66b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C66B8 raw=0x00000075");
 /* MITIGATED */
label_2c66bc:
    // 0x2c66bc: 0x0  nop
    ctx->pc = 0x2c66bcu;
    // NOP
label_2c66c0:
    // 0x2c66c0: 0x676e654d  daddiu      $t6, $k1, 0x654D
    ctx->pc = 0x2c66c0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25933);
label_2c66c4:
    // 0x2c66c4: 0x65694a20  daddiu      $t1, $t3, 0x4A20
    ctx->pc = 0x2c66c4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)18976);
label_2c66c8:
    // 0x2c66c8: 0x0  nop
    ctx->pc = 0x2c66c8u;
    // NOP
label_2c66cc:
    // 0x2c66cc: 0x0  nop
    ctx->pc = 0x2c66ccu;
    // NOP
label_2c66d0:
    // 0x2c66d0: 0x6775685a  daddiu      $s5, $k1, 0x685A
    ctx->pc = 0x2c66d0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26714);
label_2c66d4:
    // 0x2c66d4: 0x694a2065  ldl         $t2, 0x2065($t2)
    ctx->pc = 0x2c66d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2c66d8:
    // 0x2c66d8: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c66d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c66dc:
    // 0x2c66dc: 0x0  nop
    ctx->pc = 0x2c66dcu;
    // NOP
label_2c66e0:
    // 0x2c66e0: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c66e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c66e4:
    // 0x2c66e4: 0x6f616853  ldr         $at, 0x6853($k1)
    ctx->pc = 0x2c66e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c66e8:
    // 0x2c66e8: 0x0  nop
    ctx->pc = 0x2c66e8u;
    // NOP
label_2c66ec:
    // 0x2c66ec: 0x0  nop
    ctx->pc = 0x2c66ecu;
    // NOP
label_2c66f0:
    // 0x2c66f0: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c66f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c66f4:
    // 0x2c66f4: 0x6f616942  ldr         $at, 0x6942($k1)
    ctx->pc = 0x2c66f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c66f8:
    // 0x2c66f8: 0x0  nop
    ctx->pc = 0x2c66f8u;
    // NOP
label_2c66fc:
    // 0x2c66fc: 0x0  nop
    ctx->pc = 0x2c66fcu;
    // NOP
label_2c6700:
    // 0x2c6700: 0x676e654d  daddiu      $t6, $k1, 0x654D
    ctx->pc = 0x2c6700u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25933);
label_2c6704:
    // 0x2c6704: 0x614420  .word       0x00614420                   # add         $t0, $v1, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6704u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2c6708:
    // 0x2c6708: 0x5a206146  blezl       $s1, . + 4 + (0x6146 << 2)
label_2c670c:
    if (ctx->pc == 0x2C670Cu) {
        ctx->pc = 0x2C670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6708u;
        // 0x2c670c: 0x676e6568  daddiu      $t6, $k1, 0x6568 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6710u;
        goto label_2c6710;
    }
    ctx->pc = 0x2C6708u;
    {
        const bool branch_taken_0x2c6708 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c6708) {
            ctx->pc = 0x2C670Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6708u;
            // 0x2c670c: 0x676e6568  daddiu      $t6, $k1, 0x6568 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25960);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC24u;
            return;
        }
    }
    ctx->pc = 0x2C6710u;
label_2c6710:
    // 0x2c6710: 0x0  nop
    ctx->pc = 0x2c6710u;
    // NOP
label_2c6714:
    // 0x2c6714: 0x0  nop
    ctx->pc = 0x2c6714u;
    // NOP
label_2c6718:
    // 0x2c6718: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c6718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c671c:
    // 0x2c671c: 0x69685320  ldl         $t0, 0x5320($t3)
    ctx->pc = 0x2c671cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2c6720:
    // 0x2c6720: 0x0  nop
    ctx->pc = 0x2c6720u;
    // NOP
label_2c6724:
    // 0x2c6724: 0x0  nop
    ctx->pc = 0x2c6724u;
    // NOP
label_2c6728:
    // 0x2c6728: 0x676e6159  daddiu      $t6, $k1, 0x6159
    ctx->pc = 0x2c6728u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24921);
label_2c672c:
    // 0x2c672c: 0x75695820  .word       0x75695820                   # INVALID     $t3, $t1, 0x5820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c672cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C672C raw=0x75695820");
 /* MITIGATED */
label_2c6730:
    // 0x2c6730: 0x0  nop
    ctx->pc = 0x2c6730u;
    // NOP
label_2c6734:
    // 0x2c6734: 0x0  nop
    ctx->pc = 0x2c6734u;
    // NOP
label_2c6738:
    // 0x2c6738: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2c6738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c673c:
    // 0x2c673c: 0x5320756f  beql        $t9, $zero, . + 4 + (0x756F << 2)
label_2c6740:
    if (ctx->pc == 0x2C6740u) {
        ctx->pc = 0x2C6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C673Cu;
        // 0x2c6740: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6744u;
        goto label_2c6744;
    }
    ctx->pc = 0x2C673Cu;
    {
        const bool branch_taken_0x2c673c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c673c) {
            ctx->pc = 0x2C6740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C673Cu;
            // 0x2c6740: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3CFCu;
            return;
        }
    }
    ctx->pc = 0x2C6744u;
label_2c6744:
    // 0x2c6744: 0x0  nop
    ctx->pc = 0x2c6744u;
    // NOP
label_2c6748:
    // 0x2c6748: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2c6748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c674c:
    // 0x2c674c: 0x4420756f  .word       0x4420756F                   # dmfc1       $zero, $f14 # 0000056F <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c674cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2F at 0x2C674C raw=0x4420756F");
 /* MITIGATED */
label_2c6750:
    // 0x2c6750: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6750u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6754:
    // 0x2c6754: 0x0  nop
    ctx->pc = 0x2c6754u;
    // NOP
label_2c6758:
    // 0x2c6758: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c6758u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c675c:
    // 0x2c675c: 0x6f6148  .word       0x006F6148                   # jr          $v1 # 000F6140 <InstrIdType: CPU_SPECIAL>
label_2c6760:
    if (ctx->pc == 0x2C6760u) {
        ctx->pc = 0x2C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C675Cu;
        // 0x2c6760: 0x58207544  blezl       $at, . + 4 + (0x7544 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C6760 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6764u;
        goto label_2c6764;
    }
    ctx->pc = 0x2C675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x2C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C675Cu;
        // 0x2c6760: 0x58207544  blezl       $at, . + 4 + (0x7544 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C6760 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C675Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C6764u;
label_2c6764:
    // 0x2c6764: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6764u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c6768:
    // 0x2c6768: 0x206e6557  addi        $t6, $v1, 0x6557
    ctx->pc = 0x2c6768u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c676c:
    // 0x2c676c: 0x6e6950  .word       0x006E6950                   # mfhi        $t5 # 006E0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c676cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c6770:
    // 0x2c6770: 0x20696143  addi        $t1, $v1, 0x6143
    ctx->pc = 0x2c6770u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c6774:
    // 0x2c6774: 0x6f614d  break       111, 389
    ctx->pc = 0x2c6774u;
    runtime->handleBreak(rdram, ctx);
label_2c6778:
    // 0x2c6778: 0x206e7558  addi        $t6, $v1, 0x7558
    ctx->pc = 0x2c6778u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30040, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c677c:
    // 0x2c677c: 0x7559  .word       0x00007559                   # multu       $zero, $zero # 00007540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c677cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c6780:
    // 0x2c6780: 0x5320754c  beql        $t9, $zero, . + 4 + (0x754C << 2)
label_2c6784:
    if (ctx->pc == 0x2C6784u) {
        ctx->pc = 0x2C6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6780u;
        // 0x2c6784: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C6784 raw=0x00000075");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6788u;
        goto label_2c6788;
    }
    ctx->pc = 0x2C6780u;
    {
        const bool branch_taken_0x2c6780 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6780) {
            ctx->pc = 0x2C6784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6780u;
            // 0x2c6784: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C6784 raw=0x00000075");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3CB4u;
            return;
        }
    }
    ctx->pc = 0x2C6788u;
label_2c6788:
    // 0x2c6788: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6788u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c678c:
    // 0x2c678c: 0x676e6f59  daddiu      $t6, $k1, 0x6F59
    ctx->pc = 0x2c678cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28505);
label_2c6790:
    // 0x2c6790: 0x0  nop
    ctx->pc = 0x2c6790u;
    // NOP
label_2c6794:
    // 0x2c6794: 0x0  nop
    ctx->pc = 0x2c6794u;
    // NOP
label_2c6798:
    // 0x2c6798: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c679c:
    // 0x2c679c: 0x69592067  ldl         $t9, 0x2067($t2)
    ctx->pc = 0x2c679cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
label_2c67a0:
    // 0x2c67a0: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c67a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c67a4:
    // 0x2c67a4: 0x0  nop
    ctx->pc = 0x2c67a4u;
    // NOP
label_2c67a8:
    // 0x2c67a8: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c67a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c67ac:
    // 0x2c67ac: 0x6e654820  ldr         $a1, 0x4820($s3)
    ctx->pc = 0x2c67acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c67b0:
    // 0x2c67b0: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c67b0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c67b4:
    // 0x2c67b4: 0x0  nop
    ctx->pc = 0x2c67b4u;
    // NOP
label_2c67b8:
    // 0x2c67b8: 0x4d207559  .word       0x4D207559                   # INVALID     $t1, $zero, 0x7559 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c67b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C67B8 raw=0x4D207559");
 /* MITIGATED */
label_2c67bc:
    // 0x2c67bc: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c67bcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c67c0:
    // 0x2c67c0: 0x206e6146  addi        $t6, $v1, 0x6146
    ctx->pc = 0x2c67c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24902, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c67c4:
    // 0x2c67c4: 0x676e654e  daddiu      $t6, $k1, 0x654E
    ctx->pc = 0x2c67c4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25934);
label_2c67c8:
    // 0x2c67c8: 0x0  nop
    ctx->pc = 0x2c67c8u;
    // NOP
label_2c67cc:
    // 0x2c67cc: 0x0  nop
    ctx->pc = 0x2c67ccu;
    // NOP
label_2c67d0:
    // 0x2c67d0: 0x206e6159  addi        $t6, $v1, 0x6159
    ctx->pc = 0x2c67d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24921, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c67d4:
    // 0x2c67d4: 0x20696142  addi        $t1, $v1, 0x6142
    ctx->pc = 0x2c67d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24898, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c67d8:
    // 0x2c67d8: 0x7548  .word       0x00007548                   # jr          $zero # 00007540 <InstrIdType: CPU_SPECIAL>
label_2c67dc:
    if (ctx->pc == 0x2C67DCu) {
        ctx->pc = 0x2C67E0u;
        goto label_2c67e0;
    }
    ctx->pc = 0x2C67D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C67D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C67E0u;
label_2c67e0:
    // 0x2c67e0: 0x206e6159  addi        $t6, $v1, 0x6159
    ctx->pc = 0x2c67e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24921, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c67e4:
    // 0x2c67e4: 0x7559  .word       0x00007559                   # multu       $zero, $zero # 00007540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c67e4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c67e8:
    // 0x2c67e8: 0x676e6157  daddiu      $t6, $k1, 0x6157
    ctx->pc = 0x2c67e8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24919);
label_2c67ec:
    // 0x2c67ec: 0x6e614c20  ldr         $at, 0x4C20($s3)
    ctx->pc = 0x2c67ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c67f0:
    // 0x2c67f0: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c67f0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c67f4:
    // 0x2c67f4: 0x0  nop
    ctx->pc = 0x2c67f4u;
    // NOP
label_2c67f8:
    // 0x2c67f8: 0x756f685a  .word       0x756F685A                   # INVALID     $t3, $t7, 0x685A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c67f8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C67F8 raw=0x756F685A");
 /* MITIGATED */
label_2c67fc:
    // 0x2c67fc: 0x6e695820  ldr         $t1, 0x5820($s3)
    ctx->pc = 0x2c67fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c6800:
    // 0x2c6800: 0x0  nop
    ctx->pc = 0x2c6800u;
    // NOP
label_2c6804:
    // 0x2c6804: 0x0  nop
    ctx->pc = 0x2c6804u;
    // NOP
label_2c6808:
    // 0x2c6808: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c6808u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c680c:
    // 0x2c680c: 0x69685a  .word       0x0069685A                   # div         $t5, $v1, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c680cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c6810:
    // 0x2c6810: 0x6e617551  ldr         $at, 0x7551($s3)
    ctx->pc = 0x2c6810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30033); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6814:
    // 0x2c6814: 0x6e6f5a20  ldr         $t7, 0x5A20($s3)
    ctx->pc = 0x2c6814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23072); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6818:
    // 0x2c6818: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6818u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c681c:
    // 0x2c681c: 0x0  nop
    ctx->pc = 0x2c681cu;
    // NOP
label_2c6820:
    // 0x2c6820: 0x2061694a  addi        $at, $v1, 0x694A
    ctx->pc = 0x2c6820u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26954, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2c6824:
    // 0x2c6824: 0x69754b  .word       0x0069754B                   # movn        $t6, $v1, $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6824u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 3));
label_2c6828:
    // 0x2c6828: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6828u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c682c:
    // 0x2c682c: 0x756958  .word       0x00756958                   # mult        $t5, $v1, $s5 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c682cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c6830:
    // 0x2c6830: 0x206e614d  addi        $t6, $v1, 0x614D
    ctx->pc = 0x2c6830u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24909, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6834:
    // 0x2c6834: 0x6e6f6843  ldr         $t7, 0x6843($s3)
    ctx->pc = 0x2c6834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6838:
    // 0x2c6838: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6838u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c683c:
    // 0x2c683c: 0x0  nop
    ctx->pc = 0x2c683cu;
    // NOP
label_2c6840:
    // 0x2c6840: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6844:
    // 0x2c6844: 0x75502067  .word       0x75502067                   # INVALID     $t2, $s0, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6844u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6844 raw=0x75502067");
 /* MITIGATED */
label_2c6848:
    // 0x2c6848: 0x0  nop
    ctx->pc = 0x2c6848u;
    // NOP
label_2c684c:
    // 0x2c684c: 0x0  nop
    ctx->pc = 0x2c684cu;
    // NOP
label_2c6850:
    // 0x2c6850: 0x5a207548  blezl       $s1, . + 4 + (0x7548 << 2)
label_2c6854:
    if (ctx->pc == 0x2C6854u) {
        ctx->pc = 0x2C6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6850u;
        // 0x2c6854: 0x6968  .word       0x00006968                   # mfsa        $t5 # 00000140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 13, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6858u;
        goto label_2c6858;
    }
    ctx->pc = 0x2C6850u;
    {
        const bool branch_taken_0x2c6850 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c6850) {
            ctx->pc = 0x2C6854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6850u;
            // 0x2c6854: 0x6968  .word       0x00006968                   # mfsa        $t5 # 00000140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            SET_GPR_U32(ctx, 13, ctx->sa);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3D74u;
            return;
        }
    }
    ctx->pc = 0x2C6858u;
label_2c6858:
    // 0x2c6858: 0x756f685a  .word       0x756F685A                   # INVALID     $t3, $t7, 0x685A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6858u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6858 raw=0x756F685A");
 /* MITIGATED */
label_2c685c:
    // 0x2c685c: 0x6e614620  ldr         $at, 0x4620($s3)
    ctx->pc = 0x2c685cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6860:
    // 0x2c6860: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6860u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c6864:
    // 0x2c6864: 0x0  nop
    ctx->pc = 0x2c6864u;
    // NOP
label_2c6868:
    // 0x2c6868: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6868u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c686c:
    // 0x2c686c: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c686cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6870:
    // 0x2c6870: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6870u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c6874:
    // 0x2c6874: 0x0  nop
    ctx->pc = 0x2c6874u;
    // NOP
label_2c6878:
    // 0x2c6878: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6878u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c687c:
    // 0x2c687c: 0x6e6148  .word       0x006E6148                   # jr          $v1 # 000E6140 <InstrIdType: CPU_SPECIAL>
label_2c6880:
    if (ctx->pc == 0x2C6880u) {
        ctx->pc = 0x2C6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C687Cu;
        // 0x2c6880: 0x676e654c  daddiu      $t6, $k1, 0x654C (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25932);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6884u;
        goto label_2c6884;
    }
    ctx->pc = 0x2C687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x2C6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C687Cu;
        // 0x2c6880: 0x676e654c  daddiu      $t6, $k1, 0x654C (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25932);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C687Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C6884u;
label_2c6884:
    // 0x2c6884: 0x6f614220  ldr         $at, 0x4220($k1)
    ctx->pc = 0x2c6884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 16928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6888:
    // 0x2c6888: 0x0  nop
    ctx->pc = 0x2c6888u;
    // NOP
label_2c688c:
    // 0x2c688c: 0x0  nop
    ctx->pc = 0x2c688cu;
    // NOP
label_2c6890:
    // 0x2c6890: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6894:
    // 0x2c6894: 0x65522067  daddiu      $s2, $t2, 0x2067
    ctx->pc = 0x2c6894u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8295);
label_2c6898:
    // 0x2c6898: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6898u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c689c:
    // 0x2c689c: 0x0  nop
    ctx->pc = 0x2c689cu;
    // NOP
label_2c68a0:
    // 0x2c68a0: 0x676e6544  daddiu      $t6, $k1, 0x6544
    ctx->pc = 0x2c68a0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25924);
label_2c68a4:
    // 0x2c68a4: 0x61695820  daddi       $t1, $t3, 0x5820
    ctx->pc = 0x2c68a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)22560; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2c68a8:
    // 0x2c68a8: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c68a8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c68ac:
    // 0x2c68ac: 0x0  nop
    ctx->pc = 0x2c68acu;
    // NOP
label_2c68b0:
    // 0x2c68b0: 0x5920694c  blezl       $t1, . + 4 + (0x694C << 2)
label_2c68b4:
    if (ctx->pc == 0x2C68B4u) {
        ctx->pc = 0x2C68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68B0u;
        // 0x2c68b4: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C68B8u;
        goto label_2c68b8;
    }
    ctx->pc = 0x2C68B0u;
    {
        const bool branch_taken_0x2c68b0 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2c68b0) {
            ctx->pc = 0x2C68B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C68B0u;
            // 0x2c68b4: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DE4u;
            return;
        }
    }
    ctx->pc = 0x2C68B8u;
label_2c68b8:
    // 0x2c68b8: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c68b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c68bc:
    // 0x2c68bc: 0x6e7558  .word       0x006E7558                   # mult        $t6, $v1, $t6 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c68bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c68c0:
    // 0x2c68c0: 0x206f6147  addi        $t7, $v1, 0x6147
    ctx->pc = 0x2c68c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24903, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c68c4:
    // 0x2c68c4: 0x6e616958  ldr         $at, 0x6958($s3)
    ctx->pc = 0x2c68c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c68c8:
    // 0x2c68c8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c68c8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c68cc:
    // 0x2c68cc: 0x0  nop
    ctx->pc = 0x2c68ccu;
    // NOP
label_2c68d0:
    // 0x2c68d0: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c68d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c68d4:
    // 0x2c68d4: 0x6e65685a  ldr         $a1, 0x685A($s3)
    ctx->pc = 0x2c68d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c68d8:
    // 0x2c68d8: 0x0  nop
    ctx->pc = 0x2c68d8u;
    // NOP
label_2c68dc:
    // 0x2c68dc: 0x0  nop
    ctx->pc = 0x2c68dcu;
    // NOP
label_2c68e0:
    // 0x2c68e0: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c68e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c68e4:
    // 0x2c68e4: 0x694c  syscall     421
    ctx->pc = 0x2c68e4u;
    ctx->pc = 0x2C68E8u;
runtime->handleSyscall(rdram, ctx, 0x1A5u);
label_2c68e8:
    // 0x2c68e8: 0x206e6958  addi        $t6, $v1, 0x6958
    ctx->pc = 0x2c68e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26968, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c68ec:
    // 0x2c68ec: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c68ecu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c68f0:
    // 0x2c68f0: 0x616d6953  daddi       $t5, $t3, 0x6953
    ctx->pc = 0x2c68f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26963; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c68f4:
    // 0x2c68f4: 0x61685a20  daddi       $t0, $t3, 0x5A20
    ctx->pc = 0x2c68f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23072; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c68f8:
    // 0x2c68f8: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c68f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c68fc:
    // 0x2c68fc: 0x0  nop
    ctx->pc = 0x2c68fcu;
    // NOP
label_2c6900:
    // 0x2c6900: 0x5920614d  blezl       $t1, . + 4 + (0x614D << 2)
label_2c6904:
    if (ctx->pc == 0x2C6904u) {
        ctx->pc = 0x2C6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6900u;
        // 0x2c6904: 0x206e6175  addi        $t6, $v1, 0x6175 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24949, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6908u;
        goto label_2c6908;
    }
    ctx->pc = 0x2C6900u;
    {
        const bool branch_taken_0x2c6900 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2c6900) {
            ctx->pc = 0x2C6904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6900u;
            // 0x2c6904: 0x206e6175  addi        $t6, $v1, 0x6175 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24949, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEE38u;
            return;
        }
    }
    ctx->pc = 0x2C6908u;
label_2c6908:
    // 0x2c6908: 0x6959  .word       0x00006959                   # multu       $zero, $zero # 00006940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6908u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c690c:
    // 0x2c690c: 0x0  nop
    ctx->pc = 0x2c690cu;
    // NOP
label_2c6910:
    // 0x2c6910: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c6910u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6914:
    // 0x2c6914: 0x6e6f685a  ldr         $t7, 0x685A($s3)
    ctx->pc = 0x2c6914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6918:
    // 0x2c6918: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6918u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c691c:
    // 0x2c691c: 0x0  nop
    ctx->pc = 0x2c691cu;
    // NOP
label_2c6920:
    // 0x2c6920: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c6920u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6924:
    // 0x2c6924: 0x6e6f685a  ldr         $t7, 0x685A($s3)
    ctx->pc = 0x2c6924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6928:
    // 0x2c6928: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6928u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c692c:
    // 0x2c692c: 0x0  nop
    ctx->pc = 0x2c692cu;
    // NOP
label_2c6930:
    // 0x2c6930: 0x6f61685a  ldr         $at, 0x685A($k1)
    ctx->pc = 0x2c6930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6934:
    // 0x2c6934: 0x6e6f4820  ldr         $t7, 0x4820($s3)
    ctx->pc = 0x2c6934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6938:
    // 0x2c6938: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6938u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c693c:
    // 0x2c693c: 0x0  nop
    ctx->pc = 0x2c693cu;
    // NOP
label_2c6940:
    // 0x2c6940: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c6940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6944:
    // 0x2c6944: 0x65685a20  daddiu      $t0, $t3, 0x5A20
    ctx->pc = 0x2c6944u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)23072);
label_2c6948:
    // 0x2c6948: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6948u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c694c:
    // 0x2c694c: 0x0  nop
    ctx->pc = 0x2c694cu;
    // NOP
label_2c6950:
    // 0x2c6950: 0x6e61694a  ldr         $at, 0x694A($s3)
    ctx->pc = 0x2c6950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6954:
    // 0x2c6954: 0x6e6f5920  ldr         $t7, 0x5920($s3)
    ctx->pc = 0x2c6954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6958:
    // 0x2c6958: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6958u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c695c:
    // 0x2c695c: 0x0  nop
    ctx->pc = 0x2c695cu;
    // NOP
label_2c6960:
    // 0x2c6960: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c6960u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6964:
    // 0x2c6964: 0x676e694c  daddiu      $t6, $k1, 0x694C
    ctx->pc = 0x2c6964u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26956);
label_2c6968:
    // 0x2c6968: 0x0  nop
    ctx->pc = 0x2c6968u;
    // NOP
label_2c696c:
    // 0x2c696c: 0x0  nop
    ctx->pc = 0x2c696cu;
    // NOP
label_2c6970:
    // 0x2c6970: 0x6961754b  ldl         $at, 0x754B($t3)
    ctx->pc = 0x2c6970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30027); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c6974:
    // 0x2c6974: 0x61694c20  daddi       $t1, $t3, 0x4C20
    ctx->pc = 0x2c6974u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19488; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2c6978:
    // 0x2c6978: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6978u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c697c:
    // 0x2c697c: 0x0  nop
    ctx->pc = 0x2c697cu;
    // NOP
label_2c6980:
    // 0x2c6980: 0x4720754c  .word       0x4720754C                   # INVALID     $t9, $zero, 0x754C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6980u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0xC at 0x2C6980 raw=0x4720754C");
 /* MITIGATED */
label_2c6984:
    // 0x2c6984: 0x676e6f  .word       0x00676E6F                   # dsubu       $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6984u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
label_2c6988:
    // 0x2c6988: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c6988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c698c:
    // 0x2c698c: 0x755a2067  .word       0x755A2067                   # INVALID     $t2, $k0, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c698cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C698C raw=0x755A2067");
 /* MITIGATED */
label_2c6990:
    // 0x2c6990: 0x0  nop
    ctx->pc = 0x2c6990u;
    // NOP
label_2c6994:
    // 0x2c6994: 0x0  nop
    ctx->pc = 0x2c6994u;
    // NOP
label_2c6998:
    // 0x2c6998: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c699c:
    // 0x2c699c: 0x75482067  .word       0x75482067                   # INVALID     $t2, $t0, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c699cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C699C raw=0x75482067");
 /* MITIGATED */
label_2c69a0:
    // 0x2c69a0: 0x0  nop
    ctx->pc = 0x2c69a0u;
    // NOP
label_2c69a4:
    // 0x2c69a4: 0x0  nop
    ctx->pc = 0x2c69a4u;
    // NOP
label_2c69a8:
    // 0x2c69a8: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c69a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c69ac:
    // 0x2c69ac: 0x65685320  daddiu      $t0, $t3, 0x5320
    ctx->pc = 0x2c69acu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21280);
label_2c69b0:
    // 0x2c69b0: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c69b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c69b4:
    // 0x2c69b4: 0x0  nop
    ctx->pc = 0x2c69b4u;
    // NOP
label_2c69b8:
    // 0x2c69b8: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c69b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c69bc:
    // 0x2c69bc: 0x69582067  ldl         $t8, 0x2067($t2)
    ctx->pc = 0x2c69bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2c69c0:
    // 0x2c69c0: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c69c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C69C0 raw=0x00000075");
 /* MITIGATED */
label_2c69c4:
    // 0x2c69c4: 0x0  nop
    ctx->pc = 0x2c69c4u;
    // NOP
label_2c69c8:
    // 0x2c69c8: 0x43207548  .word       0x43207548                   # INVALID     $t9, $zero, 0x7548 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c69c8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C69C8 raw=0x43207548");
 /* MITIGATED */
label_2c69cc:
    // 0x2c69cc: 0x45206568  .word       0x45206568                   # INVALID     $t1, $zero, 0x6568 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c69ccu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x28 at 0x2C69CC raw=0x45206568");
 /* MITIGATED */
label_2c69d0:
    // 0x2c69d0: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c69d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c69d4:
    // 0x2c69d4: 0x0  nop
    ctx->pc = 0x2c69d4u;
    // NOP
label_2c69d8:
    // 0x2c69d8: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c69d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c69dc:
    // 0x2c69dc: 0x676e41  .word       0x00676E41                   # INVALID     $v1, $a3, 0x6E41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c69dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C69DC raw=0x00676E41");
 /* MITIGATED */
label_2c69e0:
    // 0x2c69e0: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c69e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c69e4:
    // 0x2c69e4: 0x4d206e41  .word       0x4D206E41                   # INVALID     $t1, $zero, 0x6E41 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c69e4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C69E4 raw=0x4D206E41");
 /* MITIGATED */
label_2c69e8:
    // 0x2c69e8: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c69e8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c69ec:
    // 0x2c69ec: 0x0  nop
    ctx->pc = 0x2c69ecu;
    // NOP
label_2c69f0:
    // 0x2c69f0: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c69f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c69f4:
    // 0x2c69f4: 0x75685320  .word       0x75685320                   # INVALID     $t3, $t0, 0x5320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c69f4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C69F4 raw=0x75685320");
 /* MITIGATED */
label_2c69f8:
    // 0x2c69f8: 0x0  nop
    ctx->pc = 0x2c69f8u;
    // NOP
label_2c69fc:
    // 0x2c69fc: 0x0  nop
    ctx->pc = 0x2c69fcu;
    // NOP
label_2c6a00:
    // 0x2c6a00: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6a00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6a04:
    // 0x2c6a04: 0x697552  .word       0x00697552                   # mflo        $t6 # 00690540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6a04u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_2c6a08:
    // 0x2c6a08: 0x6d6d6f43  ldr         $t5, 0x6F43($t3)
    ctx->pc = 0x2c6a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c6a0c:
    // 0x2c6a0c: 0x65646e61  daddiu      $a0, $t3, 0x6E61
    ctx->pc = 0x2c6a0cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_2c6a10:
    // 0x2c6a10: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c6a10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6a14:
    // 0x2c6a14: 0x0  nop
    ctx->pc = 0x2c6a14u;
    // NOP
label_2c6a18:
    // 0x2c6a18: 0x61746143  daddi       $s4, $t3, 0x6143
    ctx->pc = 0x2c6a18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24899; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c6a1c:
    // 0x2c6a1c: 0x746c7570  .word       0x746C7570                   # INVALID     $v1, $t4, 0x7570 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6a1cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6A1C raw=0x746C7570");
 /* MITIGATED */
label_2c6a20:
    // 0x2c6a20: 0x69684320  ldl         $t0, 0x4320($t3)
    ctx->pc = 0x2c6a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2c6a24:
    // 0x2c6a24: 0x6665  .word       0x00006665                   # move        $t4, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6a24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6a28:
    // 0x2c6a28: 0x0  nop
    ctx->pc = 0x2c6a28u;
    // NOP
label_2c6a2c:
    // 0x2c6a2c: 0x0  nop
    ctx->pc = 0x2c6a2cu;
    // NOP
label_2c6a30:
    // 0x2c6a30: 0x61737341  daddi       $s3, $t3, 0x7341
    ctx->pc = 0x2c6a30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29505; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c6a34:
    // 0x2c6a34: 0x20746c75  addi        $s4, $v1, 0x6C75
    ctx->pc = 0x2c6a34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c6a38:
    // 0x2c6a38: 0x74706143  .word       0x74706143                   # INVALID     $v1, $s0, 0x6143 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6a38u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6A38 raw=0x74706143");
 /* MITIGATED */
label_2c6a3c:
    // 0x2c6a3c: 0x6e6961  .word       0x006E6961                   # addu        $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_2c6a40:
    // 0x2c6a40: 0x65746147  daddiu      $s4, $t3, 0x6147
    ctx->pc = 0x2c6a40u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24903);
label_2c6a44:
    // 0x2c6a44: 0x70614320  .word       0x70614320                   # madd1       $t0, $v1, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6a44u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2c6a48:
    // 0x2c6a48: 0x6e696174  ldr         $t1, 0x6174($s3)
    ctx->pc = 0x2c6a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c6a4c:
    // 0x2c6a4c: 0x0  nop
    ctx->pc = 0x2c6a4cu;
    // NOP
label_2c6a50:
    // 0x2c6a50: 0x70707553  .word       0x70707553                   # mtlo1       $v1 # 00107540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6a50u;
    ctx->lo1 = GPR_U64(ctx, 3);
label_2c6a54:
    // 0x2c6a54: 0x4320796c  .word       0x4320796C                   # INVALID     $t9, $zero, 0x796C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c6a54u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C6A54 raw=0x4320796C");
 /* MITIGATED */
label_2c6a58:
    // 0x2c6a58: 0x61747061  daddi       $s4, $t3, 0x7061
    ctx->pc = 0x2c6a58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28769; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c6a5c:
    // 0x2c6a5c: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6a5cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c6a60:
    // 0x2c6a60: 0x79646f42  lq          $a0, 0x6F42($t3)
    ctx->pc = 0x2c6a60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 28482)));
label_2c6a64:
    // 0x2c6a64: 0x72617567  .word       0x72617567                   # INVALID     $s3, $at, 0x7567 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6a64u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C6A64 raw=0x72617567");
 /* MITIGATED */
label_2c6a68:
    // 0x2c6a68: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6a68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c6a6c:
    // 0x2c6a6c: 0x0  nop
    ctx->pc = 0x2c6a6cu;
    // NOP
label_2c6a70:
    // 0x2c6a70: 0x202e744c  addi        $t6, $at, 0x744C
    ctx->pc = 0x2c6a70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29772, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6a74:
    // 0x2c6a74: 0x6d6d6f43  ldr         $t5, 0x6F43($t3)
    ctx->pc = 0x2c6a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c6a78:
    // 0x2c6a78: 0x65646e61  daddiu      $a0, $t3, 0x6E61
    ctx->pc = 0x2c6a78u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_2c6a7c:
    // 0x2c6a7c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c6a7cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6a80:
    // 0x2c6a80: 0x74706143  .word       0x74706143                   # INVALID     $v1, $s0, 0x6143 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6a80u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6A80 raw=0x74706143");
 /* MITIGATED */
label_2c6a84:
    // 0x2c6a84: 0x6e6961  .word       0x006E6961                   # addu        $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6a84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_2c6a88:
    // 0x2c6a88: 0x72726143  .word       0x72726143                   # INVALID     $s3, $s2, 0x6143 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6a88u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 18); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c6a8c:
    // 0x2c6a8c: 0x65676169  daddiu      $a3, $t3, 0x6169
    ctx->pc = 0x2c6a8cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24937);
label_2c6a90:
    // 0x2c6a90: 0x0  nop
    ctx->pc = 0x2c6a90u;
    // NOP
label_2c6a94:
    // 0x2c6a94: 0x0  nop
    ctx->pc = 0x2c6a94u;
    // NOP
label_2c6a98:
    // 0x2c6a98: 0x73616550  .word       0x73616550                   # mfhi1       $t4 # 03610540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6a98u;
    SET_GPR_U64(ctx, 12, ctx->hi1);
label_2c6a9c:
    // 0x2c6a9c: 0x746e61  .word       0x00746E61                   # addu        $t5, $v1, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6a9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2c6aa0:
    // 0x2c6aa0: 0x646e6142  daddiu      $t6, $v1, 0x6142
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24898);
label_2c6aa4:
    // 0x2c6aa4: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6aa4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c6aa8:
    // 0x2c6aa8: 0x75676f52  .word       0x75676F52                   # INVALID     $t3, $a3, 0x6F52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6aa8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6AA8 raw=0x75676F52");
 /* MITIGATED */
label_2c6aac:
    // 0x2c6aac: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6aacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6ab0:
    // 0x2c6ab0: 0x61726950  daddi       $s2, $t3, 0x6950
    ctx->pc = 0x2c6ab0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26960; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6ab4:
    // 0x2c6ab4: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x2c6ab4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6ab8:
    // 0x2c6ab8: 0x7565694c  .word       0x7565694C                   # INVALID     $t3, $a1, 0x694C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6ab8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6AB8 raw=0x7565694C");
 /* MITIGATED */
label_2c6abc:
    // 0x2c6abc: 0x616e6574  daddi       $t6, $t3, 0x6574
    ctx->pc = 0x2c6abcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c6ac0:
    // 0x2c6ac0: 0x746e  .word       0x0000746E                   # dsub        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6ac0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c6ac4:
    // 0x2c6ac4: 0x0  nop
    ctx->pc = 0x2c6ac4u;
    // NOP
label_2c6ac8:
    // 0x2c6ac8: 0x76697250  .word       0x76697250                   # INVALID     $s3, $t1, 0x7250 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6ac8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6AC8 raw=0x76697250");
 /* MITIGATED */
label_2c6acc:
    // 0x2c6acc: 0x657461  .word       0x00657461                   # addu        $t6, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6accu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c6ad0:
    // 0x2c6ad0: 0x70726f43  .word       0x70726F43                   # INVALID     $v1, $s2, 0x6F43 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6ad0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 18); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c6ad4:
    // 0x2c6ad4: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x2c6ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6ad8:
    // 0x2c6ad8: 0x0  nop
    ctx->pc = 0x2c6ad8u;
    // NOP
label_2c6adc:
    // 0x2c6adc: 0x0  nop
    ctx->pc = 0x2c6adcu;
    // NOP
label_2c6ae0:
    // 0x2c6ae0: 0x67726553  daddiu      $s2, $k1, 0x6553
    ctx->pc = 0x2c6ae0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25939);
label_2c6ae4:
    // 0x2c6ae4: 0x746e6165  .word       0x746E6165                   # INVALID     $v1, $t6, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6ae4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6AE4 raw=0x746E6165");
 /* MITIGATED */
label_2c6ae8:
    // 0x2c6ae8: 0x0  nop
    ctx->pc = 0x2c6ae8u;
    // NOP
label_2c6aec:
    // 0x2c6aec: 0x0  nop
    ctx->pc = 0x2c6aecu;
    // NOP
label_2c6af0:
    // 0x2c6af0: 0x6f6a614d  ldr         $t2, 0x614D($k1)
    ctx->pc = 0x2c6af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2c6af4:
    // 0x2c6af4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c6af4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6af8:
    // 0x2c6af8: 0x72617547  .word       0x72617547                   # INVALID     $s3, $at, 0x7547 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6af8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2C6AF8 raw=0x72617547");
 /* MITIGATED */
label_2c6afc:
    // 0x2c6afc: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6afcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c6b00:
    // 0x2c6b00: 0x72617547  .word       0x72617547                   # INVALID     $s3, $at, 0x7547 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6b00u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2C6B00 raw=0x72617547");
 /* MITIGATED */
label_2c6b04:
    // 0x2c6b04: 0x61432064  daddi       $v1, $t2, 0x2064
    ctx->pc = 0x2c6b04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c6b08:
    // 0x2c6b08: 0x69617470  ldl         $at, 0x7470($t3)
    ctx->pc = 0x2c6b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c6b0c:
    // 0x2c6b0c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6b0cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6b10:
    // 0x2c6b10: 0x7964614c  lq          $a0, 0x614C($t3)
    ctx->pc = 0x2c6b10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 24908)));
label_2c6b14:
    // 0x2c6b14: 0x61754720  daddi       $s5, $t3, 0x4720
    ctx->pc = 0x2c6b14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18208; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c6b18:
    // 0x2c6b18: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c6b18u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6b1c:
    // 0x2c6b1c: 0x0  nop
    ctx->pc = 0x2c6b1cu;
    // NOP
label_2c6b20:
    // 0x2c6b20: 0x7964614c  lq          $a0, 0x614C($t3)
    ctx->pc = 0x2c6b20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 24908)));
label_2c6b24:
    // 0x2c6b24: 0x70614320  .word       0x70614320                   # madd1       $t0, $v1, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6b24u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2c6b28:
    // 0x2c6b28: 0x6e696174  ldr         $t1, 0x6174($s3)
    ctx->pc = 0x2c6b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c6b2c:
    // 0x2c6b2c: 0x0  nop
    ctx->pc = 0x2c6b2cu;
    // NOP
label_2c6b30:
    // 0x2c6b30: 0x6d776f42  ldr         $s7, 0x6F42($t3)
    ctx->pc = 0x2c6b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28482); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c6b34:
    // 0x2c6b34: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6b34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c6b38:
    // 0x2c6b38: 0x20776f42  addi        $s7, $v1, 0x6F42
    ctx->pc = 0x2c6b38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28482, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2c6b3c:
    // 0x2c6b3c: 0x74706143  .word       0x74706143                   # INVALID     $v1, $s0, 0x6143 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6b3cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6B3C raw=0x74706143");
 /* MITIGATED */
    ctx->pc = 0x2c6b40u;
    return;
}
