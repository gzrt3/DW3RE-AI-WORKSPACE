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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part23(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        case 0x1a62b8u: goto label_1a62b8;
        case 0x1a62bcu: goto label_1a62bc;
        case 0x1a62c0u: goto label_1a62c0;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62c8u: goto label_1a62c8;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d0u: goto label_1a62d0;
        case 0x1a62d4u: goto label_1a62d4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62dcu: goto label_1a62dc;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a62e8u: goto label_1a62e8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a62f0u: goto label_1a62f0;
        case 0x1a62f4u: goto label_1a62f4;
        case 0x1a62f8u: goto label_1a62f8;
        case 0x1a62fcu: goto label_1a62fc;
        case 0x1a6300u: goto label_1a6300;
        case 0x1a6304u: goto label_1a6304;
        case 0x1a6308u: goto label_1a6308;
        case 0x1a630cu: goto label_1a630c;
        case 0x1a6310u: goto label_1a6310;
        case 0x1a6314u: goto label_1a6314;
        case 0x1a6318u: goto label_1a6318;
        case 0x1a631cu: goto label_1a631c;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a6324u: goto label_1a6324;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a632cu: goto label_1a632c;
        case 0x1a6330u: goto label_1a6330;
        case 0x1a6334u: goto label_1a6334;
        case 0x1a6338u: goto label_1a6338;
        case 0x1a633cu: goto label_1a633c;
        case 0x1a6340u: goto label_1a6340;
        case 0x1a6344u: goto label_1a6344;
        case 0x1a6348u: goto label_1a6348;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6350u: goto label_1a6350;
        case 0x1a6354u: goto label_1a6354;
        case 0x1a6358u: goto label_1a6358;
        case 0x1a635cu: goto label_1a635c;
        case 0x1a6360u: goto label_1a6360;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6368u: goto label_1a6368;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a6370u: goto label_1a6370;
        case 0x1a6374u: goto label_1a6374;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a637cu: goto label_1a637c;
        case 0x1a6380u: goto label_1a6380;
        case 0x1a6384u: goto label_1a6384;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a638cu: goto label_1a638c;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a6394u: goto label_1a6394;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a63a4u: goto label_1a63a4;
        case 0x1a63a8u: goto label_1a63a8;
        case 0x1a63acu: goto label_1a63ac;
        case 0x1a63b0u: goto label_1a63b0;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63b8u: goto label_1a63b8;
        case 0x1a63bcu: goto label_1a63bc;
        case 0x1a63c0u: goto label_1a63c0;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63c8u: goto label_1a63c8;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63d0u: goto label_1a63d0;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63d8u: goto label_1a63d8;
        case 0x1a63dcu: goto label_1a63dc;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a63e4u: goto label_1a63e4;
        case 0x1a63e8u: goto label_1a63e8;
        case 0x1a63ecu: goto label_1a63ec;
        case 0x1a63f0u: goto label_1a63f0;
        case 0x1a63f4u: goto label_1a63f4;
        case 0x1a63f8u: goto label_1a63f8;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6400u: goto label_1a6400;
        case 0x1a6404u: goto label_1a6404;
        case 0x1a6408u: goto label_1a6408;
        case 0x1a640cu: goto label_1a640c;
        case 0x1a6410u: goto label_1a6410;
        case 0x1a6414u: goto label_1a6414;
        case 0x1a6418u: goto label_1a6418;
        case 0x1a641cu: goto label_1a641c;
        case 0x1a6420u: goto label_1a6420;
        case 0x1a6424u: goto label_1a6424;
        case 0x1a6428u: goto label_1a6428;
        case 0x1a642cu: goto label_1a642c;
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
        default: return;
    }

label_1a61c8:
    if (ctx->pc == 0x1A61C8u) {
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61CCu;
        goto label_1a61cc;
    }
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a61a0; return; }
        }
    }
    ctx->pc = 0x1A61CCu;
label_1a61cc:
    // 0x1a61cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a61d0:
    if (ctx->pc == 0x1A61D0u) {
        ctx->pc = 0x1A61D4u;
        goto label_1a61d4;
    }
    ctx->pc = 0x1A61CCu;
    {
        const bool branch_taken_0x1a61cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61cc) {
            ctx->pc = 0x1A6224u;
            goto label_1a6224;
        }
    }
    ctx->pc = 0x1A61D4u;
