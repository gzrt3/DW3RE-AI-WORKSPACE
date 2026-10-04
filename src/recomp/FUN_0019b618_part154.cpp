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


void FUN_0019b618_part154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e6168u: goto label_1e6168;
        case 0x1e616cu: goto label_1e616c;
        case 0x1e6170u: goto label_1e6170;
        case 0x1e6174u: goto label_1e6174;
        case 0x1e6178u: goto label_1e6178;
        case 0x1e617cu: goto label_1e617c;
        case 0x1e6180u: goto label_1e6180;
        case 0x1e6184u: goto label_1e6184;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e618cu: goto label_1e618c;
        case 0x1e6190u: goto label_1e6190;
        case 0x1e6194u: goto label_1e6194;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e619cu: goto label_1e619c;
        case 0x1e61a0u: goto label_1e61a0;
        case 0x1e61a4u: goto label_1e61a4;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e61acu: goto label_1e61ac;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e61b4u: goto label_1e61b4;
        case 0x1e61b8u: goto label_1e61b8;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61c0u: goto label_1e61c0;
        case 0x1e61c4u: goto label_1e61c4;
        case 0x1e61c8u: goto label_1e61c8;
        case 0x1e61ccu: goto label_1e61cc;
        case 0x1e61d0u: goto label_1e61d0;
        case 0x1e61d4u: goto label_1e61d4;
        case 0x1e61d8u: goto label_1e61d8;
        case 0x1e61dcu: goto label_1e61dc;
        case 0x1e61e0u: goto label_1e61e0;
        case 0x1e61e4u: goto label_1e61e4;
        case 0x1e61e8u: goto label_1e61e8;
        case 0x1e61ecu: goto label_1e61ec;
        case 0x1e61f0u: goto label_1e61f0;
        case 0x1e61f4u: goto label_1e61f4;
        case 0x1e61f8u: goto label_1e61f8;
        case 0x1e61fcu: goto label_1e61fc;
        case 0x1e6200u: goto label_1e6200;
        case 0x1e6204u: goto label_1e6204;
        case 0x1e6208u: goto label_1e6208;
        case 0x1e620cu: goto label_1e620c;
        case 0x1e6210u: goto label_1e6210;
        case 0x1e6214u: goto label_1e6214;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e621cu: goto label_1e621c;
        case 0x1e6220u: goto label_1e6220;
        case 0x1e6224u: goto label_1e6224;
        case 0x1e6228u: goto label_1e6228;
        case 0x1e622cu: goto label_1e622c;
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6234u: goto label_1e6234;
        case 0x1e6238u: goto label_1e6238;
        case 0x1e623cu: goto label_1e623c;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6244u: goto label_1e6244;
        case 0x1e6248u: goto label_1e6248;
        case 0x1e624cu: goto label_1e624c;
        case 0x1e6250u: goto label_1e6250;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6258u: goto label_1e6258;
        case 0x1e625cu: goto label_1e625c;
        case 0x1e6260u: goto label_1e6260;
        case 0x1e6264u: goto label_1e6264;
        case 0x1e6268u: goto label_1e6268;
        case 0x1e626cu: goto label_1e626c;
        case 0x1e6270u: goto label_1e6270;
        case 0x1e6274u: goto label_1e6274;
        case 0x1e6278u: goto label_1e6278;
        case 0x1e627cu: goto label_1e627c;
        case 0x1e6280u: goto label_1e6280;
        case 0x1e6284u: goto label_1e6284;
        case 0x1e6288u: goto label_1e6288;
        case 0x1e628cu: goto label_1e628c;
        case 0x1e6290u: goto label_1e6290;
        case 0x1e6294u: goto label_1e6294;
        case 0x1e6298u: goto label_1e6298;
        case 0x1e629cu: goto label_1e629c;
        case 0x1e62a0u: goto label_1e62a0;
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62acu: goto label_1e62ac;
        case 0x1e62b0u: goto label_1e62b0;
        case 0x1e62b4u: goto label_1e62b4;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62bcu: goto label_1e62bc;
        case 0x1e62c0u: goto label_1e62c0;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62c8u: goto label_1e62c8;
        case 0x1e62ccu: goto label_1e62cc;
        case 0x1e62d0u: goto label_1e62d0;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62dcu: goto label_1e62dc;
        case 0x1e62e0u: goto label_1e62e0;
        case 0x1e62e4u: goto label_1e62e4;
        case 0x1e62e8u: goto label_1e62e8;
        case 0x1e62ecu: goto label_1e62ec;
        case 0x1e62f0u: goto label_1e62f0;
        case 0x1e62f4u: goto label_1e62f4;
        case 0x1e62f8u: goto label_1e62f8;
        case 0x1e62fcu: goto label_1e62fc;
        case 0x1e6300u: goto label_1e6300;
        case 0x1e6304u: goto label_1e6304;
        case 0x1e6308u: goto label_1e6308;
        case 0x1e630cu: goto label_1e630c;
        case 0x1e6310u: goto label_1e6310;
        case 0x1e6314u: goto label_1e6314;
        case 0x1e6318u: goto label_1e6318;
        case 0x1e631cu: goto label_1e631c;
        case 0x1e6320u: goto label_1e6320;
        case 0x1e6324u: goto label_1e6324;
        case 0x1e6328u: goto label_1e6328;
        case 0x1e632cu: goto label_1e632c;
        case 0x1e6330u: goto label_1e6330;
        case 0x1e6334u: goto label_1e6334;
        case 0x1e6338u: goto label_1e6338;
        case 0x1e633cu: goto label_1e633c;
        case 0x1e6340u: goto label_1e6340;
        case 0x1e6344u: goto label_1e6344;
        case 0x1e6348u: goto label_1e6348;
        case 0x1e634cu: goto label_1e634c;
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6354u: goto label_1e6354;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e635cu: goto label_1e635c;
        case 0x1e6360u: goto label_1e6360;
        case 0x1e6364u: goto label_1e6364;
        case 0x1e6368u: goto label_1e6368;
        case 0x1e636cu: goto label_1e636c;
        case 0x1e6370u: goto label_1e6370;
        case 0x1e6374u: goto label_1e6374;
        case 0x1e6378u: goto label_1e6378;
        case 0x1e637cu: goto label_1e637c;
        case 0x1e6380u: goto label_1e6380;
        case 0x1e6384u: goto label_1e6384;
        case 0x1e6388u: goto label_1e6388;
        case 0x1e638cu: goto label_1e638c;
        case 0x1e6390u: goto label_1e6390;
        case 0x1e6394u: goto label_1e6394;
        case 0x1e6398u: goto label_1e6398;
        case 0x1e639cu: goto label_1e639c;
        case 0x1e63a0u: goto label_1e63a0;
        case 0x1e63a4u: goto label_1e63a4;
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63acu: goto label_1e63ac;
        case 0x1e63b0u: goto label_1e63b0;
        case 0x1e63b4u: goto label_1e63b4;
        case 0x1e63b8u: goto label_1e63b8;
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63c0u: goto label_1e63c0;
        case 0x1e63c4u: goto label_1e63c4;
        case 0x1e63c8u: goto label_1e63c8;
        case 0x1e63ccu: goto label_1e63cc;
        case 0x1e63d0u: goto label_1e63d0;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e63d8u: goto label_1e63d8;
        case 0x1e63dcu: goto label_1e63dc;
        case 0x1e63e0u: goto label_1e63e0;
        case 0x1e63e4u: goto label_1e63e4;
        case 0x1e63e8u: goto label_1e63e8;
        case 0x1e63ecu: goto label_1e63ec;
        case 0x1e63f0u: goto label_1e63f0;
        case 0x1e63f4u: goto label_1e63f4;
        case 0x1e63f8u: goto label_1e63f8;
        case 0x1e63fcu: goto label_1e63fc;
        case 0x1e6400u: goto label_1e6400;
        case 0x1e6404u: goto label_1e6404;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e640cu: goto label_1e640c;
        case 0x1e6410u: goto label_1e6410;
        case 0x1e6414u: goto label_1e6414;
        case 0x1e6418u: goto label_1e6418;
        case 0x1e641cu: goto label_1e641c;
        case 0x1e6420u: goto label_1e6420;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6428u: goto label_1e6428;
        case 0x1e642cu: goto label_1e642c;
        case 0x1e6430u: goto label_1e6430;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6438u: goto label_1e6438;
        case 0x1e643cu: goto label_1e643c;
        case 0x1e6440u: goto label_1e6440;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6448u: goto label_1e6448;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6450u: goto label_1e6450;
        case 0x1e6454u: goto label_1e6454;
        case 0x1e6458u: goto label_1e6458;
        case 0x1e645cu: goto label_1e645c;
        case 0x1e6460u: goto label_1e6460;
        case 0x1e6464u: goto label_1e6464;
        case 0x1e6468u: goto label_1e6468;
        case 0x1e646cu: goto label_1e646c;
        case 0x1e6470u: goto label_1e6470;
        case 0x1e6474u: goto label_1e6474;
        case 0x1e6478u: goto label_1e6478;
        case 0x1e647cu: goto label_1e647c;
        case 0x1e6480u: goto label_1e6480;
        case 0x1e6484u: goto label_1e6484;
        case 0x1e6488u: goto label_1e6488;
        case 0x1e648cu: goto label_1e648c;
        case 0x1e6490u: goto label_1e6490;
        case 0x1e6494u: goto label_1e6494;
        case 0x1e6498u: goto label_1e6498;
        case 0x1e649cu: goto label_1e649c;
        case 0x1e64a0u: goto label_1e64a0;
        case 0x1e64a4u: goto label_1e64a4;
        case 0x1e64a8u: goto label_1e64a8;
        case 0x1e64acu: goto label_1e64ac;
        case 0x1e64b0u: goto label_1e64b0;
        case 0x1e64b4u: goto label_1e64b4;
        case 0x1e64b8u: goto label_1e64b8;
        case 0x1e64bcu: goto label_1e64bc;
        case 0x1e64c0u: goto label_1e64c0;
        case 0x1e64c4u: goto label_1e64c4;
        case 0x1e64c8u: goto label_1e64c8;
        case 0x1e64ccu: goto label_1e64cc;
        case 0x1e64d0u: goto label_1e64d0;
        case 0x1e64d4u: goto label_1e64d4;
        case 0x1e64d8u: goto label_1e64d8;
        case 0x1e64dcu: goto label_1e64dc;
        case 0x1e64e0u: goto label_1e64e0;
        case 0x1e64e4u: goto label_1e64e4;
        case 0x1e64e8u: goto label_1e64e8;
        case 0x1e64ecu: goto label_1e64ec;
        case 0x1e64f0u: goto label_1e64f0;
        case 0x1e64f4u: goto label_1e64f4;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e64fcu: goto label_1e64fc;
        case 0x1e6500u: goto label_1e6500;
        case 0x1e6504u: goto label_1e6504;
        case 0x1e6508u: goto label_1e6508;
        case 0x1e650cu: goto label_1e650c;
        case 0x1e6510u: goto label_1e6510;
        case 0x1e6514u: goto label_1e6514;
        case 0x1e6518u: goto label_1e6518;
        case 0x1e651cu: goto label_1e651c;
        case 0x1e6520u: goto label_1e6520;
        case 0x1e6524u: goto label_1e6524;
        case 0x1e6528u: goto label_1e6528;
        case 0x1e652cu: goto label_1e652c;
        case 0x1e6530u: goto label_1e6530;
        case 0x1e6534u: goto label_1e6534;
        case 0x1e6538u: goto label_1e6538;
        case 0x1e653cu: goto label_1e653c;
        case 0x1e6540u: goto label_1e6540;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6548u: goto label_1e6548;
        case 0x1e654cu: goto label_1e654c;
        case 0x1e6550u: goto label_1e6550;
        case 0x1e6554u: goto label_1e6554;
        case 0x1e6558u: goto label_1e6558;
        case 0x1e655cu: goto label_1e655c;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6568u: goto label_1e6568;
        case 0x1e656cu: goto label_1e656c;
        case 0x1e6570u: goto label_1e6570;
        case 0x1e6574u: goto label_1e6574;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6580u: goto label_1e6580;
        case 0x1e6584u: goto label_1e6584;
        case 0x1e6588u: goto label_1e6588;
        case 0x1e658cu: goto label_1e658c;
        case 0x1e6590u: goto label_1e6590;
        case 0x1e6594u: goto label_1e6594;
        case 0x1e6598u: goto label_1e6598;
        case 0x1e659cu: goto label_1e659c;
        case 0x1e65a0u: goto label_1e65a0;
        case 0x1e65a4u: goto label_1e65a4;
        case 0x1e65a8u: goto label_1e65a8;
        case 0x1e65acu: goto label_1e65ac;
        case 0x1e65b0u: goto label_1e65b0;
        case 0x1e65b4u: goto label_1e65b4;
        case 0x1e65b8u: goto label_1e65b8;
        case 0x1e65bcu: goto label_1e65bc;
        case 0x1e65c0u: goto label_1e65c0;
        case 0x1e65c4u: goto label_1e65c4;
        case 0x1e65c8u: goto label_1e65c8;
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65d0u: goto label_1e65d0;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e65d8u: goto label_1e65d8;
        case 0x1e65dcu: goto label_1e65dc;
        case 0x1e65e0u: goto label_1e65e0;
        case 0x1e65e4u: goto label_1e65e4;
        case 0x1e65e8u: goto label_1e65e8;
        case 0x1e65ecu: goto label_1e65ec;
        case 0x1e65f0u: goto label_1e65f0;
        case 0x1e65f4u: goto label_1e65f4;
        case 0x1e65f8u: goto label_1e65f8;
        case 0x1e65fcu: goto label_1e65fc;
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6604u: goto label_1e6604;
        case 0x1e6608u: goto label_1e6608;
        case 0x1e660cu: goto label_1e660c;
        case 0x1e6610u: goto label_1e6610;
        case 0x1e6614u: goto label_1e6614;
        case 0x1e6618u: goto label_1e6618;
        case 0x1e661cu: goto label_1e661c;
        case 0x1e6620u: goto label_1e6620;
        case 0x1e6624u: goto label_1e6624;
        case 0x1e6628u: goto label_1e6628;
        case 0x1e662cu: goto label_1e662c;
        case 0x1e6630u: goto label_1e6630;
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6638u: goto label_1e6638;
        case 0x1e663cu: goto label_1e663c;
        case 0x1e6640u: goto label_1e6640;
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e664cu: goto label_1e664c;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6654u: goto label_1e6654;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e665cu: goto label_1e665c;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6664u: goto label_1e6664;
        case 0x1e6668u: goto label_1e6668;
        case 0x1e666cu: goto label_1e666c;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6674u: goto label_1e6674;
        case 0x1e6678u: goto label_1e6678;
        case 0x1e667cu: goto label_1e667c;
        case 0x1e6680u: goto label_1e6680;
        case 0x1e6684u: goto label_1e6684;
        case 0x1e6688u: goto label_1e6688;
        case 0x1e668cu: goto label_1e668c;
        case 0x1e6690u: goto label_1e6690;
        case 0x1e6694u: goto label_1e6694;
        case 0x1e6698u: goto label_1e6698;
        case 0x1e669cu: goto label_1e669c;
        case 0x1e66a0u: goto label_1e66a0;
        case 0x1e66a4u: goto label_1e66a4;
        case 0x1e66a8u: goto label_1e66a8;
        case 0x1e66acu: goto label_1e66ac;
        case 0x1e66b0u: goto label_1e66b0;
        case 0x1e66b4u: goto label_1e66b4;
        case 0x1e66b8u: goto label_1e66b8;
        case 0x1e66bcu: goto label_1e66bc;
        case 0x1e66c0u: goto label_1e66c0;
        case 0x1e66c4u: goto label_1e66c4;
        case 0x1e66c8u: goto label_1e66c8;
        case 0x1e66ccu: goto label_1e66cc;
        case 0x1e66d0u: goto label_1e66d0;
        case 0x1e66d4u: goto label_1e66d4;
        case 0x1e66d8u: goto label_1e66d8;
        case 0x1e66dcu: goto label_1e66dc;
        case 0x1e66e0u: goto label_1e66e0;
        case 0x1e66e4u: goto label_1e66e4;
        case 0x1e66e8u: goto label_1e66e8;
        case 0x1e66ecu: goto label_1e66ec;
        case 0x1e66f0u: goto label_1e66f0;
        case 0x1e66f4u: goto label_1e66f4;
        case 0x1e66f8u: goto label_1e66f8;
        case 0x1e66fcu: goto label_1e66fc;
        case 0x1e6700u: goto label_1e6700;
        case 0x1e6704u: goto label_1e6704;
        case 0x1e6708u: goto label_1e6708;
        case 0x1e670cu: goto label_1e670c;
        case 0x1e6710u: goto label_1e6710;
        case 0x1e6714u: goto label_1e6714;
        case 0x1e6718u: goto label_1e6718;
        case 0x1e671cu: goto label_1e671c;
        case 0x1e6720u: goto label_1e6720;
        case 0x1e6724u: goto label_1e6724;
        case 0x1e6728u: goto label_1e6728;
        case 0x1e672cu: goto label_1e672c;
        case 0x1e6730u: goto label_1e6730;
        case 0x1e6734u: goto label_1e6734;
        case 0x1e6738u: goto label_1e6738;
        case 0x1e673cu: goto label_1e673c;
        case 0x1e6740u: goto label_1e6740;
        case 0x1e6744u: goto label_1e6744;
        case 0x1e6748u: goto label_1e6748;
        case 0x1e674cu: goto label_1e674c;
        case 0x1e6750u: goto label_1e6750;
        case 0x1e6754u: goto label_1e6754;
        case 0x1e6758u: goto label_1e6758;
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6760u: goto label_1e6760;
        case 0x1e6764u: goto label_1e6764;
        case 0x1e6768u: goto label_1e6768;
        case 0x1e676cu: goto label_1e676c;
        case 0x1e6770u: goto label_1e6770;
        case 0x1e6774u: goto label_1e6774;
        case 0x1e6778u: goto label_1e6778;
        case 0x1e677cu: goto label_1e677c;
        case 0x1e6780u: goto label_1e6780;
        case 0x1e6784u: goto label_1e6784;
        case 0x1e6788u: goto label_1e6788;
        case 0x1e678cu: goto label_1e678c;
        case 0x1e6790u: goto label_1e6790;
        case 0x1e6794u: goto label_1e6794;
        case 0x1e6798u: goto label_1e6798;
        case 0x1e679cu: goto label_1e679c;
        case 0x1e67a0u: goto label_1e67a0;
        case 0x1e67a4u: goto label_1e67a4;
        case 0x1e67a8u: goto label_1e67a8;
        case 0x1e67acu: goto label_1e67ac;
        case 0x1e67b0u: goto label_1e67b0;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67bcu: goto label_1e67bc;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67c8u: goto label_1e67c8;
        case 0x1e67ccu: goto label_1e67cc;
        case 0x1e67d0u: goto label_1e67d0;
        case 0x1e67d4u: goto label_1e67d4;
        case 0x1e67d8u: goto label_1e67d8;
        case 0x1e67dcu: goto label_1e67dc;
        case 0x1e67e0u: goto label_1e67e0;
        case 0x1e67e4u: goto label_1e67e4;
        case 0x1e67e8u: goto label_1e67e8;
        case 0x1e67ecu: goto label_1e67ec;
        case 0x1e67f0u: goto label_1e67f0;
        case 0x1e67f4u: goto label_1e67f4;
        case 0x1e67f8u: goto label_1e67f8;
        case 0x1e67fcu: goto label_1e67fc;
        case 0x1e6800u: goto label_1e6800;
        case 0x1e6804u: goto label_1e6804;
        case 0x1e6808u: goto label_1e6808;
        case 0x1e680cu: goto label_1e680c;
        case 0x1e6810u: goto label_1e6810;
        case 0x1e6814u: goto label_1e6814;
        case 0x1e6818u: goto label_1e6818;
        case 0x1e681cu: goto label_1e681c;
        case 0x1e6820u: goto label_1e6820;
        case 0x1e6824u: goto label_1e6824;
        case 0x1e6828u: goto label_1e6828;
        case 0x1e682cu: goto label_1e682c;
        case 0x1e6830u: goto label_1e6830;
        case 0x1e6834u: goto label_1e6834;
        case 0x1e6838u: goto label_1e6838;
        case 0x1e683cu: goto label_1e683c;
        case 0x1e6840u: goto label_1e6840;
        case 0x1e6844u: goto label_1e6844;
        case 0x1e6848u: goto label_1e6848;
        case 0x1e684cu: goto label_1e684c;
        case 0x1e6850u: goto label_1e6850;
        case 0x1e6854u: goto label_1e6854;
        case 0x1e6858u: goto label_1e6858;
        case 0x1e685cu: goto label_1e685c;
        case 0x1e6860u: goto label_1e6860;
        case 0x1e6864u: goto label_1e6864;
        case 0x1e6868u: goto label_1e6868;
        case 0x1e686cu: goto label_1e686c;
        case 0x1e6870u: goto label_1e6870;
        case 0x1e6874u: goto label_1e6874;
        case 0x1e6878u: goto label_1e6878;
        case 0x1e687cu: goto label_1e687c;
        case 0x1e6880u: goto label_1e6880;
        case 0x1e6884u: goto label_1e6884;
        case 0x1e6888u: goto label_1e6888;
        case 0x1e688cu: goto label_1e688c;
        case 0x1e6890u: goto label_1e6890;
        case 0x1e6894u: goto label_1e6894;
        case 0x1e6898u: goto label_1e6898;
        case 0x1e689cu: goto label_1e689c;
        case 0x1e68a0u: goto label_1e68a0;
        case 0x1e68a4u: goto label_1e68a4;
        case 0x1e68a8u: goto label_1e68a8;
        case 0x1e68acu: goto label_1e68ac;
        case 0x1e68b0u: goto label_1e68b0;
        case 0x1e68b4u: goto label_1e68b4;
        case 0x1e68b8u: goto label_1e68b8;
        case 0x1e68bcu: goto label_1e68bc;
        case 0x1e68c0u: goto label_1e68c0;
        case 0x1e68c4u: goto label_1e68c4;
        case 0x1e68c8u: goto label_1e68c8;
        case 0x1e68ccu: goto label_1e68cc;
        case 0x1e68d0u: goto label_1e68d0;
        case 0x1e68d4u: goto label_1e68d4;
        case 0x1e68d8u: goto label_1e68d8;
        case 0x1e68dcu: goto label_1e68dc;
        case 0x1e68e0u: goto label_1e68e0;
        case 0x1e68e4u: goto label_1e68e4;
        case 0x1e68e8u: goto label_1e68e8;
        case 0x1e68ecu: goto label_1e68ec;
        case 0x1e68f0u: goto label_1e68f0;
        case 0x1e68f4u: goto label_1e68f4;
        case 0x1e68f8u: goto label_1e68f8;
        case 0x1e68fcu: goto label_1e68fc;
        case 0x1e6900u: goto label_1e6900;
        case 0x1e6904u: goto label_1e6904;
        case 0x1e6908u: goto label_1e6908;
        case 0x1e690cu: goto label_1e690c;
        case 0x1e6910u: goto label_1e6910;
        case 0x1e6914u: goto label_1e6914;
        case 0x1e6918u: goto label_1e6918;
        case 0x1e691cu: goto label_1e691c;
        case 0x1e6920u: goto label_1e6920;
        case 0x1e6924u: goto label_1e6924;
        case 0x1e6928u: goto label_1e6928;
        case 0x1e692cu: goto label_1e692c;
        case 0x1e6930u: goto label_1e6930;
        case 0x1e6934u: goto label_1e6934;
        default: return;
    }

