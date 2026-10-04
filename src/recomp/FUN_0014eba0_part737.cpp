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


void FUN_0014eba0_part737(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b61a0u: goto label_2b61a0;
        case 0x2b61a4u: goto label_2b61a4;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61acu: goto label_2b61ac;
        case 0x2b61b0u: goto label_2b61b0;
        case 0x2b61b4u: goto label_2b61b4;
        case 0x2b61b8u: goto label_2b61b8;
        case 0x2b61bcu: goto label_2b61bc;
        case 0x2b61c0u: goto label_2b61c0;
        case 0x2b61c4u: goto label_2b61c4;
        case 0x2b61c8u: goto label_2b61c8;
        case 0x2b61ccu: goto label_2b61cc;
        case 0x2b61d0u: goto label_2b61d0;
        case 0x2b61d4u: goto label_2b61d4;
        case 0x2b61d8u: goto label_2b61d8;
        case 0x2b61dcu: goto label_2b61dc;
        case 0x2b61e0u: goto label_2b61e0;
        case 0x2b61e4u: goto label_2b61e4;
        case 0x2b61e8u: goto label_2b61e8;
        case 0x2b61ecu: goto label_2b61ec;
        case 0x2b61f0u: goto label_2b61f0;
        case 0x2b61f4u: goto label_2b61f4;
        case 0x2b61f8u: goto label_2b61f8;
        case 0x2b61fcu: goto label_2b61fc;
        case 0x2b6200u: goto label_2b6200;
        case 0x2b6204u: goto label_2b6204;
        case 0x2b6208u: goto label_2b6208;
        case 0x2b620cu: goto label_2b620c;
        case 0x2b6210u: goto label_2b6210;
        case 0x2b6214u: goto label_2b6214;
        case 0x2b6218u: goto label_2b6218;
        case 0x2b621cu: goto label_2b621c;
        case 0x2b6220u: goto label_2b6220;
        case 0x2b6224u: goto label_2b6224;
        case 0x2b6228u: goto label_2b6228;
        case 0x2b622cu: goto label_2b622c;
        case 0x2b6230u: goto label_2b6230;
        case 0x2b6234u: goto label_2b6234;
        case 0x2b6238u: goto label_2b6238;
        case 0x2b623cu: goto label_2b623c;
        case 0x2b6240u: goto label_2b6240;
        case 0x2b6244u: goto label_2b6244;
        case 0x2b6248u: goto label_2b6248;
        case 0x2b624cu: goto label_2b624c;
        case 0x2b6250u: goto label_2b6250;
        case 0x2b6254u: goto label_2b6254;
        case 0x2b6258u: goto label_2b6258;
        case 0x2b625cu: goto label_2b625c;
        case 0x2b6260u: goto label_2b6260;
        case 0x2b6264u: goto label_2b6264;
        case 0x2b6268u: goto label_2b6268;
        case 0x2b626cu: goto label_2b626c;
        case 0x2b6270u: goto label_2b6270;
        case 0x2b6274u: goto label_2b6274;
        case 0x2b6278u: goto label_2b6278;
        case 0x2b627cu: goto label_2b627c;
        case 0x2b6280u: goto label_2b6280;
        case 0x2b6284u: goto label_2b6284;
        case 0x2b6288u: goto label_2b6288;
        case 0x2b628cu: goto label_2b628c;
        case 0x2b6290u: goto label_2b6290;
        case 0x2b6294u: goto label_2b6294;
        case 0x2b6298u: goto label_2b6298;
        case 0x2b629cu: goto label_2b629c;
        case 0x2b62a0u: goto label_2b62a0;
        case 0x2b62a4u: goto label_2b62a4;
        case 0x2b62a8u: goto label_2b62a8;
        case 0x2b62acu: goto label_2b62ac;
        case 0x2b62b0u: goto label_2b62b0;
        case 0x2b62b4u: goto label_2b62b4;
        case 0x2b62b8u: goto label_2b62b8;
        case 0x2b62bcu: goto label_2b62bc;
        case 0x2b62c0u: goto label_2b62c0;
        case 0x2b62c4u: goto label_2b62c4;
        case 0x2b62c8u: goto label_2b62c8;
        case 0x2b62ccu: goto label_2b62cc;
        case 0x2b62d0u: goto label_2b62d0;
        case 0x2b62d4u: goto label_2b62d4;
        case 0x2b62d8u: goto label_2b62d8;
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62e0u: goto label_2b62e0;
        case 0x2b62e4u: goto label_2b62e4;
        case 0x2b62e8u: goto label_2b62e8;
        case 0x2b62ecu: goto label_2b62ec;
        case 0x2b62f0u: goto label_2b62f0;
        case 0x2b62f4u: goto label_2b62f4;
        case 0x2b62f8u: goto label_2b62f8;
        case 0x2b62fcu: goto label_2b62fc;
        case 0x2b6300u: goto label_2b6300;
        case 0x2b6304u: goto label_2b6304;
        case 0x2b6308u: goto label_2b6308;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6310u: goto label_2b6310;
        case 0x2b6314u: goto label_2b6314;
        case 0x2b6318u: goto label_2b6318;
        case 0x2b631cu: goto label_2b631c;
        case 0x2b6320u: goto label_2b6320;
        case 0x2b6324u: goto label_2b6324;
        case 0x2b6328u: goto label_2b6328;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6330u: goto label_2b6330;
        case 0x2b6334u: goto label_2b6334;
        case 0x2b6338u: goto label_2b6338;
        case 0x2b633cu: goto label_2b633c;
        case 0x2b6340u: goto label_2b6340;
        case 0x2b6344u: goto label_2b6344;
        case 0x2b6348u: goto label_2b6348;
        case 0x2b634cu: goto label_2b634c;
        case 0x2b6350u: goto label_2b6350;
        case 0x2b6354u: goto label_2b6354;
        case 0x2b6358u: goto label_2b6358;
        case 0x2b635cu: goto label_2b635c;
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
        default: return;
    }

