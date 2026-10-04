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


void FUN_0019b910_part121(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d6290u: goto label_1d6290;
        case 0x1d6294u: goto label_1d6294;
        case 0x1d6298u: goto label_1d6298;
        case 0x1d629cu: goto label_1d629c;
        case 0x1d62a0u: goto label_1d62a0;
        case 0x1d62a4u: goto label_1d62a4;
        case 0x1d62a8u: goto label_1d62a8;
        case 0x1d62acu: goto label_1d62ac;
        case 0x1d62b0u: goto label_1d62b0;
        case 0x1d62b4u: goto label_1d62b4;
        case 0x1d62b8u: goto label_1d62b8;
        case 0x1d62bcu: goto label_1d62bc;
        case 0x1d62c0u: goto label_1d62c0;
        case 0x1d62c4u: goto label_1d62c4;
        case 0x1d62c8u: goto label_1d62c8;
        case 0x1d62ccu: goto label_1d62cc;
        case 0x1d62d0u: goto label_1d62d0;
        case 0x1d62d4u: goto label_1d62d4;
        case 0x1d62d8u: goto label_1d62d8;
        case 0x1d62dcu: goto label_1d62dc;
        case 0x1d62e0u: goto label_1d62e0;
        case 0x1d62e4u: goto label_1d62e4;
        case 0x1d62e8u: goto label_1d62e8;
        case 0x1d62ecu: goto label_1d62ec;
        case 0x1d62f0u: goto label_1d62f0;
        case 0x1d62f4u: goto label_1d62f4;
        case 0x1d62f8u: goto label_1d62f8;
        case 0x1d62fcu: goto label_1d62fc;
        case 0x1d6300u: goto label_1d6300;
        case 0x1d6304u: goto label_1d6304;
        case 0x1d6308u: goto label_1d6308;
        case 0x1d630cu: goto label_1d630c;
        case 0x1d6310u: goto label_1d6310;
        case 0x1d6314u: goto label_1d6314;
        case 0x1d6318u: goto label_1d6318;
        case 0x1d631cu: goto label_1d631c;
        case 0x1d6320u: goto label_1d6320;
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6328u: goto label_1d6328;
        case 0x1d632cu: goto label_1d632c;
        case 0x1d6330u: goto label_1d6330;
        case 0x1d6334u: goto label_1d6334;
        case 0x1d6338u: goto label_1d6338;
        case 0x1d633cu: goto label_1d633c;
        case 0x1d6340u: goto label_1d6340;
        case 0x1d6344u: goto label_1d6344;
        case 0x1d6348u: goto label_1d6348;
        case 0x1d634cu: goto label_1d634c;
        case 0x1d6350u: goto label_1d6350;
        case 0x1d6354u: goto label_1d6354;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d635cu: goto label_1d635c;
        case 0x1d6360u: goto label_1d6360;
        case 0x1d6364u: goto label_1d6364;
        case 0x1d6368u: goto label_1d6368;
        case 0x1d636cu: goto label_1d636c;
        case 0x1d6370u: goto label_1d6370;
        case 0x1d6374u: goto label_1d6374;
        case 0x1d6378u: goto label_1d6378;
        case 0x1d637cu: goto label_1d637c;
        case 0x1d6380u: goto label_1d6380;
        case 0x1d6384u: goto label_1d6384;
        case 0x1d6388u: goto label_1d6388;
        case 0x1d638cu: goto label_1d638c;
        case 0x1d6390u: goto label_1d6390;
        case 0x1d6394u: goto label_1d6394;
        case 0x1d6398u: goto label_1d6398;
        case 0x1d639cu: goto label_1d639c;
        case 0x1d63a0u: goto label_1d63a0;
        case 0x1d63a4u: goto label_1d63a4;
        case 0x1d63a8u: goto label_1d63a8;
        case 0x1d63acu: goto label_1d63ac;
        case 0x1d63b0u: goto label_1d63b0;
        case 0x1d63b4u: goto label_1d63b4;
        case 0x1d63b8u: goto label_1d63b8;
        case 0x1d63bcu: goto label_1d63bc;
        case 0x1d63c0u: goto label_1d63c0;
        case 0x1d63c4u: goto label_1d63c4;
        case 0x1d63c8u: goto label_1d63c8;
        case 0x1d63ccu: goto label_1d63cc;
        case 0x1d63d0u: goto label_1d63d0;
        case 0x1d63d4u: goto label_1d63d4;
        case 0x1d63d8u: goto label_1d63d8;
        case 0x1d63dcu: goto label_1d63dc;
        case 0x1d63e0u: goto label_1d63e0;
        case 0x1d63e4u: goto label_1d63e4;
        case 0x1d63e8u: goto label_1d63e8;
        case 0x1d63ecu: goto label_1d63ec;
        case 0x1d63f0u: goto label_1d63f0;
        case 0x1d63f4u: goto label_1d63f4;
        case 0x1d63f8u: goto label_1d63f8;
        case 0x1d63fcu: goto label_1d63fc;
        case 0x1d6400u: goto label_1d6400;
        case 0x1d6404u: goto label_1d6404;
        case 0x1d6408u: goto label_1d6408;
        case 0x1d640cu: goto label_1d640c;
        case 0x1d6410u: goto label_1d6410;
        case 0x1d6414u: goto label_1d6414;
        case 0x1d6418u: goto label_1d6418;
        case 0x1d641cu: goto label_1d641c;
        case 0x1d6420u: goto label_1d6420;
        case 0x1d6424u: goto label_1d6424;
        case 0x1d6428u: goto label_1d6428;
        case 0x1d642cu: goto label_1d642c;
        case 0x1d6430u: goto label_1d6430;
        case 0x1d6434u: goto label_1d6434;
        case 0x1d6438u: goto label_1d6438;
        case 0x1d643cu: goto label_1d643c;
        case 0x1d6440u: goto label_1d6440;
        case 0x1d6444u: goto label_1d6444;
        case 0x1d6448u: goto label_1d6448;
        case 0x1d644cu: goto label_1d644c;
        case 0x1d6450u: goto label_1d6450;
        case 0x1d6454u: goto label_1d6454;
        case 0x1d6458u: goto label_1d6458;
        case 0x1d645cu: goto label_1d645c;
        case 0x1d6460u: goto label_1d6460;
        case 0x1d6464u: goto label_1d6464;
        case 0x1d6468u: goto label_1d6468;
        case 0x1d646cu: goto label_1d646c;
        case 0x1d6470u: goto label_1d6470;
        case 0x1d6474u: goto label_1d6474;
        case 0x1d6478u: goto label_1d6478;
        case 0x1d647cu: goto label_1d647c;
        case 0x1d6480u: goto label_1d6480;
        case 0x1d6484u: goto label_1d6484;
        case 0x1d6488u: goto label_1d6488;
        case 0x1d648cu: goto label_1d648c;
        case 0x1d6490u: goto label_1d6490;
        case 0x1d6494u: goto label_1d6494;
        case 0x1d6498u: goto label_1d6498;
        case 0x1d649cu: goto label_1d649c;
        case 0x1d64a0u: goto label_1d64a0;
        case 0x1d64a4u: goto label_1d64a4;
        case 0x1d64a8u: goto label_1d64a8;
        case 0x1d64acu: goto label_1d64ac;
        case 0x1d64b0u: goto label_1d64b0;
        case 0x1d64b4u: goto label_1d64b4;
        case 0x1d64b8u: goto label_1d64b8;
        case 0x1d64bcu: goto label_1d64bc;
        case 0x1d64c0u: goto label_1d64c0;
        case 0x1d64c4u: goto label_1d64c4;
        case 0x1d64c8u: goto label_1d64c8;
        case 0x1d64ccu: goto label_1d64cc;
        case 0x1d64d0u: goto label_1d64d0;
        case 0x1d64d4u: goto label_1d64d4;
        case 0x1d64d8u: goto label_1d64d8;
        case 0x1d64dcu: goto label_1d64dc;
        case 0x1d64e0u: goto label_1d64e0;
        case 0x1d64e4u: goto label_1d64e4;
        case 0x1d64e8u: goto label_1d64e8;
        case 0x1d64ecu: goto label_1d64ec;
        case 0x1d64f0u: goto label_1d64f0;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d64f8u: goto label_1d64f8;
        case 0x1d64fcu: goto label_1d64fc;
        case 0x1d6500u: goto label_1d6500;
        case 0x1d6504u: goto label_1d6504;
        case 0x1d6508u: goto label_1d6508;
        case 0x1d650cu: goto label_1d650c;
        case 0x1d6510u: goto label_1d6510;
        case 0x1d6514u: goto label_1d6514;
        case 0x1d6518u: goto label_1d6518;
        case 0x1d651cu: goto label_1d651c;
        case 0x1d6520u: goto label_1d6520;
        case 0x1d6524u: goto label_1d6524;
        case 0x1d6528u: goto label_1d6528;
        case 0x1d652cu: goto label_1d652c;
        case 0x1d6530u: goto label_1d6530;
        case 0x1d6534u: goto label_1d6534;
        case 0x1d6538u: goto label_1d6538;
        case 0x1d653cu: goto label_1d653c;
        case 0x1d6540u: goto label_1d6540;
        case 0x1d6544u: goto label_1d6544;
        case 0x1d6548u: goto label_1d6548;
        case 0x1d654cu: goto label_1d654c;
        case 0x1d6550u: goto label_1d6550;
        case 0x1d6554u: goto label_1d6554;
        case 0x1d6558u: goto label_1d6558;
        case 0x1d655cu: goto label_1d655c;
        case 0x1d6560u: goto label_1d6560;
        case 0x1d6564u: goto label_1d6564;
        case 0x1d6568u: goto label_1d6568;
        case 0x1d656cu: goto label_1d656c;
        case 0x1d6570u: goto label_1d6570;
        case 0x1d6574u: goto label_1d6574;
        case 0x1d6578u: goto label_1d6578;
        case 0x1d657cu: goto label_1d657c;
        case 0x1d6580u: goto label_1d6580;
        case 0x1d6584u: goto label_1d6584;
        case 0x1d6588u: goto label_1d6588;
        case 0x1d658cu: goto label_1d658c;
        case 0x1d6590u: goto label_1d6590;
        case 0x1d6594u: goto label_1d6594;
        case 0x1d6598u: goto label_1d6598;
        case 0x1d659cu: goto label_1d659c;
        case 0x1d65a0u: goto label_1d65a0;
        case 0x1d65a4u: goto label_1d65a4;
        case 0x1d65a8u: goto label_1d65a8;
        case 0x1d65acu: goto label_1d65ac;
        case 0x1d65b0u: goto label_1d65b0;
        case 0x1d65b4u: goto label_1d65b4;
        case 0x1d65b8u: goto label_1d65b8;
        case 0x1d65bcu: goto label_1d65bc;
        case 0x1d65c0u: goto label_1d65c0;
        case 0x1d65c4u: goto label_1d65c4;
        case 0x1d65c8u: goto label_1d65c8;
        case 0x1d65ccu: goto label_1d65cc;
        case 0x1d65d0u: goto label_1d65d0;
        case 0x1d65d4u: goto label_1d65d4;
        case 0x1d65d8u: goto label_1d65d8;
        case 0x1d65dcu: goto label_1d65dc;
        case 0x1d65e0u: goto label_1d65e0;
        case 0x1d65e4u: goto label_1d65e4;
        case 0x1d65e8u: goto label_1d65e8;
        case 0x1d65ecu: goto label_1d65ec;
        case 0x1d65f0u: goto label_1d65f0;
        case 0x1d65f4u: goto label_1d65f4;
        case 0x1d65f8u: goto label_1d65f8;
        case 0x1d65fcu: goto label_1d65fc;
        case 0x1d6600u: goto label_1d6600;
        case 0x1d6604u: goto label_1d6604;
        case 0x1d6608u: goto label_1d6608;
        case 0x1d660cu: goto label_1d660c;
        case 0x1d6610u: goto label_1d6610;
        case 0x1d6614u: goto label_1d6614;
        case 0x1d6618u: goto label_1d6618;
        case 0x1d661cu: goto label_1d661c;
        case 0x1d6620u: goto label_1d6620;
        case 0x1d6624u: goto label_1d6624;
        case 0x1d6628u: goto label_1d6628;
        case 0x1d662cu: goto label_1d662c;
        case 0x1d6630u: goto label_1d6630;
        case 0x1d6634u: goto label_1d6634;
        case 0x1d6638u: goto label_1d6638;
        case 0x1d663cu: goto label_1d663c;
        case 0x1d6640u: goto label_1d6640;
        case 0x1d6644u: goto label_1d6644;
        case 0x1d6648u: goto label_1d6648;
        case 0x1d664cu: goto label_1d664c;
        case 0x1d6650u: goto label_1d6650;
        case 0x1d6654u: goto label_1d6654;
        case 0x1d6658u: goto label_1d6658;
        case 0x1d665cu: goto label_1d665c;
        case 0x1d6660u: goto label_1d6660;
        case 0x1d6664u: goto label_1d6664;
        case 0x1d6668u: goto label_1d6668;
        case 0x1d666cu: goto label_1d666c;
        case 0x1d6670u: goto label_1d6670;
        case 0x1d6674u: goto label_1d6674;
        case 0x1d6678u: goto label_1d6678;
        case 0x1d667cu: goto label_1d667c;
        case 0x1d6680u: goto label_1d6680;
        case 0x1d6684u: goto label_1d6684;
        case 0x1d6688u: goto label_1d6688;
        case 0x1d668cu: goto label_1d668c;
        case 0x1d6690u: goto label_1d6690;
        case 0x1d6694u: goto label_1d6694;
        case 0x1d6698u: goto label_1d6698;
        case 0x1d669cu: goto label_1d669c;
        case 0x1d66a0u: goto label_1d66a0;
        case 0x1d66a4u: goto label_1d66a4;
        case 0x1d66a8u: goto label_1d66a8;
        case 0x1d66acu: goto label_1d66ac;
        case 0x1d66b0u: goto label_1d66b0;
        case 0x1d66b4u: goto label_1d66b4;
        case 0x1d66b8u: goto label_1d66b8;
        case 0x1d66bcu: goto label_1d66bc;
        case 0x1d66c0u: goto label_1d66c0;
        case 0x1d66c4u: goto label_1d66c4;
        case 0x1d66c8u: goto label_1d66c8;
        case 0x1d66ccu: goto label_1d66cc;
        case 0x1d66d0u: goto label_1d66d0;
        case 0x1d66d4u: goto label_1d66d4;
        case 0x1d66d8u: goto label_1d66d8;
        case 0x1d66dcu: goto label_1d66dc;
        case 0x1d66e0u: goto label_1d66e0;
        case 0x1d66e4u: goto label_1d66e4;
        case 0x1d66e8u: goto label_1d66e8;
        case 0x1d66ecu: goto label_1d66ec;
        case 0x1d66f0u: goto label_1d66f0;
        case 0x1d66f4u: goto label_1d66f4;
        case 0x1d66f8u: goto label_1d66f8;
        case 0x1d66fcu: goto label_1d66fc;
        case 0x1d6700u: goto label_1d6700;
        case 0x1d6704u: goto label_1d6704;
        case 0x1d6708u: goto label_1d6708;
        case 0x1d670cu: goto label_1d670c;
        case 0x1d6710u: goto label_1d6710;
        case 0x1d6714u: goto label_1d6714;
        case 0x1d6718u: goto label_1d6718;
        case 0x1d671cu: goto label_1d671c;
        case 0x1d6720u: goto label_1d6720;
        case 0x1d6724u: goto label_1d6724;
        case 0x1d6728u: goto label_1d6728;
        case 0x1d672cu: goto label_1d672c;
        case 0x1d6730u: goto label_1d6730;
        case 0x1d6734u: goto label_1d6734;
        case 0x1d6738u: goto label_1d6738;
        case 0x1d673cu: goto label_1d673c;
        case 0x1d6740u: goto label_1d6740;
        case 0x1d6744u: goto label_1d6744;
        case 0x1d6748u: goto label_1d6748;
        case 0x1d674cu: goto label_1d674c;
        case 0x1d6750u: goto label_1d6750;
        case 0x1d6754u: goto label_1d6754;
        case 0x1d6758u: goto label_1d6758;
        case 0x1d675cu: goto label_1d675c;
        case 0x1d6760u: goto label_1d6760;
        case 0x1d6764u: goto label_1d6764;
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
        default: return;
    }

