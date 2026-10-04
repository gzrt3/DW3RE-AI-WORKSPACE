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


void FUN_0019b910_part88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c60c0u: goto label_1c60c0;
        case 0x1c60c4u: goto label_1c60c4;
        case 0x1c60c8u: goto label_1c60c8;
        case 0x1c60ccu: goto label_1c60cc;
        case 0x1c60d0u: goto label_1c60d0;
        case 0x1c60d4u: goto label_1c60d4;
        case 0x1c60d8u: goto label_1c60d8;
        case 0x1c60dcu: goto label_1c60dc;
        case 0x1c60e0u: goto label_1c60e0;
        case 0x1c60e4u: goto label_1c60e4;
        case 0x1c60e8u: goto label_1c60e8;
        case 0x1c60ecu: goto label_1c60ec;
        case 0x1c60f0u: goto label_1c60f0;
        case 0x1c60f4u: goto label_1c60f4;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c60fcu: goto label_1c60fc;
        case 0x1c6100u: goto label_1c6100;
        case 0x1c6104u: goto label_1c6104;
        case 0x1c6108u: goto label_1c6108;
        case 0x1c610cu: goto label_1c610c;
        case 0x1c6110u: goto label_1c6110;
        case 0x1c6114u: goto label_1c6114;
        case 0x1c6118u: goto label_1c6118;
        case 0x1c611cu: goto label_1c611c;
        case 0x1c6120u: goto label_1c6120;
        case 0x1c6124u: goto label_1c6124;
        case 0x1c6128u: goto label_1c6128;
        case 0x1c612cu: goto label_1c612c;
        case 0x1c6130u: goto label_1c6130;
        case 0x1c6134u: goto label_1c6134;
        case 0x1c6138u: goto label_1c6138;
        case 0x1c613cu: goto label_1c613c;
        case 0x1c6140u: goto label_1c6140;
        case 0x1c6144u: goto label_1c6144;
        case 0x1c6148u: goto label_1c6148;
        case 0x1c614cu: goto label_1c614c;
        case 0x1c6150u: goto label_1c6150;
        case 0x1c6154u: goto label_1c6154;
        case 0x1c6158u: goto label_1c6158;
        case 0x1c615cu: goto label_1c615c;
        case 0x1c6160u: goto label_1c6160;
        case 0x1c6164u: goto label_1c6164;
        case 0x1c6168u: goto label_1c6168;
        case 0x1c616cu: goto label_1c616c;
        case 0x1c6170u: goto label_1c6170;
        case 0x1c6174u: goto label_1c6174;
        case 0x1c6178u: goto label_1c6178;
        case 0x1c617cu: goto label_1c617c;
        case 0x1c6180u: goto label_1c6180;
        case 0x1c6184u: goto label_1c6184;
        case 0x1c6188u: goto label_1c6188;
        case 0x1c618cu: goto label_1c618c;
        case 0x1c6190u: goto label_1c6190;
        case 0x1c6194u: goto label_1c6194;
        case 0x1c6198u: goto label_1c6198;
        case 0x1c619cu: goto label_1c619c;
        case 0x1c61a0u: goto label_1c61a0;
        case 0x1c61a4u: goto label_1c61a4;
        case 0x1c61a8u: goto label_1c61a8;
        case 0x1c61acu: goto label_1c61ac;
        case 0x1c61b0u: goto label_1c61b0;
        case 0x1c61b4u: goto label_1c61b4;
        case 0x1c61b8u: goto label_1c61b8;
        case 0x1c61bcu: goto label_1c61bc;
        case 0x1c61c0u: goto label_1c61c0;
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61c8u: goto label_1c61c8;
        case 0x1c61ccu: goto label_1c61cc;
        case 0x1c61d0u: goto label_1c61d0;
        case 0x1c61d4u: goto label_1c61d4;
        case 0x1c61d8u: goto label_1c61d8;
        case 0x1c61dcu: goto label_1c61dc;
        case 0x1c61e0u: goto label_1c61e0;
        case 0x1c61e4u: goto label_1c61e4;
        case 0x1c61e8u: goto label_1c61e8;
        case 0x1c61ecu: goto label_1c61ec;
        case 0x1c61f0u: goto label_1c61f0;
        case 0x1c61f4u: goto label_1c61f4;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c61fcu: goto label_1c61fc;
        case 0x1c6200u: goto label_1c6200;
        case 0x1c6204u: goto label_1c6204;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c620cu: goto label_1c620c;
        case 0x1c6210u: goto label_1c6210;
        case 0x1c6214u: goto label_1c6214;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c621cu: goto label_1c621c;
        case 0x1c6220u: goto label_1c6220;
        case 0x1c6224u: goto label_1c6224;
        case 0x1c6228u: goto label_1c6228;
        case 0x1c622cu: goto label_1c622c;
        case 0x1c6230u: goto label_1c6230;
        case 0x1c6234u: goto label_1c6234;
        case 0x1c6238u: goto label_1c6238;
        case 0x1c623cu: goto label_1c623c;
        case 0x1c6240u: goto label_1c6240;
        case 0x1c6244u: goto label_1c6244;
        case 0x1c6248u: goto label_1c6248;
        case 0x1c624cu: goto label_1c624c;
        case 0x1c6250u: goto label_1c6250;
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6258u: goto label_1c6258;
        case 0x1c625cu: goto label_1c625c;
        case 0x1c6260u: goto label_1c6260;
        case 0x1c6264u: goto label_1c6264;
        case 0x1c6268u: goto label_1c6268;
        case 0x1c626cu: goto label_1c626c;
        case 0x1c6270u: goto label_1c6270;
        case 0x1c6274u: goto label_1c6274;
        case 0x1c6278u: goto label_1c6278;
        case 0x1c627cu: goto label_1c627c;
        case 0x1c6280u: goto label_1c6280;
        case 0x1c6284u: goto label_1c6284;
        case 0x1c6288u: goto label_1c6288;
        case 0x1c628cu: goto label_1c628c;
        case 0x1c6290u: goto label_1c6290;
        case 0x1c6294u: goto label_1c6294;
        case 0x1c6298u: goto label_1c6298;
        case 0x1c629cu: goto label_1c629c;
        case 0x1c62a0u: goto label_1c62a0;
        case 0x1c62a4u: goto label_1c62a4;
        case 0x1c62a8u: goto label_1c62a8;
        case 0x1c62acu: goto label_1c62ac;
        case 0x1c62b0u: goto label_1c62b0;
        case 0x1c62b4u: goto label_1c62b4;
        case 0x1c62b8u: goto label_1c62b8;
        case 0x1c62bcu: goto label_1c62bc;
        case 0x1c62c0u: goto label_1c62c0;
        case 0x1c62c4u: goto label_1c62c4;
        case 0x1c62c8u: goto label_1c62c8;
        case 0x1c62ccu: goto label_1c62cc;
        case 0x1c62d0u: goto label_1c62d0;
        case 0x1c62d4u: goto label_1c62d4;
        case 0x1c62d8u: goto label_1c62d8;
        case 0x1c62dcu: goto label_1c62dc;
        case 0x1c62e0u: goto label_1c62e0;
        case 0x1c62e4u: goto label_1c62e4;
        case 0x1c62e8u: goto label_1c62e8;
        case 0x1c62ecu: goto label_1c62ec;
        case 0x1c62f0u: goto label_1c62f0;
        case 0x1c62f4u: goto label_1c62f4;
        case 0x1c62f8u: goto label_1c62f8;
        case 0x1c62fcu: goto label_1c62fc;
        case 0x1c6300u: goto label_1c6300;
        case 0x1c6304u: goto label_1c6304;
        case 0x1c6308u: goto label_1c6308;
        case 0x1c630cu: goto label_1c630c;
        case 0x1c6310u: goto label_1c6310;
        case 0x1c6314u: goto label_1c6314;
        case 0x1c6318u: goto label_1c6318;
        case 0x1c631cu: goto label_1c631c;
        case 0x1c6320u: goto label_1c6320;
        case 0x1c6324u: goto label_1c6324;
        case 0x1c6328u: goto label_1c6328;
        case 0x1c632cu: goto label_1c632c;
        case 0x1c6330u: goto label_1c6330;
        case 0x1c6334u: goto label_1c6334;
        case 0x1c6338u: goto label_1c6338;
        case 0x1c633cu: goto label_1c633c;
        case 0x1c6340u: goto label_1c6340;
        case 0x1c6344u: goto label_1c6344;
        case 0x1c6348u: goto label_1c6348;
        case 0x1c634cu: goto label_1c634c;
        case 0x1c6350u: goto label_1c6350;
        case 0x1c6354u: goto label_1c6354;
        case 0x1c6358u: goto label_1c6358;
        case 0x1c635cu: goto label_1c635c;
        case 0x1c6360u: goto label_1c6360;
        case 0x1c6364u: goto label_1c6364;
        case 0x1c6368u: goto label_1c6368;
        case 0x1c636cu: goto label_1c636c;
        case 0x1c6370u: goto label_1c6370;
        case 0x1c6374u: goto label_1c6374;
        case 0x1c6378u: goto label_1c6378;
        case 0x1c637cu: goto label_1c637c;
        case 0x1c6380u: goto label_1c6380;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c6388u: goto label_1c6388;
        case 0x1c638cu: goto label_1c638c;
        case 0x1c6390u: goto label_1c6390;
        case 0x1c6394u: goto label_1c6394;
        case 0x1c6398u: goto label_1c6398;
        case 0x1c639cu: goto label_1c639c;
        case 0x1c63a0u: goto label_1c63a0;
        case 0x1c63a4u: goto label_1c63a4;
        case 0x1c63a8u: goto label_1c63a8;
        case 0x1c63acu: goto label_1c63ac;
        case 0x1c63b0u: goto label_1c63b0;
        case 0x1c63b4u: goto label_1c63b4;
        case 0x1c63b8u: goto label_1c63b8;
        case 0x1c63bcu: goto label_1c63bc;
        case 0x1c63c0u: goto label_1c63c0;
        case 0x1c63c4u: goto label_1c63c4;
        case 0x1c63c8u: goto label_1c63c8;
        case 0x1c63ccu: goto label_1c63cc;
        case 0x1c63d0u: goto label_1c63d0;
        case 0x1c63d4u: goto label_1c63d4;
        case 0x1c63d8u: goto label_1c63d8;
        case 0x1c63dcu: goto label_1c63dc;
        case 0x1c63e0u: goto label_1c63e0;
        case 0x1c63e4u: goto label_1c63e4;
        case 0x1c63e8u: goto label_1c63e8;
        case 0x1c63ecu: goto label_1c63ec;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c63f4u: goto label_1c63f4;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c63fcu: goto label_1c63fc;
        case 0x1c6400u: goto label_1c6400;
        case 0x1c6404u: goto label_1c6404;
        case 0x1c6408u: goto label_1c6408;
        case 0x1c640cu: goto label_1c640c;
        case 0x1c6410u: goto label_1c6410;
        case 0x1c6414u: goto label_1c6414;
        case 0x1c6418u: goto label_1c6418;
        case 0x1c641cu: goto label_1c641c;
        case 0x1c6420u: goto label_1c6420;
        case 0x1c6424u: goto label_1c6424;
        case 0x1c6428u: goto label_1c6428;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c6430u: goto label_1c6430;
        case 0x1c6434u: goto label_1c6434;
        case 0x1c6438u: goto label_1c6438;
        case 0x1c643cu: goto label_1c643c;
        case 0x1c6440u: goto label_1c6440;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c6448u: goto label_1c6448;
        case 0x1c644cu: goto label_1c644c;
        case 0x1c6450u: goto label_1c6450;
        case 0x1c6454u: goto label_1c6454;
        case 0x1c6458u: goto label_1c6458;
        case 0x1c645cu: goto label_1c645c;
        case 0x1c6460u: goto label_1c6460;
        case 0x1c6464u: goto label_1c6464;
        case 0x1c6468u: goto label_1c6468;
        case 0x1c646cu: goto label_1c646c;
        case 0x1c6470u: goto label_1c6470;
        case 0x1c6474u: goto label_1c6474;
        case 0x1c6478u: goto label_1c6478;
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6480u: goto label_1c6480;
        case 0x1c6484u: goto label_1c6484;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c648cu: goto label_1c648c;
        case 0x1c6490u: goto label_1c6490;
        case 0x1c6494u: goto label_1c6494;
        case 0x1c6498u: goto label_1c6498;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a0u: goto label_1c64a0;
        case 0x1c64a4u: goto label_1c64a4;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64acu: goto label_1c64ac;
        case 0x1c64b0u: goto label_1c64b0;
        case 0x1c64b4u: goto label_1c64b4;
        case 0x1c64b8u: goto label_1c64b8;
        case 0x1c64bcu: goto label_1c64bc;
        case 0x1c64c0u: goto label_1c64c0;
        case 0x1c64c4u: goto label_1c64c4;
        case 0x1c64c8u: goto label_1c64c8;
        case 0x1c64ccu: goto label_1c64cc;
        case 0x1c64d0u: goto label_1c64d0;
        case 0x1c64d4u: goto label_1c64d4;
        case 0x1c64d8u: goto label_1c64d8;
        case 0x1c64dcu: goto label_1c64dc;
        case 0x1c64e0u: goto label_1c64e0;
        case 0x1c64e4u: goto label_1c64e4;
        case 0x1c64e8u: goto label_1c64e8;
        case 0x1c64ecu: goto label_1c64ec;
        case 0x1c64f0u: goto label_1c64f0;
        case 0x1c64f4u: goto label_1c64f4;
        case 0x1c64f8u: goto label_1c64f8;
        case 0x1c64fcu: goto label_1c64fc;
        case 0x1c6500u: goto label_1c6500;
        case 0x1c6504u: goto label_1c6504;
        case 0x1c6508u: goto label_1c6508;
        case 0x1c650cu: goto label_1c650c;
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6514u: goto label_1c6514;
        case 0x1c6518u: goto label_1c6518;
        case 0x1c651cu: goto label_1c651c;
        case 0x1c6520u: goto label_1c6520;
        case 0x1c6524u: goto label_1c6524;
        case 0x1c6528u: goto label_1c6528;
        case 0x1c652cu: goto label_1c652c;
        case 0x1c6530u: goto label_1c6530;
        case 0x1c6534u: goto label_1c6534;
        case 0x1c6538u: goto label_1c6538;
        case 0x1c653cu: goto label_1c653c;
        case 0x1c6540u: goto label_1c6540;
        case 0x1c6544u: goto label_1c6544;
        case 0x1c6548u: goto label_1c6548;
        case 0x1c654cu: goto label_1c654c;
        case 0x1c6550u: goto label_1c6550;
        case 0x1c6554u: goto label_1c6554;
        case 0x1c6558u: goto label_1c6558;
        case 0x1c655cu: goto label_1c655c;
        case 0x1c6560u: goto label_1c6560;
        case 0x1c6564u: goto label_1c6564;
        case 0x1c6568u: goto label_1c6568;
        case 0x1c656cu: goto label_1c656c;
        case 0x1c6570u: goto label_1c6570;
        case 0x1c6574u: goto label_1c6574;
        case 0x1c6578u: goto label_1c6578;
        case 0x1c657cu: goto label_1c657c;
        case 0x1c6580u: goto label_1c6580;
        case 0x1c6584u: goto label_1c6584;
        case 0x1c6588u: goto label_1c6588;
        case 0x1c658cu: goto label_1c658c;
        case 0x1c6590u: goto label_1c6590;
        case 0x1c6594u: goto label_1c6594;
        case 0x1c6598u: goto label_1c6598;
        case 0x1c659cu: goto label_1c659c;
        case 0x1c65a0u: goto label_1c65a0;
        case 0x1c65a4u: goto label_1c65a4;
        case 0x1c65a8u: goto label_1c65a8;
        case 0x1c65acu: goto label_1c65ac;
        case 0x1c65b0u: goto label_1c65b0;
        case 0x1c65b4u: goto label_1c65b4;
        case 0x1c65b8u: goto label_1c65b8;
        case 0x1c65bcu: goto label_1c65bc;
        case 0x1c65c0u: goto label_1c65c0;
        case 0x1c65c4u: goto label_1c65c4;
        case 0x1c65c8u: goto label_1c65c8;
        case 0x1c65ccu: goto label_1c65cc;
        case 0x1c65d0u: goto label_1c65d0;
        case 0x1c65d4u: goto label_1c65d4;
        case 0x1c65d8u: goto label_1c65d8;
        case 0x1c65dcu: goto label_1c65dc;
        case 0x1c65e0u: goto label_1c65e0;
        case 0x1c65e4u: goto label_1c65e4;
        case 0x1c65e8u: goto label_1c65e8;
        case 0x1c65ecu: goto label_1c65ec;
        case 0x1c65f0u: goto label_1c65f0;
        case 0x1c65f4u: goto label_1c65f4;
        case 0x1c65f8u: goto label_1c65f8;
        case 0x1c65fcu: goto label_1c65fc;
        case 0x1c6600u: goto label_1c6600;
        case 0x1c6604u: goto label_1c6604;
        case 0x1c6608u: goto label_1c6608;
        case 0x1c660cu: goto label_1c660c;
        case 0x1c6610u: goto label_1c6610;
        case 0x1c6614u: goto label_1c6614;
        case 0x1c6618u: goto label_1c6618;
        case 0x1c661cu: goto label_1c661c;
        case 0x1c6620u: goto label_1c6620;
        case 0x1c6624u: goto label_1c6624;
        case 0x1c6628u: goto label_1c6628;
        case 0x1c662cu: goto label_1c662c;
        case 0x1c6630u: goto label_1c6630;
        case 0x1c6634u: goto label_1c6634;
        case 0x1c6638u: goto label_1c6638;
        case 0x1c663cu: goto label_1c663c;
        case 0x1c6640u: goto label_1c6640;
        case 0x1c6644u: goto label_1c6644;
        case 0x1c6648u: goto label_1c6648;
        case 0x1c664cu: goto label_1c664c;
        case 0x1c6650u: goto label_1c6650;
        case 0x1c6654u: goto label_1c6654;
        case 0x1c6658u: goto label_1c6658;
        case 0x1c665cu: goto label_1c665c;
        case 0x1c6660u: goto label_1c6660;
        case 0x1c6664u: goto label_1c6664;
        case 0x1c6668u: goto label_1c6668;
        case 0x1c666cu: goto label_1c666c;
        case 0x1c6670u: goto label_1c6670;
        case 0x1c6674u: goto label_1c6674;
        case 0x1c6678u: goto label_1c6678;
        case 0x1c667cu: goto label_1c667c;
        case 0x1c6680u: goto label_1c6680;
        case 0x1c6684u: goto label_1c6684;
        case 0x1c6688u: goto label_1c6688;
        case 0x1c668cu: goto label_1c668c;
        case 0x1c6690u: goto label_1c6690;
        case 0x1c6694u: goto label_1c6694;
        case 0x1c6698u: goto label_1c6698;
        case 0x1c669cu: goto label_1c669c;
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66a4u: goto label_1c66a4;
        case 0x1c66a8u: goto label_1c66a8;
        case 0x1c66acu: goto label_1c66ac;
        case 0x1c66b0u: goto label_1c66b0;
        case 0x1c66b4u: goto label_1c66b4;
        case 0x1c66b8u: goto label_1c66b8;
        case 0x1c66bcu: goto label_1c66bc;
        case 0x1c66c0u: goto label_1c66c0;
        case 0x1c66c4u: goto label_1c66c4;
        case 0x1c66c8u: goto label_1c66c8;
        case 0x1c66ccu: goto label_1c66cc;
        case 0x1c66d0u: goto label_1c66d0;
        case 0x1c66d4u: goto label_1c66d4;
        case 0x1c66d8u: goto label_1c66d8;
        case 0x1c66dcu: goto label_1c66dc;
        case 0x1c66e0u: goto label_1c66e0;
        case 0x1c66e4u: goto label_1c66e4;
        case 0x1c66e8u: goto label_1c66e8;
        case 0x1c66ecu: goto label_1c66ec;
        case 0x1c66f0u: goto label_1c66f0;
        case 0x1c66f4u: goto label_1c66f4;
        case 0x1c66f8u: goto label_1c66f8;
        case 0x1c66fcu: goto label_1c66fc;
        case 0x1c6700u: goto label_1c6700;
        case 0x1c6704u: goto label_1c6704;
        case 0x1c6708u: goto label_1c6708;
        case 0x1c670cu: goto label_1c670c;
        case 0x1c6710u: goto label_1c6710;
        case 0x1c6714u: goto label_1c6714;
        case 0x1c6718u: goto label_1c6718;
        case 0x1c671cu: goto label_1c671c;
        case 0x1c6720u: goto label_1c6720;
        case 0x1c6724u: goto label_1c6724;
        case 0x1c6728u: goto label_1c6728;
        case 0x1c672cu: goto label_1c672c;
        case 0x1c6730u: goto label_1c6730;
        case 0x1c6734u: goto label_1c6734;
        case 0x1c6738u: goto label_1c6738;
        case 0x1c673cu: goto label_1c673c;
        case 0x1c6740u: goto label_1c6740;
        case 0x1c6744u: goto label_1c6744;
        case 0x1c6748u: goto label_1c6748;
        case 0x1c674cu: goto label_1c674c;
        case 0x1c6750u: goto label_1c6750;
        case 0x1c6754u: goto label_1c6754;
        case 0x1c6758u: goto label_1c6758;
        case 0x1c675cu: goto label_1c675c;
        case 0x1c6760u: goto label_1c6760;
        case 0x1c6764u: goto label_1c6764;
        case 0x1c6768u: goto label_1c6768;
        case 0x1c676cu: goto label_1c676c;
        case 0x1c6770u: goto label_1c6770;
        case 0x1c6774u: goto label_1c6774;
        case 0x1c6778u: goto label_1c6778;
        case 0x1c677cu: goto label_1c677c;
        case 0x1c6780u: goto label_1c6780;
        case 0x1c6784u: goto label_1c6784;
        case 0x1c6788u: goto label_1c6788;
        case 0x1c678cu: goto label_1c678c;
        case 0x1c6790u: goto label_1c6790;
        case 0x1c6794u: goto label_1c6794;
        case 0x1c6798u: goto label_1c6798;
        case 0x1c679cu: goto label_1c679c;
        case 0x1c67a0u: goto label_1c67a0;
        case 0x1c67a4u: goto label_1c67a4;
        case 0x1c67a8u: goto label_1c67a8;
        case 0x1c67acu: goto label_1c67ac;
        case 0x1c67b0u: goto label_1c67b0;
        case 0x1c67b4u: goto label_1c67b4;
        case 0x1c67b8u: goto label_1c67b8;
        case 0x1c67bcu: goto label_1c67bc;
        case 0x1c67c0u: goto label_1c67c0;
        case 0x1c67c4u: goto label_1c67c4;
        case 0x1c67c8u: goto label_1c67c8;
        case 0x1c67ccu: goto label_1c67cc;
        case 0x1c67d0u: goto label_1c67d0;
        case 0x1c67d4u: goto label_1c67d4;
        case 0x1c67d8u: goto label_1c67d8;
        case 0x1c67dcu: goto label_1c67dc;
        case 0x1c67e0u: goto label_1c67e0;
        case 0x1c67e4u: goto label_1c67e4;
        case 0x1c67e8u: goto label_1c67e8;
        case 0x1c67ecu: goto label_1c67ec;
        case 0x1c67f0u: goto label_1c67f0;
        case 0x1c67f4u: goto label_1c67f4;
        case 0x1c67f8u: goto label_1c67f8;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6800u: goto label_1c6800;
        case 0x1c6804u: goto label_1c6804;
        case 0x1c6808u: goto label_1c6808;
        case 0x1c680cu: goto label_1c680c;
        case 0x1c6810u: goto label_1c6810;
        case 0x1c6814u: goto label_1c6814;
        case 0x1c6818u: goto label_1c6818;
        case 0x1c681cu: goto label_1c681c;
        case 0x1c6820u: goto label_1c6820;
        case 0x1c6824u: goto label_1c6824;
        case 0x1c6828u: goto label_1c6828;
        case 0x1c682cu: goto label_1c682c;
        case 0x1c6830u: goto label_1c6830;
        case 0x1c6834u: goto label_1c6834;
        case 0x1c6838u: goto label_1c6838;
        case 0x1c683cu: goto label_1c683c;
        case 0x1c6840u: goto label_1c6840;
        case 0x1c6844u: goto label_1c6844;
        case 0x1c6848u: goto label_1c6848;
        case 0x1c684cu: goto label_1c684c;
        case 0x1c6850u: goto label_1c6850;
        case 0x1c6854u: goto label_1c6854;
        case 0x1c6858u: goto label_1c6858;
        case 0x1c685cu: goto label_1c685c;
        case 0x1c6860u: goto label_1c6860;
        case 0x1c6864u: goto label_1c6864;
        case 0x1c6868u: goto label_1c6868;
        case 0x1c686cu: goto label_1c686c;
        case 0x1c6870u: goto label_1c6870;
        case 0x1c6874u: goto label_1c6874;
        case 0x1c6878u: goto label_1c6878;
        case 0x1c687cu: goto label_1c687c;
        case 0x1c6880u: goto label_1c6880;
        case 0x1c6884u: goto label_1c6884;
        case 0x1c6888u: goto label_1c6888;
        case 0x1c688cu: goto label_1c688c;
        default: return;
    }