label_1e6168:
    // 0x1e6168: 0xea082a  slt         $at, $a3, $t2
    ctx->pc = 0x1e6168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1e616c:
    // 0x1e616c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1e6170:
    if (ctx->pc == 0x1E6170u) {
        ctx->pc = 0x1E6174u;
        goto label_1e6174;
    }
    ctx->pc = 0x1E616Cu;
    {
        const bool branch_taken_0x1e616c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e616c) {
            ctx->pc = 0x1E61B0u;
            goto label_1e61b0;
        }
    }
    ctx->pc = 0x1E6174u;
label_1e6174:
    // 0x1e6174: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1e6174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1e6178:
    // 0x1e6178: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1e617c:
    // 0x1e617c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6180:
    // 0x1e6180: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e6184:
    // 0x1e6184: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1e6184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6188:
    // 0x1e6188: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e618c:
    if (ctx->pc == 0x1E618Cu) {
        ctx->pc = 0x1E6190u;
        goto label_1e6190;
    }
    ctx->pc = 0x1E6188u;
    {
        const bool branch_taken_0x1e6188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6188) {
            ctx->pc = 0x1E61A4u;
            goto label_1e61a4;
        }
    }
    ctx->pc = 0x1E6190u;
label_1e6190:
    // 0x1e6190: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1e6194:
    if (ctx->pc == 0x1E6194u) {
        ctx->pc = 0x1E6198u;
        goto label_1e6198;
    }
    ctx->pc = 0x1E6190u;
    {
        const bool branch_taken_0x1e6190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6190) {
            ctx->pc = 0x1E61A4u;
            goto label_1e61a4;
        }
    }
    ctx->pc = 0x1E6198u;