label_1a61d4:
    // 0x1a61d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a61d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a61d8:
    // 0x1a61d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a61dc:
    // 0x1a61dc: 0xc06def6  jal         func_1B7BD8
label_1a61e0:
    if (ctx->pc == 0x1A61E0u) {
        ctx->pc = 0x1A61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61DCu;
        // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61E4u;
        goto label_1a61e4;
    }
    ctx->pc = 0x1A61DCu;
    SET_GPR_U32(ctx, 31, 0x1A61E4u);
    ctx->pc = 0x1A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61DCu;
    // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A61E4u;
label_1a61e4:
    // 0x1a61e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1a61e8:
    if (ctx->pc == 0x1A61E8u) {
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61ECu;
        goto label_1a61ec;
    }
    ctx->pc = 0x1A61E4u;
    {
        const bool branch_taken_0x1a61e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61e4) {
            ctx->pc = 0x1A6224u;
            goto label_1a6224;
        }
    }
    ctx->pc = 0x1A61ECu;
label_1a61ec:
    // 0x1a61ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a61f0:
    if (ctx->pc == 0x1A61F0u) {
        ctx->pc = 0x1A61F4u;
        goto label_1a61f4;
    }
    ctx->pc = 0x1A61ECu;
    {
        const bool branch_taken_0x1a61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61ec) {
            ctx->pc = 0x1A620Cu;
            goto label_1a620c;
        }
    }
    ctx->pc = 0x1A61F4u;
label_1a61f4:
    // 0x1a61f4: 0x0  nop
    ctx->pc = 0x1a61f4u;
    // NOP
label_1a61f8:
    // 0x1a61f8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1a61f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1a61fc:
    // 0x1a61fc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1a6200:
    // 0x1a6200: 0xc06de50  jal         func_1B7940
label_1a6204:
    if (ctx->pc == 0x1A6204u) {
        ctx->pc = 0x1A6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6200u;
        // 0x1a6204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6208u;
        goto label_1a6208;
    }
    ctx->pc = 0x1A6200u;
    SET_GPR_U32(ctx, 31, 0x1A6208u);
    ctx->pc = 0x1A6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6200u;
    // 0x1a6204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7940u;
    { ctx->pc = 0x1b7940; return; }
    ctx->pc = 0x1A6208u;
label_1a6208:
    // 0x1a6208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a620c:
    // 0x1a620c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a6210:
    // 0x1a6210: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a6210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a6214:
    // 0x1a6214: 0xc06def6  jal         func_1B7BD8
label_1a6218:
    if (ctx->pc == 0x1A6218u) {
        ctx->pc = 0x1A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6214u;
        // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A621Cu;
        goto label_1a621c;
    }
    ctx->pc = 0x1A6214u;
    SET_GPR_U32(ctx, 31, 0x1A621Cu);
    ctx->pc = 0x1A6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6214u;
    // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A621Cu;
label_1a621c:
    // 0x1a621c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_1a6220:
    if (ctx->pc == 0x1A6220u) {
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6224u;
        goto label_1a6224;
    }
    ctx->pc = 0x1A621Cu;
    {
        const bool branch_taken_0x1a621c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a621c) {
            ctx->pc = 0x1A61F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61f8;
        }
    }
    ctx->pc = 0x1A6224u;
label_1a6224:
    // 0x1a6224: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a6228:
    // 0x1a6228: 0xdc25a588  ld          $a1, -0x5A78($at)
    ctx->pc = 0x1a6228u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944136)));
label_1a622c:
    // 0x1a622c: 0xc06dda4  jal         func_1B7690
label_1a6230:
    if (ctx->pc == 0x1A6230u) {
        ctx->pc = 0x1A6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A622Cu;
        // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6234u;
        goto label_1a6234;
    }
    ctx->pc = 0x1A622Cu;
    SET_GPR_U32(ctx, 31, 0x1A6234u);
    ctx->pc = 0x1A6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A622Cu;
    // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1A6234u;
label_1a6234:
    // 0x1a6234: 0xc06dbbc  jal         func_1B6EF0
