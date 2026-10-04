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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f0fa0u: goto label_1f0fa0;
        case 0x1f0fa4u: goto label_1f0fa4;
        case 0x1f0fa8u: goto label_1f0fa8;
        case 0x1f0facu: goto label_1f0fac;
        case 0x1f0fb0u: goto label_1f0fb0;
        case 0x1f0fb4u: goto label_1f0fb4;
        case 0x1f0fb8u: goto label_1f0fb8;
        case 0x1f0fbcu: goto label_1f0fbc;
        case 0x1f0fc0u: goto label_1f0fc0;
        case 0x1f0fc4u: goto label_1f0fc4;
        case 0x1f0fc8u: goto label_1f0fc8;
        case 0x1f0fccu: goto label_1f0fcc;
        case 0x1f0fd0u: goto label_1f0fd0;
        case 0x1f0fd4u: goto label_1f0fd4;
        case 0x1f0fd8u: goto label_1f0fd8;
        case 0x1f0fdcu: goto label_1f0fdc;
        case 0x1f0fe0u: goto label_1f0fe0;
        case 0x1f0fe4u: goto label_1f0fe4;
        case 0x1f0fe8u: goto label_1f0fe8;
        case 0x1f0fecu: goto label_1f0fec;
        case 0x1f0ff0u: goto label_1f0ff0;
        case 0x1f0ff4u: goto label_1f0ff4;
        case 0x1f0ff8u: goto label_1f0ff8;
        case 0x1f0ffcu: goto label_1f0ffc;
        case 0x1f1000u: goto label_1f1000;
        case 0x1f1004u: goto label_1f1004;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f100cu: goto label_1f100c;
        case 0x1f1010u: goto label_1f1010;
        case 0x1f1014u: goto label_1f1014;
        case 0x1f1018u: goto label_1f1018;
        case 0x1f101cu: goto label_1f101c;
        case 0x1f1020u: goto label_1f1020;
        case 0x1f1024u: goto label_1f1024;
        case 0x1f1028u: goto label_1f1028;
        case 0x1f102cu: goto label_1f102c;
        case 0x1f1030u: goto label_1f1030;
        case 0x1f1034u: goto label_1f1034;
        case 0x1f1038u: goto label_1f1038;
        case 0x1f103cu: goto label_1f103c;
        case 0x1f1040u: goto label_1f1040;
        case 0x1f1044u: goto label_1f1044;
        case 0x1f1048u: goto label_1f1048;
        case 0x1f104cu: goto label_1f104c;
        case 0x1f1050u: goto label_1f1050;
        case 0x1f1054u: goto label_1f1054;
        case 0x1f1058u: goto label_1f1058;
        case 0x1f105cu: goto label_1f105c;
        case 0x1f1060u: goto label_1f1060;
        case 0x1f1064u: goto label_1f1064;
        case 0x1f1068u: goto label_1f1068;
        case 0x1f106cu: goto label_1f106c;
        case 0x1f1070u: goto label_1f1070;
        case 0x1f1074u: goto label_1f1074;
        case 0x1f1078u: goto label_1f1078;
        case 0x1f107cu: goto label_1f107c;
        case 0x1f1080u: goto label_1f1080;
        case 0x1f1084u: goto label_1f1084;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f108cu: goto label_1f108c;
        case 0x1f1090u: goto label_1f1090;
        case 0x1f1094u: goto label_1f1094;
        case 0x1f1098u: goto label_1f1098;
        case 0x1f109cu: goto label_1f109c;
        case 0x1f10a0u: goto label_1f10a0;
        case 0x1f10a4u: goto label_1f10a4;
        case 0x1f10a8u: goto label_1f10a8;
        case 0x1f10acu: goto label_1f10ac;
        case 0x1f10b0u: goto label_1f10b0;
        case 0x1f10b4u: goto label_1f10b4;
        case 0x1f10b8u: goto label_1f10b8;
        case 0x1f10bcu: goto label_1f10bc;
        case 0x1f10c0u: goto label_1f10c0;
        case 0x1f10c4u: goto label_1f10c4;
        case 0x1f10c8u: goto label_1f10c8;
        case 0x1f10ccu: goto label_1f10cc;
        case 0x1f10d0u: goto label_1f10d0;
        case 0x1f10d4u: goto label_1f10d4;
        case 0x1f10d8u: goto label_1f10d8;
        case 0x1f10dcu: goto label_1f10dc;
        case 0x1f10e0u: goto label_1f10e0;
        case 0x1f10e4u: goto label_1f10e4;
        case 0x1f10e8u: goto label_1f10e8;
        case 0x1f10ecu: goto label_1f10ec;
        case 0x1f10f0u: goto label_1f10f0;
        case 0x1f10f4u: goto label_1f10f4;
        case 0x1f10f8u: goto label_1f10f8;
        case 0x1f10fcu: goto label_1f10fc;
        case 0x1f1100u: goto label_1f1100;
        case 0x1f1104u: goto label_1f1104;
        case 0x1f1108u: goto label_1f1108;
        case 0x1f110cu: goto label_1f110c;
        case 0x1f1110u: goto label_1f1110;
        case 0x1f1114u: goto label_1f1114;
        case 0x1f1118u: goto label_1f1118;
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1120u: goto label_1f1120;
        case 0x1f1124u: goto label_1f1124;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f112cu: goto label_1f112c;
        case 0x1f1130u: goto label_1f1130;
        case 0x1f1134u: goto label_1f1134;
        case 0x1f1138u: goto label_1f1138;
        case 0x1f113cu: goto label_1f113c;
        case 0x1f1140u: goto label_1f1140;
        case 0x1f1144u: goto label_1f1144;
        case 0x1f1148u: goto label_1f1148;
        case 0x1f114cu: goto label_1f114c;
        case 0x1f1150u: goto label_1f1150;
        case 0x1f1154u: goto label_1f1154;
        case 0x1f1158u: goto label_1f1158;
        case 0x1f115cu: goto label_1f115c;
        case 0x1f1160u: goto label_1f1160;
        case 0x1f1164u: goto label_1f1164;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f116cu: goto label_1f116c;
        case 0x1f1170u: goto label_1f1170;
        case 0x1f1174u: goto label_1f1174;
        case 0x1f1178u: goto label_1f1178;
        case 0x1f117cu: goto label_1f117c;
        case 0x1f1180u: goto label_1f1180;
        case 0x1f1184u: goto label_1f1184;
        case 0x1f1188u: goto label_1f1188;
        case 0x1f118cu: goto label_1f118c;
        case 0x1f1190u: goto label_1f1190;
        case 0x1f1194u: goto label_1f1194;
        case 0x1f1198u: goto label_1f1198;
        case 0x1f119cu: goto label_1f119c;
        case 0x1f11a0u: goto label_1f11a0;
        case 0x1f11a4u: goto label_1f11a4;
        case 0x1f11a8u: goto label_1f11a8;
        case 0x1f11acu: goto label_1f11ac;
        case 0x1f11b0u: goto label_1f11b0;
        case 0x1f11b4u: goto label_1f11b4;
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f11bcu: goto label_1f11bc;
        case 0x1f11c0u: goto label_1f11c0;
        case 0x1f11c4u: goto label_1f11c4;
        case 0x1f11c8u: goto label_1f11c8;
        case 0x1f11ccu: goto label_1f11cc;
        case 0x1f11d0u: goto label_1f11d0;
        case 0x1f11d4u: goto label_1f11d4;
        case 0x1f11d8u: goto label_1f11d8;
        case 0x1f11dcu: goto label_1f11dc;
        case 0x1f11e0u: goto label_1f11e0;
        case 0x1f11e4u: goto label_1f11e4;
        case 0x1f11e8u: goto label_1f11e8;
        case 0x1f11ecu: goto label_1f11ec;
        case 0x1f11f0u: goto label_1f11f0;
        case 0x1f11f4u: goto label_1f11f4;
        case 0x1f11f8u: goto label_1f11f8;
        case 0x1f11fcu: goto label_1f11fc;
        case 0x1f1200u: goto label_1f1200;
        case 0x1f1204u: goto label_1f1204;
        case 0x1f1208u: goto label_1f1208;
        case 0x1f120cu: goto label_1f120c;
        case 0x1f1210u: goto label_1f1210;
        case 0x1f1214u: goto label_1f1214;
        case 0x1f1218u: goto label_1f1218;
        case 0x1f121cu: goto label_1f121c;
        case 0x1f1220u: goto label_1f1220;
        case 0x1f1224u: goto label_1f1224;
        case 0x1f1228u: goto label_1f1228;
        case 0x1f122cu: goto label_1f122c;
        case 0x1f1230u: goto label_1f1230;
        case 0x1f1234u: goto label_1f1234;
        case 0x1f1238u: goto label_1f1238;
        case 0x1f123cu: goto label_1f123c;
        case 0x1f1240u: goto label_1f1240;
        case 0x1f1244u: goto label_1f1244;
        case 0x1f1248u: goto label_1f1248;
        case 0x1f124cu: goto label_1f124c;
        case 0x1f1250u: goto label_1f1250;
        case 0x1f1254u: goto label_1f1254;
        case 0x1f1258u: goto label_1f1258;
        case 0x1f125cu: goto label_1f125c;
        case 0x1f1260u: goto label_1f1260;
        case 0x1f1264u: goto label_1f1264;
        case 0x1f1268u: goto label_1f1268;
        case 0x1f126cu: goto label_1f126c;
        case 0x1f1270u: goto label_1f1270;
        case 0x1f1274u: goto label_1f1274;
        case 0x1f1278u: goto label_1f1278;
        case 0x1f127cu: goto label_1f127c;
        case 0x1f1280u: goto label_1f1280;
        case 0x1f1284u: goto label_1f1284;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f128cu: goto label_1f128c;
        case 0x1f1290u: goto label_1f1290;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f1298u: goto label_1f1298;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a0u: goto label_1f12a0;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12a8u: goto label_1f12a8;
        case 0x1f12acu: goto label_1f12ac;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12b4u: goto label_1f12b4;
        case 0x1f12b8u: goto label_1f12b8;
        case 0x1f12bcu: goto label_1f12bc;
        case 0x1f12c0u: goto label_1f12c0;
        case 0x1f12c4u: goto label_1f12c4;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12d8u: goto label_1f12d8;
        case 0x1f12dcu: goto label_1f12dc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f12f0u: goto label_1f12f0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f12f8u: goto label_1f12f8;
        case 0x1f12fcu: goto label_1f12fc;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f1308u: goto label_1f1308;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1314u: goto label_1f1314;
        case 0x1f1318u: goto label_1f1318;
        case 0x1f131cu: goto label_1f131c;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1324u: goto label_1f1324;
        case 0x1f1328u: goto label_1f1328;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f1330u: goto label_1f1330;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1338u: goto label_1f1338;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1340u: goto label_1f1340;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f134cu: goto label_1f134c;
        case 0x1f1350u: goto label_1f1350;
        case 0x1f1354u: goto label_1f1354;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f135cu: goto label_1f135c;
        case 0x1f1360u: goto label_1f1360;
        case 0x1f1364u: goto label_1f1364;
        case 0x1f1368u: goto label_1f1368;
        case 0x1f136cu: goto label_1f136c;
        case 0x1f1370u: goto label_1f1370;
        case 0x1f1374u: goto label_1f1374;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f137cu: goto label_1f137c;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f1384u: goto label_1f1384;
        case 0x1f1388u: goto label_1f1388;
        case 0x1f138cu: goto label_1f138c;
        case 0x1f1390u: goto label_1f1390;
        case 0x1f1394u: goto label_1f1394;
        case 0x1f1398u: goto label_1f1398;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13a4u: goto label_1f13a4;
        case 0x1f13a8u: goto label_1f13a8;
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b0u: goto label_1f13b0;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13b8u: goto label_1f13b8;
        case 0x1f13bcu: goto label_1f13bc;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f13c4u: goto label_1f13c4;
        case 0x1f13c8u: goto label_1f13c8;
        case 0x1f13ccu: goto label_1f13cc;
        case 0x1f13d0u: goto label_1f13d0;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f13d8u: goto label_1f13d8;
        case 0x1f13dcu: goto label_1f13dc;
        case 0x1f13e0u: goto label_1f13e0;
        case 0x1f13e4u: goto label_1f13e4;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f13ecu: goto label_1f13ec;
        case 0x1f13f0u: goto label_1f13f0;
        case 0x1f13f4u: goto label_1f13f4;
        case 0x1f13f8u: goto label_1f13f8;
        case 0x1f13fcu: goto label_1f13fc;
        case 0x1f1400u: goto label_1f1400;
        case 0x1f1404u: goto label_1f1404;
        case 0x1f1408u: goto label_1f1408;
        case 0x1f140cu: goto label_1f140c;
        case 0x1f1410u: goto label_1f1410;
        case 0x1f1414u: goto label_1f1414;
        case 0x1f1418u: goto label_1f1418;
        case 0x1f141cu: goto label_1f141c;
        case 0x1f1420u: goto label_1f1420;
        case 0x1f1424u: goto label_1f1424;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f142cu: goto label_1f142c;
        case 0x1f1430u: goto label_1f1430;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1438u: goto label_1f1438;
        case 0x1f143cu: goto label_1f143c;
        case 0x1f1440u: goto label_1f1440;
        case 0x1f1444u: goto label_1f1444;
        case 0x1f1448u: goto label_1f1448;
        case 0x1f144cu: goto label_1f144c;
        case 0x1f1450u: goto label_1f1450;
        case 0x1f1454u: goto label_1f1454;
        case 0x1f1458u: goto label_1f1458;
        case 0x1f145cu: goto label_1f145c;
        case 0x1f1460u: goto label_1f1460;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1468u: goto label_1f1468;
        case 0x1f146cu: goto label_1f146c;
        case 0x1f1470u: goto label_1f1470;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f1478u: goto label_1f1478;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1480u: goto label_1f1480;
        case 0x1f1484u: goto label_1f1484;
        case 0x1f1488u: goto label_1f1488;
        case 0x1f148cu: goto label_1f148c;
        case 0x1f1490u: goto label_1f1490;
        case 0x1f1494u: goto label_1f1494;
        case 0x1f1498u: goto label_1f1498;
        case 0x1f149cu: goto label_1f149c;
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f14a8u: goto label_1f14a8;
        case 0x1f14acu: goto label_1f14ac;
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14b4u: goto label_1f14b4;
        case 0x1f14b8u: goto label_1f14b8;
        case 0x1f14bcu: goto label_1f14bc;
        case 0x1f14c0u: goto label_1f14c0;
        case 0x1f14c4u: goto label_1f14c4;
        case 0x1f14c8u: goto label_1f14c8;
        case 0x1f14ccu: goto label_1f14cc;
        case 0x1f14d0u: goto label_1f14d0;
        case 0x1f14d4u: goto label_1f14d4;
        case 0x1f14d8u: goto label_1f14d8;
        case 0x1f14dcu: goto label_1f14dc;
        case 0x1f14e0u: goto label_1f14e0;
        case 0x1f14e4u: goto label_1f14e4;
        case 0x1f14e8u: goto label_1f14e8;
        case 0x1f14ecu: goto label_1f14ec;
        case 0x1f14f0u: goto label_1f14f0;
        case 0x1f14f4u: goto label_1f14f4;
        case 0x1f14f8u: goto label_1f14f8;
        case 0x1f14fcu: goto label_1f14fc;
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1504u: goto label_1f1504;
        case 0x1f1508u: goto label_1f1508;
        case 0x1f150cu: goto label_1f150c;
        case 0x1f1510u: goto label_1f1510;
        case 0x1f1514u: goto label_1f1514;
        case 0x1f1518u: goto label_1f1518;
        case 0x1f151cu: goto label_1f151c;
        case 0x1f1520u: goto label_1f1520;
        case 0x1f1524u: goto label_1f1524;
        case 0x1f1528u: goto label_1f1528;
        case 0x1f152cu: goto label_1f152c;
        case 0x1f1530u: goto label_1f1530;
        case 0x1f1534u: goto label_1f1534;
        case 0x1f1538u: goto label_1f1538;
        case 0x1f153cu: goto label_1f153c;
        case 0x1f1540u: goto label_1f1540;
        case 0x1f1544u: goto label_1f1544;
        case 0x1f1548u: goto label_1f1548;
        case 0x1f154cu: goto label_1f154c;
        case 0x1f1550u: goto label_1f1550;
        case 0x1f1554u: goto label_1f1554;
        case 0x1f1558u: goto label_1f1558;
        case 0x1f155cu: goto label_1f155c;
        case 0x1f1560u: goto label_1f1560;
        case 0x1f1564u: goto label_1f1564;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f156cu: goto label_1f156c;
        case 0x1f1570u: goto label_1f1570;
        case 0x1f1574u: goto label_1f1574;
        case 0x1f1578u: goto label_1f1578;
        case 0x1f157cu: goto label_1f157c;
        case 0x1f1580u: goto label_1f1580;
        case 0x1f1584u: goto label_1f1584;
        case 0x1f1588u: goto label_1f1588;
        case 0x1f158cu: goto label_1f158c;
        case 0x1f1590u: goto label_1f1590;
        case 0x1f1594u: goto label_1f1594;
        case 0x1f1598u: goto label_1f1598;
        case 0x1f159cu: goto label_1f159c;
        case 0x1f15a0u: goto label_1f15a0;
        case 0x1f15a4u: goto label_1f15a4;
        case 0x1f15a8u: goto label_1f15a8;
        case 0x1f15acu: goto label_1f15ac;
        case 0x1f15b0u: goto label_1f15b0;
        case 0x1f15b4u: goto label_1f15b4;
        case 0x1f15b8u: goto label_1f15b8;
        case 0x1f15bcu: goto label_1f15bc;
        case 0x1f15c0u: goto label_1f15c0;
        case 0x1f15c4u: goto label_1f15c4;
        case 0x1f15c8u: goto label_1f15c8;
        case 0x1f15ccu: goto label_1f15cc;
        case 0x1f15d0u: goto label_1f15d0;
        case 0x1f15d4u: goto label_1f15d4;
        case 0x1f15d8u: goto label_1f15d8;
        case 0x1f15dcu: goto label_1f15dc;
        case 0x1f15e0u: goto label_1f15e0;
        case 0x1f15e4u: goto label_1f15e4;
        case 0x1f15e8u: goto label_1f15e8;
        case 0x1f15ecu: goto label_1f15ec;
        case 0x1f15f0u: goto label_1f15f0;
        case 0x1f15f4u: goto label_1f15f4;
        case 0x1f15f8u: goto label_1f15f8;
        case 0x1f15fcu: goto label_1f15fc;
        case 0x1f1600u: goto label_1f1600;
        case 0x1f1604u: goto label_1f1604;
        case 0x1f1608u: goto label_1f1608;
        case 0x1f160cu: goto label_1f160c;
        case 0x1f1610u: goto label_1f1610;
        case 0x1f1614u: goto label_1f1614;
        case 0x1f1618u: goto label_1f1618;
        case 0x1f161cu: goto label_1f161c;
        case 0x1f1620u: goto label_1f1620;
        case 0x1f1624u: goto label_1f1624;
        case 0x1f1628u: goto label_1f1628;
        case 0x1f162cu: goto label_1f162c;
        case 0x1f1630u: goto label_1f1630;
        case 0x1f1634u: goto label_1f1634;
        case 0x1f1638u: goto label_1f1638;
        case 0x1f163cu: goto label_1f163c;
        case 0x1f1640u: goto label_1f1640;
        case 0x1f1644u: goto label_1f1644;
        case 0x1f1648u: goto label_1f1648;
        case 0x1f164cu: goto label_1f164c;
        case 0x1f1650u: goto label_1f1650;
        case 0x1f1654u: goto label_1f1654;
        case 0x1f1658u: goto label_1f1658;
        case 0x1f165cu: goto label_1f165c;
        case 0x1f1660u: goto label_1f1660;
        case 0x1f1664u: goto label_1f1664;
        case 0x1f1668u: goto label_1f1668;
        case 0x1f166cu: goto label_1f166c;
        case 0x1f1670u: goto label_1f1670;
        case 0x1f1674u: goto label_1f1674;
        case 0x1f1678u: goto label_1f1678;
        case 0x1f167cu: goto label_1f167c;
        case 0x1f1680u: goto label_1f1680;
        case 0x1f1684u: goto label_1f1684;
        case 0x1f1688u: goto label_1f1688;
        case 0x1f168cu: goto label_1f168c;
        case 0x1f1690u: goto label_1f1690;
        case 0x1f1694u: goto label_1f1694;
        case 0x1f1698u: goto label_1f1698;
        case 0x1f169cu: goto label_1f169c;
        case 0x1f16a0u: goto label_1f16a0;
        case 0x1f16a4u: goto label_1f16a4;
        case 0x1f16a8u: goto label_1f16a8;
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16b0u: goto label_1f16b0;
        case 0x1f16b4u: goto label_1f16b4;
        case 0x1f16b8u: goto label_1f16b8;
        case 0x1f16bcu: goto label_1f16bc;
        case 0x1f16c0u: goto label_1f16c0;
        case 0x1f16c4u: goto label_1f16c4;
        case 0x1f16c8u: goto label_1f16c8;
        case 0x1f16ccu: goto label_1f16cc;
        case 0x1f16d0u: goto label_1f16d0;
        case 0x1f16d4u: goto label_1f16d4;
        case 0x1f16d8u: goto label_1f16d8;
        case 0x1f16dcu: goto label_1f16dc;
        case 0x1f16e0u: goto label_1f16e0;
        case 0x1f16e4u: goto label_1f16e4;
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f16ecu: goto label_1f16ec;
        case 0x1f16f0u: goto label_1f16f0;
        case 0x1f16f4u: goto label_1f16f4;
        case 0x1f16f8u: goto label_1f16f8;
        case 0x1f16fcu: goto label_1f16fc;
        case 0x1f1700u: goto label_1f1700;
        case 0x1f1704u: goto label_1f1704;
        case 0x1f1708u: goto label_1f1708;
        case 0x1f170cu: goto label_1f170c;
        case 0x1f1710u: goto label_1f1710;
        case 0x1f1714u: goto label_1f1714;
        case 0x1f1718u: goto label_1f1718;
        case 0x1f171cu: goto label_1f171c;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1724u: goto label_1f1724;
        case 0x1f1728u: goto label_1f1728;
        case 0x1f172cu: goto label_1f172c;
        case 0x1f1730u: goto label_1f1730;
        case 0x1f1734u: goto label_1f1734;
        case 0x1f1738u: goto label_1f1738;
        case 0x1f173cu: goto label_1f173c;
        case 0x1f1740u: goto label_1f1740;
        case 0x1f1744u: goto label_1f1744;
        case 0x1f1748u: goto label_1f1748;
        case 0x1f174cu: goto label_1f174c;
        case 0x1f1750u: goto label_1f1750;
        case 0x1f1754u: goto label_1f1754;
        case 0x1f1758u: goto label_1f1758;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f1760u: goto label_1f1760;
        case 0x1f1764u: goto label_1f1764;
        case 0x1f1768u: goto label_1f1768;
        case 0x1f176cu: goto label_1f176c;
        default: return;
    }