label_1e6198:
    // 0x1e6198: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
label_1e619c:
    if (ctx->pc == 0x1E619Cu) {
        ctx->pc = 0x1E61A0u;
        goto label_1e61a0;
    }
    ctx->pc = 0x1E6198u;
    {
        const bool branch_taken_0x1e6198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6198) {
            ctx->pc = 0x1E61A4u;
            goto label_1e61a4;
        }
    }
    ctx->pc = 0x1E61A0u;
label_1e61a0:
    // 0x1e61a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e61a4:
    // 0x1e61a4: 0x0  nop
    ctx->pc = 0x1e61a4u;
    // NOP
label_1e61a8:
    // 0x1e61a8: 0x1124ffe8  beq         $t1, $a0, . + 4 + (-0x18 << 2)
label_1e61ac:
    if (ctx->pc == 0x1E61ACu) {
        ctx->pc = 0x1E61B0u;
        goto label_1e61b0;
    }
    ctx->pc = 0x1E61A8u;
    {
        const bool branch_taken_0x1e61a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e61a8) {
            ctx->pc = 0x1E614Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e614c; return; }
        }
    }
    ctx->pc = 0x1E61B0u;
label_1e61b0:
    // 0x1e61b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e61b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e61b4:
    // 0x1e61b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e61b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e61b8:
    // 0x1e61b8: 0xc079944  jal         func_1E6510
label_1e61bc:
    if (ctx->pc == 0x1E61BCu) {
        ctx->pc = 0x1E61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61B8u;
        // 0x1e61bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61C0u;
        goto label_1e61c0;
    }
    ctx->pc = 0x1E61B8u;
    SET_GPR_U32(ctx, 31, 0x1E61C0u);
    ctx->pc = 0x1E61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61B8u;
    // 0x1e61bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6510u;
    goto label_1e6510;
    ctx->pc = 0x1E61C0u;
label_1e61c0:
    // 0x1e61c0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1e61c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e61c4:
    // 0x1e61c4: 0x0  nop
    ctx->pc = 0x1e61c4u;
    // NOP
label_1e61c8:
    // 0x1e61c8: 0xc0799a0  jal         func_1E6680
label_1e61cc:
    if (ctx->pc == 0x1E61CCu) {
        ctx->pc = 0x1E61D0u;
        goto label_1e61d0;
    }
    ctx->pc = 0x1E61C8u;
    SET_GPR_U32(ctx, 31, 0x1E61D0u);
    ctx->pc = 0x1E6680u;
    goto label_1e6680;
    ctx->pc = 0x1E61D0u;
label_1e61d0:
    // 0x1e61d0: 0x1000fe77  b           . + 4 + (-0x189 << 2)
label_1e61d4:
    if (ctx->pc == 0x1E61D4u) {
        ctx->pc = 0x1E61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61D0u;
        // 0x1e61d4: 0x8f828e94  lw          $v0, -0x716C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61D8u;
        goto label_1e61d8;
    }
    ctx->pc = 0x1E61D0u;
    {
        const bool branch_taken_0x1e61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61D0u;
        // 0x1e61d4: 0x8f828e94  lw          $v0, -0x716C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61d0) {
            ctx->pc = 0x1E5BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e5bb0; return; }
        }
    }
    ctx->pc = 0x1E61D8u;
label_1e61d8:
    // 0x1e61d8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1e61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1e61dc:
    // 0x1e61dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e61dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e61e0:
    // 0x1e61e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e61e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e61e4:
    // 0x1e61e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e61e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e61e8:
    // 0x1e61e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e61e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e61ec:
    // 0x1e61ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e61ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e61f0:
    // 0x1e61f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e61f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e61f4:
    // 0x1e61f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e61f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e61f8:
    // 0x1e61f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e61f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e61fc:
    // 0x1e61fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e61fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6200:
    // 0x1e6200: 0x3e00008  jr          $ra
label_1e6204:
    if (ctx->pc == 0x1E6204u) {
        ctx->pc = 0x1E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6200u;
        // 0x1e6204: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6208u;
        goto label_1e6208;
    }
    ctx->pc = 0x1E6200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6200u;
        // 0x1e6204: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6208u;
label_1e6208:
    // 0x1e6208: 0x0  nop
    ctx->pc = 0x1e6208u;
    // NOP
label_1e620c:
    // 0x1e620c: 0x0  nop
    ctx->pc = 0x1e620cu;
    // NOP
label_1e6210:
    // 0x1e6210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e6214:
    // 0x1e6214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e6214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e6218:
    // 0x1e6218: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e621c:
    // 0x1e621c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e6220:
    // 0x1e6220: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e6220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e6224:
    // 0x1e6224: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e6224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6228:
    // 0x1e6228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e6228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e622c:
    // 0x1e622c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e622cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6230:
    // 0x1e6230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e6234:
    // 0x1e6234: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e6234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e6238:
    // 0x1e6238: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e623c:
    // 0x1e623c: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_1e6240:
    if (ctx->pc == 0x1E6240u) {
        ctx->pc = 0x1E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E623Cu;
        // 0x1e6240: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6244u;
        goto label_1e6244;
    }
    ctx->pc = 0x1E623Cu;
    {
        const bool branch_taken_0x1e623c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E623Cu;
        // 0x1e6240: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e623c) {
            ctx->pc = 0x1E6298u;
            goto label_1e6298;
        }
    }
    ctx->pc = 0x1E6244u;
label_1e6244:
    // 0x1e6244: 0xc0799a0  jal         func_1E6680
label_1e6248:
    if (ctx->pc == 0x1E6248u) {
        ctx->pc = 0x1E624Cu;
        goto label_1e624c;
    }
    ctx->pc = 0x1E6244u;
    SET_GPR_U32(ctx, 31, 0x1E624Cu);
    ctx->pc = 0x1E6680u;
    goto label_1e6680;
    ctx->pc = 0x1E624Cu;
label_1e624c:
    // 0x1e624c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6250:
    // 0x1e6250: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_1e6254:
    if (ctx->pc == 0x1E6254u) {
        ctx->pc = 0x1E6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6250u;
        // 0x1e6254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6258u;
        goto label_1e6258;
    }
    ctx->pc = 0x1E6250u;
    {
        const bool branch_taken_0x1e6250 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6250u;
        // 0x1e6254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6250) {
            ctx->pc = 0x1E6284u;
            goto label_1e6284;
        }
    }
    ctx->pc = 0x1E6258u;
label_1e6258:
    // 0x1e6258: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e6258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e625c:
    // 0x1e625c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1e6260:
    if (ctx->pc == 0x1E6260u) {
        ctx->pc = 0x1E6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E625Cu;
        // 0x1e6260: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6264u;
        goto label_1e6264;
    }
    ctx->pc = 0x1E625Cu;
    {
        const bool branch_taken_0x1e625c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E625Cu;
        // 0x1e6260: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e625c) {
            ctx->pc = 0x1E6270u;
            goto label_1e6270;
        }
    }
    ctx->pc = 0x1E6264u;
label_1e6264:
    // 0x1e6264: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e6268:
    // 0x1e6268: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1e626c:
    if (ctx->pc == 0x1E626Cu) {
        ctx->pc = 0x1E6270u;
        goto label_1e6270;
    }
    ctx->pc = 0x1E6268u;
    {
        const bool branch_taken_0x1e6268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6268) {
            ctx->pc = 0x1E6280u;
            goto label_1e6280;
        }
    }
    ctx->pc = 0x1E6270u;
label_1e6270:
    // 0x1e6270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6274:
    // 0x1e6274: 0xaf838e40  sw          $v1, -0x71C0($gp)
    ctx->pc = 0x1e6274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
label_1e6278:
    // 0x1e6278: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e627c:
    if (ctx->pc == 0x1E627Cu) {
        ctx->pc = 0x1E627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6278u;
        // 0x1e627c: 0xaf828e3c  sw          $v0, -0x71C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6280u;
        goto label_1e6280;
    }
    ctx->pc = 0x1E6278u;
    {
        const bool branch_taken_0x1e6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6278u;
        // 0x1e627c: 0xaf828e3c  sw          $v0, -0x71C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6278) {
            ctx->pc = 0x1E628Cu;
            goto label_1e628c;
        }
    }
    ctx->pc = 0x1E6280u;
label_1e6280:
    // 0x1e6280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6284:
    // 0x1e6284: 0xaf928e3c  sw          $s2, -0x71C4($gp)
    ctx->pc = 0x1e6284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 18));