label_1c60c0:
    // 0x1c60c0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_1c60c4:
    // 0x1c60c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c60c8:
    // 0x1c60c8: 0x34a98080  ori         $t1, $a1, 0x8080
    ctx->pc = 0x1c60c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
label_1c60cc:
    // 0x1c60cc: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x1c60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
label_1c60d0:
    // 0x1c60d0: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x1c60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
label_1c60d4:
    // 0x1c60d4: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x1c60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
label_1c60d8:
    // 0x1c60d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c60d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c60dc:
    // 0x1c60dc: 0x34aa0008  ori         $t2, $a1, 0x8
    ctx->pc = 0x1c60dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_1c60e0:
    // 0x1c60e0: 0x2474021  addu        $t0, $s2, $a3
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_1c60e4:
    // 0x1c60e4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c60e8:
    // 0x1c60e8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x1c60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_1c60ec:
    // 0x1c60ec: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1c60f0:
    // 0x1c60f0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x1c60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_1c60f4:
    // 0x1c60f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1c60f8:
    // 0x1c60f8: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x1c60f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_1c60fc:
    // 0x1c60fc: 0xad0a001c  sw          $t2, 0x1C($t0)
    ctx->pc = 0x1c60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 10));
label_1c6100:
    // 0x1c6100: 0xdc2b8ed0  ld          $t3, -0x7130($at)
    ctx->pc = 0x1c6100u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c6104:
    // 0x1c6104: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x1c6104u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