label_1d6290:
    // 0x1d6290: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d6294:
    // 0x1d6294: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d6298:
    // 0x1d6298: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d6298u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d629c:
    // 0x1d629c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d629cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d62a0:
    // 0x1d62a0: 0x10000107  b           . + 4 + (0x107 << 2)
label_1d62a4:
    if (ctx->pc == 0x1D62A4u) {
        ctx->pc = 0x1D62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62A0u;
        // 0x1d62a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62A8u;
        goto label_1d62a8;
    }
    ctx->pc = 0x1D62A0u;
    {
        const bool branch_taken_0x1d62a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62A0u;
        // 0x1d62a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62a0) {
            ctx->pc = 0x1D66C0u;
            goto label_1d66c0;
        }
    }
    ctx->pc = 0x1D62A8u;
label_1d62a8:
    // 0x1d62a8: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x1d62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1d62ac:
    // 0x1d62ac: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
label_1d62b0:
    if (ctx->pc == 0x1D62B0u) {
        ctx->pc = 0x1D62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62ACu;
        // 0x1d62b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62B4u;
        goto label_1d62b4;
    }
    ctx->pc = 0x1D62ACu;
    {
        const bool branch_taken_0x1d62ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62ACu;
        // 0x1d62b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62ac) {
            ctx->pc = 0x1D66B8u;
            goto label_1d66b8;
        }
    }
    ctx->pc = 0x1D62B4u;