label_1a6238:
    if (ctx->pc == 0x1A6238u) {
        ctx->pc = 0x1A6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6234u;
        // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A623Cu;
        goto label_1a623c;
    }
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x1A6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6234u;
    // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EF0u;
    { ctx->pc = 0x1b6ef0; return; }
    ctx->pc = 0x1A623Cu;
label_1a623c:
    // 0x1a623c: 0xc069828  jal         func_1A60A0
label_1a6240:
    if (ctx->pc == 0x1A6240u) {
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6244u;
        goto label_1a6244;
    }
    ctx->pc = 0x1A623Cu;
    SET_GPR_U32(ctx, 31, 0x1A6244u);
    ctx->pc = 0x1A6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A623Cu;
    // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60A0u;
    { ctx->pc = 0x1a60a0; return; }
    ctx->pc = 0x1A6244u;
label_1a6244:
    // 0x1a6244: 0x2644a560  addiu       $a0, $s2, -0x5AA0
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944096));
label_1a6248:
    // 0x1a6248: 0xc069a22  jal         func_1A6888
label_1a624c:
    if (ctx->pc == 0x1A624Cu) {
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6250u;
        goto label_1a6250;
    }
    ctx->pc = 0x1A6248u;
    SET_GPR_U32(ctx, 31, 0x1A6250u);
    ctx->pc = 0x1A624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6248u;
    // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    goto label_1a6888;
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_1a6254:
    if (ctx->pc == 0x1A6254u) {
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6258u;
        goto label_1a6258;
    }
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A6278u;
            goto label_1a6278;
        }
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a625c:
    // 0x1a625c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6260:
    // 0x1a6260: 0x2484a568  addiu       $a0, $a0, -0x5A98
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944104));
label_1a6264:
    // 0x1a6264: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6268:
    // 0x1a6268: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a626c:
    // 0x1a626c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6270:
    // 0x1a6270: 0x8069a22  j           func_1A6888
label_1a6274:
    if (ctx->pc == 0x1A6274u) {
        ctx->pc = 0x1A6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6270u;
        // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6278u;
        goto label_1a6278;
    }
    ctx->pc = 0x1A6270u;
    ctx->pc = 0x1A6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6270u;
    // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    goto label_1a6888;
    ctx->pc = 0x1A6278u;
label_1a6278:
    // 0x1a6278: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a627c:
    // 0x1a627c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6280:
    // 0x1a6280: 0x2484a570  addiu       $a0, $a0, -0x5A90
    ctx->pc = 0x1a6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944112));
label_1a6284:
    // 0x1a6284: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6288:
    // 0x1a6288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a628c:
    // 0x1a628c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6290:
    // 0x1a6290: 0x8069a22  j           func_1A6888
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6298u;
        goto label_1a6298;
    }
    ctx->pc = 0x1A6290u;
    ctx->pc = 0x1A6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6290u;
    // 0x1a6294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    goto label_1a6888;
    ctx->pc = 0x1A6298u;
label_1a6298:
    // 0x1a6298: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a629c:
    // 0x1a629c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a62a0:
    // 0x1a62a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a62a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a62a4:
    // 0x1a62a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a62a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a62a8:
    // 0x1a62a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a62a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a62ac:
    // 0x1a62ac: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a62acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1a62b0:
    // 0x1a62b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a62b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a62b4:
    // 0x1a62b4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_1a62b8:
    // 0x1a62b8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a62bc:
    // 0x1a62bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a62c0:
    // 0x1a62c0: 0xc06b518  jal         func_1AD460
label_1a62c4:
    if (ctx->pc == 0x1A62C4u) {
        ctx->pc = 0x1A62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62C0u;
        // 0x1a62c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62C8u;
        goto label_1a62c8;
    }
    ctx->pc = 0x1A62C0u;
    SET_GPR_U32(ctx, 31, 0x1A62C8u);
    ctx->pc = 0x1A62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62C0u;
    // 0x1a62c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A62C8u;
label_1a62c8:
    // 0x1a62c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a62c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a62cc:
    // 0x1a62cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a62ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a62d0:
    // 0x1a62d0: 0x1040015e  beqz        $v0, . + 4 + (0x15E << 2)