label_1f0fa0:
    // 0x1f0fa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0fa4:
    // 0x1f0fa4: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f0fa8:
    // 0x1f0fa8: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f0fac:
    // 0x1f0fac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f0facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f0fb0:
    // 0x1f0fb0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f0fb4:
    // 0x1f0fb4: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1f0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1f0fb8:
    // 0x1f0fb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f0fbc:
    // 0x1f0fbc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1f0fc0:
    // 0x1f0fc0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f0fc4:
    // 0x1f0fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0fc8:
    // 0x1f0fc8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1f0fcc:
    // 0x1f0fcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f0fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0fd0:
    // 0x1f0fd0: 0xe4a821  addu        $s5, $a3, $a0
    ctx->pc = 0x1f0fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1f0fd4:
    // 0x1f0fd4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0fd8:
    // 0x1f0fd8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f0fdc:
    // 0x1f0fdc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1f0fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f0fe0:
    // 0x1f0fe0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1f0fe4:
    // 0x1f0fe4: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1f0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_1f0fe8:
    // 0x1f0fe8: 0x90a80221  lbu         $t0, 0x221($a1)
    ctx->pc = 0x1f0fe8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 545)));
label_1f0fec:
    // 0x1f0fec: 0x0  nop
    ctx->pc = 0x1f0fecu;
    // NOP