label_1d62b4:
    // 0x1d62b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d62b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d62b8:
    // 0x1d62b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d62bc:
    if (ctx->pc == 0x1D62BCu) {
        ctx->pc = 0x1D62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B8u;
        // 0x1d62bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62C0u;
        goto label_1d62c0;
    }
    ctx->pc = 0x1D62B8u;
    {
        const bool branch_taken_0x1d62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B8u;
        // 0x1d62bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62b8) {
            ctx->pc = 0x1D62ECu;
            goto label_1d62ec;
        }
    }
    ctx->pc = 0x1D62C0u;
label_1d62c0:
    // 0x1d62c0: 0x8ec7000c  lw          $a3, 0xC($s6)
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1d62c4:
    // 0x1d62c4: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x1d62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_1d62c8:
    // 0x1d62c8: 0x90e601a2  lbu         $a2, 0x1A2($a3)
    ctx->pc = 0x1d62c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
label_1d62cc:
    // 0x1d62cc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d62ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1d62d0:
    // 0x1d62d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d62d4:
    if (ctx->pc == 0x1D62D4u) {
        ctx->pc = 0x1D62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62D0u;
        // 0x1d62d4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62D8u;
        goto label_1d62d8;
    }
    ctx->pc = 0x1D62D0u;
    {
        const bool branch_taken_0x1d62d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62D0u;
        // 0x1d62d4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62d0) {
            ctx->pc = 0x1D62E8u;
            goto label_1d62e8;
        }
    }
    ctx->pc = 0x1D62D8u;
label_1d62d8:
    // 0x1d62d8: 0x24e301b0  addiu       $v1, $a3, 0x1B0
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_1d62dc:
    // 0x1d62dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d62e0:
    // 0x1d62e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d62e4:
    if (ctx->pc == 0x1D62E4u) {
        ctx->pc = 0x1D62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62E0u;
        // 0x1d62e4: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62E8u;
        goto label_1d62e8;
    }
    ctx->pc = 0x1D62E0u;
    {
        const bool branch_taken_0x1d62e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62E0u;
        // 0x1d62e4: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62e0) {
            ctx->pc = 0x1D62FCu;
            goto label_1d62fc;
        }
    }
    ctx->pc = 0x1D62E8u;
label_1d62e8:
    // 0x1d62e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d62ec:
    // 0x1d62ec: 0x0  nop
    ctx->pc = 0x1d62ecu;
    // NOP
label_1d62f0:
    // 0x1d62f0: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1d62f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d62f4:
    // 0x1d62f4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1d62f8:
    if (ctx->pc == 0x1D62F8u) {
        ctx->pc = 0x1D62FCu;
        goto label_1d62fc;
    }
    ctx->pc = 0x1D62F4u;
    {
        const bool branch_taken_0x1d62f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d62f4) {
            ctx->pc = 0x1D62C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d62c0;
        }
    }
    ctx->pc = 0x1D62FCu;
label_1d62fc:
    // 0x1d62fc: 0x0  nop
    ctx->pc = 0x1d62fcu;
    // NOP
label_1d6300:
    // 0x1d6300: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x1d6300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_1d6304:
    // 0x1d6304: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
label_1d6308:
    if (ctx->pc == 0x1D6308u) {
        ctx->pc = 0x1D630Cu;
        goto label_1d630c;
    }
    ctx->pc = 0x1D6304u;
    {
        const bool branch_taken_0x1d6304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6304) {
            ctx->pc = 0x1D66B8u;
            goto label_1d66b8;
        }
    }
    ctx->pc = 0x1D630Cu;
