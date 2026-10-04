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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part45(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b1028u: goto label_1b1028;
        case 0x1b102cu: goto label_1b102c;
        case 0x1b1030u: goto label_1b1030;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1038u: goto label_1b1038;
        case 0x1b103cu: goto label_1b103c;
        case 0x1b1040u: goto label_1b1040;
        case 0x1b1044u: goto label_1b1044;
        case 0x1b1048u: goto label_1b1048;
        case 0x1b104cu: goto label_1b104c;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b1054u: goto label_1b1054;
        case 0x1b1058u: goto label_1b1058;
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b1068u: goto label_1b1068;
        case 0x1b106cu: goto label_1b106c;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1074u: goto label_1b1074;
        case 0x1b1078u: goto label_1b1078;
        case 0x1b107cu: goto label_1b107c;
        case 0x1b1080u: goto label_1b1080;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b1088u: goto label_1b1088;
        case 0x1b108cu: goto label_1b108c;
        case 0x1b1090u: goto label_1b1090;
        case 0x1b1094u: goto label_1b1094;
        case 0x1b1098u: goto label_1b1098;
        case 0x1b109cu: goto label_1b109c;
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10a4u: goto label_1b10a4;
        case 0x1b10a8u: goto label_1b10a8;
        case 0x1b10acu: goto label_1b10ac;
        case 0x1b10b0u: goto label_1b10b0;
        case 0x1b10b4u: goto label_1b10b4;
        case 0x1b10b8u: goto label_1b10b8;
        case 0x1b10bcu: goto label_1b10bc;
        case 0x1b10c0u: goto label_1b10c0;
        case 0x1b10c4u: goto label_1b10c4;
        case 0x1b10c8u: goto label_1b10c8;
        case 0x1b10ccu: goto label_1b10cc;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10d4u: goto label_1b10d4;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10dcu: goto label_1b10dc;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b10e4u: goto label_1b10e4;
        case 0x1b10e8u: goto label_1b10e8;
        case 0x1b10ecu: goto label_1b10ec;
        case 0x1b10f0u: goto label_1b10f0;
        case 0x1b10f4u: goto label_1b10f4;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b10fcu: goto label_1b10fc;
        case 0x1b1100u: goto label_1b1100;
        case 0x1b1104u: goto label_1b1104;
        case 0x1b1108u: goto label_1b1108;
        case 0x1b110cu: goto label_1b110c;
        case 0x1b1110u: goto label_1b1110;
        case 0x1b1114u: goto label_1b1114;
        case 0x1b1118u: goto label_1b1118;
        case 0x1b111cu: goto label_1b111c;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1124u: goto label_1b1124;
        case 0x1b1128u: goto label_1b1128;
        case 0x1b112cu: goto label_1b112c;
        case 0x1b1130u: goto label_1b1130;
        case 0x1b1134u: goto label_1b1134;
        case 0x1b1138u: goto label_1b1138;
        case 0x1b113cu: goto label_1b113c;
        case 0x1b1140u: goto label_1b1140;
        case 0x1b1144u: goto label_1b1144;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b114cu: goto label_1b114c;
        case 0x1b1150u: goto label_1b1150;
        case 0x1b1154u: goto label_1b1154;
        case 0x1b1158u: goto label_1b1158;
        case 0x1b115cu: goto label_1b115c;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b1168u: goto label_1b1168;
        case 0x1b116cu: goto label_1b116c;
        case 0x1b1170u: goto label_1b1170;
        case 0x1b1174u: goto label_1b1174;
        case 0x1b1178u: goto label_1b1178;
        case 0x1b117cu: goto label_1b117c;
        case 0x1b1180u: goto label_1b1180;
        case 0x1b1184u: goto label_1b1184;
        case 0x1b1188u: goto label_1b1188;
        case 0x1b118cu: goto label_1b118c;
        case 0x1b1190u: goto label_1b1190;
        case 0x1b1194u: goto label_1b1194;
        case 0x1b1198u: goto label_1b1198;
        case 0x1b119cu: goto label_1b119c;
        case 0x1b11a0u: goto label_1b11a0;
        case 0x1b11a4u: goto label_1b11a4;
        case 0x1b11a8u: goto label_1b11a8;
        case 0x1b11acu: goto label_1b11ac;
        case 0x1b11b0u: goto label_1b11b0;
        case 0x1b11b4u: goto label_1b11b4;
        case 0x1b11b8u: goto label_1b11b8;
        case 0x1b11bcu: goto label_1b11bc;
        case 0x1b11c0u: goto label_1b11c0;
        case 0x1b11c4u: goto label_1b11c4;
        case 0x1b11c8u: goto label_1b11c8;
        case 0x1b11ccu: goto label_1b11cc;
        case 0x1b11d0u: goto label_1b11d0;
        case 0x1b11d4u: goto label_1b11d4;
        case 0x1b11d8u: goto label_1b11d8;
        case 0x1b11dcu: goto label_1b11dc;
        case 0x1b11e0u: goto label_1b11e0;
        case 0x1b11e4u: goto label_1b11e4;
        case 0x1b11e8u: goto label_1b11e8;
        case 0x1b11ecu: goto label_1b11ec;
        case 0x1b11f0u: goto label_1b11f0;
        case 0x1b11f4u: goto label_1b11f4;
        case 0x1b11f8u: goto label_1b11f8;
        case 0x1b11fcu: goto label_1b11fc;
        case 0x1b1200u: goto label_1b1200;
        case 0x1b1204u: goto label_1b1204;
        case 0x1b1208u: goto label_1b1208;
        case 0x1b120cu: goto label_1b120c;
        case 0x1b1210u: goto label_1b1210;
        case 0x1b1214u: goto label_1b1214;
        case 0x1b1218u: goto label_1b1218;
        case 0x1b121cu: goto label_1b121c;
        case 0x1b1220u: goto label_1b1220;
        case 0x1b1224u: goto label_1b1224;
        case 0x1b1228u: goto label_1b1228;
        case 0x1b122cu: goto label_1b122c;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b1234u: goto label_1b1234;
        case 0x1b1238u: goto label_1b1238;
        case 0x1b123cu: goto label_1b123c;
        case 0x1b1240u: goto label_1b1240;
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b124cu: goto label_1b124c;
        case 0x1b1250u: goto label_1b1250;
        case 0x1b1254u: goto label_1b1254;
        case 0x1b1258u: goto label_1b1258;
        case 0x1b125cu: goto label_1b125c;
        case 0x1b1260u: goto label_1b1260;
        case 0x1b1264u: goto label_1b1264;
        case 0x1b1268u: goto label_1b1268;
        case 0x1b126cu: goto label_1b126c;
        case 0x1b1270u: goto label_1b1270;
        case 0x1b1274u: goto label_1b1274;
        case 0x1b1278u: goto label_1b1278;
        case 0x1b127cu: goto label_1b127c;
        case 0x1b1280u: goto label_1b1280;
        case 0x1b1284u: goto label_1b1284;
        case 0x1b1288u: goto label_1b1288;
        case 0x1b128cu: goto label_1b128c;
        case 0x1b1290u: goto label_1b1290;
        case 0x1b1294u: goto label_1b1294;
        case 0x1b1298u: goto label_1b1298;
        case 0x1b129cu: goto label_1b129c;
        case 0x1b12a0u: goto label_1b12a0;
        case 0x1b12a4u: goto label_1b12a4;
        case 0x1b12a8u: goto label_1b12a8;
        case 0x1b12acu: goto label_1b12ac;
        case 0x1b12b0u: goto label_1b12b0;
        case 0x1b12b4u: goto label_1b12b4;
        case 0x1b12b8u: goto label_1b12b8;
        case 0x1b12bcu: goto label_1b12bc;
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b12c4u: goto label_1b12c4;
        case 0x1b12c8u: goto label_1b12c8;
        case 0x1b12ccu: goto label_1b12cc;
        case 0x1b12d0u: goto label_1b12d0;
        case 0x1b12d4u: goto label_1b12d4;
        case 0x1b12d8u: goto label_1b12d8;
        case 0x1b12dcu: goto label_1b12dc;
        case 0x1b12e0u: goto label_1b12e0;
        case 0x1b12e4u: goto label_1b12e4;
        case 0x1b12e8u: goto label_1b12e8;
        case 0x1b12ecu: goto label_1b12ec;
        case 0x1b12f0u: goto label_1b12f0;
        case 0x1b12f4u: goto label_1b12f4;
        case 0x1b12f8u: goto label_1b12f8;
        case 0x1b12fcu: goto label_1b12fc;
        case 0x1b1300u: goto label_1b1300;
        case 0x1b1304u: goto label_1b1304;
        case 0x1b1308u: goto label_1b1308;
        case 0x1b130cu: goto label_1b130c;
        case 0x1b1310u: goto label_1b1310;
        case 0x1b1314u: goto label_1b1314;
        case 0x1b1318u: goto label_1b1318;
        case 0x1b131cu: goto label_1b131c;
        case 0x1b1320u: goto label_1b1320;
        case 0x1b1324u: goto label_1b1324;
        case 0x1b1328u: goto label_1b1328;
        case 0x1b132cu: goto label_1b132c;
        case 0x1b1330u: goto label_1b1330;
        case 0x1b1334u: goto label_1b1334;
        case 0x1b1338u: goto label_1b1338;
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1340u: goto label_1b1340;
        case 0x1b1344u: goto label_1b1344;
        case 0x1b1348u: goto label_1b1348;
        case 0x1b134cu: goto label_1b134c;
        case 0x1b1350u: goto label_1b1350;
        case 0x1b1354u: goto label_1b1354;
        case 0x1b1358u: goto label_1b1358;
        case 0x1b135cu: goto label_1b135c;
        case 0x1b1360u: goto label_1b1360;
        case 0x1b1364u: goto label_1b1364;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b136cu: goto label_1b136c;
        case 0x1b1370u: goto label_1b1370;
        case 0x1b1374u: goto label_1b1374;
        case 0x1b1378u: goto label_1b1378;
        case 0x1b137cu: goto label_1b137c;
        case 0x1b1380u: goto label_1b1380;
        case 0x1b1384u: goto label_1b1384;
        case 0x1b1388u: goto label_1b1388;
        case 0x1b138cu: goto label_1b138c;
        case 0x1b1390u: goto label_1b1390;
        case 0x1b1394u: goto label_1b1394;
        case 0x1b1398u: goto label_1b1398;
        case 0x1b139cu: goto label_1b139c;
        case 0x1b13a0u: goto label_1b13a0;
        case 0x1b13a4u: goto label_1b13a4;
        case 0x1b13a8u: goto label_1b13a8;
        case 0x1b13acu: goto label_1b13ac;
        case 0x1b13b0u: goto label_1b13b0;
        case 0x1b13b4u: goto label_1b13b4;
        case 0x1b13b8u: goto label_1b13b8;
        case 0x1b13bcu: goto label_1b13bc;
        case 0x1b13c0u: goto label_1b13c0;
        case 0x1b13c4u: goto label_1b13c4;
        case 0x1b13c8u: goto label_1b13c8;
        case 0x1b13ccu: goto label_1b13cc;
        case 0x1b13d0u: goto label_1b13d0;
        case 0x1b13d4u: goto label_1b13d4;
        case 0x1b13d8u: goto label_1b13d8;
        case 0x1b13dcu: goto label_1b13dc;
        case 0x1b13e0u: goto label_1b13e0;
        case 0x1b13e4u: goto label_1b13e4;
        case 0x1b13e8u: goto label_1b13e8;
        case 0x1b13ecu: goto label_1b13ec;
        case 0x1b13f0u: goto label_1b13f0;
        case 0x1b13f4u: goto label_1b13f4;
        case 0x1b13f8u: goto label_1b13f8;
        case 0x1b13fcu: goto label_1b13fc;
        case 0x1b1400u: goto label_1b1400;
        case 0x1b1404u: goto label_1b1404;
        case 0x1b1408u: goto label_1b1408;
        case 0x1b140cu: goto label_1b140c;
        case 0x1b1410u: goto label_1b1410;
        case 0x1b1414u: goto label_1b1414;
        case 0x1b1418u: goto label_1b1418;
        case 0x1b141cu: goto label_1b141c;
        case 0x1b1420u: goto label_1b1420;
        case 0x1b1424u: goto label_1b1424;
        case 0x1b1428u: goto label_1b1428;
        case 0x1b142cu: goto label_1b142c;
        case 0x1b1430u: goto label_1b1430;
        case 0x1b1434u: goto label_1b1434;
        case 0x1b1438u: goto label_1b1438;
        case 0x1b143cu: goto label_1b143c;
        case 0x1b1440u: goto label_1b1440;
        case 0x1b1444u: goto label_1b1444;
        case 0x1b1448u: goto label_1b1448;
        case 0x1b144cu: goto label_1b144c;
        case 0x1b1450u: goto label_1b1450;
        case 0x1b1454u: goto label_1b1454;
        case 0x1b1458u: goto label_1b1458;
        case 0x1b145cu: goto label_1b145c;
        case 0x1b1460u: goto label_1b1460;
        case 0x1b1464u: goto label_1b1464;
        case 0x1b1468u: goto label_1b1468;
        case 0x1b146cu: goto label_1b146c;
        case 0x1b1470u: goto label_1b1470;
        case 0x1b1474u: goto label_1b1474;
        case 0x1b1478u: goto label_1b1478;
        case 0x1b147cu: goto label_1b147c;
        case 0x1b1480u: goto label_1b1480;
        case 0x1b1484u: goto label_1b1484;
        case 0x1b1488u: goto label_1b1488;
        case 0x1b148cu: goto label_1b148c;
        case 0x1b1490u: goto label_1b1490;
        case 0x1b1494u: goto label_1b1494;
        case 0x1b1498u: goto label_1b1498;
        case 0x1b149cu: goto label_1b149c;
        case 0x1b14a0u: goto label_1b14a0;
        case 0x1b14a4u: goto label_1b14a4;
        case 0x1b14a8u: goto label_1b14a8;
        case 0x1b14acu: goto label_1b14ac;
        case 0x1b14b0u: goto label_1b14b0;
        case 0x1b14b4u: goto label_1b14b4;
        case 0x1b14b8u: goto label_1b14b8;
        case 0x1b14bcu: goto label_1b14bc;
        case 0x1b14c0u: goto label_1b14c0;
        case 0x1b14c4u: goto label_1b14c4;
        case 0x1b14c8u: goto label_1b14c8;
        case 0x1b14ccu: goto label_1b14cc;
        case 0x1b14d0u: goto label_1b14d0;
        case 0x1b14d4u: goto label_1b14d4;
        case 0x1b14d8u: goto label_1b14d8;
        case 0x1b14dcu: goto label_1b14dc;
        case 0x1b14e0u: goto label_1b14e0;
        case 0x1b14e4u: goto label_1b14e4;
        case 0x1b14e8u: goto label_1b14e8;
        case 0x1b14ecu: goto label_1b14ec;
        case 0x1b14f0u: goto label_1b14f0;
        case 0x1b14f4u: goto label_1b14f4;
        case 0x1b14f8u: goto label_1b14f8;
        case 0x1b14fcu: goto label_1b14fc;
        case 0x1b1500u: goto label_1b1500;
        case 0x1b1504u: goto label_1b1504;
        case 0x1b1508u: goto label_1b1508;
        case 0x1b150cu: goto label_1b150c;
        case 0x1b1510u: goto label_1b1510;
        case 0x1b1514u: goto label_1b1514;
        case 0x1b1518u: goto label_1b1518;
        case 0x1b151cu: goto label_1b151c;
        case 0x1b1520u: goto label_1b1520;
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1528u: goto label_1b1528;
        case 0x1b152cu: goto label_1b152c;
        case 0x1b1530u: goto label_1b1530;
        case 0x1b1534u: goto label_1b1534;
        case 0x1b1538u: goto label_1b1538;
        case 0x1b153cu: goto label_1b153c;
        case 0x1b1540u: goto label_1b1540;
        case 0x1b1544u: goto label_1b1544;
        case 0x1b1548u: goto label_1b1548;
        case 0x1b154cu: goto label_1b154c;
        case 0x1b1550u: goto label_1b1550;
        case 0x1b1554u: goto label_1b1554;
        case 0x1b1558u: goto label_1b1558;
        case 0x1b155cu: goto label_1b155c;
        case 0x1b1560u: goto label_1b1560;
        case 0x1b1564u: goto label_1b1564;
        case 0x1b1568u: goto label_1b1568;
        case 0x1b156cu: goto label_1b156c;
        case 0x1b1570u: goto label_1b1570;
        case 0x1b1574u: goto label_1b1574;
        case 0x1b1578u: goto label_1b1578;
        case 0x1b157cu: goto label_1b157c;
        case 0x1b1580u: goto label_1b1580;
        case 0x1b1584u: goto label_1b1584;
        case 0x1b1588u: goto label_1b1588;
        case 0x1b158cu: goto label_1b158c;
        case 0x1b1590u: goto label_1b1590;
        case 0x1b1594u: goto label_1b1594;
        case 0x1b1598u: goto label_1b1598;
        case 0x1b159cu: goto label_1b159c;
        case 0x1b15a0u: goto label_1b15a0;
        case 0x1b15a4u: goto label_1b15a4;
        case 0x1b15a8u: goto label_1b15a8;
        case 0x1b15acu: goto label_1b15ac;
        case 0x1b15b0u: goto label_1b15b0;
        case 0x1b15b4u: goto label_1b15b4;
        case 0x1b15b8u: goto label_1b15b8;
        case 0x1b15bcu: goto label_1b15bc;
        case 0x1b15c0u: goto label_1b15c0;
        case 0x1b15c4u: goto label_1b15c4;
        case 0x1b15c8u: goto label_1b15c8;
        case 0x1b15ccu: goto label_1b15cc;
        case 0x1b15d0u: goto label_1b15d0;
        case 0x1b15d4u: goto label_1b15d4;
        case 0x1b15d8u: goto label_1b15d8;
        case 0x1b15dcu: goto label_1b15dc;
        case 0x1b15e0u: goto label_1b15e0;
        case 0x1b15e4u: goto label_1b15e4;
        case 0x1b15e8u: goto label_1b15e8;
        case 0x1b15ecu: goto label_1b15ec;
        case 0x1b15f0u: goto label_1b15f0;
        case 0x1b15f4u: goto label_1b15f4;
        case 0x1b15f8u: goto label_1b15f8;
        case 0x1b15fcu: goto label_1b15fc;
        case 0x1b1600u: goto label_1b1600;
        case 0x1b1604u: goto label_1b1604;
        case 0x1b1608u: goto label_1b1608;
        case 0x1b160cu: goto label_1b160c;
        case 0x1b1610u: goto label_1b1610;
        case 0x1b1614u: goto label_1b1614;
        case 0x1b1618u: goto label_1b1618;
        case 0x1b161cu: goto label_1b161c;
        case 0x1b1620u: goto label_1b1620;
        case 0x1b1624u: goto label_1b1624;
        case 0x1b1628u: goto label_1b1628;
        case 0x1b162cu: goto label_1b162c;
        case 0x1b1630u: goto label_1b1630;
        case 0x1b1634u: goto label_1b1634;
        case 0x1b1638u: goto label_1b1638;
        case 0x1b163cu: goto label_1b163c;
        case 0x1b1640u: goto label_1b1640;
        case 0x1b1644u: goto label_1b1644;
        case 0x1b1648u: goto label_1b1648;
        case 0x1b164cu: goto label_1b164c;
        case 0x1b1650u: goto label_1b1650;
        case 0x1b1654u: goto label_1b1654;
        case 0x1b1658u: goto label_1b1658;
        case 0x1b165cu: goto label_1b165c;
        case 0x1b1660u: goto label_1b1660;
        case 0x1b1664u: goto label_1b1664;
        case 0x1b1668u: goto label_1b1668;
        case 0x1b166cu: goto label_1b166c;
        case 0x1b1670u: goto label_1b1670;
        case 0x1b1674u: goto label_1b1674;
        case 0x1b1678u: goto label_1b1678;
        case 0x1b167cu: goto label_1b167c;
        case 0x1b1680u: goto label_1b1680;
        case 0x1b1684u: goto label_1b1684;
        case 0x1b1688u: goto label_1b1688;
        case 0x1b168cu: goto label_1b168c;
        case 0x1b1690u: goto label_1b1690;
        case 0x1b1694u: goto label_1b1694;
        case 0x1b1698u: goto label_1b1698;
        case 0x1b169cu: goto label_1b169c;
        case 0x1b16a0u: goto label_1b16a0;
        case 0x1b16a4u: goto label_1b16a4;
        case 0x1b16a8u: goto label_1b16a8;
        case 0x1b16acu: goto label_1b16ac;
        case 0x1b16b0u: goto label_1b16b0;
        case 0x1b16b4u: goto label_1b16b4;
        case 0x1b16b8u: goto label_1b16b8;
        case 0x1b16bcu: goto label_1b16bc;
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b16c4u: goto label_1b16c4;
        case 0x1b16c8u: goto label_1b16c8;
        case 0x1b16ccu: goto label_1b16cc;
        case 0x1b16d0u: goto label_1b16d0;
        case 0x1b16d4u: goto label_1b16d4;
        case 0x1b16d8u: goto label_1b16d8;
        case 0x1b16dcu: goto label_1b16dc;
        case 0x1b16e0u: goto label_1b16e0;
        case 0x1b16e4u: goto label_1b16e4;
        case 0x1b16e8u: goto label_1b16e8;
        case 0x1b16ecu: goto label_1b16ec;
        case 0x1b16f0u: goto label_1b16f0;
        case 0x1b16f4u: goto label_1b16f4;
        case 0x1b16f8u: goto label_1b16f8;
        case 0x1b16fcu: goto label_1b16fc;
        case 0x1b1700u: goto label_1b1700;
        case 0x1b1704u: goto label_1b1704;
        case 0x1b1708u: goto label_1b1708;
        case 0x1b170cu: goto label_1b170c;
        case 0x1b1710u: goto label_1b1710;
        case 0x1b1714u: goto label_1b1714;
        case 0x1b1718u: goto label_1b1718;
        case 0x1b171cu: goto label_1b171c;
        case 0x1b1720u: goto label_1b1720;
        case 0x1b1724u: goto label_1b1724;
        case 0x1b1728u: goto label_1b1728;
        case 0x1b172cu: goto label_1b172c;
        case 0x1b1730u: goto label_1b1730;
        case 0x1b1734u: goto label_1b1734;
        case 0x1b1738u: goto label_1b1738;
        case 0x1b173cu: goto label_1b173c;
        case 0x1b1740u: goto label_1b1740;
        case 0x1b1744u: goto label_1b1744;
        case 0x1b1748u: goto label_1b1748;
        case 0x1b174cu: goto label_1b174c;
        case 0x1b1750u: goto label_1b1750;
        case 0x1b1754u: goto label_1b1754;
        case 0x1b1758u: goto label_1b1758;
        case 0x1b175cu: goto label_1b175c;
        case 0x1b1760u: goto label_1b1760;
        case 0x1b1764u: goto label_1b1764;
        case 0x1b1768u: goto label_1b1768;
        case 0x1b176cu: goto label_1b176c;
        case 0x1b1770u: goto label_1b1770;
        case 0x1b1774u: goto label_1b1774;
        case 0x1b1778u: goto label_1b1778;
        case 0x1b177cu: goto label_1b177c;
        case 0x1b1780u: goto label_1b1780;
        case 0x1b1784u: goto label_1b1784;
        case 0x1b1788u: goto label_1b1788;
        case 0x1b178cu: goto label_1b178c;
        case 0x1b1790u: goto label_1b1790;
        case 0x1b1794u: goto label_1b1794;
        case 0x1b1798u: goto label_1b1798;
        case 0x1b179cu: goto label_1b179c;
        case 0x1b17a0u: goto label_1b17a0;
        case 0x1b17a4u: goto label_1b17a4;
        case 0x1b17a8u: goto label_1b17a8;
        case 0x1b17acu: goto label_1b17ac;
        case 0x1b17b0u: goto label_1b17b0;
        case 0x1b17b4u: goto label_1b17b4;
        case 0x1b17b8u: goto label_1b17b8;
        case 0x1b17bcu: goto label_1b17bc;
        case 0x1b17c0u: goto label_1b17c0;
        case 0x1b17c4u: goto label_1b17c4;
        case 0x1b17c8u: goto label_1b17c8;
        case 0x1b17ccu: goto label_1b17cc;
        case 0x1b17d0u: goto label_1b17d0;
        case 0x1b17d4u: goto label_1b17d4;
        case 0x1b17d8u: goto label_1b17d8;
        case 0x1b17dcu: goto label_1b17dc;
        case 0x1b17e0u: goto label_1b17e0;
        case 0x1b17e4u: goto label_1b17e4;
        case 0x1b17e8u: goto label_1b17e8;
        case 0x1b17ecu: goto label_1b17ec;
        case 0x1b17f0u: goto label_1b17f0;
        case 0x1b17f4u: goto label_1b17f4;
        default: return;
    }