label_1f0ff0:
    // 0x1f0ff0: 0x0  nop
    ctx->pc = 0x1f0ff0u;
    // NOP
label_1f0ff4:
    // 0x1f0ff4: 0xe34821  addu        $t1, $a3, $v1
    ctx->pc = 0x1f0ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1f0ff8:
    // 0x1f0ff8: 0x9125367c  lbu         $a1, 0x367C($t1)
    ctx->pc = 0x1f0ff8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13948)));
label_1f0ffc:
    // 0x1f0ffc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1f1000:
    if (ctx->pc == 0x1F1000u) {
        ctx->pc = 0x1F1004u;
        goto label_1f1004;
    }
    ctx->pc = 0x1F0FFCu;
    {
        const bool branch_taken_0x1f0ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ffc) {
            ctx->pc = 0x1F1024u;
            goto label_1f1024;
        }
    }
    ctx->pc = 0x1F1004u;
label_1f1004:
    // 0x1f1004: 0x8d25366c  lw          $a1, 0x366C($t1)
    ctx->pc = 0x1f1004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13932)));
label_1f1008:
    // 0x1f1008: 0x14a80006  bne         $a1, $t0, . + 4 + (0x6 << 2)
label_1f100c:
    if (ctx->pc == 0x1F100Cu) {
        ctx->pc = 0x1F1010u;
        goto label_1f1010;
    }
    ctx->pc = 0x1F1008u;
    {
        const bool branch_taken_0x1f1008 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f1008) {
            ctx->pc = 0x1F1024u;
            goto label_1f1024;
        }
    }
    ctx->pc = 0x1F1010u;
label_1f1010:
    // 0x1f1010: 0x8d253674  lw          $a1, 0x3674($t1)
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13940)));
label_1f1014:
    // 0x1f1014: 0x14b00003  bne         $a1, $s0, . + 4 + (0x3 << 2)
label_1f1018:
    if (ctx->pc == 0x1F1018u) {
        ctx->pc = 0x1F101Cu;
        goto label_1f101c;
    }
    ctx->pc = 0x1F1014u;
    {
        const bool branch_taken_0x1f1014 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f1014) {
            ctx->pc = 0x1F1024u;
            goto label_1f1024;
        }
    }
    ctx->pc = 0x1F101Cu;
label_1f101c:
    // 0x1f101c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1020:
    if (ctx->pc == 0x1F1020u) {
        ctx->pc = 0x1F1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F101Cu;
        // 0x1f1020: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1024u;
        goto label_1f1024;
    }
    ctx->pc = 0x1F101Cu;
    {
        const bool branch_taken_0x1f101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F101Cu;
        // 0x1f1020: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f101c) {
            ctx->pc = 0x1F1038u;
            goto label_1f1038;
        }
    }
    ctx->pc = 0x1F1024u;
label_1f1024:
    // 0x1f1024: 0x0  nop
    ctx->pc = 0x1f1024u;
    // NOP
label_1f1028:
    // 0x1f1028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f102c:
    // 0x1f102c: 0x28450002  slti        $a1, $v0, 0x2
    ctx->pc = 0x1f102cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1030:
    // 0x1f1030: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
label_1f1034:
    if (ctx->pc == 0x1F1034u) {
        ctx->pc = 0x1F1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1030u;
        // 0x1f1034: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1038u;
        goto label_1f1038;
    }
    ctx->pc = 0x1F1030u;
    {
        const bool branch_taken_0x1f1030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1030u;
        // 0x1f1034: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1030) {
            ctx->pc = 0x1F0FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F1038u;
label_1f1038:
    // 0x1f1038: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f103c:
    // 0x1f103c: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
label_1f1040:
    if (ctx->pc == 0x1F1040u) {
        ctx->pc = 0x1F1044u;
        goto label_1f1044;
    }
    ctx->pc = 0x1F103Cu;
    {
        const bool branch_taken_0x1f103c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f103c) {
            ctx->pc = 0x1F1054u;
            goto label_1f1054;
        }
    }
    ctx->pc = 0x1F1044u;
label_1f1044:
    // 0x1f1044: 0xc085cc4  jal         func_217310
label_1f1048:
    if (ctx->pc == 0x1F1048u) {
        ctx->pc = 0x1F1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1044u;
        // 0x1f1048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F104Cu;
        goto label_1f104c;
    }
    ctx->pc = 0x1F1044u;
    SET_GPR_U32(ctx, 31, 0x1F104Cu);
    ctx->pc = 0x1F1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1044u;
    // 0x1f1048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F104Cu;
label_1f104c:
    // 0x1f104c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f1050:
    if (ctx->pc == 0x1F1050u) {
        ctx->pc = 0x1F1054u;
        goto label_1f1054;
    }
    ctx->pc = 0x1F104Cu;
    {
        const bool branch_taken_0x1f104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f104c) {
            ctx->pc = 0x1F1088u;
            goto label_1f1088;
        }
    }
    ctx->pc = 0x1F1054u;
label_1f1054:
    // 0x1f1054: 0x0  nop
    ctx->pc = 0x1f1054u;
    // NOP
label_1f1058:
    // 0x1f1058: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_1f105c:
    if (ctx->pc == 0x1F105Cu) {
        ctx->pc = 0x1F105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1058u;
        // 0x1f105c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1060u;
        goto label_1f1060;
    }
    ctx->pc = 0x1F1058u;
    {
        const bool branch_taken_0x1f1058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1058u;
        // 0x1f105c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1058) {
            ctx->pc = 0x1F1074u;
            goto label_1f1074;
        }
    }
    ctx->pc = 0x1F1060u;
label_1f1060:
    // 0x1f1060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1064:
    // 0x1f1064: 0xc085cc4  jal         func_217310
label_1f1068:
    if (ctx->pc == 0x1F1068u) {
        ctx->pc = 0x1F1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1064u;
        // 0x1f1068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F106Cu;
        goto label_1f106c;
    }
    ctx->pc = 0x1F1064u;
    SET_GPR_U32(ctx, 31, 0x1F106Cu);
    ctx->pc = 0x1F1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1064u;
    // 0x1f1068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F106Cu;
label_1f106c:
    // 0x1f106c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1070:
    if (ctx->pc == 0x1F1070u) {
        ctx->pc = 0x1F1074u;
        goto label_1f1074;
    }
    ctx->pc = 0x1F106Cu;
    {
        const bool branch_taken_0x1f106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f106c) {
            ctx->pc = 0x1F1088u;
            goto label_1f1088;
        }
    }
    ctx->pc = 0x1F1074u;
label_1f1074:
    // 0x1f1074: 0x0  nop
    ctx->pc = 0x1f1074u;
    // NOP
label_1f1078:
    // 0x1f1078: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f1078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f107c:
    // 0x1f107c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1080:
    // 0x1f1080: 0xc085cc4  jal         func_217310
label_1f1084:
    if (ctx->pc == 0x1F1084u) {
        ctx->pc = 0x1F1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1080u;
        // 0x1f1084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1088u;
        goto label_1f1088;
    }
    ctx->pc = 0x1F1080u;
    SET_GPR_U32(ctx, 31, 0x1F1088u);
    ctx->pc = 0x1F1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1080u;
    // 0x1f1084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1088u;
label_1f1088:
    // 0x1f1088: 0x27828fc8  addiu       $v0, $gp, -0x7038
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
label_1f108c:
    // 0x1f108c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f1090:
    // 0x1f1090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1094:
    // 0x1f1094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f1098:
    // 0x1f1098: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_1f109c:
    if (ctx->pc == 0x1F109Cu) {
        ctx->pc = 0x1F109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1098u;
        // 0x1f109c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F10A0u;
        goto label_1f10a0;
    }
    ctx->pc = 0x1F1098u;
    {
        const bool branch_taken_0x1f1098 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1098u;
        // 0x1f109c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1098) {
            ctx->pc = 0x1F10A4u;
            goto label_1f10a4;
        }
    }
    ctx->pc = 0x1F10A0u;
label_1f10a0:
    // 0x1f10a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f10a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f10a4:
    // 0x1f10a4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1f10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1f10a8:
    // 0x1f10a8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f10ac:
    // 0x1f10ac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1f10acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f10b0:
    // 0x1f10b0: 0x27828fa8  addiu       $v0, $gp, -0x7058
    ctx->pc = 0x1f10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
label_1f10b4:
    // 0x1f10b4: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x1f10b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f10b8:
    // 0x1f10b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f10bc:
    // 0x1f10bc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f10c0:
    // 0x1f10c0: 0x2442bfa0  addiu       $v0, $v0, -0x4060
    ctx->pc = 0x1f10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950816));
label_1f10c4:
    // 0x1f10c4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f10c8:
    // 0x1f10c8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f10cc:
    // 0x1f10cc: 0xaf908fb0  sw          $s0, -0x7050($gp)
    ctx->pc = 0x1f10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), GPR_U32(ctx, 16));
label_1f10d0:
    // 0x1f10d0: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x1f10d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f10d4:
    // 0x1f10d4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1f10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_1f10d8:
    // 0x1f10d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f10dc:
    // 0x1f10dc: 0xc07c9b8  jal         func_1F26E0