label_1d630c:
    // 0x1d630c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d630cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6310:
    // 0x1d6310: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1d6314:
    // 0x1d6314: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6318:
    // 0x1d6318: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x1d6318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_1d631c:
    // 0x1d631c: 0x106000e6  beqz        $v1, . + 4 + (0xE6 << 2)
label_1d6320:
    if (ctx->pc == 0x1D6320u) {
        ctx->pc = 0x1D6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D631Cu;
        // 0x1d6320: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6324u;
        goto label_1d6324;
    }
    ctx->pc = 0x1D631Cu;
    {
        const bool branch_taken_0x1d631c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D631Cu;
        // 0x1d6320: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d631c) {
            ctx->pc = 0x1D66B8u;
            goto label_1d66b8;
        }
    }
    ctx->pc = 0x1D6324u;
label_1d6324:
    // 0x1d6324: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
label_1d6328:
    if (ctx->pc == 0x1D6328u) {
        ctx->pc = 0x1D632Cu;
        goto label_1d632c;
    }
    ctx->pc = 0x1D6324u;
    {
        const bool branch_taken_0x1d6324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6324) {
            ctx->pc = 0x1D66B8u;
            goto label_1d66b8;
        }
    }
    ctx->pc = 0x1D632Cu;
label_1d632c:
    // 0x1d632c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1d632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6330:
    // 0x1d6330: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x1d6330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
label_1d6334:
    // 0x1d6334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6338:
    // 0x1d6338: 0x0  nop
    ctx->pc = 0x1d6338u;
    // NOP
label_1d633c:
    // 0x1d633c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d633cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6340:
    // 0x1d6340: 0x0  nop
    ctx->pc = 0x1d6340u;
    // NOP
label_1d6344:
    // 0x1d6344: 0x450100dc  bc1t        . + 4 + (0xDC << 2)
label_1d6348:
    if (ctx->pc == 0x1D6348u) {
        ctx->pc = 0x1D634Cu;
        goto label_1d634c;
    }
    ctx->pc = 0x1D6344u;
    {
        const bool branch_taken_0x1d6344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6344) {
            ctx->pc = 0x1D66B8u;
            goto label_1d66b8;
        }
    }
    ctx->pc = 0x1D634Cu;
label_1d634c:
    // 0x1d634c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d6350:
    // 0x1d6350: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d6350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d6354:
    // 0x1d6354: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d6358:
    // 0x1d6358: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d635c:
    // 0x1d635c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d6360:
    // 0x1d6360: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d6360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d6364:
    // 0x1d6364: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d6368:
    // 0x1d6368: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d6368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d636c:
    // 0x1d636c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6370:
    // 0x1d6370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6374:
    // 0x1d6374: 0xc06704c  jal         func_19C130
label_1d6378:
    if (ctx->pc == 0x1D6378u) {
        ctx->pc = 0x1D6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6374u;
        // 0x1d6378: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D637Cu;
        goto label_1d637c;
    }
    ctx->pc = 0x1D6374u;
    SET_GPR_U32(ctx, 31, 0x1D637Cu);
    ctx->pc = 0x1D6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6374u;
    // 0x1d6378: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C130u;
    { ctx->pc = 0x19c130; return; }
    ctx->pc = 0x1D637Cu;
label_1d637c:
    // 0x1d637c: 0x2415001b  addiu       $s5, $zero, 0x1B
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1d6380:
    // 0x1d6380: 0x640300d8  daddiu      $v1, $zero, 0xD8
    ctx->pc = 0x1d6380u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)216);
label_1d6384:
    // 0x1d6384: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1d6384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1d6388:
    // 0x1d6388: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d6388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d638c:
    // 0x1d638c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_1d6390:
    if (ctx->pc == 0x1D6390u) {
        ctx->pc = 0x1D6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D638Cu;
        // 0x1d6390: 0x3c39021  addu        $s2, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6394u;
        goto label_1d6394;
    }
    ctx->pc = 0x1D638Cu;
    {
        const bool branch_taken_0x1d638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D638Cu;
        // 0x1d6390: 0x3c39021  addu        $s2, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d638c) {
            ctx->pc = 0x1D66B0u;
            goto label_1d66b0;
        }
    }
    ctx->pc = 0x1D6394u;
label_1d6394:
    // 0x1d6394: 0x0  nop
    ctx->pc = 0x1d6394u;
    // NOP
label_1d6398:
    // 0x1d6398: 0x129500c2  beq         $s4, $s5, . + 4 + (0xC2 << 2)
label_1d639c:
    if (ctx->pc == 0x1D639Cu) {
        ctx->pc = 0x1D63A0u;
        goto label_1d63a0;
    }
    ctx->pc = 0x1D6398u;
    {
        const bool branch_taken_0x1d6398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        if (branch_taken_0x1d6398) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D63A0u;
label_1d63a0:
    // 0x1d63a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1d63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d63a4:
    // 0x1d63a4: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
label_1d63a8:
    if (ctx->pc == 0x1D63A8u) {
        ctx->pc = 0x1D63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63A4u;
        // 0x1d63a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63ACu;
        goto label_1d63ac;
    }
    ctx->pc = 0x1D63A4u;
    {
        const bool branch_taken_0x1d63a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63A4u;
        // 0x1d63a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63a4) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D63ACu;
label_1d63ac:
    // 0x1d63ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d63acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d63b0:
    // 0x1d63b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d63b4:
    if (ctx->pc == 0x1D63B4u) {
        ctx->pc = 0x1D63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63B0u;
        // 0x1d63b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63B8u;
        goto label_1d63b8;
    }
    ctx->pc = 0x1D63B0u;
    {
        const bool branch_taken_0x1d63b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63B0u;
        // 0x1d63b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63b0) {
            ctx->pc = 0x1D63E4u;
            goto label_1d63e4;
        }
    }
    ctx->pc = 0x1D63B8u;
label_1d63b8:
    // 0x1d63b8: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x1d63b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d63bc:
    // 0x1d63bc: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x1d63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_1d63c0:
    // 0x1d63c0: 0x90e601a2  lbu         $a2, 0x1A2($a3)
    ctx->pc = 0x1d63c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
label_1d63c4:
    // 0x1d63c4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d63c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1d63c8:
    // 0x1d63c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d63cc:
    if (ctx->pc == 0x1D63CCu) {
        ctx->pc = 0x1D63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63C8u;
        // 0x1d63cc: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63D0u;
        goto label_1d63d0;
    }
    ctx->pc = 0x1D63C8u;
    {
        const bool branch_taken_0x1d63c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63C8u;
        // 0x1d63cc: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63c8) {
            ctx->pc = 0x1D63E0u;
            goto label_1d63e0;
        }
    }
    ctx->pc = 0x1D63D0u;
label_1d63d0:
    // 0x1d63d0: 0x24e301b0  addiu       $v1, $a3, 0x1B0
    ctx->pc = 0x1d63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_1d63d4:
    // 0x1d63d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d63d8:
    // 0x1d63d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d63dc:
    if (ctx->pc == 0x1D63DCu) {
        ctx->pc = 0x1D63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63D8u;
        // 0x1d63dc: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63E0u;
        goto label_1d63e0;
    }
    ctx->pc = 0x1D63D8u;
    {
        const bool branch_taken_0x1d63d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63D8u;
        // 0x1d63dc: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63d8) {
            ctx->pc = 0x1D63F4u;
            goto label_1d63f4;
        }
    }
    ctx->pc = 0x1D63E0u;