label_1e6288:
    // 0x1e6288: 0xaf828e40  sw          $v0, -0x71C0($gp)
    ctx->pc = 0x1e6288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1e628c:
    // 0x1e628c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6290:
    // 0x1e6290: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e6294:
    if (ctx->pc == 0x1E6294u) {
        ctx->pc = 0x1E6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6290u;
        // 0x1e6294: 0xaf828de4  sw          $v0, -0x721C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6298u;
        goto label_1e6298;
    }
    ctx->pc = 0x1E6290u;
    {
        const bool branch_taken_0x1e6290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6290u;
        // 0x1e6294: 0xaf828de4  sw          $v0, -0x721C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6290) {
            ctx->pc = 0x1E6320u;
            goto label_1e6320;
        }
    }
    ctx->pc = 0x1E6298u;
label_1e6298:
    // 0x1e6298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e629c:
    // 0x1e629c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
label_1e62a0:
    if (ctx->pc == 0x1E62A0u) {
        ctx->pc = 0x1E62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E629Cu;
        // 0x1e62a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62A4u;
        goto label_1e62a4;
    }
    ctx->pc = 0x1E629Cu;
    {
        const bool branch_taken_0x1e629c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E629Cu;
        // 0x1e62a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e629c) {
            ctx->pc = 0x1E62D0u;
            goto label_1e62d0;
        }
    }
    ctx->pc = 0x1E62A4u;
label_1e62a4:
    // 0x1e62a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e62a8:
    // 0x1e62a8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1e62ac:
    if (ctx->pc == 0x1E62ACu) {
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62B0u;
        goto label_1e62b0;
    }
    ctx->pc = 0x1E62A8u;
    {
        const bool branch_taken_0x1e62a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62a8) {
            ctx->pc = 0x1E62BCu;
            goto label_1e62bc;
        }
    }
    ctx->pc = 0x1E62B0u;
label_1e62b0:
    // 0x1e62b0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e62b4:
    // 0x1e62b4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1e62b8:
    if (ctx->pc == 0x1E62B8u) {
        ctx->pc = 0x1E62BCu;
        goto label_1e62bc;
    }
    ctx->pc = 0x1E62B4u;
    {
        const bool branch_taken_0x1e62b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e62b4) {
            ctx->pc = 0x1E62CCu;
            goto label_1e62cc;
        }
    }
    ctx->pc = 0x1E62BCu;
label_1e62bc:
    // 0x1e62bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e62c0:
    // 0x1e62c0: 0xaf838e40  sw          $v1, -0x71C0($gp)
    ctx->pc = 0x1e62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
label_1e62c4:
    // 0x1e62c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e62c8:
    if (ctx->pc == 0x1E62C8u) {
        ctx->pc = 0x1E62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62C4u;
        // 0x1e62c8: 0xaf828e3c  sw          $v0, -0x71C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62CCu;
        goto label_1e62cc;
    }
    ctx->pc = 0x1E62C4u;
    {
        const bool branch_taken_0x1e62c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62C4u;
        // 0x1e62c8: 0xaf828e3c  sw          $v0, -0x71C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62c4) {
            ctx->pc = 0x1E62D8u;
            goto label_1e62d8;
        }
    }
    ctx->pc = 0x1E62CCu;
label_1e62cc:
    // 0x1e62cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62d0:
    // 0x1e62d0: 0xaf928e3c  sw          $s2, -0x71C4($gp)
    ctx->pc = 0x1e62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 18));
label_1e62d4:
    // 0x1e62d4: 0xaf828e40  sw          $v0, -0x71C0($gp)
    ctx->pc = 0x1e62d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
label_1e62d8:
    // 0x1e62d8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1e62dc:
    // 0x1e62dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e62dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e62e0:
    // 0x1e62e0: 0xaf828de0  sw          $v0, -0x7220($gp)
    ctx->pc = 0x1e62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
label_1e62e4:
    // 0x1e62e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e62e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e62e8:
    // 0x1e62e8: 0xc079ef0  jal         func_1E7BC0
label_1e62ec:
    if (ctx->pc == 0x1E62ECu) {
        ctx->pc = 0x1E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62E8u;
        // 0x1e62ec: 0xaf808dd0  sw          $zero, -0x7230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62F0u;
        goto label_1e62f0;
    }
    ctx->pc = 0x1E62E8u;
    SET_GPR_U32(ctx, 31, 0x1E62F0u);
    ctx->pc = 0x1E62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62E8u;
    // 0x1e62ec: 0xaf808dd0  sw          $zero, -0x7230($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7BC0u;
    { ctx->pc = 0x1e7bc0; return; }
    ctx->pc = 0x1E62F0u;
label_1e62f0:
    // 0x1e62f0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e62f4:
    // 0x1e62f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e62f8:
    // 0x1e62f8: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x1e62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1e62fc:
    // 0x1e62fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6300:
    // 0x1e6300: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6304:
    // 0x1e6304: 0xc07a00c  jal         func_1E8030
label_1e6308:
    if (ctx->pc == 0x1E6308u) {
        ctx->pc = 0x1E6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6304u;
        // 0x1e6308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E630Cu;
        goto label_1e630c;
    }
    ctx->pc = 0x1E6304u;
    SET_GPR_U32(ctx, 31, 0x1E630Cu);
    ctx->pc = 0x1E6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6304u;
    // 0x1e6308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8030u;
    { ctx->pc = 0x1e8030; return; }
    ctx->pc = 0x1E630Cu;
label_1e630c:
    // 0x1e630c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6310:
    // 0x1e6310: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e6314:
    // 0x1e6314: 0xaf838e2c  sw          $v1, -0x71D4($gp)
    ctx->pc = 0x1e6314u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 3));
label_1e6318:
    // 0x1e6318: 0xc078078  jal         func_1E01E0
label_1e631c:
    if (ctx->pc == 0x1E631Cu) {
        ctx->pc = 0x1E631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6318u;
        // 0x1e631c: 0xaf828e20  sw          $v0, -0x71E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6320u;
        goto label_1e6320;
    }
    ctx->pc = 0x1E6318u;
    SET_GPR_U32(ctx, 31, 0x1E6320u);
    ctx->pc = 0x1E631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6318u;
    // 0x1e631c: 0xaf828e20  sw          $v0, -0x71E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1E6320u;
label_1e6320:
    // 0x1e6320: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6324:
    // 0x1e6324: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e6324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e6328:
    // 0x1e6328: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1e632c:
    if (ctx->pc == 0x1E632Cu) {
        ctx->pc = 0x1E632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6328u;
        // 0x1e632c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6330u;
        goto label_1e6330;
    }
    ctx->pc = 0x1E6328u;
    {
        const bool branch_taken_0x1e6328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6328u;
        // 0x1e632c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6328) {
            ctx->pc = 0x1E6338u;
            goto label_1e6338;
        }
    }
    ctx->pc = 0x1E6330u;
label_1e6330:
    // 0x1e6330: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e6334:
    if (ctx->pc == 0x1E6334u) {
        ctx->pc = 0x1E6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6330u;
        // 0x1e6334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6338u;
        goto label_1e6338;
    }
    ctx->pc = 0x1E6330u;
    {
        const bool branch_taken_0x1e6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6330u;
        // 0x1e6334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6330) {
            ctx->pc = 0x1E633Cu;
            goto label_1e633c;
        }
    }
    ctx->pc = 0x1E6338u;
label_1e6338:
    // 0x1e6338: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1e6338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e633c:
    // 0x1e633c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e633cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e6340:
    // 0x1e6340: 0x0  nop
    ctx->pc = 0x1e6340u;
    // NOP
label_1e6344:
    // 0x1e6344: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e6344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e6348:
    // 0x1e6348: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1e6348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1e634c:
    // 0x1e634c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e634cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6350:
    // 0x1e6350: 0x0  nop
    ctx->pc = 0x1e6350u;
    // NOP
label_1e6354:
    // 0x1e6354: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1e6354u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1e6358:
    // 0x1e6358: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1e6358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1e635c:
    // 0x1e635c: 0x0  nop
    ctx->pc = 0x1e635cu;
    // NOP
label_1e6360:
    // 0x1e6360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6364:
    // 0x1e6364: 0xc07b16c  jal         func_1EC5B0
label_1e6368:
    if (ctx->pc == 0x1E6368u) {
        ctx->pc = 0x1E6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6364u;
        // 0x1e6368: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E636Cu;
        goto label_1e636c;
    }
    ctx->pc = 0x1E6364u;
    SET_GPR_U32(ctx, 31, 0x1E636Cu);
    ctx->pc = 0x1E6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6364u;
    // 0x1e6368: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC5B0u;
    { ctx->pc = 0x1ec5b0; return; }
    ctx->pc = 0x1E636Cu;
label_1e636c:
    // 0x1e636c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e636cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e6370:
    // 0x1e6370: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
label_1e6374:
    // 0x1e6374: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e6374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1e6378:
    // 0x1e6378: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e637c:
    // 0x1e637c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e637cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e6380:
    // 0x1e6380: 0x2472012a  addiu       $s2, $v1, 0x12A
    ctx->pc = 0x1e6380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 298));
label_1e6384:
    // 0x1e6384: 0xc07b16c  jal         func_1EC5B0
label_1e6388:
    if (ctx->pc == 0x1E6388u) {
        ctx->pc = 0x1E6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6384u;
        // 0x1e6388: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E638Cu;
        goto label_1e638c;
    }
    ctx->pc = 0x1E6384u;
    SET_GPR_U32(ctx, 31, 0x1E638Cu);
    ctx->pc = 0x1E6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6384u;
    // 0x1e6388: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC5B0u;
    { ctx->pc = 0x1ec5b0; return; }
    ctx->pc = 0x1E638Cu;
label_1e638c:
    // 0x1e638c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e638cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e6390:
    // 0x1e6390: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1e6390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_1e6394:
    // 0x1e6394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6398:
    // 0x1e6398: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e6398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e639c:
    // 0x1e639c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e639cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e63a0:
    // 0x1e63a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1e63a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1e63a4:
    // 0x1e63a4: 0xc07b16c  jal         func_1EC5B0
label_1e63a8:
    if (ctx->pc == 0x1E63A8u) {
        ctx->pc = 0x1E63A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63A4u;
        // 0x1e63a8: 0x24540086  addiu       $s4, $v0, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63ACu;
        goto label_1e63ac;
    }
    ctx->pc = 0x1E63A4u;
    SET_GPR_U32(ctx, 31, 0x1E63ACu);
    ctx->pc = 0x1E63A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63A4u;
    // 0x1e63a8: 0x24540086  addiu       $s4, $v0, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC5B0u;
    { ctx->pc = 0x1ec5b0; return; }
    ctx->pc = 0x1E63ACu;
label_1e63ac:
    // 0x1e63ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e63acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e63b0:
    // 0x1e63b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e63b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e63b4:
    // 0x1e63b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e63b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e63b8:
    // 0x1e63b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e63b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e63bc:
    // 0x1e63bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e63bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1e63c0:
    // 0x1e63c0: 0xc079cb8  jal         func_1E72E0
label_1e63c4:
    if (ctx->pc == 0x1E63C4u) {
        ctx->pc = 0x1E63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63C0u;
        // 0x1e63c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E63C8u;
        goto label_1e63c8;
    }
    ctx->pc = 0x1E63C0u;
    SET_GPR_U32(ctx, 31, 0x1E63C8u);
    ctx->pc = 0x1E63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63C0u;
    // 0x1e63c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72E0u;
    { ctx->pc = 0x1e72e0; return; }
    ctx->pc = 0x1E63C8u;
label_1e63c8:
    // 0x1e63c8: 0xc0799a0  jal         func_1E6680