label_1b1028:
    // 0x1b1028: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b102c:
    // 0x1b102c: 0x0  nop
    ctx->pc = 0x1b102cu;
    // NOP
label_1b1030:
    // 0x1b1030: 0x0  nop
    ctx->pc = 0x1b1030u;
    // NOP
label_1b1034:
    // 0x1b1034: 0x0  nop
    ctx->pc = 0x1b1034u;
    // NOP
label_1b1038:
    // 0x1b1038: 0x0  nop
    ctx->pc = 0x1b1038u;
    // NOP
label_1b103c:
    // 0x1b103c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1b1040:
    if (ctx->pc == 0x1B1040u) {
        ctx->pc = 0x1B1044u;
        goto label_1b1044;
    }
    ctx->pc = 0x1B103Cu;
    {
        const bool branch_taken_0x1b103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b103c) {
            ctx->pc = 0x1B1028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1028;
        }
    }
    ctx->pc = 0x1B1044u;
label_1b1044:
    // 0x1b1044: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1b1048:
    // 0x1b1048: 0x26046200  addiu       $a0, $s0, 0x6200
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
label_1b104c:
    // 0x1b104c: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x1b104cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
label_1b1050:
    // 0x1b1050: 0xc069db6  jal         func_1A76D8
label_1b1054:
    if (ctx->pc == 0x1B1054u) {
        ctx->pc = 0x1B1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1050u;
        // 0x1b1054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1058u;
        goto label_1b1058;
    }
    ctx->pc = 0x1B1050u;
    SET_GPR_U32(ctx, 31, 0x1B1058u);
    ctx->pc = 0x1B1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1050u;
    // 0x1b1054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1B1058u;