label_1f10e0:
    if (ctx->pc == 0x1F10E0u) {
        ctx->pc = 0x1F10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10DCu;
        // 0x1f10e0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F10E4u;
        goto label_1f10e4;
    }
    ctx->pc = 0x1F10DCu;
    SET_GPR_U32(ctx, 31, 0x1F10E4u);
    ctx->pc = 0x1F10E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10DCu;
    // 0x1f10e0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26E0u;
    { ctx->pc = 0x1f26e0; return; }
    ctx->pc = 0x1F10E4u;
label_1f10e4:
    // 0x1f10e4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1f10e8:
    // 0x1f10e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f10e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f10ec:
    // 0x1f10ec: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1f10ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f10f0:
    // 0x1f10f0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f10f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f10f4:
    // 0x1f10f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f10f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f10f8:
    // 0x1f10f8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1f10fc:
    // 0x1f10fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f1100:
    // 0x1f1100: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1f1100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1f1104:
    // 0x1f1104: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1f1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1f1108:
    // 0x1f1108: 0x90440221  lbu         $a0, 0x221($v0)
    ctx->pc = 0x1f1108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 545)));
label_1f110c:
    // 0x1f110c: 0x0  nop
    ctx->pc = 0x1f110cu;
    // NOP
label_1f1110:
    // 0x1f1110: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1f1110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1f1114:
    // 0x1f1114: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1f1114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1f1118:
    // 0x1f1118: 0x0  nop
    ctx->pc = 0x1f1118u;
    // NOP
label_1f111c:
    // 0x1f111c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1f111cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f1120:
    // 0x1f1120: 0x90e2367c  lbu         $v0, 0x367C($a3)
    ctx->pc = 0x1f1120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13948)));
label_1f1124:
    // 0x1f1124: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f1128:
    if (ctx->pc == 0x1F1128u) {
        ctx->pc = 0x1F112Cu;
        goto label_1f112c;
    }
    ctx->pc = 0x1F1124u;
    {
        const bool branch_taken_0x1f1124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1124) {
            ctx->pc = 0x1F114Cu;
            goto label_1f114c;
        }
    }
    ctx->pc = 0x1F112Cu;
label_1f112c:
    // 0x1f112c: 0x8ce2366c  lw          $v0, 0x366C($a3)
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13932)));
label_1f1130:
    // 0x1f1130: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_1f1134:
    if (ctx->pc == 0x1F1134u) {
        ctx->pc = 0x1F1138u;
        goto label_1f1138;
    }
    ctx->pc = 0x1F1130u;
    {
        const bool branch_taken_0x1f1130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f1130) {
            ctx->pc = 0x1F114Cu;
            goto label_1f114c;
        }
    }
    ctx->pc = 0x1F1138u;
label_1f1138:
    // 0x1f1138: 0x8ce23674  lw          $v0, 0x3674($a3)
    ctx->pc = 0x1f1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13940)));
label_1f113c:
    // 0x1f113c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_1f1140:
    if (ctx->pc == 0x1F1140u) {
        ctx->pc = 0x1F1144u;
        goto label_1f1144;
    }
    ctx->pc = 0x1F113Cu;
    {
        const bool branch_taken_0x1f113c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f113c) {
            ctx->pc = 0x1F114Cu;
            goto label_1f114c;
        }
    }
    ctx->pc = 0x1F1144u;
label_1f1144:
    // 0x1f1144: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1148:
    if (ctx->pc == 0x1F1148u) {
        ctx->pc = 0x1F1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1144u;
        // 0x1f1148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F114Cu;
        goto label_1f114c;
    }
    ctx->pc = 0x1F1144u;
    {
        const bool branch_taken_0x1f1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1144u;
        // 0x1f1148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1144) {
            ctx->pc = 0x1F1160u;
            goto label_1f1160;
        }
    }
    ctx->pc = 0x1F114Cu;
label_1f114c:
    // 0x1f114c: 0x0  nop
    ctx->pc = 0x1f114cu;
    // NOP
label_1f1150:
    // 0x1f1150: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f1154:
    // 0x1f1154: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f1154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1158:
    // 0x1f1158: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1f115c:
    if (ctx->pc == 0x1F115Cu) {
        ctx->pc = 0x1F115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1158u;
        // 0x1f115c: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1160u;
        goto label_1f1160;
    }
    ctx->pc = 0x1F1158u;
    {
        const bool branch_taken_0x1f1158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1158u;
        // 0x1f115c: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1158) {
            ctx->pc = 0x1F1118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1118;
        }
    }
    ctx->pc = 0x1F1160u;
label_1f1160:
    // 0x1f1160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1164:
    // 0x1f1164: 0x12250009  beq         $s1, $a1, . + 4 + (0x9 << 2)
label_1f1168:
    if (ctx->pc == 0x1F1168u) {
        ctx->pc = 0x1F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1164u;
        // 0x1f1168: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F116Cu;
        goto label_1f116c;
    }
    ctx->pc = 0x1F1164u;
    {
        const bool branch_taken_0x1f1164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1164u;
        // 0x1f1168: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1164) {
            ctx->pc = 0x1F118Cu;
            goto label_1f118c;
        }
    }
    ctx->pc = 0x1F116Cu;
label_1f116c:
    // 0x1f116c: 0xc085c34  jal         func_2170D0
label_1f1170:
    if (ctx->pc == 0x1F1170u) {
        ctx->pc = 0x1F1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F116Cu;
        // 0x1f1170: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1174u;
        goto label_1f1174;
    }
    ctx->pc = 0x1F116Cu;
    SET_GPR_U32(ctx, 31, 0x1F1174u);
    ctx->pc = 0x1F1170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F116Cu;
    // 0x1f1170: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F1174u;
label_1f1174:
    // 0x1f1174: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f1174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1178:
    // 0x1f1178: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f117c:
    // 0x1f117c: 0xc085cc4  jal         func_217310
label_1f1180:
    if (ctx->pc == 0x1F1180u) {
        ctx->pc = 0x1F1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F117Cu;
        // 0x1f1180: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1184u;
        goto label_1f1184;
    }
    ctx->pc = 0x1F117Cu;
    SET_GPR_U32(ctx, 31, 0x1F1184u);
    ctx->pc = 0x1F1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F117Cu;
    // 0x1f1180: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1184u;
label_1f1184:
    // 0x1f1184: 0x10000148  b           . + 4 + (0x148 << 2)
label_1f1188:
    if (ctx->pc == 0x1F1188u) {
        ctx->pc = 0x1F118Cu;
        goto label_1f118c;
    }
    ctx->pc = 0x1F1184u;
    {
        const bool branch_taken_0x1f1184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1184) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F118Cu;
label_1f118c:
    // 0x1f118c: 0x0  nop
    ctx->pc = 0x1f118cu;
    // NOP
label_1f1190:
    // 0x1f1190: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_1f1194:
    if (ctx->pc == 0x1F1194u) {
        ctx->pc = 0x1F1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1190u;
        // 0x1f1194: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1198u;
        goto label_1f1198;
    }
    ctx->pc = 0x1F1190u;
    {
        const bool branch_taken_0x1f1190 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1190u;
        // 0x1f1194: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1190) {
            ctx->pc = 0x1F11BCu;
            goto label_1f11bc;
        }
    }
    ctx->pc = 0x1F1198u;
label_1f1198:
    // 0x1f1198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f119c:
    // 0x1f119c: 0xc085c34  jal         func_2170D0
label_1f11a0:
    if (ctx->pc == 0x1F11A0u) {
        ctx->pc = 0x1F11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F119Cu;
        // 0x1f11a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11A4u;
        goto label_1f11a4;
    }
    ctx->pc = 0x1F119Cu;
    SET_GPR_U32(ctx, 31, 0x1F11A4u);
    ctx->pc = 0x1F11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F119Cu;
    // 0x1f11a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F11A4u;
label_1f11a4:
    // 0x1f11a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f11a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f11a8:
    // 0x1f11a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f11a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f11ac:
    // 0x1f11ac: 0xc085cc4  jal         func_217310
label_1f11b0:
    if (ctx->pc == 0x1F11B0u) {
        ctx->pc = 0x1F11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11ACu;
        // 0x1f11b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11B4u;
        goto label_1f11b4;
    }
    ctx->pc = 0x1F11ACu;
    SET_GPR_U32(ctx, 31, 0x1F11B4u);
    ctx->pc = 0x1F11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11ACu;
    // 0x1f11b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F11B4u;
label_1f11b4:
    // 0x1f11b4: 0x1000013c  b           . + 4 + (0x13C << 2)
label_1f11b8:
    if (ctx->pc == 0x1F11B8u) {
        ctx->pc = 0x1F11BCu;
        goto label_1f11bc;
    }
    ctx->pc = 0x1F11B4u;
    {
        const bool branch_taken_0x1f11b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11b4) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F11BCu;
label_1f11bc:
    // 0x1f11bc: 0x0  nop
    ctx->pc = 0x1f11bcu;
    // NOP
label_1f11c0:
    // 0x1f11c0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f11c4:
    // 0x1f11c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f11c8:
    // 0x1f11c8: 0xc085c34  jal         func_2170D0
label_1f11cc:
    if (ctx->pc == 0x1F11CCu) {
        ctx->pc = 0x1F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11C8u;
        // 0x1f11cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11D0u;
        goto label_1f11d0;
    }
    ctx->pc = 0x1F11C8u;
    SET_GPR_U32(ctx, 31, 0x1F11D0u);
    ctx->pc = 0x1F11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11C8u;
    // 0x1f11cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F11D0u;
label_1f11d0:
    // 0x1f11d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f11d4:
    // 0x1f11d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f11d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f11d8:
    // 0x1f11d8: 0xc085cc4  jal         func_217310
label_1f11dc:
    if (ctx->pc == 0x1F11DCu) {
        ctx->pc = 0x1F11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11D8u;
        // 0x1f11dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11E0u;
        goto label_1f11e0;
    }
    ctx->pc = 0x1F11D8u;
    SET_GPR_U32(ctx, 31, 0x1F11E0u);
    ctx->pc = 0x1F11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11D8u;
    // 0x1f11dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F11E0u;
label_1f11e0:
    // 0x1f11e0: 0x10000131  b           . + 4 + (0x131 << 2)
label_1f11e4:
    if (ctx->pc == 0x1F11E4u) {
        ctx->pc = 0x1F11E8u;
        goto label_1f11e8;
    }
    ctx->pc = 0x1F11E0u;
    {
        const bool branch_taken_0x1f11e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11e0) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F11E8u;
label_1f11e8:
    // 0x1f11e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f11ec:
    // 0x1f11ec: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f11f0:
    // 0x1f11f0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1f11f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1f11f4:
    // 0x1f11f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f11f8:
    // 0x1f11f8: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_1f11fc:
    if (ctx->pc == 0x1F11FCu) {
        ctx->pc = 0x1F1200u;
        goto label_1f1200;
    }
    ctx->pc = 0x1F11F8u;
    {
        const bool branch_taken_0x1f11f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11f8) {
            ctx->pc = 0x1F1450u;
            goto label_1f1450;
        }
    }
    ctx->pc = 0x1F1200u;
label_1f1200:
    // 0x1f1200: 0x12000129  beqz        $s0, . + 4 + (0x129 << 2)
