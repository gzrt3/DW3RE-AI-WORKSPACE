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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part55(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b5fc8u: goto label_2b5fc8;
        case 0x2b5fccu: goto label_2b5fcc;
        case 0x2b5fd0u: goto label_2b5fd0;
        case 0x2b5fd4u: goto label_2b5fd4;
        case 0x2b5fd8u: goto label_2b5fd8;
        case 0x2b5fdcu: goto label_2b5fdc;
        case 0x2b5fe0u: goto label_2b5fe0;
        case 0x2b5fe4u: goto label_2b5fe4;
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5fecu: goto label_2b5fec;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b5ff4u: goto label_2b5ff4;
        case 0x2b5ff8u: goto label_2b5ff8;
        case 0x2b5ffcu: goto label_2b5ffc;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b6004u: goto label_2b6004;
        case 0x2b6008u: goto label_2b6008;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6010u: goto label_2b6010;
        case 0x2b6014u: goto label_2b6014;
        case 0x2b6018u: goto label_2b6018;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6020u: goto label_2b6020;
        case 0x2b6024u: goto label_2b6024;
        case 0x2b6028u: goto label_2b6028;
        case 0x2b602cu: goto label_2b602c;
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6034u: goto label_2b6034;
        case 0x2b6038u: goto label_2b6038;
        case 0x2b603cu: goto label_2b603c;
        case 0x2b6040u: goto label_2b6040;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6048u: goto label_2b6048;
        case 0x2b604cu: goto label_2b604c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6054u: goto label_2b6054;
        case 0x2b6058u: goto label_2b6058;
        case 0x2b605cu: goto label_2b605c;
        case 0x2b6060u: goto label_2b6060;
        case 0x2b6064u: goto label_2b6064;
        case 0x2b6068u: goto label_2b6068;
        case 0x2b606cu: goto label_2b606c;
        case 0x2b6070u: goto label_2b6070;
        case 0x2b6074u: goto label_2b6074;
        case 0x2b6078u: goto label_2b6078;
        case 0x2b607cu: goto label_2b607c;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b6084u: goto label_2b6084;
        case 0x2b6088u: goto label_2b6088;
        case 0x2b608cu: goto label_2b608c;
        case 0x2b6090u: goto label_2b6090;
        case 0x2b6094u: goto label_2b6094;
        case 0x2b6098u: goto label_2b6098;
        case 0x2b609cu: goto label_2b609c;
        case 0x2b60a0u: goto label_2b60a0;
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60a8u: goto label_2b60a8;
        case 0x2b60acu: goto label_2b60ac;
        case 0x2b60b0u: goto label_2b60b0;
        case 0x2b60b4u: goto label_2b60b4;
        case 0x2b60b8u: goto label_2b60b8;
        case 0x2b60bcu: goto label_2b60bc;
        case 0x2b60c0u: goto label_2b60c0;
        case 0x2b60c4u: goto label_2b60c4;
        case 0x2b60c8u: goto label_2b60c8;
        case 0x2b60ccu: goto label_2b60cc;
        case 0x2b60d0u: goto label_2b60d0;
        case 0x2b60d4u: goto label_2b60d4;
        case 0x2b60d8u: goto label_2b60d8;
        case 0x2b60dcu: goto label_2b60dc;
        case 0x2b60e0u: goto label_2b60e0;
        case 0x2b60e4u: goto label_2b60e4;
        case 0x2b60e8u: goto label_2b60e8;
        case 0x2b60ecu: goto label_2b60ec;
        case 0x2b60f0u: goto label_2b60f0;
        case 0x2b60f4u: goto label_2b60f4;
        case 0x2b60f8u: goto label_2b60f8;
        case 0x2b60fcu: goto label_2b60fc;
        case 0x2b6100u: goto label_2b6100;
        case 0x2b6104u: goto label_2b6104;
        case 0x2b6108u: goto label_2b6108;
        case 0x2b610cu: goto label_2b610c;
        case 0x2b6110u: goto label_2b6110;
        case 0x2b6114u: goto label_2b6114;
        case 0x2b6118u: goto label_2b6118;
        case 0x2b611cu: goto label_2b611c;
        case 0x2b6120u: goto label_2b6120;
        case 0x2b6124u: goto label_2b6124;
        case 0x2b6128u: goto label_2b6128;
        case 0x2b612cu: goto label_2b612c;
        case 0x2b6130u: goto label_2b6130;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6138u: goto label_2b6138;
        case 0x2b613cu: goto label_2b613c;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6144u: goto label_2b6144;
        case 0x2b6148u: goto label_2b6148;
        case 0x2b614cu: goto label_2b614c;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6154u: goto label_2b6154;
        case 0x2b6158u: goto label_2b6158;
        case 0x2b615cu: goto label_2b615c;
        case 0x2b6160u: goto label_2b6160;
        case 0x2b6164u: goto label_2b6164;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b616cu: goto label_2b616c;
        case 0x2b6170u: goto label_2b6170;
        case 0x2b6174u: goto label_2b6174;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b617cu: goto label_2b617c;
        case 0x2b6180u: goto label_2b6180;
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6188u: goto label_2b6188;
        case 0x2b618cu: goto label_2b618c;
        case 0x2b6190u: goto label_2b6190;
        case 0x2b6194u: goto label_2b6194;
        case 0x2b6198u: goto label_2b6198;
        case 0x2b619cu: goto label_2b619c;
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
        default: return;
    }