label_1e63cc:
    if (ctx->pc == 0x1E63CCu) {
        ctx->pc = 0x1E63D0u;
        goto label_1e63d0;
    }
    ctx->pc = 0x1E63C8u;
    SET_GPR_U32(ctx, 31, 0x1E63D0u);
    ctx->pc = 0x1E6680u;
    goto label_1e6680;
    ctx->pc = 0x1E63D0u;
label_1e63d0:
    // 0x1e63d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e63d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e63d4:
    // 0x1e63d4: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x1e63d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
label_1e63d8:
    // 0x1e63d8: 0x1420ffd2  bnez        $at, . + 4 + (-0x2E << 2)
label_1e63dc:
    if (ctx->pc == 0x1E63DCu) {
        ctx->pc = 0x1E63E0u;
        goto label_1e63e0;
    }
    ctx->pc = 0x1E63D8u;
    {
        const bool branch_taken_0x1e63d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e63d8) {
            ctx->pc = 0x1E6324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6324;
        }
    }
    ctx->pc = 0x1E63E0u;
label_1e63e0:
    // 0x1e63e0: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
label_1e63e4:
    if (ctx->pc == 0x1E63E4u) {
        ctx->pc = 0x1E63E8u;
        goto label_1e63e8;
    }
    ctx->pc = 0x1E63E0u;
    {
        const bool branch_taken_0x1e63e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e63e0) {
            ctx->pc = 0x1E64E0u;
            goto label_1e64e0;
        }
    }
    ctx->pc = 0x1E63E8u;
label_1e63e8:
    // 0x1e63e8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e63ec:
    // 0x1e63ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e63ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e63f0:
    // 0x1e63f0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e63f4:
    // 0x1e63f4: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x1e63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1e63f8:
    // 0x1e63f8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e63fc:
    // 0x1e63fc: 0xaf918de0  sw          $s1, -0x7220($gp)
    ctx->pc = 0x1e63fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 17));
label_1e6400:
    // 0x1e6400: 0xaf858dd0  sw          $a1, -0x7230($gp)
    ctx->pc = 0x1e6400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 5));
label_1e6404:
    // 0x1e6404: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e6404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e6408:
    // 0x1e6408: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1e6408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e640c:
    // 0x1e640c: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_1e6410:
    // 0x1e6410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6414:
    // 0x1e6414: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1e6414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1e6418:
    // 0x1e6418: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e641c:
    // 0x1e641c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6420:
    // 0x1e6420: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e6420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6424:
    // 0x1e6424: 0xc079ef0  jal         func_1E7BC0
label_1e6428:
    if (ctx->pc == 0x1E6428u) {
        ctx->pc = 0x1E6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6424u;
        // 0x1e6428: 0xaf828dcc  sw          $v0, -0x7234($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E642Cu;
        goto label_1e642c;
    }
    ctx->pc = 0x1E6424u;
    SET_GPR_U32(ctx, 31, 0x1E642Cu);
    ctx->pc = 0x1E6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6424u;
    // 0x1e6428: 0xaf828dcc  sw          $v0, -0x7234($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7BC0u;
    { ctx->pc = 0x1e7bc0; return; }
    ctx->pc = 0x1E642Cu;
label_1e642c:
    // 0x1e642c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6430:
    // 0x1e6430: 0xc07a00c  jal         func_1E8030
label_1e6434:
    if (ctx->pc == 0x1E6434u) {
        ctx->pc = 0x1E6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6430u;
        // 0x1e6434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6438u;
        goto label_1e6438;
    }
    ctx->pc = 0x1E6430u;
    SET_GPR_U32(ctx, 31, 0x1E6438u);
    ctx->pc = 0x1E6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6430u;
    // 0x1e6434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8030u;
    { ctx->pc = 0x1e8030; return; }
    ctx->pc = 0x1E6438u;
label_1e6438:
    // 0x1e6438: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e6438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e643c:
    // 0x1e643c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e6440:
    // 0x1e6440: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_1e6444:
    // 0x1e6444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6448:
    // 0x1e6448: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1e6448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e644c:
    // 0x1e644c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e6450:
    if (ctx->pc == 0x1E6450u) {
        ctx->pc = 0x1E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E644Cu;
        // 0x1e6450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6454u;
        goto label_1e6454;
    }
    ctx->pc = 0x1E644Cu;
    {
        const bool branch_taken_0x1e644c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E644Cu;
        // 0x1e6450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e644c) {
            ctx->pc = 0x1E646Cu;
            goto label_1e646c;
        }
    }
    ctx->pc = 0x1E6454u;
label_1e6454:
    // 0x1e6454: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1e6458:
    if (ctx->pc == 0x1E6458u) {
        ctx->pc = 0x1E645Cu;
        goto label_1e645c;
    }
    ctx->pc = 0x1E6454u;
    {
        const bool branch_taken_0x1e6454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6454) {
            ctx->pc = 0x1E646Cu;
            goto label_1e646c;
        }
    }
    ctx->pc = 0x1E645Cu;
label_1e645c:
    // 0x1e645c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6460:
    // 0x1e6460: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1e6464:
    if (ctx->pc == 0x1E6464u) {
        ctx->pc = 0x1E6468u;
        goto label_1e6468;
    }
    ctx->pc = 0x1E6460u;
    {
        const bool branch_taken_0x1e6460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6460) {
            ctx->pc = 0x1E646Cu;
            goto label_1e646c;
        }
    }
    ctx->pc = 0x1E6468u;
label_1e6468:
    // 0x1e6468: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1e6468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e646c:
    // 0x1e646c: 0x8f828e78  lw          $v0, -0x7188($gp)
    ctx->pc = 0x1e646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938232)));
label_1e6470:
    // 0x1e6470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6474:
    // 0x1e6474: 0xaf838e20  sw          $v1, -0x71E0($gp)
    ctx->pc = 0x1e6474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 3));
label_1e6478:
    // 0x1e6478: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e647c:
    if (ctx->pc == 0x1E647Cu) {
        ctx->pc = 0x1E647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6478u;
        // 0x1e647c: 0xaf848e2c  sw          $a0, -0x71D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6480u;
        goto label_1e6480;
    }
    ctx->pc = 0x1E6478u;
    {
        const bool branch_taken_0x1e6478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6478u;
        // 0x1e647c: 0xaf848e2c  sw          $a0, -0x71D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6478) {
            ctx->pc = 0x1E64ACu;
            goto label_1e64ac;
        }
    }
    ctx->pc = 0x1E6480u;
label_1e6480:
    // 0x1e6480: 0x8f828e7c  lw          $v0, -0x7184($gp)
    ctx->pc = 0x1e6480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
label_1e6484:
    // 0x1e6484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e6488:
    if (ctx->pc == 0x1E6488u) {
        ctx->pc = 0x1E648Cu;
        goto label_1e648c;
    }
    ctx->pc = 0x1E6484u;
    {
        const bool branch_taken_0x1e6484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6484) {
            ctx->pc = 0x1E649Cu;
            goto label_1e649c;
        }
    }
    ctx->pc = 0x1E648Cu;
label_1e648c:
    // 0x1e648c: 0xc078050  jal         func_1E0140
label_1e6490:
    if (ctx->pc == 0x1E6490u) {
        ctx->pc = 0x1E6494u;
        goto label_1e6494;
    }
    ctx->pc = 0x1E648Cu;
    SET_GPR_U32(ctx, 31, 0x1E6494u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E6494u;
label_1e6494:
    // 0x1e6494: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e6498:
    if (ctx->pc == 0x1E6498u) {
        ctx->pc = 0x1E649Cu;
        goto label_1e649c;
    }
    ctx->pc = 0x1E6494u;
    {
        const bool branch_taken_0x1e6494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6494) {
            ctx->pc = 0x1E64D0u;
            goto label_1e64d0;
        }
    }
    ctx->pc = 0x1E649Cu;
label_1e649c:
    // 0x1e649c: 0xc078050  jal         func_1E0140
label_1e64a0:
    if (ctx->pc == 0x1E64A0u) {
        ctx->pc = 0x1E64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E649Cu;
        // 0x1e64a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64A4u;
        goto label_1e64a4;
    }
    ctx->pc = 0x1E649Cu;
    SET_GPR_U32(ctx, 31, 0x1E64A4u);
    ctx->pc = 0x1E64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E649Cu;
    // 0x1e64a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E64A4u;
label_1e64a4:
    // 0x1e64a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e64a8:
    if (ctx->pc == 0x1E64A8u) {
        ctx->pc = 0x1E64ACu;
        goto label_1e64ac;
    }
    ctx->pc = 0x1E64A4u;
    {
        const bool branch_taken_0x1e64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64a4) {
            ctx->pc = 0x1E64D0u;
            goto label_1e64d0;
        }
    }
    ctx->pc = 0x1E64ACu;
label_1e64ac:
    // 0x1e64ac: 0x8f828e7c  lw          $v0, -0x7184($gp)
    ctx->pc = 0x1e64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
label_1e64b0:
    // 0x1e64b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e64b4:
    if (ctx->pc == 0x1E64B4u) {
        ctx->pc = 0x1E64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64B0u;
        // 0x1e64b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64B8u;
        goto label_1e64b8;
    }
    ctx->pc = 0x1E64B0u;
    {
        const bool branch_taken_0x1e64b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64B0u;
        // 0x1e64b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64b0) {
            ctx->pc = 0x1E64C8u;
            goto label_1e64c8;
        }
    }
    ctx->pc = 0x1E64B8u;
label_1e64b8:
    // 0x1e64b8: 0xc078050  jal         func_1E0140
label_1e64bc:
    if (ctx->pc == 0x1E64BCu) {
        ctx->pc = 0x1E64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64B8u;
        // 0x1e64bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64C0u;
        goto label_1e64c0;
    }
    ctx->pc = 0x1E64B8u;
    SET_GPR_U32(ctx, 31, 0x1E64C0u);
    ctx->pc = 0x1E64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64B8u;
    // 0x1e64bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E64C0u;
label_1e64c0:
    // 0x1e64c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e64c4:
    if (ctx->pc == 0x1E64C4u) {
        ctx->pc = 0x1E64C8u;
        goto label_1e64c8;
    }
    ctx->pc = 0x1E64C0u;
    {
        const bool branch_taken_0x1e64c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64c0) {
            ctx->pc = 0x1E64D0u;
            goto label_1e64d0;
        }
    }
    ctx->pc = 0x1E64C8u;
label_1e64c8:
    // 0x1e64c8: 0xc078050  jal         func_1E0140
label_1e64cc:
    if (ctx->pc == 0x1E64CCu) {
        ctx->pc = 0x1E64D0u;
        goto label_1e64d0;
    }
    ctx->pc = 0x1E64C8u;
    SET_GPR_U32(ctx, 31, 0x1E64D0u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E64D0u;
label_1e64d0:
    // 0x1e64d0: 0xc078070  jal         func_1E01C0
label_1e64d4:
    if (ctx->pc == 0x1E64D4u) {
        ctx->pc = 0x1E64D8u;
        goto label_1e64d8;
    }
    ctx->pc = 0x1E64D0u;
    SET_GPR_U32(ctx, 31, 0x1E64D8u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1E64D8u;
label_1e64d8:
    // 0x1e64d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e64dc:
    if (ctx->pc == 0x1E64DCu) {
        ctx->pc = 0x1E64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64D8u;
        // 0x1e64dc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64E0u;
        goto label_1e64e0;
    }
    ctx->pc = 0x1E64D8u;
    {
        const bool branch_taken_0x1e64d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64D8u;
        // 0x1e64dc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64d8) {
            ctx->pc = 0x1E64E8u;
            goto label_1e64e8;
        }
    }
    ctx->pc = 0x1E64E0u;
label_1e64e0:
    // 0x1e64e0: 0xaf808de4  sw          $zero, -0x721C($gp)
    ctx->pc = 0x1e64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 0));