label_1a62d4:
    if (ctx->pc == 0x1A62D4u) {
        ctx->pc = 0x1A62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62D0u;
        // 0x1a62d4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62D8u;
        goto label_1a62d8;
    }
    ctx->pc = 0x1A62D0u;
    {
        const bool branch_taken_0x1a62d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62D0u;
        // 0x1a62d4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62d0) {
            ctx->pc = 0x1A684Cu;
            goto label_1a684c;
        }
    }
    ctx->pc = 0x1A62D8u;
label_1a62d8:
    // 0x1a62d8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a62dc:
    // 0x1a62dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a62dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a62e0:
    // 0x1a62e0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1a62e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1a62e4:
    // 0x1a62e4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1a62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1a62e8:
    // 0x1a62e8: 0x1482014b  bne         $a0, $v0, . + 4 + (0x14B << 2)
label_1a62ec:
    if (ctx->pc == 0x1A62ECu) {
        ctx->pc = 0x1A62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E8u;
        // 0x1a62ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62F0u;
        goto label_1a62f0;
    }
    ctx->pc = 0x1A62E8u;
    {
        const bool branch_taken_0x1a62e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E8u;
        // 0x1a62ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62e8) {
            ctx->pc = 0x1A6818u;
            goto label_1a6818;
        }
    }
    ctx->pc = 0x1A62F0u;
label_1a62f0:
    // 0x1a62f0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a62f4:
    // 0x1a62f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a62f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a62f8:
    // 0x1a62f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a62f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a62fc:
    // 0x1a62fc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1a62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1a6300:
    // 0x1a6300: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1a6304:
    // 0x1a6304: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1a6304u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1a6308:
    // 0x1a6308: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x1a6308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
label_1a630c:
    // 0x1a630c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_1a6310:
    if (ctx->pc == 0x1A6310u) {
        ctx->pc = 0x1A6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A630Cu;
        // 0x1a6310: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6314u;
        goto label_1a6314;
    }
    ctx->pc = 0x1A630Cu;
    {
        const bool branch_taken_0x1a630c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A630Cu;
        // 0x1a6310: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a630c) {
            ctx->pc = 0x1A6830u;
            goto label_1a6830;
        }
    }
    ctx->pc = 0x1A6314u;
label_1a6314:
    // 0x1a6314: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6318:
    // 0x1a6318: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x1a6318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
label_1a631c:
    // 0x1a631c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a6320:
    // 0x1a6320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a6324:
    // 0x1a6324: 0x800008  jr          $a0
label_1a6328:
    if (ctx->pc == 0x1A6328u) {
        ctx->pc = 0x1A632Cu;
        goto label_1a632c;
    }
    ctx->pc = 0x1A6324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A632Cu: goto label_1a632c;
            case 0x1A63B0u: goto label_1a63b0;
            case 0x1A63BCu: goto label_1a63bc;
            case 0x1A63C4u: goto label_1a63c4;
            case 0x1A6480u: goto label_1a6480;
            case 0x1A6540u: goto label_1a6540;
            case 0x1A6630u: goto label_1a6630;
            case 0x1A6700u: goto label_1a6700;
            case 0x1A674Cu: goto label_1a674c;
            case 0x1A67F0u: goto label_1a67f0;
            case 0x1A6838u: goto label_1a6838;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A632Cu;
label_1a632c:
    // 0x1a632c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1a6330:
    // 0x1a6330: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1a6334:
    // 0x1a6334: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a6338:
    // 0x1a6338: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1a6338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a633c:
    // 0x1a633c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1a6340:
    if (ctx->pc == 0x1A6340u) {
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6344u;
        goto label_1a6344;
    }
    ctx->pc = 0x1A633Cu;
    {
        const bool branch_taken_0x1a633c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a633c) {
            ctx->pc = 0x1A63B4u;
            goto label_1a63b4;
        }
    }
    ctx->pc = 0x1A6344u;