label_2b61a0:
    // 0x2b61a0: 0x42020084  .word       0x42020084                   # INVALID     $s0, $v0, 0x84 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b61a0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x4 at 0x2B61A0 raw=0x42020084");
 /* MITIGATED */
label_2b61a4:
    // 0x2b61a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61a8:
    // 0x2b61a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b61a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b61ac:
    // 0x2b61ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61b0:
    // 0x2b61b0: 0x500b0080  beql        $zero, $t3, . + 4 + (0x80 << 2)
label_2b61b4:
    if (ctx->pc == 0x2B61B4u) {
        ctx->pc = 0x2B61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61B0u;
        // 0x2b61b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61B8u;
        goto label_2b61b8;
    }
    ctx->pc = 0x2B61B0u;
    {
        const bool branch_taken_0x2b61b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b61b0) {
            ctx->pc = 0x2B61B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B61B0u;
            // 0x2b61b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B63B4u;
            goto label_2b63b4;
        }
    }
    ctx->pc = 0x2B61B8u;
label_2b61b8:
    // 0x2b61b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b61b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b61bc:
    // 0x2b61bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61c0:
    // 0x2b61c0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2b61c4:
    if (ctx->pc == 0x2B61C4u) {
        ctx->pc = 0x2B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C0u;
        // 0x2b61c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61C8u;
        goto label_2b61c8;
    }
    ctx->pc = 0x2B61C0u;
    {
        const bool branch_taken_0x2b61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C0u;
        // 0x2b61c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c0) {
            ctx->pc = 0x2B63C4u;
            goto label_2b63c4;
        }
    }
    ctx->pc = 0x2B61C8u;
label_2b61c8:
    // 0x2b61c8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2b61cc:
    if (ctx->pc == 0x2B61CCu) {
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61D0u;
        goto label_2b61d0;
    }
    ctx->pc = 0x2B61C8u;
    {
        const bool branch_taken_0x2b61c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c8) {
            ctx->pc = 0x2B61D4u;
            goto label_2b61d4;
        }
    }
    ctx->pc = 0x2B61D0u;
label_2b61d0:
    // 0x2b61d0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b61d4:
    if (ctx->pc == 0x2B61D4u) {
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61D8u;
        goto label_2b61d8;
    }
    ctx->pc = 0x2B61D0u;
    {
        const bool branch_taken_0x2b61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61d0) {
            ctx->pc = 0x2B61D4u;
            goto label_2b61d4;
        }
    }
    ctx->pc = 0x2B61D8u;