label_1e64e4:
    // 0x1e64e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e64e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e64e8:
    // 0x1e64e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e64e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e64ec:
    // 0x1e64ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e64ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e64f0:
    // 0x1e64f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e64f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e64f4:
    // 0x1e64f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e64f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e64f8:
    // 0x1e64f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e64f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e64fc:
    // 0x1e64fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e64fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6500:
    // 0x1e6500: 0x3e00008  jr          $ra
label_1e6504:
    if (ctx->pc == 0x1E6504u) {
        ctx->pc = 0x1E6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6500u;
        // 0x1e6504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6508u;
        goto label_1e6508;
    }
    ctx->pc = 0x1E6500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6500u;
        // 0x1e6504: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6508u;
label_1e6508:
    // 0x1e6508: 0x0  nop
    ctx->pc = 0x1e6508u;
    // NOP
label_1e650c:
    // 0x1e650c: 0x0  nop
    ctx->pc = 0x1e650cu;
    // NOP
label_1e6510:
    // 0x1e6510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e6514:
    // 0x1e6514: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1e6518:
    // 0x1e6518: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e651c:
    // 0x1e651c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e6520:
    // 0x1e6520: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e6520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e6524:
    // 0x1e6524: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e6524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6528:
    // 0x1e6528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e652c:
    // 0x1e652c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e652cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6530:
    // 0x1e6530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e6534:
    // 0x1e6534: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e6534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e6538:
    // 0x1e6538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e653c:
    // 0x1e653c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e653cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e6540:
    // 0x1e6540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6544:
    // 0x1e6544: 0x24110168  addiu       $s1, $zero, 0x168
    ctx->pc = 0x1e6544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e6548:
    // 0x1e6548: 0xaf828de0  sw          $v0, -0x7220($gp)
    ctx->pc = 0x1e6548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
label_1e654c:
    // 0x1e654c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e654cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6550:
    // 0x1e6550: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1e6554:
    // 0x1e6554: 0xaf908dd0  sw          $s0, -0x7230($gp)
    ctx->pc = 0x1e6554u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 16));
label_1e6558:
    // 0x1e6558: 0xaf828dcc  sw          $v0, -0x7234($gp)
    ctx->pc = 0x1e6558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1e655c:
    // 0x1e655c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_1e6560:
    if (ctx->pc == 0x1E6560u) {
        ctx->pc = 0x1E6564u;
        goto label_1e6564;
    }
    ctx->pc = 0x1E655Cu;
    {
        const bool branch_taken_0x1e655c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e655c) {
            ctx->pc = 0x1E659Cu;
            goto label_1e659c;
        }
    }
    ctx->pc = 0x1E6564u;
label_1e6564:
    // 0x1e6564: 0x8f838e9c  lw          $v1, -0x7164($gp)
    ctx->pc = 0x1e6564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e6568:
    // 0x1e6568: 0x2512818  mult        $a1, $s2, $s1
    ctx->pc = 0x1e6568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1e656c:
    // 0x1e656c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e6570:
    // 0x1e6570: 0x2406012a  addiu       $a2, $zero, 0x12A
    ctx->pc = 0x1e6570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
label_1e6574:
    // 0x1e6574: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x1e6574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1e6578:
    // 0x1e6578: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e6578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e657c:
    // 0x1e657c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6580:
    // 0x1e6580: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e6580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e6584:
    // 0x1e6584: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1e6584u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e6588:
    // 0x1e6588: 0x0  nop
    ctx->pc = 0x1e6588u;
    // NOP
label_1e658c:
    // 0x1e658c: 0x0  nop
    ctx->pc = 0x1e658cu;
    // NOP
label_1e6590:
    // 0x1e6590: 0x2812  mflo        $a1
    ctx->pc = 0x1e6590u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1e6594:
    // 0x1e6594: 0xc079cb8  jal         func_1E72E0
label_1e6598:
    if (ctx->pc == 0x1E6598u) {
        ctx->pc = 0x1E6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6594u;
        // 0x1e6598: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E659Cu;
        goto label_1e659c;
    }
    ctx->pc = 0x1E6594u;
    SET_GPR_U32(ctx, 31, 0x1E659Cu);
    ctx->pc = 0x1E6598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6594u;
    // 0x1e6598: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72E0u;
    { ctx->pc = 0x1e72e0; return; }
    ctx->pc = 0x1E659Cu;
label_1e659c:
    // 0x1e659c: 0x0  nop
    ctx->pc = 0x1e659cu;
    // NOP
label_1e65a0:
    // 0x1e65a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e65a4:
    // 0x1e65a4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1e65a8:
    if (ctx->pc == 0x1E65A8u) {
        ctx->pc = 0x1E65ACu;
        goto label_1e65ac;
    }
    ctx->pc = 0x1E65A4u;
    {
        const bool branch_taken_0x1e65a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e65a4) {
            ctx->pc = 0x1E65B4u;
            goto label_1e65b4;
        }
    }
    ctx->pc = 0x1E65ACu;
label_1e65ac:
    // 0x1e65ac: 0xc0799a0  jal         func_1E6680
label_1e65b0:
    if (ctx->pc == 0x1E65B0u) {
        ctx->pc = 0x1E65B4u;
        goto label_1e65b4;
    }
    ctx->pc = 0x1E65ACu;
    SET_GPR_U32(ctx, 31, 0x1E65B4u);
    ctx->pc = 0x1E6680u;
    goto label_1e6680;
    ctx->pc = 0x1E65B4u;
label_1e65b4:
    // 0x1e65b4: 0x0  nop
    ctx->pc = 0x1e65b4u;
    // NOP
label_1e65b8:
    // 0x1e65b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e65b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e65bc:
    // 0x1e65bc: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x1e65bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_1e65c0:
    // 0x1e65c0: 0x1420ffe6  bnez        $at, . + 4 + (-0x1A << 2)
label_1e65c4:
    if (ctx->pc == 0x1E65C4u) {
        ctx->pc = 0x1E65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65C0u;
        // 0x1e65c4: 0x26310168  addiu       $s1, $s1, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65C8u;
        goto label_1e65c8;
    }
    ctx->pc = 0x1E65C0u;
    {
        const bool branch_taken_0x1e65c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65C0u;
        // 0x1e65c4: 0x26310168  addiu       $s1, $s1, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65c0) {
            ctx->pc = 0x1E655Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e655c;
        }
    }
    ctx->pc = 0x1E65C8u;
label_1e65c8:
    // 0x1e65c8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e65cc:
    // 0x1e65cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e65d0:
    // 0x1e65d0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1e65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1e65d4:
    // 0x1e65d4: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x1e65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1e65d8:
    // 0x1e65d8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e65d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e65dc:
    // 0x1e65dc: 0xaf948de0  sw          $s4, -0x7220($gp)
    ctx->pc = 0x1e65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 20));
label_1e65e0:
    // 0x1e65e0: 0xaf858dd0  sw          $a1, -0x7230($gp)
    ctx->pc = 0x1e65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 5));
label_1e65e4:
    // 0x1e65e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e65e8:
    // 0x1e65e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1e65e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e65ec:
    // 0x1e65ec: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1e65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_1e65f0:
    // 0x1e65f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e65f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e65f4:
    // 0x1e65f4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1e65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1e65f8:
    // 0x1e65f8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e65fc:
    // 0x1e65fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6600:
    // 0x1e6600: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e6600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6604:
    // 0x1e6604: 0xc079ef0  jal         func_1E7BC0
label_1e6608:
    if (ctx->pc == 0x1E6608u) {
        ctx->pc = 0x1E6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6604u;
        // 0x1e6608: 0xaf828dcc  sw          $v0, -0x7234($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E660Cu;
        goto label_1e660c;
    }
    ctx->pc = 0x1E6604u;
    SET_GPR_U32(ctx, 31, 0x1E660Cu);
    ctx->pc = 0x1E6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6604u;
    // 0x1e6608: 0xaf828dcc  sw          $v0, -0x7234($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7BC0u;
    { ctx->pc = 0x1e7bc0; return; }
    ctx->pc = 0x1E660Cu;
label_1e660c:
    // 0x1e660c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6610:
    // 0x1e6610: 0xc07a00c  jal         func_1E8030
label_1e6614:
    if (ctx->pc == 0x1E6614u) {
        ctx->pc = 0x1E6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6610u;
        // 0x1e6614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6618u;
        goto label_1e6618;
    }
    ctx->pc = 0x1E6610u;
    SET_GPR_U32(ctx, 31, 0x1E6618u);
    ctx->pc = 0x1E6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6610u;
    // 0x1e6614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8030u;
    { ctx->pc = 0x1e8030; return; }
    ctx->pc = 0x1E6618u;
label_1e6618:
    // 0x1e6618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e661c:
    // 0x1e661c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1e6620:
    // 0x1e6620: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_1e6624:
    // 0x1e6624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e6628:
    // 0x1e6628: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e6628u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e662c:
    // 0x1e662c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1e6630:
    if (ctx->pc == 0x1E6630u) {
        ctx->pc = 0x1E6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E662Cu;
        // 0x1e6630: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6634u;
        goto label_1e6634;
    }
    ctx->pc = 0x1E662Cu;
    {
        const bool branch_taken_0x1e662c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E662Cu;
        // 0x1e6630: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e662c) {
            ctx->pc = 0x1E6650u;
            goto label_1e6650;
        }
    }
    ctx->pc = 0x1E6634u;
label_1e6634:
    // 0x1e6634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6638:
    // 0x1e6638: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1e663c:
    if (ctx->pc == 0x1E663Cu) {
        ctx->pc = 0x1E663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6638u;
        // 0x1e663c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6640u;
        goto label_1e6640;
    }
    ctx->pc = 0x1E6638u;
    {
        const bool branch_taken_0x1e6638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6638u;
        // 0x1e663c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6638) {
            ctx->pc = 0x1E664Cu;
            goto label_1e664c;
        }
    }
    ctx->pc = 0x1E6640u;
label_1e6640:
    // 0x1e6640: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_1e6644:
    if (ctx->pc == 0x1E6644u) {
        ctx->pc = 0x1E6648u;
        goto label_1e6648;
    }
    ctx->pc = 0x1E6640u;
    {
        const bool branch_taken_0x1e6640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6640) {
            ctx->pc = 0x1E664Cu;
            goto label_1e664c;
        }
    }
    ctx->pc = 0x1E6648u;
label_1e6648:
    // 0x1e6648: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1e6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e664c:
    // 0x1e664c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6650:
    // 0x1e6650: 0xaf848e20  sw          $a0, -0x71E0($gp)
    ctx->pc = 0x1e6650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 4));
label_1e6654:
    // 0x1e6654: 0xaf838e2c  sw          $v1, -0x71D4($gp)
    ctx->pc = 0x1e6654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 3));