label_1c6108:
    // 0x1c6108: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c610c:
    // 0x1c610c: 0xfd0b0020  sd          $t3, 0x20($t0)
    ctx->pc = 0x1c610cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 11));
label_1c6110:
    // 0x1c6110: 0xdc2b8ed8  ld          $t3, -0x7128($at)
    ctx->pc = 0x1c6110u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c6114:
    // 0x1c6114: 0xfd0b0028  sd          $t3, 0x28($t0)
    ctx->pc = 0x1c6114u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 11));
label_1c6118:
    // 0x1c6118: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c611c:
    if (ctx->pc == 0x1C611Cu) {
        ctx->pc = 0x1C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6118u;
        // 0x1c611c: 0xfd100038  sd          $s0, 0x38($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6120u;
        goto label_1c6120;
    }
    ctx->pc = 0x1C6118u;
    {
        const bool branch_taken_0x1c6118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6118u;
        // 0x1c611c: 0xfd100038  sd          $s0, 0x38($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6118) {
            ctx->pc = 0x1C6128u;
            goto label_1c6128;
        }
    }
    ctx->pc = 0x1C6120u;
label_1c6120:
    // 0x1c6120: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c6124:
    if (ctx->pc == 0x1C6124u) {
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6120u;
        // 0x1c6124: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6128u;
        goto label_1c6128;
    }
    ctx->pc = 0x1C6120u;
    {
        const bool branch_taken_0x1c6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6120u;
        // 0x1c6124: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6120) {
            ctx->pc = 0x1C612Cu;
            goto label_1c612c;
        }
    }
    ctx->pc = 0x1C6128u;
label_1c6128:
    // 0x1c6128: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1c6128u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_1c612c:
    // 0x1c612c: 0x0  nop
    ctx->pc = 0x1c612cu;
    // NOP
label_1c6130:
    // 0x1c6130: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6130u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6134:
    // 0x1c6134: 0x250b0130  addiu       $t3, $t0, 0x130
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 304));
label_1c6138:
    // 0x1c6138: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c613c:
    // 0x1c613c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_1c6140:
    // 0x1c6140: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c6144:
    // 0x1c6144: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c6144u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c6148:
    // 0x1c6148: 0xacac0018  sw          $t4, 0x18($a1)
    ctx->pc = 0x1c6148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 12));
label_1c614c:
    // 0x1c614c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c614cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c6150:
    // 0x1c6150: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6150u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6154:
    // 0x1c6154: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c6154u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c6158:
    // 0x1c6158: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c6158u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c615c:
    // 0x1c615c: 0xacac0030  sw          $t4, 0x30($a1)
    ctx->pc = 0x1c615cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 12));
label_1c6160:
    // 0x1c6160: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x1c6160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
label_1c6164:
    // 0x1c6164: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6164u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6168:
    // 0x1c6168: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c6168u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c616c:
    // 0x1c616c: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c616cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c6170:
    // 0x1c6170: 0xacac0048  sw          $t4, 0x48($a1)
    ctx->pc = 0x1c6170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 12));
label_1c6174:
    // 0x1c6174: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x1c6174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
label_1c6178:
    // 0x1c6178: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6178u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c617c:
    // 0x1c617c: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c6180:
    // 0x1c6180: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c6180u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c6184:
    // 0x1c6184: 0xacac0060  sw          $t4, 0x60($a1)
    ctx->pc = 0x1c6184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 12));
label_1c6188:
    // 0x1c6188: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x1c6188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
label_1c618c:
    // 0x1c618c: 0xad000130  sw          $zero, 0x130($t0)
    ctx->pc = 0x1c618cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 0));
label_1c6190:
    // 0x1c6190: 0xad000134  sw          $zero, 0x134($t0)
    ctx->pc = 0x1c6190u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 308), GPR_U32(ctx, 0));
label_1c6194:
    // 0x1c6194: 0xad000138  sw          $zero, 0x138($t0)
    ctx->pc = 0x1c6194u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 312), GPR_U32(ctx, 0));