label_2b61d8:
    // 0x2b61d8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b61dc:
    if (ctx->pc == 0x2B61DCu) {
        ctx->pc = 0x2B61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D8u;
        // 0x2b61dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61E0u;
        goto label_2b61e0;
    }
    ctx->pc = 0x2B61D8u;
    {
        const bool branch_taken_0x2b61d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D8u;
        // 0x2b61dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61d8) {
            ctx->pc = 0x2BC25Cu;
            { ctx->pc = 0x2bc25c; return; }
        }
    }
    ctx->pc = 0x2B61E0u;
label_2b61e0:
    // 0x2b61e0: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b61e4:
    if (ctx->pc == 0x2B61E4u) {
        ctx->pc = 0x2B61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61E0u;
        // 0x2b61e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61E8u;
        goto label_2b61e8;
    }
    ctx->pc = 0x2B61E0u;
    {
        const bool branch_taken_0x2b61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61E0u;
        // 0x2b61e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61e0) {
            ctx->pc = 0x2BC1E4u;
            { ctx->pc = 0x2bc1e4; return; }
        }
    }
    ctx->pc = 0x2B61E8u;
label_2b61e8:
    // 0x2b61e8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b61e8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b61ec:
    // 0x2b61ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61f0:
    // 0x2b61f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b61f4:
    if (ctx->pc == 0x2B61F4u) {
        ctx->pc = 0x2B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61F0u;
        // 0x2b61f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61F8u;
        goto label_2b61f8;
    }
    ctx->pc = 0x2B61F0u;
    {
        const bool branch_taken_0x2b61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61F0u;
        // 0x2b61f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61f0) {
            ctx->pc = 0x2B61F4u;
            goto label_2b61f4;
        }
    }
    ctx->pc = 0x2B61F8u;
label_2b61f8:
    // 0x2b61f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b61f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b61fc:
    // 0x2b61fc: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b61fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b6200:
    // 0x2b6200: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6200u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6204:
    // 0x2b6204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6208:
    // 0x2b6208: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6208u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b620c:
    // 0x2b620c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b620cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6210:
    // 0x2b6210: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6214:
    // 0x2b6214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6218:
    // 0x2b6218: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6218u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b621c:
    // 0x2b621c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b621cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6220:
    // 0x2b6220: 0x4202007f  .word       0x4202007F                   # INVALID     $s0, $v0, 0x7F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6220u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B6220 raw=0x4202007F");
 /* MITIGATED */
label_2b6224:
    // 0x2b6224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6228:
    // 0x2b6228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b622c:
    // 0x2b622c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b622cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6230:
    // 0x2b6230: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b6234:
    if (ctx->pc == 0x2B6234u) {
        ctx->pc = 0x2B6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6230u;
        // 0x2b6234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6238u;
        goto label_2b6238;
    }
    ctx->pc = 0x2B6230u;
    {
        const bool branch_taken_0x2b6230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6230u;
        // 0x2b6234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6230) {
            ctx->pc = 0x2CA238u;
            { ctx->pc = 0x2ca238; return; }
        }
    }
    ctx->pc = 0x2B6238u;
label_2b6238:
    // 0x2b6238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b623c:
    // 0x2b623c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b623cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6240:
    // 0x2b6240: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b6244:
    if (ctx->pc == 0x2B6244u) {
        ctx->pc = 0x2B6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6240u;
        // 0x2b6244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6248u;
        goto label_2b6248;
    }
    ctx->pc = 0x2B6240u;
    {
        const bool branch_taken_0x2b6240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6240) {
            ctx->pc = 0x2B6244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6240u;
            // 0x2b6244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8230u;
            { ctx->pc = 0x2b8230; return; }
        }
    }
    ctx->pc = 0x2B6248u;