label_2b5fc8:
    // 0x2b5fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5fcc:
    // 0x2b5fcc: 0x4006c3  .word       0x004006C3                   # sra         $zero, $zero, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 27));
label_2b5fd0:
    // 0x2b5fd0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b5fd4:
    // 0x2b5fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5fd8:
    // 0x2b5fd8: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2b5fdc:
    if (ctx->pc == 0x2B5FDCu) {
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE0u;
        goto label_2b5fe0;
    }
    ctx->pc = 0x2B5FD8u;
    {
        const bool branch_taken_0x2b5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fd8) {
            ctx->pc = 0x2B6174u;
            goto label_2b6174;
        }
    }
    ctx->pc = 0x2B5FE0u;
label_2b5fe0:
    // 0x2b5fe0: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2b5fe4:
    if (ctx->pc == 0x2B5FE4u) {
        ctx->pc = 0x2B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE0u;
        // 0x2b5fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE8u;
        goto label_2b5fe8;
    }
    ctx->pc = 0x2B5FE0u;
    {
        const bool branch_taken_0x2b5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE0u;
        // 0x2b5fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fe0) {
            ctx->pc = 0x2B61FCu;
            goto label_2b61fc;
        }
    }
    ctx->pc = 0x2B5FE8u;
label_2b5fe8:
    // 0x2b5fe8: 0x3e89801  .word       0x03E89801                   # INVALID     $ra, $t0, -0x67FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fe8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B5FE8 raw=0x03E89801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5fec:
    // 0x2b5fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ff0:
    // 0x2b5ff0: 0x3e8a005  .word       0x03E8A005                   # INVALID     $ra, $t0, -0x5FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B5FF0 raw=0x03E8A005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5ff4:
    // 0x2b5ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ff8:
    // 0x2b5ff8: 0x3e8a809  .word       0x03E8A809                   # jalr        $s5, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b5ffc:
    if (ctx->pc == 0x2B5FFCu) {
        ctx->pc = 0x2B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FF8u;
        // 0x2b5ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6000u;
        goto label_2b6000;
    }
    ctx->pc = 0x2B5FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 21, 0x2B6000u);
        ctx->pc = 0x2B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FF8u;
        // 0x2b5ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FF8u, 0x2B6000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6000u;
label_2b6000:
    // 0x2b6000: 0x3e8980d  break       1000, 608
    ctx->pc = 0x2b6000u;
    runtime->handleBreak(rdram, ctx);