label_1a6344:
    // 0x1a6344: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_1a6348:
    // 0x1a6348: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1a6348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a634c:
    // 0x1a634c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a6350:
    if (ctx->pc == 0x1A6350u) {
        ctx->pc = 0x1A6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A634Cu;
        // 0x1a6350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6354u;
        goto label_1a6354;
    }
    ctx->pc = 0x1A634Cu;
    {
        const bool branch_taken_0x1a634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A634Cu;
        // 0x1a6350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a634c) {
            ctx->pc = 0x1A6374u;
            goto label_1a6374;
        }
    }
    ctx->pc = 0x1A6354u;
label_1a6354:
    // 0x1a6354: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a6358:
    // 0x1a6358: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a6358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a635c:
    // 0x1a635c: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1a6360:
    // 0x1a6360: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1a6360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1a6364:
    // 0x1a6364: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a6364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a6368:
    // 0x1a6368: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1a6368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a636c:
    // 0x1a636c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6370:
    if (ctx->pc == 0x1A6370u) {
        ctx->pc = 0x1A6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A636Cu;
        // 0x1a6370: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6374u;
        goto label_1a6374;
    }
    ctx->pc = 0x1A636Cu;
    {
        const bool branch_taken_0x1a636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A636Cu;
        // 0x1a6370: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a636c) {
            ctx->pc = 0x1A6378u;
            goto label_1a6378;
        }
    }
    ctx->pc = 0x1A6374u;
label_1a6374:
    // 0x1a6374: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a6378:
    // 0x1a6378: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a637c:
    // 0x1a637c: 0x18a0ffdc  blez        $a1, . + 4 + (-0x24 << 2)
label_1a6380:
    if (ctx->pc == 0x1A6380u) {
        ctx->pc = 0x1A6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A637Cu;
        // 0x1a6380: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6384u;
        goto label_1a6384;
    }
    ctx->pc = 0x1A637Cu;
    {
        const bool branch_taken_0x1a637c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A637Cu;
        // 0x1a6380: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a637c) {
            ctx->pc = 0x1A62F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62f0;
        }
    }
    ctx->pc = 0x1A6384u;
label_1a6384:
    // 0x1a6384: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a6388:
    // 0x1a6388: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a638c:
    // 0x1a638c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a6390:
    // 0x1a6390: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a6394:
    // 0x1a6394: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1a6398:
    // 0x1a6398: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a6398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1a639c:
    // 0x1a639c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a639cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a63a0:
    // 0x1a63a0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1a63a4:
    if (ctx->pc == 0x1A63A4u) {
        ctx->pc = 0x1A63A8u;
        goto label_1a63a8;
    }
    ctx->pc = 0x1A63A0u;
    {
        const bool branch_taken_0x1a63a0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1a63a0) {
            ctx->pc = 0x1A6388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6388;
        }
    }
    ctx->pc = 0x1A63A8u;
label_1a63a8:
    // 0x1a63a8: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_1a63ac:
    if (ctx->pc == 0x1A63ACu) {
        ctx->pc = 0x1A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63A8u;
        // 0x1a63ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63B0u;
        goto label_1a63b0;
    }
    ctx->pc = 0x1A63A8u;
    {
        const bool branch_taken_0x1a63a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63A8u;
        // 0x1a63ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63a8) {
            ctx->pc = 0x1A62F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62f8;
        }
    }
    ctx->pc = 0x1A63B0u;
label_1a63b0:
    // 0x1a63b0: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a63b4:
    // 0x1a63b4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_1a63b8:
    if (ctx->pc == 0x1A63B8u) {
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63BCu;
        goto label_1a63bc;
    }
    ctx->pc = 0x1A63B4u;
    {
        const bool branch_taken_0x1a63b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63b4) {
            ctx->pc = 0x1A62F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62f4;
        }
    }
    ctx->pc = 0x1A63BCu;
label_1a63bc:
    // 0x1a63bc: 0x1000fffd  b           . + 4 + (-0x3 << 2)
label_1a63c0:
    if (ctx->pc == 0x1A63C0u) {
        ctx->pc = 0x1A63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63BCu;
        // 0x1a63c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63C4u;
        goto label_1a63c4;
    }
    ctx->pc = 0x1A63BCu;
    {
        const bool branch_taken_0x1a63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63BCu;
        // 0x1a63c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63bc) {
            ctx->pc = 0x1A63B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a63b4;
        }
    }
    ctx->pc = 0x1A63C4u;