label_1d63e0:
    // 0x1d63e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d63e4:
    // 0x1d63e4: 0x0  nop
    ctx->pc = 0x1d63e4u;
    // NOP
label_1d63e8:
    // 0x1d63e8: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1d63e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d63ec:
    // 0x1d63ec: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1d63f0:
    if (ctx->pc == 0x1D63F0u) {
        ctx->pc = 0x1D63F4u;
        goto label_1d63f4;
    }
    ctx->pc = 0x1D63ECu;
    {
        const bool branch_taken_0x1d63ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d63ec) {
            ctx->pc = 0x1D63B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d63b8;
        }
    }
    ctx->pc = 0x1D63F4u;
label_1d63f4:
    // 0x1d63f4: 0x0  nop
    ctx->pc = 0x1d63f4u;
    // NOP
label_1d63f8:
    // 0x1d63f8: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x1d63f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_1d63fc:
    // 0x1d63fc: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
label_1d6400:
    if (ctx->pc == 0x1D6400u) {
        ctx->pc = 0x1D6404u;
        goto label_1d6404;
    }
    ctx->pc = 0x1D63FCu;
    {
        const bool branch_taken_0x1d63fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d63fc) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D6404u;
label_1d6404:
    // 0x1d6404: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d6404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d6408:
    // 0x1d6408: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d6408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d640c:
    // 0x1d640c: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
label_1d6410:
    if (ctx->pc == 0x1D6410u) {
        ctx->pc = 0x1D6414u;
        goto label_1d6414;
    }
    ctx->pc = 0x1D640Cu;
    {
        const bool branch_taken_0x1d640c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d640c) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D6414u;
label_1d6414:
    // 0x1d6414: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6418:
    // 0x1d6418: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1d6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d641c:
    // 0x1d641c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6420:
    // 0x1d6420: 0x30632420  andi        $v1, $v1, 0x2420
    ctx->pc = 0x1d6420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9248);
label_1d6424:
    // 0x1d6424: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_1d6428:
    if (ctx->pc == 0x1D6428u) {
        ctx->pc = 0x1D642Cu;
        goto label_1d642c;
    }
    ctx->pc = 0x1D6424u;
    {
        const bool branch_taken_0x1d6424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6424) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D642Cu;
label_1d642c:
    // 0x1d642c: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x1d642cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_1d6430:
    // 0x1d6430: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
label_1d6434:
    if (ctx->pc == 0x1D6434u) {
        ctx->pc = 0x1D6438u;
        goto label_1d6438;
    }
    ctx->pc = 0x1D6430u;
    {
        const bool branch_taken_0x1d6430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6430) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D6438u;
label_1d6438:
    // 0x1d6438: 0x90840246  lbu         $a0, 0x246($a0)
    ctx->pc = 0x1d6438u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 582)));
label_1d643c:
    // 0x1d643c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d6440:
    // 0x1d6440: 0x10830098  beq         $a0, $v1, . + 4 + (0x98 << 2)
label_1d6444:
    if (ctx->pc == 0x1D6444u) {
        ctx->pc = 0x1D6448u;
        goto label_1d6448;
    }
    ctx->pc = 0x1D6440u;
    {
        const bool branch_taken_0x1d6440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6440) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D6448u;
label_1d6448:
    // 0x1d6448: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1d6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d644c:
    // 0x1d644c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d6450:
    // 0x1d6450: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d6454:
    // 0x1d6454: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d6454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6458:
    // 0x1d6458: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d645c:
    // 0x1d645c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d6460:
    // 0x1d6460: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d6464:
    // 0x1d6464: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d6468:
    // 0x1d6468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d646c:
    // 0x1d646c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6470:
    // 0x1d6470: 0xc06704c  jal         func_19C130
label_1d6474:
    if (ctx->pc == 0x1D6474u) {
        ctx->pc = 0x1D6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6470u;
        // 0x1d6474: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6478u;
        goto label_1d6478;
    }
    ctx->pc = 0x1D6470u;
    SET_GPR_U32(ctx, 31, 0x1D6478u);
    ctx->pc = 0x1D6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6470u;
    // 0x1d6474: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C130u;
    { ctx->pc = 0x19c130; return; }
    ctx->pc = 0x1D6478u;
label_1d6478:
    // 0x1d6478: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d6478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d647c:
    // 0x1d647c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d6480:
    // 0x1d6480: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d6480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6484:
    // 0x1d6484: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d6484u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6488:
    // 0x1d6488: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d6488u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1d648c:
    // 0x1d648c: 0x4a0002ff  vnop
    ctx->pc = 0x1d648cu;
    // NOP operation, no action needed for VU0
label_1d6490:
    // 0x1d6490: 0x4a0002ff  vnop
    ctx->pc = 0x1d6490u;
    // NOP operation, no action needed for VU0
label_1d6494:
    // 0x1d6494: 0x4a0002ff  vnop
    ctx->pc = 0x1d6494u;
    // NOP operation, no action needed for VU0
label_1d6498:
    // 0x1d6498: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d6498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1d649c:
    // 0x1d649c: 0x4a0002ff  vnop
    ctx->pc = 0x1d649cu;
    // NOP operation, no action needed for VU0
label_1d64a0:
    // 0x1d64a0: 0x4a0002ff  vnop
    ctx->pc = 0x1d64a0u;
    // NOP operation, no action needed for VU0
label_1d64a4:
    // 0x1d64a4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d64a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d64a8:
    // 0x1d64a8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d64a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1d64ac:
    // 0x1d64ac: 0x4a0002ff  vnop
    ctx->pc = 0x1d64acu;
    // NOP operation, no action needed for VU0
label_1d64b0:
    // 0x1d64b0: 0x4a0002ff  vnop
    ctx->pc = 0x1d64b0u;
    // NOP operation, no action needed for VU0
label_1d64b4:
    // 0x1d64b4: 0x4a0002ff  vnop
    ctx->pc = 0x1d64b4u;
    // NOP operation, no action needed for VU0
label_1d64b8:
    // 0x1d64b8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d64b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1d64bc:
    // 0x1d64bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d64bcu;
    // VWAITQ (Q already resolved in this runtime)
label_1d64c0:
    // 0x1d64c0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d64c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1d64c4:
    // 0x1d64c4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d64c4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d64c8:
    // 0x1d64c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1d64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1d64cc:
    // 0x1d64cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d64ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d64d0:
    // 0x1d64d0: 0x0  nop
    ctx->pc = 0x1d64d0u;
    // NOP
label_1d64d4:
    // 0x1d64d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d64d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d64d8:
    // 0x1d64d8: 0x0  nop
    ctx->pc = 0x1d64d8u;
    // NOP
label_1d64dc:
    // 0x1d64dc: 0x45000071  bc1f        . + 4 + (0x71 << 2)
label_1d64e0:
    if (ctx->pc == 0x1D64E0u) {
        ctx->pc = 0x1D64E4u;
        goto label_1d64e4;
    }
    ctx->pc = 0x1D64DCu;
    {
        const bool branch_taken_0x1d64dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d64dc) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D64E4u;