label_1c6198:
    // 0x1c6198: 0xad0a013c  sw          $t2, 0x13C($t0)
    ctx->pc = 0x1c6198u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 316), GPR_U32(ctx, 10));
label_1c619c:
    // 0x1c619c: 0xdc258ed0  ld          $a1, -0x7130($at)
    ctx->pc = 0x1c619cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c61a0:
    // 0x1c61a0: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1c61a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_1c61a4:
    // 0x1c61a4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c61a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c61a8:
    // 0x1c61a8: 0xfd050140  sd          $a1, 0x140($t0)
    ctx->pc = 0x1c61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 320), GPR_U64(ctx, 5));
label_1c61ac:
    // 0x1c61ac: 0xdc258ed8  ld          $a1, -0x7128($at)
    ctx->pc = 0x1c61acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c61b0:
    // 0x1c61b0: 0xfd050148  sd          $a1, 0x148($t0)
    ctx->pc = 0x1c61b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 328), GPR_U64(ctx, 5));
label_1c61b4:
    // 0x1c61b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c61b8:
    if (ctx->pc == 0x1C61B8u) {
        ctx->pc = 0x1C61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B4u;
        // 0x1c61b8: 0xfd100158  sd          $s0, 0x158($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 344), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61BCu;
        goto label_1c61bc;
    }
    ctx->pc = 0x1C61B4u;
    {
        const bool branch_taken_0x1c61b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B4u;
        // 0x1c61b8: 0xfd100158  sd          $s0, 0x158($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 344), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61b4) {
            ctx->pc = 0x1C61C4u;
            goto label_1c61c4;
        }
    }
    ctx->pc = 0x1C61BCu;
label_1c61bc:
    // 0x1c61bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c61c0:
    if (ctx->pc == 0x1C61C0u) {
        ctx->pc = 0x1C61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61BCu;
        // 0x1c61c0: 0xfd640000  sd          $a0, 0x0($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61C4u;
        goto label_1c61c4;
    }
    ctx->pc = 0x1C61BCu;
    {
        const bool branch_taken_0x1c61bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61BCu;
        // 0x1c61c0: 0xfd640000  sd          $a0, 0x0($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61bc) {
            ctx->pc = 0x1C61CCu;
            goto label_1c61cc;
        }
    }
    ctx->pc = 0x1C61C4u;
label_1c61c4:
    // 0x1c61c4: 0x0  nop
    ctx->pc = 0x1c61c4u;
    // NOP
label_1c61c8:
    // 0x1c61c8: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x1c61c8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
label_1c61cc:
    // 0x1c61cc: 0x0  nop
    ctx->pc = 0x1c61ccu;
    // NOP
label_1c61d0:
    // 0x1c61d0: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c61d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c61d4:
    // 0x1c61d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c61d8:
    // 0x1c61d8: 0x24e70090  addiu       $a3, $a3, 0x90
    ctx->pc = 0x1c61d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
label_1c61dc:
    // 0x1c61dc: 0x2cc50002  sltiu       $a1, $a2, 0x2
    ctx->pc = 0x1c61dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c61e0:
    // 0x1c61e0: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c61e4:
    // 0x1c61e4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c61e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c61e8:
    // 0x1c61e8: 0xad680018  sw          $t0, 0x18($t3)
    ctx->pc = 0x1c61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 8));
label_1c61ec:
    // 0x1c61ec: 0xad62001c  sw          $v0, 0x1C($t3)
    ctx->pc = 0x1c61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 2));
label_1c61f0:
    // 0x1c61f0: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c61f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c61f4:
    // 0x1c61f4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c61f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c61f8:
    // 0x1c61f8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c61f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c61fc:
    // 0x1c61fc: 0xad680030  sw          $t0, 0x30($t3)
    ctx->pc = 0x1c61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 8));
label_1c6200:
    // 0x1c6200: 0xad620034  sw          $v0, 0x34($t3)
    ctx->pc = 0x1c6200u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 2));
label_1c6204:
    // 0x1c6204: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c6204u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6208:
    // 0x1c6208: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c620c:
    // 0x1c620c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c620cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c6210:
    // 0x1c6210: 0xad680048  sw          $t0, 0x48($t3)
    ctx->pc = 0x1c6210u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 72), GPR_U32(ctx, 8));
label_1c6214:
    // 0x1c6214: 0xad62004c  sw          $v0, 0x4C($t3)
    ctx->pc = 0x1c6214u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 76), GPR_U32(ctx, 2));
label_1c6218:
    // 0x1c6218: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c6218u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c621c:
    // 0x1c621c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c6220:
    // 0x1c6220: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c6220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c6224:
    // 0x1c6224: 0xad680060  sw          $t0, 0x60($t3)
    ctx->pc = 0x1c6224u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 96), GPR_U32(ctx, 8));
label_1c6228:
    // 0x1c6228: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
label_1c622c:
    if (ctx->pc == 0x1C622Cu) {
        ctx->pc = 0x1C622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6228u;
        // 0x1c622c: 0xad620064  sw          $v0, 0x64($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6230u;
        goto label_1c6230;
    }
    ctx->pc = 0x1C6228u;
    {
        const bool branch_taken_0x1c6228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6228u;
        // 0x1c622c: 0xad620064  sw          $v0, 0x64($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6228) {
            ctx->pc = 0x1C60E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60e0;
        }
    }
    ctx->pc = 0x1C6230u;
label_1c6230:
    // 0x1c6230: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c6234:
    // 0x1c6234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c6238:
    // 0x1c6238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c623c:
    // 0x1c623c: 0x26440250  addiu       $a0, $s2, 0x250
    ctx->pc = 0x1c623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
label_1c6240:
    // 0x1c6240: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x1c6240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1c6244:
    // 0x1c6244: 0x461508c2  mul.s       $f3, $f1, $f21
    ctx->pc = 0x1c6244u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1c6248:
    // 0x1c6248: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c6248u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_1c624c:
    // 0x1c624c: 0xe6410260  swc1        $f1, 0x260($s2)
    ctx->pc = 0x1c624cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 608), bits); }
label_1c6250:
    // 0x1c6250: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x1c6250u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_1c6254:
    // 0x1c6254: 0xe6440264  swc1        $f4, 0x264($s2)
    ctx->pc = 0x1c6254u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 612), bits); }
label_1c6258:
    // 0x1c6258: 0xae400268  sw          $zero, 0x268($s2)
    ctx->pc = 0x1c6258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 0));
label_1c625c:
    // 0x1c625c: 0xe640026c  swc1        $f0, 0x26C($s2)
    ctx->pc = 0x1c625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 620), bits); }
label_1c6260:
    // 0x1c6260: 0xe6410270  swc1        $f1, 0x270($s2)
    ctx->pc = 0x1c6260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 624), bits); }
label_1c6264:
    // 0x1c6264: 0xe6420274  swc1        $f2, 0x274($s2)
    ctx->pc = 0x1c6264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 628), bits); }
label_1c6268:
    // 0x1c6268: 0xae400278  sw          $zero, 0x278($s2)
    ctx->pc = 0x1c6268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 0));
label_1c626c:
    // 0x1c626c: 0xe640027c  swc1        $f0, 0x27C($s2)
    ctx->pc = 0x1c626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 636), bits); }
label_1c6270:
    // 0x1c6270: 0xe6430280  swc1        $f3, 0x280($s2)
    ctx->pc = 0x1c6270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_1c6274:
    // 0x1c6274: 0xe6440284  swc1        $f4, 0x284($s2)
    ctx->pc = 0x1c6274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 644), bits); }
label_1c6278:
    // 0x1c6278: 0xae400288  sw          $zero, 0x288($s2)
    ctx->pc = 0x1c6278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 0));
label_1c627c:
    // 0x1c627c: 0xe640028c  swc1        $f0, 0x28C($s2)
    ctx->pc = 0x1c627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 652), bits); }
label_1c6280:
    // 0x1c6280: 0xe6430290  swc1        $f3, 0x290($s2)
    ctx->pc = 0x1c6280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 656), bits); }
label_1c6284:
    // 0x1c6284: 0xe6420294  swc1        $f2, 0x294($s2)
    ctx->pc = 0x1c6284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 660), bits); }
label_1c6288:
    // 0x1c6288: 0xae400298  sw          $zero, 0x298($s2)
    ctx->pc = 0x1c6288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 664), GPR_U32(ctx, 0));
label_1c628c:
    // 0x1c628c: 0xe640029c  swc1        $f0, 0x29C($s2)
    ctx->pc = 0x1c628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 668), bits); }
label_1c6290:
    // 0x1c6290: 0xe64002d0  swc1        $f0, 0x2D0($s2)
    ctx->pc = 0x1c6290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 720), bits); }
label_1c6294:
    // 0x1c6294: 0xe64002d4  swc1        $f0, 0x2D4($s2)
    ctx->pc = 0x1c6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 724), bits); }
label_1c6298:
    // 0x1c6298: 0xe64002d8  swc1        $f0, 0x2D8($s2)
    ctx->pc = 0x1c6298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 728), bits); }
label_1c629c:
    // 0x1c629c: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x1c629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
label_1c62a0:
    // 0x1c62a0: 0xae4002a0  sw          $zero, 0x2A0($s2)
    ctx->pc = 0x1c62a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
label_1c62a4:
    // 0x1c62a4: 0xae4002a4  sw          $zero, 0x2A4($s2)
    ctx->pc = 0x1c62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
label_1c62a8:
    // 0x1c62a8: 0xae4002a8  sw          $zero, 0x2A8($s2)
    ctx->pc = 0x1c62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
label_1c62ac:
    // 0x1c62ac: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x1c62acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
label_1c62b0:
    // 0x1c62b0: 0xae400310  sw          $zero, 0x310($s2)
    ctx->pc = 0x1c62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 784), GPR_U32(ctx, 0));
label_1c62b4:
    // 0x1c62b4: 0xae400314  sw          $zero, 0x314($s2)
    ctx->pc = 0x1c62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 788), GPR_U32(ctx, 0));
label_1c62b8:
    // 0x1c62b8: 0xae400318  sw          $zero, 0x318($s2)
    ctx->pc = 0x1c62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 792), GPR_U32(ctx, 0));
label_1c62bc:
    // 0x1c62bc: 0xae40031c  sw          $zero, 0x31C($s2)
    ctx->pc = 0x1c62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 0));
label_1c62c0:
    // 0x1c62c0: 0xae400320  sw          $zero, 0x320($s2)
    ctx->pc = 0x1c62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 0));