label_1f1204:
    if (ctx->pc == 0x1F1204u) {
        ctx->pc = 0x1F1208u;
        goto label_1f1208;
    }
    ctx->pc = 0x1F1200u;
    {
        const bool branch_taken_0x1f1200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1200) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1208u;
label_1f1208:
    // 0x1f1208: 0x8f828fc8  lw          $v0, -0x7038($gp)
    ctx->pc = 0x1f1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
label_1f120c:
    // 0x1f120c: 0x18400126  blez        $v0, . + 4 + (0x126 << 2)
label_1f1210:
    if (ctx->pc == 0x1F1210u) {
        ctx->pc = 0x1F1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F120Cu;
        // 0x1f1210: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1214u;
        goto label_1f1214;
    }
    ctx->pc = 0x1F120Cu;
    {
        const bool branch_taken_0x1f120c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F120Cu;
        // 0x1f1210: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f120c) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1214u;
label_1f1214:
    // 0x1f1214: 0xc05b420  jal         func_16D080
label_1f1218:
    if (ctx->pc == 0x1F1218u) {
        ctx->pc = 0x1F1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1214u;
        // 0x1f1218: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F121Cu;
        goto label_1f121c;
    }
    ctx->pc = 0x1F1214u;
    SET_GPR_U32(ctx, 31, 0x1F121Cu);
    ctx->pc = 0x1F1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1214u;
    // 0x1f1218: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F1214u, 0x1F121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F121Cu;
label_1f121c:
    // 0x1f121c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f121cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f1220:
    // 0x1f1220: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f1220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f1224:
    // 0x1f1224: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x1f1224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f1228:
    // 0x1f1228: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1f1228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1f122c:
    // 0x1f122c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1230:
    // 0x1f1230: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f1234:
    // 0x1f1234: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1f1234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f1238:
    // 0x1f1238: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1f1238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f123c:
    // 0x1f123c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f1240:
    // 0x1f1240: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1244:
    // 0x1f1244: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f1248:
    // 0x1f1248: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f124c:
    // 0x1f124c: 0x24670000  addiu       $a3, $v1, 0x0
    ctx->pc = 0x1f124cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f1250:
    // 0x1f1250: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f1250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f1254:
    // 0x1f1254: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1f1254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f1258:
    // 0x1f1258: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1f1258u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f125c:
    // 0x1f125c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f1260:
    // 0x1f1260: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1f1260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f1264:
    // 0x1f1264: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1268:
    // 0x1f1268: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x1f1268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f126c:
    // 0x1f126c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1f126cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1f1270:
    // 0x1f1270: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f1274:
    // 0x1f1274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1278:
    // 0x1f1278: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1f1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1f127c:
    // 0x1f127c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f127cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1280:
    // 0x1f1280: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x1f1280u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1f1284:
    // 0x1f1284: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1f1284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1f1288:
    // 0x1f1288: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1f1288u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_1f128c:
    // 0x1f128c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1f128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f1290:
    // 0x1f1290: 0x90870221  lbu         $a3, 0x221($a0)
    ctx->pc = 0x1f1290u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 545)));
label_1f1294:
    // 0x1f1294: 0x0  nop
    ctx->pc = 0x1f1294u;
    // NOP
label_1f1298:
    // 0x1f1298: 0x0  nop
    ctx->pc = 0x1f1298u;
    // NOP
label_1f129c:
    // 0x1f129c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x1f129cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1f12a0:
    // 0x1f12a0: 0x9104367c  lbu         $a0, 0x367C($t0)
    ctx->pc = 0x1f12a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f12a4:
    // 0x1f12a4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1f12a8:
    if (ctx->pc == 0x1F12A8u) {
        ctx->pc = 0x1F12ACu;
        goto label_1f12ac;
    }
    ctx->pc = 0x1F12A4u;
    {
        const bool branch_taken_0x1f12a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f12a4) {
            ctx->pc = 0x1F12CCu;
            goto label_1f12cc;
        }
    }
    ctx->pc = 0x1F12ACu;
label_1f12ac:
    // 0x1f12ac: 0x8d04366c  lw          $a0, 0x366C($t0)
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13932)));
label_1f12b0:
    // 0x1f12b0: 0x14870006  bne         $a0, $a3, . + 4 + (0x6 << 2)
label_1f12b4:
    if (ctx->pc == 0x1F12B4u) {
        ctx->pc = 0x1F12B8u;
        goto label_1f12b8;
    }
    ctx->pc = 0x1F12B0u;
    {
        const bool branch_taken_0x1f12b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f12b0) {
            ctx->pc = 0x1F12CCu;
            goto label_1f12cc;
        }
    }
    ctx->pc = 0x1F12B8u;
label_1f12b8:
    // 0x1f12b8: 0x8d043674  lw          $a0, 0x3674($t0)
    ctx->pc = 0x1f12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13940)));
label_1f12bc:
    // 0x1f12bc: 0x14900003  bne         $a0, $s0, . + 4 + (0x3 << 2)
label_1f12c0:
    if (ctx->pc == 0x1F12C0u) {
        ctx->pc = 0x1F12C4u;
        goto label_1f12c4;
    }
    ctx->pc = 0x1F12BCu;
    {
        const bool branch_taken_0x1f12bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f12bc) {
            ctx->pc = 0x1F12CCu;
            goto label_1f12cc;
        }
    }
    ctx->pc = 0x1F12C4u;
label_1f12c4:
    // 0x1f12c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f12c8:
    if (ctx->pc == 0x1F12C8u) {
        ctx->pc = 0x1F12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12C4u;
        // 0x1f12c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12CCu;
        goto label_1f12cc;
    }
    ctx->pc = 0x1F12C4u;
    {
        const bool branch_taken_0x1f12c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12C4u;
        // 0x1f12c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12c4) {
            ctx->pc = 0x1F12E0u;
            goto label_1f12e0;
        }
    }
    ctx->pc = 0x1F12CCu;
label_1f12cc:
    // 0x1f12cc: 0x0  nop
    ctx->pc = 0x1f12ccu;
    // NOP
label_1f12d0:
    // 0x1f12d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f12d4:
    // 0x1f12d4: 0x28440002  slti        $a0, $v0, 0x2
    ctx->pc = 0x1f12d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f12d8:
    // 0x1f12d8: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_1f12dc:
    if (ctx->pc == 0x1F12DCu) {
        ctx->pc = 0x1F12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D8u;
        // 0x1f12dc: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12E0u;
        goto label_1f12e0;
    }
    ctx->pc = 0x1F12D8u;
    {
        const bool branch_taken_0x1f12d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D8u;
        // 0x1f12dc: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d8) {
            ctx->pc = 0x1F1298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1298;
        }
    }
    ctx->pc = 0x1F12E0u;
label_1f12e0:
    // 0x1f12e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f12e4:
    // 0x1f12e4: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
label_1f12e8:
    if (ctx->pc == 0x1F12E8u) {
        ctx->pc = 0x1F12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12E4u;
        // 0x1f12e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12ECu;
        goto label_1f12ec;
    }
    ctx->pc = 0x1F12E4u;
    {
        const bool branch_taken_0x1f12e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12E4u;
        // 0x1f12e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12e4) {
            ctx->pc = 0x1F12FCu;
            goto label_1f12fc;
        }
    }
    ctx->pc = 0x1F12ECu;
label_1f12ec:
    // 0x1f12ec: 0xc085cc4  jal         func_217310
label_1f12f0:
    if (ctx->pc == 0x1F12F0u) {
        ctx->pc = 0x1F12F4u;
        goto label_1f12f4;
    }
    ctx->pc = 0x1F12ECu;
    SET_GPR_U32(ctx, 31, 0x1F12F4u);
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F12F4u;
label_1f12f4:
    // 0x1f12f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f12f8:
    if (ctx->pc == 0x1F12F8u) {
        ctx->pc = 0x1F12FCu;
        goto label_1f12fc;
    }
    ctx->pc = 0x1F12F4u;
    {
        const bool branch_taken_0x1f12f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f12f4) {
            ctx->pc = 0x1F1330u;
            goto label_1f1330;
        }
    }
    ctx->pc = 0x1F12FCu;
label_1f12fc:
    // 0x1f12fc: 0x0  nop
    ctx->pc = 0x1f12fcu;
    // NOP
label_1f1300:
    // 0x1f1300: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_1f1304:
    if (ctx->pc == 0x1F1304u) {
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1308u;
        goto label_1f1308;
    }
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F131Cu;
            goto label_1f131c;
        }
    }
    ctx->pc = 0x1F1308u;
label_1f1308:
    // 0x1f1308: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f130c:
    // 0x1f130c: 0xc085cc4  jal         func_217310
label_1f1310:
    if (ctx->pc == 0x1F1310u) {
        ctx->pc = 0x1F1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F130Cu;
        // 0x1f1310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1314u;
        goto label_1f1314;
    }
    ctx->pc = 0x1F130Cu;
    SET_GPR_U32(ctx, 31, 0x1F1314u);
    ctx->pc = 0x1F1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F130Cu;
    // 0x1f1310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1314u;
label_1f1314:
    // 0x1f1314: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1318:
    if (ctx->pc == 0x1F1318u) {
        ctx->pc = 0x1F131Cu;
        goto label_1f131c;
    }
    ctx->pc = 0x1F1314u;
    {
        const bool branch_taken_0x1f1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1314) {
            ctx->pc = 0x1F1330u;
            goto label_1f1330;
        }
    }
    ctx->pc = 0x1F131Cu;
label_1f131c:
    // 0x1f131c: 0x0  nop
    ctx->pc = 0x1f131cu;
    // NOP
label_1f1320:
    // 0x1f1320: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1f1320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f1324:
    // 0x1f1324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1328:
    // 0x1f1328: 0xc085cc4  jal         func_217310
label_1f132c:
    if (ctx->pc == 0x1F132Cu) {
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1328u;
        // 0x1f132c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1330u;
        goto label_1f1330;
    }
    ctx->pc = 0x1F1328u;
    SET_GPR_U32(ctx, 31, 0x1F1330u);
    ctx->pc = 0x1F132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1328u;
    // 0x1f132c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1330u;
label_1f1330:
    // 0x1f1330: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1f1330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1f1334:
    // 0x1f1334: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f1334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f1338:
    // 0x1f1338: 0xaf808fb0  sw          $zero, -0x7050($gp)
    ctx->pc = 0x1f1338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), GPR_U32(ctx, 0));
label_1f133c:
    // 0x1f133c: 0x2442bfa0  addiu       $v0, $v0, -0x4060
    ctx->pc = 0x1f133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950816));
label_1f1340:
    // 0x1f1340: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f1340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f1344:
    // 0x1f1344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1348:
    // 0x1f1348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f134c:
    // 0x1f134c: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f1350:
    // 0x1f1350: 0xaf858fa8  sw          $a1, -0x7058($gp)
    ctx->pc = 0x1f1350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938536), GPR_U32(ctx, 5));
label_1f1354:
    // 0x1f1354: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f1354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f1358:
    // 0x1f1358: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f135c:
    // 0x1f135c: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1f135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1f1360:
    // 0x1f1360: 0xc07c9b8  jal         func_1F26E0