label_1d64e4:
    // 0x1d64e4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1d64e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d64e8:
    // 0x1d64e8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1d64e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d64ec:
    // 0x1d64ec: 0xc06d448  jal         func_1B5120
label_1d64f0:
    if (ctx->pc == 0x1D64F0u) {
        ctx->pc = 0x1D64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64ECu;
        // 0x1d64f0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D64F4u;
        goto label_1d64f4;
    }
    ctx->pc = 0x1D64ECu;
    SET_GPR_U32(ctx, 31, 0x1D64F4u);
    ctx->pc = 0x1D64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64ECu;
    // 0x1d64f0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1D64F4u;
label_1d64f4:
    // 0x1d64f4: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_1d64f8:
    // 0x1d64f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d64f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d64fc:
    // 0x1d64fc: 0x0  nop
    ctx->pc = 0x1d64fcu;
    // NOP
label_1d6500:
    // 0x1d6500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d6500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6504:
    // 0x1d6504: 0x0  nop
    ctx->pc = 0x1d6504u;
    // NOP
label_1d6508:
    // 0x1d6508: 0x45000066  bc1f        . + 4 + (0x66 << 2)
label_1d650c:
    if (ctx->pc == 0x1D650Cu) {
        ctx->pc = 0x1D650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6508u;
        // 0x1d650c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6510u;
        goto label_1d6510;
    }
    ctx->pc = 0x1D6508u;
    {
        const bool branch_taken_0x1d6508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6508u;
        // 0x1d650c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6508) {
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D6510u;
label_1d6510:
    // 0x1d6510: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1d6510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1d6514:
    // 0x1d6514: 0x8c2303c0  lw          $v1, 0x3C0($at)
    ctx->pc = 0x1d6514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1d6518:
    // 0x1d6518: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d6518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d651c:
    // 0x1d651c: 0x9064024a  lbu         $a0, 0x24A($v1)
    ctx->pc = 0x1d651cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 586)));
label_1d6520:
    // 0x1d6520: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d6520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d6524:
    // 0x1d6524: 0x9043024b  lbu         $v1, 0x24B($v0)
    ctx->pc = 0x1d6524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 587)));
label_1d6528:
    // 0x1d6528: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d6528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d652c:
    // 0x1d652c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d6530:
    // 0x1d6530: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d6530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1d6534:
    // 0x1d6534: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1d6534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d6538:
    // 0x1d6538: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d6538u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d653c:
    // 0x1d653c: 0x0  nop
    ctx->pc = 0x1d653cu;
    // NOP
label_1d6540:
    // 0x1d6540: 0x0  nop
    ctx->pc = 0x1d6540u;
    // NOP
label_1d6544:
    // 0x1d6544: 0x1012  mflo        $v0
    ctx->pc = 0x1d6544u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1d6548:
    // 0x1d6548: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d6548u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1d654c:
    // 0x1d654c: 0x0  nop
    ctx->pc = 0x1d654cu;
    // NOP
label_1d6550:
    // 0x1d6550: 0x0  nop
    ctx->pc = 0x1d6550u;
    // NOP
label_1d6554:
    // 0x1d6554: 0x1012  mflo        $v0
    ctx->pc = 0x1d6554u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1d6558:
    // 0x1d6558: 0xa422b67e  sh          $v0, -0x4982($at)
    ctx->pc = 0x1d6558u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948478), (uint16_t)GPR_U32(ctx, 2));
label_1d655c:
    // 0x1d655c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d6560:
    // 0x1d6560: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1d6560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d6564:
    // 0x1d6564: 0xc040928  jal         func_1024A0
label_1d6568:
    if (ctx->pc == 0x1D6568u) {
        ctx->pc = 0x1D6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6564u;
        // 0x1d6568: 0x24c6b660  addiu       $a2, $a2, -0x49A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D656Cu;
        goto label_1d656c;
    }
    ctx->pc = 0x1D6564u;
    SET_GPR_U32(ctx, 31, 0x1D656Cu);
    ctx->pc = 0x1D6568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6564u;
    // 0x1d6568: 0x24c6b660  addiu       $a2, $a2, -0x49A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024A0u, 0x1D6564u, 0x1D656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D656Cu;
label_1d656c:
    // 0x1d656c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1d656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6570:
    // 0x1d6570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6574:
    // 0x1d6574: 0xc050f08  jal         func_143C20
label_1d6578:
    if (ctx->pc == 0x1D6578u) {
        ctx->pc = 0x1D6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6574u;
        // 0x1d6578: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D657Cu;
        goto label_1d657c;
    }
    ctx->pc = 0x1D6574u;
    SET_GPR_U32(ctx, 31, 0x1D657Cu);
    ctx->pc = 0x1D6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6574u;
    // 0x1d6578: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D6574u, 0x1D657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D657Cu;
label_1d657c:
    // 0x1d657c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d6580:
    // 0x1d6580: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1d6580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d6584:
    // 0x1d6584: 0xc066e08  jal         func_19B820
label_1d6588:
    if (ctx->pc == 0x1D6588u) {
        ctx->pc = 0x1D6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6584u;
        // 0x1d6588: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D658Cu;
        goto label_1d658c;
    }
    ctx->pc = 0x1D6584u;
    SET_GPR_U32(ctx, 31, 0x1D658Cu);
    ctx->pc = 0x1D6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6584u;
    // 0x1d6588: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x1D6584u, 0x1D658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D658Cu;
label_1d658c:
    // 0x1d658c: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1d658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d6590:
    // 0x1d6590: 0xc06d51e  jal         func_1B5478
label_1d6594:
    if (ctx->pc == 0x1D6594u) {
        ctx->pc = 0x1D6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6590u;
        // 0x1d6594: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6598u;
        goto label_1d6598;
    }
    ctx->pc = 0x1D6590u;
    SET_GPR_U32(ctx, 31, 0x1D6598u);
    ctx->pc = 0x1D6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6590u;
    // 0x1d6594: 0xc7ac00e0  lwc1        $f12, 0xE0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1D6598u;
label_1d6598:
    // 0x1d6598: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d659c:
    // 0x1d659c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d659cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1d65a0:
    // 0x1d65a0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1d65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1d65a4:
    // 0x1d65a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d65a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d65a8:
    // 0x1d65a8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1d65ac:
    // 0x1d65ac: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1d65acu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d65b0:
    // 0x1d65b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d65b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d65b4:
    // 0x1d65b4: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1d65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d65b8:
    // 0x1d65b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d65b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d65bc:
    // 0x1d65bc: 0x4602a841  sub.s       $f1, $f21, $f2
    ctx->pc = 0x1d65bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_1d65c0:
    // 0x1d65c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d65c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d65c4:
    // 0x1d65c4: 0x0  nop
    ctx->pc = 0x1d65c4u;
    // NOP
label_1d65c8:
    // 0x1d65c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d65cc:
    if (ctx->pc == 0x1D65CCu) {
        ctx->pc = 0x1D65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65C8u;
        // 0x1d65cc: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D65D0u;
        goto label_1d65d0;
    }
    ctx->pc = 0x1D65C8u;
    {
        const bool branch_taken_0x1d65c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65C8u;
        // 0x1d65cc: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65c8) {
            ctx->pc = 0x1D65E0u;
            goto label_1d65e0;
        }
    }
    ctx->pc = 0x1D65D0u;