label_1c62c4:
    // 0x1c62c4: 0xc066e26  jal         func_19B898
label_1c62c8:
    if (ctx->pc == 0x1C62C8u) {
        ctx->pc = 0x1C62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62C4u;
        // 0x1c62c8: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62CCu;
        goto label_1c62cc;
    }
    ctx->pc = 0x1C62C4u;
    SET_GPR_U32(ctx, 31, 0x1C62CCu);
    ctx->pc = 0x1C62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C62C4u;
    // 0x1c62c8: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C62C4u, 0x1C62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62CCu;
label_1c62cc:
    // 0x1c62cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c62d0:
    // 0x1c62d0: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1c62d4:
    // 0x1c62d4: 0xa24402e4  sb          $a0, 0x2E4($s2)
    ctx->pc = 0x1c62d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 740), (uint8_t)GPR_U32(ctx, 4));
label_1c62d8:
    // 0x1c62d8: 0x24637960  addiu       $v1, $v1, 0x7960
    ctx->pc = 0x1c62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31072));
label_1c62dc:
    // 0x1c62dc: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x1c62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_1c62e0:
    // 0x1c62e0: 0xae430368  sw          $v1, 0x368($s2)
    ctx->pc = 0x1c62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 872), GPR_U32(ctx, 3));
label_1c62e4:
    // 0x1c62e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c62e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c62e8:
    // 0x1c62e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c62ec:
    // 0x1c62ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c62ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c62f0:
    // 0x1c62f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c62f4:
    // 0x1c62f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c62f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c62f8:
    // 0x1c62f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c62f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c62fc:
    // 0x1c62fc: 0x3e00008  jr          $ra
label_1c6300:
    if (ctx->pc == 0x1C6300u) {
        ctx->pc = 0x1C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62FCu;
        // 0x1c6300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6304u;
        goto label_1c6304;
    }
    ctx->pc = 0x1C62FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62FCu;
        // 0x1c6300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C62FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6304u;
label_1c6304:
    // 0x1c6304: 0x0  nop
    ctx->pc = 0x1c6304u;
    // NOP
label_1c6308:
    // 0x1c6308: 0x0  nop
    ctx->pc = 0x1c6308u;
    // NOP
label_1c630c:
    // 0x1c630c: 0x0  nop
    ctx->pc = 0x1c630cu;
    // NOP
label_1c6310:
    // 0x1c6310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c6314:
    // 0x1c6314: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1c6314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1c6318:
    // 0x1c6318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c631c:
    // 0x1c631c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6320:
    // 0x1c6320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c6324:
    // 0x1c6324: 0x28410101  slti        $at, $v0, 0x101
    ctx->pc = 0x1c6324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
label_1c6328:
    // 0x1c6328: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x1c6328u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
label_1c632c:
    // 0x1c632c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6330:
    // 0x1c6330: 0xa08302e1  sb          $v1, 0x2E1($a0)
    ctx->pc = 0x1c6330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 737), (uint8_t)GPR_U32(ctx, 3));
label_1c6334:
    // 0x1c6334: 0xa08002e0  sb          $zero, 0x2E0($a0)
    ctx->pc = 0x1c6334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 736), (uint8_t)GPR_U32(ctx, 0));
label_1c6338:
    // 0x1c6338: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1c633c:
    if (ctx->pc == 0x1C633Cu) {
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6340u;
        goto label_1c6340;
    }
    ctx->pc = 0x1C6338u;
    {
        const bool branch_taken_0x1c6338 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6338) {
            ctx->pc = 0x1C6350u;
            goto label_1c6350;
        }
    }
    ctx->pc = 0x1C6340u;
label_1c6340:
    // 0x1c6340: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c6344:
    // 0x1c6344: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c6344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1c6348:
    // 0x1c6348: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c634c:
    if (ctx->pc == 0x1C634Cu) {
        ctx->pc = 0x1C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6348u;
        // 0x1c634c: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6350u;
        goto label_1c6350;
    }
    ctx->pc = 0x1C6348u;
    {
        const bool branch_taken_0x1c6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6348u;
        // 0x1c634c: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6348) {
            ctx->pc = 0x1C6354u;
            goto label_1c6354;
        }
    }
    ctx->pc = 0x1C6350u;
label_1c6350:
    // 0x1c6350: 0xa20702e3  sb          $a3, 0x2E3($s0)
    ctx->pc = 0x1c6350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 7));
label_1c6354:
    // 0x1c6354: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c6358:
    // 0x1c6358: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1c635c:
    // 0x1c635c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c6360:
    if (ctx->pc == 0x1C6360u) {
        ctx->pc = 0x1C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C635Cu;
        // 0x1c6360: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6364u;
        goto label_1c6364;
    }
    ctx->pc = 0x1C635Cu;
    {
        const bool branch_taken_0x1c635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C635Cu;
        // 0x1c6360: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c635c) {
            ctx->pc = 0x1C6370u;
            goto label_1c6370;
        }
    }
    ctx->pc = 0x1C6364u;
label_1c6364:
    // 0x1c6364: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c6368:
    // 0x1c6368: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c6368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1c636c:
    // 0x1c636c: 0xa20202e0  sb          $v0, 0x2E0($s0)
    ctx->pc = 0x1c636cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
label_1c6370:
    // 0x1c6370: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c6374:
    // 0x1c6374: 0xa20302e2  sb          $v1, 0x2E2($s0)
    ctx->pc = 0x1c6374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 3));
label_1c6378:
    // 0x1c6378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c637c:
    // 0x1c637c: 0xa20002e8  sb          $zero, 0x2E8($s0)
    ctx->pc = 0x1c637cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 0));
label_1c6380:
    // 0x1c6380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6384:
    // 0x1c6384: 0xa20002e9  sb          $zero, 0x2E9($s0)
    ctx->pc = 0x1c6384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 745), (uint8_t)GPR_U32(ctx, 0));
label_1c6388:
    // 0x1c6388: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x1c6388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_1c638c:
    // 0x1c638c: 0xa20002eb  sb          $zero, 0x2EB($s0)
    ctx->pc = 0x1c638cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 0));
label_1c6390:
    // 0x1c6390: 0xa20002ec  sb          $zero, 0x2EC($s0)
    ctx->pc = 0x1c6390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 748), (uint8_t)GPR_U32(ctx, 0));
label_1c6394:
    // 0x1c6394: 0xa60202f2  sh          $v0, 0x2F2($s0)
    ctx->pc = 0x1c6394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 754), (uint16_t)GPR_U32(ctx, 2));
label_1c6398:
    // 0x1c6398: 0xa60202f4  sh          $v0, 0x2F4($s0)
    ctx->pc = 0x1c6398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 756), (uint16_t)GPR_U32(ctx, 2));
label_1c639c:
    // 0x1c639c: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x1c639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
label_1c63a0:
    // 0x1c63a0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x1c63a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
label_1c63a4:
    // 0x1c63a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c63a8:
    // 0x1c63a8: 0x34eb8080  ori         $t3, $a3, 0x8080
    ctx->pc = 0x1c63a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
label_1c63ac:
    // 0x1c63ac: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
label_1c63b0:
    // 0x1c63b0: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_1c63b4:
    // 0x1c63b4: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
label_1c63b8:
    // 0x1c63b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c63bc:
    // 0x1c63bc: 0x34ec0008  ori         $t4, $a3, 0x8
    ctx->pc = 0x1c63bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_1c63c0:
    // 0x1c63c0: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1c63c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_1c63c4:
    // 0x1c63c4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c63c8:
    // 0x1c63c8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x1c63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
label_1c63cc:
    // 0x1c63cc: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1c63d0:
    // 0x1c63d0: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x1c63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
label_1c63d4:
    // 0x1c63d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1c63d8:
    // 0x1c63d8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x1c63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
label_1c63dc:
    // 0x1c63dc: 0xad4c001c  sw          $t4, 0x1C($t2)
    ctx->pc = 0x1c63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
label_1c63e0:
    // 0x1c63e0: 0xdc2d8ed0  ld          $t5, -0x7130($at)
    ctx->pc = 0x1c63e0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c63e4:
    // 0x1c63e4: 0x65ad0001  daddiu      $t5, $t5, 0x1
    ctx->pc = 0x1c63e4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)1);
label_1c63e8:
    // 0x1c63e8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c63ec:
    // 0x1c63ec: 0xfd4d0020  sd          $t5, 0x20($t2)
    ctx->pc = 0x1c63ecu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 13));
label_1c63f0:
    // 0x1c63f0: 0xdc2d8ed8  ld          $t5, -0x7128($at)
    ctx->pc = 0x1c63f0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c63f4:
    // 0x1c63f4: 0xfd4d0028  sd          $t5, 0x28($t2)
    ctx->pc = 0x1c63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 13));
label_1c63f8:
    // 0x1c63f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1c63fc:
    if (ctx->pc == 0x1C63FCu) {
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0xfd460038  sd          $a2, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6400u;
        goto label_1c6400;
    }
    ctx->pc = 0x1C63F8u;
    {
        const bool branch_taken_0x1c63f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0xfd460038  sd          $a2, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63f8) {
            ctx->pc = 0x1C6408u;
            goto label_1c6408;
        }
    }
    ctx->pc = 0x1C6400u;
label_1c6400:
    // 0x1c6400: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c6404:
    if (ctx->pc == 0x1C6404u) {
        ctx->pc = 0x1C6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6400u;
        // 0x1c6404: 0xfce40000  sd          $a0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6408u;
        goto label_1c6408;
    }
    ctx->pc = 0x1C6400u;
    {
        const bool branch_taken_0x1c6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6400u;
        // 0x1c6404: 0xfce40000  sd          $a0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6400) {
            ctx->pc = 0x1C640Cu;
            goto label_1c640c;
        }
    }
    ctx->pc = 0x1C6408u;
label_1c6408:
    // 0x1c6408: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1c6408u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_1c640c:
    // 0x1c640c: 0x0  nop
    ctx->pc = 0x1c640cu;
    // NOP
label_1c6410:
    // 0x1c6410: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6410u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6414:
    // 0x1c6414: 0x254d0130  addiu       $t5, $t2, 0x130
    ctx->pc = 0x1c6414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 304));
label_1c6418:
    // 0x1c6418: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c641c:
    // 0x1c641c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