label_2b6004:
    // 0x2b6004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6008:
    // 0x2b6008: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6008u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b600c:
    // 0x2b600c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b600cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6010:
    // 0x2b6010: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2b6010u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6014:
    // 0x2b6014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6018:
    // 0x2b6018: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2b6018u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2b601c:
    // 0x2b601c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b601cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6020:
    // 0x2b6020: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2B6020 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6024:
    // 0x2b6024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6028:
    // 0x2b6028: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6028u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2b602c:
    // 0x2b602c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b602cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6030:
    // 0x2b6030: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2b6030u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6034:
    // 0x2b6034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6038:
    // 0x2b6038: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2b6038u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2b603c:
    // 0x2b603c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b603cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6040:
    // 0x2b6040: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6040u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b6044:
    // 0x2b6044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6048:
    // 0x2b6048: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6048u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b604c:
    // 0x2b604c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b604cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b6050:
    // 0x2b6050: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6050u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b6054:
    // 0x2b6054: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b6054u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b6058:
    // 0x2b6058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b605c:
    // 0x2b605c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b605cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6060:
    // 0x2b6060: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6064:
    // 0x2b6064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6068:
    // 0x2b6068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b606c:
    // 0x2b606c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b606cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6070:
    // 0x2b6070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6074:
    // 0x2b6074: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B6074 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6078:
    // 0x2b6078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b607c:
    // 0x2b607c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b607cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6080:
    // 0x2b6080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6084:
    // 0x2b6084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6088:
    // 0x2b6088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b608c:
    // 0x2b608c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b608cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6090:
    // 0x2b6090: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6094:
    // 0x2b6094: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6094u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b6098:
    // 0x2b6098: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6098u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b609c:
    // 0x2b609c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b609cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b60a0:
    // 0x2b60a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60a4:
    // 0x2b60a4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b60a8:
    // 0x2b60a8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b60a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b60ac:
    // 0x2b60ac: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b60b0:
    // 0x2b60b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60b4:
    // 0x2b60b4: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60b4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b60b8:
    // 0x2b60b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60bc:
    // 0x2b60bc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60bcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b60c0:
    // 0x2b60c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60c4:
    // 0x2b60c4: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b60c8:
    // 0x2b60c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60cc:
    // 0x2b60cc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60ccu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b60d0:
    // 0x2b60d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60d4:
    // 0x2b60d4: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60d4u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b60d8:
    // 0x2b60d8: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b60d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B60D8 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b60dc:
    // 0x2b60dc: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b60dcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b60e0:
    // 0x2b60e0: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b60e4:
    // 0x2b60e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b60e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b60e8:
    // 0x2b60e8: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b60ec:
    // 0x2b60ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b60ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b60f0:
    // 0x2b60f0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b60f4:
    if (ctx->pc == 0x2B60F4u) {
        ctx->pc = 0x2B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F0u;
        // 0x2b60f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60F8u;
        goto label_2b60f8;
    }
    ctx->pc = 0x2B60F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F0u;
        // 0x2b60f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B60F8u;
label_2b60f8:
    // 0x2b60f8: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60f8u;
    ctx->pc = 0x2B60FCu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2b60fc:
    // 0x2b60fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b60fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6100:
    // 0x2b6100: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b6100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b6104:
    // 0x2b6104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6108:
    // 0x2b6108: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2b610c:
    if (ctx->pc == 0x2B610Cu) {
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6110u;
        goto label_2b6110;
    }
    ctx->pc = 0x2B6108u;
    {
        const bool branch_taken_0x2b6108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6108) {
            ctx->pc = 0x2B610Cu;
            goto label_2b610c;
        }
    }
    ctx->pc = 0x2B6110u;
label_2b6110:
    // 0x2b6110: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2b6114:
    if (ctx->pc == 0x2B6114u) {
        ctx->pc = 0x2B6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6110u;
        // 0x2b6114: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6118u;
        goto label_2b6118;
    }
    ctx->pc = 0x2B6110u;
    {
        const bool branch_taken_0x2b6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6110u;
        // 0x2b6114: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6110) {
            ctx->pc = 0x2B6194u;
            goto label_2b6194;
        }
    }
    ctx->pc = 0x2B6118u;
label_2b6118:
    // 0x2b6118: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2b611c:
    if (ctx->pc == 0x2B611Cu) {
        ctx->pc = 0x2B611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6118u;
        // 0x2b611c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6120u;
        goto label_2b6120;
    }
    ctx->pc = 0x2B6118u;
    {
        const bool branch_taken_0x2b6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6118u;
        // 0x2b611c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6118) {
            ctx->pc = 0x2B6124u;
            goto label_2b6124;
        }
    }
    ctx->pc = 0x2B6120u;
label_2b6120:
    // 0x2b6120: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6124:
    if (ctx->pc == 0x2B6124u) {
        ctx->pc = 0x2B6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6120u;
        // 0x2b6124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6128u;
        goto label_2b6128;
    }
    ctx->pc = 0x2B6120u;
    {
        const bool branch_taken_0x2b6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6120u;
        // 0x2b6124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6120) {
            ctx->pc = 0x2BC124u;
            { ctx->pc = 0x2bc124; return; }
        }
    }
    ctx->pc = 0x2B6128u;
label_2b6128:
    // 0x2b6128: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b612c:
    if (ctx->pc == 0x2B612Cu) {
        ctx->pc = 0x2B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6128u;
        // 0x2b612c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6130u;
        goto label_2b6130;
    }
    ctx->pc = 0x2B6128u;
    {
        const bool branch_taken_0x2b6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6128u;
        // 0x2b612c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6128) {
            ctx->pc = 0x2BC1ACu;
            { ctx->pc = 0x2bc1ac; return; }
        }
    }
    ctx->pc = 0x2B6130u;