label_1d65d0:
    // 0x1d65d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d65d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d65d4:
    // 0x1d65d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d65d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d65d8:
    // 0x1d65d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d65dc:
    if (ctx->pc == 0x1D65DCu) {
        ctx->pc = 0x1D65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65D8u;
        // 0x1d65dc: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D65E0u;
        goto label_1d65e0;
    }
    ctx->pc = 0x1D65D8u;
    {
        const bool branch_taken_0x1d65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65D8u;
        // 0x1d65dc: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65d8) {
            ctx->pc = 0x1D6618u;
            goto label_1d6618;
        }
    }
    ctx->pc = 0x1D65E0u;
label_1d65e0:
    // 0x1d65e0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1d65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1d65e4:
    // 0x1d65e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d65e8:
    // 0x1d65e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d65e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d65ec:
    // 0x1d65ec: 0x0  nop
    ctx->pc = 0x1d65ecu;
    // NOP
label_1d65f0:
    // 0x1d65f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d65f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d65f4:
    // 0x1d65f4: 0x0  nop
    ctx->pc = 0x1d65f4u;
    // NOP
label_1d65f8:
    // 0x1d65f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d65fc:
    if (ctx->pc == 0x1D65FCu) {
        ctx->pc = 0x1D65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65F8u;
        // 0x1d65fc: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6600u;
        goto label_1d6600;
    }
    ctx->pc = 0x1D65F8u;
    {
        const bool branch_taken_0x1d65f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65F8u;
        // 0x1d65fc: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65f8) {
            ctx->pc = 0x1D6610u;
            goto label_1d6610;
        }
    }
    ctx->pc = 0x1D6600u;
label_1d6600:
    // 0x1d6600: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6604:
    // 0x1d6604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6608:
    // 0x1d6608: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d660c:
    if (ctx->pc == 0x1D660Cu) {
        ctx->pc = 0x1D660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6608u;
        // 0x1d660c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6610u;
        goto label_1d6610;
    }
    ctx->pc = 0x1D6608u;
    {
        const bool branch_taken_0x1d6608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6608u;
        // 0x1d660c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6608) {
            ctx->pc = 0x1D6614u;
            goto label_1d6614;
        }
    }
    ctx->pc = 0x1D6610u;
label_1d6610:
    // 0x1d6610: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x1d6610u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_1d6614:
    // 0x1d6614: 0x0  nop
    ctx->pc = 0x1d6614u;
    // NOP
label_1d6618:
    // 0x1d6618: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x1d6618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_1d661c:
    // 0x1d661c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1d661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_1d6620:
    // 0x1d6620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6624:
    // 0x1d6624: 0x0  nop
    ctx->pc = 0x1d6624u;
    // NOP
label_1d6628:
    // 0x1d6628: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1d6628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d662c:
    // 0x1d662c: 0x0  nop
    ctx->pc = 0x1d662cu;
    // NOP
label_1d6630:
    // 0x1d6630: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d6634:
    if (ctx->pc == 0x1D6634u) {
        ctx->pc = 0x1D6638u;
        goto label_1d6638;
    }
    ctx->pc = 0x1D6630u;
    {
        const bool branch_taken_0x1d6630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6630) {
            ctx->pc = 0x1D6640u;
            goto label_1d6640;
        }
    }
    ctx->pc = 0x1D6638u;
label_1d6638:
    // 0x1d6638: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d663c:
    if (ctx->pc == 0x1D663Cu) {
        ctx->pc = 0x1D663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6638u;
        // 0x1d663c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6640u;
        goto label_1d6640;
    }
    ctx->pc = 0x1D6638u;
    {
        const bool branch_taken_0x1d6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6638u;
        // 0x1d663c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6638) {
            ctx->pc = 0x1D6664u;
            goto label_1d6664;
        }
    }
    ctx->pc = 0x1D6640u;
label_1d6640:
    // 0x1d6640: 0x3c03bf06  lui         $v1, 0xBF06
    ctx->pc = 0x1d6640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48902 << 16));
label_1d6644:
    // 0x1d6644: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1d6644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_1d6648:
    // 0x1d6648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d664c:
    // 0x1d664c: 0x0  nop
    ctx->pc = 0x1d664cu;
    // NOP
label_1d6650:
    // 0x1d6650: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1d6650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6654:
    // 0x1d6654: 0x0  nop
    ctx->pc = 0x1d6654u;
    // NOP
label_1d6658:
    // 0x1d6658: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d665c:
    if (ctx->pc == 0x1D665Cu) {
        ctx->pc = 0x1D6660u;
        goto label_1d6660;
    }
    ctx->pc = 0x1D6658u;
    {
        const bool branch_taken_0x1d6658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6658) {
            ctx->pc = 0x1D6664u;
            goto label_1d6664;
        }
    }
    ctx->pc = 0x1D6660u;
label_1d6660:
    // 0x1d6660: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d6660u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1d6664:
    // 0x1d6664: 0x0  nop
    ctx->pc = 0x1d6664u;
    // NOP
label_1d6668:
    // 0x1d6668: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d666c:
    // 0x1d666c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1d666cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_1d6670:
    // 0x1d6670: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1d6670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6674:
    // 0x1d6674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6678:
    // 0x1d6678: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x1d6678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_1d667c:
    // 0x1d667c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1d667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6680:
    // 0x1d6680: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1d6680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1d6684:
    // 0x1d6684: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1d6684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1d6688:
    // 0x1d6688: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d6688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d668c:
    // 0x1d668c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x1d668cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_1d6690:
    // 0x1d6690: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6694:
    // 0x1d6694: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6698:
    // 0x1d6698: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1d6698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d669c:
    // 0x1d669c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d669cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d66a0:
    // 0x1d66a0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1d66a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1d66a4:
    // 0x1d66a4: 0x0  nop
    ctx->pc = 0x1d66a4u;
    // NOP
label_1d66a8:
    // 0x1d66a8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d66a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1d66ac:
    // 0x1d66ac: 0x2652ff90  addiu       $s2, $s2, -0x70
    ctx->pc = 0x1d66acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967184));
label_1d66b0:
    // 0x1d66b0: 0x6a1ff38  bgez        $s5, . + 4 + (-0xC8 << 2)
label_1d66b4:
    if (ctx->pc == 0x1D66B4u) {
        ctx->pc = 0x1D66B8u;
        goto label_1d66b8;
    }
    ctx->pc = 0x1D66B0u;
    {
        const bool branch_taken_0x1d66b0 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x1d66b0) {
            ctx->pc = 0x1D6394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6394;
        }
    }
    ctx->pc = 0x1D66B8u;
label_1d66b8:
    // 0x1d66b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d66b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d66bc:
    // 0x1d66bc: 0x26d60070  addiu       $s6, $s6, 0x70
    ctx->pc = 0x1d66bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
label_1d66c0:
    // 0x1d66c0: 0x2a83001c  slti        $v1, $s4, 0x1C
    ctx->pc = 0x1d66c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)28) ? 1 : 0);