label_1c6420:
    // 0x1c6420: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6420u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c6424:
    // 0x1c6424: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c6428:
    // 0x1c6428: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x1c6428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
label_1c642c:
    // 0x1c642c: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1c642cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1c6430:
    // 0x1c6430: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6430u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6434:
    // 0x1c6434: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c6438:
    // 0x1c6438: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6438u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c643c:
    // 0x1c643c: 0xacee0030  sw          $t6, 0x30($a3)
    ctx->pc = 0x1c643cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 14));
label_1c6440:
    // 0x1c6440: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x1c6440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
label_1c6444:
    // 0x1c6444: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6444u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6448:
    // 0x1c6448: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c644c:
    // 0x1c644c: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c644cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c6450:
    // 0x1c6450: 0xacee0048  sw          $t6, 0x48($a3)
    ctx->pc = 0x1c6450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 14));
label_1c6454:
    // 0x1c6454: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x1c6454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
label_1c6458:
    // 0x1c6458: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6458u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c645c:
    // 0x1c645c: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c6460:
    // 0x1c6460: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c6464:
    // 0x1c6464: 0xacee0060  sw          $t6, 0x60($a3)
    ctx->pc = 0x1c6464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 14));
label_1c6468:
    // 0x1c6468: 0xace20064  sw          $v0, 0x64($a3)
    ctx->pc = 0x1c6468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 2));
label_1c646c:
    // 0x1c646c: 0xad400130  sw          $zero, 0x130($t2)
    ctx->pc = 0x1c646cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 304), GPR_U32(ctx, 0));
label_1c6470:
    // 0x1c6470: 0xad400134  sw          $zero, 0x134($t2)
    ctx->pc = 0x1c6470u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 0));
label_1c6474:
    // 0x1c6474: 0xad400138  sw          $zero, 0x138($t2)
    ctx->pc = 0x1c6474u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 312), GPR_U32(ctx, 0));
label_1c6478:
    // 0x1c6478: 0xad4c013c  sw          $t4, 0x13C($t2)
    ctx->pc = 0x1c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 316), GPR_U32(ctx, 12));
label_1c647c:
    // 0x1c647c: 0xdc278ed0  ld          $a3, -0x7130($at)
    ctx->pc = 0x1c647cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c6480:
    // 0x1c6480: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1c6480u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
label_1c6484:
    // 0x1c6484: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c6488:
    // 0x1c6488: 0xfd470140  sd          $a3, 0x140($t2)
    ctx->pc = 0x1c6488u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 320), GPR_U64(ctx, 7));
label_1c648c:
    // 0x1c648c: 0xdc278ed8  ld          $a3, -0x7128($at)
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c6490:
    // 0x1c6490: 0xfd470148  sd          $a3, 0x148($t2)
    ctx->pc = 0x1c6490u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 328), GPR_U64(ctx, 7));
label_1c6494:
    // 0x1c6494: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1c6498:
    if (ctx->pc == 0x1C6498u) {
        ctx->pc = 0x1C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6494u;
        // 0x1c6498: 0xfd460158  sd          $a2, 0x158($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 344), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C649Cu;
        goto label_1c649c;
    }
    ctx->pc = 0x1C6494u;
    {
        const bool branch_taken_0x1c6494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6494u;
        // 0x1c6498: 0xfd460158  sd          $a2, 0x158($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 344), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6494) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C649Cu;
label_1c649c:
    // 0x1c649c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c64a0:
    if (ctx->pc == 0x1C64A0u) {
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0xfda40000  sd          $a0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64A4u;
        goto label_1c64a4;
    }
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0xfda40000  sd          $a0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C64ACu;
            goto label_1c64ac;
        }
    }
    ctx->pc = 0x1C64A4u;
label_1c64a4:
    // 0x1c64a4: 0x0  nop
    ctx->pc = 0x1c64a4u;
    // NOP
label_1c64a8:
    // 0x1c64a8: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x1c64a8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
label_1c64ac:
    // 0x1c64ac: 0x0  nop
    ctx->pc = 0x1c64acu;
    // NOP
label_1c64b0:
    // 0x1c64b0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64b4:
    // 0x1c64b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c64b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1c64b8:
    // 0x1c64b8: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x1c64b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
label_1c64bc:
    // 0x1c64bc: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x1c64bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c64c0:
    // 0x1c64c0: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c64c4:
    // 0x1c64c4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c64c8:
    // 0x1c64c8: 0xadaa0018  sw          $t2, 0x18($t5)
    ctx->pc = 0x1c64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
label_1c64cc:
    // 0x1c64cc: 0xada2001c  sw          $v0, 0x1C($t5)
    ctx->pc = 0x1c64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 2));
label_1c64d0:
    // 0x1c64d0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64d4:
    // 0x1c64d4: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c64d8:
    // 0x1c64d8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c64dc:
    // 0x1c64dc: 0xadaa0030  sw          $t2, 0x30($t5)
    ctx->pc = 0x1c64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 10));
label_1c64e0:
    // 0x1c64e0: 0xada20034  sw          $v0, 0x34($t5)
    ctx->pc = 0x1c64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 2));
label_1c64e4:
    // 0x1c64e4: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64e4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64e8:
    // 0x1c64e8: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c64ec:
    // 0x1c64ec: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c64f0:
    // 0x1c64f0: 0xadaa0048  sw          $t2, 0x48($t5)
    ctx->pc = 0x1c64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 10));
label_1c64f4:
    // 0x1c64f4: 0xada2004c  sw          $v0, 0x4C($t5)
    ctx->pc = 0x1c64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 2));
label_1c64f8:
    // 0x1c64f8: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64f8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64fc:
    // 0x1c64fc: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c6500:
    // 0x1c6500: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c6500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c6504:
    // 0x1c6504: 0xadaa0060  sw          $t2, 0x60($t5)
    ctx->pc = 0x1c6504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 10));
label_1c6508:
    // 0x1c6508: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
label_1c650c:
    if (ctx->pc == 0x1C650Cu) {
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0xada20064  sw          $v0, 0x64($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6510u;
        goto label_1c6510;
    }
    ctx->pc = 0x1C6508u;
    {
        const bool branch_taken_0x1c6508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0xada20064  sw          $v0, 0x64($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6508) {
            ctx->pc = 0x1C63C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c63c0;
        }
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c6514:
    // 0x1c6514: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1c6518:
    // 0x1c6518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c651c:
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
label_1c6520:
    // 0x1c6520: 0x460d0882  mul.s       $f2, $f1, $f13
    ctx->pc = 0x1c6520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_1c6524:
    // 0x1c6524: 0x460c08c2  mul.s       $f3, $f1, $f12
    ctx->pc = 0x1c6524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1c6528:
    // 0x1c6528: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c6528u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_1c652c:
    // 0x1c652c: 0xe6010260  swc1        $f1, 0x260($s0)
    ctx->pc = 0x1c652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_1c6530:
    // 0x1c6530: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x1c6530u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_1c6534:
    // 0x1c6534: 0xe6040264  swc1        $f4, 0x264($s0)
    ctx->pc = 0x1c6534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
label_1c6538:
    // 0x1c6538: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c6538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_1c653c:
    // 0x1c653c: 0xe600026c  swc1        $f0, 0x26C($s0)
    ctx->pc = 0x1c653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 620), bits); }
label_1c6540:
    // 0x1c6540: 0xe6010270  swc1        $f1, 0x270($s0)
    ctx->pc = 0x1c6540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_1c6544:
    // 0x1c6544: 0xe6020274  swc1        $f2, 0x274($s0)
    ctx->pc = 0x1c6544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_1c6548:
    // 0x1c6548: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_1c654c:
    // 0x1c654c: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x1c654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
label_1c6550:
    // 0x1c6550: 0xe6030280  swc1        $f3, 0x280($s0)
    ctx->pc = 0x1c6550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_1c6554:
    // 0x1c6554: 0xe6040284  swc1        $f4, 0x284($s0)
    ctx->pc = 0x1c6554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_1c6558:
    // 0x1c6558: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1c6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
label_1c655c:
    // 0x1c655c: 0xe600028c  swc1        $f0, 0x28C($s0)
    ctx->pc = 0x1c655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
label_1c6560:
    // 0x1c6560: 0xe6030290  swc1        $f3, 0x290($s0)
    ctx->pc = 0x1c6560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_1c6564:
    // 0x1c6564: 0xe6020294  swc1        $f2, 0x294($s0)
    ctx->pc = 0x1c6564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
label_1c6568:
    // 0x1c6568: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c6568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
label_1c656c:
    // 0x1c656c: 0xe600029c  swc1        $f0, 0x29C($s0)
    ctx->pc = 0x1c656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
label_1c6570:
    // 0x1c6570: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1c6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_1c6574:
    // 0x1c6574: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1c6574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_1c6578:
    // 0x1c6578: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1c6578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_1c657c:
    // 0x1c657c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1c657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_1c6580:
    // 0x1c6580: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c6580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
label_1c6584:
    // 0x1c6584: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1c6584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
label_1c6588:
    // 0x1c6588: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1c6588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
label_1c658c:
    // 0x1c658c: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c658cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
label_1c6590:
    // 0x1c6590: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1c6590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
label_1c6594:
    // 0x1c6594: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1c6594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
label_1c6598:
    // 0x1c6598: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x1c6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
label_1c659c:
    // 0x1c659c: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x1c659cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
label_1c65a0:
    // 0x1c65a0: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x1c65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
label_1c65a4:
    // 0x1c65a4: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x1c65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
label_1c65a8:
    // 0x1c65a8: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1c65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_1c65ac:
    // 0x1c65ac: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1c65acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_1c65b0:
    // 0x1c65b0: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1c65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
label_1c65b4:
    // 0x1c65b4: 0xe60002bc  swc1        $f0, 0x2BC($s0)
    ctx->pc = 0x1c65b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
label_1c65b8:
    // 0x1c65b8: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x1c65b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
label_1c65bc:
    // 0x1c65bc: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1c65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
label_1c65c0:
    // 0x1c65c0: 0xe60002c8  swc1        $f0, 0x2C8($s0)
    ctx->pc = 0x1c65c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
label_1c65c4:
    // 0x1c65c4: 0xc066e26  jal         func_19B898