label_1b1058:
    // 0x1b1058: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_1b105c:
    if (ctx->pc == 0x1B105Cu) {
        ctx->pc = 0x1B105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1058u;
        // 0x1b105c: 0x26126200  addiu       $s2, $s0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1060u;
        goto label_1b1060;
    }
    ctx->pc = 0x1B1058u;
    {
        const bool branch_taken_0x1b1058 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1058u;
        // 0x1b105c: 0x26126200  addiu       $s2, $s0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1058) {
            ctx->pc = 0x1B108Cu;
            goto label_1b108c;
        }
    }
    ctx->pc = 0x1B1060u;
label_1b1060:
    // 0x1b1060: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b1064:
    // 0x1b1064: 0xc069a30  jal         func_1A68C0
label_1b1068:
    if (ctx->pc == 0x1B1068u) {
        ctx->pc = 0x1B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1064u;
        // 0x1b1068: 0x2484ac98  addiu       $a0, $a0, -0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B106Cu;
        goto label_1b106c;
    }
    ctx->pc = 0x1B1064u;
    SET_GPR_U32(ctx, 31, 0x1B106Cu);
    ctx->pc = 0x1B1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1064u;
    // 0x1b1068: 0x2484ac98  addiu       $a0, $a0, -0x5368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B106Cu;
label_1b106c:
    // 0x1b106c: 0x0  nop
    ctx->pc = 0x1b106cu;
    // NOP
label_1b1070:
    // 0x1b1070: 0x0  nop
    ctx->pc = 0x1b1070u;
    // NOP
label_1b1074:
    // 0x1b1074: 0x0  nop
    ctx->pc = 0x1b1074u;
    // NOP
label_1b1078:
    // 0x1b1078: 0x0  nop
    ctx->pc = 0x1b1078u;
    // NOP
label_1b107c:
    // 0x1b107c: 0x0  nop
    ctx->pc = 0x1b107cu;
    // NOP
label_1b1080:
    // 0x1b1080: 0x0  nop
    ctx->pc = 0x1b1080u;
    // NOP
label_1b1084:
    // 0x1b1084: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1b1088:
    if (ctx->pc == 0x1B1088u) {
        ctx->pc = 0x1B108Cu;
        goto label_1b108c;
    }
    ctx->pc = 0x1B1084u;
    {
        const bool branch_taken_0x1b1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1084) {
            ctx->pc = 0x1B1070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1070;
        }
    }
    ctx->pc = 0x1B108Cu;
label_1b108c:
    // 0x1b108c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1b1090:
    // 0x1b1090: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
label_1b1094:
    if (ctx->pc == 0x1B1094u) {
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1098u;
        goto label_1b1098;
    }
    ctx->pc = 0x1B1090u;
    {
        const bool branch_taken_0x1b1090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1090) {
            ctx->pc = 0x1B1020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1b1020; return; }
        }
    }
    ctx->pc = 0x1B1098u;
label_1b1098:
    // 0x1b1098: 0x269177c0  addiu       $s1, $s4, 0x77C0
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 30656));
label_1b109c:
    // 0x1b109c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b109cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b10a0:
    // 0x1b10a0: 0x26c76280  addiu       $a3, $s6, 0x6280
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 25216));
label_1b10a4:
    // 0x1b10a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b10a8:
    // 0x1b10a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b10ac:
    // 0x1b10ac: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_1b10b0:
    // 0x1b10b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b10b4:
    // 0x1b10b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b10b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b10b8:
    // 0x1b10b8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b10bc:
    // 0x1b10bc: 0xc069e2a  jal         func_1A78A8
label_1b10c0:
    if (ctx->pc == 0x1B10C0u) {
        ctx->pc = 0x1B10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10BCu;
        // 0x1b10c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10C4u;
        goto label_1b10c4;
    }
    ctx->pc = 0x1B10BCu;
    SET_GPR_U32(ctx, 31, 0x1B10C4u);
    ctx->pc = 0x1B10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10BCu;
    // 0x1b10c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B10C4u;
label_1b10c4:
    // 0x1b10c4: 0x8ea48d0c  lw          $a0, -0x72F4($s5)
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
label_1b10c8:
    // 0x1b10c8: 0xc069210  jal         func_1A4840
label_1b10cc:
    if (ctx->pc == 0x1B10CCu) {
        ctx->pc = 0x1B10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C8u;
        // 0x1b10cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10D0u;
        goto label_1b10d0;
    }
    ctx->pc = 0x1B10C8u;
    SET_GPR_U32(ctx, 31, 0x1B10D0u);
    ctx->pc = 0x1B10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10C8u;
    // 0x1b10cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B10D0u;
label_1b10d0:
    // 0x1b10d0: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
label_1b10d4:
    if (ctx->pc == 0x1B10D4u) {
        ctx->pc = 0x1B10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D0u;
        // 0x1b10d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10D8u;
        goto label_1b10d8;
    }
    ctx->pc = 0x1B10D0u;
    {
        const bool branch_taken_0x1b10d0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b10d0) {
            ctx->pc = 0x1B10D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10D0u;
            // 0x1b10d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B10E4u;
            goto label_1b10e4;
        }
    }
    ctx->pc = 0x1B10D8u;
label_1b10d8:
    // 0x1b10d8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b10dc:
    // 0x1b10dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b10e0:
    if (ctx->pc == 0x1B10E0u) {
        ctx->pc = 0x1B10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10DCu;
        // 0x1b10e0: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10E4u;
        goto label_1b10e4;
    }
    ctx->pc = 0x1B10DCu;
    {
        const bool branch_taken_0x1b10dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10DCu;
        // 0x1b10e0: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10dc) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B10E4u;
label_1b10e4:
    // 0x1b10e4: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x1b10e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
label_1b10e8:
    // 0x1b10e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b10ec:
    if (ctx->pc == 0x1B10ECu) {
        ctx->pc = 0x1B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E8u;
        // 0x1b10ec: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10F0u;
        goto label_1b10f0;
    }
    ctx->pc = 0x1B10E8u;
    {
        const bool branch_taken_0x1b10e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E8u;
        // 0x1b10ec: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10e8) {
            ctx->pc = 0x1B1104u;
            goto label_1b1104;
        }
    }
    ctx->pc = 0x1B10F0u;