label_1d66c4:
    // 0x1d66c4: 0x1460fef8  bnez        $v1, . + 4 + (-0x108 << 2)
label_1d66c8:
    if (ctx->pc == 0x1D66C8u) {
        ctx->pc = 0x1D66CCu;
        goto label_1d66cc;
    }
    ctx->pc = 0x1D66C4u;
    {
        const bool branch_taken_0x1d66c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d66c4) {
            ctx->pc = 0x1D62A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d62a8;
        }
    }
    ctx->pc = 0x1D66CCu;
label_1d66cc:
    // 0x1d66cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d66ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d66d0:
    // 0x1d66d0: 0x18c0  sll         $v1, $zero, 3
    ctx->pc = 0x1d66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_1d66d4:
    // 0x1d66d4: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x1d66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1d66d8:
    // 0x1d66d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d66dc:
    // 0x1d66dc: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1d66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_1d66e0:
    // 0x1d66e0: 0x100002cd  b           . + 4 + (0x2CD << 2)
label_1d66e4:
    if (ctx->pc == 0x1D66E4u) {
        ctx->pc = 0x1D66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66E0u;
        // 0x1d66e4: 0x24760c40  addiu       $s6, $v1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D66E8u;
        goto label_1d66e8;
    }
    ctx->pc = 0x1D66E0u;
    {
        const bool branch_taken_0x1d66e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66E0u;
        // 0x1d66e4: 0x24760c40  addiu       $s6, $v1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66e0) {
            ctx->pc = 0x1D7218u;
            { ctx->pc = 0x1d7218; return; }
        }
    }
    ctx->pc = 0x1D66E8u;
label_1d66e8:
    // 0x1d66e8: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x1d66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1d66ec:
    // 0x1d66ec: 0x106002c8  beqz        $v1, . + 4 + (0x2C8 << 2)
label_1d66f0:
    if (ctx->pc == 0x1D66F0u) {
        ctx->pc = 0x1D66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66ECu;
        // 0x1d66f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D66F4u;
        goto label_1d66f4;
    }
    ctx->pc = 0x1D66ECu;
    {
        const bool branch_taken_0x1d66ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66ECu;
        // 0x1d66f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66ec) {
            ctx->pc = 0x1D7210u;
            { ctx->pc = 0x1d7210; return; }
        }
    }
    ctx->pc = 0x1D66F4u;
label_1d66f4:
    // 0x1d66f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d66f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d66f8:
    // 0x1d66f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d66fc:
    if (ctx->pc == 0x1D66FCu) {
        ctx->pc = 0x1D66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66F8u;
        // 0x1d66fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6700u;
        goto label_1d6700;
    }
    ctx->pc = 0x1D66F8u;
    {
        const bool branch_taken_0x1d66f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66F8u;
        // 0x1d66fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66f8) {
            ctx->pc = 0x1D672Cu;
            goto label_1d672c;
        }
    }
    ctx->pc = 0x1D6700u;
label_1d6700:
    // 0x1d6700: 0x8ec7000c  lw          $a3, 0xC($s6)
    ctx->pc = 0x1d6700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1d6704:
    // 0x1d6704: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_1d6708:
    // 0x1d6708: 0x90e601a2  lbu         $a2, 0x1A2($a3)
    ctx->pc = 0x1d6708u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 418)));
label_1d670c:
    // 0x1d670c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d670cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1d6710:
    // 0x1d6710: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d6714:
    if (ctx->pc == 0x1D6714u) {
        ctx->pc = 0x1D6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6710u;
        // 0x1d6714: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6718u;
        goto label_1d6718;
    }
    ctx->pc = 0x1D6710u;
    {
        const bool branch_taken_0x1d6710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6710u;
        // 0x1d6714: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6710) {
            ctx->pc = 0x1D6728u;
            goto label_1d6728;
        }
    }
    ctx->pc = 0x1D6718u;
label_1d6718:
    // 0x1d6718: 0x24e301b0  addiu       $v1, $a3, 0x1B0
    ctx->pc = 0x1d6718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_1d671c:
    // 0x1d671c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6720:
    // 0x1d6720: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d6724:
    if (ctx->pc == 0x1D6724u) {
        ctx->pc = 0x1D6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6720u;
        // 0x1d6724: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6728u;
        goto label_1d6728;
    }
    ctx->pc = 0x1D6720u;
    {
        const bool branch_taken_0x1d6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6720u;
        // 0x1d6724: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6720) {
            ctx->pc = 0x1D673Cu;
            goto label_1d673c;
        }
    }
    ctx->pc = 0x1D6728u;
label_1d6728:
    // 0x1d6728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d672c:
    // 0x1d672c: 0x0  nop
    ctx->pc = 0x1d672cu;
    // NOP
label_1d6730:
    // 0x1d6730: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1d6730u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d6734:
    // 0x1d6734: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1d6738:
    if (ctx->pc == 0x1D6738u) {
        ctx->pc = 0x1D673Cu;
        goto label_1d673c;
    }
    ctx->pc = 0x1D6734u;
    {
        const bool branch_taken_0x1d6734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6734) {
            ctx->pc = 0x1D6700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6700;
        }
    }
    ctx->pc = 0x1D673Cu;
label_1d673c:
    // 0x1d673c: 0x0  nop
    ctx->pc = 0x1d673cu;
    // NOP
label_1d6740:
    // 0x1d6740: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_1d6744:
    // 0x1d6744: 0x106002b2  beqz        $v1, . + 4 + (0x2B2 << 2)
label_1d6748:
    if (ctx->pc == 0x1D6748u) {
        ctx->pc = 0x1D674Cu;
        goto label_1d674c;
    }
    ctx->pc = 0x1D6744u;
    {
        const bool branch_taken_0x1d6744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6744) {
            ctx->pc = 0x1D7210u;
            { ctx->pc = 0x1d7210; return; }
        }
    }
    ctx->pc = 0x1D674Cu;
label_1d674c:
    // 0x1d674c: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x1d674cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_1d6750:
    // 0x1d6750: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1d6750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d6754:
    // 0x1d6754: 0x146002ae  bnez        $v1, . + 4 + (0x2AE << 2)
label_1d6758:
    if (ctx->pc == 0x1D6758u) {
        ctx->pc = 0x1D675Cu;
        goto label_1d675c;
    }
    ctx->pc = 0x1D6754u;
    {
        const bool branch_taken_0x1d6754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6754) {
            ctx->pc = 0x1D7210u;
            { ctx->pc = 0x1d7210; return; }
        }
    }
    ctx->pc = 0x1D675Cu;
label_1d675c:
    // 0x1d675c: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d6760:
    // 0x1d6760: 0x8e630200  lw          $v1, 0x200($s3)
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d6764:
    // 0x1d6764: 0x106002aa  beqz        $v1, . + 4 + (0x2AA << 2)
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
            { ctx->pc = 0x1d6bd4; return; }
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
            { ctx->pc = 0x1d6bc8; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
            { ctx->pc = 0x1d6bc0; return; }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x1D699Cu, 0x1D69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            { ctx->pc = 0x1d6bc0; return; }
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
    ctx->pc = 0x1d6a60u;
    return;
}