label_1e6658:
    // 0x1e6658: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e6658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e665c:
    // 0x1e665c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e665cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6660:
    // 0x1e6660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e6660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6664:
    // 0x1e6664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6668:
    // 0x1e6668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e666c:
    // 0x1e666c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e666cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6670:
    // 0x1e6670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6674:
    // 0x1e6674: 0x3e00008  jr          $ra
label_1e6678:
    if (ctx->pc == 0x1E6678u) {
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E667Cu;
        goto label_1e667c;
    }
    ctx->pc = 0x1E6674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E667Cu;
label_1e667c:
    // 0x1e667c: 0x0  nop
    ctx->pc = 0x1e667cu;
    // NOP
label_1e6680:
    // 0x1e6680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6684:
    // 0x1e6684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e6688:
    // 0x1e6688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e668c:
    // 0x1e668c: 0xc07b18c  jal         func_1EC630
label_1e6690:
    if (ctx->pc == 0x1E6690u) {
        ctx->pc = 0x1E6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E668Cu;
        // 0x1e6690: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6694u;
        goto label_1e6694;
    }
    ctx->pc = 0x1E668Cu;
    SET_GPR_U32(ctx, 31, 0x1E6694u);
    ctx->pc = 0x1E6690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E668Cu;
    // 0x1e6690: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC630u;
    { ctx->pc = 0x1ec630; return; }
    ctx->pc = 0x1E6694u;
label_1e6694:
    // 0x1e6694: 0xc07a1dc  jal         func_1E8770
label_1e6698:
    if (ctx->pc == 0x1E6698u) {
        ctx->pc = 0x1E669Cu;
        goto label_1e669c;
    }
    ctx->pc = 0x1E6694u;
    SET_GPR_U32(ctx, 31, 0x1E669Cu);
    ctx->pc = 0x1E8770u;
    { ctx->pc = 0x1e8770; return; }
    ctx->pc = 0x1E669Cu;
label_1e669c:
    // 0x1e669c: 0x8f838df0  lw          $v1, -0x7210($gp)
    ctx->pc = 0x1e669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938096)));
label_1e66a0:
    // 0x1e66a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e66a4:
    // 0x1e66a4: 0x8f848e40  lw          $a0, -0x71C0($gp)
    ctx->pc = 0x1e66a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
label_1e66a8:
    // 0x1e66a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e66ac:
    // 0x1e66ac: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_1e66b0:
    if (ctx->pc == 0x1E66B0u) {
        ctx->pc = 0x1E66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66ACu;
        // 0x1e66b0: 0xaf838df0  sw          $v1, -0x7210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E66B4u;
        goto label_1e66b4;
    }
    ctx->pc = 0x1E66ACu;
    {
        const bool branch_taken_0x1e66ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66ACu;
        // 0x1e66b0: 0xaf838df0  sw          $v1, -0x7210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66ac) {
            ctx->pc = 0x1E66F0u;
            goto label_1e66f0;
        }
    }
    ctx->pc = 0x1E66B4u;
label_1e66b4:
    // 0x1e66b4: 0x8f828e38  lw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
label_1e66b8:
    // 0x1e66b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e66bc:
    // 0x1e66bc: 0x28410108  slti        $at, $v0, 0x108
    ctx->pc = 0x1e66bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
label_1e66c0:
    // 0x1e66c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e66c4:
    if (ctx->pc == 0x1E66C4u) {
        ctx->pc = 0x1E66C8u;
        goto label_1e66c8;
    }
    ctx->pc = 0x1E66C0u;
    {
        const bool branch_taken_0x1e66c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66c0) {
            ctx->pc = 0x1E66D0u;
            goto label_1e66d0;
        }
    }
    ctx->pc = 0x1E66C8u;
label_1e66c8:
    // 0x1e66c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e66cc:
    if (ctx->pc == 0x1E66CCu) {
        ctx->pc = 0x1E66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66C8u;
        // 0x1e66cc: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E66D0u;
        goto label_1e66d0;
    }
    ctx->pc = 0x1E66C8u;
    {
        const bool branch_taken_0x1e66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66C8u;
        // 0x1e66cc: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66c8) {
            ctx->pc = 0x1E66D8u;
            goto label_1e66d8;
        }
    }
    ctx->pc = 0x1E66D0u;
label_1e66d0:
    // 0x1e66d0: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1e66d4:
    // 0x1e66d4: 0xaf828e38  sw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
label_1e66d8:
    // 0x1e66d8: 0x28420108  slti        $v0, $v0, 0x108
    ctx->pc = 0x1e66d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
label_1e66dc:
    // 0x1e66dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e66e0:
    if (ctx->pc == 0x1E66E0u) {
        ctx->pc = 0x1E66E4u;
        goto label_1e66e4;
    }
    ctx->pc = 0x1E66DCu;
    {
        const bool branch_taken_0x1e66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e66dc) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66E4u;
label_1e66e4:
    // 0x1e66e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e66e8:
    // 0x1e66e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e66ec:
    if (ctx->pc == 0x1E66ECu) {
        ctx->pc = 0x1E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66E8u;
        // 0x1e66ec: 0xaf828e40  sw          $v0, -0x71C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E66F0u;
        goto label_1e66f0;
    }
    ctx->pc = 0x1E66E8u;
    {
        const bool branch_taken_0x1e66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66E8u;
        // 0x1e66ec: 0xaf828e40  sw          $v0, -0x71C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66e8) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66F0u;
label_1e66f0:
    // 0x1e66f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e66f4:
    // 0x1e66f4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1e66f8:
    if (ctx->pc == 0x1E66F8u) {
        ctx->pc = 0x1E66FCu;
        goto label_1e66fc;
    }
    ctx->pc = 0x1E66F4u;
    {
        const bool branch_taken_0x1e66f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e66f4) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66FCu;
label_1e66fc:
    // 0x1e66fc: 0x8f828e38  lw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
label_1e6700:
    // 0x1e6700: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1e6704:
    // 0x1e6704: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e6704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6708:
    // 0x1e6708: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e6708u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e670c:
    // 0x1e670c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1e6710:
    if (ctx->pc == 0x1E6710u) {
        ctx->pc = 0x1E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E670Cu;
        // 0x1e6710: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6714u;
        goto label_1e6714;
    }
    ctx->pc = 0x1E670Cu;
    {
        const bool branch_taken_0x1e670c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E670Cu;
        // 0x1e6710: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e670c) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E6714u;
label_1e6714:
    // 0x1e6714: 0xaf808e40  sw          $zero, -0x71C0($gp)
    ctx->pc = 0x1e6714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 0));
label_1e6718:
    // 0x1e6718: 0x8f828e58  lw          $v0, -0x71A8($gp)
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
label_1e671c:
    // 0x1e671c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e6720:
    if (ctx->pc == 0x1E6720u) {
        ctx->pc = 0x1E6724u;
        goto label_1e6724;
    }
    ctx->pc = 0x1E671Cu;
    {
        const bool branch_taken_0x1e671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e671c) {
            ctx->pc = 0x1E6754u;
            goto label_1e6754;
        }
    }
    ctx->pc = 0x1E6724u;
label_1e6724:
    // 0x1e6724: 0x8f828e50  lw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
label_1e6728:
    // 0x1e6728: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1e6728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1e672c:
    // 0x1e672c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e6730:
    if (ctx->pc == 0x1E6730u) {
        ctx->pc = 0x1E6734u;
        goto label_1e6734;
    }
    ctx->pc = 0x1E672Cu;
    {
        const bool branch_taken_0x1e672c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e672c) {
            ctx->pc = 0x1E6754u;
            goto label_1e6754;
        }
    }
    ctx->pc = 0x1E6734u;
label_1e6734:
    // 0x1e6734: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e6734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1e6738:
    // 0x1e6738: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1e6738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1e673c:
    // 0x1e673c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e6740:
    if (ctx->pc == 0x1E6740u) {
        ctx->pc = 0x1E6744u;
        goto label_1e6744;
    }
    ctx->pc = 0x1E673Cu;
    {
        const bool branch_taken_0x1e673c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e673c) {
            ctx->pc = 0x1E674Cu;
            goto label_1e674c;
        }
    }
    ctx->pc = 0x1E6744u;
label_1e6744:
    // 0x1e6744: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6748:
    if (ctx->pc == 0x1E6748u) {
        ctx->pc = 0x1E6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6744u;
        // 0x1e6748: 0xaf828e50  sw          $v0, -0x71B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E674Cu;
        goto label_1e674c;
    }
    ctx->pc = 0x1E6744u;
    {
        const bool branch_taken_0x1e6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6744u;
        // 0x1e6748: 0xaf828e50  sw          $v0, -0x71B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6744) {
            ctx->pc = 0x1E6754u;
            goto label_1e6754;
        }
    }
    ctx->pc = 0x1E674Cu;
label_1e674c:
    // 0x1e674c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e6750:
    // 0x1e6750: 0xaf828e50  sw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
label_1e6754:
    // 0x1e6754: 0xc078030  jal         func_1E00C0
label_1e6758:
    if (ctx->pc == 0x1E6758u) {
        ctx->pc = 0x1E675Cu;
        goto label_1e675c;
    }
    ctx->pc = 0x1E6754u;
    SET_GPR_U32(ctx, 31, 0x1E675Cu);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x1E675Cu;
label_1e675c:
    // 0x1e675c: 0xc07b230  jal         func_1EC8C0
label_1e6760:
    if (ctx->pc == 0x1E6760u) {
        ctx->pc = 0x1E6764u;
        goto label_1e6764;
    }
    ctx->pc = 0x1E675Cu;
    SET_GPR_U32(ctx, 31, 0x1E6764u);
    ctx->pc = 0x1EC8C0u;
    { ctx->pc = 0x1ec8c0; return; }
    ctx->pc = 0x1E6764u;
label_1e6764:
    // 0x1e6764: 0xc07ab54  jal         func_1EAD50
label_1e6768:
    if (ctx->pc == 0x1E6768u) {
        ctx->pc = 0x1E676Cu;
        goto label_1e676c;
    }
    ctx->pc = 0x1E6764u;
    SET_GPR_U32(ctx, 31, 0x1E676Cu);
    ctx->pc = 0x1EAD50u;
    { ctx->pc = 0x1ead50; return; }
    ctx->pc = 0x1E676Cu;
label_1e676c:
    // 0x1e676c: 0xc04e168  jal         func_1385A0
label_1e6770:
    if (ctx->pc == 0x1E6770u) {
        ctx->pc = 0x1E6774u;
        goto label_1e6774;
    }
    ctx->pc = 0x1E676Cu;
    SET_GPR_U32(ctx, 31, 0x1E6774u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E676Cu, 0x1E6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6774u;
label_1e6774:
    // 0x1e6774: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e6774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1e6778:
    // 0x1e6778: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e677c:
    // 0x1e677c: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1e677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1e6780:
    // 0x1e6780: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e6784:
    // 0x1e6784: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6788:
    // 0x1e6788: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e678c:
    // 0x1e678c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e678cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e6790:
    // 0x1e6790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6794:
    // 0x1e6794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6798:
    // 0x1e6798: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e679c:
    // 0x1e679c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e67a0:
    // 0x1e67a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e67a4:
    // 0x1e67a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e67a8:
    // 0x1e67a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e67ac:
    // 0x1e67ac: 0xc066c72  jal         func_19B1C8
label_1e67b0:
    if (ctx->pc == 0x1E67B0u) {
        ctx->pc = 0x1E67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67ACu;
        // 0x1e67b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67B4u;
        goto label_1e67b4;
    }
    ctx->pc = 0x1E67ACu;
    SET_GPR_U32(ctx, 31, 0x1E67B4u);
    ctx->pc = 0x1E67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67ACu;
    // 0x1e67b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E67ACu, 0x1E67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67B4u;
label_1e67b4:
    // 0x1e67b4: 0x8f828e2c  lw          $v0, -0x71D4($gp)
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
label_1e67b8:
    // 0x1e67b8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_1e67bc:
    if (ctx->pc == 0x1E67BCu) {
        ctx->pc = 0x1E67C0u;
        goto label_1e67c0;
    }
    ctx->pc = 0x1E67B8u;
    {
        const bool branch_taken_0x1e67b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e67b8) {
            ctx->pc = 0x1E6934u;
            goto label_1e6934;
        }
    }
    ctx->pc = 0x1E67C0u;