label_1a63c4:
    // 0x1a63c4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a63c8:
    // 0x1a63c8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1a63cc:
    if (ctx->pc == 0x1A63CCu) {
        ctx->pc = 0x1A63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63C8u;
        // 0x1a63cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63D0u;
        goto label_1a63d0;
    }
    ctx->pc = 0x1A63C8u;
    {
        const bool branch_taken_0x1a63c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63C8u;
        // 0x1a63cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63c8) {
            ctx->pc = 0x1A63DCu;
            goto label_1a63dc;
        }
    }
    ctx->pc = 0x1A63D0u;
label_1a63d0:
    // 0x1a63d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a63d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a63d4:
    // 0x1a63d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a63d8:
    if (ctx->pc == 0x1A63D8u) {
        ctx->pc = 0x1A63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D4u;
        // 0x1a63d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63DCu;
        goto label_1a63dc;
    }
    ctx->pc = 0x1A63D4u;
    {
        const bool branch_taken_0x1a63d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D4u;
        // 0x1a63d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63d4) {
            ctx->pc = 0x1A63F0u;
            goto label_1a63f0;
        }
    }
    ctx->pc = 0x1A63DCu;
label_1a63dc:
    // 0x1a63dc: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1a63e0:
    if (ctx->pc == 0x1A63E0u) {
        ctx->pc = 0x1A63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63DCu;
        // 0x1a63e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63E4u;
        goto label_1a63e4;
    }
    ctx->pc = 0x1A63DCu;
    {
        const bool branch_taken_0x1a63dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63DCu;
        // 0x1a63e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63dc) {
            ctx->pc = 0x1A63ECu;
            goto label_1a63ec;
        }
    }
    ctx->pc = 0x1A63E4u;
label_1a63e4:
    // 0x1a63e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a63e8:
    if (ctx->pc == 0x1A63E8u) {
        ctx->pc = 0x1A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63E4u;
        // 0x1a63e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63ECu;
        goto label_1a63ec;
    }
    ctx->pc = 0x1A63E4u;
    {
        const bool branch_taken_0x1a63e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63E4u;
        // 0x1a63e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63e4) {
            ctx->pc = 0x1A63F0u;
            goto label_1a63f0;
        }
    }
    ctx->pc = 0x1A63ECu;
label_1a63ec:
    // 0x1a63ec: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1a63ecu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a63f0:
    // 0x1a63f0: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a63f4:
    // 0x1a63f4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1a63f8:
    if (ctx->pc == 0x1A63F8u) {
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63FCu;
        goto label_1a63fc;
    }
    ctx->pc = 0x1A63F4u;
    {
        const bool branch_taken_0x1a63f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63f4) {
            ctx->pc = 0x1A6410u;
            goto label_1a6410;
        }
    }
    ctx->pc = 0x1A63FCu;
label_1a63fc:
    // 0x1a63fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a6400:
    // 0x1a6400: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1a6400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1a6404:
    // 0x1a6404: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1a6404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1a6408:
    // 0x1a6408: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a640c:
    if (ctx->pc == 0x1A640Cu) {
        ctx->pc = 0x1A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6408u;
        // 0x1a640c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6410u;
        goto label_1a6410;
    }
    ctx->pc = 0x1A6408u;
    {
        const bool branch_taken_0x1a6408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6408u;
        // 0x1a640c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6408) {
            ctx->pc = 0x1A6438u;
            goto label_1a6438;
        }
    }
    ctx->pc = 0x1A6410u;
label_1a6410:
    // 0x1a6410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a6414:
    // 0x1a6414: 0x0  nop
    ctx->pc = 0x1a6414u;
    // NOP
label_1a6418:
    // 0x1a6418: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
label_1a641c:
    // 0x1a641c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6420:
    // 0x1a6420: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1a6420u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1a6424:
    // 0x1a6424: 0x1188fa  dsrl        $s1, $s1, 3
    ctx->pc = 0x1a6424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 3);
label_1a6428:
    // 0x1a6428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a642c:
    // 0x1a642c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1a642cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
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
            goto label_1a6418;
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
            goto label_1a62d8;
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
    goto label_1a6298;
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
    goto label_1a6298;
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
    ctx->pc = 0x1a6998u;
    return;
}