label_2b6248:
    // 0x2b6248: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b624c:
    // 0x2b624c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b624cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6250:
    // 0x2b6250: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6254:
    if (ctx->pc == 0x2B6254u) {
        ctx->pc = 0x2B6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6250u;
        // 0x2b6254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6258u;
        goto label_2b6258;
    }
    ctx->pc = 0x2B6250u;
    {
        const bool branch_taken_0x2b6250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6250u;
        // 0x2b6254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6250) {
            ctx->pc = 0x2BC254u;
            { ctx->pc = 0x2bc254; return; }
        }
    }
    ctx->pc = 0x2B6258u;
label_2b6258:
    // 0x2b6258: 0x4202006d  .word       0x4202006D                   # INVALID     $s0, $v0, 0x6D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6258u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2D at 0x2B6258 raw=0x4202006D");
 /* MITIGATED */
label_2b625c:
    // 0x2b625c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b625cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6260:
    // 0x2b6260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6264:
    // 0x2b6264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6268:
    // 0x2b6268: 0x500b0069  beql        $zero, $t3, . + 4 + (0x69 << 2)
label_2b626c:
    if (ctx->pc == 0x2B626Cu) {
        ctx->pc = 0x2B626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6268u;
        // 0x2b626c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6270u;
        goto label_2b6270;
    }
    ctx->pc = 0x2B6268u;
    {
        const bool branch_taken_0x2b6268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b6268) {
            ctx->pc = 0x2B626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6268u;
            // 0x2b626c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6410u;
            goto label_2b6410;
        }
    }
    ctx->pc = 0x2B6270u;
label_2b6270:
    // 0x2b6270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6274:
    // 0x2b6274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6278:
    // 0x2b6278: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2b627c:
    if (ctx->pc == 0x2B627Cu) {
        ctx->pc = 0x2B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6278u;
        // 0x2b627c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6280u;
        goto label_2b6280;
    }
    ctx->pc = 0x2B6278u;
    {
        const bool branch_taken_0x2b6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6278u;
        // 0x2b627c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6278) {
            ctx->pc = 0x2B637Cu;
            goto label_2b637c;
        }
    }
    ctx->pc = 0x2B6280u;
label_2b6280:
    // 0x2b6280: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2b6284:
    if (ctx->pc == 0x2B6284u) {
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6280u;
        // 0x2b6284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6288u;
        goto label_2b6288;
    }
    ctx->pc = 0x2B6280u;
    {
        const bool branch_taken_0x2b6280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6280u;
        // 0x2b6284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6280) {
            ctx->pc = 0x2B6288u;
            goto label_2b6288;
        }
    }
    ctx->pc = 0x2B6288u;
label_2b6288:
    // 0x2b6288: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b628c:
    if (ctx->pc == 0x2B628Cu) {
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6288u;
        // 0x2b628c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6290u;
        goto label_2b6290;
    }
    ctx->pc = 0x2B6288u;
    {
        const bool branch_taken_0x2b6288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6288u;
        // 0x2b628c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6288) {
            ctx->pc = 0x2B628Cu;
            goto label_2b628c;
        }
    }
    ctx->pc = 0x2B6290u;
label_2b6290:
    // 0x2b6290: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6294:
    if (ctx->pc == 0x2B6294u) {
        ctx->pc = 0x2B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6290u;
        // 0x2b6294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6298u;
        goto label_2b6298;
    }
    ctx->pc = 0x2B6290u;
    {
        const bool branch_taken_0x2b6290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6290u;
        // 0x2b6294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6290) {
            ctx->pc = 0x2BC294u;
            { ctx->pc = 0x2bc294; return; }
        }
    }
    ctx->pc = 0x2B6298u;
label_2b6298:
    // 0x2b6298: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b629c:
    if (ctx->pc == 0x2B629Cu) {
        ctx->pc = 0x2B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6298u;
        // 0x2b629c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B62A0u;
        goto label_2b62a0;
    }
    ctx->pc = 0x2B6298u;
    {
        const bool branch_taken_0x2b6298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6298u;
        // 0x2b629c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6298) {
            ctx->pc = 0x2BC31Cu;
            { ctx->pc = 0x2bc31c; return; }
        }
    }
    ctx->pc = 0x2B62A0u;