label_1b10f0:
    // 0x1b10f0: 0xc069a30  jal         func_1A68C0
label_1b10f4:
    if (ctx->pc == 0x1B10F4u) {
        ctx->pc = 0x1B10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10F0u;
        // 0x1b10f4: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10F8u;
        goto label_1b10f8;
    }
    ctx->pc = 0x1B10F0u;
    SET_GPR_U32(ctx, 31, 0x1B10F8u);
    ctx->pc = 0x1B10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10F0u;
    // 0x1b10f4: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B10F8u;
label_1b10f8:
    // 0x1b10f8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b10fc:
    // 0x1b10fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b1100:
    if (ctx->pc == 0x1B1100u) {
        ctx->pc = 0x1B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10FCu;
        // 0x1b1100: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1104u;
        goto label_1b1104;
    }
    ctx->pc = 0x1B10FCu;
    {
        const bool branch_taken_0x1b10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10FCu;
        // 0x1b1100: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10fc) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B1104u;
label_1b1104:
    // 0x1b1104: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1b1108:
    // 0x1b1108: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
label_1b110c:
    // 0x1b110c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b1110:
    if (ctx->pc == 0x1B1110u) {
        ctx->pc = 0x1B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B110Cu;
        // 0x1b1110: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1114u;
        goto label_1b1114;
    }
    ctx->pc = 0x1B110Cu;
    {
        const bool branch_taken_0x1b110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B110Cu;
        // 0x1b1110: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b110c) {
            ctx->pc = 0x1B1128u;
            goto label_1b1128;
        }
    }
    ctx->pc = 0x1B1114u;
label_1b1114:
    // 0x1b1114: 0xc069a30  jal         func_1A68C0
label_1b1118:
    if (ctx->pc == 0x1B1118u) {
        ctx->pc = 0x1B1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1114u;
        // 0x1b1118: 0x2484acd8  addiu       $a0, $a0, -0x5328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B111Cu;
        goto label_1b111c;
    }
    ctx->pc = 0x1B1114u;
    SET_GPR_U32(ctx, 31, 0x1B111Cu);
    ctx->pc = 0x1B1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1114u;
    // 0x1b1118: 0x2484acd8  addiu       $a0, $a0, -0x5328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B111Cu;
label_1b111c:
    // 0x1b111c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1b111cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1b1120:
    // 0x1b1120: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1124:
    if (ctx->pc == 0x1B1124u) {
        ctx->pc = 0x1B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1120u;
        // 0x1b1124: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1128u;
        goto label_1b1128;
    }
    ctx->pc = 0x1B1120u;
    {
        const bool branch_taken_0x1b1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1120u;
        // 0x1b1124: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1120) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B1128u;
label_1b1128:
    // 0x1b1128: 0x8e8277c0  lw          $v0, 0x77C0($s4)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30656)));
label_1b112c:
    // 0x1b112c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b1130:
    // 0x1b1130: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1134:
    // 0x1b1134: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1b1134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1138:
    // 0x1b1138: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1b1138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b113c:
    // 0x1b113c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1b113cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1140:
    // 0x1b1140: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1b1140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1144:
    // 0x1b1144: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1b1144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1148:
    // 0x1b1148: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b1148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b114c:
    // 0x1b114c: 0x3e00008  jr          $ra
label_1b1150:
    if (ctx->pc == 0x1B1150u) {
        ctx->pc = 0x1B1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B114Cu;
        // 0x1b1150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1154u;
        goto label_1b1154;
    }
    ctx->pc = 0x1B114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B114Cu;
        // 0x1b1150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1154u;
label_1b1154:
    // 0x1b1154: 0x0  nop
    ctx->pc = 0x1b1154u;
    // NOP
label_1b1158:
    // 0x1b1158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b115c:
    // 0x1b115c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b1160:
    // 0x1b1160: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_1b1164:
    // 0x1b1164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b1168:
    // 0x1b1168: 0x8e048d0c  lw          $a0, -0x72F4($s0)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937868)));
label_1b116c:
    // 0x1b116c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1b1170:
    if (ctx->pc == 0x1B1170u) {
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1174u;
        goto label_1b1174;
    }
    ctx->pc = 0x1B116Cu;
    {
        const bool branch_taken_0x1b116c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b116c) {
            ctx->pc = 0x1B1188u;
            goto label_1b1188;
        }
    }
    ctx->pc = 0x1B1174u;
label_1b1174:
    // 0x1b1174: 0xc06920c  jal         func_1A4830
label_1b1178:
    if (ctx->pc == 0x1B1178u) {
        ctx->pc = 0x1B117Cu;
        goto label_1b117c;
    }
    ctx->pc = 0x1B1174u;
    SET_GPR_U32(ctx, 31, 0x1B117Cu);
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1B117Cu;
label_1b117c:
    // 0x1b117c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1180:
    // 0x1b1180: 0xae038d0c  sw          $v1, -0x72F4($s0)
    ctx->pc = 0x1b1180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937868), GPR_U32(ctx, 3));
label_1b1184:
    // 0x1b1184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1188:
    // 0x1b1188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b118c:
    // 0x1b118c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b118cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1190:
    // 0x1b1190: 0x3e00008  jr          $ra
label_1b1194:
    if (ctx->pc == 0x1B1194u) {
        ctx->pc = 0x1B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1190u;
        // 0x1b1194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1198u;
        goto label_1b1198;
    }
    ctx->pc = 0x1B1190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1190u;
        // 0x1b1194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1198u;
label_1b1198:
    // 0x1b1198: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1b119c:
    // 0x1b119c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b11a0:
    // 0x1b11a0: 0x24c677c0  addiu       $a2, $a2, 0x77C0
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30656));
label_1b11a4:
    // 0x1b11a4: 0x24428d08  addiu       $v0, $v0, -0x72F8
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937864));
label_1b11a8:
    // 0x1b11a8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1b11ac:
    // 0x1b11ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b11acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1b11b0:
    // 0x1b11b0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b11b4:
    // 0x1b11b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b11b8:
    // 0x1b11b8: 0x8c838d0c  lw          $v1, -0x72F4($a0)
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937868)));
label_1b11bc:
    // 0x1b11bc: 0x24426200  addiu       $v0, $v0, 0x6200
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b11c0:
    // 0x1b11c0: 0x3e00008  jr          $ra
label_1b11c4:
    if (ctx->pc == 0x1B11C4u) {
        ctx->pc = 0x1B11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C0u;
        // 0x1b11c4: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11C8u;
        goto label_1b11c8;
    }
    ctx->pc = 0x1B11C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C0u;
        // 0x1b11c4: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B11C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B11C8u;
label_1b11c8:
    // 0x1b11c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b11c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b11cc:
    // 0x1b11cc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b11d0:
    // 0x1b11d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b11d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b11d4:
    // 0x1b11d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b11d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b11d8:
    // 0x1b11d8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b11d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b11dc:
    // 0x1b11dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b11dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b11e0:
    // 0x1b11e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b11e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b11e4:
    // 0x1b11e4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1b11e8:
    // 0x1b11e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b11ec:
    if (ctx->pc == 0x1B11ECu) {
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E8u;
        // 0x1b11ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11F0u;
        goto label_1b11f0;
    }
    ctx->pc = 0x1B11E8u;
    {
        const bool branch_taken_0x1b11e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E8u;
        // 0x1b11ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11e8) {
            ctx->pc = 0x1B11F8u;
            goto label_1b11f8;
        }
    }
    ctx->pc = 0x1B11F0u;
label_1b11f0:
    // 0x1b11f0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b11f4:
    if (ctx->pc == 0x1B11F4u) {
        ctx->pc = 0x1B11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F0u;
        // 0x1b11f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11F8u;
        goto label_1b11f8;
    }
    ctx->pc = 0x1B11F0u;
    {
        const bool branch_taken_0x1b11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F0u;
        // 0x1b11f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11f0) {
            ctx->pc = 0x1B1268u;
            goto label_1b1268;
        }
    }
    ctx->pc = 0x1B11F8u;
label_1b11f8:
    // 0x1b11f8: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b11fc:
    // 0x1b11fc: 0xc06921c  jal         func_1A4870
label_1b1200:
    if (ctx->pc == 0x1B1200u) {
        ctx->pc = 0x1B1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11FCu;
        // 0x1b1200: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1204u;
        goto label_1b1204;
    }
    ctx->pc = 0x1B11FCu;
    SET_GPR_U32(ctx, 31, 0x1B1204u);
    ctx->pc = 0x1B1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11FCu;
    // 0x1b1200: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B1204u;
label_1b1204:
    // 0x1b1204: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b1208:
    if (ctx->pc == 0x1B1208u) {
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B120Cu;
        goto label_1b120c;
    }
    ctx->pc = 0x1B1204u;
    {
        const bool branch_taken_0x1b1204 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1204) {
            ctx->pc = 0x1B1214u;
            goto label_1b1214;
        }
    }
    ctx->pc = 0x1B120Cu;
label_1b120c:
    // 0x1b120c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b1210:
    if (ctx->pc == 0x1B1210u) {
        ctx->pc = 0x1B1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B120Cu;
        // 0x1b1210: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1214u;
        goto label_1b1214;
    }
    ctx->pc = 0x1B120Cu;
    {
        const bool branch_taken_0x1b120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B120Cu;
        // 0x1b1210: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b120c) {
            ctx->pc = 0x1B1268u;
            goto label_1b1268;
        }
    }
    ctx->pc = 0x1B1214u;
label_1b1214:
    // 0x1b1214: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1214u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1218:
    // 0x1b1218: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b121c:
    // 0x1b121c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1220:
    // 0x1b1220: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x1b1220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
label_1b1224:
    // 0x1b1224: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1228:
    // 0x1b1228: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b122c:
    // 0x1b122c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b1230:
    // 0x1b1230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1234:
    // 0x1b1234: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1238:
    // 0x1b1238: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b123c:
    // 0x1b123c: 0xc069e2a  jal         func_1A78A8
label_1b1240:
    if (ctx->pc == 0x1B1240u) {
        ctx->pc = 0x1B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B123Cu;
        // 0x1b1240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1244u;
        goto label_1b1244;
    }
    ctx->pc = 0x1B123Cu;
    SET_GPR_U32(ctx, 31, 0x1B1244u);
    ctx->pc = 0x1B1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B123Cu;
    // 0x1b1240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1244u;