label_1c65c8:
    if (ctx->pc == 0x1C65C8u) {
        ctx->pc = 0x1C65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65C4u;
        // 0x1c65c8: 0xe60002cc  swc1        $f0, 0x2CC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65CCu;
        goto label_1c65cc;
    }
    ctx->pc = 0x1C65C4u;
    SET_GPR_U32(ctx, 31, 0x1C65CCu);
    ctx->pc = 0x1C65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65C4u;
    // 0x1c65c8: 0xe60002cc  swc1        $f0, 0x2CC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C65C4u, 0x1C65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65CCu;
label_1c65cc:
    // 0x1c65cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c65ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c65d0:
    // 0x1c65d0: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1c65d4:
    // 0x1c65d4: 0xa20402e4  sb          $a0, 0x2E4($s0)
    ctx->pc = 0x1c65d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 4));
label_1c65d8:
    // 0x1c65d8: 0x24637960  addiu       $v1, $v1, 0x7960
    ctx->pc = 0x1c65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31072));
label_1c65dc:
    // 0x1c65dc: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1c65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1c65e0:
    // 0x1c65e0: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x1c65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_1c65e4:
    // 0x1c65e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c65e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c65e8:
    // 0x1c65e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c65e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c65ec:
    // 0x1c65ec: 0x3e00008  jr          $ra
label_1c65f0:
    if (ctx->pc == 0x1C65F0u) {
        ctx->pc = 0x1C65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65ECu;
        // 0x1c65f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65F4u;
        goto label_1c65f4;
    }
    ctx->pc = 0x1C65ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65ECu;
        // 0x1c65f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C65ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C65F4u;
label_1c65f4:
    // 0x1c65f4: 0x0  nop
    ctx->pc = 0x1c65f4u;
    // NOP
label_1c65f8:
    // 0x1c65f8: 0x0  nop
    ctx->pc = 0x1c65f8u;
    // NOP
label_1c65fc:
    // 0x1c65fc: 0x0  nop
    ctx->pc = 0x1c65fcu;
    // NOP
label_1c6600:
    // 0x1c6600: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1c6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1c6604:
    // 0x1c6604: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1c6608:
    // 0x1c6608: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1c660c:
    // 0x1c660c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1c6610:
    // 0x1c6610: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c6614:
    // 0x1c6614: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c6614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c6618:
    // 0x1c6618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c661c:
    // 0x1c661c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c6620:
    // 0x1c6620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c6624:
    // 0x1c6624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c6628:
    // 0x1c6628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c662c:
    // 0x1c662c: 0x908402e4  lbu         $a0, 0x2E4($a0)
    ctx->pc = 0x1c662cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
label_1c6630:
    // 0x1c6630: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1c6630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c6634:
    // 0x1c6634: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c6638:
    if (ctx->pc == 0x1C6638u) {
        ctx->pc = 0x1C663Cu;
        goto label_1c663c;
    }
    ctx->pc = 0x1C6634u;
    {
        const bool branch_taken_0x1c6634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6634) {
            ctx->pc = 0x1C6648u;
            goto label_1c6648;
        }
    }
    ctx->pc = 0x1C663Cu;
label_1c663c:
    // 0x1c663c: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6640:
    // 0x1c6640: 0x148300e1  bne         $a0, $v1, . + 4 + (0xE1 << 2)
label_1c6644:
    if (ctx->pc == 0x1C6644u) {
        ctx->pc = 0x1C6648u;
        goto label_1c6648;
    }
    ctx->pc = 0x1C6640u;
    {
        const bool branch_taken_0x1c6640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6640) {
            ctx->pc = 0x1C69C8u;
            { ctx->pc = 0x1c69c8; return; }
        }
    }
    ctx->pc = 0x1C6648u;
label_1c6648:
    // 0x1c6648: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c6648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c664c:
    // 0x1c664c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1c664cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1c6650:
    // 0x1c6650: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c6654:
    // 0x1c6654: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x1c6654u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c6658:
    // 0x1c6658: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x1c6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c665c:
    // 0x1c665c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c6660:
    if (ctx->pc == 0x1C6660u) {
        ctx->pc = 0x1C6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C665Cu;
        // 0x1c6660: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6664u;
        goto label_1c6664;
    }
    ctx->pc = 0x1C665Cu;
    {
        const bool branch_taken_0x1c665c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C665Cu;
        // 0x1c6660: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c665c) {
            ctx->pc = 0x1C667Cu;
            goto label_1c667c;
        }
    }
    ctx->pc = 0x1C6664u;
label_1c6664:
    // 0x1c6664: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1c6664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c6668:
    // 0x1c6668: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c6668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c666c:
    // 0x1c666c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c6670:
    // 0x1c6670: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c6674:
    // 0x1c6674: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c6678:
    if (ctx->pc == 0x1C6678u) {
        ctx->pc = 0x1C6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6674u;
        // 0x1c6678: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C667Cu;
        goto label_1c667c;
    }
    ctx->pc = 0x1C6674u;
    {
        const bool branch_taken_0x1c6674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6674u;
        // 0x1c6678: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6674) {
            ctx->pc = 0x1C668Cu;
            goto label_1c668c;
        }
    }
    ctx->pc = 0x1C667Cu;
label_1c667c:
    // 0x1c667c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c6680:
    // 0x1c6680: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c6684:
    // 0x1c6684: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c6684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c6688:
    // 0x1c6688: 0x24570130  addiu       $s7, $v0, 0x130
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_1c668c:
    // 0x1c668c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c6690:
    // 0x1c6690: 0xc066e44  jal         func_19B910
label_1c6694:
    if (ctx->pc == 0x1C6694u) {
        ctx->pc = 0x1C6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6690u;
        // 0x1c6694: 0x26f10020  addiu       $s1, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6698u;
        goto label_1c6698;
    }
    ctx->pc = 0x1C6690u;
    SET_GPR_U32(ctx, 31, 0x1C6698u);
    ctx->pc = 0x1C6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6690u;
    // 0x1c6694: 0x26f10020  addiu       $s1, $s7, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1C6698u;
label_1c6698:
    // 0x1c6698: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1c6698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c669c:
    // 0x1c669c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1c669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1c66a0:
    // 0x1c66a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c66a4:
    if (ctx->pc == 0x1C66A4u) {
        ctx->pc = 0x1C66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66A0u;
        // 0x1c66a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66A8u;
        goto label_1c66a8;
    }
    ctx->pc = 0x1C66A0u;
    {
        const bool branch_taken_0x1c66a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66A0u;
        // 0x1c66a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66a0) {
            ctx->pc = 0x1C66D4u;
            goto label_1c66d4;
        }
    }
    ctx->pc = 0x1C66A8u;
label_1c66a8:
    // 0x1c66a8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c66a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c66ac:
    // 0x1c66ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c66b0:
    if (ctx->pc == 0x1C66B0u) {
        ctx->pc = 0x1C66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66ACu;
        // 0x1c66b0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66B4u;
        goto label_1c66b4;
    }
    ctx->pc = 0x1C66ACu;
    {
        const bool branch_taken_0x1c66ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66ACu;
        // 0x1c66b0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66ac) {
            ctx->pc = 0x1C66C4u;
            goto label_1c66c4;
        }
    }
    ctx->pc = 0x1C66B4u;
label_1c66b4:
    // 0x1c66b4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1c66b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1c66b8:
    // 0x1c66b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c66bc:
    if (ctx->pc == 0x1C66BCu) {
        ctx->pc = 0x1C66C0u;
        goto label_1c66c0;
    }
    ctx->pc = 0x1C66B8u;
    {
        const bool branch_taken_0x1c66b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c66b8) {
            ctx->pc = 0x1C66D0u;
            goto label_1c66d0;
        }
    }
    ctx->pc = 0x1C66C0u;
label_1c66c0:
    // 0x1c66c0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1c66c4:
    // 0x1c66c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c66c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c66c8:
    // 0x1c66c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c66cc:
    if (ctx->pc == 0x1C66CCu) {
        ctx->pc = 0x1C66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66C8u;
        // 0x1c66cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66D0u;
        goto label_1c66d0;
    }
    ctx->pc = 0x1C66C8u;
    {
        const bool branch_taken_0x1c66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66C8u;
        // 0x1c66cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66c8) {
            ctx->pc = 0x1C66D4u;
            goto label_1c66d4;
        }
    }
    ctx->pc = 0x1C66D0u;
label_1c66d0:
    // 0x1c66d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c66d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c66d4:
    // 0x1c66d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1c66d8:
    if (ctx->pc == 0x1C66D8u) {
        ctx->pc = 0x1C66DCu;
        goto label_1c66dc;
    }
    ctx->pc = 0x1C66D4u;
    {
        const bool branch_taken_0x1c66d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c66d4) {
            ctx->pc = 0x1C6740u;
            goto label_1c6740;
        }
    }
    ctx->pc = 0x1C66DCu;
label_1c66dc:
    // 0x1c66dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c66e0:
    // 0x1c66e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c66e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c66e4:
    // 0x1c66e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c66e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c66e8:
    // 0x1c66e8: 0xc066e14  jal         func_19B850
label_1c66ec:
    if (ctx->pc == 0x1C66ECu) {
        ctx->pc = 0x1C66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66E8u;
        // 0x1c66ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66F0u;
        goto label_1c66f0;
    }
    ctx->pc = 0x1C66E8u;
    SET_GPR_U32(ctx, 31, 0x1C66F0u);
    ctx->pc = 0x1C66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66E8u;
    // 0x1c66ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C66E8u, 0x1C66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66F0u;
label_1c66f0:
    // 0x1c66f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c66f4:
    // 0x1c66f4: 0xc066e26  jal         func_19B898
label_1c66f8:
    if (ctx->pc == 0x1C66F8u) {
        ctx->pc = 0x1C66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66F4u;
        // 0x1c66f8: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66FCu;
        goto label_1c66fc;
    }
    ctx->pc = 0x1C66F4u;
    SET_GPR_U32(ctx, 31, 0x1C66FCu);
    ctx->pc = 0x1C66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66F4u;
    // 0x1c66f8: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C66F4u, 0x1C66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66FCu;
label_1c66fc:
    // 0x1c66fc: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x1c66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6700:
    // 0x1c6700: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1c6704:
    if (ctx->pc == 0x1C6704u) {
        ctx->pc = 0x1C6708u;
        goto label_1c6708;
    }
    ctx->pc = 0x1C6700u;
    {
        const bool branch_taken_0x1c6700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6700) {
            ctx->pc = 0x1C6724u;
            goto label_1c6724;
        }
    }
    ctx->pc = 0x1C6708u;