label_2b62a0:
    // 0x2b62a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b62a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b62a4:
    // 0x2b62a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62a8:
    // 0x2b62a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b62ac:
    if (ctx->pc == 0x2B62ACu) {
        ctx->pc = 0x2B62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62A8u;
        // 0x2b62ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B62B0u;
        goto label_2b62b0;
    }
    ctx->pc = 0x2B62A8u;
    {
        const bool branch_taken_0x2b62a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62A8u;
        // 0x2b62ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62a8) {
            ctx->pc = 0x2B62ACu;
            goto label_2b62ac;
        }
    }
    ctx->pc = 0x2B62B0u;
label_2b62b0:
    // 0x2b62b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b62b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b62b4:
    // 0x2b62b4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b62b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b62b8:
    // 0x2b62b8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b62b8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62bc:
    // 0x2b62bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62c0:
    // 0x2b62c0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62c4:
    // 0x2b62c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62c8:
    // 0x2b62c8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62cc:
    // 0x2b62cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62d0:
    // 0x2b62d0: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62d4:
    // 0x2b62d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62d8:
    // 0x2b62d8: 0x42020068  .word       0x42020068                   # INVALID     $s0, $v0, 0x68 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b62d8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x28 at 0x2B62D8 raw=0x42020068");
 /* MITIGATED */
label_2b62dc:
    // 0x2b62dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62e0:
    // 0x2b62e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b62e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b62e4:
    // 0x2b62e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62e8:
    // 0x2b62e8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b62ec:
    if (ctx->pc == 0x2B62ECu) {
        ctx->pc = 0x2B62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62E8u;
        // 0x2b62ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B62F0u;
        goto label_2b62f0;
    }
    ctx->pc = 0x2B62E8u;
    {
        const bool branch_taken_0x2b62e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62E8u;
        // 0x2b62ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62e8) {
            ctx->pc = 0x2CA2F0u;
            { ctx->pc = 0x2ca2f0; return; }
        }
    }
    ctx->pc = 0x2B62F0u;
label_2b62f0:
    // 0x2b62f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b62f4:
    // 0x2b62f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62f8:
    // 0x2b62f8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b62fc:
    if (ctx->pc == 0x2B62FCu) {
        ctx->pc = 0x2B62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62F8u;
        // 0x2b62fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6300u;
        goto label_2b6300;
    }
    ctx->pc = 0x2B62F8u;
    {
        const bool branch_taken_0x2b62f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b62f8) {
            ctx->pc = 0x2B62FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B62F8u;
            // 0x2b62fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82E8u;
            { ctx->pc = 0x2b82e8; return; }
        }
    }
    ctx->pc = 0x2B6300u;
label_2b6300:
    // 0x2b6300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6304:
    // 0x2b6304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6308:
    // 0x2b6308: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b630c:
    if (ctx->pc == 0x2B630Cu) {
        ctx->pc = 0x2B630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6308u;
        // 0x2b630c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6310u;
        goto label_2b6310;
    }
    ctx->pc = 0x2B6308u;
    {
        const bool branch_taken_0x2b6308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6308u;
        // 0x2b630c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6308) {
            ctx->pc = 0x2BC38Cu;
            { ctx->pc = 0x2bc38c; return; }
        }
    }
    ctx->pc = 0x2B6310u;
label_2b6310:
    // 0x2b6310: 0x42020056  .word       0x42020056                   # INVALID     $s0, $v0, 0x56 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6310u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2B6310 raw=0x42020056");
 /* MITIGATED */
label_2b6314:
    // 0x2b6314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6318:
    // 0x2b6318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b631c:
    // 0x2b631c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b631cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6320:
    // 0x2b6320: 0x500b0052  beql        $zero, $t3, . + 4 + (0x52 << 2)
label_2b6324:
    if (ctx->pc == 0x2B6324u) {
        ctx->pc = 0x2B6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6320u;
        // 0x2b6324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6328u;
        goto label_2b6328;
    }
    ctx->pc = 0x2B6320u;
    {
        const bool branch_taken_0x2b6320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b6320) {
            ctx->pc = 0x2B6324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6320u;
            // 0x2b6324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B646Cu;
            goto label_2b646c;
        }
    }
    ctx->pc = 0x2B6328u;