label_1b1244:
    // 0x1b1244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1248:
    // 0x1b1248: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b124c:
    if (ctx->pc == 0x1B124Cu) {
        ctx->pc = 0x1B124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1248u;
        // 0x1b124c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1250u;
        goto label_1b1250;
    }
    ctx->pc = 0x1B1248u;
    {
        const bool branch_taken_0x1b1248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1248u;
        // 0x1b124c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1248) {
            ctx->pc = 0x1B125Cu;
            goto label_1b125c;
        }
    }
    ctx->pc = 0x1B1250u;
label_1b1250:
    // 0x1b1250: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b1254:
    // 0x1b1254: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1258:
    if (ctx->pc == 0x1B1258u) {
        ctx->pc = 0x1B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1254u;
        // 0x1b1258: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B125Cu;
        goto label_1b125c;
    }
    ctx->pc = 0x1B1254u;
    {
        const bool branch_taken_0x1b1254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1254u;
        // 0x1b1258: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1254) {
            ctx->pc = 0x1B1264u;
            goto label_1b1264;
        }
    }
    ctx->pc = 0x1B125Cu;
label_1b125c:
    // 0x1b125c: 0xc069210  jal         func_1A4840
label_1b1260:
    if (ctx->pc == 0x1B1260u) {
        ctx->pc = 0x1B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B125Cu;
        // 0x1b1260: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1264u;
        goto label_1b1264;
    }
    ctx->pc = 0x1B125Cu;
    SET_GPR_U32(ctx, 31, 0x1B1264u);
    ctx->pc = 0x1B1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B125Cu;
    // 0x1b1260: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1268:
    // 0x1b1268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b126c:
    // 0x1b126c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b126cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1270:
    // 0x1b1270: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1274:
    // 0x1b1274: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1278:
    // 0x1b1278: 0x3e00008  jr          $ra
label_1b127c:
    if (ctx->pc == 0x1B127Cu) {
        ctx->pc = 0x1B127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1278u;
        // 0x1b127c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1280u;
        goto label_1b1280;
    }
    ctx->pc = 0x1B1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1278u;
        // 0x1b127c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1280u;
label_1b1280:
    // 0x1b1280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b1284:
    // 0x1b1284: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b1288:
    // 0x1b1288: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b128c:
    // 0x1b128c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1290:
    // 0x1b1290: 0x24726200  addiu       $s2, $v1, 0x6200
    ctx->pc = 0x1b1290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b1294:
    // 0x1b1294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b1298:
    // 0x1b1298: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b129c:
    // 0x1b129c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b12a0:
    // 0x1b12a0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1b12a4:
    // 0x1b12a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b12a8:
    if (ctx->pc == 0x1B12A8u) {
        ctx->pc = 0x1B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A4u;
        // 0x1b12a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12ACu;
        goto label_1b12ac;
    }
    ctx->pc = 0x1B12A4u;
    {
        const bool branch_taken_0x1b12a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A4u;
        // 0x1b12a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12a4) {
            ctx->pc = 0x1B12B4u;
            goto label_1b12b4;
        }
    }
    ctx->pc = 0x1B12ACu;
label_1b12ac:
    // 0x1b12ac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b12b0:
    if (ctx->pc == 0x1B12B0u) {
        ctx->pc = 0x1B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ACu;
        // 0x1b12b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12B4u;
        goto label_1b12b4;
    }
    ctx->pc = 0x1B12ACu;
    {
        const bool branch_taken_0x1b12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ACu;
        // 0x1b12b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12ac) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B12B4u;
label_1b12b4:
    // 0x1b12b4: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_1b12b8:
    // 0x1b12b8: 0xc06921c  jal         func_1A4870
label_1b12bc:
    if (ctx->pc == 0x1B12BCu) {
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C0u;
        goto label_1b12c0;
    }
    ctx->pc = 0x1B12B8u;
    SET_GPR_U32(ctx, 31, 0x1B12C0u);
    ctx->pc = 0x1B12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12B8u;
    // 0x1b12bc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b12c4:
    if (ctx->pc == 0x1B12C4u) {
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C8u;
        goto label_1b12c8;
    }
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B12D0u;
            goto label_1b12d0;
        }
    }
    ctx->pc = 0x1B12C8u;
label_1b12c8:
    // 0x1b12c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b12cc:
    if (ctx->pc == 0x1B12CCu) {
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C8u;
        // 0x1b12cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12D0u;
        goto label_1b12d0;
    }
    ctx->pc = 0x1B12C8u;
    {
        const bool branch_taken_0x1b12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C8u;
        // 0x1b12cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c8) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B12D0u;
label_1b12d0:
    // 0x1b12d0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1b12d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1b12d4:
    // 0x1b12d4: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b12d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b12d8:
    // 0x1b12d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b12dc:
    // 0x1b12dc: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1b12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_1b12e0:
    // 0x1b12e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1b12e4:
    // 0x1b12e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b12e8:
    // 0x1b12e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b12e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b12ec:
    // 0x1b12ec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b12ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b12f0:
    // 0x1b12f0: 0x266977c0  addiu       $t1, $s3, 0x77C0
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
label_1b12f4:
    // 0x1b12f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b12f8:
    // 0x1b12f8: 0xc069e2a  jal         func_1A78A8
label_1b12fc:
    if (ctx->pc == 0x1B12FCu) {
        ctx->pc = 0x1B12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12F8u;
        // 0x1b12fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1300u;
        goto label_1b1300;
    }
    ctx->pc = 0x1B12F8u;
    SET_GPR_U32(ctx, 31, 0x1B1300u);
    ctx->pc = 0x1B12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12F8u;
    // 0x1b12fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1300u;
label_1b1300:
    // 0x1b1300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1304:
    // 0x1b1304: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1b1308:
    if (ctx->pc == 0x1B1308u) {
        ctx->pc = 0x1B130Cu;
        goto label_1b130c;
    }
    ctx->pc = 0x1B1304u;
    {
        const bool branch_taken_0x1b1304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1304) {
            ctx->pc = 0x1B131Cu;
            goto label_1b131c;
        }
    }
    ctx->pc = 0x1B130Cu;
label_1b130c:
    // 0x1b130c: 0xc069210  jal         func_1A4840
label_1b1310:
    if (ctx->pc == 0x1B1310u) {
        ctx->pc = 0x1B1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B130Cu;
        // 0x1b1310: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1314u;
        goto label_1b1314;
    }
    ctx->pc = 0x1B130Cu;
    SET_GPR_U32(ctx, 31, 0x1B1314u);
    ctx->pc = 0x1B1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B130Cu;
    // 0x1b1310: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1314u;
label_1b1314:
    // 0x1b1314: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1318:
    if (ctx->pc == 0x1B1318u) {
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B131Cu;
        goto label_1b131c;
    }
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0xc069210  jal         func_1A4840
label_1b1320:
    if (ctx->pc == 0x1B1320u) {
        ctx->pc = 0x1B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B131Cu;
        // 0x1b1320: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1324u;
        goto label_1b1324;
    }
    ctx->pc = 0x1B131Cu;
    SET_GPR_U32(ctx, 31, 0x1B1324u);
    ctx->pc = 0x1B1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B131Cu;
    // 0x1b1320: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1324u;
label_1b1324:
    // 0x1b1324: 0x8e6277c0  lw          $v0, 0x77C0($s3)
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30656)));
label_1b1328:
    // 0x1b1328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b132c:
    // 0x1b132c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1330:
    // 0x1b1330: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1334:
    // 0x1b1334: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1338:
    // 0x1b1338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b133c:
    // 0x1b133c: 0x3e00008  jr          $ra
label_1b1340:
    if (ctx->pc == 0x1B1340u) {
        ctx->pc = 0x1B1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B133Cu;
        // 0x1b1340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1344u;
        goto label_1b1344;
    }
    ctx->pc = 0x1B133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B133Cu;
        // 0x1b1340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B133Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1344u;
label_1b1344:
    // 0x1b1344: 0x0  nop
    ctx->pc = 0x1b1344u;
    // NOP
label_1b1348:
    // 0x1b1348: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b134c:
    // 0x1b134c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1350:
    // 0x1b1350: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b1354:
    // 0x1b1354: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b1358:
    // 0x1b1358: 0x24566200  addiu       $s6, $v0, 0x6200
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b135c:
    // 0x1b135c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b1360:
    // 0x1b1360: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b1360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1364:
    // 0x1b1364: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b1368:
    // 0x1b1368: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b136c:
    // 0x1b136c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b1370:
    // 0x1b1370: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b1370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b1374:
    // 0x1b1374: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b1378:
    // 0x1b1378: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b137c:
    // 0x1b137c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1380:
    // 0x1b1380: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1b1380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_1b1384:
    // 0x1b1384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1388:
    if (ctx->pc == 0x1B1388u) {
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B138Cu;
        goto label_1b138c;
    }
    ctx->pc = 0x1B1384u;
    {
        const bool branch_taken_0x1b1384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1384) {
            ctx->pc = 0x1B1394u;
            goto label_1b1394;
        }
    }
    ctx->pc = 0x1B138Cu;
label_1b138c:
    // 0x1b138c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1b1390:
    if (ctx->pc == 0x1B1390u) {
        ctx->pc = 0x1B1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B138Cu;
        // 0x1b1390: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1394u;
        goto label_1b1394;
    }
    ctx->pc = 0x1B138Cu;
    {
        const bool branch_taken_0x1b138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B138Cu;
        // 0x1b1390: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b138c) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B1394u;
label_1b1394:
    // 0x1b1394: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b1398:
    // 0x1b1398: 0xc06921c  jal         func_1A4870
label_1b139c:
    if (ctx->pc == 0x1B139Cu) {
        ctx->pc = 0x1B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1398u;
        // 0x1b139c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13A0u;
        goto label_1b13a0;
    }
    ctx->pc = 0x1B1398u;
    SET_GPR_U32(ctx, 31, 0x1B13A0u);
    ctx->pc = 0x1B139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1398u;
    // 0x1b139c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B13A0u;
label_1b13a0:
    // 0x1b13a0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
label_1b13a4:
    if (ctx->pc == 0x1B13A4u) {
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13A8u;
        goto label_1b13a8;
    }
    ctx->pc = 0x1B13A0u;
    {
        const bool branch_taken_0x1b13a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13a0) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B13A8u;
label_1b13a8:
    // 0x1b13a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1b13ac:
    if (ctx->pc == 0x1B13ACu) {
        ctx->pc = 0x1B13B0u;
        goto label_1b13b0;
    }
    ctx->pc = 0x1B13A8u;
    {
        const bool branch_taken_0x1b13a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13a8) {
            ctx->pc = 0x1B13BCu;
            goto label_1b13bc;
        }
    }
    ctx->pc = 0x1B13B0u;
label_1b13b0:
    // 0x1b13b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b13b4:
    // 0x1b13b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b13b8:
    if (ctx->pc == 0x1B13B8u) {
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13BCu;
        goto label_1b13bc;
    }
    ctx->pc = 0x1B13B4u;
    {
        const bool branch_taken_0x1b13b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13b4) {
            ctx->pc = 0x1B13CCu;
            goto label_1b13cc;
        }
    }
    ctx->pc = 0x1B13BCu;