label_1c6708:
    // 0x1c6708: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1c6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c670c:
    // 0x1c670c: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x1c670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
label_1c6710:
    // 0x1c6710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6714:
    // 0x1c6714: 0x0  nop
    ctx->pc = 0x1c6714u;
    // NOP
label_1c6718:
    // 0x1c6718: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c671c:
    // 0x1c671c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1c6720:
    if (ctx->pc == 0x1C6720u) {
        ctx->pc = 0x1C6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C671Cu;
        // 0x1c6720: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6724u;
        goto label_1c6724;
    }
    ctx->pc = 0x1C671Cu;
    {
        const bool branch_taken_0x1c671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C671Cu;
        // 0x1c6720: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c671c) {
            ctx->pc = 0x1C675Cu;
            goto label_1c675c;
        }
    }
    ctx->pc = 0x1C6724u;
label_1c6724:
    // 0x1c6724: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1c6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6728:
    // 0x1c6728: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x1c6728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
label_1c672c:
    // 0x1c672c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c672cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6730:
    // 0x1c6730: 0x0  nop
    ctx->pc = 0x1c6730u;
    // NOP
label_1c6734:
    // 0x1c6734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c6734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c6738:
    // 0x1c6738: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c673c:
    if (ctx->pc == 0x1C673Cu) {
        ctx->pc = 0x1C673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6738u;
        // 0x1c673c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6740u;
        goto label_1c6740;
    }
    ctx->pc = 0x1C6738u;
    {
        const bool branch_taken_0x1c6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6738u;
        // 0x1c673c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6738) {
            ctx->pc = 0x1C675Cu;
            goto label_1c675c;
        }
    }
    ctx->pc = 0x1C6740u;
label_1c6740:
    // 0x1c6740: 0xc60c02a8  lwc1        $f12, 0x2A8($s0)
    ctx->pc = 0x1c6740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6744:
    // 0x1c6744: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c6744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c6748:
    // 0x1c6748: 0xc066e6c  jal         func_19B9B0
label_1c674c:
    if (ctx->pc == 0x1C674Cu) {
        ctx->pc = 0x1C674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6748u;
        // 0x1c674c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6750u;
        goto label_1c6750;
    }
    ctx->pc = 0x1C6748u;
    SET_GPR_U32(ctx, 31, 0x1C6750u);
    ctx->pc = 0x1C674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6748u;
    // 0x1c674c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1C6750u;
label_1c6750:
    // 0x1c6750: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6754:
    // 0x1c6754: 0xc066e26  jal         func_19B898
label_1c6758:
    if (ctx->pc == 0x1C6758u) {
        ctx->pc = 0x1C6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6754u;
        // 0x1c6758: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C675Cu;
        goto label_1c675c;
    }
    ctx->pc = 0x1C6754u;
    SET_GPR_U32(ctx, 31, 0x1C675Cu);
    ctx->pc = 0x1C6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6754u;
    // 0x1c6758: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C6754u, 0x1C675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C675Cu;
label_1c675c:
    // 0x1c675c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c675cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6760:
    // 0x1c6760: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6764:
    // 0x1c6764: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6768:
    // 0x1c6768: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c6768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c676c:
    // 0x1c676c: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1c676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1c6770:
    // 0x1c6770: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c6774:
    // 0x1c6774: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c6774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c6778:
    // 0x1c6778: 0xc066d7a  jal         func_19B5E8
label_1c677c:
    if (ctx->pc == 0x1C677Cu) {
        ctx->pc = 0x1C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6778u;
        // 0x1c677c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6780u;
        goto label_1c6780;
    }
    ctx->pc = 0x1C6778u;
    SET_GPR_U32(ctx, 31, 0x1C6780u);
    ctx->pc = 0x1C677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6778u;
    // 0x1c677c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C6778u, 0x1C6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6780u;
label_1c6780:
    // 0x1c6780: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1c6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6784:
    // 0x1c6784: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c6788:
    // 0x1c6788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c678c:
    // 0x1c678c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c6790:
    // 0x1c6790: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6794:
    // 0x1c6794: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6798:
    // 0x1c6798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c679c:
    // 0x1c679c: 0xc066e02  jal         func_19B808
label_1c67a0:
    if (ctx->pc == 0x1C67A0u) {
        ctx->pc = 0x1C67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C679Cu;
        // 0x1c67a0: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67A4u;
        goto label_1c67a4;
    }
    ctx->pc = 0x1C679Cu;
    SET_GPR_U32(ctx, 31, 0x1C67A4u);
    ctx->pc = 0x1C67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C679Cu;
    // 0x1c67a0: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1C679Cu, 0x1C67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67A4u;
label_1c67a4:
    // 0x1c67a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c67a8:
    // 0x1c67a8: 0xc066e34  jal         func_19B8D0
label_1c67ac:
    if (ctx->pc == 0x1C67ACu) {
        ctx->pc = 0x1C67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67A8u;
        // 0x1c67ac: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67B0u;
        goto label_1c67b0;
    }
    ctx->pc = 0x1C67A8u;
    SET_GPR_U32(ctx, 31, 0x1C67B0u);
    ctx->pc = 0x1C67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67A8u;
    // 0x1c67ac: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1C67A8u, 0x1C67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67B0u;
label_1c67b0:
    // 0x1c67b0: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x1c67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c67b4:
    // 0x1c67b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1c67b8:
    // 0x1c67b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c67b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c67bc:
    // 0x1c67bc: 0x0  nop
    ctx->pc = 0x1c67bcu;
    // NOP
label_1c67c0:
    // 0x1c67c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c67c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c67c4:
    // 0x1c67c4: 0x0  nop
    ctx->pc = 0x1c67c4u;
    // NOP
label_1c67c8:
    // 0x1c67c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1c67cc:
    if (ctx->pc == 0x1C67CCu) {
        ctx->pc = 0x1C67D0u;
        goto label_1c67d0;
    }
    ctx->pc = 0x1C67C8u;
    {
        const bool branch_taken_0x1c67c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c67c8) {
            ctx->pc = 0x1C67E0u;
            goto label_1c67e0;
        }
    }
    ctx->pc = 0x1C67D0u;
label_1c67d0:
    // 0x1c67d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c67d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c67d4:
    // 0x1c67d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c67d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c67d8:
    // 0x1c67d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c67dc:
    if (ctx->pc == 0x1C67DCu) {
        ctx->pc = 0x1C67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D8u;
        // 0x1c67dc: 0x87a50094  lh          $a1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67E0u;
        goto label_1c67e0;
    }
    ctx->pc = 0x1C67D8u;
    {
        const bool branch_taken_0x1c67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D8u;
        // 0x1c67dc: 0x87a50094  lh          $a1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67d8) {
            ctx->pc = 0x1C67FCu;
            goto label_1c67fc;
        }
    }
    ctx->pc = 0x1C67E0u;
label_1c67e0:
    // 0x1c67e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c67e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c67e4:
    // 0x1c67e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1c67e8:
    // 0x1c67e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c67e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c67ec:
    // 0x1c67ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c67ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c67f0:
    // 0x1c67f0: 0x0  nop
    ctx->pc = 0x1c67f0u;
    // NOP
label_1c67f4:
    // 0x1c67f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c67f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c67f8:
    // 0x1c67f8: 0x87a50094  lh          $a1, 0x94($sp)
    ctx->pc = 0x1c67f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
label_1c67fc:
    // 0x1c67fc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1c67fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1c6800:
    // 0x1c6800: 0x87a40090  lh          $a0, 0x90($sp)
    ctx->pc = 0x1c6800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
label_1c6804:
    // 0x1c6804: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1c6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1c6808:
    // 0x1c6808: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1c6808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_1c680c:
    // 0x1c680c: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x1c680cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c6810:
    // 0x1c6810: 0xa4440020  sh          $a0, 0x20($v0)
    ctx->pc = 0x1c6810u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 4));
label_1c6814:
    // 0x1c6814: 0xa4450022  sh          $a1, 0x22($v0)
    ctx->pc = 0x1c6814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 5));
label_1c6818:
    // 0x1c6818: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x1c6818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_1c681c:
    // 0x1c681c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1c681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1c6820:
    // 0x1c6820: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1c6820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_1c6824:
    // 0x1c6824: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1c6824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1c6828:
    // 0x1c6828: 0x920302e0  lbu         $v1, 0x2E0($s0)
    ctx->pc = 0x1c6828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c682c:
    // 0x1c682c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c682cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1c6830:
    // 0x1c6830: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_1c6834:
    if (ctx->pc == 0x1C6834u) {
        ctx->pc = 0x1C6838u;
        goto label_1c6838;
    }
    ctx->pc = 0x1C6830u;
    {
        const bool branch_taken_0x1c6830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6830) {
            ctx->pc = 0x1C6864u;
            goto label_1c6864;
        }
    }
    ctx->pc = 0x1C6838u;
label_1c6838:
    // 0x1c6838: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1c6838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1c683c:
    // 0x1c683c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c6840:
    // 0x1c6840: 0x920502e3  lbu         $a1, 0x2E3($s0)
    ctx->pc = 0x1c6840u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6844:
    // 0x1c6844: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1c6844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
label_1c6848:
    // 0x1c6848: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x1c6848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
label_1c684c:
    // 0x1c684c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1c684cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_1c6850:
    // 0x1c6850: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1c6850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_1c6854:
    // 0x1c6854: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1c6854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1c6858:
    // 0x1c6858: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1c6858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1c685c:
    // 0x1c685c: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1c685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_1c6860:
    // 0x1c6860: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1c6860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1c6864:
    // 0x1c6864: 0x0  nop
    ctx->pc = 0x1c6864u;
    // NOP
label_1c6868:
    // 0x1c6868: 0x2152821  addu        $a1, $s0, $s5
    ctx->pc = 0x1c6868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_1c686c:
    // 0x1c686c: 0xc4a002b0  lwc1        $f0, 0x2B0($a1)
    ctx->pc = 0x1c686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6870:
    // 0x1c6870: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c6870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1c6874:
    // 0x1c6874: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c6874u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6878:
    // 0x1c6878: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c6878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c687c:
    // 0x1c687c: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x1c687cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1c6880:
    // 0x1c6880: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1c6880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1c6884:
    // 0x1c6884: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x1c6884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_1c6888:
    // 0x1c6888: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1c6888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_1c688c:
    // 0x1c688c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c688cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1c6890u;
    return;
}