label_1f1364:
    if (ctx->pc == 0x1F1364u) {
        ctx->pc = 0x1F1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1360u;
        // 0x1f1364: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1368u;
        goto label_1f1368;
    }
    ctx->pc = 0x1F1360u;
    SET_GPR_U32(ctx, 31, 0x1F1368u);
    ctx->pc = 0x1F1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1360u;
    // 0x1f1364: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26E0u;
    { ctx->pc = 0x1f26e0; return; }
    ctx->pc = 0x1F1368u;
label_1f1368:
    // 0x1f1368: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f1368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f136c:
    // 0x1f136c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1f136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1f1370:
    // 0x1f1370: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f1374:
    // 0x1f1374: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1f1378:
    // 0x1f1378: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f137c:
    // 0x1f137c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f137cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1380:
    // 0x1f1380: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1f1380u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1384:
    // 0x1f1384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1388:
    // 0x1f1388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f138c:
    // 0x1f138c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1f138cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1f1390:
    // 0x1f1390: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f1390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f1394:
    // 0x1f1394: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1f1394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1f1398:
    // 0x1f1398: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f1398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f139c:
    // 0x1f139c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f13a0:
    // 0x1f13a0: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1f13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1f13a4:
    // 0x1f13a4: 0x90440221  lbu         $a0, 0x221($v0)
    ctx->pc = 0x1f13a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 545)));
label_1f13a8:
    // 0x1f13a8: 0x0  nop
    ctx->pc = 0x1f13a8u;
    // NOP
label_1f13ac:
    // 0x1f13ac: 0x0  nop
    ctx->pc = 0x1f13acu;
    // NOP
label_1f13b0:
    // 0x1f13b0: 0x0  nop
    ctx->pc = 0x1f13b0u;
    // NOP
label_1f13b4:
    // 0x1f13b4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f13b8:
    // 0x1f13b8: 0x90e2367c  lbu         $v0, 0x367C($a3)
    ctx->pc = 0x1f13b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13948)));
label_1f13bc:
    // 0x1f13bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f13c0:
    if (ctx->pc == 0x1F13C0u) {
        ctx->pc = 0x1F13C4u;
        goto label_1f13c4;
    }
    ctx->pc = 0x1F13BCu;
    {
        const bool branch_taken_0x1f13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13bc) {
            ctx->pc = 0x1F13E4u;
            goto label_1f13e4;
        }
    }
    ctx->pc = 0x1F13C4u;
label_1f13c4:
    // 0x1f13c4: 0x8ce2366c  lw          $v0, 0x366C($a3)
    ctx->pc = 0x1f13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13932)));
label_1f13c8:
    // 0x1f13c8: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_1f13cc:
    if (ctx->pc == 0x1F13CCu) {
        ctx->pc = 0x1F13D0u;
        goto label_1f13d0;
    }
    ctx->pc = 0x1F13C8u;
    {
        const bool branch_taken_0x1f13c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f13c8) {
            ctx->pc = 0x1F13E4u;
            goto label_1f13e4;
        }
    }
    ctx->pc = 0x1F13D0u;
label_1f13d0:
    // 0x1f13d0: 0x8ce23674  lw          $v0, 0x3674($a3)
    ctx->pc = 0x1f13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13940)));
label_1f13d4:
    // 0x1f13d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f13d8:
    if (ctx->pc == 0x1F13D8u) {
        ctx->pc = 0x1F13DCu;
        goto label_1f13dc;
    }
    ctx->pc = 0x1F13D4u;
    {
        const bool branch_taken_0x1f13d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f13d4) {
            ctx->pc = 0x1F13E4u;
            goto label_1f13e4;
        }
    }
    ctx->pc = 0x1F13DCu;
label_1f13dc:
    // 0x1f13dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f13e0:
    if (ctx->pc == 0x1F13E0u) {
        ctx->pc = 0x1F13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13DCu;
        // 0x1f13e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13E4u;
        goto label_1f13e4;
    }
    ctx->pc = 0x1F13DCu;
    {
        const bool branch_taken_0x1f13dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13DCu;
        // 0x1f13e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13dc) {
            ctx->pc = 0x1F13F8u;
            goto label_1f13f8;
        }
    }
    ctx->pc = 0x1F13E4u;
label_1f13e4:
    // 0x1f13e4: 0x0  nop
    ctx->pc = 0x1f13e4u;
    // NOP
label_1f13e8:
    // 0x1f13e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f13ec:
    // 0x1f13ec: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f13ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f13f0:
    // 0x1f13f0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f13f4:
    if (ctx->pc == 0x1F13F4u) {
        ctx->pc = 0x1F13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F0u;
        // 0x1f13f4: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13F8u;
        goto label_1f13f8;
    }
    ctx->pc = 0x1F13F0u;
    {
        const bool branch_taken_0x1f13f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F0u;
        // 0x1f13f4: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f0) {
            ctx->pc = 0x1F13ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f13ac;
        }
    }
    ctx->pc = 0x1F13F8u;
label_1f13f8:
    // 0x1f13f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f13f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f13fc:
    // 0x1f13fc: 0x12250009  beq         $s1, $a1, . + 4 + (0x9 << 2)
label_1f1400:
    if (ctx->pc == 0x1F1400u) {
        ctx->pc = 0x1F1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13FCu;
        // 0x1f1400: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1404u;
        goto label_1f1404;
    }
    ctx->pc = 0x1F13FCu;
    {
        const bool branch_taken_0x1f13fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13FCu;
        // 0x1f1400: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13fc) {
            ctx->pc = 0x1F1424u;
            goto label_1f1424;
        }
    }
    ctx->pc = 0x1F1404u;
label_1f1404:
    // 0x1f1404: 0xc085c34  jal         func_2170D0
label_1f1408:
    if (ctx->pc == 0x1F1408u) {
        ctx->pc = 0x1F1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1404u;
        // 0x1f1408: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F140Cu;
        goto label_1f140c;
    }
    ctx->pc = 0x1F1404u;
    SET_GPR_U32(ctx, 31, 0x1F140Cu);
    ctx->pc = 0x1F1408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1404u;
    // 0x1f1408: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F140Cu;
label_1f140c:
    // 0x1f140c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f140cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1410:
    // 0x1f1410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1414:
    // 0x1f1414: 0xc085cc4  jal         func_217310
label_1f1418:
    if (ctx->pc == 0x1F1418u) {
        ctx->pc = 0x1F1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1414u;
        // 0x1f1418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F141Cu;
        goto label_1f141c;
    }
    ctx->pc = 0x1F1414u;
    SET_GPR_U32(ctx, 31, 0x1F141Cu);
    ctx->pc = 0x1F1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1414u;
    // 0x1f1418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F141Cu;
label_1f141c:
    // 0x1f141c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1f1420:
    if (ctx->pc == 0x1F1420u) {
        ctx->pc = 0x1F1424u;
        goto label_1f1424;
    }
    ctx->pc = 0x1F141Cu;
    {
        const bool branch_taken_0x1f141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f141c) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1424u;
label_1f1424:
    // 0x1f1424: 0x0  nop
    ctx->pc = 0x1f1424u;
    // NOP
label_1f1428:
    // 0x1f1428: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f142c:
    // 0x1f142c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f142cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1430:
    // 0x1f1430: 0xc085c34  jal         func_2170D0
label_1f1434:
    if (ctx->pc == 0x1F1434u) {
        ctx->pc = 0x1F1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1430u;
        // 0x1f1434: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1438u;
        goto label_1f1438;
    }
    ctx->pc = 0x1F1430u;
    SET_GPR_U32(ctx, 31, 0x1F1438u);
    ctx->pc = 0x1F1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1430u;
    // 0x1f1434: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F1438u;
label_1f1438:
    // 0x1f1438: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f1438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f143c:
    // 0x1f143c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1440:
    // 0x1f1440: 0xc085cc4  jal         func_217310
label_1f1444:
    if (ctx->pc == 0x1F1444u) {
        ctx->pc = 0x1F1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1440u;
        // 0x1f1444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1448u;
        goto label_1f1448;
    }
    ctx->pc = 0x1F1440u;
    SET_GPR_U32(ctx, 31, 0x1F1448u);
    ctx->pc = 0x1F1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1440u;
    // 0x1f1444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1448u;
label_1f1448:
    // 0x1f1448: 0x10000097  b           . + 4 + (0x97 << 2)
label_1f144c:
    if (ctx->pc == 0x1F144Cu) {
        ctx->pc = 0x1F1450u;
        goto label_1f1450;
    }
    ctx->pc = 0x1F1448u;
    {
        const bool branch_taken_0x1f1448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1448) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1450u;
label_1f1450:
    // 0x1f1450: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f1454:
    // 0x1f1454: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f1454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f1458:
    // 0x1f1458: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1f1458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1f145c:
    // 0x1f145c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f1460:
    // 0x1f1460: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_1f1464:
    if (ctx->pc == 0x1F1464u) {
        ctx->pc = 0x1F1468u;
        goto label_1f1468;
    }
    ctx->pc = 0x1F1460u;
    {
        const bool branch_taken_0x1f1460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1460) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1468u;
label_1f1468:
    // 0x1f1468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f146c:
    // 0x1f146c: 0x1204008e  beq         $s0, $a0, . + 4 + (0x8E << 2)
label_1f1470:
    if (ctx->pc == 0x1F1470u) {
        ctx->pc = 0x1F1474u;
        goto label_1f1474;
    }
    ctx->pc = 0x1F146Cu;
    {
        const bool branch_taken_0x1f146c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f146c) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1474u;
label_1f1474:
    // 0x1f1474: 0x8f828fcc  lw          $v0, -0x7034($gp)
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938572)));
label_1f1478:
    // 0x1f1478: 0x1840008b  blez        $v0, . + 4 + (0x8B << 2)
label_1f147c:
    if (ctx->pc == 0x1F147Cu) {
        ctx->pc = 0x1F147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1478u;
        // 0x1f147c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1480u;
        goto label_1f1480;
    }
    ctx->pc = 0x1F1478u;
    {
        const bool branch_taken_0x1f1478 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1478u;
        // 0x1f147c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1478) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1480u;
label_1f1480:
    // 0x1f1480: 0xc05b420  jal         func_16D080
label_1f1484:
    if (ctx->pc == 0x1F1484u) {
        ctx->pc = 0x1F1488u;
        goto label_1f1488;
    }
    ctx->pc = 0x1F1480u;
    SET_GPR_U32(ctx, 31, 0x1F1488u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F1480u, 0x1F1488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1488u;
label_1f1488:
    // 0x1f1488: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f148c:
    // 0x1f148c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f1490:
    // 0x1f1490: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x1f1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f1494:
    // 0x1f1494: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1f1494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1f1498:
    // 0x1f1498: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f149c:
    // 0x1f149c: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f14a0:
    // 0x1f14a0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1f14a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f14a4:
    // 0x1f14a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1f14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f14a8:
    // 0x1f14a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f14ac:
    // 0x1f14ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f14b0:
    // 0x1f14b0: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f14b4:
    // 0x1f14b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f14b8:
    // 0x1f14b8: 0x24670000  addiu       $a3, $v1, 0x0
    ctx->pc = 0x1f14b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f14bc:
    // 0x1f14bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f14c0:
    // 0x1f14c0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1f14c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f14c4:
    // 0x1f14c4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1f14c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f14c8:
    // 0x1f14c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f14cc:
    // 0x1f14cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1f14ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f14d0:
    // 0x1f14d0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1f14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f14d4:
    // 0x1f14d4: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x1f14d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f14d8:
    // 0x1f14d8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1f14dc:
    // 0x1f14dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f14e0:
    // 0x1f14e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f14e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f14e4:
    // 0x1f14e4: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1f14e8:
    // 0x1f14e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f14e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f14ec:
    // 0x1f14ec: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x1f14ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1f14f0:
    // 0x1f14f0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1f14f4:
    // 0x1f14f4: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1f14f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_1f14f8:
    // 0x1f14f8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1f14f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f14fc:
    // 0x1f14fc: 0x90870221  lbu         $a3, 0x221($a0)
    ctx->pc = 0x1f14fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 545)));