label_1b13bc:
    // 0x1b13bc: 0xc069210  jal         func_1A4840
label_1b13c0:
    if (ctx->pc == 0x1B13C0u) {
        ctx->pc = 0x1B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13BCu;
        // 0x1b13c0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13C4u;
        goto label_1b13c4;
    }
    ctx->pc = 0x1B13BCu;
    SET_GPR_U32(ctx, 31, 0x1B13C4u);
    ctx->pc = 0x1B13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13BCu;
    // 0x1b13c0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B13C4u;
label_1b13c4:
    // 0x1b13c4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b13c8:
    if (ctx->pc == 0x1B13C8u) {
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13CCu;
        goto label_1b13cc;
    }
    ctx->pc = 0x1B13C4u;
    {
        const bool branch_taken_0x1b13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13c4) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B13CCu;
label_1b13cc:
    // 0x1b13cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b13ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b13d0:
    // 0x1b13d0: 0x261062c4  addiu       $s0, $s0, 0x62C4
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25284));
label_1b13d4:
    // 0x1b13d4: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1b13d8:
    // 0x1b13d8: 0xc08f4fe  jal         func_23D3F8
label_1b13dc:
    if (ctx->pc == 0x1B13DCu) {
        ctx->pc = 0x1B13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13D8u;
        // 0x1b13dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13E0u;
        goto label_1b13e0;
    }
    ctx->pc = 0x1B13D8u;
    SET_GPR_U32(ctx, 31, 0x1B13E0u);
    ctx->pc = 0x1B13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13D8u;
    // 0x1b13dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B13E0u;
label_1b13e0:
    // 0x1b13e0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1b13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1b13e4:
    // 0x1b13e4: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x1b13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
label_1b13e8:
    // 0x1b13e8: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1b13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
label_1b13ec:
    // 0x1b13ec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b13f0:
    // 0x1b13f0: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x1b13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_1b13f4:
    // 0x1b13f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b13f8:
    // 0x1b13f8: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1b13f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b13fc:
    // 0x1b13fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b13fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b1400:
    // 0x1b1400: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1404:
    // 0x1b1404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b1408:
    // 0x1b1408: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b140c:
    // 0x1b140c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1410:
    // 0x1b1410: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b1414:
    // 0x1b1414: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1418:
    // 0x1b1418: 0xc069e2a  jal         func_1A78A8
label_1b141c:
    if (ctx->pc == 0x1B141Cu) {
        ctx->pc = 0x1B141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1418u;
        // 0x1b141c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1420u;
        goto label_1b1420;
    }
    ctx->pc = 0x1B1418u;
    SET_GPR_U32(ctx, 31, 0x1B1420u);
    ctx->pc = 0x1B141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1418u;
    // 0x1b141c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1420u;
label_1b1420:
    // 0x1b1420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1424:
    // 0x1b1424: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1428:
    if (ctx->pc == 0x1B1428u) {
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B142Cu;
        goto label_1b142c;
    }
    ctx->pc = 0x1B1424u;
    {
        const bool branch_taken_0x1b1424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1424) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B142Cu;
label_1b142c:
    // 0x1b142c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b1430:
    // 0x1b1430: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1434:
    if (ctx->pc == 0x1B1434u) {
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1430u;
        // 0x1b1434: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1438u;
        goto label_1b1438;
    }
    ctx->pc = 0x1B1430u;
    {
        const bool branch_taken_0x1b1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1430u;
        // 0x1b1434: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1430) {
            ctx->pc = 0x1B1440u;
            goto label_1b1440;
        }
    }
    ctx->pc = 0x1B1438u;
label_1b1438:
    // 0x1b1438: 0xc069210  jal         func_1A4840
label_1b143c:
    if (ctx->pc == 0x1B143Cu) {
        ctx->pc = 0x1B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1438u;
        // 0x1b143c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1440u;
        goto label_1b1440;
    }
    ctx->pc = 0x1B1438u;
    SET_GPR_U32(ctx, 31, 0x1B1440u);
    ctx->pc = 0x1B143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1438u;
    // 0x1b143c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1440u;
label_1b1440:
    // 0x1b1440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1444:
    // 0x1b1444: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b1444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1448:
    // 0x1b1448: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1448u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b144c:
    // 0x1b144c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b144cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1450:
    // 0x1b1450: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1454:
    // 0x1b1454: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1458:
    // 0x1b1458: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b145c:
    // 0x1b145c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b145cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1460:
    // 0x1b1460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1464:
    // 0x1b1464: 0x3e00008  jr          $ra
label_1b1468:
    if (ctx->pc == 0x1B1468u) {
        ctx->pc = 0x1B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1464u;
        // 0x1b1468: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B146Cu;
        goto label_1b146c;
    }
    ctx->pc = 0x1B1464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1464u;
        // 0x1b1468: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B146Cu;
label_1b146c:
    // 0x1b146c: 0x0  nop
    ctx->pc = 0x1b146cu;
    // NOP
label_1b1470:
    // 0x1b1470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b1474:
    // 0x1b1474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b1478:
    // 0x1b1478: 0xc06c4d2  jal         func_1B1348
label_1b147c:
    if (ctx->pc == 0x1B147Cu) {
        ctx->pc = 0x1B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1478u;
        // 0x1b147c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1480u;
        goto label_1b1480;
    }
    ctx->pc = 0x1B1478u;
    SET_GPR_U32(ctx, 31, 0x1B1480u);
    ctx->pc = 0x1B147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1478u;
    // 0x1b147c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1348u;
    goto label_1b1348;
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1484:
    // 0x1b1484: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b1488:
    if (ctx->pc == 0x1B1488u) {
        ctx->pc = 0x1B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1484u;
        // 0x1b1488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B148Cu;
        goto label_1b148c;
    }
    ctx->pc = 0x1B1484u;
    {
        const bool branch_taken_0x1b1484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1484u;
        // 0x1b1488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1484) {
            ctx->pc = 0x1B1498u;
            goto label_1b1498;
        }
    }
    ctx->pc = 0x1B148Cu;
label_1b148c:
    // 0x1b148c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1b1490:
    // 0x1b1490: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1b1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b1494:
    // 0x1b1494: 0xac628d08  sw          $v0, -0x72F8($v1)
    ctx->pc = 0x1b1494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
label_1b1498:
    // 0x1b1498: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b1498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b149c:
    // 0x1b149c: 0x3e00008  jr          $ra
label_1b14a0:
    if (ctx->pc == 0x1B14A0u) {
        ctx->pc = 0x1B14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B149Cu;
        // 0x1b14a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14A4u;
        goto label_1b14a4;
    }
    ctx->pc = 0x1B149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B149Cu;
        // 0x1b14a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B14A4u;
label_1b14a4:
    // 0x1b14a4: 0x0  nop
    ctx->pc = 0x1b14a4u;
    // NOP
label_1b14a8:
    // 0x1b14a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b14ac:
    // 0x1b14ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b14acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b14b0:
    // 0x1b14b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b14b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b14b4:
    // 0x1b14b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b14b8:
    // 0x1b14b8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b14b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b14bc:
    // 0x1b14bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b14c0:
    // 0x1b14c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b14c4:
    // 0x1b14c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1b14c8:
    // 0x1b14c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b14cc:
    if (ctx->pc == 0x1B14CCu) {
        ctx->pc = 0x1B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C8u;
        // 0x1b14cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14D0u;
        goto label_1b14d0;
    }
    ctx->pc = 0x1B14C8u;
    {
        const bool branch_taken_0x1b14c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C8u;
        // 0x1b14cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c8) {
            ctx->pc = 0x1B14D8u;
            goto label_1b14d8;
        }
    }
    ctx->pc = 0x1B14D0u;
label_1b14d0:
    // 0x1b14d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b14d4:
    if (ctx->pc == 0x1B14D4u) {
        ctx->pc = 0x1B14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D0u;
        // 0x1b14d4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14D8u;
        goto label_1b14d8;
    }
    ctx->pc = 0x1B14D0u;
    {
        const bool branch_taken_0x1b14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D0u;
        // 0x1b14d4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14d0) {
            ctx->pc = 0x1B1548u;
            goto label_1b1548;
        }
    }
    ctx->pc = 0x1B14D8u;
label_1b14d8:
    // 0x1b14d8: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b14d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b14dc:
    // 0x1b14dc: 0xc06921c  jal         func_1A4870
label_1b14e0:
    if (ctx->pc == 0x1B14E0u) {
        ctx->pc = 0x1B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14DCu;
        // 0x1b14e0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14E4u;
        goto label_1b14e4;
    }
    ctx->pc = 0x1B14DCu;
    SET_GPR_U32(ctx, 31, 0x1B14E4u);
    ctx->pc = 0x1B14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14DCu;
    // 0x1b14e0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B14E4u;
label_1b14e4:
    // 0x1b14e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b14e8:
    if (ctx->pc == 0x1B14E8u) {
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14ECu;
        goto label_1b14ec;
    }
    ctx->pc = 0x1B14E4u;
    {
        const bool branch_taken_0x1b14e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14e4) {
            ctx->pc = 0x1B14F4u;
            goto label_1b14f4;
        }
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b14f0:
    if (ctx->pc == 0x1B14F0u) {
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14F4u;
        goto label_1b14f4;
    }
    ctx->pc = 0x1B14ECu;
    {
        const bool branch_taken_0x1b14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14ec) {
            ctx->pc = 0x1B1548u;
            goto label_1b1548;
        }
    }
    ctx->pc = 0x1B14F4u;
label_1b14f4:
    // 0x1b14f4: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b14f8:
    // 0x1b14f8: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
label_1b14fc:
    // 0x1b14fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1500:
    // 0x1b1500: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b1504:
    // 0x1b1504: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1508:
    // 0x1b1508: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b150c:
    // 0x1b150c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1510:
    // 0x1b1510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1514:
    // 0x1b1514: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1518:
    // 0x1b1518: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b151c:
    // 0x1b151c: 0xc069e2a  jal         func_1A78A8
label_1b1520:
    if (ctx->pc == 0x1B1520u) {
        ctx->pc = 0x1B1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B151Cu;
        // 0x1b1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1524u;
        goto label_1b1524;
    }
    ctx->pc = 0x1B151Cu;
    SET_GPR_U32(ctx, 31, 0x1B1524u);
    ctx->pc = 0x1B1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B151Cu;
    // 0x1b1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1524u;
label_1b1524:
    // 0x1b1524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1528:
    // 0x1b1528: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b152c:
    if (ctx->pc == 0x1B152Cu) {
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1530u;
        goto label_1b1530;
    }
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B153Cu;
            goto label_1b153c;
        }
    }
    ctx->pc = 0x1B1530u;