label_2b6130:
    // 0x2b6130: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2b6134:
    if (ctx->pc == 0x2B6134u) {
        ctx->pc = 0x2B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6130u;
        // 0x2b6134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6138u;
        goto label_2b6138;
    }
    ctx->pc = 0x2B6130u;
    {
        const bool branch_taken_0x2b6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6130u;
        // 0x2b6134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6130) {
            ctx->pc = 0x2B6140u;
            goto label_2b6140;
        }
    }
    ctx->pc = 0x2B6138u;
label_2b6138:
    // 0x2b6138: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b613c:
    if (ctx->pc == 0x2B613Cu) {
        ctx->pc = 0x2B613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6138u;
        // 0x2b613c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6140u;
        goto label_2b6140;
    }
    ctx->pc = 0x2B6138u;
    {
        const bool branch_taken_0x2b6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6138u;
        // 0x2b613c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6138) {
            ctx->pc = 0x2B613Cu;
            goto label_2b613c;
        }
    }
    ctx->pc = 0x2B6140u;
label_2b6140:
    // 0x2b6140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6144:
    // 0x2b6144: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6144u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b6148:
    // 0x2b6148: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6148u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b614c:
    // 0x2b614c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b614cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6150:
    // 0x2b6150: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6150u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6154:
    // 0x2b6154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6158:
    // 0x2b6158: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6158u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b615c:
    // 0x2b615c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b615cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6160:
    // 0x2b6160: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6160u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6164:
    // 0x2b6164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6168:
    // 0x2b6168: 0x42020096  .word       0x42020096                   # INVALID     $s0, $v0, 0x96 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6168u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2B6168 raw=0x42020096"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b616c:
    // 0x2b616c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b616cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6170:
    // 0x2b6170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6174:
    // 0x2b6174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6178:
    // 0x2b6178: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b617c:
    if (ctx->pc == 0x2B617Cu) {
        ctx->pc = 0x2B617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6178u;
        // 0x2b617c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6180u;
        goto label_2b6180;
    }
    ctx->pc = 0x2B6178u;
    {
        const bool branch_taken_0x2b6178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6178u;
        // 0x2b617c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6178) {
            ctx->pc = 0x2CA180u;
            return;
        }
    }
    ctx->pc = 0x2B6180u;
label_2b6180:
    // 0x2b6180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6184:
    // 0x2b6184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6188:
    // 0x2b6188: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b618c:
    if (ctx->pc == 0x2B618Cu) {
        ctx->pc = 0x2B618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6188u;
        // 0x2b618c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6190u;
        goto label_2b6190;
    }
    ctx->pc = 0x2B6188u;
    {
        const bool branch_taken_0x2b6188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6188) {
            ctx->pc = 0x2B618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6188u;
            // 0x2b618c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8178u;
            { ctx->pc = 0x2b8178; return; }
        }
    }
    ctx->pc = 0x2B6190u;
label_2b6190:
    // 0x2b6190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6194:
    // 0x2b6194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6198:
    // 0x2b6198: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b619c:
    if (ctx->pc == 0x2B619Cu) {
        ctx->pc = 0x2B619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6198u;
        // 0x2b619c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61A0u;
        goto label_2b61a0;
    }
    ctx->pc = 0x2B6198u;
    {
        const bool branch_taken_0x2b6198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6198u;
        // 0x2b619c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6198) {
            ctx->pc = 0x2BC21Cu;
            { ctx->pc = 0x2bc21c; return; }
        }
    }
    ctx->pc = 0x2B61A0u;
label_2b61a0:
    // 0x2b61a0: 0x42020084  .word       0x42020084                   # INVALID     $s0, $v0, 0x84 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b61a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x4 at 0x2B61A0 raw=0x42020084"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B6220 raw=0x4202007F"); /* MITIGATED MMI/COP0 */
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
            return;
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
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2D at 0x2B6258 raw=0x4202006D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x28 at 0x2B62D8 raw=0x42020068"); /* MITIGATED MMI/COP0 */
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
            return;
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
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2B6310 raw=0x42020056"); /* MITIGATED MMI/COP0 */
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
            { ctx->pc = 0x2b67ec; return; }
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
    ctx->pc = 0x2b6798u;
    return;
}