label_1f1500:
    // 0x1f1500: 0x0  nop
    ctx->pc = 0x1f1500u;
    // NOP
label_1f1504:
    // 0x1f1504: 0x0  nop
    ctx->pc = 0x1f1504u;
    // NOP
label_1f1508:
    // 0x1f1508: 0x0  nop
    ctx->pc = 0x1f1508u;
    // NOP
label_1f150c:
    // 0x1f150c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x1f150cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1f1510:
    // 0x1f1510: 0x9104367c  lbu         $a0, 0x367C($t0)
    ctx->pc = 0x1f1510u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f1514:
    // 0x1f1514: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1f1518:
    if (ctx->pc == 0x1F1518u) {
        ctx->pc = 0x1F151Cu;
        goto label_1f151c;
    }
    ctx->pc = 0x1F1514u;
    {
        const bool branch_taken_0x1f1514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1514) {
            ctx->pc = 0x1F153Cu;
            goto label_1f153c;
        }
    }
    ctx->pc = 0x1F151Cu;
label_1f151c:
    // 0x1f151c: 0x8d04366c  lw          $a0, 0x366C($t0)
    ctx->pc = 0x1f151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13932)));
label_1f1520:
    // 0x1f1520: 0x14870006  bne         $a0, $a3, . + 4 + (0x6 << 2)
label_1f1524:
    if (ctx->pc == 0x1F1524u) {
        ctx->pc = 0x1F1528u;
        goto label_1f1528;
    }
    ctx->pc = 0x1F1520u;
    {
        const bool branch_taken_0x1f1520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f1520) {
            ctx->pc = 0x1F153Cu;
            goto label_1f153c;
        }
    }
    ctx->pc = 0x1F1528u;
label_1f1528:
    // 0x1f1528: 0x8d043674  lw          $a0, 0x3674($t0)
    ctx->pc = 0x1f1528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13940)));
label_1f152c:
    // 0x1f152c: 0x14900003  bne         $a0, $s0, . + 4 + (0x3 << 2)
label_1f1530:
    if (ctx->pc == 0x1F1530u) {
        ctx->pc = 0x1F1534u;
        goto label_1f1534;
    }
    ctx->pc = 0x1F152Cu;
    {
        const bool branch_taken_0x1f152c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f152c) {
            ctx->pc = 0x1F153Cu;
            goto label_1f153c;
        }
    }
    ctx->pc = 0x1F1534u;
label_1f1534:
    // 0x1f1534: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1538:
    if (ctx->pc == 0x1F1538u) {
        ctx->pc = 0x1F1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1534u;
        // 0x1f1538: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F153Cu;
        goto label_1f153c;
    }
    ctx->pc = 0x1F1534u;
    {
        const bool branch_taken_0x1f1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1534u;
        // 0x1f1538: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1534) {
            ctx->pc = 0x1F1550u;
            goto label_1f1550;
        }
    }
    ctx->pc = 0x1F153Cu;
label_1f153c:
    // 0x1f153c: 0x0  nop
    ctx->pc = 0x1f153cu;
    // NOP
label_1f1540:
    // 0x1f1540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1544:
    // 0x1f1544: 0x28440002  slti        $a0, $v0, 0x2
    ctx->pc = 0x1f1544u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1548:
    // 0x1f1548: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
label_1f154c:
    if (ctx->pc == 0x1F154Cu) {
        ctx->pc = 0x1F154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1548u;
        // 0x1f154c: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1550u;
        goto label_1f1550;
    }
    ctx->pc = 0x1F1548u;
    {
        const bool branch_taken_0x1f1548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1548u;
        // 0x1f154c: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1548) {
            ctx->pc = 0x1F1504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1504;
        }
    }
    ctx->pc = 0x1F1550u;
label_1f1550:
    // 0x1f1550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1554:
    // 0x1f1554: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
label_1f1558:
    if (ctx->pc == 0x1F1558u) {
        ctx->pc = 0x1F1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1554u;
        // 0x1f1558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F155Cu;
        goto label_1f155c;
    }
    ctx->pc = 0x1F1554u;
    {
        const bool branch_taken_0x1f1554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1554u;
        // 0x1f1558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1554) {
            ctx->pc = 0x1F156Cu;
            goto label_1f156c;
        }
    }
    ctx->pc = 0x1F155Cu;
label_1f155c:
    // 0x1f155c: 0xc085cc4  jal         func_217310
label_1f1560:
    if (ctx->pc == 0x1F1560u) {
        ctx->pc = 0x1F1564u;
        goto label_1f1564;
    }
    ctx->pc = 0x1F155Cu;
    SET_GPR_U32(ctx, 31, 0x1F1564u);
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1564u;
label_1f1564:
    // 0x1f1564: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f1568:
    if (ctx->pc == 0x1F1568u) {
        ctx->pc = 0x1F156Cu;
        goto label_1f156c;
    }
    ctx->pc = 0x1F1564u;
    {
        const bool branch_taken_0x1f1564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1564) {
            ctx->pc = 0x1F15A0u;
            goto label_1f15a0;
        }
    }
    ctx->pc = 0x1F156Cu;
label_1f156c:
    // 0x1f156c: 0x0  nop
    ctx->pc = 0x1f156cu;
    // NOP
label_1f1570:
    // 0x1f1570: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_1f1574:
    if (ctx->pc == 0x1F1574u) {
        ctx->pc = 0x1F1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1570u;
        // 0x1f1574: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1578u;
        goto label_1f1578;
    }
    ctx->pc = 0x1F1570u;
    {
        const bool branch_taken_0x1f1570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1570u;
        // 0x1f1574: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1570) {
            ctx->pc = 0x1F158Cu;
            goto label_1f158c;
        }
    }
    ctx->pc = 0x1F1578u;
label_1f1578:
    // 0x1f1578: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f157c:
    // 0x1f157c: 0xc085cc4  jal         func_217310
label_1f1580:
    if (ctx->pc == 0x1F1580u) {
        ctx->pc = 0x1F1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F157Cu;
        // 0x1f1580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1584u;
        goto label_1f1584;
    }
    ctx->pc = 0x1F157Cu;
    SET_GPR_U32(ctx, 31, 0x1F1584u);
    ctx->pc = 0x1F1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F157Cu;
    // 0x1f1580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F1584u;
label_1f1584:
    // 0x1f1584: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1588:
    if (ctx->pc == 0x1F1588u) {
        ctx->pc = 0x1F158Cu;
        goto label_1f158c;
    }
    ctx->pc = 0x1F1584u;
    {
        const bool branch_taken_0x1f1584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1584) {
            ctx->pc = 0x1F15A0u;
            goto label_1f15a0;
        }
    }
    ctx->pc = 0x1F158Cu;
label_1f158c:
    // 0x1f158c: 0x0  nop
    ctx->pc = 0x1f158cu;
    // NOP
label_1f1590:
    // 0x1f1590: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1f1590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f1594:
    // 0x1f1594: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1598:
    // 0x1f1598: 0xc085cc4  jal         func_217310
label_1f159c:
    if (ctx->pc == 0x1F159Cu) {
        ctx->pc = 0x1F159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1598u;
        // 0x1f159c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15A0u;
        goto label_1f15a0;
    }
    ctx->pc = 0x1F1598u;
    SET_GPR_U32(ctx, 31, 0x1F15A0u);
    ctx->pc = 0x1F159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1598u;
    // 0x1f159c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F15A0u;
label_1f15a0:
    // 0x1f15a0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1f15a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1f15a4:
    // 0x1f15a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f15a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f15a8:
    // 0x1f15a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f15ac:
    // 0x1f15ac: 0x2442bfa0  addiu       $v0, $v0, -0x4060
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950816));
label_1f15b0:
    // 0x1f15b0: 0xaf908fb0  sw          $s0, -0x7050($gp)
    ctx->pc = 0x1f15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), GPR_U32(ctx, 16));
label_1f15b4:
    // 0x1f15b4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f15b8:
    // 0x1f15b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f15bc:
    // 0x1f15bc: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x1f15bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f15c0:
    // 0x1f15c0: 0xaf858fac  sw          $a1, -0x7054($gp)
    ctx->pc = 0x1f15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938540), GPR_U32(ctx, 5));
label_1f15c4:
    // 0x1f15c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f15c8:
    // 0x1f15c8: 0xc07c9b8  jal         func_1F26E0
label_1f15cc:
    if (ctx->pc == 0x1F15CCu) {
        ctx->pc = 0x1F15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15C8u;
        // 0x1f15cc: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15D0u;
        goto label_1f15d0;
    }
    ctx->pc = 0x1F15C8u;
    SET_GPR_U32(ctx, 31, 0x1F15D0u);
    ctx->pc = 0x1F15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15C8u;
    // 0x1f15cc: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26E0u;
    { ctx->pc = 0x1f26e0; return; }
    ctx->pc = 0x1F15D0u;
label_1f15d0:
    // 0x1f15d0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f15d4:
    // 0x1f15d4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1f15d8:
    // 0x1f15d8: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f15dc:
    // 0x1f15dc: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1f15dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_1f15e0:
    // 0x1f15e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f15e4:
    // 0x1f15e4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f15e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f15e8:
    // 0x1f15e8: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1f15ec:
    // 0x1f15ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f15ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f15f0:
    // 0x1f15f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f15f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f15f4:
    // 0x1f15f4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1f15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1f15f8:
    // 0x1f15f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f15fc:
    // 0x1f15fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1f15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1f1600:
    // 0x1f1600: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f1600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f1604:
    // 0x1f1604: 0x90451d21  lbu         $a1, 0x1D21($v0)
    ctx->pc = 0x1f1604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7457)));
label_1f1608:
    // 0x1f1608: 0x0  nop
    ctx->pc = 0x1f1608u;
    // NOP
label_1f160c:
    // 0x1f160c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1f160cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1610:
    // 0x1f1610: 0x0  nop
    ctx->pc = 0x1f1610u;
    // NOP
label_1f1614:
    // 0x1f1614: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1f1614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f1618:
    // 0x1f1618: 0x9102367c  lbu         $v0, 0x367C($t0)
    ctx->pc = 0x1f1618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f161c:
    // 0x1f161c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f1620:
    if (ctx->pc == 0x1F1620u) {
        ctx->pc = 0x1F1624u;
        goto label_1f1624;
    }
    ctx->pc = 0x1F161Cu;
    {
        const bool branch_taken_0x1f161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f161c) {
            ctx->pc = 0x1F1644u;
            goto label_1f1644;
        }
    }
    ctx->pc = 0x1F1624u;
label_1f1624:
    // 0x1f1624: 0x8d02366c  lw          $v0, 0x366C($t0)
    ctx->pc = 0x1f1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13932)));