label_1b1530:
    // 0x1b1530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1534:
    // 0x1b1534: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1538:
    if (ctx->pc == 0x1B1538u) {
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B153Cu;
        goto label_1b153c;
    }
    ctx->pc = 0x1B1534u;
    {
        const bool branch_taken_0x1b1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1534) {
            ctx->pc = 0x1B1544u;
            goto label_1b1544;
        }
    }
    ctx->pc = 0x1B153Cu;
label_1b153c:
    // 0x1b153c: 0xc069210  jal         func_1A4840
label_1b1540:
    if (ctx->pc == 0x1B1540u) {
        ctx->pc = 0x1B1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B153Cu;
        // 0x1b1540: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1544u;
        goto label_1b1544;
    }
    ctx->pc = 0x1B153Cu;
    SET_GPR_U32(ctx, 31, 0x1B1544u);
    ctx->pc = 0x1B1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B153Cu;
    // 0x1b1540: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1544u;
label_1b1544:
    // 0x1b1544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1548:
    // 0x1b1548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b154c:
    // 0x1b154c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b154cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1550:
    // 0x1b1550: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1554:
    // 0x1b1554: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1558:
    // 0x1b1558: 0x3e00008  jr          $ra
label_1b155c:
    if (ctx->pc == 0x1B155Cu) {
        ctx->pc = 0x1B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1558u;
        // 0x1b155c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1560u;
        goto label_1b1560;
    }
    ctx->pc = 0x1B1558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1558u;
        // 0x1b155c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1560u;
label_1b1560:
    // 0x1b1560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b1564:
    // 0x1b1564: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1568:
    // 0x1b1568: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b156c:
    // 0x1b156c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b1570:
    // 0x1b1570: 0x24536200  addiu       $s3, $v0, 0x6200
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b1574:
    // 0x1b1574: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b1578:
    // 0x1b1578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b157c:
    // 0x1b157c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1580:
    // 0x1b1580: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b1580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b1584:
    // 0x1b1584: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b1588:
    // 0x1b1588: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b158c:
    // 0x1b158c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1590:
    // 0x1b1590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1594:
    if (ctx->pc == 0x1B1594u) {
        ctx->pc = 0x1B1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1590u;
        // 0x1b1594: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1598u;
        goto label_1b1598;
    }
    ctx->pc = 0x1B1590u;
    {
        const bool branch_taken_0x1b1590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1590u;
        // 0x1b1594: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1590) {
            ctx->pc = 0x1B15A0u;
            goto label_1b15a0;
        }
    }
    ctx->pc = 0x1B1598u;
label_1b1598:
    // 0x1b1598: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b159c:
    if (ctx->pc == 0x1B159Cu) {
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15A0u;
        goto label_1b15a0;
    }
    ctx->pc = 0x1B1598u;
    {
        const bool branch_taken_0x1b1598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1598u;
        // 0x1b159c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1598) {
            ctx->pc = 0x1B1618u;
            goto label_1b1618;
        }
    }
    ctx->pc = 0x1B15A0u;
label_1b15a0:
    // 0x1b15a0: 0x3c140029  lui         $s4, 0x29
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)41 << 16));
label_1b15a4:
    // 0x1b15a4: 0xc06921c  jal         func_1A4870
label_1b15a8:
    if (ctx->pc == 0x1B15A8u) {
        ctx->pc = 0x1B15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15A4u;
        // 0x1b15a8: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15ACu;
        goto label_1b15ac;
    }
    ctx->pc = 0x1B15A4u;
    SET_GPR_U32(ctx, 31, 0x1B15ACu);
    ctx->pc = 0x1B15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15A4u;
    // 0x1b15a8: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B15ACu;
label_1b15ac:
    // 0x1b15ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b15b0:
    if (ctx->pc == 0x1B15B0u) {
        ctx->pc = 0x1B15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ACu;
        // 0x1b15b0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15B4u;
        goto label_1b15b4;
    }
    ctx->pc = 0x1B15ACu;
    {
        const bool branch_taken_0x1b15ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ACu;
        // 0x1b15b0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15ac) {
            ctx->pc = 0x1B15BCu;
            goto label_1b15bc;
        }
    }
    ctx->pc = 0x1B15B4u;
label_1b15b4:
    // 0x1b15b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b15b8:
    if (ctx->pc == 0x1B15B8u) {
        ctx->pc = 0x1B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B4u;
        // 0x1b15b8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15BCu;
        goto label_1b15bc;
    }
    ctx->pc = 0x1B15B4u;
    {
        const bool branch_taken_0x1b15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B4u;
        // 0x1b15b8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b4) {
            ctx->pc = 0x1B1618u;
            goto label_1b1618;
        }
    }
    ctx->pc = 0x1B15BCu;
label_1b15bc:
    // 0x1b15bc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b15c0:
    // 0x1b15c0: 0x24476280  addiu       $a3, $v0, 0x6280
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
label_1b15c4:
    // 0x1b15c4: 0xac526280  sw          $s2, 0x6280($v0)
    ctx->pc = 0x1b15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25216), GPR_U32(ctx, 18));
label_1b15c8:
    // 0x1b15c8: 0xacf00010  sw          $s0, 0x10($a3)
    ctx->pc = 0x1b15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 16));
label_1b15cc:
    // 0x1b15cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b15d0:
    // 0x1b15d0: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x1b15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
label_1b15d4:
    // 0x1b15d4: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b15d8:
    // 0x1b15d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b15dc:
    // 0x1b15dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b15e0:
    // 0x1b15e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b15e4:
    // 0x1b15e4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b15e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b15e8:
    // 0x1b15e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b15ec:
    // 0x1b15ec: 0xc069e2a  jal         func_1A78A8
label_1b15f0:
    if (ctx->pc == 0x1B15F0u) {
        ctx->pc = 0x1B15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15ECu;
        // 0x1b15f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B15F4u;
        goto label_1b15f4;
    }
    ctx->pc = 0x1B15ECu;
    SET_GPR_U32(ctx, 31, 0x1B15F4u);
    ctx->pc = 0x1B15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15ECu;
    // 0x1b15f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B15F4u;
label_1b15f4:
    // 0x1b15f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b15f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b15f8:
    // 0x1b15f8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b15fc:
    if (ctx->pc == 0x1B15FCu) {
        ctx->pc = 0x1B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15F8u;
        // 0x1b15fc: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1600u;
        goto label_1b1600;
    }
    ctx->pc = 0x1B15F8u;
    {
        const bool branch_taken_0x1b15f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15F8u;
        // 0x1b15fc: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15f8) {
            ctx->pc = 0x1B160Cu;
            goto label_1b160c;
        }
    }
    ctx->pc = 0x1B1600u;
label_1b1600:
    // 0x1b1600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1604:
    // 0x1b1604: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1608:
    if (ctx->pc == 0x1B1608u) {
        ctx->pc = 0x1B1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1604u;
        // 0x1b1608: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B160Cu;
        goto label_1b160c;
    }
    ctx->pc = 0x1B1604u;
    {
        const bool branch_taken_0x1b1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1604u;
        // 0x1b1608: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1604) {
            ctx->pc = 0x1B1614u;
            goto label_1b1614;
        }
    }
    ctx->pc = 0x1B160Cu;
label_1b160c:
    // 0x1b160c: 0xc069210  jal         func_1A4840
label_1b1610:
    if (ctx->pc == 0x1B1610u) {
        ctx->pc = 0x1B1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B160Cu;
        // 0x1b1610: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1614u;
        goto label_1b1614;
    }
    ctx->pc = 0x1B160Cu;
    SET_GPR_U32(ctx, 31, 0x1B1614u);
    ctx->pc = 0x1B1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B160Cu;
    // 0x1b1610: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1614u;
label_1b1614:
    // 0x1b1614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1618:
    // 0x1b1618: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b1618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b161c:
    // 0x1b161c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b161cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1620:
    // 0x1b1620: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1624:
    // 0x1b1624: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1628:
    // 0x1b1628: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b162c:
    // 0x1b162c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b162cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1630:
    // 0x1b1630: 0x3e00008  jr          $ra
label_1b1634:
    if (ctx->pc == 0x1B1634u) {
        ctx->pc = 0x1B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1630u;
        // 0x1b1634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1638u;
        goto label_1b1638;
    }
    ctx->pc = 0x1B1630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1630u;
        // 0x1b1634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1638u;
label_1b1638:
    // 0x1b1638: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b1638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b163c:
    // 0x1b163c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1b163cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b1640:
    // 0x1b1640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1644:
    // 0x1b1644: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1b1648:
    if (ctx->pc == 0x1B1648u) {
        ctx->pc = 0x1B1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1644u;
        // 0x1b1648: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B164Cu;
        goto label_1b164c;
    }
    ctx->pc = 0x1B1644u;
    {
        const bool branch_taken_0x1b1644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1644) {
            ctx->pc = 0x1B1648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1644u;
            // 0x1b1648: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1684u;
            goto label_1b1684;
        }
    }
    ctx->pc = 0x1B164Cu;
label_1b164c:
    // 0x1b164c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1b164cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b1650:
    // 0x1b1650: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1b1654:
    if (ctx->pc == 0x1B1654u) {
        ctx->pc = 0x1B1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1650u;
        // 0x1b1654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1658u;
        goto label_1b1658;
    }
    ctx->pc = 0x1B1650u;
    {
        const bool branch_taken_0x1b1650 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1650u;
        // 0x1b1654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1650) {
            ctx->pc = 0x1B1680u;
            goto label_1b1680;
        }
    }
    ctx->pc = 0x1B1658u;
label_1b1658:
    // 0x1b1658: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1b1658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1b165c:
    // 0x1b165c: 0x0  nop
    ctx->pc = 0x1b165cu;
    // NOP
label_1b1660:
    // 0x1b1660: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1b1664:
    // 0x1b1664: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1668:
    // 0x1b1668: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b1668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b166c:
    // 0x1b166c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1b166cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b1670:
    // 0x1b1670: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1674:
    // 0x1b1674: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b1674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b1678:
    // 0x1b1678: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b167c:
    if (ctx->pc == 0x1B167Cu) {
        ctx->pc = 0x1B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1678u;
        // 0x1b167c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1680u;
        goto label_1b1680;
    }
    ctx->pc = 0x1B1678u;
    {
        const bool branch_taken_0x1b1678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1678u;
        // 0x1b167c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1678) {
            ctx->pc = 0x1B1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1660;
        }
    }
    ctx->pc = 0x1B1680u;
label_1b1680:
    // 0x1b1680: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1684:
    // 0x1b1684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b1688:
    if (ctx->pc == 0x1B1688u) {
        ctx->pc = 0x1B168Cu;
        goto label_1b168c;
    }
    ctx->pc = 0x1B1684u;
    {
        const bool branch_taken_0x1b1684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1684) {
            ctx->pc = 0x1B16C0u;
            goto label_1b16c0;
        }
    }
    ctx->pc = 0x1B168Cu;