label_1e67c0:
    // 0x1e67c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e67c4:
    // 0x1e67c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e67c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e67c8:
    // 0x1e67c8: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e67cc:
    // 0x1e67cc: 0x27858e30  addiu       $a1, $gp, -0x71D0
    ctx->pc = 0x1e67ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1e67d0:
    // 0x1e67d0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e67d4:
    // 0x1e67d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e67d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e67d8:
    // 0x1e67d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e67d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e67dc:
    // 0x1e67dc: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1e67e0:
    // 0x1e67e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e67e4:
    // 0x1e67e4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e67e8:
    // 0x1e67e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1e67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1e67ec:
    // 0x1e67ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e67ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e67f0:
    // 0x1e67f0: 0x0  nop
    ctx->pc = 0x1e67f0u;
    // NOP
label_1e67f4:
    // 0x1e67f4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1e67f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e67f8:
    // 0x1e67f8: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_1e67fc:
    // 0x1e67fc: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e67fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1e6800:
    // 0x1e6800: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1e6800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1e6804:
    // 0x1e6804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6808:
    // 0x1e6808: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e680c:
    // 0x1e680c: 0x28470010  slti        $a3, $v0, 0x10
    ctx->pc = 0x1e680cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e6810:
    // 0x1e6810: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1e6810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_1e6814:
    // 0x1e6814: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1e6818:
    // 0x1e6818: 0xa4c80088  sh          $t0, 0x88($a2)
    ctx->pc = 0x1e6818u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 136), (uint16_t)GPR_U32(ctx, 8));
label_1e681c:
    // 0x1e681c: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1e6820:
    // 0x1e6820: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1e6824:
    // 0x1e6824: 0xa4c8008a  sh          $t0, 0x8A($a2)
    ctx->pc = 0x1e6824u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 138), (uint16_t)GPR_U32(ctx, 8));
label_1e6828:
    // 0x1e6828: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e6828u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1e682c:
    // 0x1e682c: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
label_1e6830:
    // 0x1e6830: 0xa4c800a0  sh          $t0, 0xA0($a2)
    ctx->pc = 0x1e6830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 160), (uint16_t)GPR_U32(ctx, 8));
label_1e6834:
    // 0x1e6834: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1e6838:
    // 0x1e6838: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1e683c:
    // 0x1e683c: 0xa4c800a2  sh          $t0, 0xA2($a2)
    ctx->pc = 0x1e683cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 162), (uint16_t)GPR_U32(ctx, 8));
label_1e6840:
    // 0x1e6840: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1e6844:
    // 0x1e6844: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1e6848:
    // 0x1e6848: 0xa4c800b8  sh          $t0, 0xB8($a2)
    ctx->pc = 0x1e6848u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 184), (uint16_t)GPR_U32(ctx, 8));
label_1e684c:
    // 0x1e684c: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e684cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1e6850:
    // 0x1e6850: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
label_1e6854:
    // 0x1e6854: 0xa4c800ba  sh          $t0, 0xBA($a2)
    ctx->pc = 0x1e6854u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 186), (uint16_t)GPR_U32(ctx, 8));
label_1e6858:
    // 0x1e6858: 0x87888e28  lh          $t0, -0x71D8($gp)
    ctx->pc = 0x1e6858u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1e685c:
    // 0x1e685c: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e685cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
label_1e6860:
    // 0x1e6860: 0xa4c800d0  sh          $t0, 0xD0($a2)
    ctx->pc = 0x1e6860u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 208), (uint16_t)GPR_U32(ctx, 8));
label_1e6864:
    // 0x1e6864: 0x87888e24  lh          $t0, -0x71DC($gp)
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1e6868:
    // 0x1e6868: 0x25081008  addiu       $t0, $t0, 0x1008
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
label_1e686c:
    // 0x1e686c: 0xa4c800d2  sh          $t0, 0xD2($a2)
    ctx->pc = 0x1e686cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 210), (uint16_t)GPR_U32(ctx, 8));
label_1e6870:
    // 0x1e6870: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e6870u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12496)));
label_1e6874:
    // 0x1e6874: 0xa0c80080  sb          $t0, 0x80($a2)
    ctx->pc = 0x1e6874u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 8));
label_1e6878:
    // 0x1e6878: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e687c:
    // 0x1e687c: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12500)));
label_1e6880:
    // 0x1e6880: 0xa0c80081  sb          $t0, 0x81($a2)
    ctx->pc = 0x1e6880u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 129), (uint8_t)GPR_U32(ctx, 8));
label_1e6884:
    // 0x1e6884: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e6888:
    // 0x1e6888: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e6888u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12504)));
label_1e688c:
    // 0x1e688c: 0xa0c80082  sb          $t0, 0x82($a2)
    ctx->pc = 0x1e688cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 130), (uint8_t)GPR_U32(ctx, 8));
label_1e6890:
    // 0x1e6890: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e6894:
    // 0x1e6894: 0xa0ca0083  sb          $t2, 0x83($a2)
    ctx->pc = 0x1e6894u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 10));
label_1e6898:
    // 0x1e6898: 0xacc90084  sw          $t1, 0x84($a2)
    ctx->pc = 0x1e6898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 9));
label_1e689c:
    // 0x1e689c: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e689cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12496)));
label_1e68a0:
    // 0x1e68a0: 0xa0c80098  sb          $t0, 0x98($a2)
    ctx->pc = 0x1e68a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 152), (uint8_t)GPR_U32(ctx, 8));
label_1e68a4:
    // 0x1e68a4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e68a8:
    // 0x1e68a8: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12500)));
label_1e68ac:
    // 0x1e68ac: 0xa0c80099  sb          $t0, 0x99($a2)
    ctx->pc = 0x1e68acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 153), (uint8_t)GPR_U32(ctx, 8));
label_1e68b0:
    // 0x1e68b0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e68b4:
    // 0x1e68b4: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12504)));
label_1e68b8:
    // 0x1e68b8: 0xa0c8009a  sb          $t0, 0x9A($a2)
    ctx->pc = 0x1e68b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 154), (uint8_t)GPR_U32(ctx, 8));
label_1e68bc:
    // 0x1e68bc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e68c0:
    // 0x1e68c0: 0xa0ca009b  sb          $t2, 0x9B($a2)
    ctx->pc = 0x1e68c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 10));
label_1e68c4:
    // 0x1e68c4: 0xacc9009c  sw          $t1, 0x9C($a2)
    ctx->pc = 0x1e68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 9));
label_1e68c8:
    // 0x1e68c8: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12496)));
label_1e68cc:
    // 0x1e68cc: 0xa0c800b0  sb          $t0, 0xB0($a2)
    ctx->pc = 0x1e68ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 176), (uint8_t)GPR_U32(ctx, 8));
label_1e68d0:
    // 0x1e68d0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e68d4:
    // 0x1e68d4: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e68d4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12500)));
label_1e68d8:
    // 0x1e68d8: 0xa0c800b1  sb          $t0, 0xB1($a2)
    ctx->pc = 0x1e68d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 177), (uint8_t)GPR_U32(ctx, 8));
label_1e68dc:
    // 0x1e68dc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e68e0:
    // 0x1e68e0: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12504)));
label_1e68e4:
    // 0x1e68e4: 0xa0c800b2  sb          $t0, 0xB2($a2)
    ctx->pc = 0x1e68e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 178), (uint8_t)GPR_U32(ctx, 8));
label_1e68e8:
    // 0x1e68e8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e68ec:
    // 0x1e68ec: 0xa0c000b3  sb          $zero, 0xB3($a2)
    ctx->pc = 0x1e68ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 0));
label_1e68f0:
    // 0x1e68f0: 0xacc900b4  sw          $t1, 0xB4($a2)
    ctx->pc = 0x1e68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 9));
label_1e68f4:
    // 0x1e68f4: 0x802830d0  lb          $t0, 0x30D0($at)
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12496)));
label_1e68f8:
    // 0x1e68f8: 0xa0c800c8  sb          $t0, 0xC8($a2)
    ctx->pc = 0x1e68f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 200), (uint8_t)GPR_U32(ctx, 8));
label_1e68fc:
    // 0x1e68fc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e6900:
    // 0x1e6900: 0x802830d4  lb          $t0, 0x30D4($at)
    ctx->pc = 0x1e6900u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12500)));
label_1e6904:
    // 0x1e6904: 0xa0c800c9  sb          $t0, 0xC9($a2)
    ctx->pc = 0x1e6904u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 201), (uint8_t)GPR_U32(ctx, 8));
label_1e6908:
    // 0x1e6908: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e690c:
    // 0x1e690c: 0x802830d8  lb          $t0, 0x30D8($at)
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12504)));
label_1e6910:
    // 0x1e6910: 0xa0c800ca  sb          $t0, 0xCA($a2)
    ctx->pc = 0x1e6910u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 202), (uint8_t)GPR_U32(ctx, 8));
label_1e6914:
    // 0x1e6914: 0xa0c000cb  sb          $zero, 0xCB($a2)
    ctx->pc = 0x1e6914u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 0));
label_1e6918:
    // 0x1e6918: 0x14e0ffb8  bnez        $a3, . + 4 + (-0x48 << 2)
label_1e691c:
    if (ctx->pc == 0x1E691Cu) {
        ctx->pc = 0x1E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6918u;
        // 0x1e691c: 0xacc900cc  sw          $t1, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6920u;
        goto label_1e6920;
    }
    ctx->pc = 0x1E6918u;
    {
        const bool branch_taken_0x1e6918 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6918u;
        // 0x1e691c: 0xacc900cc  sw          $t1, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6918) {
            ctx->pc = 0x1E67FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e67fc;
        }
    }
    ctx->pc = 0x1E6920u;
label_1e6920:
    // 0x1e6920: 0x240600d1  addiu       $a2, $zero, 0xD1
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
label_1e6924:
    // 0x1e6924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6928:
    // 0x1e6928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e692c:
    // 0x1e692c: 0xc066c72  jal         func_19B1C8
label_1e6930:
    if (ctx->pc == 0x1E6930u) {
        ctx->pc = 0x1E6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E692Cu;
        // 0x1e6930: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6934u;
        goto label_1e6934;
    }
    ctx->pc = 0x1E692Cu;
    SET_GPR_U32(ctx, 31, 0x1E6934u);
    ctx->pc = 0x1E6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E692Cu;
    // 0x1e6930: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E692Cu, 0x1E6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6934u;
label_1e6934:
    // 0x1e6934: 0x8f828e10  lw          $v0, -0x71F0($gp)
    ctx->pc = 0x1e6934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938128)));
    ctx->pc = 0x1e6938u;
    return;
}