label_2b6328:
    // 0x2b6328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b632c:
    // 0x2b632c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b632cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6330:
    // 0x2b6330: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2b6334:
    if (ctx->pc == 0x2B6334u) {
        ctx->pc = 0x2B6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6330u;
        // 0x2b6334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6338u;
        goto label_2b6338;
    }
    ctx->pc = 0x2B6330u;
    {
        const bool branch_taken_0x2b6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6330u;
        // 0x2b6334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6330) {
            ctx->pc = 0x2B6B34u;
            { ctx->pc = 0x2b6b34; return; }
        }
    }
    ctx->pc = 0x2B6338u;
label_2b6338:
    // 0x2b6338: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2b633c:
    if (ctx->pc == 0x2B633Cu) {
        ctx->pc = 0x2B633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6338u;
        // 0x2b633c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6340u;
        goto label_2b6340;
    }
    ctx->pc = 0x2B6338u;
    {
        const bool branch_taken_0x2b6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6338u;
        // 0x2b633c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6338) {
            ctx->pc = 0x2B635Cu;
            goto label_2b635c;
        }
    }
    ctx->pc = 0x2B6340u;
label_2b6340:
    // 0x2b6340: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b6344:
    if (ctx->pc == 0x2B6344u) {
        ctx->pc = 0x2B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6340u;
        // 0x2b6344: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6348u;
        goto label_2b6348;
    }
    ctx->pc = 0x2B6340u;
    {
        const bool branch_taken_0x2b6340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6340u;
        // 0x2b6344: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6340) {
            ctx->pc = 0x2B6348u;
            goto label_2b6348;
        }
    }
    ctx->pc = 0x2B6348u;
label_2b6348:
    // 0x2b6348: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b634c:
    if (ctx->pc == 0x2B634Cu) {
        ctx->pc = 0x2B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6348u;
        // 0x2b634c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6350u;
        goto label_2b6350;
    }
    ctx->pc = 0x2B6348u;
    {
        const bool branch_taken_0x2b6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6348u;
        // 0x2b634c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6348) {
            ctx->pc = 0x2BC3CCu;
            { ctx->pc = 0x2bc3cc; return; }
        }
    }
    ctx->pc = 0x2B6350u;
label_2b6350:
    // 0x2b6350: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b6354:
    if (ctx->pc == 0x2B6354u) {
        ctx->pc = 0x2B6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6350u;
        // 0x2b6354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6358u;
        goto label_2b6358;
    }
    ctx->pc = 0x2B6350u;
    {
        const bool branch_taken_0x2b6350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6350u;
        // 0x2b6354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6350) {
            ctx->pc = 0x2BC354u;
            { ctx->pc = 0x2bc354; return; }
        }
    }
    ctx->pc = 0x2B6358u;
label_2b6358:
    // 0x2b6358: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b6358u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b635c:
    // 0x2b635c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b635cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x11 at 0x2B6390 raw=0x42020051");
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
            { ctx->pc = 0x2ca3a8; return; }
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B63C8 raw=0x4202003F");
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3A at 0x2B6448 raw=0x4202003A");
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
            { ctx->pc = 0x2ca460; return; }
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x28 at 0x2B6480 raw=0x42020028");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B64B8 raw=0x01FA0005");
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
            { ctx->pc = 0x2ca4f0; return; }
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B6500 raw=0x01FA0005");
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
            { ctx->pc = 0x2cc538; return; }
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
            { ctx->pc = 0x2cc548; return; }
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x30 at 0x2B6568 raw=0x42010070");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B65D0 raw=0x01F64001");
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x2B66D0 raw=0x42010020");
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
            { ctx->pc = 0x2cc708; return; }
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
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x13 at 0x2B6738 raw=0x42010013");
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
            { ctx->pc = 0x2cc794; return; }
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
            { ctx->pc = 0x2cc7c8; return; }
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B681C raw=0x01F9C9FD");
 /* MITIGATED */
label_2b6820:
    // 0x2b6820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6824:
    // 0x2b6824: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6824u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B6824 raw=0x01FAD1FD");
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
            { ctx->pc = 0x2ce838; return; }
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
            { ctx->pc = 0x2c0920; return; }
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
            { ctx->pc = 0x2c2928; return; }
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B6954 raw=0x01F590BD");
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
    ctx->pc = 0x2b6970u;
    return;
}