label_1b168c:
    // 0x1b168c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1b168cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b1690:
    // 0x1b1690: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1b1694:
    if (ctx->pc == 0x1B1694u) {
        ctx->pc = 0x1B1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1690u;
        // 0x1b1694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1698u;
        goto label_1b1698;
    }
    ctx->pc = 0x1B1690u;
    {
        const bool branch_taken_0x1b1690 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1690u;
        // 0x1b1694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1690) {
            ctx->pc = 0x1B16C0u;
            goto label_1b16c0;
        }
    }
    ctx->pc = 0x1B1698u;
label_1b1698:
    // 0x1b1698: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x1b1698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_1b169c:
    // 0x1b169c: 0x0  nop
    ctx->pc = 0x1b169cu;
    // NOP
label_1b16a0:
    // 0x1b16a0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1b16a4:
    // 0x1b16a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b16a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b16a8:
    // 0x1b16a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b16a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b16ac:
    // 0x1b16ac: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1b16acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b16b0:
    // 0x1b16b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b16b4:
    // 0x1b16b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b16b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b16b8:
    // 0x1b16b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b16bc:
    if (ctx->pc == 0x1B16BCu) {
        ctx->pc = 0x1B16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B8u;
        // 0x1b16bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B16C0u;
        goto label_1b16c0;
    }
    ctx->pc = 0x1B16B8u;
    {
        const bool branch_taken_0x1b16b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B8u;
        // 0x1b16bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16b8) {
            ctx->pc = 0x1B16A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b16a0;
        }
    }
    ctx->pc = 0x1B16C0u;
label_1b16c0:
    // 0x1b16c0: 0x3e00008  jr          $ra
label_1b16c4:
    if (ctx->pc == 0x1B16C4u) {
        ctx->pc = 0x1B16C8u;
        goto label_1b16c8;
    }
    ctx->pc = 0x1B16C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B16C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B16C8u;
label_1b16c8:
    // 0x1b16c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b16c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b16cc:
    // 0x1b16cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b16d0:
    // 0x1b16d0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b16d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b16d4:
    // 0x1b16d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b16d8:
    // 0x1b16d8: 0x24556200  addiu       $s5, $v0, 0x6200
    ctx->pc = 0x1b16d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b16dc:
    // 0x1b16dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b16dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b16e0:
    // 0x1b16e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b16e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b16e4:
    // 0x1b16e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b16e8:
    // 0x1b16e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b16e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b16ec:
    // 0x1b16ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b16f0:
    // 0x1b16f0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b16f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b16f4:
    // 0x1b16f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b16f8:
    // 0x1b16f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b16fc:
    // 0x1b16fc: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1b16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_1b1700:
    // 0x1b1700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1704:
    if (ctx->pc == 0x1B1704u) {
        ctx->pc = 0x1B1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1700u;
        // 0x1b1704: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1708u;
        goto label_1b1708;
    }
    ctx->pc = 0x1B1700u;
    {
        const bool branch_taken_0x1b1700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1700u;
        // 0x1b1704: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1700) {
            ctx->pc = 0x1B1710u;
            goto label_1b1710;
        }
    }
    ctx->pc = 0x1B1708u;
label_1b1708:
    // 0x1b1708: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1b170c:
    if (ctx->pc == 0x1B170Cu) {
        ctx->pc = 0x1B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1708u;
        // 0x1b170c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1710u;
        goto label_1b1710;
    }
    ctx->pc = 0x1B1708u;
    {
        const bool branch_taken_0x1b1708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1708u;
        // 0x1b170c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1708) {
            ctx->pc = 0x1B17B4u;
            goto label_1b17b4;
        }
    }
    ctx->pc = 0x1B1710u;
label_1b1710:
    // 0x1b1710: 0x3c160029  lui         $s6, 0x29
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41 << 16));
label_1b1714:
    // 0x1b1714: 0xc06921c  jal         func_1A4870
label_1b1718:
    if (ctx->pc == 0x1B1718u) {
        ctx->pc = 0x1B1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1714u;
        // 0x1b1718: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B171Cu;
        goto label_1b171c;
    }
    ctx->pc = 0x1B1714u;
    SET_GPR_U32(ctx, 31, 0x1B171Cu);
    ctx->pc = 0x1B1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1714u;
    // 0x1b1718: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B171Cu;
label_1b171c:
    // 0x1b171c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b1720:
    if (ctx->pc == 0x1B1720u) {
        ctx->pc = 0x1B1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B171Cu;
        // 0x1b1720: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1724u;
        goto label_1b1724;
    }
    ctx->pc = 0x1B171Cu;
    {
        const bool branch_taken_0x1b171c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B171Cu;
        // 0x1b1720: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b171c) {
            ctx->pc = 0x1B172Cu;
            goto label_1b172c;
        }
    }
    ctx->pc = 0x1B1724u;
label_1b1724:
    // 0x1b1724: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b1728:
    if (ctx->pc == 0x1B1728u) {
        ctx->pc = 0x1B1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1724u;
        // 0x1b1728: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B172Cu;
        goto label_1b172c;
    }
    ctx->pc = 0x1B1724u;
    {
        const bool branch_taken_0x1b1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1724u;
        // 0x1b1728: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1724) {
            ctx->pc = 0x1B17B4u;
            goto label_1b17b4;
        }
    }
    ctx->pc = 0x1B172Cu;
label_1b172c:
    // 0x1b172c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b1730:
    // 0x1b1730: 0x26106700  addiu       $s0, $s0, 0x6700
    ctx->pc = 0x1b1730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26368));
label_1b1734:
    // 0x1b1734: 0x24516280  addiu       $s1, $v0, 0x6280
    ctx->pc = 0x1b1734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
label_1b1738:
    // 0x1b1738: 0xac546280  sw          $s4, 0x6280($v0)
    ctx->pc = 0x1b1738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25216), GPR_U32(ctx, 20));
label_1b173c:
    // 0x1b173c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1740:
    // 0x1b1740: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
label_1b1744:
    // 0x1b1744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1748:
    // 0x1b1748: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
label_1b174c:
    // 0x1b174c: 0xc069bee  jal         func_1A6FB8
label_1b1750:
    if (ctx->pc == 0x1B1750u) {
        ctx->pc = 0x1B1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B174Cu;
        // 0x1b1750: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1754u;
        goto label_1b1754;
    }
    ctx->pc = 0x1B174Cu;
    SET_GPR_U32(ctx, 31, 0x1B1754u);
    ctx->pc = 0x1B1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B174Cu;
    // 0x1b1750: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B1754u;
label_1b1754:
    // 0x1b1754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1758:
    // 0x1b1758: 0xc069bee  jal         func_1A6FB8
label_1b175c:
    if (ctx->pc == 0x1B175Cu) {
        ctx->pc = 0x1B175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1758u;
        // 0x1b175c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1760u;
        goto label_1b1760;
    }
    ctx->pc = 0x1B1758u;
    SET_GPR_U32(ctx, 31, 0x1B1760u);
    ctx->pc = 0x1B175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1758u;
    // 0x1b175c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B1760u;
label_1b1760:
    // 0x1b1760: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1764:
    // 0x1b1764: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1764u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
label_1b1768:
    // 0x1b1768: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b1768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1b176c:
    // 0x1b176c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b1770:
    // 0x1b1770: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1774:
    // 0x1b1774: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1778:
    // 0x1b1778: 0x256b1638  addiu       $t3, $t3, 0x1638
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5688));
label_1b177c:
    // 0x1b177c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b1780:
    // 0x1b1780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1784:
    // 0x1b1784: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1788:
    // 0x1b1788: 0xc069e2a  jal         func_1A78A8
label_1b178c:
    if (ctx->pc == 0x1B178Cu) {
        ctx->pc = 0x1B178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1788u;
        // 0x1b178c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1790u;
        goto label_1b1790;
    }
    ctx->pc = 0x1B1788u;
    SET_GPR_U32(ctx, 31, 0x1B1790u);
    ctx->pc = 0x1B178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1788u;
    // 0x1b178c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1790u;
label_1b1790:
    // 0x1b1790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1794:
    // 0x1b1794: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1798:
    if (ctx->pc == 0x1B1798u) {
        ctx->pc = 0x1B1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1794u;
        // 0x1b1798: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B179Cu;
        goto label_1b179c;
    }
    ctx->pc = 0x1B1794u;
    {
        const bool branch_taken_0x1b1794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1794u;
        // 0x1b1798: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1794) {
            ctx->pc = 0x1B17A8u;
            goto label_1b17a8;
        }
    }
    ctx->pc = 0x1B179Cu;
label_1b179c:
    // 0x1b179c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b17a0:
    // 0x1b17a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b17a4:
    if (ctx->pc == 0x1B17A4u) {
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A0u;
        // 0x1b17a4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17A8u;
        goto label_1b17a8;
    }
    ctx->pc = 0x1B17A0u;
    {
        const bool branch_taken_0x1b17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A0u;
        // 0x1b17a4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a0) {
            ctx->pc = 0x1B17B0u;
            goto label_1b17b0;
        }
    }
    ctx->pc = 0x1B17A8u;
label_1b17a8:
    // 0x1b17a8: 0xc069210  jal         func_1A4840
label_1b17ac:
    if (ctx->pc == 0x1B17ACu) {
        ctx->pc = 0x1B17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A8u;
        // 0x1b17ac: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17B0u;
        goto label_1b17b0;
    }
    ctx->pc = 0x1B17A8u;
    SET_GPR_U32(ctx, 31, 0x1B17B0u);
    ctx->pc = 0x1B17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17A8u;
    // 0x1b17ac: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B17B0u;
label_1b17b0:
    // 0x1b17b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b17b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b17b4:
    // 0x1b17b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b17b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b17b8:
    // 0x1b17b8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b17b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b17bc:
    // 0x1b17bc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b17bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b17c0:
    // 0x1b17c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b17c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b17c4:
    // 0x1b17c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b17c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b17c8:
    // 0x1b17c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b17c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b17cc:
    // 0x1b17cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b17ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b17d0:
    // 0x1b17d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b17d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b17d4:
    // 0x1b17d4: 0x3e00008  jr          $ra
label_1b17d8:
    if (ctx->pc == 0x1B17D8u) {
        ctx->pc = 0x1B17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D4u;
        // 0x1b17d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B17DCu;
        goto label_1b17dc;
    }
    ctx->pc = 0x1B17D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17D4u;
        // 0x1b17d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B17D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B17DCu;
label_1b17dc:
    // 0x1b17dc: 0x0  nop
    ctx->pc = 0x1b17dcu;
    // NOP
label_1b17e0:
    // 0x1b17e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b17e4:
    // 0x1b17e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b17e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b17e8:
    // 0x1b17e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b17ec:
    // 0x1b17ec: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b17ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1b17f0:
    // 0x1b17f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b17f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b17f4:
    // 0x1b17f4: 0x26826200  addiu       $v0, $s4, 0x6200
    ctx->pc = 0x1b17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25088));
    ctx->pc = 0x1b17f8u;
    return;
}