label_1f1628:
    // 0x1f1628: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_1f162c:
    if (ctx->pc == 0x1F162Cu) {
        ctx->pc = 0x1F1630u;
        goto label_1f1630;
    }
    ctx->pc = 0x1F1628u;
    {
        const bool branch_taken_0x1f1628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f1628) {
            ctx->pc = 0x1F1644u;
            goto label_1f1644;
        }
    }
    ctx->pc = 0x1F1630u;
label_1f1630:
    // 0x1f1630: 0x8d023674  lw          $v0, 0x3674($t0)
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13940)));
label_1f1634:
    // 0x1f1634: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f1638:
    if (ctx->pc == 0x1F1638u) {
        ctx->pc = 0x1F163Cu;
        goto label_1f163c;
    }
    ctx->pc = 0x1F1634u;
    {
        const bool branch_taken_0x1f1634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1634) {
            ctx->pc = 0x1F1644u;
            goto label_1f1644;
        }
    }
    ctx->pc = 0x1F163Cu;
label_1f163c:
    // 0x1f163c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f1640:
    if (ctx->pc == 0x1F1640u) {
        ctx->pc = 0x1F1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F163Cu;
        // 0x1f1640: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1644u;
        goto label_1f1644;
    }
    ctx->pc = 0x1F163Cu;
    {
        const bool branch_taken_0x1f163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F163Cu;
        // 0x1f1640: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f163c) {
            ctx->pc = 0x1F1658u;
            goto label_1f1658;
        }
    }
    ctx->pc = 0x1F1644u;
label_1f1644:
    // 0x1f1644: 0x0  nop
    ctx->pc = 0x1f1644u;
    // NOP
label_1f1648:
    // 0x1f1648: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f164c:
    // 0x1f164c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f164cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1650:
    // 0x1f1650: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1f1654:
    if (ctx->pc == 0x1F1654u) {
        ctx->pc = 0x1F1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1650u;
        // 0x1f1654: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1658u;
        goto label_1f1658;
    }
    ctx->pc = 0x1F1650u;
    {
        const bool branch_taken_0x1f1650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1650u;
        // 0x1f1654: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1650) {
            ctx->pc = 0x1F1610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1610;
        }
    }
    ctx->pc = 0x1F1658u;
label_1f1658:
    // 0x1f1658: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f165c:
    // 0x1f165c: 0x12250009  beq         $s1, $a1, . + 4 + (0x9 << 2)
label_1f1660:
    if (ctx->pc == 0x1F1660u) {
        ctx->pc = 0x1F1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F165Cu;
        // 0x1f1660: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1664u;
        goto label_1f1664;
    }
    ctx->pc = 0x1F165Cu;
    {
        const bool branch_taken_0x1f165c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F165Cu;
        // 0x1f1660: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f165c) {
            ctx->pc = 0x1F1684u;
            goto label_1f1684;
        }
    }
    ctx->pc = 0x1F1664u;
label_1f1664:
    // 0x1f1664: 0xc085c34  jal         func_2170D0
label_1f1668:
    if (ctx->pc == 0x1F1668u) {
        ctx->pc = 0x1F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1664u;
        // 0x1f1668: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F166Cu;
        goto label_1f166c;
    }
    ctx->pc = 0x1F1664u;
    SET_GPR_U32(ctx, 31, 0x1F166Cu);
    ctx->pc = 0x1F1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1664u;
    // 0x1f1668: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F166Cu;
label_1f166c:
    // 0x1f166c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f166cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1670:
    // 0x1f1670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1674:
    // 0x1f1674: 0xc085cc4  jal         func_217310
label_1f1678:
    if (ctx->pc == 0x1F1678u) {
        ctx->pc = 0x1F1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1674u;
        // 0x1f1678: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F167Cu;
        goto label_1f167c;
    }
    ctx->pc = 0x1F1674u;
    SET_GPR_U32(ctx, 31, 0x1F167Cu);
    ctx->pc = 0x1F1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1674u;
    // 0x1f1678: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F167Cu;
label_1f167c:
    // 0x1f167c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f1680:
    if (ctx->pc == 0x1F1680u) {
        ctx->pc = 0x1F1684u;
        goto label_1f1684;
    }
    ctx->pc = 0x1F167Cu;
    {
        const bool branch_taken_0x1f167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f167c) {
            ctx->pc = 0x1F16A8u;
            goto label_1f16a8;
        }
    }
    ctx->pc = 0x1F1684u;
label_1f1684:
    // 0x1f1684: 0x0  nop
    ctx->pc = 0x1f1684u;
    // NOP
label_1f1688:
    // 0x1f1688: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f168c:
    // 0x1f168c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1690:
    // 0x1f1690: 0xc085c34  jal         func_2170D0
label_1f1694:
    if (ctx->pc == 0x1F1694u) {
        ctx->pc = 0x1F1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1690u;
        // 0x1f1694: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1698u;
        goto label_1f1698;
    }
    ctx->pc = 0x1F1690u;
    SET_GPR_U32(ctx, 31, 0x1F1698u);
    ctx->pc = 0x1F1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1690u;
    // 0x1f1694: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F1698u;
label_1f1698:
    // 0x1f1698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f169c:
    // 0x1f169c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f169cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f16a0:
    // 0x1f16a0: 0xc085cc4  jal         func_217310
label_1f16a4:
    if (ctx->pc == 0x1F16A4u) {
        ctx->pc = 0x1F16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16A0u;
        // 0x1f16a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16A8u;
        goto label_1f16a8;
    }
    ctx->pc = 0x1F16A0u;
    SET_GPR_U32(ctx, 31, 0x1F16A8u);
    ctx->pc = 0x1F16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F16A0u;
    // 0x1f16a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F16A8u;
label_1f16a8:
    // 0x1f16a8: 0xc07b48c  jal         func_1ED230
label_1f16ac:
    if (ctx->pc == 0x1F16ACu) {
        ctx->pc = 0x1F16B0u;
        goto label_1f16b0;
    }
    ctx->pc = 0x1F16A8u;
    SET_GPR_U32(ctx, 31, 0x1F16B0u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F16B0u;
label_1f16b0:
    // 0x1f16b0: 0x1000fd6d  b           . + 4 + (-0x293 << 2)
label_1f16b4:
    if (ctx->pc == 0x1F16B4u) {
        ctx->pc = 0x1F16B8u;
        goto label_1f16b8;
    }
    ctx->pc = 0x1F16B0u;
    {
        const bool branch_taken_0x1f16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f16b0) {
            ctx->pc = 0x1F0C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f0c68; return; }
        }
    }
    ctx->pc = 0x1F16B8u;
label_1f16b8:
    // 0x1f16b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f16bc:
    // 0x1f16bc: 0x16e2008f  bne         $s7, $v0, . + 4 + (0x8F << 2)
label_1f16c0:
    if (ctx->pc == 0x1F16C0u) {
        ctx->pc = 0x1F16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16BCu;
        // 0x1f16c0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16C4u;
        goto label_1f16c4;
    }
    ctx->pc = 0x1F16BCu;
    {
        const bool branch_taken_0x1f16bc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16BCu;
        // 0x1f16c0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16bc) {
            ctx->pc = 0x1F18FCu;
            { ctx->pc = 0x1f18fc; return; }
        }
    }
    ctx->pc = 0x1F16C4u;
label_1f16c4:
    // 0x1f16c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f16c8:
    // 0x1f16c8: 0x12060044  beq         $s0, $a2, . + 4 + (0x44 << 2)
label_1f16cc:
    if (ctx->pc == 0x1F16CCu) {
        ctx->pc = 0x1F16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16C8u;
        // 0x1f16cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16D0u;
        goto label_1f16d0;
    }
    ctx->pc = 0x1F16C8u;
    {
        const bool branch_taken_0x1f16c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16C8u;
        // 0x1f16cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16c8) {
            ctx->pc = 0x1F17DCu;
            { ctx->pc = 0x1f17dc; return; }
        }
    }
    ctx->pc = 0x1F16D0u;
label_1f16d0:
    // 0x1f16d0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1f16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f16d4:
    // 0x1f16d4: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x1f16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f16d8:
    // 0x1f16d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1f16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f16dc:
    // 0x1f16dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f16dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f16e0:
    // 0x1f16e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f16e4:
    // 0x1f16e4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1f16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1f16e8:
    // 0x1f16e8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1f16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f16ec:
    // 0x1f16ec: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f16f0:
    // 0x1f16f0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f16f4:
    // 0x1f16f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f16f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f16f8:
    // 0x1f16f8: 0x24637f40  addiu       $v1, $v1, 0x7F40
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32576));
label_1f16fc:
    // 0x1f16fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f16fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1700:
    // 0x1f1700: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1f1700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1f1704:
    // 0x1f1704: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1f1704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f1708:
    // 0x1f1708: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f1708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f170c:
    // 0x1f170c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f170cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f1710:
    // 0x1f1710: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1f1710u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f1714:
    // 0x1f1714: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1718:
    // 0x1f1718: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1f1718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1f171c:
    // 0x1f171c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1f171cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1f1720:
    // 0x1f1720: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1f1724:
    // 0x1f1724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1728:
    // 0x1f1728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f172c:
    // 0x1f172c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f1730:
    // 0x1f1730: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x1f1730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1f1734:
    // 0x1f1734: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1f1734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1f1738:
    // 0x1f1738: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1f1738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1f173c:
    // 0x1f173c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f1740:
    // 0x1f1740: 0x90440221  lbu         $a0, 0x221($v0)
    ctx->pc = 0x1f1740u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 545)));
label_1f1744:
    // 0x1f1744: 0x0  nop
    ctx->pc = 0x1f1744u;
    // NOP
label_1f1748:
    // 0x1f1748: 0x0  nop
    ctx->pc = 0x1f1748u;
    // NOP
label_1f174c:
    // 0x1f174c: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x1f174cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f1750:
    // 0x1f1750: 0x9102367c  lbu         $v0, 0x367C($t0)
    ctx->pc = 0x1f1750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13948)));
label_1f1754:
    // 0x1f1754: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f1758:
    if (ctx->pc == 0x1F1758u) {
        ctx->pc = 0x1F175Cu;
        goto label_1f175c;
    }
    ctx->pc = 0x1F1754u;
    {
        const bool branch_taken_0x1f1754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1754) {
            ctx->pc = 0x1F177Cu;
            { ctx->pc = 0x1f177c; return; }
        }
    }
    ctx->pc = 0x1F175Cu;
label_1f175c:
    // 0x1f175c: 0x8d02366c  lw          $v0, 0x366C($t0)
    ctx->pc = 0x1f175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13932)));
label_1f1760:
    // 0x1f1760: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_1f1764:
    if (ctx->pc == 0x1F1764u) {
        ctx->pc = 0x1F1768u;
        goto label_1f1768;
    }
    ctx->pc = 0x1F1760u;
    {
        const bool branch_taken_0x1f1760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f1760) {
            ctx->pc = 0x1F177Cu;
            { ctx->pc = 0x1f177c; return; }
        }
    }
    ctx->pc = 0x1F1768u;
label_1f1768:
    // 0x1f1768: 0x8d023674  lw          $v0, 0x3674($t0)
    ctx->pc = 0x1f1768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13940)));
label_1f176c:
    // 0x1f176c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1f1770u;
    return;
}
